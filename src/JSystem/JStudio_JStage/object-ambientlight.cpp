#include "Dolphin/gx.h"
#include "JSystem/JStudio_JStage.h"

namespace JStudio_JStage {

/**
 * @note Address: 0x8001318C
 * @note Size: 0xA0
 */
TAdaptor_ambientLight::TAdaptor_ambientLight(const JStage::TSystem* system, JStage::TAmbientLight* object)
    : mSystem(system)
    , mLight(object)
{
}

/**
 * @note Address: 0x8001322C
 * @note Size: 0x78
 * _dt
 */
TAdaptor_ambientLight::~TAdaptor_ambientLight() { adaptor_do_end(nullptr); }

/**
 * @note Address: 0x800132A4
 * @note Size: 0x4
 */
void TAdaptor_ambientLight::adaptor_do_prepare(const JStudio::TObject*) { }

/**
 * @note Address: 0x800132A8
 * @note Size: 0x8C
 */
void TAdaptor_ambientLight::adaptor_do_begin(const JStudio::TObject*)
{
	mLight->setFlagOn(1);
	adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, mLight->JSGGetColor());
}

/**
 * @note Address: 0x80013334
 * @note Size: 0x54
 */
void TAdaptor_ambientLight::adaptor_do_end(const JStudio::TObject*) { mLight->setFlagOff(1); }

/**
 * @note Address: 0x80013388
 * @note Size: 0x6C
 */
void TAdaptor_ambientLight::adaptor_do_update(const JStudio::TObject*, u32)
{
	GXColor color;
	adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	mLight->JSGSetColor(color);
	mLight->JSGUpdate();
}

/**
 * @note Address: 0x800133F4
 * @note Size: 0x34
 */
void TAdaptor_ambientLight::adaptor_do_data(const JStudio::TObject* p1, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mLight, p2, p3, p4, p5);
}

} // namespace JStudio_JStage
