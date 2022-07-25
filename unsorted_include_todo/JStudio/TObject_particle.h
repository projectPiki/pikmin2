#ifndef _JSTUDIO_TOBJECT_PARTICLE_H
#define _JSTUDIO_TOBJECT_PARTICLE_H

/*
    __vt__Q27JStudio16TObject_particle:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio16TObject_particleFv
    .4byte do_begin__Q27JStudio7TObjectFv
    .4byte do_end__Q27JStudio7TObjectFv
    .4byte do_paragraph__Q27JStudio16TObject_particleFUlPCvUl
    .4byte do_wait__Q27JStudio7TObjectFUl
    .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JStudio {
struct TObject {
	virtual ~TObject();                                                           // _08 (weak)
	virtual void do_begin();                                                      // _0C
	virtual void do_end();                                                        // _10
	virtual void do_paragraph(unsigned long, const void*, unsigned long);         // _14
	virtual void do_wait(unsigned long);                                          // _18
	virtual void do_data(const void*, unsigned long, const void*, unsigned long); // _1C
};
} // namespace JStudio

namespace JStudio {
struct TObject_particle : public TObject {
	virtual ~TObject_particle();                                          // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
	virtual void _20() = 0;                                               // _20
	virtual void _24() = 0;                                               // _24
	virtual void _28() = 0;                                               // _28
	virtual void _2C() = 0;                                               // _2C
	virtual void _30() = 0;                                               // _30
	virtual void _34() = 0;                                               // _34
	virtual void _38() = 0;                                               // _38
	virtual void _3C() = 0;                                               // _3C
	virtual void _40() = 0;                                               // _40
	virtual void _44() = 0;                                               // _44
	virtual void _48() = 0;                                               // _48
	virtual void _4C() = 0;                                               // _4C
	virtual void _50() = 0;                                               // _50
	virtual void _54() = 0;                                               // _54
	virtual void _58() = 0;                                               // _58
	virtual void _5C() = 0;                                               // _5C

	TObject_particle(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_particle*);
};
} // namespace JStudio

#endif
