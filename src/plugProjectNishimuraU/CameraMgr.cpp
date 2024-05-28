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
			if (mCurrPlayerMode == CAMNAVI_Olimar) {
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
void CameraMgr::setCameraAngle(f32 angle, int camID)
{
	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		PlayCamera* cam = mCameraObjList[i];
		if (cam) {
			cam->setCameraAngle(angle);
		}
	}
}

/**
 * @note Address: 0x802520CC
 * @note Size: 0x170
 */
void CameraMgr::update()
{
	if (!isCameraUpdateOn()) {
		return;
	}

	if (mCurrPlayerMode == CAMNAVI_Both) {
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

	if (mDelegate && (mCameraObjList[NAVIID_Olimar]->mChangePlayerState | mCameraObjList[NAVIID_Louie]->mChangePlayerState) == 0) {
		CameraArg arg;
		arg.mState = mCurrPlayerMode;
		mDelegate->invoke(&arg);
		mDelegate = nullptr;
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
		return;
	}

	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		if (!mViewportList[i]->viewable() || !isVibrationStart(type, i)) {
			continue;
		}

		Vector3f naviPos = mCameraObjList[i]->mTargetObj->getPosition();

		f32 min = pos.distance(naviPos);
		f32 max = mVibrationParms->mVibMaxDistance.mValue;
		if (min < max) {
			mCameraObjList[i]->startVibration(type, (max - min) / max);
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
		return;
	}

	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		if (!mViewportList[i]->viewable() || !isVibrationStart(type, i)) {
			continue;
		}

		mCameraObjList[i]->startVibration(type, 1.0f);
	}
}

/**
 * @note Address: 0x8025246C
 * @note Size: 0x70
 */
void CameraMgr::controllerLock(int camID)
{
	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		mCameraObjList[i]->mCanInput = false;
	}
}

/**
 * @note Address: 0x802524DC
 * @note Size: 0x70
 */
void CameraMgr::controllerUnLock(int camID)
{
	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		mCameraObjList[i]->mCanInput = true;
	}
}

/**
 * @note Address: 0x8025254C
 * @note Size: 0x90
 */
void CameraMgr::startDemoCamera(int camID, int type)
{
	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		mCameraObjList[i]->startDemoCamera(type);
	}
}

/**
 * @note Address: 0x802525DC
 * @note Size: 0x7C
 */
void CameraMgr::finishDemoCamera(int camID)
{
	int naviIDs[2];
	if (!isStartAndEnd(naviIDs, camID)) {
		return;
	}

	for (int i = naviIDs[0]; i < naviIDs[1]; i++) {
		mCameraObjList[i]->finishDemoCamera();
	}
}

/**
 * @note Address: 0x80252658
 * @note Size: 0x160
 */
void CameraMgr::changePlayerMode(int naviID, IDelegate1<Game::CameraArg*>* delegate)
{
	bool centerCamera = false;
	switch (naviID) {
	case NAVIID_Olimar: {
		if (mCurrPlayerMode == CAMNAVI_Louie) {
			CameraData data;
			mCameraObjList[NAVIID_Louie]->getCameraData(data);
			mCameraObjList[NAVIID_Olimar]->setCameraData(data);
			centerCamera = true;
		}

		mCameraObjList[NAVIID_Olimar]->setCameraParms(mCameraParms[0]);
		mCameraObjList[NAVIID_Olimar]->changePlayerMode(centerCamera);
		break;
	}
	case NAVIID_Louie: {
		if (mCurrPlayerMode == CAMNAVI_Olimar) {
			CameraData data;
			mCameraObjList[NAVIID_Olimar]->getCameraData(data);
			mCameraObjList[NAVIID_Louie]->setCameraData(data);
			centerCamera = true;
		}

		mCameraObjList[NAVIID_Louie]->setCameraParms(mCameraParms[0]);
		mCameraObjList[NAVIID_Louie]->changePlayerMode(centerCamera);
		break;
	}
	case NAVIID_Multiplayer: {
		mCameraObjList[NAVIID_Olimar]->setCameraParms(mCameraParms[1]);
		mCameraObjList[NAVIID_Olimar]->changePlayerMode(false);

		mCameraObjList[NAVIID_Louie]->setCameraParms(mCameraParms[1]);
		mCameraObjList[NAVIID_Louie]->changePlayerMode(false);
		break;
	}
	}
	mCurrPlayerMode = naviID;
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

	int changeFlag = 0;
	for (int i = 0; i < 2; i++) {
		changeFlag |= mCameraObjList[i]->mChangePlayerState;
		if (changeFlag & 1) {
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
		return;
	}

	JUT_PANICLINE(463, "not zukan mode\n");
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
bool CameraMgr::isStartAndEnd(int* naviIDs, int type)
{
	if (type == CAMNAVI_Both) { // both navi cameras
		naviIDs[0] = NAVIID_Olimar;
		naviIDs[1] = NAVIID_Both;
		return true;
	}

	if (type == CAMNAVI_Olimar) { // just olimar
		naviIDs[0] = NAVIID_Olimar;
		naviIDs[1] = NAVIID_Louie;
		return true;
	}

	if (type == CAMNAVI_Louie) { // just louie/president
		naviIDs[0] = NAVIID_Louie;
		naviIDs[1] = NAVIID_Both;
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
	stream.setMode(STREAM_MODE_TEXT, 1);
	mCameraParms[0]->read(stream);
	mCameraParms[1]->read(stream);
	mVibrationParms->read(stream);
}

} // namespace Game
