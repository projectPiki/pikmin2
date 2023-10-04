#include "Screen/Game2DMgr.h"
#include "Screen/SceneInfoList.h"
#include "og/Screen/ogScreen.h"
#include "Game/MoviePlayer.h"
#include "nans.h"

static const u32 padding[3] = { 0, 0, 0 };

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_screenMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049B8C8
    lbl_8049B8C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8049B8D4
    lbl_8049B8D4:
        .4byte 0x73637265
        .4byte 0x656E4D67
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8049B8E4
    lbl_8049B8E4:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x64697370
        .4byte 0x4D656D62
        .4byte 0x65725B25
        .4byte 0x735D2053
        .4byte 0x697A6520
        .4byte 0x6F766572
        .4byte 0x2E200A20
        .4byte 0x2564206D
        .4byte 0x61783A25
        .4byte 0x64000000
        .4byte 0x53657453
        .4byte 0x63656E65
        .4byte 0x00000000
        .4byte 0x53746172
        .4byte 0x74536365
        .4byte 0x6E650000
        .4byte 0x456E6453
        .4byte 0x63656E65
        .4byte 0x00000000
    .global lbl_8049B93C
    lbl_8049B93C:
        .4byte 0x63616E27
        .4byte 0x74207265
        .4byte 0x7365742E
        .4byte 0x206F776E
        .4byte 0x65725B25
        .4byte 0x735D2020
        .4byte 0x6D656D62
        .4byte 0x65725B25
        .4byte 0x735D0A00
        .4byte 0x63616E27
        .4byte 0x74207374
        .4byte 0x61727453
        .4byte 0x63656E65
        .4byte 0x2E0A206F
        .4byte 0x776E6572
        .4byte 0x5B25735D
        .4byte 0x206D656D
        .4byte 0x6265725B
        .4byte 0x25735D0A
        .4byte 0x00000000
        .4byte 0x73637265
        .4byte 0x656E2063
        .4byte 0x6F6D6D61
        .4byte 0x6E642062
        .4byte 0x75666665
        .4byte 0x72206973
        .4byte 0x20656D70
        .4byte 0x74792E0A
        .4byte 0x00000000
        .4byte 0x81798347
        .4byte 0x8389815B
        .4byte 0x817A8352
        .4byte 0x837D8393
        .4byte 0x8368836F
        .4byte 0x83628374
        .4byte 0x834082AA
        .4byte 0x91AB82E8
        .4byte 0x82DC82B9
        .4byte 0x82F10A00
        .4byte 0x4D69736D
        .4byte 0x61746368
        .4byte 0x20617267
        .4byte 0x2E206375
        .4byte 0x7272656E
        .4byte 0x74207363
        .4byte 0x656E653A
        .4byte 0x25642061
        .4byte 0x72673A25
        .4byte 0x640A0000
        .4byte 0x8356815B
        .4byte 0x839382CC
        .4byte 0x90B690AC
        .4byte 0x82C98EB8
        .4byte 0x94730000
        .4byte 0x63616E27
        .4byte 0x74206372
        .4byte 0x65617465
        .4byte 0x204E6577
        .4byte 0x20536365
        .4byte 0x6E65496E
        .4byte 0x666F4C69
        .4byte 0x73742E0A
        .4byte 0x00000000
    .global lbl_8049BA38
    lbl_8049BA38:
        .4byte 0x746F2020
        .4byte 0x205B2573
        .4byte 0x5D205B25
        .4byte 0x735D0A66
        .4byte 0x726F6D20
        .4byte 0x5B25735D
        .4byte 0x205B2573
        .4byte 0x5D0A0000

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global lbl_804ED6F8
    lbl_804ED6F8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q26Screen3Mgr
    __vt__Q26Screen3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26Screen3MgrFv
        .4byte setScene__Q26Screen3MgrFRQ26Screen11SetSceneArg
        .4byte startScene__Q26Screen3MgrFPQ26Screen13StartSceneArg
        .4byte endScene__Q26Screen3MgrFPQ26Screen11EndSceneArg
        .4byte reset__Q26Screen3MgrFv
        .4byte setColorBG__Q26Screen3MgrFRQ28JUtility6TColor
        .4byte setBGMode__Q26Screen3MgrFi
        .4byte doGetSceneBase__Q26Screen3MgrFl
        .4byte drawBG__Q26Screen3MgrFR8Graphics
        .4byte drawWipe__Q26Screen3MgrFR8Graphics
    .global __vt__Q26Screen10MgrCommand
    __vt__Q26Screen10MgrCommand:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26Screen10MgrCommandFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q26Screen13SceneInfoList
    __vt__Q26Screen13SceneInfoList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26Screen13SceneInfoListFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805162E0
    lbl_805162E0:
        .skip 0x4
    .global lbl_805162E4
    lbl_805162E4:
        .skip 0x4
    .global sScreenMgr__Q26Screen3Mgr
    sScreenMgr__Q26Screen3Mgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520B80
    lbl_80520B80:
        .4byte 0x00000000
        .4byte 0x00000000
*/

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
void getSceneOwnerName(SceneBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void getSceneMemberName(SceneBase*)
{
	// UNUSED FUNCTION
}

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
	_18     = -1;
	_1C     = 0;
	_20[16] = 0; // no idea
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
	// UNUSED FUNCTION
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
void MgrCommand::setArg(SceneArgBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void MgrCommand::setDispMember(og::Screen::DispMemberBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001BC
 */
void MgrCommand::setTypeSetScene(SetSceneArg&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void MgrCommand::setTypeStartScene(SceneArgBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void MgrCommand::setTypeEndScene(SceneArgBase*)
{
	// UNUSED FUNCTION
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
	_60.clearRelations();
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
	bool ret = false;
	if (mBackupScene && mBackupScene->confirmStartScene(arg)) {
		ret = true;
	} else {
		u32 owner = mBackupScene->getOwnerID();
		char buf[12];
		og::Screen::TagToName(owner, buf);
		ScreenMemberID member = mBackupScene->getMemberID();
		char buf2[12];
		og::Screen::TagToName(member, buf2);
		JUT_PANICLINE(427, "can\'t startScene.\n owner[%s] member[%s]\n", buf, buf2);
	}
	return ret;
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
		if (command)
			return;
	} else {
		OSLockMutex(&command->mMutex);
		command->del();
		mAvailableCommands.add(command);
		OSUnlockMutex(&command->mMutex);
		return;
	}
	JUT_PANICLINE(626, "【エラー】コマンドバッファが足りません\n"); // "[Error] Not enough command buffer"
	return command;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8049B8C8@ha
	lwz      r30, 0x54(r29)
	addi     r31, r3, lbl_8049B8C8@l
	cmplwi   r30, 0
	bne      lbl_80452AAC
	addi     r3, r31, 0xc
	addi     r5, r31, 0xc4
	li       r4, 0x267
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80452AAC:
	cmplwi   r30, 0
	beq      lbl_80452ADC
	addi     r3, r30, 0x464
	bl       OSLockMutex
	mr       r3, r30
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r29, 0x2c
	bl       add__5CNodeFP5CNode
	addi     r3, r30, 0x464
	bl       OSUnlockMutex
	b        lbl_80452AF0

lbl_80452ADC:
	addi     r3, r31, 0xc
	addi     r5, r31, 0xe8
	li       r4, 0x272
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80452AF0:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
SceneBase* Mgr::getSceneBase(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Mgr::createNewBackupSceneInfo(SceneBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452F00
 * Size:	000078
 */
void Mgr::clearBackupSceneInfo()
{
	FOREACH_NODE(SceneInfoList, _60.mChild, info)
	{
		info->del();
		mSceneInfoList.add(info);
	}
	_60.clearRelations();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x70(r3)
	b        lbl_80452F40

lbl_80452F24:
	lwz      r30, 4(r31)
	mr       r3, r31
	bl       del__5CNodeFv
	mr       r4, r31
	addi     r3, r29, 0x78
	bl       add__5CNodeFP5CNode
	mr       r31, r30

lbl_80452F40:
	cmplwi   r31, 0
	bne      lbl_80452F24
	li       r0, 0
	stw      r0, 0x70(r29)
	stw      r0, 0x6c(r29)
	stw      r0, 0x68(r29)
	stw      r0, 0x64(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80452F78
 * Size:	00024C
 */
void Mgr::changeScene(SetSceneArg&, u8*)
{
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
bool Mgr::setScene(SetSceneArg&)
{
	getNewCommand();
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
bool Mgr::isCurrentSceneLoading()
{
	if (!mBackupScene || mBackupScene->mStateID != 1) {
		return false;
	}
	return true;
	/*
	lwz      r4, 0x1c(r3)
	li       r3, 0
	cmplwi   r4, 0
	beqlr
	lwz      r0, 0x120(r4)
	cmpwi    r0, 1
	bnelr
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80453780
 * Size:	000160
 */
void Mgr::copyDispMember(u8*, u8*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r27, r3
	mr       r31, r4
	mr       r30, r5
	lwz      r3, 0x1c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0x1c(r27)
	mr       r29, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r27, r4
	mr       r28, r0
	mr       r3, r30
	mr       r4, r29
	mr       r6, r27
	mr       r5, r28
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	bne      lbl_80453810
	mr       r3, r30
	mr       r4, r29
	mr       r6, r27
	mr       r5, r28
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	cmplwi   r3, 0
	beq      lbl_80453840

lbl_80453810:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r3, r31
	mr       r4, r30
	bl       memcpy
	mr       r3, r31
	bl       setSubMemberAll__Q32og6Screen14DispMemberBaseFv
	b        lbl_804538CC

lbl_80453840:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r5, r1, 0x14
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r5, r1, 8
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r4, r29
	addi     r5, r1, 0x2c
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r4, r27
	mr       r3, r28
	addi     r5, r1, 0x20
	bl       TagToName__Q22og6ScreenFUxPc
	lis      r3, lbl_8049B8D4@ha
	lis      r4, lbl_8049BA38@ha
	addi     r5, r4, lbl_8049BA38@l
	addi     r6, r1, 0x2c
	addi     r3, r3, lbl_8049B8D4@l
	addi     r7, r1, 0x20
	addi     r8, r1, 0x14
	addi     r9, r1, 8
	li       r4, 0x44a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804538CC:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
	int ret = -1;
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
	/*
	lwz      r3, 0x3c(r3)
	b        lbl_80453A48

lbl_80453A28:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_80453A3C
	cmpwi    r0, 1
	bne      lbl_80453A44

lbl_80453A3C:
	li       r3, 1
	blr

lbl_80453A44:
	lwz      r3, 4(r3)

lbl_80453A48:
	cmplwi   r3, 0
	bne      lbl_80453A28
	li       r3, 0
	blr
	*/
}

} // namespace Screen
