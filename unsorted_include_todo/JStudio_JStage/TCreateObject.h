#ifndef _JSTUDIO_JSTAGE_TCREATEOBJECT_H
#define _JSTUDIO_JSTAGE_TCREATEOBJECT_H

/*
    __vt__Q214JStudio_JStage13TCreateObject:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214JStudio_JStage13TCreateObjectFv
    .4byte
   create__Q214JStudio_JStage13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

namespace JStudio_JStage {
struct TCreateObject {
	virtual ~TCreateObject(); // _00
	virtual void create(JStudio::TObject**,
	                    const JStudio::stb::data::TParse_TBlock_object&); // _04

	// _00 VTBL
};
} // namespace JStudio_JStage

#endif
