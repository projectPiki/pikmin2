#ifndef _JSYSTEM_JSTUDIO_JSTAGE_H
#define _JSYSTEM_JSTUDIO_JSTAGE_H

#include "JSystem/JStage/TActor.h"
#include "JSystem/JStage/TCamera.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/TCreateObject.h"
#include "JSystem/JStudio/TObject.h"
#include "JSystem/JStudio/TVariableValue.h"

namespace JStudio_JStage {
struct TVariableValue;
struct TCreateObject : JStudio::TCreateObject {
	TCreateObject(JStage::TSystem* sys) { mSystem = sys; }

	virtual ~TCreateObject();                                                                                // _08
	virtual bool create(JStudio::TObject** newObject, const JStudio::stb::data::TParse_TBlock_object& data); // _0C

	JStage::TSystem* mSystem;
};

template <typename Adaptor, typename Object>
struct TVariableValueOutput_object_ : public JStudio::TVariableValue::TOutput {
	typedef void (Object::*Setter)(f32);
	typedef f32 (Object::*Getter)() const;

	TVariableValueOutput_object_(int valueIndex, Setter setter, Getter getter)
	    : TOutput()
	    , mValueIndex(valueIndex)
	    , mSetter(setter)
	    , mGetter(getter)
	{
	}

	virtual void operator()(f32 value, JStudio::TAdaptor* adaptor) const // _08 (weak)
	{
		(static_cast<Object*>(static_cast<Adaptor*>(adaptor)->mObject)->*mSetter)(value);
	}
	virtual ~TVariableValueOutput_object_() { } // _0C (weak)

	int mValueIndex; // _04
	Setter mSetter;  // _08
	Getter mGetter;  // _14
};

struct TAdaptor_object_ {
	static void adaptor_data_(JStage::TObject*, const void*, u32, const void*, u32);
	static JStage::TObject* adaptor_findJSGObject_(const JStage::TSystem*, const char*);
	static u32 adaptor_findJSGObjectNode_(const JStage::TObject*, const char*);
	static void adaptor_ENABLE_(JStage::TObject*, JStudio::data::TEOperationData, const void*, u32);
};

struct TAdaptor_actor : public JStudio::TAdaptor_actor {
	typedef void (JStage::TActor::*IDFunction)(u32);
	typedef TVariableValueOutput_object_<TAdaptor_actor, JStage::TActor> TVVOutputObject;

	struct TVVOutput_ANIMATION_FRAME_ : public JStudio::TVariableValue::TOutput {
		typedef void (JStage::TActor::*Setter)(f32);
		typedef f32 (JStage::TActor::*Getter)() const;
		typedef f32 (JStage::TActor::*MaxGetter)() const;

		TVVOutput_ANIMATION_FRAME_(int valueIndex, u32 val, Setter setter, Getter getter, MaxGetter maxGetter)
		    : TOutput()
		    , mValueIndex(valueIndex)
		    , _08(val)
		    , mSetter(setter)
		    , mGetter(getter)
		    , mMaxGetter(maxGetter)
		{
		}

		virtual void operator()(f32, JStudio::TAdaptor*) const; // _08
		virtual ~TVVOutput_ANIMATION_FRAME_() { }               // _0C (weak)

		// _00 = VTBL
		int mValueIndex;      // _04
		u32 _08;              // _08
		Setter mSetter;       // _0C
		Getter mGetter;       // _18
		MaxGetter mMaxGetter; // _24
	};

	TAdaptor_actor(const JStage::TSystem*, JStage::TActor*);

	// vtable size is 0x50, despite all the padding.
	virtual ~TAdaptor_actor();                                                                        // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                         // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                           // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                             // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                                     // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, u32, const void*, u32);        // _1C
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32);                 // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32);            // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32);          // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, u32);        // _2C
	virtual void adaptor_do_RELATION(JStudio::data::TEOperationData, const void*, u32);               // _30
	virtual void adaptor_do_RELATION_NODE(JStudio::data::TEOperationData, const void*, u32);          // _34
	virtual void adaptor_do_RELATION_ENABLE(JStudio::data::TEOperationData, const void*, u32);        // _38
	virtual void adaptor_do_SHAPE(JStudio::data::TEOperationData, const void*, u32);                  // _3C
	virtual void adaptor_do_ANIMATION(JStudio::data::TEOperationData, const void*, u32);              // _40
	virtual void adaptor_do_ANIMATION_MODE(JStudio::data::TEOperationData, const void*, u32);         // _44
	virtual void adaptor_do_TEXTURE_ANIMATION(JStudio::data::TEOperationData, const void*, u32);      // _48
	virtual void adaptor_do_TEXTURE_ANIMATION_MODE(JStudio::data::TEOperationData, const void*, u32); // _4C

	void setJSG_ID_(IDFunction, JStudio::data::TEOperationData, const void*, u32);
	// void setJSG_ID_(JStage::TActor, void(const void*, void*, u32), JStudio::data::TEOperationData, const void*, u32);
	void setJSG_SRT_(const JStudio::TControl*);
	void getJSG_SRT_(const JStudio::TControl*);

	inline JStage::TActor* get_pJSG() { return mObject; }

	static const TVVOutputObject saoVVOutput_[2];
	static const TVVOutput_ANIMATION_FRAME_ saoVVOutput_ANIMATION_FRAME_[3];

	// _00 = VTBL
	const JStage::TSystem* mSystem; // _124
	JStage::TActor* mObject;        // _128
	u32 _12C;                       // _12C
	u32 _130;                       // _130
	u32 _134;                       // _134
	JStage::TObject* _138;          // _138
	u32 _13C;                       // _13C
	u8 _140;                        // _140
	JStage::TObject* _144;          // _144
	u32 _148;                       // _148
};

struct TAdaptor_ambientLight : public JStudio::TAdaptor_ambientLight {
	TAdaptor_ambientLight(const JStage::TSystem* system, JStage::TAmbientLight* object);

	virtual ~TAdaptor_ambientLight();                                                          // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                  // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                    // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                      // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                              // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, u32, const void*, u32); // _1C

	const JStage::TSystem* mSystem; // _5C
	JStage::TAmbientLight* mLight;  // _60
};

struct TAdaptor_camera : public JStudio::TAdaptor_camera {
	typedef TVariableValueOutput_object_<TAdaptor_camera, JStage::TCamera> TVVOutput;

	TAdaptor_camera(const JStage::TSystem*, JStage::TCamera*);

	// vtable size is 0x3C, despite all the padding.
	virtual ~TAdaptor_camera();                                                                     // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                       // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                         // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                           // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                                   // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, u32, const void*, u32);      // _1C
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32);               // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32);          // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32);        // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, u32);      // _2C
	virtual void adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData, const void*, u32);        // _30
	virtual void adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32);   // _34
	virtual void adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32); // _38

	void setJSG_position_(const JStudio::TControl*);
	void getJSG_position_(const JStudio::TControl*);
	void setJSG_targetPosition_(const JStudio::TControl*);
	void getJSG_targetPosition_(const JStudio::TControl*);

	inline JStage::TCamera* get_pJSG() { return mObject; }

	const JStage::TSystem* mSystem; // _FC
	JStage::TCamera* mObject;       // _100
	u32 _104;                       // _104
	JStage::TObject* _108;          // _108
	u32 _10C;                       // _10C
	u8 _110;                        // _110
	JStage::TObject* _114;          // _114
	u32 _118;                       // _118
	u8 _11C;                        // _11C

	static const TVVOutput saoVVOutput_[5];
};

struct TAdaptor_fog : public JStudio::TAdaptor_fog {
	typedef TVariableValueOutput_object_<TAdaptor_fog, JStage::TFog> TVVOutput;

	TAdaptor_fog(const JStage::TSystem*, JStage::TFog*);

	// vtable size is 0x20, despite all the padding.
	virtual ~TAdaptor_fog();                                                                   // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                  // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                    // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                      // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                              // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, u32, const void*, u32); // _1C

	const JStage::TSystem* mSystem; // _84
	JStage::TFog* mObject;          // _88

	static const TVVOutput saoVVOutput_[3];
};

struct TAdaptor_light : public JStudio::TAdaptor_light {
	struct TVVOutput_direction_ : public JStudio::TVariableValue::TOutput {
		TVVOutput_direction_(int a1, int a2)
		{
			mValueIndex = a1;
			_08         = a2;
		}

		virtual void operator()(f32, JStudio::TAdaptor*) const; // _08
		virtual ~TVVOutput_direction_() { }                     // _0C (weak)

		int mValueIndex; // _04
		int _08;         // _08
	};

	TAdaptor_light(const JStage::TSystem*, JStage::TLight*);

	virtual ~TAdaptor_light();                                                                 // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                  // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                    // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                      // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                              // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, u32, const void*, u32); // _1C
	virtual void adaptor_do_ENABLE(JStudio::data::TEOperationData, const void*, u32);          // _20
	virtual void adaptor_do_FACULTY(JStudio::data::TEOperationData, const void*, u32);         // _24

	static TVVOutput_direction_ saoVVOutput_direction_[6];

	inline JStage::TLight* get_pJSG_() { return mObject; }

	// _00      = VTBL
	// _00-_110 = JStudio::TAdaptor_light
	const JStage::TSystem* mSystem; // _110
	JStage::TLight* mObject;        // _114
	int _118;                       // _118
};

bool transform_toGlobalFromLocal(Mtx, const JStudio::TControl::TTransform_translation_rotation_scaling&, const JStage::TObject*, u32);
bool transform_toGlobalFromLocal(Mtx, const JStudio::TControl::TTransform_position&, const JStage::TObject*, u32);
bool transform_toLocalFromGlobal(Mtx, const JStudio::TControl::TTransform_translation_rotation_scaling&, const JStage::TObject*, u32);
bool transform_toLocalFromGlobal(Mtx, const JStudio::TControl::TTransform_position&, const JStage::TObject*, u32);
} // namespace JStudio_JStage

#endif
