#include "Game/Entities/Egg.h"
#include "Game/MapMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/PelletNumber.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Egg {

/*
 * --INFO--
 * Address:	8034BB30
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	8034BB50
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 p1) { EnemyBase::birth(position, p1); }

/*
 * --INFO--
 * Address:	8034BB70
 * Size:	000150
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	setEmotionNone();
	enableEvent(0, EB_BitterImmune);
	mIsFalling = false;
	mFsm->start(this, 0, nullptr);

	if (!isBirthTypeDropGroup()) {
		enableEvent(0, EB_Constrained);
		if (mapMgr) {
			Vector3f position = mPosition;
			position.y += 20.0f;
			mPosition.y = mapMgr->getMinY(position);
		}

		mCurAnim->mIsPlaying = false;
		doAnimationUpdateAnimator();

		mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);

		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
	}
}

/*
 * --INFO--
 * Address:	8034BCC0
 * Size:	000138
 */
Obj::Obj()
{
	mFsm      = nullptr;
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8034BE44
 * Size:	00006C
 */
void Obj::doUpdate()
{
	if (mBounceTriangle) {
		mTargetVelocity = Vector3f(0.0f);
	} else {
		mTargetVelocity = mCurrentVelocity;
	}

	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	8034BEB0
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034BEB4
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8034BED4
 * Size:	00004C
 */
void Obj::doSimulation(f32 constraint)
{
	if (mCaptureMatrix) {
		mPosition = mCaptureMatrix->getBasis(3);
		updateSpheres();
	} else {
		EnemyBase::doSimulation(constraint);
	}
}

/*
 * --INFO--
 * Address:	8034BF20
 * Size:	000128
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	bool check;
	Vector3f vec = mBaseTrMatrix.getBasis(3);
	if (mCaptureMatrix) {
		check             = false;
		Vector3f checkVec = mCaptureMatrix->getBasis(3);
		if (vec.x != checkVec.x || vec.y != checkVec.y || vec.z != checkVec.z) {
			check = true;
			PSMTXCopy(mCaptureMatrix->mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);
		}
	} else {
		check = false;
		if (mPosition.x != vec.x || mPosition.y != vec.y || mPosition.z != vec.z) {
			check = true;
			mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
		}
	}

	if (check || !isStopMotion()) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		mCollTree->update();
	}
}

/*
 * --INFO--
 * Address:	8034C048
 * Size:	000008
 */
bool Obj::pressCallBack(Creature*, f32, CollPart*) { return false; }

/*
 * --INFO--
 * Address:	8034C050
 * Size:	000054
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (mIsFalling || isBirthTypeDropGroup()) {
		enableEvent(0, EB_LifegaugeVisible);
		mHealth = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8034C0A4
 * Size:	000090
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	EnemyBase::collisionCallback(collEvent);
	if (isBirthTypeDropGroup() && collEvent.mCollidingCreature != nullptr && !collEvent.mCollidingCreature->isTeki() && getStateID() == 0) {
		enableEvent(0, EB_LifegaugeVisible);
		mHealth = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8034C134
 * Size:	000050
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mPosition.y               = mPosition.y + 2.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 20.0f;
	shadowParam.mSize                     = 10.0f;
}

/*
 * --INFO--
 * Address:	8034C184
 * Size:	000048
 */
bool Obj::needShadow()
{
	bool result = (!EnemyBase::needShadow()) ? false : (mCaptureMatrix == nullptr);
	return result;
}

/*
 * --INFO--
 * Address:	8034C1CC
 * Size:	0000A0
 */
void Obj::onStartCapture()
{
	if (mCaptureMatrix) {
		Vector3f position = mCaptureMatrix->getBasis(3);
		onSetPosition(position);
		mCurrentVelocity = Vector3f(0.0f);
		mTargetVelocity  = Vector3f(0.0f);
		enableEvent(0, EB_Constrained);
		enableEvent(0, EB_Invulnerable);
		disableEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	8034C26C
 * Size:	000040
 */
void Obj::onEndCapture()
{
	constraintOff();
	mIsFalling = true;
	enableEvent(0, EB_Cullable);
}

/*
 * --INFO--
 * Address:	8034C2AC
 * Size:	0005F4
 */
void Obj::genItem()
{
	TamagoMushi::Obj* mititeGroup;
	int dropType = EGGDROP_SingleNectar;
	Vector3f velocity(0.0f, 250.0f, 0.0f);
	Vector3f position = mPosition;
	position.y += 2.0f;

	f32 randVal = randFloat();
	f32 test    = C_PARMS->mProperParms.mSingleNectarChance.mValue;
	if (randVal < test) {
		dropType = EGGDROP_SingleNectar;
	} else {
		test += C_PARMS->mProperParms.mDoubleNectarChance.mValue;
		if (randVal < test) {
			dropType = EGGDROP_DoubleNectar;
		} else {
			test += C_PARMS->mProperParms.mMititesChance.mValue;
			if (randVal < test) {
				dropType = EGGDROP_Mitites;
			} else {
				test += C_PARMS->mProperParms.mSpicyChance.mValue;
				if (randVal < test) {
					dropType = EGGDROP_Spicy;
				} else {
					test += C_PARMS->mProperParms.mBitterChance.mValue;
					if (randVal < test) {
						dropType = EGGDROP_Bitter;
					}
				}
			}
		}
	}

	if (C_PARMS->_8D0 != 0) {
		dropType = C_PARMS->_8D0 - 1;
	}

	if (C_PARMS->_8D1 != 0) {
		if (dropType == EGGDROP_Spicy) {
			if (!playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
				dropType = EGGDROP_SingleNectar;
			}
		} else if (dropType == EGGDROP_Bitter && !playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			dropType = EGGDROP_SingleNectar;
		}
	}

	mititeGroup = nullptr;
	Pellet* pellet;
	switch (dropType) {
	case EGGDROP_1Pellets:
		PelletNumberInitArg initArg0(PELLET_NUMBER_ONE, (int)3.0f * randFloat());
		pellet = pelletMgr->birth(&initArg0);
		pellet->setPosition(position, false);
		pellet->setVelocity(velocity);
		break;

	case EGGDROP_5Pellets:
		PelletNumberInitArg initArg1(PELLET_NUMBER_FIVE, (int)3.0f * randFloat());
		pellet = pelletMgr->birth(&initArg1);
		pellet->setPosition(position, false);
		pellet->setVelocity(velocity);
		break;

	case EGGDROP_SingleNectar:
		BaseItem* nectarItem = ItemHoney::mgr->birth();
		if (nectarItem) {
			ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(nectarItem);
			nectar->init(nullptr);
			nectar->mHoneyType = HONEY_Y;
			nectar->setPosition(position, false);
			nectar->setVelocity(velocity);
		}
		break;

	case EGGDROP_DoubleNectar:
		f32 angle = TAU * randFloat();

		for (int i = 0; i < 2; i++) {
			BaseItem* doubleNectarItem = ItemHoney::mgr->birth();
			Vector3f sprayVelocity     = velocity;

			if (doubleNectarItem) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(doubleNectarItem);
				f32 theta               = PI * i + angle;
				sprayVelocity.x         = 50.0f * sinf(theta);
				sprayVelocity.z         = 50.0f * cosf(theta);
				nectar->init(nullptr);
				nectar->mHoneyType = HONEY_Y;
				nectar->setPosition(position, false);
				nectar->setVelocity(sprayVelocity);
			}
		}

		break;

	case EGGDROP_Mitites:
		TamagoMushi::Mgr* mititeMgr = static_cast<TamagoMushi::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_TamagoMushi));
		if (mititeMgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition = mPosition;

			birthArg.mFaceDir = TAU * randFloat();
			velocity.y        = 200.0f;
			mititeGroup       = mititeMgr->createGroup(birthArg, 10, velocity);
		}

		if (mititeGroup == nullptr) {
			BaseItem* mititeBackupItem = ItemHoney::mgr->birth();
			if (mititeBackupItem) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(mititeBackupItem);
				nectar->init(nullptr);
				nectar->mHoneyType = HONEY_Y;
				nectar->setPosition(position, false);
				nectar->setVelocity(velocity);
			}
		}

		break;

	case EGGDROP_Spicy:
	case EGGDROP_Bitter:
		BaseItem* sprayItem = ItemHoney::mgr->birth();

		if (sprayItem) {
			ItemHoney::Item* spray = static_cast<ItemHoney::Item*>(sprayItem);
			spray->init(nullptr);

			spray->mHoneyType = HONEY_R;
			if (dropType == EGGDROP_Bitter) {
				spray->mHoneyType = HONEY_B;
			}

			spray->setPosition(position, false);
			spray->setVelocity(velocity);
		}

		break;
	}
}

} // namespace Egg
} // namespace Game
