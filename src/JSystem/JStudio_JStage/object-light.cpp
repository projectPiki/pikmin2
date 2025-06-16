#include "JSystem/JStudio_JStage.h"
#include "stl/math.h"

#define DEG_TO_RAD(degrees) (degrees * (PI / 180.0f))
#define RAD_TO_DEG(radians) (radians * (180.0f / PI + 0.000005f)) // the 0.000005f is probably a fakematch

namespace JStudio_JStage {

TAdaptor_light::TVVOutput_direction_ TAdaptor_light::saoVVOutput_direction_[6]
    = { TAdaptor_light::TVVOutput_direction_(10, 1), TAdaptor_light::TVVOutput_direction_(11, 1),
	    TAdaptor_light::TVVOutput_direction_(7, 2),  TAdaptor_light::TVVOutput_direction_(8, 2),
	    TAdaptor_light::TVVOutput_direction_(9, 2),  TAdaptor_light::TVVOutput_direction_(-1, 0) };

/**
 * @note Address: 0x800113C8
 * @note Size: 0xA8
 */
TAdaptor_light::TAdaptor_light(const JStage::TSystem* sys, JStage::TLight* light)
    : mSystem(sys)
    , mObject(light)
    , _118(0)
{
}

/**
 * @note Address: 0x80011470
 * @note Size: 0x78
 */
TAdaptor_light::~TAdaptor_light()
{
	adaptor_do_end(nullptr);
}

/**
 * @note Address: 0x800114E8
 * @note Size: 0x48
 */
void TAdaptor_light::adaptor_do_prepare(const JStudio::TObject* obj)
{
	for (const TVVOutput_direction_* output = saoVVOutput_direction_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x80011530
 * @note Size: 0x2AC
 */
void TAdaptor_light::adaptor_do_begin(const JStudio::TObject* object)
{
	mObject->setFlagOn(1);
	JStudio::TControl* control = (JStudio::TControl*)object->getControl(); // r29
	GXColor color              = mObject->JSGGetColor();
	adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, color);

	JStudio::TControl::TTransform_position_direction posDir;
	JStudio::TControl::TTransform_position_direction transformedPosDir;
	JStudio::TControl::TTransform_position_direction* vvVec = &posDir;
	mObject->JSGGetPosition(&posDir.mPosition);
	mObject->JSGGetDirection(&posDir.mDirection);

	vvVec = (JStudio::TControl::TTransform_position_direction*)control->transformOnGet_transform_ifEnabled(posDir, &transformedPosDir);

	adaptor_setVariableValue_Vec(sauVariableValue_3_POSITION_XYZ, vvVec->mPosition);

	f32 x        = vvVec->mDirection.x;
	f32 y        = vvVec->mDirection.y;
	f32 z        = vvVec->mDirection.z;
	f32 dist     = dolsqrtfull(x * x + z * z);
	f32 atanVal1 = dolatan2f(x, z);
	f32 atanVal2 = dolatan2f(y, dist);

	adaptor_setVariableValue_immediate(10, RAD_TO_DEG(atanVal1));
	adaptor_setVariableValue_immediate(11, RAD_TO_DEG(atanVal2));

	Vec targetPos;
	PSVECAdd(&vvVec->mPosition, &vvVec->mDirection, &targetPos);
	adaptor_setVariableValue_Vec(sauVariableValue_3_TARGET_POSITION_XYZ, targetPos);
}

/**
 * @note Address: 0x800117DC
 * @note Size: 0x54
 */
void TAdaptor_light::adaptor_do_end(const JStudio::TObject*)
{
	mObject->setFlagOff(1);
}

/**
 * @note Address: 0x80011830
 * @note Size: 0x1C8
 */
void TAdaptor_light::adaptor_do_update(const JStudio::TObject* object, u32 p2)
{
	JStudio::TControl* control = object->getControl();
	GXColor color;
	adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	get_pJSG_()->JSGSetColor(color);

	JStudio::TControl::TTransform_position_direction posDir1;
	adaptor_getVariableValue_Vec(&posDir1.mPosition, sauVariableValue_3_POSITION_XYZ);

	switch (_118) {
	case 1:
		f32 val10 = adaptor_getVariableValue(10)->getValue();
		f32 val11 = adaptor_getVariableValue(11)->getValue();
		f32 cosX  = dolcosf(DEG_TO_RAD(val11));
		f32 sinX  = dolsinf(DEG_TO_RAD(val11));

		posDir1.mDirection.x = cosX * dolsinf(DEG_TO_RAD(val10));
		posDir1.mDirection.y = sinX;
		posDir1.mDirection.z = cosX * dolcosf(DEG_TO_RAD(val10));

		break;
	case 2:
		Vec target;
		adaptor_getVariableValue_Vec(&target, sauVariableValue_3_TARGET_POSITION_XYZ);
		PSVECSubtract(&target, &posDir1.mPosition, &posDir1.mDirection);
		break;
	}

	JStudio::TControl::TTransform_position_direction* posDir;
	if (!control->mTransformOnSet) {
		posDir = &posDir1;
	} else {
		JStudio::TControl::TTransform_position_direction posDir2;
		PSMTXMultVec(control->mTransformOnSet_Mtx, &posDir1.mPosition, &posDir2.mPosition);
		PSMTXMultVecSR(control->mTransformOnSet_Mtx, &posDir1.mDirection, &posDir2.mDirection);
		posDir = &posDir2;
	}

	get_pJSG_()->JSGSetPosition(posDir->mPosition);
	get_pJSG_()->JSGSetDirection(posDir->mDirection);
	get_pJSG_()->JSGUpdate();
}

/**
 * @note Address: 0x800119F8
 * @note Size: 0x34
 */
void TAdaptor_light::adaptor_do_data(const JStudio::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mObject, p2, p3, p4, p5);
}

/**
 * @note Address: 0x80011A2C
 * @note Size: 0x78
 */
void TAdaptor_light::adaptor_do_FACULTY(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		JStage::TELight lightType;
		switch (((int*)data)[0]) {
		case 0x301:
			lightType = JStage::TELIGHT_Unk1;
			break;
		case 0x302:
			lightType = JStage::TELIGHT_Unk2;
			break;
		case 0x303:
			lightType = JStage::TELIGHT_Unk3;
			break;
		default:
			goto end; // good luck trying to kill the goto -EpochFlame
			break;
		}

		get_pJSG_()->JSGSetLightType(lightType);
	end:
		break;
	}
}

/**
 * @note Address: 0x80011AA4
 * @note Size: 0x24
 */
void TAdaptor_light::adaptor_do_ENABLE(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	TAdaptor_object_::adaptor_ENABLE_(mObject, op, data, flag);
}

/**
 * @note Address: 0x80011AC8
 * @note Size: 0xC
 */
void TAdaptor_light::TVVOutput_direction_::operator()(f32, JStudio::TAdaptor* adaptor) const
{
	((TAdaptor_light*)adaptor)->_118 = _08;
}

} // namespace JStudio_JStage
