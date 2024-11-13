#include "Game/EnemyStone.h"
#include "Game/EnemyBase.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DTransform.h"
#include "SysShape/Joint.h"
#include "LoadResource.h"
#include "System.h"

namespace {
static const char* sStoneMdlName[ENEMY_STONE_MODEL_NUM] = { "sekikaobj_large.bmd", "sekikaobj_small.bmd" };
} // namespace

namespace Game {
namespace EnemyStone {

/**
 * @note Address: 0x80127C00
 * @note Size: 0x88
 */
Mgr::Mgr()
    : mModelData(nullptr)
{
	mFlags.clear();
	mDrawInfo.clearRelations();
	mObj.clearRelations();
}

/**
 * @note Address: 0x80127C88
 * @note Size: 0x174
 */
void Mgr::loadResource()
{
	sys->heapStatusStart("EnemyStone::Mgr::loadResource", nullptr);

	sys->heapStatusStart("EnemyStone::Mgr::stoneModel", nullptr);

	mModelData = new J3DModelData*[ENEMY_STONE_MODEL_NUM];

	LoadResource::ArgAramOnly argAram("/enemy/common/enemyCommon.szs");

	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(argAram);

	JKRArchive* archive = resourceNode->getArchive();

	for (int i = 0; i < ENEMY_STONE_MODEL_NUM; i++) {
		J3DModelData* loadModDat
		    = J3DModelLoaderDataBase::load(archive->getResource(sStoneMdlName[i]), J3DMLF_UseUniqueMaterials | J3DMLF_UseSingleSharedDL);

		mModelData[i] = loadModDat;
		mModelData[i]->newSharedDisplayList(0x40000);
		mModelData[i]->simpleCalcMaterial(0, *(Mtx*)(&j3dDefaultMtx));
		mModelData[i]->makeSharedDL();
	}
	sys->heapStatusEnd("EnemyStone::Mgr::stoneModel");

	sys->heapStatusStart("EnemyStone::Mgr::DrawInfo_buffer", nullptr);

	DrawInfo* infoArray = new DrawInfo[ENEMY_STONE_DRAWINFO_NUM];

	for (int i = 0; i < (u32)ENEMY_STONE_DRAWINFO_NUM; i++) {
		mDrawInfo.add(&infoArray[i]);
	}

	sys->heapStatusEnd("EnemyStone::Mgr::DrawInfo_buffer");

	sys->heapStatusEnd("EnemyStone::Mgr::loadResource");
}

/**
 * @note Address: 0x80127E20
 * @note Size: 0xF8
 */
bool Mgr::regist(Obj* obj)
{
	bool validCount = true;

	if (!obj->isFlag(STONE_Registered)) {

		if (obj->getInfoCount() <= mDrawInfo.getChildCount()) {

			obj->setFlag(STONE_Registered);
			for (int i = 0; i < obj->getInfoCount(); i++) {
				DrawInfo* info   = getChildDrawInfo();
				ObjInfo* objInfo = obj->getObjInfo(i);

				if (info) {
					info->del();
				}

				info->mMatrix  = obj->mEnemy->mModel->getJoint(objInfo->mName)->getWorldMatrix();
				info->mObjInfo = objInfo;

				obj->mNodeArray[objInfo->mSize].add(info);
			}

			mObj.add(obj);

		} else {
			validCount = false;
		}
	}

	return validCount;
}

/**
 * @note Address: 0x80127F18
 * @note Size: 0x8C
 */
void Mgr::release(Obj* obj)
{
	if (obj->isFlag(STONE_Registered)) {
		obj->resetFlag(STONE_Registered);

		Obj* currObj = obj;
		for (int i = 0; i < ENEMY_STONE_MODEL_NUM; i++) {
			DrawInfo* child = (DrawInfo*)currObj->mNodeArray[0].mChild;
			while (child) {
				DrawInfo* nextChild = (DrawInfo*)child->mNext;
				child->reset();
				mDrawInfo.add(child);
				child = nextChild;
			}
			currObj = (Obj*)&currObj->mInfo; // this makes no sense
		}
		obj->del();
	}
}

/**
 * @note Address: 0x80127FA4
 * @note Size: 0x164
 */
void Mgr::draw(Viewport* viewport)
{
	for (int i = 0; i < ENEMY_STONE_MODEL_NUM; i++) {
		Obj* obj = (Obj*)mObj.mChild;
		if (!obj) {
			continue;
		}

		for (obj; obj; obj = (Obj*)obj->mNext) {
			if (obj->mEnemy->mLod.isFlag(AILOD_IsVisible)) {
				DrawInfo* baseInfo = static_cast<DrawInfo*>(&obj->mNodeArray[i]);

				FOREACH_NODE(DrawInfo, static_cast<DrawInfo*>(baseInfo->mChild), drawInfo)
				{
					J3DModelData* modelData = mModelData[i];
					J3DMaterial* material   = modelData->getJointNodePointer(0)->getMesh();
					j3dSys.setVtxPos(modelData->getVtxPosArray());
					j3dSys.setVtxNrm(modelData->getVtxNrmArray());
					j3dSys.setVtxCol(modelData->getVtxColorArray(0));
					J3DShape::resetVcdVatCache();

					for (material; material != nullptr; material = material->mNext) {
						material->loadSharedDL();
						material->getShape()->loadPreDrawSetting();

						Matrixf drawMtx;
						drawInfo->makeMatrix(&drawMtx, true);

						Matrixf* viewMtx = viewport->getMatrix(true);

						Matrixf combined;
						PSMTXConcat(viewMtx->mMatrix.mtxView, drawMtx.mMatrix.mtxView, combined.mMatrix.mtxView);

						Matrixf inverse;
						PSMTXInverse(combined.mMatrix.mtxView, inverse.mMatrix.mtxView);

						Matrixf transpose;
						PSMTXTranspose(inverse.mMatrix.mtxView, transpose.mMatrix.mtxView);

						GXLoadPosMtxImm(combined.mMatrix.mtxView, 0);
						GXLoadNrmMtxImm(transpose.mMatrix.mtxView, 0);
						material->getShape()->simpleDrawCache();
					}
				}
			}
		}
	}
}
} // namespace EnemyStone
} // namespace Game
