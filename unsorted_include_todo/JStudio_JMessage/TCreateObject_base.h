#ifndef _JSTUDIO_JMESSAGE_TCREATEOBJECT_BASE_H
#define _JSTUDIO_JMESSAGE_TCREATEOBJECT_BASE_H

namespace JStudio_JMessage {
struct TCreateObject_base {
	virtual void _00() = 0; // _00
	virtual void create(JStudio::TObject**,
	                    const JStudio::stb::data::TParse_TBlock_object&); // _04
	virtual void _08() = 0;                                               // _08

	// _00 VTBL
};
} // namespace JStudio_JMessage

#endif
