#ifndef _JSTUDIO_TOBJECT_H
#define _JSTUDIO_TOBJECT_H

#include "JStudio/TAdaptor.h"
#include "JStudio/TControl.h"
#include "JStudio/data.h"
#include "JStudio/object.h"
#include "JStudio/stb.h"
#include "JSystem/JGadget/linklist.h"
#include "types.h"

namespace JStudio {
namespace stb {
namespace data {
struct TParse_TBlock_object;
} // namespace data
} // namespace stb

struct TObject : stb::TObject {
	TObject(data::TE32Block, void const*, unsigned long, TAdaptor*);                          // unused/inlined
	TObject(const JStudio::stb::data::TParse_TBlock_object& data, JStudio::TAdaptor* adaptor) // unused/inlined
	    : stb::TObject(data)
	    , m_adaptor(adaptor)
	{
	}

	// TODO: Isn't there an unused ~TObject in jstudio-object.cpp???
	virtual ~TObject() = 0;                                   // _08
	virtual void do_begin();                                  // _0C
	virtual void do_end();                                    // _10
	virtual void do_paragraph(u32, const void*, u32) = 0;     // _14
	virtual void do_wait(u32);                                // _18
	virtual void do_data(const void*, u32, const void*, u32); // _1C

	// unused/inlined:
	void forward_value(u32);

	// VTBL _04
	// JGadget::TLinkListNode _0C; // _0C
	// TControl* m_control;        // _14
	TAdaptor* m_adaptor; // _34
};

struct TObject_actor : public TObject {
	TObject_actor(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_actor*);
	TObject_actor(void const*, unsigned long, JStudio::TAdaptor_actor*); // unused/inlined

	virtual ~TObject_actor();                                             // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};

struct TObject_ambientLight : public TObject {
	TObject_ambientLight(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_ambientLight*);
	TObject_ambientLight(void const*, unsigned long, JStudio::TAdaptor_ambientLight*); // unused/inlined

	virtual ~TObject_ambientLight();                                      // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};

struct TObject_camera : public TObject {
	TObject_camera(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_camera*);
	TObject_camera(void const*, unsigned long, JStudio::TAdaptor_camera*); // unused/inlined

	virtual ~TObject_camera();                                            // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};

struct TObject_fog : public TObject {
	TObject_fog(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_fog*);
	TObject_fog(void const*, unsigned long, JStudio::TAdaptor_fog*); // unused/inlined

	virtual ~TObject_fog();                                               // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};

struct TObject_light : public TObject {
	TObject_light(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_light*);
	TObject_light(void const*, unsigned long, JStudio::TAdaptor_light*); // unused/inlined

	virtual ~TObject_light();                                             // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};

struct TObject_message : public TObject {
	TObject_message(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_message*);
	TObject_message(void const*, unsigned long, JStudio::TAdaptor_message*); // unused/inlined

	virtual ~TObject_message();                                           // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};

struct TObject_particle : public TObject {
	TObject_particle(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_particle*);
	TObject_particle(void const*, unsigned long, JStudio::TAdaptor_particle*); // unused/inlined

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
};

struct TObject_sound : public TObject {
	TObject_sound(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_sound*);
	TObject_sound(void const*, unsigned long, JStudio::TAdaptor_sound*); // unused/inlined

	virtual ~TObject_sound();                                             // _08 (weak)
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _14
};
} // namespace JStudio

#endif
