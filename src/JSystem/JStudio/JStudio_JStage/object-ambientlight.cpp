#include "Dolphin/gx.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q214JStudio_JStage21TAdaptor_ambientLight
    __vt__Q214JStudio_JStage21TAdaptor_ambientLight:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage21TAdaptor_ambientLightFv
        .4byte
   adaptor_do_prepare__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
        .4byte
   adaptor_do_begin__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
        .4byte
   adaptor_do_update__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectPCvUlPCvUl
*/

/*
 * --INFO--
 * Address:	8001318C
 * Size:	0000A0
 */
JStudio_JStage::TAdaptor_ambientLight::TAdaptor_ambientLight(const JStage::TSystem* system, JStage::TAmbientLight* object)
    : m_system(system)
    , m_light(object)
{
}

/*
 * --INFO--
 * Address:	8001322C
 * Size:	000078
 * _dt
 */
JStudio_JStage::TAdaptor_ambientLight::~TAdaptor_ambientLight() { adaptor_do_end(nullptr); }

/*
 * --INFO--
 * Address:	800132A4
 * Size:	000004
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_prepare(const JStudio::TObject*) { }

/*
 * --INFO--
 * Address:	800132A8
 * Size:	00008C
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_begin(const JStudio::TObject*)
{
	m_light->setFlagOn(1);
	adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, m_light->JSGGetColor());
}

/*
 * --INFO--
 * Address:	80013334
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_end(const JStudio::TObject*) { m_light->setFlagOff(1); }

/*
 * --INFO--
 * Address:	80013388
 * Size:	00006C
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_update(const JStudio::TObject*, unsigned long)
{
	_GXColor color;
	adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	m_light->JSGSetColor(color);
	m_light->JSGUpdate();
}

/*
 * --INFO--
 * Address:	800133F4
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_data(const JStudio::TObject* p1, const void* p2, unsigned long p3, const void* p4,
                                                            unsigned long p5)
{
	TAdaptor_object_::adaptor_data_(m_light, p2, p3, p4, p5);
}
