#include "Screen/Game2DMgr.h"
#include "Screen/SceneInfoList.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/DispMember.h"
#include "Game/MoviePlayer.h"
#include "TParticle2dMgr.h"
#include "nans.h"

static const u32 padding[3] = { 0, 0, 0 };

namespace Screen {

Mgr* Mgr::sScreenMgr;

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void DispMemberCpy(u8*, og::Screen::DispMemberBase*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
ScreenOwnerID getSceneOwnerName(SceneBase* scene) { return scene->getOwnerID(); }

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
ScreenMemberID getSceneMemberName(SceneBase* scene) { return scene->getMemberID(); }

/**
 * @note Address: 0x80452300
 * @note Size: 0x54
 */
SceneInfoList::SceneInfoList()
{
	mSceneType = SCENE_DUMMY;
	memset(mDispMemberBuffer, 205, 0x400);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void SceneInfoList::set(s32, og::Screen::DispMemberBase*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
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

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void MgrCommand::clearArgBuf()
{
	OSLockMutex(&mMutex);
	memset(&mScreenArgBuffer, 205, 64);
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void MgrCommand::clearDispMemberBuf()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void MgrCommand::setArg(SceneArgBase* arg)
{
	OSLockMutex(&mMutex);
	if (arg) {
		P2ASSERTLINE(258, (u32)arg->getClassSize() <= 0x40);

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

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
void MgrCommand::setDispMember(og::Screen::DispMemberBase* disp)
{
	OSLockMutex(&mMutex);

	if (disp) {
		if (disp->getSize() <= 0x400) {
			mDispBufferPtr = (og::Screen::DispMemberBase*)mDispBuffer;
			memcpy(mDispBuffer, disp, disp->getSize());
			mDispBufferPtr->setSubMemberAll();
		} else {
			char temp[12];
			disp->getMemberName(temp);
			JUT_PANICLINE(293, "dispMember[%s] Size over. \n %d max:%d", temp, disp->getSize(), 0x400);
		}
	} else {
		mDispBufferPtr = nullptr;
	}

	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: N/A
 * @note Size: 0x1BC
 */
void MgrCommand::setTypeSetScene(SetSceneArg& arg)
{
	mName    = "SetScene";
	mArgType = CommandType_Set;

	setArg(&arg);

	setDispMember(arg.mDispMember);
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void MgrCommand::setTypeStartScene(SceneArgBase* arg)
{
	OSLockMutex(&mMutex);
	mName    = "StartScene";
	mArgType = CommandType_Start;
	setArg(arg);
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void MgrCommand::setTypeEndScene(SceneArgBase* arg)
{
	OSLockMutex(&mMutex);
	mName    = "EndScene";
	mArgType = CommandType_End;
	setArg(arg);
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void MgrCommand::setTypeInvalid() { setTypeEndScene(nullptr); }

/**
 * @note Address: 0x80452354
 * @note Size: 0x1CC
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

/**
 * @note Address: 0x80452580
 * @note Size: 0x70
 */
void Mgr::init()
{
	if (!mCurrHeap) {
		mCurrHeap = JKRSolidHeap::create(0x880, JKRGetCurrentHeap(), true);
		P2ASSERTLINE(405, mCurrHeap);
	}
}

/**
 * @note Address: 0x804525F0
 * @note Size: 0xFC
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

/**
 * @note Address: N/A
 * @note Size: 0x240
 */
void Mgr::create()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804526EC
 * @note Size: 0x1E8
 */
bool Mgr::startScene(StartSceneArg* arg)
{
	bool result = true;
	if (!mBackupScene || (mBackupScene && mBackupScene->confirmStartScene(arg))) {
		bool isReady = false;
		if (mAvailableCommands.mChild) {
			isReady = true;
		} else if (mBackupScene) {
			if (!mBackupScene->start(arg)) {
				isReady = true;
			}
		} else {
			result = false;
		}

		if (isReady) {
			Screen::MgrCommand* cmd = getNewCommand();
			if (!cmd) {
				result = false;
			} else {
				cmd->setTypeStartScene(arg);
			}
		}
	} else {
		char ownerStr[12];
		og::Screen::TagToName((u32)mBackupScene->getOwnerID(), ownerStr);

		char memberIdStr[12];
		og::Screen::TagToName(mBackupScene->getMemberID(), memberIdStr);

		JUT_PANICLINE(530, "can\'t startScene.\n owner[%s] member[%s]\n", ownerStr, memberIdStr);
		result = false;
	}

	return result;
}

/**
 * @note Address: 0x804528D4
 * @note Size: 0x18C
 */
bool Mgr::endScene(Screen::EndSceneArg* arg)
{
	bool ret = true;
	if (!mBackupScene || (mBackupScene && mBackupScene->confirmEndScene(arg))) {

		bool isReady = false;
		if (mAvailableCommands.mChild) {
			isReady = true;
		} else if (mBackupScene) {
			if (!mBackupScene->end(arg)) {
				isReady = true;
			}
		} else {
			ret = false;
		}

		if (isReady) {
			Screen::MgrCommand* cmd = getNewCommand();
			if (!cmd) {
				ret = false;
			} else {
				cmd->setTypeEndScene(arg);
			}
		}

	} else {
		ret = false;
	}
	return ret;
}

/**
 * @note Address: 0x80452A60
 * @note Size: 0x8
 */
MgrCommand* Mgr::getCurrentCommand() { return (MgrCommand*)mAvailableCommands.mChild; }

/**
 * @note Address: 0x80452A68
 * @note Size: 0xA8
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

/**
 * @note Address: 0x80452B10
 * @note Size: 0x58
 */
void Mgr::releaseCommand(MgrCommand* command)
{
	OSLockMutex(&command->mMutex);
	command->del();
	mCommandList.add(command);
	OSUnlockMutex(&command->mMutex);
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Mgr::updateCurrentScene()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80452B68
 * @note Size: 0x2D8
 */
void Mgr::update()
{
	MgrCommand* cmd = static_cast<MgrCommand*>(mAvailableCommands.mChild);
	if (mController && mController->isButtonDown(Controller::PRESS_START)) {
		MgrCommand* tmp = cmd;
		while (tmp) {
			tmp = static_cast<MgrCommand*>(tmp->mNext);
		}
	}
	if (cmd) {
		OSLockMutex(&cmd->mMutex);
		SceneBase* scene = mBackupScene;
		switch (cmd->mArgType) {
		case MgrCommand::CommandType_Set: {
			SetSceneArg* arg = static_cast<SetSceneArg*>(cmd->mScreenArgBufferPtr);

			if (!isCurrentSceneLoading() && (arg->_08 || isSceneFinish())) {
				changeScene(*arg, (u8*)cmd->mDispBufferPtr);
				releaseCommand(cmd);
			}
		} break;

		case MgrCommand::CommandType_Start: {
			P2ASSERTLINE(726, scene);
			SetSceneArg* arg = static_cast<SetSceneArg*>(cmd->mScreenArgBufferPtr);
			if (arg) {
				if (mBackupScene->getSceneType() != arg->getSceneType()) {
					JUT_PANICLINE(734, "Mismatch arg. current scene:%d arg:%d\n", mBackupScene->getSceneType(),
					              static_cast<SetSceneArg*>(cmd->mScreenArgBufferPtr)->getSceneType());
				}
			}

			if (mBackupScene->start(static_cast<StartSceneArg*>(cmd->mScreenArgBufferPtr))) {
				releaseCommand(cmd);
				mBackupScene->update();
			}
		} break;

		case MgrCommand::CommandType_End: {
			P2ASSERTLINE(755, scene);
			SetSceneArg* arg = static_cast<SetSceneArg*>(cmd->mScreenArgBufferPtr);
			if (arg) {
				if (mBackupScene->getSceneType() != arg->getSceneType()) {
					P2ASSERTLINE(759, false);
				}
			}
			if (mBackupScene->end(static_cast<EndSceneArg*>(cmd->mScreenArgBufferPtr))) {
				releaseCommand(cmd);
			}
		} break;

		default:
			P2ASSERTLINE(781, false);
			break;

		case MgrCommand::CommandType_NULL:
			break;
		}

		OSUnlockMutex(&cmd->mMutex);
	}

	if (mBackupScene) {
		mBackupScene->update();
	}
}

/**
 * @note Address: 0x80452E40
 * @note Size: 0xB4
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

/**
 * @note Address: 0x80452EF8
 * @note Size: 0x8
 */
SceneBase* Mgr::doGetSceneBase(s32) { return nullptr; }

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
SceneBase* Mgr::getSceneBase(s32 type)
{
	JKRHeap* backupheap = JKRGetCurrentHeap();
	mCurrHeap->becomeCurrentHeap();
	SceneBase* scene = doGetSceneBase(type);
	backupheap->becomeCurrentHeap();
	JUT_ASSERTLINE(843, scene, "シーンの生成に失敗");
	scene->mController = mController;
	return scene;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void Mgr::createNewBackupSceneInfo(SceneBase* scene)
{
	// UNUSED/INLINED
}

/**
 * @note Address: 0x80452F00
 * @note Size: 0x78
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

/**
 * @note Address: 0x80452F78
 * @note Size: 0x24C
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
			P2ASSERTLINE(855, scene);
			SceneInfoList* info = getFirstList();
			if (!info) {
				JUT_PANICLINE(872, "can\'t create New SceneInfoList.\n");
			} else {
				info->del();
				og::Screen::DispMemberBase* disp = scene->mDispMember;
				info->mSceneType                 = scene->getSceneType();
				memcpy(info->mDispMemberBuffer, disp, disp->getSize());
				((og::Screen::DispMemberBase*)&info->mDispMemberBuffer)->setSubMemberAll();
			}
			mBackupInfoList.addHead(info);
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
}

/**
 * @note Address: 0x804531C4
 * @note Size: 0x598
 */
bool Mgr::setScene(SetSceneArg& arg)
{
	bool result = true;
	if (arg._08 || !mBackupScene || (mBackupScene && mBackupScene->confirmSetScene(arg))) {
		MgrCommand* command = getNewCommand();
		if (!command) {
			result = false;
		} else {
			OSLockMutex(&command->mMutex);
			if (arg._08) {
				if (isCurrentSceneLoading()) {
					command->setTypeSetScene(arg);
				} else {
					releaseCommand(command);
					if (arg.mDispMember) {
						arg.mDispMember->setSubMemberAll();
					}
					changeScene(arg, (u8*)arg.mDispMember);
				}
			} else if (mBackupScene) {
				MgrCommand* newCommand = getNewCommand();
				if (newCommand) {

					command->setTypeInvalid();
					newCommand->setTypeSetScene(arg);
				} else {
					releaseCommand(command);
					result = false;
				}
			} else {
				releaseCommand(command);
				if (arg.mDispMember) {
					arg.mDispMember->setSubMemberAll();
				}
				changeScene(arg, (u8*)arg.mDispMember);
			}
		}

		OSUnlockMutex(&command->mMutex);
	} else {
		result = false;
	}

	return result;
}

/**
 * @note Address: 0x8045375C
 * @note Size: 0x24
 */
bool Mgr::isCurrentSceneLoading() { return mBackupScene && mBackupScene->mStateID == 1; }

/**
 * @note Address: 0x80453780
 * @note Size: 0x160
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

/**
 * @note Address: 0x804538E0
 * @note Size: 0x34
 */
bool Mgr::setDispMember(og::Screen::DispMemberBase* disp)
{
	if (mBackupScene) {
		return mBackupScene->setDispMember(disp);
	}

	return nullptr;
}

/**
 * @note Address: 0x80453914
 * @note Size: 0x1C
 */
og::Screen::DispMemberBase* Mgr::getDispMember()
{
	if (mBackupScene) {
		return mBackupScene->mDispMember;
	}

	return nullptr;
}

/**
 * @note Address: 0x80453930
 * @note Size: 0x40
 */
SceneType Mgr::getSceneType()
{
	if (mBackupScene) {
		return mBackupScene->getSceneType();
	}

	return SCENE_DUMMY;
}

/**
 * @note Address: 0x80453970
 * @note Size: 0x28
 */
bool Mgr::isSceneFinish()
{
	if (mBackupScene) {
		return mBackupScene->mStateID == 4;
	}

	return true;
}

/**
 * @note Address: 0x80453998
 * @note Size: 0x38
 */
int Mgr::getSceneFinishState()
{
	int ret = SceneBase::SB_Finished1;

	if (mBackupScene) {
		ret = mBackupScene->getFinishState();
	}

	return ret;
}

/**
 * @note Address: 0x804539D0
 * @note Size: 0x1C
 */
void Mgr::setGamePad(Controller* control)
{
	mController = control;
	if (mBackupScene) {
		mBackupScene->mController = mController;
	}
}

/**
 * @note Address: 0x804539EC
 * @note Size: 0x34
 */
bool Mgr::setBackupScene()
{
	if (mBackupScene) {
		return mBackupScene->setBackupScene();
	}

	return false;
}

/**
 * @note Address: 0x80453A20
 * @note Size: 0x38
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
