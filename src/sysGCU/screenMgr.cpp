#include "Screen/Game2DMgr.h"
#include "Screen/SceneInfoList.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/DispMember.h"
#include "Game/MoviePlayer.h"
#include "TParticle2dMgr.h"
#include "nans.h"

static const u32 padding[3] = { 0, 0, 0 };

namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void DispMemberCpy(u8*, og::Screen::DispMemberBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
ScreenOwnerID getSceneOwnerName(SceneBase* scene) { return scene->getOwnerID(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
ScreenMemberID getSceneMemberName(SceneBase* scene) { return scene->getMemberID(); }

/*
 * --INFO--
 * Address:	80452300
 * Size:	000054
 */
SceneInfoList::SceneInfoList()
{
	mSceneType = SCENE_DUMMY;
	memset(mDispMemberBuffer, 205, 0x400);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void SceneInfoList::set(long, og::Screen::DispMemberBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
MgrCommand::MgrCommand()
    : CNode("")
{
	mArgType            = CommandType_NULL;
	mScreenArgBufferPtr = nullptr;
	mDispBufferPtr      = nullptr;
	OSInitMutex(&mMutex);
	OSLockMutex(&mMutex);
	OSUnlockMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void MgrCommand::clearArgBuf()
{
	OSLockMutex(&mMutex);
	memset(&mScreenArgBuffer, 205, 64);
	OSUnlockMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void MgrCommand::clearDispMemberBuf()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void MgrCommand::setArg(SceneArgBase* arg)
{
	P2ASSERTLINE(405, arg);
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void MgrCommand::setDispMember(og::Screen::DispMemberBase* disp)
{
	OSLockMutex(&mMutex);

	if (!disp) {
		mDispBufferPtr = nullptr;
	}

	if (disp->getSize() <= 0x400) {
		mDispBufferPtr = (og::Screen::DispMemberBase*)mDispBuffer;
		memcpy(mDispBuffer, disp, disp->getSize());
		mDispBufferPtr->setSubMemberAll();
	} else {
		char temp[64];
		disp->getMemberName(temp);
		JUT_PANICLINE(293, "dispMember[%s] Size over. \n %d max:%d", temp, disp->getSize(), 0x400);
	}

	OSUnlockMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001BC
 */
void MgrCommand::setTypeSetScene(SetSceneArg& arg)
{
	mName    = "SetScene";
	mArgType = CommandType_Set;

	OSLockMutex(&mMutex);

	// should be arg != nullptr?
	if (arg._08) {
		P2ASSERTLINE(258, arg.getClassSize() < 0x40);
		mScreenArgBufferPtr = mScreenArgBuffer;
		memcpy(mScreenArgBufferPtr, &arg, arg.getClassSize());
	}

	OSUnlockMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void MgrCommand::setTypeStartScene(SceneArgBase* arg)
{
	OSLockMutex(&mMutex);
	mName    = "StartScene";
	mArgType = CommandType_Start;
	OSLockMutex(&mMutex);
	if (arg) {
		P2ASSERTLINE(258, arg->getClassSize() <= 0x40);

		mScreenArgBufferPtr = mScreenArgBuffer;
		memcpy(&mScreenArgBuffer, arg, arg->getClassSize());
	} else {
		if (mScreenArgBufferPtr) {
			clearArgBuf();
		}

		mScreenArgBufferPtr = nullptr;
	}

	OSUnlockMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void MgrCommand::setTypeEndScene(SceneArgBase* arg)
{
	OSLockMutex(&mMutex);
	mName    = "EndScene";
	mArgType = CommandType_End;
	OSLockMutex(&mMutex);
	if (arg) {
		P2ASSERTLINE(258, arg->getClassSize() <= 0x40);

		mScreenArgBufferPtr = mScreenArgBuffer;
		memcpy(&mScreenArgBuffer, arg, arg->getClassSize());
	} else {
		if (mScreenArgBufferPtr) {
			clearArgBuf();
		}

		mScreenArgBufferPtr = nullptr;
	}

	OSUnlockMutex(&mMutex);
	OSUnlockMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void MgrCommand::setTypeInvalid()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452354
 * Size:	0001CC
 */
Mgr::Mgr()
    : mBackupScene(nullptr)
    , mController(nullptr)
    , mCurrHeap(nullptr)
{
	mFlags.clear();
	mAvailableCommands.clearRelations();
	mCommandList.clearRelations();
	for (u32 i = 0; i < 10; i++) {
		mCommandList.add(new MgrCommand);
	}
	mBackupInfoList.clearRelations();
	mSceneInfoList.clearRelations();
	SceneInfoList* info = new SceneInfoList[3];
	for (u32 i = 0; i < 3; i++) {
		mSceneInfoList.add(&info[i]);
	}
}

/*
 * --INFO--
 * Address:	80452520
 * Size:	000060
 */
SceneInfoList::~SceneInfoList() { }

/*
 * --INFO--
 * Address:	80452580
 * Size:	000070
 */
void Mgr::init()
{
	if (!mCurrHeap) {
		mCurrHeap = JKRSolidHeap::create(0x880, JKRGetCurrentHeap(), true);
		P2ASSERTLINE(405, mCurrHeap);
	}
}

/*
 * --INFO--
 * Address:	804525F0
 * Size:	0000FC
 */
bool Mgr::reset()
{
	bool ret = false;
	if (isCurrentSceneLoading()) {
		u32 owner = mBackupScene->getOwnerID();
		char buf[12];
		og::Screen::TagToName(owner, buf);
		ScreenMemberID member = mBackupScene->getMemberID();
		char buf2[12];
		og::Screen::TagToName(member, buf2);
		// This is the "lockout skip crash" that can happen randomly when you lockout skip
		JUT_PANICLINE(427, "can\'t reset. owner[%s]  member[%s]\n", buf, buf2);
	} else {
		gResMgr2D->destroyAll();
		mFlags.clear();
		mBackupScene = nullptr;
		while (MgrCommand* command = getCurrentCommand()) {
			releaseCommand(command);
		}
		clearBackupSceneInfo();
		mCurrHeap->freeAll();
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000240
 */
void Mgr::create()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804526EC
 * Size:	0001E8
 */
bool Mgr::startScene(StartSceneArg* arg)
{
	if (mBackupScene && mBackupScene->confirmStartScene(arg)) {
		if (mAvailableCommands.mChild) {
			return true;
		}

		// WTF going on?
		if (mBackupScene && !mBackupScene->start(arg)) {
			return true;
		}

		Screen::MgrCommand* cmd = getNewCommand();
		if (!cmd) {
			return false;
		}

		cmd->setTypeStartScene(arg);
		OSUnlockMutex(&cmd->mMutex);
	} else {
		char ownerStr[12];
		og::Screen::TagToName((u32)mBackupScene->getOwnerID(), ownerStr);

		char memberIdStr[12];
		og::Screen::TagToName(mBackupScene->getMemberID(), memberIdStr);

		JUT_PANICLINE(427, "can\'t startScene.\n owner[%s] member[%s]\n", ownerStr, memberIdStr);
	}

	return false;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_8049B8C8@ha
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	mr       r28, r4
	addi     r30, r5, lbl_8049B8C8@l
	li       r29, 1
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_8045272C
	beq      lbl_8045285C
	bl       confirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045285C

	lbl_8045272C:
	lwz      r0, 0x3c(r27)
	li       r31, 0
	cmplwi   r0, 0
	beq      lbl_80452744
	li       r31, 1
	b        lbl_8045276C

	lbl_80452744:
	lwz      r3, 0x1c(r27)
	cmplwi   r3, 0
	beq      lbl_80452768
	mr       r4, r28
	bl       start__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045276C
	li       r31, 1
	b        lbl_8045276C

	lbl_80452768:
	li       r29, 0

	lbl_8045276C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_804528BC
	mr       r3, r27
	bl       getNewCommand__Q26Screen3MgrFv
	or.      r31, r3, r3
	bne      lbl_8045278C
	li       r29, 0
	b        lbl_804528BC

	lbl_8045278C:
	addi     r3, r31, 0x464
	bl       OSLockMutex
	addi     r3, r30, 0x5c
	li       r0, 1
	stw      r3, 0x14(r31)
	addi     r3, r31, 0x464
	stw      r0, 0x18(r31)
	bl       OSLockMutex
	cmplwi   r28, 0
	beq      lbl_80452814
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x40
	ble      lbl_804527E4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x102
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

	lbl_804527E4:
	addi     r0, r31, 0x20
	mr       r3, r28
	stw      r0, 0x1c(r31)
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r28
	addi     r3, r31, 0x20
	bl       memcpy
	b        lbl_80452848

	lbl_80452814:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	beq      lbl_80452840
	addi     r3, r31, 0x464
	bl       OSLockMutex
	addi     r3, r31, 0x20
	li       r4, 0xcd
	li       r5, 0x40
	bl       memset
	addi     r3, r31, 0x464
	bl       OSUnlockMutex

	lbl_80452840:
	li       r0, 0
	stw      r0, 0x1c(r31)

	lbl_80452848:
	addi     r3, r31, 0x464
	bl       OSUnlockMutex
	addi     r3, r31, 0x464
	bl       OSUnlockMutex
	b        lbl_804528BC

	lbl_8045285C:
	lwz      r3, 0x1c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r5, r1, 0x14
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	lwz      r3, 0x1c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r5, r1, 8
	bl       TagToName__Q22og6ScreenFUxPc
	addi     r3, r30, 0xc
	addi     r5, r30, 0x98
	addi     r6, r1, 0x14
	addi     r7, r1, 8
	li       r4, 0x212
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r29, 0

	lbl_804528BC:
	mr       r3, r29
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	804528D4
 * Size:	00018C
 */
bool Mgr::endScene(Screen::EndSceneArg* arg)
{
	bool ret = true;
	if (mBackupScene && mBackupScene->confirmEndScene(arg)) {

		getNewCommand()->setTypeEndScene(arg);
	} else {
		ret = false;
	}
	return ret;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8049B8C8@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	addi     r30, r5, lbl_8049B8C8@l
	li       r29, 1
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_80452914
	beq      lbl_80452A44
	bl       confirmEndScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80452A44

lbl_80452914:
	lwz      r0, 0x3c(r27)
	li       r31, 0
	cmplwi   r0, 0
	beq      lbl_8045292C
	li       r31, 1
	b        lbl_80452954

lbl_8045292C:
	lwz      r3, 0x1c(r27)
	cmplwi   r3, 0
	beq      lbl_80452950
	mr       r4, r28
	bl       end__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80452954
	li       r31, 1
	b        lbl_80452954

lbl_80452950:
	li       r29, 0

lbl_80452954:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80452A48
	mr       r3, r27
	bl       getNewCommand__Q26Screen3MgrFv
	or.      r31, r3, r3
	bne      lbl_80452974
	li       r29, 0
	b        lbl_80452A48

lbl_80452974:
	addi     r3, r31, 0x464
	bl       OSLockMutex
	addi     r3, r30, 0x68
	li       r0, 2
	stw      r3, 0x14(r31)
	addi     r3, r31, 0x464
	stw      r0, 0x18(r31)
	bl       OSLockMutex
	cmplwi   r28, 0
	beq      lbl_804529FC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x40
	ble      lbl_804529CC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x102
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804529CC:
	addi     r0, r31, 0x20
	mr       r3, r28
	stw      r0, 0x1c(r31)
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r28
	addi     r3, r31, 0x20
	bl       memcpy
	b        lbl_80452A30

lbl_804529FC:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	beq      lbl_80452A28
	addi     r3, r31, 0x464
	bl       OSLockMutex
	addi     r3, r31, 0x20
	li       r4, 0xcd
	li       r5, 0x40
	bl       memset
	addi     r3, r31, 0x464
	bl       OSUnlockMutex

lbl_80452A28:
	li       r0, 0
	stw      r0, 0x1c(r31)

lbl_80452A30:
	addi     r3, r31, 0x464
	bl       OSUnlockMutex
	addi     r3, r31, 0x464
	bl       OSUnlockMutex
	b        lbl_80452A48

lbl_80452A44:
	li       r29, 0

lbl_80452A48:
	mr       r3, r29
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80452A60
 * Size:	000008
 */
MgrCommand* Mgr::getCurrentCommand() { return (MgrCommand*)mAvailableCommands.mChild; }

/*
 * --INFO--
 * Address:	80452A68
 * Size:	0000A8
 */
MgrCommand* Mgr::getNewCommand()
{
	MgrCommand* command = (MgrCommand*)mCommandList.mChild;
	if (!command) {
		JUT_PANICLINE(615, "screen command buffer is empty.\n");
	}

	if (command) {
		OSLockMutex(&command->mMutex);
		command->del();
		mAvailableCommands.add(command);
		OSUnlockMutex(&command->mMutex);
	} else {
		JUT_PANICLINE(626, "【エラー】コマンドバッファが足りません\n"); // "[Error] Not enough command buffer"
	}
	return command;
}

/*
 * --INFO--
 * Address:	80452B10
 * Size:	000058
 */
void Mgr::releaseCommand(MgrCommand* command)
{
	OSLockMutex(&command->mMutex);
	command->del();
	mCommandList.add(command);
	OSUnlockMutex(&command->mMutex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Mgr::updateCurrentScene()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452B68
 * Size:	0002D8
 */
void Mgr::update()
{
	JUT_PANICLINE(999, "Mismatch arg. current scene:%d arg:%d\n"); // temp for rodata
	                                                               /*
	                                                               stwu     r1, -0x20(r1)
	                                                               mflr     r0
	                                                               stw      r0, 0x24(r1)
	                                                               stw      r31, 0x1c(r1)
	                                                               mr       r31, r3
	                                                               lis      r3, lbl_8049B8C8@ha
	                                                               stw      r30, 0x18(r1)
	                                                               stw      r29, 0x14(r1)
	                                                               addi     r29, r3, lbl_8049B8C8@l
	                                                               stw      r28, 0x10(r1)
	                                                               lwz      r4, 0x20(r31)
	                                                               lwz      r28, 0x3c(r31)
	                                                               cmplwi   r4, 0
	                                                               beq      lbl_80452BC0
	                                                               lwz      r0, 0x1c(r4)
	                                                               rlwinm.  r0, r0, 0, 0x13, 0x13
	                                                               beq      lbl_80452BC0
	                                                               mr       r3, r28
	                                                               b        lbl_80452BB8
	                                                           
	                                                           lbl_80452BB4:
	                                                               lwz      r3, 4(r3)
	                                                           
	                                                           lbl_80452BB8:
	                                                               cmplwi   r3, 0
	                                                               bne      lbl_80452BB4
	                                                           
	                                                           lbl_80452BC0:
	                                                               cmplwi   r28, 0
	                                                               beq      lbl_80452E10
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSLockMutex
	                                                               lwz      r0, 0x18(r28)
	                                                               lwz      r3, 0x1c(r31)
	                                                               cmpwi    r0, 1
	                                                               beq      lbl_80452C68
	                                                               bge      lbl_80452BF4
	                                                               cmpwi    r0, -1
	                                                               beq      lbl_80452E08
	                                                               bge      lbl_80452C00
	                                                               b        lbl_80452DF4
	                                                           
	                                                           lbl_80452BF4:
	                                                               cmpwi    r0, 3
	                                                               bge      lbl_80452DF4
	                                                               b        lbl_80452D4C
	                                                           
	                                                           lbl_80452C00:
	                                                               lwz      r29, 0x1c(r28)
	                                                               mr       r3, r31
	                                                               bl       isCurrentSceneLoading__Q26Screen3MgrFv
	                                                               clrlwi.  r0, r3, 0x18
	                                                               bne      lbl_80452E08
	                                                               lbz      r0, 8(r29)
	                                                               cmplwi   r0, 0
	                                                               bne      lbl_80452C30
	                                                               mr       r3, r31
	                                                               bl       isSceneFinish__Q26Screen3MgrFv
	                                                               clrlwi.  r0, r3, 0x18
	                                                               beq      lbl_80452E08
	                                                           
	                                                           lbl_80452C30:
	                                                               lwz      r5, 0x60(r28)
	                                                               mr       r3, r31
	                                                               mr       r4, r29
	                                                               bl       changeScene__Q26Screen3MgrFRQ26Screen11SetSceneArgPUc
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSLockMutex
	                                                               mr       r3, r28
	                                                               bl       del__5CNodeFv
	                                                               mr       r4, r28
	                                                               addi     r3, r31, 0x44
	                                                               bl       add__5CNodeFP5CNode
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSUnlockMutex
	                                                               b        lbl_80452E08
	                                                           
	                                                           lbl_80452C68:
	                                                               cmplwi   r3, 0
	                                                               bne      lbl_80452C84
	                                                               addi     r3, r29, 0xc
	                                                               addi     r5, r29, 0x1c
	                                                               li       r4, 0x2d6
	                                                               crclr    6
	                                                               bl       panic_f__12JUTExceptionFPCciPCce
	                                                           
	                                                           lbl_80452C84:
	                                                               lwz      r3, 0x1c(r28)
	                                                               cmplwi   r3, 0
	                                                               beq      lbl_80452D08
	                                                               lwz      r12, 0(r3)
	                                                               lwz      r12, 8(r12)
	                                                               mtctr    r12
	                                                               bctrl
	                                                               mr       r30, r3
	                                                               lwz      r3, 0x1c(r31)
	                                                               lwz      r12, 0(r3)
	                                                               lwz      r12, 8(r12)
	                                                               mtctr    r12
	                                                               bctrl
	                                                               cmpw     r3, r30
	                                                               beq      lbl_80452D08
	                                                               lwz      r3, 0x1c(r28)
	                                                               lwz      r12, 0(r3)
	                                                               lwz      r12, 8(r12)
	                                                               mtctr    r12
	                                                               bctrl
	                                                               mr       r30, r3
	                                                               lwz      r3, 0x1c(r31)
	                                                               lwz      r12, 0(r3)
	                                                               lwz      r12, 8(r12)
	                                                               mtctr    r12
	                                                               bctrl
	                                                               mr       r6, r3
	                                                               mr       r7, r30
	                                                               addi     r3, r29, 0xc
	                                                               addi     r5, r29, 0x110
	                                                               li       r4, 0x2de
	                                                               crclr    6
	                                                               bl       panic_f__12JUTExceptionFPCciPCce
	                                                           
	                                                           lbl_80452D08:
	                                                               lwz      r3, 0x1c(r31)
	                                                               lwz      r4, 0x1c(r28)
	                                                               bl       start__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	                                                               clrlwi.  r0, r3, 0x18
	                                                               beq      lbl_80452E08
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSLockMutex
	                                                               mr       r3, r28
	                                                               bl       del__5CNodeFv
	                                                               mr       r4, r28
	                                                               addi     r3, r31, 0x44
	                                                               bl       add__5CNodeFP5CNode
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSUnlockMutex
	                                                               lwz      r3, 0x1c(r31)
	                                                               bl       update__Q26Screen9SceneBaseFv
	                                                               b        lbl_80452E08
	                                                           
	                                                           lbl_80452D4C:
	                                                               cmplwi   r3, 0
	                                                               bne      lbl_80452D68
	                                                               addi     r3, r29, 0xc
	                                                               addi     r5, r29, 0x1c
	                                                               li       r4, 0x2f3
	                                                               crclr    6
	                                                               bl       panic_f__12JUTExceptionFPCciPCce
	                                                           
	                                                           lbl_80452D68:
	                                                               lwz      r3, 0x1c(r28)
	                                                               cmplwi   r3, 0
	                                                               beq      lbl_80452DB8
	                                                               lwz      r12, 0(r3)
	                                                               lwz      r12, 8(r12)
	                                                               mtctr    r12
	                                                               bctrl
	                                                               mr       r30, r3
	                                                               lwz      r3, 0x1c(r31)
	                                                               lwz      r12, 0(r3)
	                                                               lwz      r12, 8(r12)
	                                                               mtctr    r12
	                                                               bctrl
	                                                               cmpw     r3, r30
	                                                               beq      lbl_80452DB8
	                                                               addi     r3, r29, 0xc
	                                                               addi     r5, r29, 0x1c
	                                                               li       r4, 0x2f7
	                                                               crclr    6
	                                                               bl       panic_f__12JUTExceptionFPCciPCce
	                                                           
	                                                           lbl_80452DB8:
	                                                               lwz      r3, 0x1c(r31)
	                                                               lwz      r4, 0x1c(r28)
	                                                               bl       end__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	                                                               clrlwi.  r0, r3, 0x18
	                                                               beq      lbl_80452E08
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSLockMutex
	                                                               mr       r3, r28
	                                                               bl       del__5CNodeFv
	                                                               mr       r4, r28
	                                                               addi     r3, r31, 0x44
	                                                               bl       add__5CNodeFP5CNode
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSUnlockMutex
	                                                               b        lbl_80452E08
	                                                           
	                                                           lbl_80452DF4:
	                                                               addi     r3, r29, 0xc
	                                                               addi     r5, r29, 0x1c
	                                                               li       r4, 0x30d
	                                                               crclr    6
	                                                               bl       panic_f__12JUTExceptionFPCciPCce
	                                                           
	                                                           lbl_80452E08:
	                                                               addi     r3, r28, 0x464
	                                                               bl       OSUnlockMutex
	                                                           
	                                                           lbl_80452E10:
	                                                               lwz      r3, 0x1c(r31)
	                                                               cmplwi   r3, 0
	                                                               beq      lbl_80452E20
	                                                               bl       update__Q26Screen9SceneBaseFv
	                                                           
	                                                           lbl_80452E20:
	                                                               lwz      r0, 0x24(r1)
	                                                               lwz      r31, 0x1c(r1)
	                                                               lwz      r30, 0x18(r1)
	                                                               lwz      r29, 0x14(r1)
	                                                               lwz      r28, 0x10(r1)
	                                                               mtlr     r0
	                                                               addi     r1, r1, 0x20
	                                                               blr
	                                                               */
}

/*
 * --INFO--
 * Address:	80452E40
 * Size:	0000B4
 */
void Mgr::draw(Graphics& gfx)
{
	if (Game::moviePlayer && Game::moviePlayer->isFlag(1)) {
		if (!mBackupScene)
			return;
		if (!mBackupScene->isDrawInDemo()) {
			return;
		}
	}

	drawBG(gfx);
	if (mBackupScene) {
		mBackupScene->draw(gfx);
	}

	drawWipe(gfx);
}

/*
 * --INFO--
 * Address:	80452EF8
 * Size:	000008
 */
SceneBase* Mgr::doGetSceneBase(long) { return nullptr; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
SceneBase* Mgr::getSceneBase(long type)
{
	JKRHeap* backupheap = JKRGetCurrentHeap();
	mCurrHeap->becomeCurrentHeap();
	SceneBase* scene = doGetSceneBase(type);
	backupheap->becomeCurrentHeap();
	JUT_ASSERTLINE(843, scene, "シーンの生成に失敗");
	scene->mController = mController;
	return scene;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Mgr::createNewBackupSceneInfo(SceneBase* scene)
{
	P2ASSERTLINE(855, scene);
	SceneInfoList* info = (SceneInfoList*)mSceneInfoList.mChild;
	if (!info) {
		JUT_PANICLINE(872, "can\'t create New SceneInfoList.\n");
	} else {
		info->del();
		og::Screen::DispMemberBase* disp = scene->mDispMember;
		info->mSceneType                 = scene->getSceneType();
		memcpy(info->mDispMemberBuffer, disp, disp->getSize());
		((og::Screen::DispMemberBase*)&info->mDispMemberBuffer)->setSubMemberAll();
	}
	mBackupInfoList.add(info);
}

/*
 * --INFO--
 * Address:	80452F00
 * Size:	000078
 */
void Mgr::clearBackupSceneInfo()
{
	SceneInfoList* info = (SceneInfoList*)mBackupInfoList.mChild;
	while (info) {
		SceneInfoList* next = (SceneInfoList*)info->mNext;
		info->del();
		mSceneInfoList.add(info);
		info = next;
	}
	mBackupInfoList.clearRelations();
}

/*
 * --INFO--
 * Address:	80452F78
 * Size:	00024C
 */
void Mgr::changeScene(SetSceneArg& arg, u8* dispBuf)
{
	SceneType type = arg.getSceneType();
	if (particle2dMgr) {
		particle2dMgr->killGroup(0);
		particle2dMgr->killGroup(1);
	}

	SceneBase* scene = mBackupScene;
	if (scene) {
		if (arg.mDoCreateBackup) {
			createNewBackupSceneInfo(scene);
		}
		mBackupScene->destroy();
		mCurrHeap->freeAll();
	}

	mHeapSize    = JKRGetCurrentHeap()->getTotalFreeSize();
	m2DHeapSize  = gResMgr2D->mHeap->mHeapSize;
	mBackupScene = getSceneBase(type);

	if (mBackupScene) {
		if (arg.mDispMember) {
			copyDispMember((u8*)mBackupScene->mDispMember, dispBuf);
		}
		mBackupScene->mScreenMgr  = this;
		mBackupScene->mController = mController;
		mBackupScene->create();
		if (!mBackupScene->isUseBackupSceneInfo()) {
			clearBackupSceneInfo();
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r4
	lis      r4, lbl_8049B8C8@ha
	mr       r29, r3
	mr       r3, r30
	mr       r31, r5
	addi     r27, r4, lbl_8049B8C8@l
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, particle2dMgr@sda21(r13)
	mr       r25, r3
	cmplwi   r0, 0
	beq      lbl_80452FD8
	mr       r3, r0
	li       r4, 0
	bl       killGroup__14TParticle2dMgrFUc
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 1
	bl       killGroup__14TParticle2dMgrFUc

lbl_80452FD8:
	lwz      r26, 0x1c(r29)
	cmplwi   r26, 0
	beq      lbl_8045309C
	lbz      r0, 9(r30)
	cmplwi   r0, 0
	beq      lbl_8045308C
	cmplwi   r26, 0
	bne      lbl_8045300C
	addi     r3, r27, 0xc
	addi     r5, r27, 0x1c
	li       r4, 0x357
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045300C:
	lwz      r28, 0x88(r29)
	cmplwi   r28, 0
	bne      lbl_80453030
	addi     r3, r27, 0xc
	addi     r5, r27, 0x14c
	li       r4, 0x368
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80453080

lbl_80453030:
	mr       r3, r28
	bl       del__5CNodeFv
	mr       r3, r26
	lwz      r26, 0x21c(r26)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r28)
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r26
	addi     r3, r28, 0x1c
	bl       memcpy
	addi     r3, r28, 0x1c
	bl       setSubMemberAll__Q32og6Screen14DispMemberBaseFv

lbl_80453080:
	mr       r4, r28
	addi     r3, r29, 0x60
	bl       addHead__5CNodeFP5CNode

lbl_8045308C:
	lwz      r3, 0x1c(r29)
	bl       destroy__Q26Screen9SceneBaseFv
	lwz      r3, 0x5c(r29)
	bl       freeAll__7JKRHeapFv

lbl_8045309C:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	stw      r3, 0x24(r29)
	lwz      r3, gResMgr2D@sda21(r13)
	lwz      r3, 4(r3)
	lwz      r0, 0x38(r3)
	stw      r0, 0x28(r29)
	lwz      r26, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0x5c(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	mr       r3, r29
	mr       r4, r25
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	mr       r3, r26
	bl       becomeCurrentHeap__7JKRHeapFv
	cmplwi   r28, 0
	bne      lbl_80453104
	addi     r3, r27, 0xc
	addi     r5, r27, 0x138
	li       r4, 0x34b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453104:
	lwz      r0, 0x20(r29)
	stw      r0, 0x104(r28)
	stw      r28, 0x1c(r29)
	lwz      r3, 0x1c(r29)
	cmplwi   r3, 0
	beq      lbl_804531B0
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	beq      lbl_80453138
	lwz      r4, 0x21c(r3)
	mr       r3, r29
	mr       r5, r31
	bl       copyDispMember__Q26Screen3MgrFPUcPUc

lbl_80453138:
	lwz      r3, 0x1c(r29)
	stw      r29, 0x108(r3)
	lwz      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	stw      r0, 0x104(r3)
	lwz      r3, 0x1c(r29)
	bl       create__Q26Screen9SceneBaseFv
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_804531B0
	lwz      r28, 0x70(r29)
	b        lbl_80453194

lbl_80453178:
	lwz      r27, 4(r28)
	mr       r3, r28
	bl       del__5CNodeFv
	mr       r4, r28
	addi     r3, r29, 0x78
	bl       add__5CNodeFP5CNode
	mr       r28, r27

lbl_80453194:
	cmplwi   r28, 0
	bne      lbl_80453178
	li       r0, 0
	stw      r0, 0x70(r29)
	stw      r0, 0x6c(r29)
	stw      r0, 0x68(r29)
	stw      r0, 0x64(r29)

lbl_804531B0:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804531C4
 * Size:	000598
 */
bool Mgr::setScene(SetSceneArg& arg)
{
	if (arg._08 == 0) {
		if (mBackupScene && !mBackupScene->confirmSetScene(arg)) {
			return false;
		}
	}

	Screen::MgrCommand* command = (Screen::MgrCommand*)mCommandList.mChild;
	JUT_ASSERTLINE(615, command != nullptr, "screen command buffer is empty.\n");

	if (!command) {
		JUT_PANICLINE(626, "【エラー】コマンドバッファが足りません\n");
		return false;
	}

	OSLockMutex(&command->mMutex);
	command->del();
	mCommandList.add(command);
	OSUnlockMutex(&command->mMutex);

	if (!command) {
		return false;
	}

	OSLockMutex(&command->mMutex);
	if (arg._08) {
		if (isCurrentSceneLoading()) {
			command->setTypeSetScene(arg);
		}
	}

	OSUnlockMutex(&command->mMutex);
	return true;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_8049B8C8@ha
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r27, r4
	mr       r26, r3
	addi     r31, r5, lbl_8049B8C8@l
	li       r28, 1
	lbz      r0, 8(r4)
	cmplwi   r0, 0
	bne      lbl_80453210
	lwz      r3, 0x1c(r26)
	cmplwi   r3, 0
	beq      lbl_80453210
	beq      lbl_80453740
	bl       confirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453740

lbl_80453210:
	lwz      r30, 0x54(r26)
	cmplwi   r30, 0
	bne      lbl_80453230
	addi     r3, r31, 0xc
	addi     r5, r31, 0xc4
	li       r4, 0x267
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453230:
	cmplwi   r30, 0
	beq      lbl_80453260
	addi     r3, r30, 0x464
	bl       OSLockMutex
	mr       r3, r30
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r26, 0x2c
	bl       add__5CNodeFP5CNode
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	b        lbl_80453274

lbl_80453260:
	addi     r3, r31, 0xc
	addi     r5, r31, 0xe8
	li       r4, 0x272
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453274:
	cmplwi   r30, 0
	bne      lbl_80453284
	li       r28, 0
	b        lbl_80453734

lbl_80453284:
	addi     r3, r30, 0x464
	bl       OSLockMutex
	lbz      r0, 8(r27)
	cmplwi   r0, 0
	beq      lbl_8045346C
	mr       r3, r26
	bl       isCurrentSceneLoading__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453424
	addi     r3, r31, 0x50
	li       r0, 0
	stw      r3, 0x14(r30)
	addi     r3, r30, 0x464
	stw      r0, 0x18(r30)
	bl       OSLockMutex
	cmplwi   r27, 0
	beq      lbl_80453328
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x40
	ble      lbl_804532F8
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x102
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804532F8:
	addi     r0, r30, 0x20
	mr       r3, r27
	stw      r0, 0x1c(r30)
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r27
	addi     r3, r30, 0x20
	bl       memcpy
	b        lbl_8045335C

lbl_80453328:
	lwz      r0, 0x1c(r30)
	cmplwi   r0, 0
	beq      lbl_80453354
	addi     r3, r30, 0x464
	bl       OSLockMutex
	addi     r3, r30, 0x20
	li       r4, 0xcd
	li       r5, 0x40
	bl       memset
	addi     r3, r30, 0x464
	bl       OSUnlockMutex

lbl_80453354:
	li       r0, 0
	stw      r0, 0x1c(r30)

lbl_8045335C:
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	lwz      r27, 0xc(r27)
	addi     r3, r30, 0x464
	bl       OSLockMutex
	cmplwi   r27, 0
	beq      lbl_80453410
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x400
	bgt      lbl_804533CC
	addi     r0, r30, 0x64
	mr       r3, r27
	stw      r0, 0x60(r30)
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r27
	addi     r3, r30, 0x64
	bl       memcpy
	lwz      r3, 0x60(r30)
	bl       setSubMemberAll__Q32og6Screen14DispMemberBaseFv
	b        lbl_80453418

lbl_804533CC:
	mr       r3, r27
	addi     r4, r1, 0x14
	bl       getMemberName__Q32og6Screen14DispMemberBaseFPc
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	addi     r3, r31, 0xc
	addi     r5, r31, 0x28
	addi     r6, r1, 0x14
	li       r4, 0x125
	li       r8, 0x400
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80453418

lbl_80453410:
	li       r0, 0
	stw      r0, 0x60(r30)

lbl_80453418:
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	b        lbl_80453734

lbl_80453424:
	addi     r3, r30, 0x464
	bl       OSLockMutex
	mr       r3, r30
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r26, 0x44
	bl       add__5CNodeFP5CNode
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	lwz      r3, 0xc(r27)
	cmplwi   r3, 0
	beq      lbl_80453458
	bl       setSubMemberAll__Q32og6Screen14DispMemberBaseFv

lbl_80453458:
	lwz      r5, 0xc(r27)
	mr       r3, r26
	mr       r4, r27
	bl       changeScene__Q26Screen3MgrFRQ26Screen11SetSceneArgPUc
	b        lbl_80453734

lbl_8045346C:
	lwz      r0, 0x1c(r26)
	cmplwi   r0, 0
	beq      lbl_804536F0
	lwz      r29, 0x54(r26)
	cmplwi   r29, 0
	bne      lbl_80453498
	addi     r3, r31, 0xc
	addi     r5, r31, 0xc4
	li       r4, 0x267
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453498:
	cmplwi   r29, 0
	beq      lbl_804534C8
	addi     r3, r29, 0x464
	bl       OSLockMutex
	mr       r3, r29
	bl       del__5CNodeFv
	mr       r4, r29
	addi     r3, r26, 0x2c
	bl       add__5CNodeFP5CNode
	addi     r3, r29, 0x464
	bl       OSUnlockMutex
	b        lbl_804534DC

lbl_804534C8:
	addi     r3, r31, 0xc
	addi     r5, r31, 0xe8
	li       r4, 0x272
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804534DC:
	cmplwi   r29, 0
	beq      lbl_804536C4
	addi     r3, r30, 0x464
	bl       OSLockMutex
	addi     r3, r31, 0x68
	li       r0, 2
	stw      r3, 0x14(r30)
	addi     r3, r30, 0x464
	stw      r0, 0x18(r30)
	bl       OSLockMutex
	lwz      r0, 0x1c(r30)
	cmplwi   r0, 0
	beq      lbl_80453530
	addi     r3, r30, 0x464
	bl       OSLockMutex
	addi     r3, r30, 0x20
	li       r4, 0xcd
	li       r5, 0x40
	bl       memset
	addi     r3, r30, 0x464
	bl       OSUnlockMutex

lbl_80453530:
	li       r0, 0
	addi     r3, r30, 0x464
	stw      r0, 0x1c(r30)
	bl       OSUnlockMutex
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	addi     r3, r31, 0x50
	li       r0, 0
	stw      r3, 0x14(r29)
	addi     r3, r29, 0x464
	stw      r0, 0x18(r29)
	bl       OSLockMutex
	cmplwi   r27, 0
	beq      lbl_804535C8
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x40
	ble      lbl_80453598
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x102
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453598:
	addi     r0, r29, 0x20
	mr       r3, r27
	stw      r0, 0x1c(r29)
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r27
	addi     r3, r29, 0x20
	bl       memcpy
	b        lbl_804535FC

lbl_804535C8:
	lwz      r0, 0x1c(r29)
	cmplwi   r0, 0
	beq      lbl_804535F4
	addi     r3, r29, 0x464
	bl       OSLockMutex
	addi     r3, r29, 0x20
	li       r4, 0xcd
	li       r5, 0x40
	bl       memset
	addi     r3, r29, 0x464
	bl       OSUnlockMutex

lbl_804535F4:
	li       r0, 0
	stw      r0, 0x1c(r29)

lbl_804535FC:
	addi     r3, r29, 0x464
	bl       OSUnlockMutex
	lwz      r27, 0xc(r27)
	addi     r3, r29, 0x464
	bl       OSLockMutex
	cmplwi   r27, 0
	beq      lbl_804536B0
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x400
	bgt      lbl_8045366C
	addi     r0, r29, 0x64
	mr       r3, r27
	stw      r0, 0x60(r29)
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r27
	addi     r3, r29, 0x64
	bl       memcpy
	lwz      r3, 0x60(r29)
	bl       setSubMemberAll__Q32og6Screen14DispMemberBaseFv
	b        lbl_804536B8

lbl_8045366C:
	mr       r3, r27
	addi     r4, r1, 8
	bl       getMemberName__Q32og6Screen14DispMemberBaseFPc
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	addi     r3, r31, 0xc
	addi     r5, r31, 0x28
	addi     r6, r1, 8
	li       r4, 0x125
	li       r8, 0x400
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_804536B8

lbl_804536B0:
	li       r0, 0
	stw      r0, 0x60(r29)

lbl_804536B8:
	addi     r3, r29, 0x464
	bl       OSUnlockMutex
	b        lbl_80453734

lbl_804536C4:
	addi     r3, r30, 0x464
	bl       OSLockMutex
	mr       r3, r30
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r26, 0x44
	bl       add__5CNodeFP5CNode
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	li       r28, 0
	b        lbl_80453734

lbl_804536F0:
	addi     r3, r30, 0x464
	bl       OSLockMutex
	mr       r3, r30
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r26, 0x44
	bl       add__5CNodeFP5CNode
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	lwz      r3, 0xc(r27)
	cmplwi   r3, 0
	beq      lbl_80453724
	bl       setSubMemberAll__Q32og6Screen14DispMemberBaseFv

lbl_80453724:
	lwz      r5, 0xc(r27)
	mr       r3, r26
	mr       r4, r27
	bl       changeScene__Q26Screen3MgrFRQ26Screen11SetSceneArgPUc

lbl_80453734:
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	b        lbl_80453744

lbl_80453740:
	li       r28, 0

lbl_80453744:
	mr       r3, r28
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8045375C
 * Size:	000024
 */
bool Mgr::isCurrentSceneLoading() { return mBackupScene && mBackupScene->mStateID == 1; }

/*
 * --INFO--
 * Address:	80453780
 * Size:	000160
 */
void Mgr::copyDispMember(u8* destAddress, u8* sourceAddress)
{
	og::Screen::DispMemberBase* destMember = reinterpret_cast<og::Screen::DispMemberBase*>(destAddress);
	og::Screen::DispMemberBase* srcMember  = reinterpret_cast<og::Screen::DispMemberBase*>(sourceAddress);

	ScreenOwnerID backupOwnerID   = mBackupScene->getOwnerID();
	ScreenMemberID backupMemberID = mBackupScene->getMemberID();

	if (srcMember->isID(backupOwnerID, backupMemberID) || srcMember->getSubMember(backupOwnerID, backupMemberID)) {
		memcpy(destAddress, sourceAddress, srcMember->getSize());
		destMember->setSubMemberAll();
		return;
	}

	char ownerStr[12];
	char memberStr[12];

	char srcOwnerStr[12];
	char srcMemberStr[12];

	og::Screen::TagToName((u64)srcMember->getOwnerID(), srcOwnerStr);
	og::Screen::TagToName((u64)srcMember->getMemberID(), srcMemberStr);

	og::Screen::TagToName((u32)backupOwnerID, ownerStr);
	og::Screen::TagToName(backupMemberID, memberStr);

	JUT_PANICLINE(1098, "to   [%s] [%s]\nfrom [%s] [%s]\n", ownerStr, memberStr, srcOwnerStr, srcMemberStr);
}

/*
 * --INFO--
 * Address:	804538E0
 * Size:	000034
 */
bool Mgr::setDispMember(og::Screen::DispMemberBase* disp)
{
	if (mBackupScene) {
		return mBackupScene->setDispMember(disp);
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80453914
 * Size:	00001C
 */
og::Screen::DispMemberBase* Mgr::getDispMember()
{
	if (mBackupScene) {
		return mBackupScene->mDispMember;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80453930
 * Size:	000040
 */
SceneType Mgr::getSceneType()
{
	if (mBackupScene) {
		return mBackupScene->getSceneType();
	}

	return SCENE_DUMMY;
}

/*
 * --INFO--
 * Address:	80453970
 * Size:	000028
 */
bool Mgr::isSceneFinish()
{
	if (mBackupScene) {
		return mBackupScene->mStateID == 4;
	}

	return true;
}

/*
 * --INFO--
 * Address:	80453998
 * Size:	000038
 */
int Mgr::getSceneFinishState()
{
	int ret = SceneBase::SB_Finished1;

	if (mBackupScene) {
		ret = mBackupScene->getFinishState();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	804539D0
 * Size:	00001C
 */
void Mgr::setGamePad(Controller* control)
{
	mController = control;
	if (mBackupScene) {
		mBackupScene->mController = mController;
	}
}

/*
 * --INFO--
 * Address:	804539EC
 * Size:	000034
 */
bool Mgr::setBackupScene()
{
	if (mBackupScene) {
		return mBackupScene->setBackupScene();
	}

	return false;
}

/*
 * --INFO--
 * Address:	80453A20
 * Size:	000038
 */
bool Mgr::isAnyReservation() const
{
	FOREACH_NODE(MgrCommand, mAvailableCommands.mChild, cmd)
	{
		if (cmd->mArgType == MgrCommand::CommandType_Set || cmd->mArgType == MgrCommand::CommandType_Start) {
			return true;
		}
	}

	return false;
}

} // namespace Screen
