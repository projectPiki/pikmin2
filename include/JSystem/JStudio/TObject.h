#ifndef _JSTUDIO_TOBJECT_H
#define _JSTUDIO_TOBJECT_H

#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JStudio/object.h"
#include "JSystem/JStudio/stb.h"
#include "JSystem/JGadget/linklist.h"
#include "types.h"

namespace JStudio {
namespace stb {
namespace data {
struct TParse_TBlock_object;
} // namespace data
} // namespace stb

struct TObject : public stb::TObject {
	TObject(data::TE32Block, void const*, u32, TAdaptor*);                                    // unused/inlined
	TObject(const JStudio::stb::data::TParse_TBlock_object& data, JStudio::TAdaptor* adaptor) // unused/inlined
	    : stb::TObject(data)
	    , mAdaptor(adaptor)
	{
	}

	virtual ~TObject() = 0;                                   // _08
	virtual void do_begin();                                  // _0C
	virtual void do_end();                                    // _10
	virtual void do_paragraph(u32, const void*, u32) = 0;     // _14
	virtual void do_wait(u32);                                // _18
	virtual void do_data(const void*, u32, const void*, u32); // _1C

	// unused/inlined:
	void forward_value(u32);

	TControl* getControl() const { return static_cast<TControl*>(mControl); }
	TAdaptor* getAdaptor() const { return mAdaptor; }

	// VTBL _04
	// JGadget::TLinkListNode _0C; // _0C
	// TControl* mControl;        // _14
	TAdaptor* mAdaptor; // _34
};

struct TObject_actor : public TObject {
	TObject_actor(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_actor*);
	TObject_actor(void const*, u32, JStudio::TAdaptor_actor*); // unused/inlined

	virtual ~TObject_actor() { }                      // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

struct TObject_ambientLight : public TObject {
	TObject_ambientLight(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_ambientLight*);
	TObject_ambientLight(void const*, u32, JStudio::TAdaptor_ambientLight*); // unused/inlined

	virtual ~TObject_ambientLight() { }               // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

struct TObject_camera : public TObject {
	TObject_camera(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_camera*);
	TObject_camera(void const*, u32, JStudio::TAdaptor_camera*); // unused/inlined

	virtual ~TObject_camera() { }                     // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

struct TObject_fog : public TObject {
	TObject_fog(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_fog*);
	TObject_fog(void const*, u32, JStudio::TAdaptor_fog*); // unused/inlined

	virtual ~TObject_fog() { }                        // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

struct TObject_light : public TObject {
	TObject_light(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_light*);
	TObject_light(void const*, u32, JStudio::TAdaptor_light*); // unused/inlined

	virtual ~TObject_light() { }                      // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

struct TObject_message : public TObject {
	TObject_message(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_message*);
	TObject_message(void const*, u32, JStudio::TAdaptor_message*); // unused/inlined

	virtual ~TObject_message() { }                    // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

// TODO: The vtable is only 20 bytes long. Why is there so much blank space afterwards???
struct TObject_particle : public TObject {
	TObject_particle(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_particle*);
	TObject_particle(void const*, u32, JStudio::TAdaptor_particle*); // unused/inlined

	virtual ~TObject_particle() { }                   // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};

struct TObject_sound : public TObject {
	TObject_sound(const JStudio::stb::data::TParse_TBlock_object&, JStudio::TAdaptor_sound*);
	TObject_sound(void const*, u32, JStudio::TAdaptor_sound*); // unused/inlined

	virtual ~TObject_sound() { }                      // _08 (weak)
	virtual void do_paragraph(u32, const void*, u32); // _14
};
} // namespace JStudio

#endif
