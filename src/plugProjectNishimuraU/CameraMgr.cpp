#include "Game/CameraMgr.h"
#include "Game/GameSystem.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Game/Navi.h"
#include "Viewport.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "246-CameraMgr";

namespace Game {

/*
 * --INFO--
 * Address:	80250988
 * Size:	000048
 */
CameraMgr::CameraMgr() { setName("CameraMgr"); }

/*
 * --INFO--
 * Address:	802509D0
 * Size:	00012C
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

/*
 * --INFO--
 * Address:	80250AFC
 * Size:	0004D0
 */
VibrationParms::VibrationParms()
    : Parameters(nullptr, "VibrationParms")
    , mElevationLightVib(this, 'celv', "ELEVATION_LIGHT(vib)", 1.0f, 0.0f, 10.0f)
    , mElevationMiddleVib(this, 'cemv', "ELEVATION_MIDDLE(vib)", 3.0f, 0.0f, 10.0f)
    , mElevationHardVib(this, 'cehv', "ELEVATION_HARD(vib)", 5.0f, 0.0f, 10.0f)
    , mElevationSlowSpeed(this, 'cess', "ELEVATION_SLOW(speed)", 15.0f, 0.0f, 100.0f)
    , mElevationMiddleSpeed(this, 'cems', "ELEVATION_MIDDLE(speed)", 25.0f, 0.0f, 100.0f)
    , mElevationFastSpeed(this, 'cefs', "ELEVATION_FAST(speed)", 35.0f, 0.0f, 100.0f)
    , mElevationShortTime(this, 'cest', "ELEVATION_SHORT(time)", 0.3f, 0.0f, 5.0f)
    , mElevationMiddleTime(this, 'cemt', "ELEVATION_MIDDLE(time)", 0.75f, 0.0f, 5.0f)
    , mElevationLongTime(this, 'celt', "ELEVATION_LONG(time)", 1.5f, 0.0f, 5.0f)
    , mElevationHardVib2(this, 'ceqv', "ELEVATION_HARD(Vib)", 20.0f, 0.0f, 100.0f)
    , mElevationHardSpeed(this, 'ceqs', "ELEVATION_HARD(Speed)", 35.0f, 0.0f, 100.0f)
    , mElevationHardTime(this, 'ceqt', "ELEVATION_HARD(Time)", 0.25f, 0.0f, 5.0f)
    , mZoomShortVib(this, 'czsv', "ZOOM_SHORT(Vib)", 25.0f, 0.0f, 100.0f)
    , mZoomShortSpeed(this, 'czss', "ZOOM_SHORT(Speed)", 35.0f, 0.0f, 100.0f)
    , mZoomShortTime(this, 'czst', "ZOOM_SHORT(Time)", 0.75f, 0.0f, 5.0f)
    , mAzimuthShortVib(this, 'casv', "AZIMUTH_SHORT(Vib)", 0.06f, 0.0f, 1.0f)
    , mAzimuthShortSpeed(this, 'cass', "AZIMUTH_SHORT(Speed)", 40.0f, 0.0f, 50.0f)
    , mAzimuthShortTime(this, 'cast', "AZIMUTH_SHORT(Time)", 0.75f, 0.0f, 5.0f)
    , mVibMaxDistance(this, 'cmdm', "Vib Max Distance", 750.0f, 0.0f, 1000.0f)
{
}

/*
 * --INFO--
 * Address:	80250FCC
 * Size:	000E78
 */
CameraParms::CameraParms()
    : Parameters(nullptr, "CameraParms")
    , mCnld(this, 'cnld', "Near(Low)距離", 600.0f, 10.0f, 5000.0f)
    , mCnla(this, 'cnla', "Near(Low)アングル", 20.0f, 0.0f, 90.0f)
    , mCnlf(this, 'cnlf', "Near(Low)ＦＯＶ", 10.0f, 1.0f, 60.0f)
    , mCnlo(this, 'cnlo', "Near(Low)オフセット", 25.0f, 10.0f, 500.0f)
    , mCnlw(this, 'cnlw', "Near(Low)ウェイト", 1000.0f, 10.0f, 5000.0f)
    , mNldt(this, 'nldt', "Near(Low)Detached", 17.5f, 0.0f, 1000.0f)
    , mNlnc(this, 'nlnc', "Near(Low)Near", 1.0f, 1.0f, 12800.0f)
    , mNlfc(this, 'nlfc', "Near(Low)Far", 12800.0f, 1.0f, 12800.0f)
    , mCmld(this, 'cmld', "Mid(Low)距離", 600.0f, 10.0f, 5000.0f)
    , mCmla(this, 'cmla', "Mid(Low)アングル", 21.0f, 0.0f, 90.0f)
    , mCmlf(this, 'cmlf', "Mid(Low)ＦＯＶ", 23.0f, 1.0f, 60.0f)
    , mCmlo(this, 'cmlo', "Mid(Low)オフセット", 38.0f, 10.0f, 500.0f)
    , mCmlw(this, 'cmlw', "Mid(Low)ウェイト", 500.0f, 10.0f, 5000.0f)
    , mMldt(this, 'mldt', "Mid(Low)Detached", 55.0f, 0.0f, 1000.0f)
    , mMlnc(this, 'mlnc', "Mid(Low)Near", 1.0f, 1.0f, 12800.0f)
    , mMlfc(this, 'mlfc', "Mid(Low)Far", 12800.0f, 1.0f, 12800.0f)
    , mCfld(this, 'cfld', "Far(Low)距離", 900.0f, 10.0f, 5000.0f)
    , mCfla(this, 'cfla', "Far(Low)アングル", 25.0f, 0.0f, 90.0f)
    , mCflf(this, 'cflf', "Far(Low)ＦＯＶ", 26.0f, 1.0f, 60.0f)
    , mCflo(this, 'cflo', "Far(Low)オフセット", 33.0f, 10.0f, 500.0f)
    , mCflw(this, 'cflw', "Far(Low)ウェイト", 400.0f, 10.0f, 5000.0f)
    , mFldt(this, 'fldt', "Far(Low)Detached", 130.0f, 0.0f, 1000.0f)
    , mFlnc(this, 'flnc', "Far(Low)Near", 1.0f, 1.0f, 12800.0f)
    , mFlfc(this, 'flfc', "Far(Low)Far", 12800.0f, 1.0f, 12800.0f)
    , mCnhd(this, 'cnhd', "Near(High)距離", 900.0f, 10.0f, 5000.0f)
    , mCnha(this, 'cnha', "Near(High)アングル", 60.0f, 0.0f, 90.0f)
    , mCnhf(this, 'cnhf', "Near(High)ＦＯＶ", 10.0f, 1.0f, 60.0f)
    , mCnho(this, 'cnho', "Near(High)オフセット", 40.0f, 10.0f, 500.0f)
    , mCnhw(this, 'cnhw', "Near(High)ウェイト", 1000.0f, 10.0f, 5000.0f)
    , mNhdt(this, 'nhdt', "Near(High)Detached", 27.5f, 0.0f, 1000.0f)
    , mNhnc(this, 'nhnc', "Near(High)Near", 1.0f, 1.0f, 12800.0f)
    , mNhfc(this, 'nhfc', "Near(High)Far", 12800.0f, 1.0f, 12800.0f)
    , mCmhd(this, 'cmhd', "Mid(High)距離", 900.0f, 10.0f, 5000.0f)
    , mCmha(this, 'cmha', "Mid(High)アングル", 60.0f, 0.0f, 90.0f)
    , mCmhf(this, 'cmhf', "Mid(High)ＦＯＶ", 20.0f, 1.0f, 60.0f)
    , mCmho(this, 'cmho', "Mid(High)オフセット", 70.0f, 10.0f, 500.0f)
    , mCmhw(this, 'cmhw', "Mid(High)ウェイト", 500.0f, 10.0f, 5000.0f)
    , mMhdt(this, 'mhdt', "Mid(High)Detached", 75.0f, 0.0f, 1000.0f)
    , mMhnc(this, 'mhnc', "Mid(High)Near", 1.0f, 1.0f, 12800.0f)
    , mMhfc(this, 'mhfc', "Mid(High)Far", 12800.0f, 1.0f, 12800.0f)
    , mCfhd(this, 'cfhd', "Far(High)距離", 1200.0f, 10.0f, 5000.0f)
    , mCfha(this, 'cfha', "Far(High)アングル", 60.0f, 0.0f, 90.0f)
    , mCfhf(this, 'cfhf', "Far(High)ＦＯＶ", 30.0f, 1.0f, 60.0f)
    , mCfho(this, 'cfho', "Far(High)オフセット", 100.0f, 10.0f, 500.0f)
    , mCfhw(this, 'cfhw', "Far(High)ウェイト", 200.0f, 10.0f, 5000.0f)
    , mFhdt(this, 'fhdt', "Far(High)Detached", 165.0f, 0.0f, 1000.0f)
    , mFhnc(this, 'fhnc', "Far(High)Near", 1.0f, 1.0f, 12800.0f)
    , mFhfc(this, 'fhfc', "Far(High)Far", 12800.0f, 1.0f, 12800.0f)
    , mZmdt(this, 'zmdt', "ZOOM 距離", 250.0f, 10.0f, 5000.0f)
    , mZman(this, 'zman', "ZOOM アングル", 12.0f, 0.0f, 90.0f)
    , mZmfv(this, 'zmfv', "ZOOM ＦＯＶ", 35.0f, 1.0f, 90.0f)
    , mClcr(this, 'clcr', "コリジョン半径", 300.0f, 0.0f, 500.0f)
    , mClms(this, 'clms', "コリジョン補間速度", 0.005f, 0.001f, 1.0f)
    , mClmh(this, 'clmh', "コリジョン補正高", 5.0f, 0.0f, 100.0f)
    , mClnh(this, 'clnh', "コリジョン無し高", 25.0f, 0.0f, 500.0f)
    , mCpmd(this, 'cpmd', "設定変更速度", 0.1f, 0.0f, 1.0f)
    , mCmmt(this, 'cmmt', "回転速度", 0.2f, 0.0f, 1.0f)
    , mCmft(this, 'cmft', "回転追従時間", 0.6f, 0.0f, 3.0f)
    , mCmta(this, 'cmta', "回転加速度", 0.005f, 0.0f, 1.0f)
    , mCmtm(this, 'cmtm', "回転最高速度", 0.9f, 0.0f, 5.0f)
    , mCmtb(this, 'cmtb', "回転減衰率", 0.85f, 0.0f, 1.0f)
{
}

/*
 * --INFO--
 * Address:	80251E44
 * Size:	0000A8
 */
void CameraMgr::setViewport(Viewport* vp, int id)
{
	mViewportList[id] = vp;
	P2ASSERTLINE(82, mViewportList[id]);
	mCameraObjList[id] = static_cast<PlayCamera*>(mViewportList[id]->mCamera);
	P2ASSERTLINE(85, mCameraObjList[id]);
}

/*
 * --INFO--
 * Address:	80251EEC
 * Size:	00014C
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

/*
 * --INFO--
 * Address:	80252038
 * Size:	000094
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

/*
 * --INFO--
 * Address:	802520CC
 * Size:	000170
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

/*
 * --INFO--
 * Address:	8025223C
 * Size:	000154
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

/*
 * --INFO--
 * Address:	80252390
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	8025246C
 * Size:	000070
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

/*
 * --INFO--
 * Address:	802524DC
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8025254C
 * Size:	000090
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

/*
 * --INFO--
 * Address:	802525DC
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80252658
 * Size:	000160
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

/*
 * --INFO--
 * Address:	802527B8
 * Size:	000058
 */
bool CameraMgr::isChangePlayer()
{
	if (mDelegate) {
		return true;
	}
	u32 test = mCameraObjList[0]->mChangePlayerState & 1;
	for (int i = 0; i < 2; i++) {
		test |= mCameraObjList[i]->mChangePlayerState & 1;
		if (test)
			return true;
	}
	return false;
	/*
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_802527CC
	li       r3, 1
	blr

lbl_802527CC:
	lwz      r4, 0x24(r3)
	lwz      r3, 0(r4)
	lwz      r3, 0x19c(r3)
	clrlwi.  r0, r3, 0x1f
	mr       r5, r3
	beq      lbl_802527EC
	li       r3, 1
	blr

lbl_802527EC:
	lwz      r3, 4(r4)
	lwz      r3, 0x19c(r3)
	or       r5, r5, r3
	clrlwi.  r0, r5, 0x1f
	beq      lbl_80252808
	li       r3, 1
	blr

lbl_80252808:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80252810
 * Size:	000058
 */
void CameraMgr::setZukanCamera(LookAtCamera* cam)
{
	if (gameSystem && gameSystem->isPiklopedia()) {
		mZukanCamera = cam;
	} else {
		JUT_PANICLINE(463, "not zukan mode\n");
	}
}

/*
 * --INFO--
 * Address:	80252868
 * Size:	000028
 */
bool CameraMgr::isCameraUpdateOn()
{
	if (gameSystem && !gameSystem->mIsFrozen) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80252890
 * Size:	000068
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

/*
 * --INFO--
 * Address:	802528F8
 * Size:	000084
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

/*
 * --INFO--
 * Address:	8025297C
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	80252A24
 * Size:	000074
 */
void CameraMgr::readParameter(Stream& stream)
{
	stream.resetPosition(true, true);
	mCameraParms[0]->read(stream);
	mCameraParms[1]->read(stream);
	mVibrationParms->read(stream);
}

} // namespace Game
