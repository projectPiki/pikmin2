#include "JSystem/JStage/TObject.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TVariableValue.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

namespace JStudio_JStage {

const TAdaptor_fog::TVVOutput TAdaptor_fog::saoVVOutput_[3]
    = { TVVOutput(4, &JStage::TFog::JSGSetStartZ, &JStage::TFog::JSGGetStartZ),
	    TVVOutput(5, &JStage::TFog::JSGSetEndZ, &JStage::TFog::JSGGetEndZ), TVVOutput(-1, nullptr, nullptr) };

/**
 * @note Address: 0x80014134
 * @note Size: 0xA0
 */
TAdaptor_fog::TAdaptor_fog(const JStage::TSystem* system, JStage::TFog* fog)
    : JStudio::TAdaptor_fog()
    , mSystem(system)
    , mObject(fog)
{
}

/**
 * @note Address: 0x800141D4
 * @note Size: 0x78
 * __dt
 */
TAdaptor_fog::~TAdaptor_fog() { adaptor_do_end(nullptr); }

/**
 * @note Address: 0x8001424C
 * @note Size: 0x48
 */
void TAdaptor_fog::adaptor_do_prepare(const JStudio::TObject*)
{
	for (const TVVOutput* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x80014294
 * @note Size: 0xF4
 */
void TAdaptor_fog::adaptor_do_begin(const JStudio::TObject*)
{
	mObject->setFlagOn(1);
	adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, mObject->JSGGetColor());
	for (const TVVOutput* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setValueImmediate((mObject->*(output->mGetter))());
	}
}

/**
 * @note Address: 0x80014388
 * @note Size: 0x54
 */
void TAdaptor_fog::adaptor_do_end(const JStudio::TObject*) { mObject->setFlagOff(1); }

/**
 * @note Address: 0x800143DC
 * @note Size: 0x6C
 */
void TAdaptor_fog::adaptor_do_update(const JStudio::TObject*, u32)
{
	_GXColor color;
	adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	mObject->JSGSetColor(color);
	mObject->JSGUpdate();
}

/**
 * @note Address: 0x80014448
 * @note Size: 0x34
 */
void TAdaptor_fog::adaptor_do_data(const JStudio::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mObject, p2, p3, p4, p5);
}
} // namespace JStudio_JStage
