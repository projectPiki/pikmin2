#include "Game/plantsMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/GameSystem.h"
#include "efx/TWatage.h"
#include "PSM/Navi.h"
#include "nans.h"

namespace Game {

/*
 * --INFO--
 * Address:	803583CC
 * Size:	000050
 */
void Plants::Obj::setParameters()
{
	EnemyBase::setParameters();
	Vector3f pos = mPosition;
	pos.y += static_cast<EnemyParmsBase*>(mParms)->mGeneral.mTerritoryRadius.mValue;
	mCurLodSphere.mPosition = pos;
}

/*
 * --INFO--
 * Address:	8035841C
 * Size:	000020
 */
void Plants::Obj::birth(Vector3f& position, f32 faceDir) { EnemyBase::birth(position, faceDir); }

/*
 * --INFO--
 * Address:	8035843C
 * Size:	0001A8
 */
void Plants::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	enableEvent(0, EB_Invulnerable);

	show();
	setEmotionNone();
	disableEvent(0, EB_PlatformCollEnabled);

	enableEvent(0, EB_BitterImmune);
	hardConstraintOn();
	_2BC = 0;
	_2BD = 0;
	mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);

	P2ASSERTLINE(83, mModel);

	startMotion(PLANTANIM_Default, nullptr);

	SysShape::Animator* animator                                  = &mAnimator->getAnimator();
	SysShape::Model* model                                        = mModel;
	model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = static_cast<J3DMtxCalcAnmBase*>(animator->getCalc());
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	setCollisionFlick(false);

	if (shadowMgr) {
		shadowMgr->killShadow(this);
	}

	mSpawnsSpectralids = false;
	if (mPelletInfo.mColor == 0 && mPelletInfo.mSize == 1) {
		mSpawnsSpectralids = true;
	}
}

/*
 * --INFO--
 * Address:	803585E4
 * Size:	0000EC
 */
Plants::Obj::Obj() { mAnimator = new ProperAnimator; }

/*
 * --INFO--
 * Address:	803586D0
 * Size:	000048
 */
void Plants::Obj::update()
{
	if (isCullingOff()) {
		doUpdate();
	}
}

/*
 * --INFO--
 * Address:	80358718
 * Size:	00006C
 */
void Plants::Obj::doAnimation()
{
	EnemyBase::doAnimation();
	if (_2BC && mCurAnim->mIsPlaying && (u32)mCurAnim->mType == KEYEVENT_END) {
		_2BC = 0;
		_2BD = 0;
		setZukanVisible(false);
	}
}

/*
 * --INFO--
 * Address:	80358784
 * Size:	00009C
 */
void Plants::Obj::doAnimationCullingOff()
{
	if (_2BC) {
		mCurAnim->mIsPlaying = false;
		doAnimationUpdateAnimator();
		if (mLod.isFlag(AILOD_IsVisible)) {
			mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			mModel->mJ3dModel->calc();
		}
	}
}

/*
 * --INFO--
 * Address:	80358820
 * Size:	000020
 */
void Plants::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80358840
 * Size:	000150
 */
void Plants::Obj::collisionCallback(CollEvent& collEvent)
{
	if (mLod.isFlag(AILOD_IsVisible)) {
		setCollEvent(collEvent);
		Creature* creature = collEvent.mCollidingCreature;
		if (creature) {
			Vector3f creaturePos = creature->getPosition();
			if (!(creaturePos.y < mPosition.y - 5.0f)) {
				Vector3f velocity = creature->getVelocity();

				if (FABS(velocity.x) > 1.0f || FABS(velocity.z) > 1.0f) {
					if (creature->isNavi() && !_2BD) {
						_2BD = 1;
						touchedSE(static_cast<Navi*>(creature));
					}

					if (!_2BC) {
						startMotion(PLANTANIM_Default, nullptr);
						touched();
						_2BC = 1;
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80358990
 * Size:	000060
 */
bool Plants::Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (!_2BC) {
		startMotion(PLANTANIM_Default, nullptr);
		touched();
		_2BC = 1;
	}

	return false;
}

/*
 * --INFO--
 * Address:	803589F0
 * Size:	0000A0
 */
void Plants::Obj::touched()
{
	if (mSpawnsSpectralids) {
		mSpawnsSpectralids    = false;
		ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (mgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition   = mPosition;
			birthArg.mPosition.y = mPosition.y + static_cast<EnemyParmsBase*>(mParms)->mGeneral.mLifeMeterHeight.mValue;
			birthArg.mFaceDir    = 0.0f;

			mgr->createGroupByPlants(birthArg, 5);
		}
	}
}

/*
 * --INFO--
 * Address:	80358A90
 * Size:	000040
 */
void Plants::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_LEAF, 0);
	}
}

/*
 * --INFO--
 * Address:	80358AD0
 * Size:	000040
 */
void HikariKinoko::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_KINOKO, 0);
	}
}

/*
 * --INFO--
 * Address:	80358B10
 * Size:	000048
 */
void Watage::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358B58
 * Size:	000104
 */
void Watage::Obj::touched()
{
	if (mSpawnsSpectralids) {
		mSpawnsSpectralids    = false;
		ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (mgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition   = mPosition;
			birthArg.mPosition.y = mPosition.y + static_cast<EnemyParmsBase*>(mParms)->mGeneral.mLifeMeterHeight.mValue;
			birthArg.mFaceDir    = 0.0f;

			mgr->createGroupByPlants(birthArg, 5);
		}
	}

	efx::TWatage watageEFX;
	efx::Arg arg(mPosition);

	watageEFX.create(&arg);
}

/*
 * --INFO--
 * Address:	80358C5C
 * Size:	000048
 */
void Nekojarashi::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358CA4
 * Size:	000040
 */
void DiodeRed::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_DIODE, 0);
	}
}

/*
 * --INFO--
 * Address:	80358CE4
 * Size:	000048
 */
void DiodeRed::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358D2C
 * Size:	000040
 */
void DiodeGreen::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_DIODE, 0);
	}
}

/*
 * --INFO--
 * Address:	80358D6C
 * Size:	000048
 */
void DiodeGreen::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

} // namespace Game
