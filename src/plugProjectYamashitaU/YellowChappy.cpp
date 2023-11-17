#include "Game/Entities/YellowChappy.h"

namespace Game {
namespace YellowChappy {

/*
 * --INFO--
 * Address:	8012C378
 * Size:	000154
 */
Obj::Obj()
{
	mEfxTest     = nullptr;
	mGlobalAlpha = 0xFF;
	mAnimator    = new ChappyBase::ProperAnimator;
	setFSM(new ChappyBase::FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8012C4CC
 * Size:	000048
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	ChappyBase::Obj::onInit(initArg);
	mGlobalAlpha   = 0xFF;
	mHasHair       = true;
	mEffectAnimMgr = &static_cast<Mgr*>(mMgr)->mEffectAnimMgr;
}

/*
 * --INFO--
 * Address:	8012C514
 * Size:	0001B0
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	int alpha = mGlobalAlpha;

	if (isEvent(0, EB_Bittered)) {
		alpha += -10;

	} else {
		if (mHealth < 0.5f * mMaxHealth) {
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

/*
 * --INFO--
 * Address:	8012C6C4
 * Size:	000040
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	mEfxTest->forceKill();
}

/*
 * --INFO--
 * Address:	8012C704
 * Size:	000068
 */
void Obj::createEffect()
{
	ChappyBase::Obj::createEffect();
	mEfxTest = new efx::TKechappyTest;
}

/*
 * --INFO--
 * Address:	8012C76C
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	8012C820
 * Size:	000028
 */
void Obj::doStartMovie() { mEfxTest->setGlobalAlpha(0); }

/*
 * --INFO--
 * Address:	8012C848
 * Size:	000004
 */
void Obj::doEndMovie() { }

/*
 * --INFO--
 * Address:	8012C84C
 * Size:	0002B0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	ResTIMG* texture0  = static_cast<Mgr*>(mMgr)->getChangeTexture0();
	ResTIMG* texture1  = static_cast<Mgr*>(mMgr)->getChangeTexture1();

	j3dModel->calcMaterial();

	ResTIMG* newTexture0;
	J3DTexture* j3dTexture0 = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture0             = &j3dTexture0->mRes[0];

	*newTexture0 = *texture0;

	j3dTexture0->setImageOffset((u32)texture0, 0);
	j3dTexture0->setPaletteOffset((u32)texture0, 0);

	ResTIMG* newTexture1;
	J3DTexture* j3dTexture1 = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture1             = &j3dTexture1->mRes[1];

	*newTexture1 = *texture1;

	j3dTexture1->setImageOffset((u32)texture1, 1);
	j3dTexture1->setPaletteOffset((u32)texture1, 1);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/*
 * --INFO--
 * Address:	8012CAFC
 * Size:	00004C
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	mEfxTest->setGlobalAlpha(0);
	mEfxTest->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8012CB48
 * Size:	00004C
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	mEfxTest->setGlobalAlpha(0xFF);
	mEfxTest->endDemoDrawOn();
}

} // namespace YellowChappy
} // namespace Game
