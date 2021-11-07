#ifndef _JSTUDIO_JMESSAGE_TCREATEOBJECT_H
#define _JSTUDIO_JMESSAGE_TCREATEOBJECT_H

namespace JStudio_JMessage {
struct TCreateObject_base {
	virtual void _00() = 0; // _00
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
