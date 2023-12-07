#include "Dolphin/gx.h"
#include "JSystem/JStudio_JStage.h"

namespace JStudio_JStage {

/*
 * --INFO--
 * Address:	8001318C
 * Size:	0000A0
 */
TAdaptor_ambientLight::TAdaptor_ambientLight(const JStage::TSystem* system, JStage::TAmbientLight* object)
    : mSystem(system)
    , mLight(object)
{
}

/*
 * --INFO--
 * Address:	8001322C
 * Size:	000078
 * _dt
 */
TAdaptor_ambientLight::~TAdaptor_ambientLight() { adaptor_do_end(nullptr); }

/*
 * --INFO--
 * Address:	800132A4
 * Size:	000004
 */
void TAdaptor_ambientLight::adaptor_do_prepare(const JStudio::TObject*) { }

/*
 * --INFO--
 * Address:	800132A8
 * Size:	00008C
 */
void TAdaptor_ambientLight::adaptor_do_begin(const JStudio::TObject*)
{
	mLight->setFlagOn(1);
	adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, mLight->JSGGetColor());
}

/*
 * --INFO--
 * Address:	80013334
 * Size:	000054
 */
void TAdaptor_ambientLight::adaptor_do_end(const JStudio::TObject*) { mLight->setFlagOff(1); }

/*
 * --INFO--
 * Address:	80013388
 * Size:	00006C
 */
void TAdaptor_ambientLight::adaptor_do_update(const JStudio::TObject*, u32)
{
	GXColor color;
	adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	mLight->JSGSetColor(color);
	mLight->JSGUpdate();
}

/*
 * --INFO--
 * Address:	800133F4
 * Size:	000034
 */
void TAdaptor_ambientLight::adaptor_do_data(const JStudio::TObject* p1, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mLight, p2, p3, p4, p5);
}

} // namespace JStudio_JStage
