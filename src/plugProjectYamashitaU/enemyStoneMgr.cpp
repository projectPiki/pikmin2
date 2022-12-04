#include "types.h"
#include "Game/EnemyStone.h"
#include "Game/EnemyBase.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JKR/JKRArchive.h"
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
    : m_modelData(nullptr)
{
	m_flags.clear();
	m_drawInfo.clearRelations();
	m_obj.clearRelations();
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

	m_modelData = new J3DModelData*[2];

	LoadResource::ArgAramOnly argAram("/enemy/common/enemyCommon.szs");

	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(argAram);
	JKRArchive* archive              = resourceNode->getArchive();

	J3DModelData* modDat;
	J3DModelData* loadModDat;

	for (int i = 0; i < 2; i++) {
		modDat         = (J3DModelData*)archive->getResource(sStoneMdlName[i]);
		loadModDat     = J3DModelLoaderDataBase::load(modDat, 0x240000 | 0x240000);
		m_modelData[i] = loadModDat;
		m_modelData[i]->newSharedDisplayList(0x40000);
		m_modelData[i]->simpleCalcMaterial(0, j3dDefaultMtx);
		m_modelData[i]->makeSharedDL();
	}
	sys->heapStatusEnd("EnemyStone::Mgr::stoneModel");

	sys->heapStatusStart("EnemyStone::Mgr::DrawInfo_buffer", nullptr);

	DrawInfo* infoArray = new DrawInfo[256];

	for (int i = 0; i < (u32)256; i++) {
		m_drawInfo.add((CNode*)&infoArray[i]);
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

		if (obj->getInfoCount() <= m_drawInfo.getChildCount()) {

			obj->setFlag(STONE_Registered);
			for (int i = 0; i < obj->getInfoCount(); i++) {
				DrawInfo* info   = getChildDrawInfo();
				ObjInfo* objInfo = obj->getObjInfo(i);

				if (info) {
					info->del();
				}

				info->m_matrix  = obj->m_enemy->m_model->getJoint(objInfo->m_name)->getWorldMatrix();
				info->m_objInfo = objInfo;

				obj->m_nodeArray[objInfo->_04].add(info);
			}

			m_obj.add(obj);

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
			DrawInfo* child = (DrawInfo*)currObj->m_nodeArray[0].m_child;
			while (child) {
				DrawInfo* nextChild = (DrawInfo*)child->m_next;
				child->reset();
				m_drawInfo.add(child);
				child = nextChild;
			}
			currObj = (Obj*)&currObj->m_info; // this makes no sense
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
		Obj* obj = (Obj*)m_obj.m_child;
		if (obj) {
			for (obj; obj; obj = (Obj*)obj->m_next) {
				if (obj->m_enemy->m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) {
					DrawInfo* baseInfo = static_cast<DrawInfo*>(&obj->m_nodeArray[i]);

					FOREACH_NODE(DrawInfo, static_cast<DrawInfo*>(baseInfo->m_child), drawInfo)
					{
						J3DModelData* modelData = m_modelData[i];
						J3DMaterial* material   = modelData->m_jointTree.m_joints[0]->m_material;
						j3dSys._10C             = (u32)modelData->m_vertexData._18;
						j3dSys._110             = (u32)modelData->m_vertexData._1C;
						j3dSys._114             = (u32)modelData->m_vertexData._24;
						J3DShape::sOldVcdVatCmd = 0;

						for (material; material != nullptr; material = material->_04) {
							material->loadSharedDL();
							material->m_shape->loadPreDrawSetting();

							Matrixf drawMtx;
							drawInfo->makeMatrix(&drawMtx, true);

							Matrixf* viewMtx = viewport->getMatrix(true);

							Matrixf combined;
							PSMTXConcat(viewMtx->m_matrix.mtxView, drawMtx.m_matrix.mtxView, combined.m_matrix.mtxView);

							Matrixf inverse;
							PSMTXInverse(combined.m_matrix.mtxView, inverse.m_matrix.mtxView);

							Matrixf transpose;
							PSMTXTranspose(inverse.m_matrix.mtxView, transpose.m_matrix.mtxView);

							GXLoadPosMtxImm(combined.m_matrix.mtxView, 0);
							GXLoadNrmMtxImm(transpose.m_matrix.mtxView, 0);
							material->m_shape->simpleDrawCache();
						}
					}
				}
			}
		}
	}
}
} // namespace EnemyStone
} // namespace Game
