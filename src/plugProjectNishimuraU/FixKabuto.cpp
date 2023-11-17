#include "types.h"
#include "Game/Entities/Kabuto.h"

namespace Game {
namespace FixKabuto {

/*
 * --INFO--
 * Address:	803006EC
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	80300790
 * Size:	000064
 */
void Obj::onKill(Game::CreatureKillArg* killArg)
{
	finishRotateEffect();
	finishWaitEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	803007F4
 * Size:	0001A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	ResTIMG* texture   = static_cast<Mgr*>(mMgr)->getChangeTexture();

	j3dModel->calcMaterial();

	ResTIMG* newTexture;
	J3DTexture* j3dTexture = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture             = j3dTexture->mRes;

	*newTexture = *texture;
	;

	j3dTexture->setImageOffset((u32)texture, 0);
	j3dTexture->setPaletteOffset((u32)texture, 0);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/*
 * --INFO--
 * Address:	80300998
 * Size:	000140
 */
void Obj::createEffect()
{
	mEfxRot  = new efx::TKkabutoRot(&mPosition);
	mEfxWait = new efx::TKkabutoWait(&mPosition);
}

/*
 * --INFO--
 * Address:	80300AD8
 * Size:	000018
 */
void Obj::setupEffect()
{
	mEfxRot->mPosition  = &mPosition;
	mEfxWait->mPosition = &mPosition;
}

/*
 * --INFO--
 * Address:	80300AF0
 * Size:	000058
 */
void Obj::startRotateEffect()
{
	efx::Arg arg(mPosition);
	mEfxRot->create(&arg);
}

/*
 * --INFO--
 * Address:	80300B48
 * Size:	000030
 */
void Obj::finishRotateEffect() { mEfxRot->fade(); }

/*
 * --INFO--
 * Address:	80300B78
 * Size:	000058
 */
void Obj::startWaitEffect()
{
	efx::Arg arg(mPosition);
	mEfxWait->create(&arg);
}

/*
 * --INFO--
 * Address:	80300BD0
 * Size:	000030
 */
void Obj::finishWaitEffect() { mEfxWait->fade(); }

/*
 * --INFO--
 * Address:	80300C00
 * Size:	000050
 */
void FixKabuto::Obj::effectDrawOn()
{
	mEfxRot->endDemoDrawOn();
	mEfxWait->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80300C50
 * Size:	000050
 */
void FixKabuto::Obj::effectDrawOff()
{
	mEfxRot->startDemoDrawOff();
	mEfxWait->startDemoDrawOff();
}

} // namespace FixKabuto
} // namespace Game
