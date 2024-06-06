#include "Game/pelletMgr.h"
#include "og/Screen/DispMember.h"
#include "Screen/Game2DMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/GameLight.h"
#include "P2JME/P2JME.h"
#include "Controller.h"
#include "Sys/DrawBuffers.h"
#include "nans.h"

namespace Game {

struct OtakaraArray {
	int mConfigIndex;
	f32 mRadiusModifier;
} asArrayOtakara[] = { { -1, 1.0f } };

/**
 * @note Address: 0x8023B534
 * @note Size: 0x64
 */
void BaseGameSection::drawOtakaraWindow(Graphics& gfx)
{
	j3dSys.reinitGX();
	j3dSys.drawInit();
	do_drawOtakaraWindow(gfx);
}

/**
 * @note Address: 0x8023B598
 * @note Size: 0x94
 */
void BaseGameSection::setDraw2DCreature(Creature* creature)
{
	if (creature) {
		if (mDraw2DCreature) {
			mDraw2DCreature->getCreatureName();
			mDraw2DCreature->getCreatureID();

			creature->getCreatureName();
			creature->getCreatureID();
		}
	}

	mDraw2DCreature = creature;
}

/**
 * @note Address: 0x8023B62C
 * @note Size: 0x1E0
 */
void BaseGameSection::startZoomWindow()
{
	mTreasureGetState    = 1;
	mDraw2DCreatureScale = 0.0f;

	SysShape::Model* model = mDraw2DCreature->mModel;
	f32 modelRadius        = model->getRoughBoundingRadius();
	Vector3f center        = model->getRoughCenter();
	Vector3f& vecPtr       = center;

	if (mDraw2DCreature->getObjType() == OBJTYPE_Honey) {
		modelRadius *= 1.5f;
	}

	if (mDraw2DCreature->getObjType() == OBJTYPE_Pellet) {
		Pellet* p = (Pellet*)mDraw2DCreature;

		if (p->getKind() == PelletType::Treasure) {
			int configIdx = p->getConfigIndex();
			for (int i = 0; asArrayOtakara[i].mConfigIndex != -1; i++) {
				if (configIdx == asArrayOtakara[i].mConfigIndex) {
					modelRadius /= asArrayOtakara[i].mRadiusModifier;
					break;
				}
			}
		} else {
			p->getKind();
		}
	}

	f32 properDist = mTreasureZoomCamera->calcProperDistance(20.0f, modelRadius);
	Vector3f pos(0.0f, center.length(), 0.0f);
	mTreasureZoomCamera->init(properDist, properDist * JMath::sincosTable_.mTable[256].first, pos, mControllerP1);
	FORCE_DONT_INLINE;
}

/**
 * @note Address: 0x8023B80C
 * @note Size: 0x258
 */
void BaseGameSection::startKantei2D()
{
	if (mDraw2DCreature->isPellet()) {
		Pellet* obj = static_cast<Pellet*>(mDraw2DCreature);
		if (obj->getKind() == PelletType::Treasure || obj->getKind() == PelletType::Upgrade) {
			og::Screen::DispMemberKantei disp;
			PelletConfig* config  = obj->mConfig;
			int totalmoney        = playData->mPokoCount;
			int cavemoney         = playData->mCavePokoCount;
			disp.mPelletValue     = config->mParams.mMoney.mData;
			disp.mDelegate        = mKanteiDelegate;
			disp.mPelletMessageID = config->mParams.mMessage.mData;

			u32 idk1, idk2;
			P2JME::convertU64ToMessageID(disp.mPelletMessageID, &idk1, &idk2);

			disp.mTotalPokosCave = cavemoney;
			disp.mTotalPokos     = totalmoney + cavemoney;
			disp.mPelletOffset   = PelletList::Mgr::getOffsetFromDictionaryNo(obj->mConfig->mParams.mDictionary.mData - 1);
			if (gameSystem->isMultiplayerMode()) {
				disp.mSecondaryController = mControllerP2;
			} else {
				disp.mSecondaryController = nullptr;
			}
			Screen::gGame2DMgr->setGamePad(mControllerP1);
			Screen::gGame2DMgr->open_Kantei(disp);
		} else {
			og::Screen::DispMemberSpecialItem disp;
			disp.mDelegate = mKanteiDelegate;
			Screen::gGame2DMgr->setGamePad(mControllerP1);
			Screen::gGame2DMgr->open_SpecialItem(disp);
		}

	} else {
		og::Screen::DispMemberSpecialItem disp;
		disp.mDelegate = mKanteiDelegate;
		Screen::gGame2DMgr->setGamePad(mControllerP1);
		Screen::gGame2DMgr->open_SpecialItem(disp);
	}
}

/**
 * @note Address: 0x8023BA64
 * @note Size: 0xCC
 */
void BaseGameSection::onKanteiDone(Rectf& rect)
{
	Vector2f vec((rect.p1.x + rect.p2.x) / 2, (rect.p1.y + rect.p2.y) / 2);
	Vector2f* vecPtr = &vec;
	startZoomWindow();
	u32 x = sys->getRenderModeObj()->fbWidth;
	u32 y = sys->getRenderModeObj()->efbHeight;

	Vector2f renderSize(x, y);
	Vector2f start(0.0f, vec.y - renderSize.y * 0.5f);
	Vector2f end = Vector2f(0.0f, vec.y - renderSize.y * 0.5f) + renderSize;

	Rectf newrect(start, end);
	mTreasureGetViewport->setRect(newrect);
}

/**
 * @note Address: 0x8023BB30
 * @note Size: 0x114
 */
void BaseGameSection::ZoomCamera::init(f32 initialDistance, f32 targetDistance, Vector3f& pos, Controller* control)
{
	mController = control;
	f32 angle   = HALF_PI;
	f32 dist    = targetDistance / initialDistance;
	mAngleX     = HALF_PI;
	if (dist >= 1.0f) {
		angle = HALF_PI;
	} else if (dist <= -1.0f) {
		angle = -HALF_PI;
	} else if (dist < 0.0f) {
		angle = -JMath::asinAcosTable_.mTable[(u32)(-dist * 1023.5f)];
	} else {
		angle = JMath::asinAcosTable_.mTable[(u32)(dist * 1023.5f)];
	}
	mAngleY           = angle;
	mTargetFrontAngle = angle;

	mTargetDistance = initialDistance;
	mUnusedDist     = initialDistance;
	mTargetDistance *= 0.75f;
	mLookAtPosition = pos;
	makeLookAt();
}

/**
 * @note Address: 0x8023BC44
 * @note Size: 0x2B0
 */
void BaseGameSection::ZoomCamera::makeLookAt()
{
	f32 hFactor = sinf(mAngleY) * mTargetDistance;
	f32 y       = cosf(mAngleY) * mTargetDistance;

	mPosition = mLookAtPosition + Vector3f(hFactor * cosf(getAngleX()), y, hFactor * sinf(getAngleX()));

	mLookAtRotation = Vector3f(-cosf(getAngleX()) * cosf(mAngleY), sinf(mAngleY), -sinf(getAngleX()) * cosf(mAngleY));
}

/**
 * @note Address: 0x8023BEF4
 * @note Size: 0x164
 */
void BaseGameSection::ZoomCamera::doUpdate()
{
	bool xPassThreshold = false; // r4
	bool yPassThreshold = false; // r5

	f32 x   = mController->mMStick.mXPos;
	f32 val = x; // f3

	f64 absX = fabs(x);
	if ((f32)absX < 0.2f) {
		val = 0.0f;
	}

	if (!bool((f32)absX < 0.2f)) {
		xPassThreshold = true;
	}

	mAngleX -= (PI / 25) * val;
	if (mAngleX >= TAU) {
		mAngleX -= TAU;
	} else if (mAngleX < 0.0f) {
		mAngleX += TAU;
	}

	f32 y    = mController->mMStick.mYPos;
	f32 val2 = y; // f3

	f64 absY = fabs(y);
	if ((f32)absY < 0.2f) {
		val2 = 0.0f;
	}

	bool cStickYCheck = (f32)absY < 0.2f;
	if (!cStickYCheck) {
		yPassThreshold = true;
	}

	mAngleY -= (PI / 50) * val2;

	f32 lowerLim = mTargetFrontAngle - TORADIANS(30.6f);
	f32 upperLim = TORADIANS(30.6f) + mTargetFrontAngle;

	if (mAngleY < lowerLim) {
		mAngleY        = lowerLim;
		yPassThreshold = false;
	} else if (mAngleY > upperLim) {
		mAngleY        = upperLim;
		yPassThreshold = false;
	}

	if (xPassThreshold || yPassThreshold) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_OTAKARA_SCROLL, 0);
	}

	makeLookAt();
}

/**
 * @note Address: 0x8023C058
 * @note Size: 0x410
 */
void BaseGameSection::do_drawOtakaraWindow(Graphics& gfx)
{
	if (gameSystem->isZukanMode()) {
		return;
	}

	f32 time = sys->mDeltaTime;
	if (mDraw2DCreature && mDraw2DCreature->isPellet()) {
		Pellet* obj = static_cast<Pellet*>(mDraw2DCreature);
		if ((obj->getKind() == PelletType::Treasure || obj->getKind() == PelletType::Upgrade) && !Screen::gGame2DMgr->update_Kantei()
		    && mTreasureGetState == 2) {
			mTreasureGetState = 4;
			if (moviePlayer) {
				moviePlayer->unsuspend(1, false);
			}
		}
	}

	switch (mTreasureGetState) {
	case 0:
		return;
	case 1:
		mDraw2DCreatureScale += time * 2.0f;
		if (mDraw2DCreatureScale >= 1.0f) {
			mDraw2DCreatureScale = 1.0f;
			mTreasureGetState    = 2;
			mUnused2DCreatureVal = 6.0f;
		}
		break;
	case 2:
		break;
	case 3:
		mDraw2DCreatureScale = -(time * 10.0f - mDraw2DCreatureScale);
		mDraw2DCreatureScale = 0.0f;
		mDraw2DCreatureScale = 0.0f; // you know, just to be sure
		mTreasureGetState    = 0;
		if (moviePlayer) {
			moviePlayer->unsuspend(1, false);
		}
	}

	mTreasureLightMgr->update();
	Matrixf mtx;
	PSMTXIdentity(mtx.mMatrix.mtxView);
	mTreasureLightMgr->set(mtx);
	mTreasureZoomCamera->update();

	u16 y = sys->getRenderModeObj()->efbHeight;
	u16 x = sys->getRenderModeObj()->fbWidth;
	Rectf bounds(0.0f, 0.0f, x, y);
	gfx.clearZBuffer(bounds);

	Mtx mtx2;
	PSMTXCopy(j3dSys.mViewMtx, mtx2);
	Viewport* vp = mTreasureGetViewport;
	if (mDraw2DCreature) {
		vp->setJ3DViewMtx(false);
		Camera* cam = mTreasureZoomCamera;
		cam->setProjection();
		Matrixf* cammtx = cam->getViewMatrix(false);
		PSMTXCopy(cammtx->mMatrix.mtxView, j3dSys.mViewMtx);

		mDraw2DCreature->mLod.setFlag(AILOD_IsVisVP0 | AILOD_IsVisVP1 | AILOD_IsVisible);

		PSMTXIdentity(mDraw2DCreature->mBaseTrMatrix.mMatrix.mtxView);
		f32 scale = mDraw2DCreatureScale;
		scale *= scale;
		Vec scaleVec;
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;

		Vec* vecPtr = &scaleVec;

		Mtx mtx;
		PSMTXIdentity(mtx);
		PSMTXCopy(mtx, mDraw2DCreature->mModel->mJ3dModel->mPosMtx);
		mDraw2DCreature->doSetView(0);
		mDraw2DCreature->mModel->mJ3dModel->mModelScale = scaleVec;
		mDraw2DCreature->mModel->mJ3dModel->calc();

		SysShape::Model::setViewCalcModeInd();
		mDraw2DCreature->doViewCalc();
		SysShape::Model::setViewCalcModeImm();
		mDraw2DCreature->doViewCalc();
		setDrawBuffer(DB_2DLayer);
		mDraw2DCreature->doEntry();
		setDrawBuffer(DB_NormalLayer);
	}

	vp->setViewport();
	vp->setProjection();

	mOpaqueDrawBuffer->get(DB_2DLayer)->draw();
	mTransparentDrawBuffer->get(DB_2DLayer)->draw();
	mOpaqueDrawBuffer->get(DB_2DLayer)->frameInit();
	mTransparentDrawBuffer->get(DB_2DLayer)->frameInit();

	PSMTXCopy(mtx2, j3dSys.mViewMtx);
	j3dSys.reinitGX();
}

} // namespace Game
