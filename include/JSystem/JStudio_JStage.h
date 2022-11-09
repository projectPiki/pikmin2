#ifndef _JSYSTEM_JSTUDIO_JSTAGE_H
#define _JSYSTEM_JSTUDIO_JSTAGE_H

#include "JStage/TActor.h"
#include "JStage/TCamera.h"
#include "JStage/TObject.h"
#include "JStage/TSystem.h"
#include "JStudio/TAdaptor.h"
#include "JStudio/TControl.h"
#include "JStudio/TObject.h"
#include "JStudio/TVariableValue.h"

namespace JStudio_JStage {
struct TCreateObject {
	virtual ~TCreateObject();                                                                 // _08
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C
};

template <typename Adaptor, typename Object>
struct TVariableValueOutput_object_ : public JStudio::TVariableValue::TOutput {
	typedef void (Object::*Setter)(f32);
	typedef f32 (Object::*Getter)() const;

	TVariableValueOutput_object_(int valueIndex, Setter setter, Getter getter)
	    : TOutput()
	    , m_valueIndex(valueIndex)
	    , m_setter(setter)
	    , m_getter(getter)
	{
	}

	virtual void operator()(float value, JStudio::TAdaptor* adaptor) const // _08 (weak)
	{
		(static_cast<Object*>(static_cast<Adaptor*>(adaptor)->m_object)->*m_setter)(value);
	}
	virtual ~TVariableValueOutput_object_() { } // _0C (weak)

	int m_valueIndex; // _04
	Setter m_setter;  // _08
	Getter m_getter;  // _14
};

struct TAdaptor_object_ {
	static void adaptor_data_(JStage::TObject*, const void*, u32, const void*, u32);
	static JStage::TObject* adaptor_findJSGObject_(const JStage::TSystem*, const char*);
	static u32 adaptor_findJSGObjectNode_(const JStage::TObject*, const char*);
	static void adaptor_ENABLE_(JStage::TObject*, JStudio::data::TEOperationData, const void*, unsigned long);
};

struct TAdaptor_actor : public JStudio::TAdaptor_actor {
	typedef void (JStage::TActor::*IDFunction)(u32);
	typedef TVariableValueOutput_object_<TAdaptor_actor, JStage::TActor> TVVOutputObject;

	struct TVVOutput_ANIMATION_FRAME_ : public JStudio::TVariableValue::TOutput {
		typedef void (JStage::TActor::*Setter)(f32);
		typedef f32 (JStage::TActor::*Getter)() const;
		typedef f32 (JStage::TActor::*MaxGetter)() const;

		TVVOutput_ANIMATION_FRAME_(int valueIndex, Setter setter, Getter getter, MaxGetter maxGetter)
		    : TOutput()
		    , m_valueIndex(valueIndex)
		    , m_setter(setter)
		    , m_getter(getter)
		    , m_maxGetter(maxGetter)
		{
		}

		virtual void operator()(float, JStudio::TAdaptor*) const; // _08
		virtual ~TVVOutput_ANIMATION_FRAME_() { }                 // _0C (weak)

		int m_valueIndex;      // _04
		u32 _08;               // _08
		Setter m_setter;       // _0C
		Getter m_getter;       // _18
		MaxGetter m_maxGetter; // _24
	};

	TAdaptor_actor(const JStage::TSystem*, JStage::TActor*);

	// vtable size is 0x50, despite all the padding.
	virtual ~TAdaptor_actor();                                                                                     // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, unsigned long);                    // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long);               // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);             // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, unsigned long);           // _2C
	virtual void adaptor_do_RELATION(JStudio::data::TEOperationData, const void*, unsigned long);                  // _30
	virtual void adaptor_do_RELATION_NODE(JStudio::data::TEOperationData, const void*, unsigned long);             // _34
	virtual void adaptor_do_RELATION_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);           // _38
	virtual void adaptor_do_SHAPE(JStudio::data::TEOperationData, const void*, unsigned long);                     // _3C
	virtual void adaptor_do_ANIMATION(JStudio::data::TEOperationData, const void*, unsigned long);                 // _40
	virtual void adaptor_do_ANIMATION_MODE(JStudio::data::TEOperationData, const void*, unsigned long);            // _44
	virtual void adaptor_do_TEXTURE_ANIMATION(JStudio::data::TEOperationData, const void*, unsigned long);         // _48
	virtual void adaptor_do_TEXTURE_ANIMATION_MODE(JStudio::data::TEOperationData, const void*, unsigned long);    // _4C
	// virtual void _50() = 0;                                                                                        // _50
	// virtual void _54() = 0;                                                                                        // _54
	// virtual void _58() = 0;                                                                                        // _58
	// virtual void _5C() = 0;                                                                                        // _5C
	// virtual void _60() = 0;                                                                                        // _60
	// virtual void _64() = 0;                                                                                        // _64
	// virtual void _68() = 0;                                                                                        // _68
	// virtual void _6C() = 0;                                                                                        // _6C
	// virtual void _70() = 0;                                                                                        // _70
	// virtual void _74() = 0;                                                                                        // _74
	// virtual void _78() = 0;                                                                                        // _78
	// virtual void _7C() = 0;                                                                                        // _7C
	// virtual void _80() = 0;                                                                                        // _80
	// virtual void _84() = 0;                                                                                        // _84
	// virtual void _88() = 0;                                                                                        // _88
	// virtual void _8C() = 0;                                                                                        // _8C
	// virtual void _90() = 0;                                                                                        // _90
	// virtual void _94() = 0;                                                                                        // _94
	// virtual void _98() = 0;                                                                                        // _98
	// virtual void _9C() = 0;                                                                                        // _9C

	void setJSG_ID_(IDFunction, JStudio::data::TEOperationData, const void*, unsigned long);
	// void setJSG_ID_(JStage::TActor, void(const void*, void*, unsigned long), JStudio::data::TEOperationData, const void*, unsigned long);
	void setJSG_SRT_(const JStudio::TControl*);
	void getJSG_SRT_(const JStudio::TControl*);

	const JStage::TSystem* m_system; // _124
	JStage::TActor* m_object;        // _128
	u32 _12C;                        // _12C
	u32 _130;                        // _130
	u32 _134;                        // _134
	JStage::TObject* _138;           // _138
	u32 _13C;                        // _13C
	u8 _140;                         // _140
	JStage::TObject* _144;           // _144
	u32 _148;                        // _148

	static const TVVOutputObject saoVVOutput_[2];
	static const TVVOutput_ANIMATION_FRAME_ saoVVOutput_ANIMATION_FRAME_[3];
};

struct TAdaptor_ambientLight : public JStudio::TAdaptor_ambientLight {
	TAdaptor_ambientLight(const JStage::TSystem* system, JStage::TAmbientLight* object);

	virtual ~TAdaptor_ambientLight();                                                                              // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C

	const JStage::TSystem* m_system; // _5C
	JStage::TAmbientLight* m_light;  // _60
};

struct TAdaptor_camera : public JStudio::TAdaptor_camera {
	typedef TVariableValueOutput_object_<TAdaptor_camera, JStage::TCamera> TVVOutput;

	TAdaptor_camera(const JStage::TSystem*, JStage::TCamera*);

	// vtable size is 0x3C, despite all the padding.
	virtual ~TAdaptor_camera();                                                                                    // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, unsigned long);                    // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long);               // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);             // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, unsigned long);           // _2C
	virtual void adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData, const void*, unsigned long);             // _30
	virtual void adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long);        // _34
	virtual void adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);      // _38
	// virtual void _3C() = 0;                                                                                        // _3C
	// virtual void _40() = 0;                                                                                        // _40
	// virtual void _44() = 0;                                                                                        // _44
	// virtual void _48() = 0;                                                                                        // _48
	// virtual void _4C() = 0;                                                                                        // _4C
	// virtual void _50() = 0;                                                                                        // _50
	// virtual void _54() = 0;                                                                                        // _54
	// virtual void _58() = 0;                                                                                        // _58
	// virtual void _5C() = 0;                                                                                        // _5C
	// virtual void _60() = 0;                                                                                        // _60
	// virtual void _64() = 0;                                                                                        // _64
	// virtual void _68() = 0;                                                                                        // _68
	// virtual void _6C() = 0;                                                                                        // _6C
	// virtual void _70() = 0;                                                                                        // _70
	// virtual void _74() = 0;                                                                                        // _74

	void setJSG_position_(const JStudio::TControl*);
	void getJSG_position_(const JStudio::TControl*);
	void setJSG_targetPosition_(const JStudio::TControl*);
	void getJSG_targetPosition_(const JStudio::TControl*);

	const JStage::TSystem* m_system; // _FC
	JStage::TCamera* m_camera;       // _100
	u32 _104;                        // _104
	JStage::TObject* _108;           // _108
	u32 _10C;                        // _10C
	u8 _110;                         // _110
	JStage::TObject* _114;           // _114
	u32 _118;                        // _118
	u8 _11C;                         // _11C

	static const TVVOutput saoVVOutput_[5];
};

struct TAdaptor_fog : public JStudio::TAdaptor_fog {
	typedef TVariableValueOutput_object_<TAdaptor_fog, JStage::TFog> TVVOutput;

	TAdaptor_fog(const JStage::TSystem*, JStage::TFog*);

	// vtable size is 0x20, despite all the padding.
	virtual ~TAdaptor_fog();                                                                                       // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	// virtual void _20() = 0;                                                                                        // _20
	// virtual void _24() = 0;                                                                                        // _24
	// virtual void _28() = 0;                                                                                        // _28
	// virtual void _2C() = 0;                                                                                        // _2C
	// virtual void _30() = 0;                                                                                        // _30
	// virtual void _34() = 0;                                                                                        // _34
	// virtual void _38() = 0;                                                                                        // _38
	// virtual void _3C() = 0;                                                                                        // _3C

	const JStage::TSystem* m_system; // _84
	JStage::TFog* m_object;          // _88

	static const TVVOutput saoVVOutput_[3];
};

struct TAdaptor_light {
	struct TVVOutput_direction_ {
		virtual void operator()(float, JStudio::TAdaptor*) const; // _08
		virtual ~TVVOutput_direction_();                          // _0C (weak)
	};

	TAdaptor_light(const JStage::TSystem*, JStage::TLight*);

	virtual ~TAdaptor_light();                                                                                     // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	virtual void adaptor_do_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);                    // _20
	virtual void adaptor_do_FACULTY(JStudio::data::TEOperationData, const void*, unsigned long);                   // _24
};

bool transform_toGlobalFromLocal(f32 (*)[4], const JStudio::TControl::TTransform_translation_rotation_scaling&, const JStage::TObject*,
                                 u32);
bool transform_toGlobalFromLocal(f32 (*)[4], const JStudio::TControl::TTransform_position&, const JStage::TObject*, u32);
bool transform_toLocalFromGlobal(f32 (*)[4], const JStudio::TControl::TTransform_translation_rotation_scaling&, const JStage::TObject*,
                                 u32);
bool transform_toLocalFromGlobal(f32 (*)[4], const JStudio::TControl::TTransform_position&, const JStage::TObject*, u32);
} // namespace JStudio_JStage

#endif
