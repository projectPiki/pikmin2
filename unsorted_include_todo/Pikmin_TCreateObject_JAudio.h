#ifndef _PIKMIN_TCREATEOBJECT_JAUDIO_H
#define _PIKMIN_TCREATEOBJECT_JAUDIO_H

struct Pikmin_TCreateObject_JAudio {
	virtual ~Pikmin_TCreateObject_JAudio(); // _00
	virtual void create(JStudio::TObject**,
	                    const JStudio::stb::data::TParse_TBlock_object&); // _04
	virtual void _08() = 0;                                               // _08

	// _00 VTBL
};

#endif
