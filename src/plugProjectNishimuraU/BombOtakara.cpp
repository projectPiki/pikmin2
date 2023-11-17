#include "types.h"
#include "Game/Entities/BombOtakara.h"
#include "Game/Entities/Bomb.h"

namespace Game {
namespace BombOtakara {
/*
 * --INFO--
 * Address:	802F9624
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	802F96B4
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
 * Address:	802F9858
 * Size:	0000B4
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (mTargetCreature != nullptr && mTargetCreature->isAlive()) {
		if (isEvent(0, EB_Bittered)) {
			// If we're bittered, then register the damage
			static_cast<Bomb::Obj*>(mTargetCreature)->damageCallBack(creature, damage, collpart);
		} else {
			// If not, then explode
			static_cast<Bomb::Obj*>(mTargetCreature)->forceBomb();
		}
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F990C
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return damageCallBack(creature, damage, collpart); }

/*
 * --INFO--
 * Address:	802F9938
 * Size:	00007C
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 p1)
{
	if ((mTargetCreature != nullptr) && mTargetCreature->isAlive()) {
		static_cast<Bomb::Obj*>(mTargetCreature)->forceBomb();
	}

	return EnemyBase::earthquakeCallBack(creature, p1);
}

/*
 * --INFO--
 * Address:	802F99B4
 * Size:	000030
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage) { return damageCallBack(creature, damage, nullptr); }

/*
 * --INFO--
 * Address:	802F99E4
 * Size:	00007C
 */
void Obj::startEscapeSE()
{
	if (mEscapeSfxTimer > 2.5f) {
		getJAIObject()->startSound(PSSE_EN_OTAKARA_STANDUP, 0);
		mEscapeSfxTimer = 0.0f;
		return;
	}

	mEscapeSfxTimer += sys->mDeltaTime;
}
} // namespace BombOtakara
} // namespace Game
