#include "types.h"
#include "Game/Entities/Kabuto.h"

namespace Game {
namespace FixKabuto {

/**
 * @note Address: 0x803006EC
 * @note Size: 0xA4
 */
Obj::Obj()
{
	createEffect();
}

/**
 * @note Address: 0x80300790
 * @note Size: 0x64
 */
void Obj::onKill(Game::CreatureKillArg* killArg)
{
	finishRotateEffect();
	finishWaitEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x803007F4
 * @note Size: 0x1A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->getModelData();
	ResTIMG* texture   = C_MGR->getChangeTexture();

	j3dModel->calcMaterial();

	mModel->mJ3dModel->mModelData->getTexture()->changeImage(texture, 0);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		J3DMatPacket* packet = j3dModel->getMatPacket(i);
		j3dSys.setMatPacket(packet);
		J3DMaterial* material = modelData->getMaterialNodePointer(i);
		material->diff(packet->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x80300998
 * @note Size: 0x140
 */
void Obj::createEffect()
{
	mEfxRot  = new efx::TKkabutoRot(&mPosition);
	mEfxWait = new efx::TKkabutoWait(&mPosition);
}

/**
 * @note Address: 0x80300AD8
 * @note Size: 0x18
 */
void Obj::setupEffect()
{
	mEfxRot->mPosition  = &mPosition;
	mEfxWait->mPosition = &mPosition;
}

/**
 * @note Address: 0x80300AF0
 * @note Size: 0x58
 */
void Obj::startRotateEffect()
{
	efx::Arg arg(mPosition);
	mEfxRot->create(&arg);
}

/**
 * @note Address: 0x80300B48
 * @note Size: 0x30
 */
void Obj::finishRotateEffect()
{
	mEfxRot->fade();
}

/**
 * @note Address: 0x80300B78
 * @note Size: 0x58
 */
void Obj::startWaitEffect()
{
	efx::Arg arg(mPosition);
	mEfxWait->create(&arg);
}

/**
 * @note Address: 0x80300BD0
 * @note Size: 0x30
 */
void Obj::finishWaitEffect()
{
	mEfxWait->fade();
}

/**
 * @note Address: 0x80300C00
 * @note Size: 0x50
 */
void FixKabuto::Obj::effectDrawOn()
{
	mEfxRot->endDemoDrawOn();
	mEfxWait->endDemoDrawOn();
}

/**
 * @note Address: 0x80300C50
 * @note Size: 0x50
 */
void FixKabuto::Obj::effectDrawOff()
{
	mEfxRot->startDemoDrawOff();
	mEfxWait->startDemoDrawOff();
}

} // namespace FixKabuto
} // namespace Game
