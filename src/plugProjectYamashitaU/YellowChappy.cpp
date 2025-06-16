#include "Game/Entities/YellowChappy.h"

namespace Game {
namespace YellowChappy {

/**
 * @note Address: 0x8012C378
 * @note Size: 0x154
 */
Obj::Obj()
{
	mEfxTest     = nullptr;
	mGlobalAlpha = 0xFF;
	mAnimator    = new ChappyBase::ProperAnimator;
	setFSM(new ChappyBase::FSM);
	createEffect();
}

/**
 * @note Address: 0x8012C4CC
 * @note Size: 0x48
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	ChappyBase::Obj::onInit(initArg);
	mGlobalAlpha   = 0xFF;
	mHasHair       = true;
	mEffectAnimMgr = &C_MGR->mEffectAnimMgr;
}

/**
 * @note Address: 0x8012C514
 * @note Size: 0x1B0
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	int alpha = mGlobalAlpha;

	if (isEvent(0, EB_Bittered)) {
		alpha += -10;

	} else if (mHealth < 0.5f * mMaxHealth) {
		if (mHasHair) {
			SysShape::Joint* joint = mModel->getJoint("body");
			P2ASSERTLINE(124, joint != nullptr);

			Matrixf* mat = joint->getWorldMatrix();
			P2ASSERTLINE(126, mat != nullptr);

			efx::TKechappyOff offEffect(mat);
			offEffect.create(nullptr);

			mHasHair = false;
		}
		alpha += -50;
	} else {
		alpha += 10;
	}

	if (alpha < 0) {
		alpha = 0;
	} else if (alpha > 0xFF) {
		alpha    = 0xFF;
		mHasHair = true;
	}

	mGlobalAlpha = alpha;
	mEfxTest->setGlobalAlpha(mGlobalAlpha);
	mEfxTest->setGlobalDynamicsScale(mScale);

	f32 frame = getMotionFrame();
	int idx   = getCurrAnimIndex();
	mEffectAnimMgr->update(mEfxTest, idx, frame);
}

/**
 * @note Address: 0x8012C6C4
 * @note Size: 0x40
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	mEfxTest->forceKill();
}

/**
 * @note Address: 0x8012C704
 * @note Size: 0x68
 */
void Obj::createEffect()
{
	ChappyBase::Obj::createEffect();
	mEfxTest = new efx::TKechappyTest;
}

/**
 * @note Address: 0x8012C76C
 * @note Size: 0xB4
 */
void Obj::setupEffect()
{
	ChappyBase::Obj::setupEffect();

	SysShape::Joint* joint = mModel->getJoint("body");
	P2ASSERTLINE(192, joint != nullptr);

	Matrixf* mat = joint->getWorldMatrix();
	P2ASSERTLINE(194, mat != nullptr);

	mEfxTest->setMtxptr(mat->mMatrix.mtxView);
	mEfxTest->create(nullptr);
}

/**
 * @note Address: 0x8012C820
 * @note Size: 0x28
 */
void Obj::doStartMovie()
{
	mEfxTest->setGlobalAlpha(0);
}

/**
 * @note Address: 0x8012C848
 * @note Size: 0x4
 */
void Obj::doEndMovie()
{
}

/**
 * @note Address: 0x8012C84C
 * @note Size: 0x2B0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->getModelData();
	ResTIMG* texture0  = C_MGR->getChangeTexture0();
	ResTIMG* texture1  = C_MGR->getChangeTexture1();

	j3dModel->calcMaterial();

	mModel->mJ3dModel->mModelData->getTexture()->changeImage(texture0, 0);
	mModel->mJ3dModel->mModelData->getTexture()->changeImage(texture1, 1);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		J3DMatPacket* packet = j3dModel->getMatPacket(i);
		j3dSys.setMatPacket(packet);
		J3DMaterial* material = modelData->getMaterialNodePointer(i);
		material->diff(packet->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x8012CAFC
 * @note Size: 0x4C
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	mEfxTest->setGlobalAlpha(0);
	mEfxTest->startDemoDrawOff();
}

/**
 * @note Address: 0x8012CB48
 * @note Size: 0x4C
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	mEfxTest->setGlobalAlpha(0xFF);
	mEfxTest->endDemoDrawOn();
}

} // namespace YellowChappy
} // namespace Game
