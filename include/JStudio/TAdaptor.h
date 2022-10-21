#ifndef _JSTUDIO_TADAPTOR_H
#define _JSTUDIO_TADAPTOR_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JStudio/data.h"

namespace JStudio {
struct TObject;
struct TVariableValue;

struct TAdaptor {
	struct TSetVariableValue_immediate {
		int _00; // _00
		f32 _04; // _04
	};

	typedef void (*StaticCapsSetVariableValueFunction)(TAdaptor*, TObject*, u32, const void*, u32);

	~TAdaptor();

	virtual void _08() = 0;                                                           // _08
	virtual void adaptor_do_prepare(const TObject*);                                  // _0C
	virtual void adaptor_do_begin(const TObject*);                                    // _10
	virtual void adaptor_do_end(const TObject*);                                      // _14
	virtual void adaptor_do_update(const TObject*, u32);                              // _18
	virtual void adaptor_do_data(const TObject*, const void*, u32, const void*, u32); // _1C

	void adaptor_setVariableValue(JStudio::TObject*, u32, JStudio::data::TEOperationData, const void*, u32);
	void adaptor_setVariableValue_immediate(const JStudio::TAdaptor::TSetVariableValue_immediate*);
	void adaptor_setVariableValue_Vec(const u32*, const Vec&);
	void adaptor_getVariableValue_Vec(Vec*, const u32*) const;
	void adaptor_setVariableValue_GXColor(const u32*, const _GXColor&);
	void adaptor_getVariableValue_GXColor(_GXColor*, const u32*) const;
	static void adaptor_setVariableValue_VOID_(TAdaptor*, TObject*, u32, const void*, u32);
	static void adaptor_setVariableValue_IMMEDIATE_(TAdaptor*, TObject*, u32, const void*, u32);
	static void adaptor_setVariableValue_TIME_(TAdaptor*, TObject*, u32, const void*, u32);
	static void adaptor_setVariableValue_FVR_NAME_(TAdaptor*, TObject*, u32, const void*, u32);
	static void adaptor_setVariableValue_FVR_INDEX_(TAdaptor*, TObject*, u32, const void*, u32);

	// unused/inlined:
	void adaptor_setVariableValue_n(JStudio::TObject*, u32 const*, u32, data::TEOperationData, void const*, u32);
	void adaptor_updateVariableValue_Vec(u32 const*, Vec const&);
	void adaptor_updateVariableValue_GXColor(u32 const*, _GXColor const&);
	void adaptor_updateVariableValue();
	void adaptor_updateVariableValue(JStudio::TObject*, u32);

	// VTBL _00
	TVariableValue* _04; // _04
};

struct TAdaptor_actor : public TAdaptor {
	~TAdaptor_actor();

	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void _30() = 0; // _30
	virtual void _34() = 0; // _34
	virtual void _38() = 0; // _38
	virtual void _3C() = 0; // _3C
	virtual void _40() = 0; // _40
	virtual void _44() = 0; // _44
	virtual void _48() = 0; // _48
	virtual void _4C() = 0; // _4C
};

struct TAdaptor_ambientLight : public TAdaptor {
	~TAdaptor_ambientLight();

	virtual void _08() = 0; // _08
};

struct TAdaptor_camera : public TAdaptor {
	~TAdaptor_camera();

	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void _30() = 0; // _30
	virtual void _34() = 0; // _34
	virtual void _38() = 0; // _38
};

struct TAdaptor_fog : public TAdaptor {
	~TAdaptor_fog();

	virtual void _08() = 0; // _08
};

struct TAdaptor_light : public TAdaptor {
	~TAdaptor_light();

	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
};

struct TAdaptor_message : public TAdaptor {
	~TAdaptor_message();

	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
};

struct TAdaptor_particle : public TAdaptor {
	~TAdaptor_particle();

	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void _30() = 0; // _30
	virtual void _34() = 0; // _34
	virtual void _38() = 0; // _38
	virtual void _3C() = 0; // _3C
};

struct TAdaptor_sound : public TAdaptor {
	~TAdaptor_sound();

	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void _30() = 0; // _30
	virtual void _34() = 0; // _34
	virtual void _38() = 0; // _38
	virtual void _3C() = 0; // _3C
	virtual void _40() = 0; // _40
};
} // namespace JStudio

#endif
