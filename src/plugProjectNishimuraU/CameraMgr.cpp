#include "Game/CameraMgr.h"
#include "Game/GameSystem.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Game/Navi.h"
#include "Viewport.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "246-CameraMgr";

namespace Game {

CameraMgr* cameraMgr;

/**
 * @note Address: 0x80250988
 * @note Size: 0x48
 */
CameraMgr::CameraMgr() { setName("CameraMgr"); }

/**
 * @note Address: 0x802509D0
 * @note Size: 0x12C
 */
void CameraMgr::loadResource()
{
	mCurrPlayerMode     = -1;
	mCameraVibrateState = new int[2];
	mViewportList       = new Viewport*[2];
	mCameraObjList      = new PlayCamera*[2];
	mCameraParms[0]     = new CameraParms;
	mCameraParms[1]     = new CameraParms;
	mVibrationParms     = new VibrationParms;
	mDelegate           = nullptr;
	mZukanCamera        = nullptr;
	for (int i = 0; i < 2; i++) {
		mCameraVibrateState[i] = 0;
		mViewportList[i]       = nullptr;
		mCameraObjList[i]      = nullptr;
	}
	if (gameSystem && gameSystem->mIsInCave) {
		readCameraParms("/user/Nishimura/Camera/caveCameraParms.txt");
	} else {
		readCameraParms("/user/Nishimura/Camera/groundCameraParms.txt");
	}
}

/**
 * @note Address: 0x80251E44
 * @note Size: 0xA8
 */
void CameraMgr::setViewport(Viewport* vp, int id)
{
	mViewportList[id] = vp;
	P2ASSERTLINE(82, mViewportList[id]);
	mCameraObjList[id] = static_cast<PlayCamera*>(mViewportList[id]->mCamera);
	P2ASSERTLINE(85, mCameraObjList[id]);
}

/**
 * @note Address: 0x80251EEC
 * @note Size: 0x14C
 */
void CameraMgr::init(int state)
{
	P2ASSERTLINE(94, mCameraParms[0]);
	P2ASSERTLINE(95, mCameraParms[1]);
	P2ASSERTLINE(96, mVibrationParms);
	mCurrPlayerMode = state;
	mDelegate       = nullptr;
	mZukanCamera    = nullptr;
	for (int i = 0; i < 2; i++) {
		mCameraVibrateState[i] = 0;
		PlayCamera* cam        = mCameraObjList[i];
		if (cam) {
			if (mCurrPlayerMode == 0) {
				cam->setCameraParms(mCameraParms[0]);
			} else {
				cam->setCameraParms(mCameraParms[1]);
			}
			mCameraObjList[i]->setVibrationParms(mVibrationParms);
			mCameraObjList[i]->init();
		} else {
			JUT_PANICLINE(124, "camera is none\n");
		}
	}
}

/**
 * @note Address: 0x80252038
 * @note Size: 0x94
 */
void CameraMgr::setCameraAngle(f32 angle, int id)
{
	int test[2];
	if (isStartAndEnd(test, id)) {
		for (int i = test[0]; i < test[1]; i++) {
			PlayCamera* cam = mCameraObjList[i];
			if (cam) {
				cam->setCameraAngle(angle);
			}
		}
	}
}

/**
 * @note Address: 0x802520CC
 * @note Size: 0x170
 */
void CameraMgr::update()
{
	if (isCameraUpdateOn()) {
		if (mCurrPlayerMode == 2) {
			for (int i = 0; i < 2; i++) {
				mCameraObjList[i]->update();
			}
		} else {
			Navi* navi = naviMgr->getActiveNavi();
			if (navi) {
				int id = navi->mNaviIndex;
				mCameraObjList[id]->update();
				Mtx mtx;
				PSMTXCopy(mCameraObjList[id]->mLookMatrix.mMatrix.mtxView, mtx);
				CameraData data;
				mCameraObjList[id]->getCameraData(data);
				id ^= 1;
				PSMTXCopy(mtx, mCameraObjList[id]->mLookMatrix.mMatrix.mtxView);
				mCameraObjList[id]->setCameraData(data);
				mCameraObjList[id]->noUpdate();
			} else {
				for (int i = 0; i < 2; i++) {
					mCameraObjList[i]->update();
				}
			}
		}
		if (mDelegate && (mCameraObjList[0]->mChangePlayerState | mCameraObjList[1]->mChangePlayerState) == 0) {
			CameraArg arg;
			arg.state = mCurrPlayerMode;
			mDelegate->invoke(&arg);
			mDelegate = nullptr;
		}
	}
}

/**
 * @note Address: 0x8025223C
 * @note Size: 0x154
 */
void CameraMgr::startVibration(int type, Vector3f& pos, int camID)
{
	if (mZukanCamera) {
		mZukanCamera->startVibration(type);
	} else {
		int test[2];
		if (isStartAndEnd(test, camID)) {
			for (int i = test[0]; i < test[1]; i++) {
				if (mViewportList[i]->viewable() && isVibrationStart(type, i)) {
					Vector3f naviPos = mCameraObjList[i]->mTargetObj->getPosition();
					f32 min          = pos.distance(naviPos);
					f32 max          = mVibrationParms->mVibMaxDistance.mValue;
					if (min < max) {
						mCameraObjList[i]->startVibration(type, (max - min) / max);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80252390
 * @note Size: 0xDC
 */
void CameraMgr::startVibration(int type, int camID)
{
	if (mZukanCamera) {
		mZukanCamera->startVibration(type);
	} else {
		int test[2];
		if (isStartAndEnd(test, camID)) {
			for (int i = test[0]; i < test[1]; i++) {
				if (mViewportList[i]->viewable() && isVibrationStart(type, i)) {
					mCameraObjList[i]->startVibration(type, 1.0f);
				}
			}
		}
	}
}

/**
 * @note Address: 0x8025246C
 * @note Size: 0x70
 */
void CameraMgr::controllerLock(int camID)
{
	int test[2];
	if (isStartAndEnd(test, camID)) {
		for (int i = test[0]; i < test[1]; i++) {
			mCameraObjList[i]->mCanInput = false;
		}
	}
}

/**
 * @note Address: 0x802524DC
 * @note Size: 0x70
 */
void CameraMgr::controllerUnLock(int camID)
{
	int test[2];
	if (isStartAndEnd(test, camID)) {
		for (int i = test[0]; i < test[1]; i++) {
			mCameraObjList[i]->mCanInput = true;
		}
	}
}

/**
 * @note Address: 0x8025254C
 * @note Size: 0x90
 */
void CameraMgr::startDemoCamera(int camID, int type)
{
	int test[2];
	if (isStartAndEnd(test, camID)) {
		for (int i = test[0]; i < test[1]; i++) {
			mCameraObjList[i]->startDemoCamera(type);
		}
	}
}

/**
 * @note Address: 0x802525DC
 * @note Size: 0x7C
 */
void CameraMgr::finishDemoCamera(int camID)
{
	int test[2];
	if (isStartAndEnd(test, camID)) {
		for (int i = test[0]; i < test[1]; i++) {
			mCameraObjList[i]->finishDemoCamera();
		}
	}
}

/**
 * @note Address: 0x80252658
 * @note Size: 0x160
 */
void CameraMgr::changePlayerMode(int state, IDelegate1<Game::CameraArg*>* delegate)
{
	bool flag = false;
	switch (state) {
	case 0: {
		if (mCurrPlayerMode == 1) {
			CameraData data;
			mCameraObjList[1]->getCameraData(data);
			mCameraObjList[0]->setCameraData(data);
			flag = true;
		}
		mCameraObjList[0]->setCameraParms(mCameraParms[0]);
		mCameraObjList[0]->changePlayerMode(flag);
		break;
	}
	case 1: {
		if (mCurrPlayerMode == 0) {
			CameraData data;
			mCameraObjList[0]->getCameraData(data);
			mCameraObjList[1]->setCameraData(data);
			flag = true;
		}
		mCameraObjList[1]->setCameraParms(mCameraParms[0]);
		mCameraObjList[1]->changePlayerMode(flag);
		break;
	}
	case 2: {
		mCameraObjList[0]->setCameraParms(mCameraParms[1]);
		mCameraObjList[0]->changePlayerMode(false);
		mCameraObjList[1]->setCameraParms(mCameraParms[1]);
		mCameraObjList[1]->changePlayerMode(false);
		break;
	}
	}
	mCurrPlayerMode = state;
	mDelegate       = delegate;
}

/**
 * @note Address: 0x802527B8
 * @note Size: 0x58
 */
bool CameraMgr::isChangePlayer()
{
	if (mDelegate) {
		return true;
	}

	int test = 0;
	for (int i = 0; i < 2; i++) {
		test |= mCameraObjList[i]->mChangePlayerState;
		if (test & 1) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x80252810
 * @note Size: 0x58
 */
void CameraMgr::setZukanCamera(LookAtCamera* cam)
{
	if (gameSystem && gameSystem->isZukanMode()) {
		mZukanCamera = cam;
	} else {
		JUT_PANICLINE(463, "not zukan mode\n");
	}
}

/**
 * @note Address: 0x80252868
 * @note Size: 0x28
 */
bool CameraMgr::isCameraUpdateOn()
{
	if (gameSystem && !gameSystem->mIsFrozen) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80252890
 * @note Size: 0x68
 */
bool CameraMgr::isStartAndEnd(int* data, int type)
{
	if (type == 2) {
		data[0] = 0;
		data[1] = 2;
		return true;
	}
	if (type == 0) {
		data[0] = 0;
		data[1] = 1;
		return true;
	}
	if (type == 1) {
		data[0] = 1;
		data[1] = 2;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x802528F8
 * @note Size: 0x84
 */
bool CameraMgr::isVibrationStart(int type, int camID)
{
	if (mCameraObjList[camID]->isVibration()) {
		if (type >= mCameraVibrateState[camID]) {
			mCameraVibrateState[camID] = type;
			return true;
		}
	} else {
		mCameraVibrateState[camID] = type;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8025297C
 * @note Size: 0xA8
 */
void CameraMgr::readCameraParms(char* path)
{
	void* file = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (file) {
		RamStream stream(file, -1);
		readParameter(stream);
		delete[] file;
	} else {
		JUT_PANICLINE(559, "camera parameter none\n");
	}
}

/**
 * @note Address: 0x80252A24
 * @note Size: 0x74
 */
void CameraMgr::readParameter(Stream& stream)
{
	stream.resetPosition(true, true);
	mCameraParms[0]->read(stream);
	mCameraParms[1]->read(stream);
	mVibrationParms->read(stream);
}

} // namespace Game
