#include "Game/MoviePlayer.h"
#include "Screen/Game2DMgr.h"
#include "Game/GameSystem.h"
#include "Game/CameraMgr.h"
#include "Game/MapMgr.h"
#include "PSM/Demo.h"
#include "Game/P2JST/ObjectSystem.h"
#include "P2JME/Movie.h"
#include "JSystem/JStudio_JMessage.h"
#include "JSystem/JStudio_JStage.h"
#include "JSystem/JStudio_JParticle.h"
#include "JSystem/JStudio/TFactory.h"
#include "JSystem/JStudio/TParse.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTAssertion.h"
#include "PSSystem/PSSystemIF.h"
#include "ParticleMgr.h"
#include "utilityU.h"
#include "nans.h"

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "moviePlayer";

namespace Game {

JKRArchive* MoviePlayer::mArchive;
MoviePlayer* moviePlayer;

/*
 * --INFO--
 * Address:	8042C700
 * Size:	000150
 */
MoviePlayer::MoviePlayer()
    : mTextControl(nullptr)
    , mCounter(0)
    , mStbFile(nullptr)
{
	mArchive      = nullptr;
	mTransform    = 0.0f;
	mTargetNavi   = nullptr;
	mActingCamera = nullptr;
	mAltNavi      = nullptr;
	mAltCamera    = nullptr;
	mViewport     = nullptr;
	mTargetObject = nullptr;
	mFlags.clear();
	mCurrentConfig = nullptr;
	mDelegate1     = nullptr;
	mDelegate2     = nullptr;
	mMovieHeap     = nullptr;
	mNaviID        = 0;
	mCameraName    = nullptr;
	mStreamID      = 0;
	mDemoState     = 0;
	mObjectSystem  = nullptr;
	mDemoPSM       = nullptr;
	mTextControl   = nullptr;
	allocMovieHeap(MOVIEPLAYER_HEAP_SIZE);
	allocContexts();
	mDelegate3 = new Delegate<MoviePlayer>(this, loadResource);
}

/*
 * --INFO--
 * Address:	8042C8B0
 * Size:	00002C
 */
void MoviePlayer::reset()
{
	if (isFlag(MVP_IsActive)) {
		stop();
	}
}

/*
 * --INFO--
 * Address:	8042C8DC
 * Size:	00001C
 */
Navi* MoviePlayer::getActiveOrima()
{
	if (mAltNavi)
		return mAltNavi;
	return mTargetNavi;
}

/*
 * --INFO--
 * Address:	8042C8F8
 * Size:	00001C
 */
PlayCamera* MoviePlayer::getActiveGameCamera()
{
	if (mAltCamera)
		return mAltCamera;
	return mActingCamera;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void MoviePlayer::setMovieHeap(JKRHeap* heap)
{
	P2ASSERTLINE(501, !mMovieHeap);
	mMovieHeap         = heap;
	mMovieHeapFreeSize = heap->getTotalFreeSize();
}

/*
 * --INFO--
 * Address:	8042C914
 * Size:	0000BC
 */
void MoviePlayer::allocMovieHeap(u32 size)
{
	P2ASSERTLINE(511, !mMovieHeap);

	JKRHeap* backup = JKRGetCurrentHeap();
	setMovieHeap(JKRSolidHeap::create(size, JKRGetCurrentHeap(), true));
	backup->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void MoviePlayer::clearMovieHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C9D0
 * Size:	000060
 */
u8 MoviePlayer::play(MoviePlayArg& arg)
{
	MovieConfig* config = findConfig(arg.mMovieName, arg.mCourseName);
	if (config) {
		return play(config, arg, false);
	} else {
		return MOVIEPLAY_NOCONFIG;
	}
}

/*
 * --INFO--
 * Address:	8042CA30
 * Size:	00033C
 */
u8 MoviePlayer::play(MovieConfig* config, MoviePlayArg& arg, bool flag)
{
	if (isFlag(MVP_IsActive)) {
		// if a movie is already playing, put the new cutscene in the queue instead
		MovieContext* context = getNewContext();
		if (!context) {
			JUT_PANICLINE(560, "******* ★キューにはいりきらんよ～！！\n"); // "******* ★Don't miss the queue! !"
			return MOVIEPLAY_QUEUEFAIL;
		} else {
			setContext(context, config, arg);
			return MOVIEPLAY_INQUEUE;
		}
	} else {
		if (Screen::gGame2DMgr) {
			Screen::gGame2DMgr->stopFinalFloorSound();
		}
		mAltNavi   = mTargetNavi;
		mAltCamera = mActingCamera;
		cameraMgr->controllerLock(2);
		config->dump();
		mCurrentConfig = config;
		mNaviID        = arg.mNaviID;
		P2ASSERTLINE(594, config);

		char path1[512];
		char path2[512];
		sprintf(path1, "/user/Mukki/movie/%s/demo.stb", config->mMovieNameBuffer2);
		sprintf(path2, "/user/Mukki/movie/%s/demo.szs", config->mMovieNameBuffer2);
		mIsPaused              = gameSystem->setPause(true, "moviePl:play", 3);
		mOffset                = nullptr;
		bool test              = false;
		MovieConfig* posConfig = mCurrentConfig;
		u8 posFlag             = mCurrentConfig->mPositionFlag;
		if (!(posFlag & 1)) {
			test = (posFlag & 4) || (posFlag & 8);
			if (test) {
				mCameraPosition = arg.mOrigin;
				mCameraAngle    = arg.mAngle * 57.295776f;
				if (mCurrentConfig->mPositionFlag & 8) {
					JUT_ASSERTLINE(609, mapMgr, "The Bikkuri\n");
					mCameraAngle = 57.295776f * mapMgr->getBestAngle(mCameraPosition, 250.0f, 0.43633235f);
				}
			} else if (posFlag & 16) {
				mCameraPosition = arg.mOrigin;
				mCameraAngle    = arg.mAngle * 57.295776f;
				mOffset         = arg.mSoundPosition;
			} else {
				mCameraPosition = posConfig->mOrigin;
				mCameraAngle    = mCurrentConfig->mAngle;
			}
		}

		resetFlag(MVP_IsFinished);
		setFlag(MVP_IsActive);
		resetFlag(MVP_Unk32);
		mDelegate1  = arg.mDelegateEnd;
		mDelegate2  = arg.mDelegateStart;
		mCameraName = arg.mPelletName;
		mStreamID   = arg.mStreamID;

		Screen::gGame2DMgr->mScreenMgr->mInDemo = true;
		if (!flag && mCurrentConfig->mDrawType & 1) {
			WipeBase* wipe = gameSystem->mSection->mDisplayWiper;
			if (wipe && wipe->isBlack()) {
				gameSystem->startFadeblack();
				mFadeTimer = 0.0f;
			} else {
				gameSystem->startFadeout(0.5f);
				mFadeTimer = 0.5f;
			}
			mDemoState = 1;
		} else {
			sys->dvdLoadUseCallBack(&mThreadCommand, mDelegate3);
			mDemoState = 2;
			mFadeTimer = 0.0f;
		}
		return MOVIEPLAY_SUCCESS;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void MoviePlayer::doStartMovie()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042CD6C
 * Size:	000024
 */
MovieConfig* MoviePlayer::findConfig(char* demoName, char* courseName) { return movieList->findConfig(demoName, courseName); }

/*
 * --INFO--
 * Address:	8042CD90
 * Size:	0000B0
 */
MovieContext::MovieContext()
{
	mConfig             = nullptr;
	mArg.mCourseName    = nullptr;
	mArg.mMovieName     = nullptr;
	mArg.mDelegateEnd   = nullptr;
	mArg.mDelegateStart = nullptr;
	mArg.mOrigin        = 0.0f;
	mArg.mAngle         = 0.0f;
	mArg.mNaviID        = 0;
	mArg.mPelletName    = nullptr;
	mArg.mStreamID      = 0;
	mArg._14            = 0;
	mArg.mSoundPosition = nullptr;
}

/*
 * --INFO--
 * Address:	8042CE40
 * Size:	00009C
 */
void MoviePlayer::allocContexts()
{
	mContextsCount    = 8;
	mActiveContextNum = 0;
	mContexts         = new MovieContext[mContextsCount];
	mStoreContextActive.clearRelations();
	mStoreContextInactive.clearRelations();
	clearContexts();
}

/*
 * --INFO--
 * Address:	8042CEDC
 * Size:	0000AC
 */
void MoviePlayer::clearContexts()
{
	mStoreContextActive.clearRelations();
	mStoreContextInactive.clearRelations();
	for (int i = 0; i < mContextsCount; i++) {
		MovieContext* context = &mContexts[i];
		context->clearRelations();
		mStoreContextInactive.add(context);
	}
	mActiveContextNum = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void MoviePlayer::playSuspended()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042CF88
 * Size:	0000AC
 */
void MoviePlayer::clearSuspendedDemo() { clearContexts(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void MoviePlayer::hasSuspendedDemo()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042D034
 * Size:	00006C
 */
MovieContext* MoviePlayer::getNewContext()
{
	MovieContext* context = mStoreContextInactive.getChild();
	if (context) {
		context->del();
		mStoreContextActive.add(context);
		mActiveContextNum++;
	}
	return context;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void MoviePlayer::hasSuspendedContext()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void MoviePlayer::getSuspendedContext()
{
	// MovieContext* context = mStoreContextActive.getChild();
	// if (context) {
	// 	context->del();
	// 	mStoreContextInactive.add(context);
	// 	mActiveContextNum--;
	// 	mTargetNavi   = context->mNavi;
	// 	mActingCamera = context->mCamera;
	// 	mTargetObject = context->mTargetObject;
	// 	u8 flag       = play(context->mConfig, context->mArg, true);
	// 	switch (flag) {
	// 	case MOVIEPLAY_SUCCESS:
	// 		return true;
	// 	case MOVIEPLAY_NOCONFIG:
	// 		return false;
	// 	case MOVIEPLAY_INQUEUE:
	// 		return true;
	// 	case MOVIEPLAY_QUEUEFAIL:
	// 		JUT_PANICLINE(767, "[QUE_FAILED] %s\n", context->mArg.mMovieName);
	// 		return false;
	// 	}
	// } else {
	// 	JUT_PANICLINE(772, " キューになにもないぞーー(T^T)\n"); // "there's nothing in the queue (T^T)"
	// }
}

/*
 * --INFO--
 * Address:	8042D0A8
 * Size:	000088
 */
void MoviePlayer::setContext(MovieContext* context, MovieConfig* config, MoviePlayArg& arg)
{
	context->mConfig       = config;
	context->mNavi         = mTargetNavi;
	context->mTargetObject = mTargetObject;
	context->mCamera       = mActingCamera;

	context->mArg.mMovieName     = arg.mMovieName;
	context->mArg.mCourseName    = arg.mCourseName;
	context->mArg.mPelletName    = arg.mPelletName;
	context->mArg.mDelegateEnd   = arg.mDelegateEnd;
	context->mArg.mDelegateStart = arg.mDelegateStart;
	context->mArg._14            = arg._14;
	context->mArg.mOrigin        = arg.mOrigin;
	context->mArg.mAngle         = arg.mAngle;
	context->mArg.mNaviID        = arg.mNaviID;
	context->mArg.mStreamID      = arg.mStreamID;
	context->mArg.mSoundPosition = arg.mSoundPosition;
}

/*
 * --INFO--
 * Address:	8042D130
 * Size:	000478
 */
void MoviePlayer::loadResource()
{
	char path1[256];
	char path2[256];
	sprintf(path1, "/user/Mukki/movie/%s/demo.stb", mCurrentConfig->mMovieNameBuffer2);
	sprintf(path2, "/user/Mukki/movie/%s/demo.szs", mCurrentConfig->mMovieNameBuffer2);
	sys->startChangeCurrentHeap(mMovieHeap);

	mDemoPSM                                 = new PSM::Demo;
	mObjectSystem                            = new P2JST::ObjectSystem("ObjectSystem", this);
	mTextControl                             = new P2JME::Movie::TControl;
	JStudio_JMessage::TCreateObject* mesgobj = new JStudio_JMessage::TCreateObject(mTextControl);
	mStudioStageCreateObject                 = new JStudio_JStage::TCreateObject(mObjectSystem);

	mStudioFactory = new JStudio::TFactory;
	mStudioFactory->appendCreateObject(mStudioStageCreateObject);
	mStudioFactory->appendCreateObject(mesgobj);
	mStudioParticleCreateObject = new JStudio_JParticle::TCreateObject(mObjectSystem, particleMgr->mEmitterManager);
	mStudioFactory->appendCreateObject(mStudioParticleCreateObject);
	mPikminCreateObjectAudio = new Pikmin_TCreateObject_JAudio(PSSystem::spSysIF, mObjectSystem);
	mStudioFactory->appendCreateObject(mPikminCreateObjectAudio);

	mStudioControl               = new JStudio::TControl;
	mStudioControl->pFactory     = mStudioFactory;
	mStudioControl->_60.pFactory = &mStudioFactory->mFvbFactory;
	mStudioControl->_58          = 0.03333333507180214;

	sys->heapStatusStart("movieResource", nullptr);

	sys->heapStatusStart("arc", nullptr);
	LoadResource::Arg arg(path2);
	arg.mHeap                = JKRGetCurrentHeap();
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	if (node) {
		mArchive = node->mArchive;
	} else {
		mArchive = nullptr;
	}
	DCStoreRange(mMovieHeap, mMovieHeapFreeSize);
	sys->heapStatusEnd("arc");

	sys->heapStatusStart("message", nullptr);
	mTextControl->init();
	sys->heapStatusEnd("message");

	mEfxManager = nullptr;
	if (mArchive) {
		void* file = mArchive->getResource("efx.jpc");
		if (file) {
			mEfxManager = new JPAResourceManager(file, mMovieHeap);
			particleMgr->setDemoResourceManager(mEfxManager);
		}
	}

	sys->heapStatusStart("stb", nullptr);
	if (mArchive) {
		mStbFile = mArchive->getResource("demo.stb");
		JUT_ASSERTLINE(954, mStbFile, "まぢかｗ\n"); // "Really? w"
	} else {
		JUT_PANICLINE(957, "demo.szs がないとだめだよｗ\n"); // "It's useless without it w"
	}
	JUT_ASSERTLINE(960, mStbFile, "resource open failed!\n");
	sys->heapStatusEnd("stb");

	sys->heapStatusStart("JStudio::TParse", nullptr);
	parse(true);
	sys->heapStatusEnd("JStudio::TParse");

	sys->heapStatusEnd("movieResource");
	sys->endChangeCurrentHeap();
	sys->heapStatusDump(false);
}

/*
 * --INFO--
 * Address:	8042D5A8
 * Size:	0000C0
 */
bool MoviePlayer::parse(bool flag)
{
	JStudio::TParse parse(mStudioControl);
	u32 test = 0x30;
	if (flag) {
		test = 0x40;
	}

	if (!parse.parse_next(&mStbFile, test)) {
		JUT_PANICLINE(1004, "データを解釈できましぇん\n"); // "I can interpret the data"
		return false;
	} else {
		mObjectSystem->reset();
		return true;
	}
}

/*
 * --INFO--
 * Address:	8042D668
 * Size:	0007C4
 */
bool MoviePlayer::update(Controller* input1, Controller* input2)
{
	switch (mDemoState) {
	case 0:
		return false;
		break;
	case 1:
		if (mFadeTimer > 0.0f) {
			mFadeTimer -= sys->mDeltaTime;
			if (mFadeTimer <= 0.0f) {
				gameSystem->startFadeblack();
			}
		} else {
			sys->dvdLoadUseCallBack(&mThreadCommand, mDelegate3);
			mDemoState = 2;
			gameSystem->startFadeblack();
		}
		return true;
	case 2:
		if (mFadeTimer > 0.0f) {
			mFadeTimer -= sys->mDeltaTime;
		}
		if (mThreadCommand.mMode == 2) {
			sys->startChangeCurrentHeap(mMovieHeap);
			setCamera(getActiveGameCamera());
			sys->endChangeCurrentHeap();
		}
		if (mThreadCommand.mMode == 2 && mFadeTimer > 0.0f) {
			gameSystem->setPause(false, "moviePl:loaddone", 3);
			gameSystem->paused();
			if (mDelegate1) {
				mDelegate1->invoke(mCurrentConfig, 0, mNaviID);
			}
			if (!mCurrentConfig->mPositionFlag & 1) {
				setTransform(mTransform, mCameraAngle);
			}
			start(nullptr);
			setPauseAndDraw(mCurrentConfig);
			mDemoState = 5;
			u16 flag   = mCurrentConfig->mDrawType;
			if (!flag & 4 || flag & 2) {
				gameSystem->startFadein(0.5f);
			} else {
				gameSystem->startFadewhite();
			}
			mDemoState = 3;
			return true;
		}
		return true;
	case 3:
		mDemoState = 4;
		break;
	case 4:
		mDemoState = 5;
		break;
	case 5:
		gameSystem->paused();
		break;
	case 6:
		if (mObjectSystem) {
			mObjectSystem->entry();
		}
		mFadeTimer -= sys->mDeltaTime;
		if (mFadeTimer > 1.1f && !mCanFinish) {
			if (isFlag(MVP_IsFinished)) {
				resetFrame();
				while (mStudioControl->forward(1)) {
					mObjectSystem->update();
					if (mTextControl) {
						mTextControl->update(input1, input2);
					}
					unsuspend(1, false);
				}
			}
			mCanFinish          = true;
			MovieConfig* config = mCurrentConfig;
			stop();
			Screen::gGame2DMgr->mScreenMgr->mInDemo = false;
			cameraMgr->controllerUnLock(2);
			gameSystem->setPause(0, "moviePl:donecall", 3);
			if (Screen::gGame2DMgr) {
				Screen::gGame2DMgr->restartFinalFloorSound();
			}
			if (mDelegate2) {
				mDelegate2->invoke(config, 0, mNaviID);
			}
			gameSystem->startFadein(1.0f);
			if (mStoreContextActive.getChild()) {
				PSMCancelToPauseOffMainBgm();
				MovieContext* context = mStoreContextActive.getChild();
				if (context) {
					context->del();
					mStoreContextInactive.add(context);
					mActiveContextNum--;
					mTargetNavi   = context->mNavi;
					mActingCamera = context->mCamera;
					mTargetObject = context->mTargetObject;
					u8 flag       = play(context->mConfig, context->mArg, true);
					switch (flag) {
					case MOVIEPLAY_SUCCESS:
						return true;
					case MOVIEPLAY_NOCONFIG:
						return false;
					case MOVIEPLAY_INQUEUE:
						return true;
					case MOVIEPLAY_QUEUEFAIL:
						JUT_PANICLINE(767, "[QUE_FAILED] %s\n", context->mArg.mMovieName);
						return false;
					}
				} else {
					JUT_PANICLINE(772, " キューになにもないぞーー(T^T)\n"); // "there's nothing in the queue (T^T)"
				}
				return false;
			}
			if (mDemoState == 2 || mDemoState == 1) {
				PSMCancelToPauseOffMainBgm();
			}
		} else if (mFadeTimer < 0.0f) {
			mDemoState = 0;
		}
		break;
	}
	if (isFlag(MVP_IsActive)) {
		if (!(input1->getButtonDown() & 0xf70) && (!input2 || !(input2->getButtonDown() & 0xf70))) {
			mFlags.typeView |= 0x80000000;
		}

		if (mStudioControl->mStatus < 1) {
			mCounter++;
		}
		if (mCurrentConfig->mPositionFlag & 0x10) {
			Vector3f* pos = mOffset;
			if (pos) {
				mTransform = pos->normalise();
				setTransform(mTransform, mCameraAngle);
			}
		}
		if (!mStudioControl->forward(1)) {
			if (mDemoState != 6) {
				mDemoState = 6;
				mFadeTimer = 2.0f;
				mCanFinish = false;
				gameSystem->setPause(true, nullptr, 3);
				gameSystem->startFadeout(1.0f);
				mDemoPSM->onDemoFadeoutStart(30);
				mObjectSystem->entry();
				return true;
			}
		} else {
			mObjectSystem->update();
			mObjectSystem->entry();
			if (mTextControl) {
				mTextControl->update(input1, input2);
			}
		}
		if (mDemoState == 5 && mFlags.isSet(0x80000000) && !mStudioControl->mObject_control._20) {
			if ((input1->getButtonDown() & 0xf70) || (input2 && (input2->getButtonDown() & 0xf70)) && mCurrentConfig->isSkippable()) {
				skip();
			} else if ((input1->getButtonDown() & Controller::PRESS_START)
			           || (input2 && (input2->getButtonDown() & Controller::PRESS_START)) && !mCurrentConfig->isNeverSkippable()) {
				skip();
			}
		}
	}
	return isFlag(MVP_IsActive);
}

/*
 * --INFO--
 * Address:	8042DE58
 * Size:	000078
 */
void MoviePlayer::draw(Graphics& gfx)
{
	if (isFlag(MVP_IsActive) && mTextControl) {
		gfx.mOrthoGraph.setPort();
		mTextControl->draw(gfx);
	}
}

/*
 * --INFO--
 * Address:	8042DED0
 * Size:	000074
 */
bool MoviePlayer::start(Camera* cam)
{
	mMessageEndCount = 0;
	if (cam) {
		setCamera(cam);
	}
	if (mStbFile) {
		mCounter                            = 0;
		mStudioControl->mObject_control._20 = 0;
		mObjectSystem->start();
	}
	return isFlag(MVP_IsActive);
}

/*
 * --INFO--
 * Address:	8042DF44
 * Size:	000120
 */
bool MoviePlayer::stop()
{
	if (isFlag(MVP_IsActive)) {
		clearPauseAndDraw();
		resetFlag(MVP_IsFinished);
		resetFlag(MVP_Unk32);
		if (mObjectSystem) {
			mObjectSystem->stop();
			mObjectSystem->destroyObjectAll();
		}
		mObjectSystem = nullptr;
		mTextControl  = nullptr;
		if (mEfxManager) {
			particleMgr->clearDemoResourceManager();
			mEfxManager = nullptr;
		}
		if (mDemoPSM) {
			mDemoPSM->onDemoEnd();
			mDemoPSM = nullptr;
		}
		mMovieHeap->freeAll();
		int size = mMovieHeap->getTotalFreeSize();
		JUT_ASSERTLINE(1339, size == mMovieHeapFreeSize, "curr=%d init=%d free invalid\n", size, mMovieHeapFreeSize);
		mCurrentConfig = nullptr;
	}
	mTargetNavi   = nullptr;
	mTargetObject = nullptr;
	mAltNavi      = nullptr;
	mAltCamera    = nullptr;
	return isFlag(MVP_IsActive);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void MoviePlayer::do_stop()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E064
 * Size:	000324
 */
void MoviePlayer::setCamera(Camera* cam)
{
	P2JST::ObjectCamera* objcam = static_cast<P2JST::ObjectCamera*>(mObjectSystem->findObject("MyCamera", JStage::TEO_Camera));
	if (!objcam) {
		objcam = static_cast<P2JST::ObjectCamera*>(mObjectSystem->findObject("camera", JStage::TEO_Camera));
	}

	if (objcam) {
		cam->getSoundMatrixPtr();
		cam->getSoundPositionPtr();
		cam->getSoundPositionPtr();
		mDemoPSM->onDemoTop();
	} else {
		P2ASSERTLINE(1453, objcam);
		objcam->setCamera(getActiveGameCamera());

		PSM::DemoArg arg;
		arg.mName       = mCurrentConfig->mParam.mFolderName.mName;
		arg.mCameraName = mCameraName;
		arg.mBgmID      = mStreamID;

		cam->getSoundPositionPtr();
		cam->getSoundPositionPtr();
		cam->getSoundMatrixPtr();
		// mDemoPSM->init();

		cam->getViewMatrix(false);
		cam->getViewMatrix(false)->print("viewmat");
		cam->getSoundPositionPtr();
		cam->getSoundPositionPtr();
		cam->getSoundPositionPtr();
		mDemoPSM->onDemoTop();
	}

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r5, 3
	stw      r0, 0x64(r1)
	stmw     r27, 0x4c(r1)
	mr       r31, r3
	lis      r3, lbl_80499F10@ha
	mr       r27, r4
	addi     r29, r3, lbl_80499F10@l
	addi     r4, r29, 0x1d4
	lwz      r3, 0x1cc(r31)
	bl       findObject__Q34Game5P2JST12ObjectSystemCFPCcQ26JStage8TEObject
	or.      r28, r3, r3
	bne      lbl_8042E0B0
	lwz      r3, 0x1cc(r31)
	addi     r4, r2, lbl_80520658@sda21
	li       r5, 3
	bl       findObject__Q34Game5P2JST12ObjectSystemCFPCcQ26JStage8TEObject
	mr       r28, r3

lbl_8042E0B0:
	cmplwi   r28, 0
	bne      lbl_8042E20C
	lwz      r3, 0xb0(r31)
	cmplwi   r3, 0
	beq      lbl_8042E0CC
	lwz      r4, 0xa0(r3)
	b        lbl_8042E0D0

lbl_8042E0CC:
	li       r4, 0

lbl_8042E0D0:
	lwz      r5, 0x1a0(r31)
	li       r3, 0
	lwz      r0, 0xc4(r31)
	stw      r3, 0x38(r1)
	cmplwi   r5, 0
	lwz      r3, 0xc0(r31)
	stw      r4, 0x3c(r1)
	stw      r3, 0x38(r1)
	stw      r0, 0x40(r1)
	beq      lbl_8042E0FC
	b        lbl_8042E100

lbl_8042E0FC:
	lwz      r5, 0x190(r31)

lbl_8042E100:
	cmplwi   r5, 0
	beq      lbl_8042E1C4
	lwz      r4, 0x38(r1)
	lwz      r3, 0x3c(r1)
	lwz      r0, 0x40(r1)
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x28(r1)
	lwz      r3, 0x1a0(r31)
	cmplwi   r3, 0
	beq      lbl_8042E134
	mr       r28, r3
	b        lbl_8042E138

lbl_8042E134:
	lwz      r28, 0x190(r31)

lbl_8042E138:
	cmplwi   r3, 0
	beq      lbl_8042E148
	mr       r29, r3
	b        lbl_8042E14C

lbl_8042E148:
	lwz      r29, 0x190(r31)

lbl_8042E14C:
	cmplwi   r3, 0
	beq      lbl_8042E158
	b        lbl_8042E15C

lbl_8042E158:
	lwz      r3, 0x190(r31)

lbl_8042E15C:
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xac(r31)
	mr       r5, r29
	mr       r6, r30
	lwz      r12, 0(r3)
	addi     r7, r1, 0x20
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_8042E200

lbl_8042E1C4:
	lwz      r6, 0x38(r1)
	addi     r7, r1, 0x14
	lwz      r3, 0x3c(r1)
	li       r4, 0
	lwz      r0, 0x40(r1)
	li       r5, 0
	stw      r6, 0x14(r1)
	li       r6, 0
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r3, 0xac(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8042E200:
	lwz      r3, 0xac(r31)
	bl       onDemoTop__Q23PSM4DemoFv
	b        lbl_8042E374

lbl_8042E20C:
	bne      lbl_8042E224
	addi     r3, r29, 0x18
	addi     r5, r29, 0x28
	li       r4, 0x5ad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042E224:
	lwz      r0, 0x1a0(r31)
	cmplwi   r0, 0
	beq      lbl_8042E234
	b        lbl_8042E238

lbl_8042E234:
	lwz      r0, 0x190(r31)

lbl_8042E238:
	cmplwi   r0, 0
	beq      lbl_8042E244
	lwz      r27, 0x190(r31)

lbl_8042E244:
	mr       r3, r28
	mr       r4, r27
	bl       setCamera__Q34Game5P2JST12ObjectCameraFP6Camera
	lwz      r3, 0xb0(r31)
	cmplwi   r3, 0
	beq      lbl_8042E264
	lwz      r6, 0xa0(r3)
	b        lbl_8042E268

lbl_8042E264:
	li       r6, 0

lbl_8042E268:
	lwz      r0, 0xc4(r31)
	li       r5, 0
	lwz      r4, 0xc0(r31)
	mr       r3, r27
	stw      r5, 0x2c(r1)
	stw      r4, 8(r1)
	stw      r6, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r12, 0(r27)
	stw      r6, 0x30(r1)
	lwz      r12, 0x6c(r12)
	stw      r4, 0x2c(r1)
	stw      r0, 0x34(r1)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xac(r31)
	mr       r5, r30
	mr       r6, r29
	lwz      r12, 0(r3)
	addi     r7, r1, 8
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	addi     r4, r2, lbl_80520660@sda21
	bl       print__7MatrixfFPc
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xac(r31)
	bl       onDemoTop__Q23PSM4DemoFv

lbl_8042E374:
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void MoviePlayer::suspend(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E388
 * Size:	0000D0
 */
void MoviePlayer::unsuspend(long msg, bool flag)
{
	mStudioControl->mObject_control._20 -= msg;
	if (flag) {
		int id = mCurrentConfig->mMsgPauseNum;
		if (id == 0 || id <= mMessageEndCount) {
			gameSystem->setPause(true, "moviePl:unsuspend", 0);
			// some math that leads to nothing?
		} else {
			gameSystem->setPause(false, "moviePl:g33/susp", 3);
		}
		mDemoPSM->onMessageEnd(mMessageEndCount);
		mMessageEndCount++;
	}
}

/*
 * --INFO--
 * Address:	8042E458
 * Size:	0000C4
 */
void MoviePlayer::resetFrame()
{
	JUTAssertion::setMessageCount(0);
	if (mStudioControl->mStatus) {
		parse(1);
		mCounter                            = 0;
		mStudioControl->mObject_control._20 = 0;
	}
}

/*
 * --INFO--
 * Address:	8042E51C
 * Size:	00009C
 */
void MoviePlayer::setTransform(Vector3f& pos, f32 angle)
{
	mTransform                 = pos;
	mTransformAngle            = angle * (PI / 180) * PI;
	JStudio::TControl* control = mStudioControl;
	control->_75               = 1;
	control->_74               = 1;
	control                    = mStudioControl;

	control->transformOnGet_setOrigin(*(Vec*)&pos, angle);
	control->transformOnSet_setOrigin(*(Vec*)&pos, angle);
}

/*
 * --INFO--
 * Address:	8042E5B8
 * Size:	000034
 */
bool MoviePlayer::isPlaying(char* name)
{
	if (mCurrentConfig) {
		return mCurrentConfig->is(name);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void MoviePlayer::isLoadingBlack()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E5EC
 * Size:	000148
 */
void MoviePlayer::drawLoading(Graphics& gfx)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	li       r0, 0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r4
	stw      r29, 0x44(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	cmpwi    r3, 2
	beq      lbl_8042E62C
	cmpwi    r3, 3
	beq      lbl_8042E62C
	cmpwi    r3, 4
	bne      lbl_8042E630

lbl_8042E62C:
	li       r0, 1

lbl_8042E630:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8042E718
	addi     r3, r30, 0xbc
	lwz      r12, 0xbc(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r8, 0
	li       r0, 0xff
	stb      r8, 0x18(r1)
	addi     r31, r30, 0xbc
	mr       r3, r31
	addi     r4, r1, 8
	stb      r8, 0x19(r1)
	addi     r5, r1, 0xc
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stb      r8, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lwz      r3, 0xb0(r29)
	cmplwi   r3, 0
	beq      lbl_8042E6AC
	lhz      r0, 0xc0(r3)
	rlwinm   r0, r0, 0x1e, 0x1f, 0x1f
	b        lbl_8042E6B0

lbl_8042E6AC:
	li       r0, 0

lbl_8042E6B0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8042E718
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_80520610@sda21(r2)
	mr       r3, r31
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_80520670@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_8042E718:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042E734
 * Size:	000108
 */
void MoviePlayer::skip()
{
	setFlag(MVP_IsFinished);
	mDemoState = 6;
	mFadeTimer = 2.0f;
	mCanFinish = false;
	gameSystem->startFadeout(1.0f);
	mDemoPSM->onDemoFadeoutStart(30);
	gameSystem->setPause(false, "moviePl:skip", 1);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_80520654@sda21(r2)
	stw      r0, 0x44(r1)
	li       r0, 0
	lfs      f1, lbl_8052064C@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	li       r3, 6
	lwz      r4, 0x1f0(r31)
	ori      r4, r4, 2
	stw      r4, 0x1f0(r31)
	stw      r3, 0x18(r31)
	stfs     f0, 0xa0(r31)
	stb      r0, 0xa4(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xac(r31)
	li       r4, 0x1e
	bl       onDemoFadeoutStart__Q23PSM4DemoFUl
	lis      r4, lbl_8049A118@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8049A118@l
	li       r6, 0
	li       r4, 1
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r31, 0x1d0(r31)
	lwz      r0, 0x14(r31)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x2c(r1)
	b        lbl_8042E7FC

lbl_8042E7C0:
	lwz      r3, 0x2c(r1)
	lwzu     r4, -0xc(r3)
	lbz      r0, 0(r4)
	cmpwi    r0, 0x23
	bne      lbl_8042E7F0
	cmplwi   r3, 0
	beq      lbl_8042E7F0
	lwz      r12, 8(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8042E7F0:
	lwz      r3, 0x2c(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x2c(r1)

lbl_8042E7FC:
	lwz      r0, 0x2c(r1)
	addi     r3, r31, 0x14
	stw      r3, 0x14(r1)
	cmplw    r0, r3
	stw      r3, 0x10(r1)
	stw      r3, 0x28(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x20(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_8042E7C0
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
void MoviePlayer::draw2d()
{
	// UNUSED FUNCTION
}

} // namespace Game
