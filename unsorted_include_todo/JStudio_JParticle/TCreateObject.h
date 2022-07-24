#ifndef _JSTUDIO_JPARTICLE_TCREATEOBJECT_H
#define _JSTUDIO_JPARTICLE_TCREATEOBJECT_H

/*
    __vt__Q217JStudio_JParticle13TCreateObject:
    .4byte 0
    .4byte 0
    .4byte __dt__Q217JStudio_JParticle13TCreateObjectFv
    .4byte create__Q217JStudio_JParticle13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

namespace JStudio_JParticle {
struct TCreateObject {
	virtual ~TCreateObject();                                                                 // _08
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C
};
} // namespace JStudio_JParticle

#endif
