#include "Dolphin/mtx.h"
#include "JStage/TObject.h"
#include "JStage/TSystem.h"
#include "JStudio/TControl.h"
#include "JStudio/data.h"
#include "JStudio/math.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80011DCC
 * Size:	000098
 */
bool JStudio_JStage::transform_toGlobalFromLocal(float (*p1)[4],
                                                 const JStudio::TControl::TTransform_translation_rotation_scaling& transform,
                                                 const JStage::TObject* object, unsigned long p4)
{
	if (object == nullptr) {
		return false;
	}
	Mtx v1;
	if (object->JSGGetNodeTransformation(p4, v1) == 0) {
		return false;
	}
	Mtx v2;
	JStudio::math::getTransformation_SRxyzT(v2, transform.getScaling(), transform.getRotation(), transform.getTranslation());
	PSMTXConcat(v1, v2, p1);
	return true;
}

/*
 * --INFO--
 * Address:	80011E64
 * Size:	000098
 * transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl
 */
bool JStudio_JStage::transform_toGlobalFromLocal(float (*p1)[4], const JStudio::TControl::TTransform_position& transform,
                                                 const JStage::TObject* object, unsigned long p4)
{
	if (object == nullptr) {
		return false;
	}
	Mtx v1;
	if (object->JSGGetNodeTransformation(p4, v1) == 0) {
		return false;
	}
	Mtx v2;
	PSMTXTrans(v2, transform.m_position.x, transform.m_position.y, transform.m_position.z);
	PSMTXConcat(v1, v2, p1);
	return true;
}

/*
 * --INFO--
 * Address:	80011EFC
 * Size:	0000A4
 */
bool JStudio_JStage::transform_toLocalFromGlobal(float (*p1)[4],
                                                 const JStudio::TControl::TTransform_translation_rotation_scaling& transform,
                                                 const JStage::TObject* object, unsigned long p4)
{
	if (object == nullptr) {
		return false;
	}
	Mtx v1;
	if (object->JSGGetNodeTransformation(p4, v1) == 0) {
		return false;
	}
	Mtx v2;
	JStudio::math::getTransformation_SRxyzT(v2, transform.getScaling(), transform.getRotation(), transform.getTranslation());
	Mtx v3;
	PSMTXInverse(v1, v3);
	PSMTXConcat(v3, v2, p1);
	return true;
}

/*
 * --INFO--
 * Address:	80011FA0
 * Size:	0000A4
 * transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl
 */
bool JStudio_JStage::transform_toLocalFromGlobal(float (*p1)[4], const JStudio::TControl::TTransform_position& transform,
                                                 const JStage::TObject* object, unsigned long p4)
{
	if (object == nullptr) {
		return false;
	}
	Mtx v1;
	if (object->JSGGetNodeTransformation(p4, v1) == 0) {
		return false;
	}
	Mtx v2;
	PSMTXTrans(v2, transform.m_position.x, transform.m_position.y, transform.m_position.z);
	Mtx v3;
	PSMTXInverse(v1, v3);
	PSMTXConcat(v3, v2, p1);
	return true;
}

/*
 * --INFO--
 * Address:	80012044
 * Size:	000048
 */
void JStudio_JStage::TAdaptor_object_::adaptor_data_(JStage::TObject* object, const void* p2, unsigned long p3, const void* p4,
                                                     unsigned long p5)
{
	object->JSGSetData((p3 == 0 ? 0xFFFFFFFF : *(u32*)p2), p4, p5);
}

/*
 * --INFO--
 * Address:	8001208C
 * Size:	00004C
 */
JStage::TObject* JStudio_JStage::TAdaptor_object_::adaptor_findJSGObject_(const JStage::TSystem* system, const char* name)
{
	JStage::TObject* results;
	if (system->JSGFindObject(&results, name, JStage::TEO_Unknown_0) != 0) {
		return nullptr;
	}
	return results;
}

/*
 * --INFO--
 * Address:	800120D8
 * Size:	00002C
 */
u32 JStudio_JStage::TAdaptor_object_::adaptor_findJSGObjectNode_(const JStage::TObject* object, const char* name)
{
	return object->JSGFindNodeID(name);
}

/*
 * --INFO--
 * Address:	80012104
 * Size:	000094
 */
void JStudio_JStage::TAdaptor_object_::adaptor_ENABLE_(JStage::TObject* object, JStudio::data::TEOperationData operation, const void* p3,
                                                       unsigned long p4)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02: {
		if ((*(u32*)p3) != 0) {
			object->setFlagOn(2);
		} else {
			object->setFlagOff(2);
		}
		break;
	}
	}
}
