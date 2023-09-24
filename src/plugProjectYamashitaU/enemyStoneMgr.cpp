#include "types.h"
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
static const char* sStoneMdlName[2] = { "sekikaobj_large.bmd", "sekikaobj_small.bmd" };
} // namespace

namespace Game {
namespace EnemyStone {

/*
 * --INFO--
 * Address:	80127C00
 * Size:	000088
 */
Mgr::Mgr()
    : mModelData(nullptr)
{
	mFlags.clear();
	mDrawInfo.clearRelations();
	mObj.clearRelations();
}

/*
 * --INFO--
 * Address:	80127C88
 * Size:	000174
 */
void Mgr::loadResource()
{
	sys->heapStatusStart("EnemyStone::Mgr::loadResource", nullptr);

	sys->heapStatusStart("EnemyStone::Mgr::stoneModel", nullptr);

	mModelData = new J3DModelData*[2];

	LoadResource::ArgAramOnly argAram("/enemy/common/enemyCommon.szs");

	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(argAram);
	JKRArchive* archive              = resourceNode->getArchive();

	J3DModelData* modDat;
	J3DModelData* loadModDat;

	for (int i = 0; i < 2; i++) {
		modDat        = (J3DModelData*)archive->getResource(sStoneMdlName[i]);
		loadModDat    = J3DModelLoaderDataBase::load(modDat, 0x240000 | 0x240000);
		mModelData[i] = loadModDat;
		mModelData[i]->newSharedDisplayList(0x40000);
		mModelData[i]->simpleCalcMaterial(0, j3dDefaultMtx);
		mModelData[i]->makeSharedDL();
	}
	sys->heapStatusEnd("EnemyStone::Mgr::stoneModel");

	sys->heapStatusStart("EnemyStone::Mgr::DrawInfo_buffer", nullptr);

	DrawInfo* infoArray = new DrawInfo[256];

	for (int i = 0; i < (u32)256; i++) {
		mDrawInfo.add((CNode*)&infoArray[i]);
	}

	sys->heapStatusEnd("EnemyStone::Mgr::DrawInfo_buffer");

	sys->heapStatusEnd("EnemyStone::Mgr::loadResource");
}

/*
 * --INFO--
 * Address:	80127E20
 * Size:	0000F8
 */
bool Mgr::regist(Obj* obj)
{
	bool validCount = true;

	if (!(obj->isFlag(STONE_Registered))) {

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

/*
 * --INFO--
 * Address:	80127F18
 * Size:	00008C
 */
void Mgr::release(Obj* obj)
{
	if (obj->isFlag(STONE_Registered)) {
		obj->resetFlag(STONE_Registered);

		Obj* currObj = obj;
		for (int i = 0; i < 2; i++) {
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

/*
 * --INFO--
 * Address:	80127FA4
 * Size:	000164
 */
void Mgr::draw(Viewport* viewport)
{
	for (int i = 0; i < 2; i++) {
		Obj* obj = (Obj*)mObj.mChild;
		if (obj) {
			for (obj; obj; obj = (Obj*)obj->mNext) {
				if (obj->mEnemy->mLod.isFlag(AILOD_IsVisible)) {
					DrawInfo* baseInfo = static_cast<DrawInfo*>(&obj->mNodeArray[i]);

					FOREACH_NODE(DrawInfo, static_cast<DrawInfo*>(baseInfo->mChild), drawInfo)
					{
						J3DModelData* modelData = mModelData[i];
						J3DMaterial* material   = modelData->mJointTree.mJoints[0]->mMaterial;
						j3dSys.mVtxPos          = modelData->mVertexData.mVtxPos;
						j3dSys.mVtxNorm         = modelData->mVertexData.mVtxNorm;
						j3dSys.mVtxColor        = modelData->mVertexData.mVtxColor[0];
						J3DShape::sOldVcdVatCmd = 0;

						for (material; material != nullptr; material = material->mNext) {
							material->loadSharedDL();
							material->mShape->loadPreDrawSetting();

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
							material->mShape->simpleDrawCache();
						}
					}
				}
			}
		}
	}
}
} // namespace EnemyStone
} // namespace Game
