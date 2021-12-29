#ifndef _JSTUDIO_JMESSAGE_TCREATEOBJECT_H
#define _JSTUDIO_JMESSAGE_TCREATEOBJECT_H

/*
    __vt__Q216JStudio_JMessage13TCreateObject:
    .4byte 0
    .4byte 0
    .4byte __dt__Q216JStudio_JMessage13TCreateObjectFv
    .4byte
   create__Q216JStudio_JMessage18TCreateObject_baseFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
    .4byte
   find__Q216JStudio_JMessage13TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_object
*/

namespace JStudio_JMessage {
struct TCreateObject_base {
	virtual ~TCreateObject_base(); // _00
	virtual void create(JStudio::TObject**,
	                    const JStudio::stb::data::TParse_TBlock_object&); // _04

	// _00 VTBL
};
} // namespace JStudio_JMessage

namespace JStudio_JMessage {
struct TCreateObject : public TCreateObject_base {
	virtual ~TCreateObject(); // _00
	virtual void create(JStudio::TObject**,
	                    const JStudio::stb::data::TParse_TBlock_object&); // _04
	virtual void find(const JStudio::stb::data::TParse_TBlock_object&);   // _08

	// _00 VTBL
};
} // namespace JStudio_JMessage

#endif
