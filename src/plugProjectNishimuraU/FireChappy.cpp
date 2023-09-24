#include "Game/Entities/FireChappy.h"
#include "efx/THanacho.h"

namespace Game {
namespace FireChappy {

/*
 * --INFO--
 * Address:	8028F62C
 * Size:	0000AC
 */
Obj::Obj()
{
	createEffect();
	createMaterialAnimation();
}

/*
 * --INFO--
 * Address:	8028F6D8
 * Size:	000058
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	ChappyBase::Obj::onInit(initArg);
	setupEffect();
	mOnFire = false;
	startFireState();
	startMaterialAnimation();
}

/*
 * --INFO--
 * Address:	8028F730
 * Size:	000048
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFireState(false);
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8028F778
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8028F77C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8028F79C
 * Size:	0000C0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	j3dModel->calcMaterial();
	updateMaterialAnimation();

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/*
 * --INFO--
 * Address:	8028F85C
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateFireState();
}

/*
 * --INFO--
 * Address:	8028F890
 * Size:	0000A0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat       = mShadowJoint->getWorldMatrix();
	shadowParam.mPosition   = Vector3f(worldMat->mMatrix.mtxView[0][3], worldMat->mMatrix.mtxView[1][3], worldMat->mMatrix.mtxView[2][3]);
	shadowParam.mPosition.y = mPosition.y + 5.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 75.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	}

	shadowParam.mSize = 32.0f;
}

/*
 * --INFO--
 * Address:	8028F930
 * Size:	0000E0
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	ChappyBase::Obj::collisionCallback(collEvent);
	if (mOnFire && collEvent.mCollidingCreature && collEvent.mCollidingCreature->isAlive()
	    && (collEvent.mCollidingCreature->isPiki() || collEvent.mCollidingCreature->isNavi())) {
		InteractFire fire(this, static_cast<ChappyBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue);
		collEvent.mCollidingCreature->stimulate(fire);
	}
}

/*
 * --INFO--
 * Address:	8028FA10
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8028FA44
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8028FA78
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8028FA98
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8028FAB8
 * Size:	000048
 */
void Obj::startFireState()
{
	if (!mOnFire) {
		mOnFire = true;
		startBodyEffect();
	}
	mAnimationFireTimer = 30.0f;
}

/*
 * --INFO--
 * Address:	8028FB00
 * Size:	000094
 */
void Obj::finishFireState(bool check)
{
	if (mOnFire) {
		mOnFire = false;
		finishBodyEffect();
		if (check) {
			createDeadSteamEffect();
		} else {
			createDeadSmokeEffect();
		}
		getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_F_END, 0);
	}
}

/*
 * --INFO--
 * Address:	8028FB94
 * Size:	00010C
 */
void Obj::updateFireState()
{
	if (mOnFire) {
		getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_FLAME, 0);
		updateEfxLod();

		if (mWaterBox && mOnFire) {
			mOnFire = false;
			finishBodyEffect();
			createDeadSteamEffect();
			getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_F_END, 0);
		}
		return;
	}

	if (isAlive() && !mWaterBox) {
		if (!mOnFire) {
			mOnFire = true;
			startBodyEffect();
		}

		mAnimationFireTimer = 30.0f;
	}
}

/*
 * --INFO--
 * Address:	8028FCA0
 * Size:	00004C
 */
void Obj::createMaterialAnimation() { mLoopAnimators = new Sys::MatLoopAnimator[2]; }

/*
 * --INFO--
 * Address:	8028FCEC
 * Size:	000060
 */
void Obj::startMaterialAnimation()
{
	Sys::MatLoopAnimator* texLoopAnimator = &mLoopAnimators[0];
	Sys::MatTexAnimation* texAnimation    = static_cast<Mgr*>(mMgr)->mTexAnimation;
	texLoopAnimator->start(texAnimation);

	Sys::MatLoopAnimator* tevRegLoopAnimator = &mLoopAnimators[1];
	Sys::MatTevRegAnimation* tevRegAnimation = static_cast<Mgr*>(mMgr)->mTevRegAnimation;
	tevRegLoopAnimator->start(tevRegAnimation);
}

/*
 * --INFO--
 * Address:	8028FD4C
 * Size:	000108
 */
void Obj::updateMaterialAnimation()
{
	f32 p1 = 30.0f;
	if (!mOnFire) {
		Sys::MatBaseAnimation* animation = mLoopAnimators[0].mAnimation;
		f32 p2                           = mLoopAnimators[0]._08;
		f32 frameMax                     = (animation) ? animation->getFrameMax() : 0.0f;
		frameMax -= 30.0f;

		if (mAnimationFireTimer == 30.0f) {
			if (p2 >= frameMax - 1.0f && p2 <= frameMax) {
				mAnimationFireTimer -= 0.5f;
			}
		} else {
			mAnimationFireTimer -= 0.5f;
			if (mAnimationFireTimer < 0.0f) {
				mAnimationFireTimer = 0.0f;
			}
		}

		if (mAnimationFireTimer <= 0.0f) {
			p1 = 0.0f;
		} else {
			p1 = mAnimationFireTimer;
		}
	}

	mLoopAnimators[0].animate(p1);
	mLoopAnimators[1].animate(p1);
}

/*
 * --INFO--
 * Address:	8028FE54
 * Size:	00002C
 */
void Obj::updateEfxLod() { mEfxBody->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar)); }

/*
 * --INFO--
 * Address:	8028FE80
 * Size:	000288
 */
void Obj::createEffect()
{
	mEfxBody      = new efx::TYakiBody;
	mEfxHanacho   = new efx::THanachoY;
	mEfxFlick     = new efx::TYakiFlick;
	mEfxDeadsmoke = new efx::TYakiDeadsmoke;
	mEfxSteam     = new efx::TYakiSteam;
}

/*
 * --INFO--
 * Address:	80290108
 * Size:	000084
 */
void Obj::setupEffect()
{
	Matrixf* bodyMat = mModel->getJoint("body")->getWorldMatrix();
	mEfxBody->setMtxptr(bodyMat->mMatrix.mtxView);
	mEfxFlick->mMtx     = bodyMat;
	mEfxDeadsmoke->mMtx = bodyMat;
	mEfxSteam->mMtx     = bodyMat;

	Matrixf* headMat  = mModel->getJoint("head")->getWorldMatrix();
	mEfxHanacho->mMtx = headMat;
}

/*
 * --INFO--
 * Address:	8029018C
 * Size:	000034
 */
void Obj::startSleepEffect() { mEfxHanacho->create(nullptr); }

/*
 * --INFO--
 * Address:	802901C0
 * Size:	000030
 */
void Obj::finishSleepEffect() { mEfxHanacho->fade(); }

/*
 * --INFO--
 * Address:	802901F0
 * Size:	000034
 */
void Obj::startBodyEffect() { mEfxBody->create(nullptr); }

/*
 * --INFO--
 * Address:	80290224
 * Size:	000030
 */
void Obj::finishBodyEffect() { mEfxBody->fade(); }

/*
 * --INFO--
 * Address:	80290254
 * Size:	000040
 */
void Obj::createFlickEffect()
{
	if (mOnFire) {
		mEfxFlick->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80290294
 * Size:	000034
 */
void Obj::createDeadSmokeEffect() { mEfxDeadsmoke->create(nullptr); }

/*
 * --INFO--
 * Address:	802902C8
 * Size:	000034
 */
void Obj::createDeadSteamEffect() { mEfxSteam->create(nullptr); }

/*
 * --INFO--
 * Address:	802902FC
 * Size:	00008C
 */
void Obj::effectDrawOn()
{
	mEfxBody->endDemoDrawOn();
	mEfxFlick->endDemoDrawOn();
	mEfxDeadsmoke->endDemoDrawOn();
	mEfxSteam->endDemoDrawOn();
	mEfxHanacho->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80290388
 * Size:	00008C
 */
void Obj::effectDrawOff()
{
	mEfxBody->startDemoDrawOff();
	mEfxFlick->startDemoDrawOff();
	mEfxDeadsmoke->startDemoDrawOff();
	mEfxSteam->startDemoDrawOff();
	mEfxHanacho->startDemoDrawOff();
}

} // namespace FireChappy
} // namespace Game
