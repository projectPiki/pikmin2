#ifndef _PIKMIN_TCREATEOBJECT_JAUDIO_H
#define _PIKMIN_TCREATEOBJECT_JAUDIO_H

/*
    __vt__27Pikmin_TCreateObject_JAudio:
    .4byte 0
    .4byte 0
    .4byte __dt__27Pikmin_TCreateObject_JAudioFv
    .4byte create__27Pikmin_TCreateObject_JAudioFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
    .4byte 0
*/

struct Pikmin_TCreateObject_JAudio {
	virtual ~Pikmin_TCreateObject_JAudio();                                                   // _08 (weak)
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C
	virtual void _10() = 0;                                                                   // _10

	Pikmin_TCreateObject_JAudio(JAIBasic*, const JStage::TSystem*);
};

#endif
