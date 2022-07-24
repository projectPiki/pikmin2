#ifndef _JSTUDIO_JAUDIO_TCREATEOBJECT_H
#define _JSTUDIO_JAUDIO_TCREATEOBJECT_H

/*
    __vt__Q214JStudio_JAudio13TCreateObject:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214JStudio_JAudio13TCreateObjectFv
    .4byte create__Q214JStudio_JAudio13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

namespace JStudio_JAudio {
struct TCreateObject {
	virtual ~TCreateObject();                                                                 // _08
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C

	// _00 VTBL
};
} // namespace JStudio_JAudio

#endif
