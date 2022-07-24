#ifndef _JSTUDIO_JMESSAGE_TCREATEOBJECT_BASE_H
#define _JSTUDIO_JMESSAGE_TCREATEOBJECT_BASE_H

/*
    __vt__Q216JStudio_JMessage18TCreateObject_base:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte create__Q216JStudio_JMessage18TCreateObject_baseFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
    .4byte 0
*/

namespace JStudio_JMessage {
struct TCreateObject_base {
	virtual void _08() = 0;                                                                   // _08
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C
	virtual void _10() = 0;                                                                   // _10
};
} // namespace JStudio_JMessage

#endif
