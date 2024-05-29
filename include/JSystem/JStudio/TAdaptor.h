#ifndef _JSTUDIO_TADAPTOR_H
#define _JSTUDIO_TADAPTOR_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JStudio/TVariableValue.h"

namespace JStudio {
struct TObject;

struct TAdaptor {
	struct TSetVariableValue_immediate {
		inline TSetVariableValue_immediate(u32 p1, f32 p2)
		    : _00(p1)
		    , _04(p2)
		{
		}

		u32 _00; // _00
		f32 _04; // _04
	};

	typedef void (JStudio::TAdaptor::*AdaptorDoFunction)(JStudio::data::TEOperationData, const void*, u32);
	typedef void (*StaticCapsSetVariableValueFunction)(TAdaptor*, TObject*, u32, const void*, u32);

	inline TAdaptor(TVariableValue* values, int count)
	    : mVariableValues(values)
	    , mCount(count)
	{
	}

	// ~TAdaptor();

	virtual ~TAdaptor() = 0;                                                          // _08
	virtual void adaptor_do_prepare(const TObject*);                                  // _0C
	virtual void adaptor_do_begin(const TObject*);                                    // _10
	virtual void adaptor_do_end(const TObject*);                                      // _14
	virtual void adaptor_do_update(const TObject*, u32);                              // _18
	virtual void adaptor_do_data(const TObject*, const void*, u32, const void*, u32); // _1C

	void adaptor_setVariableValue(JStudio::TObject*, u32, JStudio::data::TEOperationData, const void*, u32);
	void adaptor_setVariableValue_immediate(const JStudio::TAdaptor::TSetVariableValue_immediate*);
	void adaptor_setVariableValue_Vec(const u32*, const Vec&);
	void adaptor_getVariableValue_Vec(Vec*, const u32*) const;
	void adaptor_setVariableValue_GXColor(u32 const*, _GXColor const&);
	void adaptor_getVariableValue_GXColor(_GXColor*, u32 const*) const;
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

	inline TVariableValue& adaptor_referVariableValue(u32 idx) { return mVariableValues[idx]; }

	inline TVariableValue* adaptor_getVariableValue(u32 idx) { return &mVariableValues[idx]; }

	inline void adaptor_setVariableValue_immediate(u32 idx, f32 val) { adaptor_referVariableValue(idx).setValueImmediate(val); }

	// VTBL _00
	TVariableValue* mVariableValues; // _04
	int mCount;                      // _08
};

struct TAdaptor_actor : public TAdaptor {
	inline TAdaptor_actor()
	    : TAdaptor(_0C, 0xE)
	    , _0C()
	{
	}

	// ~TAdaptor_actor();

	virtual ~TAdaptor_actor()                                                                        = 0; // _08
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32)                 = 0; // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32)            = 0; // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32)          = 0; // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, u32)        = 0; // _2C
	virtual void adaptor_do_RELATION(JStudio::data::TEOperationData, const void*, u32)               = 0; // _30
	virtual void adaptor_do_RELATION_NODE(JStudio::data::TEOperationData, const void*, u32)          = 0; // _34
	virtual void adaptor_do_RELATION_ENABLE(JStudio::data::TEOperationData, const void*, u32)        = 0; // _38
	virtual void adaptor_do_SHAPE(JStudio::data::TEOperationData, const void*, u32)                  = 0; // _3C
	virtual void adaptor_do_ANIMATION(JStudio::data::TEOperationData, const void*, u32)              = 0; // _40
	virtual void adaptor_do_ANIMATION_MODE(JStudio::data::TEOperationData, const void*, u32)         = 0; // _44
	virtual void adaptor_do_TEXTURE_ANIMATION(JStudio::data::TEOperationData, const void*, u32)      = 0; // _48
	virtual void adaptor_do_TEXTURE_ANIMATION_MODE(JStudio::data::TEOperationData, const void*, u32) = 0; // _4C

	static const u32 sauVariableValue_3_TRANSLATION_XYZ[3];
	static const u32 sauVariableValue_3_ROTATION_XYZ[3];
	static const u32 sauVariableValue_3_SCALING_XYZ[3];

	// _00     = VTBL
	// _00-_0C = TAdaptor
	JStudio::TVariableValue _0C[14]; // _0C
};

struct TAdaptor_ambientLight : public TAdaptor {
	inline TAdaptor_ambientLight()
	    : TAdaptor(_0C, 4)
	    , _0C()
	{
	}

	// ~TAdaptor_ambientLight();

	virtual ~TAdaptor_ambientLight() = 0; // _08

	JStudio::TVariableValue _0C[4]; // _0C

	static const u32 sauVariableValue_3_COLOR_RGB[3];
	static const u32 sauVariableValue_4_COLOR_RGBA[4];
};

struct TAdaptor_camera : public TAdaptor {
	inline TAdaptor_camera()
	    : TAdaptor(_0C, 0xC)
	    , _0C()
	{
	}

	// ~TAdaptor_camera();

	virtual ~TAdaptor_camera()                                                                     = 0; // _08
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32)               = 0; // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32)          = 0; // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32)        = 0; // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, u32)      = 0; // _2C
	virtual void adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData, const void*, u32)        = 0; // _30
	virtual void adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32)   = 0; // _34
	virtual void adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32) = 0; // _38

	JStudio::TVariableValue _0C[0xC]; // _0C

	static const u32 sauVariableValue_2_DISTANCE_NEAR_FAR[2];
	static const u32 sauVariableValue_3_POSITION_XYZ[3];
	static const u32 sauVariableValue_3_TARGET_POSITION_XYZ[3];
};

struct TAdaptor_fog : public TAdaptor {
	inline TAdaptor_fog()
	    : TAdaptor(_0C, 6)
	    , _0C()
	{
	}

	// ~TAdaptor_fog();

	virtual ~TAdaptor_fog() = 0; // _08

	JStudio::TVariableValue _0C[6];

	static const u32 sauVariableValue_2_RANGE_BEGIN_END[2];
	static const u32 sauVariableValue_3_COLOR_RGB[3];
	static const u32 sauVariableValue_4_COLOR_RGBA[4];
};

struct TAdaptor_light : public TAdaptor {
	TAdaptor_light()
	    : TAdaptor(_0C, 13)
	{
	}
	// ~TAdaptor_light();

	virtual ~TAdaptor_light()                                                         = 0; // _08
	virtual void adaptor_do_ENABLE(JStudio::data::TEOperationData, const void*, u32)  = 0; // _20
	virtual void adaptor_do_FACULTY(JStudio::data::TEOperationData, const void*, u32) = 0; // _24

	static const u32 sauVariableValue_2_DIRECTION_THETA_PHI[2];
	static const u32 sauVariableValue_3_COLOR_RGB[3];
	static const u32 sauVariableValue_4_COLOR_RGBA[4];
	static const u32 sauVariableValue_3_POSITION_XYZ[3];
	static const u32 sauVariableValue_3_TARGET_POSITION_XYZ[3];

	// _00     = VTBL
	// _00-_0C = TAdaptor
	JStudio::TVariableValue _0C[13]; // _0C
};

struct TAdaptor_message : public TAdaptor {
	inline TAdaptor_message()
	    : TAdaptor(nullptr, 0)
	{
	}

	// ~TAdaptor_message();

	virtual ~TAdaptor_message()                                              = 0; // _08
	virtual void adaptor_do_MESSAGE(data::TEOperationData, const void*, u32) = 0; // _20
};

struct TAdaptor_particle : public TAdaptor {
	TAdaptor_particle()
	    : TAdaptor(_0C, 18)
	    , _0C()
	{
	}

	// ~TAdaptor_particle();

	virtual ~TAdaptor_particle()                                                            = 0; // _08
	virtual void adaptor_do_PARTICLE(JStudio::data::TEOperationData, const void*, u32)      = 0; // _20
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, u32)         = 0; // _24
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, u32) = 0; // _28
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*, u32)           = 0; // _2C
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, u32)  = 0; // _30
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32)        = 0; // _34
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32)   = 0; // _38
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32) = 0; // _3C

	JStudio::TVariableValue _0C[18];

	static const u32 sauVariableValue_3_TRANSLATION_XYZ[3];
	static const u32 sauVariableValue_3_ROTATION_XYZ[3];
	static const u32 sauVariableValue_3_SCALING_XYZ[3];
	static const u32 sauVariableValue_3_COLOR_RGB[3];
	static const u32 sauVariableValue_4_COLOR_RGBA[4];
	static const u32 sauVariableValue_3_COLOR1_RGB[3];
	static const u32 sauVariableValue_4_COLOR1_RGBA[4];
};

struct TAdaptor_sound : public TAdaptor {
	TAdaptor_sound()
	    : TAdaptor(mVariableList, ARRAY_SIZE(mVariableList))
	    , mVariableList()
	{
	}

	virtual ~TAdaptor_sound()                                                               = 0; // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*)                                = 0; // _0C
	virtual void adaptor_do_end(const JStudio::TObject*)                                    = 0; // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32)                            = 0; // _18
	virtual void adaptor_do_SOUND(JStudio::data::TEOperationData, const void*, u32)         = 0; // _20
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, u32)         = 0; // _24
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, u32) = 0; // _28
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*, u32)           = 0; // _2C
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, u32)  = 0; // _30
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32)        = 0; // _34
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32)   = 0; // _38
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32) = 0; // _3C
	virtual void adaptor_do_LOCATED(JStudio::data::TEOperationData, const void*, u32)       = 0; // _40

	JStudio::TVariableValue mVariableList[10]; // _0C

	static const u32 sauVariableValue_3_POSITION_XYZ[3];
};
} // namespace JStudio

#endif
