#ifndef _JSTUDIO_JAUDIO_TCREATEOBJECT_H
#define _JSTUDIO_JAUDIO_TCREATEOBJECT_H

namespace JStudio_JAudio {
struct TCreateObject {
	virtual ~TCreateObject(); // _00
	virtual void create(JStudio::TObject**,
	                    const JStudio::stb::data::TParse_TBlock_object&); // _04

	// _00 VTBL
};
} // namespace JStudio_JAudio

#endif
