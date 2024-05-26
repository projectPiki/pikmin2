#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/TVariableValue.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

namespace JStudio_JStage {

const TAdaptor_camera::TVVOutput TAdaptor_camera::saoVVOutput_[5] = {
	TVVOutput(7, &JStage::TCamera::JSGSetViewRoll, &JStage::TCamera::JSGGetViewRoll),
	TVVOutput(6, &JStage::TCamera::JSGSetProjectionFovy, &JStage::TCamera::JSGGetProjectionFovy),
	TVVOutput(8, &JStage::TCamera::JSGSetProjectionNear, &JStage::TCamera::JSGGetProjectionNear),
	TVVOutput(9, &JStage::TCamera::JSGSetProjectionFar, &JStage::TCamera::JSGGetProjectionFar),
	TVVOutput(-1, nullptr, nullptr),
};

/**
 * @note Address: 0x80013428
 * @note Size: 0xC4
 */
JStudio_JStage::TAdaptor_camera::TAdaptor_camera(const JStage::TSystem* system, JStage::TCamera* camera)
    : mSystem(system)
    , mObject(camera)
    , _104(0)
    , _108(nullptr)
    , _10C(0xFFFFFFFF)
    , _110(0)
    , _114(nullptr)
    , _118(0xFFFFFFFF)
    , _11C(0)
{
}

/**
 * @note Address: 0x800134EC
 * @note Size: 0x78
 * __dt
 */
JStudio_JStage::TAdaptor_camera::~TAdaptor_camera() { adaptor_do_end(nullptr); }

/**
 * @note Address: 0x80013564
 * @note Size: 0x48
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_prepare(const JStudio::TObject*)
{
	for (const TVVOutput* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x800135AC
 * @note Size: 0xE8
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_begin(const JStudio::TObject* object)
{
	get_pJSG()->setFlagOn(1);
	JStudio::TControl* control = object->getControl();
	getJSG_position_(control);
	getJSG_targetPosition_(control);
	for (const TVVOutput* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setValueImmediate((mObject->*(output->mGetter))());
	}
}

/**
 * @note Address: 0x80013694
 * @note Size: 0x54
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_end(const JStudio::TObject*) { mObject->setFlagOff(1); }

/**
 * @note Address: 0x800136E8
 * @note Size: 0x5C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_update(const JStudio::TObject* object, u32 p2)
{
	const JStudio::TControl* control = object->getControl();
	setJSG_position_(control);
	setJSG_targetPosition_(control);
	mObject->JSGUpdate();
}

/**
 * @note Address: 0x80013744
 * @note Size: 0x34
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_data(const JStudio::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mObject, p2, p3, p4, p5);
}

/**
 * @note Address: 0x80013778
 * @note Size: 0x44
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_108 = TAdaptor_object_::adaptor_findJSGObject_(mSystem, (const char*)p2);
		break;
	}
}

/**
 * @note Address: 0x800137BC
 * @note Size: 0x5C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_10C = TAdaptor_object_::adaptor_findJSGObjectNode_(_108, (const char*)p2);
		break;
	case JStudio::data::TEOD_Unknown_19:
		_10C = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x80013818
 * @note Size: 0x80
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		_110 = ((int*)p2)[0] != 0;
		switch (_104) {
		case 1:
			JStage::TObject* parent = nullptr;
			u32 idx                 = -1;
			if (_110) {
				parent = _108;
				idx    = _10C;
			}
			get_pJSG()->JSGSetParent(parent, idx);
			break;
		case 0:
			break;
		}
		break;
	}
}

/**
 * @note Address: 0x80013898
 * @note Size: 0x14
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_104 = *(u32*)p2;
}

/**
 * @note Address: 0x800138AC
 * @note Size: 0x44
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_114 = TAdaptor_object_::adaptor_findJSGObject_(mSystem, (const char*)p2);
		break;
	}
}

/**
 * @note Address: 0x800138F0
 * @note Size: 0x5C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_118 = TAdaptor_object_::adaptor_findJSGObjectNode_(_114, (const char*)p2);
		break;
	case JStudio::data::TEOD_Unknown_19:
		_118 = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x8001394C
 * @note Size: 0x20
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* data, u32)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_11C = ((int*)data)[0] != 0;
}

/**
 * @note Address: 0x8001396C
 * @note Size: 0xFC
 */
void JStudio_JStage::TAdaptor_camera::setJSG_position_(const JStudio::TControl* control)
{
	Mtx mtx;
	JStudio::TControl::TTransform_position transform;
	JStudio::TControl::TTransform_position tempTransform;
	JStudio::TControl::TTransform_position* outTransform;
	adaptor_getVariableValue_Vec(&transform.mPosition, sauVariableValue_3_POSITION_XYZ);

	if (!_110) {
		JStudio::TControl::TTransform_position* pos;
		if (!control->mTransformOnSet) {
			pos = &transform;
		} else {
			PSMTXMultVec(control->mTransformOnSet_Mtx, &transform.mPosition, &tempTransform.mPosition);
			pos = &tempTransform;
		}

		outTransform = pos;
	} else {
		outTransform = &transform;
		switch (_104) {
		case 0:
			bool check;
			if (!transform_toGlobalFromLocal(mtx, *outTransform, _108, _10C)) {
				check = false;
			} else {
				tempTransform.mPosition.x = mtx[0][3];
				tempTransform.mPosition.y = mtx[1][3];
				tempTransform.mPosition.z = mtx[2][3];
				check                     = true;
			}

			if (!check) {
				return;
			}
			outTransform = &tempTransform;
			break;
		case 1:
			break;
		}
	}

	get_pJSG()->JSGSetViewPosition(outTransform->mPosition);
}

/**
 * @note Address: 0x80013A68
 * @note Size: 0x108
 */
void JStudio_JStage::TAdaptor_camera::getJSG_position_(const JStudio::TControl* control)
{
	Mtx mtx;
	JStudio::TControl::TTransform_position transform;
	JStudio::TControl::TTransform_position tempTransform;
	JStudio::TControl::TTransform_position* outTransform;

	get_pJSG()->JSGGetViewPosition(&transform.mPosition);

	if (!_110) {
		JStudio::TControl::TTransform_position* pos;
		if (!control->mTransformOnGet) {
			pos = &transform;
		} else {
			PSMTXMultVec(control->mTransformOnGet_Mtx, &transform.mPosition, &tempTransform.mPosition);
			pos = &tempTransform;
		}

		outTransform = pos;
	} else {
		outTransform = &transform;
		switch (_104) {
		case 0:
			bool check;
			if (!transform_toLocalFromGlobal(mtx, *outTransform, _108, _10C)) {
				check = false;
			} else {
				tempTransform.mPosition.x = mtx[0][3];
				tempTransform.mPosition.y = mtx[1][3];
				tempTransform.mPosition.z = mtx[2][3];
				check                     = true;
			}

			if (!check) {
				return;
			}
			outTransform = &tempTransform;
			break;
		case 1:
			break;
		}
	}

	adaptor_setVariableValue_Vec(sauVariableValue_3_POSITION_XYZ, outTransform->mPosition);
}

/**
 * @note Address: 0x80013B70
 * @note Size: 0xE0
 */
void JStudio_JStage::TAdaptor_camera::setJSG_targetPosition_(const JStudio::TControl* control)
{
	Mtx mtx;
	JStudio::TControl::TTransform_position transform;
	JStudio::TControl::TTransform_position tempTransform;
	JStudio::TControl::TTransform_position* outTransform;
	adaptor_getVariableValue_Vec(&transform.mPosition, sauVariableValue_3_TARGET_POSITION_XYZ);

	if (!_11C) {
		JStudio::TControl::TTransform_position* pos;
		if (!control->mTransformOnSet) {
			pos = &transform;
		} else {
			PSMTXMultVec(control->mTransformOnSet_Mtx, &transform.mPosition, &tempTransform.mPosition);
			pos = &tempTransform;
		}

		outTransform = pos;
	} else {
		outTransform = &transform;
		bool check;
		if (!transform_toGlobalFromLocal(mtx, *outTransform, _114, _118)) {
			check = false;
		} else {
			tempTransform.mPosition.x = mtx[0][3];
			tempTransform.mPosition.y = mtx[1][3];
			tempTransform.mPosition.z = mtx[2][3];
			check                     = true;
		}

		if (!check) {
			return;
		}
		outTransform = &tempTransform;
	}

	get_pJSG()->JSGSetViewTargetPosition(outTransform->mPosition);
}

/**
 * @note Address: 0x80013C50
 * @note Size: 0xE4
 */
void JStudio_JStage::TAdaptor_camera::getJSG_targetPosition_(const JStudio::TControl* control)
{
	Mtx mtx;
	JStudio::TControl::TTransform_position transform;
	JStudio::TControl::TTransform_position tempTransform;
	JStudio::TControl::TTransform_position* outTransform;

	get_pJSG()->JSGGetViewTargetPosition(&transform.mPosition);

	if (!_11C) {
		JStudio::TControl::TTransform_position* pos;
		if (!control->mTransformOnGet) {
			pos = &transform;
		} else {
			PSMTXMultVec(control->mTransformOnGet_Mtx, &transform.mPosition, &tempTransform.mPosition);
			pos = &tempTransform;
		}

		outTransform = pos;
	} else {
		outTransform = &transform;
		bool check;
		if (!transform_toLocalFromGlobal(mtx, *outTransform, _114, _118)) {
			check = false;
		} else {
			tempTransform.mPosition.x = mtx[0][3];
			tempTransform.mPosition.y = mtx[1][3];
			tempTransform.mPosition.z = mtx[2][3];
			check                     = true;
		}

		if (!check) {
			return;
		}
		outTransform = &tempTransform;
	}

	adaptor_setVariableValue_Vec(sauVariableValue_3_TARGET_POSITION_XYZ, outTransform->mPosition);
}

} // namespace JStudio_JStage
