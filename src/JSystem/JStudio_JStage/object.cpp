#include "Dolphin/mtx.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JStudio/math.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

/**
 * @note Address: 0x80011DCC
 * @note Size: 0x98
 */
bool JStudio_JStage::transform_toGlobalFromLocal(f32 (*p1)[4], const JStudio::TControl::TTransform_translation_rotation_scaling& transform,
                                                 const JStage::TObject* object, u32 p4)
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

/**
 * @note Address: 0x80011E64
 * @note Size: 0x98
 * transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl
 */
bool JStudio_JStage::transform_toGlobalFromLocal(f32 (*p1)[4], const JStudio::TControl::TTransform_position& transform,
                                                 const JStage::TObject* object, u32 p4)
{
	if (object == nullptr) {
		return false;
	}
	Mtx v1;
	if (object->JSGGetNodeTransformation(p4, v1) == 0) {
		return false;
	}
	Mtx v2;
	PSMTXTrans(v2, transform.mPosition.x, transform.mPosition.y, transform.mPosition.z);
	PSMTXConcat(v1, v2, p1);
	return true;
}

/**
 * @note Address: 0x80011EFC
 * @note Size: 0xA4
 */
bool JStudio_JStage::transform_toLocalFromGlobal(f32 (*p1)[4], const JStudio::TControl::TTransform_translation_rotation_scaling& transform,
                                                 const JStage::TObject* object, u32 p4)
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

/**
 * @note Address: 0x80011FA0
 * @note Size: 0xA4
 * transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl
 */
bool JStudio_JStage::transform_toLocalFromGlobal(f32 (*p1)[4], const JStudio::TControl::TTransform_position& transform,
                                                 const JStage::TObject* object, u32 p4)
{
	if (object == nullptr) {
		return false;
	}
	Mtx v1;
	if (object->JSGGetNodeTransformation(p4, v1) == 0) {
		return false;
	}
	Mtx v2;
	PSMTXTrans(v2, transform.mPosition.x, transform.mPosition.y, transform.mPosition.z);
	Mtx v3;
	PSMTXInverse(v1, v3);
	PSMTXConcat(v3, v2, p1);
	return true;
}

/**
 * @note Address: 0x80012044
 * @note Size: 0x48
 */
void JStudio_JStage::TAdaptor_object_::adaptor_data_(JStage::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	object->JSGSetData((p3 == 0 ? 0xFFFFFFFF : *(u32*)p2), p4, p5);
}

/**
 * @note Address: 0x8001208C
 * @note Size: 0x4C
 */
JStage::TObject* JStudio_JStage::TAdaptor_object_::adaptor_findJSGObject_(const JStage::TSystem* system, const char* name)
{
	JStage::TObject* results;
	if (system->JSGFindObject(&results, name, JStage::TEO_Unknown_0) != 0) {
		return nullptr;
	}
	return results;
}

/**
 * @note Address: 0x800120D8
 * @note Size: 0x2C
 */
u32 JStudio_JStage::TAdaptor_object_::adaptor_findJSGObjectNode_(const JStage::TObject* object, const char* name)
{
	return object->JSGFindNodeID(name);
}

/**
 * @note Address: 0x80012104
 * @note Size: 0x94
 */
void JStudio_JStage::TAdaptor_object_::adaptor_ENABLE_(JStage::TObject* object, JStudio::data::TEOperationData operation, const void* p3,
                                                       u32 p4)
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
