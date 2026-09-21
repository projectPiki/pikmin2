#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TObject.h"
#include "JSystem/JStudio/TVariableValue.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JStudio/object.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JGadget/enumerator.h"
#include "types.h"

namespace JStudio {

namespace {
template <typename Adaptor>
struct TOutputVariableValue_BOOL_ : public TVariableValue::TOutput {
	TOutputVariableValue_BOOL_(TAdaptor::AdaptorDoFunction func)
	    : mDoFunc(func)
	{
	}

	virtual void operator()(f32 p1, TAdaptor* adaptor) const // _08
	{
		u32 val = 0;
		if (p1 >= 0.5f) {
			val = 1;
		}

		(adaptor->*mDoFunc)(data::TEOD_Unknown_02, &val, 4); // idek what functions fit this typedef but fine
	}
	virtual ~TOutputVariableValue_BOOL_() { } // _0C

	// _00 = VTBL
	TAdaptor::AdaptorDoFunction mDoFunc; // _04
};

static TOutputVariableValue_BOOL_<TAdaptor_actor>
    soovv_actor_PARENT_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_PARENT_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_actor>
    soovv_actor_RELATION_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_RELATION_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_camera>
    soovv_camera_PARENT_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_camera>
    soovv_camera_TARGET_PARENT_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_light> soovv_light_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_light::adaptor_do_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_particle>
    soovv_particle_PARENT_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_PARENT_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_sound>
    soovv_sound_PARENT_ENABLE_((TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_PARENT_ENABLE);
static TOutputVariableValue_BOOL_<TAdaptor_sound> soovv_sound_LOCATED_((TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_LOCATED);
} // namespace

TVariableValue::TOutput_none_ TVariableValue::soOutput_none_;

/**
 * @note Address: 0x8000D068
 * @note Size: 0x48
 * __dt__Q37JStudio14TVariableValue7TOutputFv
 */
TVariableValue::TOutput::~TOutput()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TVariableValue::update(f64 timeStep, JStudio::TAdaptor* adaptor)
{
	if (_08) {
		_08(this, timeStep);
		(*_10)(mValue, adaptor);
	}
}

/**
 * @note Address: 0x8000D0B0
 * @note Size: 0x14
 */
void TVariableValue::update_immediate_(TVariableValue* p1, f64 p2)
{
	p1->mValue = p1->_0C.val;
	p1->_08    = nullptr;
}

/**
 * @note Address: 0x8000D0C4
 * @note Size: 0x3C
 */
void TVariableValue::update_time_(TVariableValue* p1, f64 p2)
{
	p1->mValue = (f64)p1->_0C.val * ((f64)p1->_04 * p2);
}

/**
 * @note Address: 0x8000D100
 * @note Size: 0x64
 */
void TVariableValue::update_functionValue_(TVariableValue* p1, f64 p2)
{
	p1->mValue = p1->_0C.fv->getValue(p1->_04 * p2);
}

/**
 * @note Address: 0x8000D164
 * @note Size: 0x5C
 * __dt__Q37JStudio14TVariableValue13TOutput_none_Fv
 */
TVariableValue::TOutput_none_::~TOutput_none_()
{
}

/**
 * @note Address: 0x8000D1C0
 * @note Size: 0x4
 */
void TVariableValue::TOutput_none_::operator()(f32, JStudio::TAdaptor*) const
{
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
TAdaptor::~TAdaptor()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000D1C4
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_prepare(JStudio::TObject const*)
{
}

/**
 * @note Address: 0x8000D1C8
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_begin(JStudio::TObject const*)
{
}

/**
 * @note Address: 0x8000D1CC
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_end(JStudio::TObject const*)
{
}

/**
 * @note Address: 0x8000D1D0
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_update(JStudio::TObject const*, u32)
{
}

/**
 * @note Address: 0x8000D1D4
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_data(JStudio::TObject const*, void const*, u32, void const*, u32)
{
}

/**
 * @note Address: 0x8000D1D8
 * @note Size: 0xA0
 */
void TAdaptor::adaptor_setVariableValue(JStudio::TObject* object, u32 value, JStudio::data::TEOperationData operation, void const* p4,
                                        u32 p5)
{
	StaticCapsSetVariableValueFunction func;
	switch (operation) {
	case data::TEOD_Unknown_01:
		func = adaptor_setVariableValue_VOID_;
		break;
	case data::TEOD_Unknown_02:
		func = adaptor_setVariableValue_IMMEDIATE_;
		break;
	case data::TEOD_Unknown_03:
		func = adaptor_setVariableValue_TIME_;
		break;
	case data::TEOD_Unknown_10:
		func = adaptor_setVariableValue_FVR_NAME_;
		break;
	case data::TEOD_Unknown_12:
		func = adaptor_setVariableValue_FVR_INDEX_;
		break;
	default:
		return;
	}
	func(this, object, value, p4, p5);
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
void TAdaptor::adaptor_setVariableValue_n(JStudio::TObject* object, u32 const* values, u32 p3, JStudio::data::TEOperationData operation,
                                          void const* p5, u32 p6)
{
	// UNUSED FUNCTION
	u32 offset;
	const void* data = p5;
	StaticCapsSetVariableValueFunction func;
	switch (operation) {
	case data::TEOD_Unknown_01:
		offset = 0;
		func   = adaptor_setVariableValue_VOID_;
		break;
	case data::TEOD_Unknown_02:
		offset = 4;
		func   = adaptor_setVariableValue_IMMEDIATE_;
		break;
	case data::TEOD_Unknown_03:
		offset = 4;
		func   = adaptor_setVariableValue_TIME_;
		break;
	case data::TEOD_Unknown_12:
		offset = 4;
		func   = adaptor_setVariableValue_FVR_INDEX_;
		break;
	default:
		return;
	}

	JGadget::TEnumerator<const u32*> enumerator(values, &values[p3]);
	while (enumerator) {
		func(this, object, **enumerator, data, offset);
		data = ((u8*)data) + offset;
	}
}

/**
 * @note Address: 0x8000D278
 * @note Size: 0x44
 */
void TAdaptor::adaptor_setVariableValue_immediate(const TSetVariableValue_immediate* setters)
{
	for (u32 index; (index = setters->_00) != 0xFFFFFFFF; setters++) {
		mVariableValues[index].setValueImmediate(setters->_04);
	}
}

/**
 * @note Address: 0x8000D2BC
 * @note Size: 0x70
 */
void TAdaptor::adaptor_setVariableValue_Vec(const u32* indices, const Vec& value)
{
	mVariableValues[indices[0]].setValueImmediate(value.x);
	mVariableValues[indices[1]].setValueImmediate(value.y);
	mVariableValues[indices[2]].setValueImmediate(value.z);
}

/**
 * @note Address: 0x8000D32C
 * @note Size: 0x38
 */
void TAdaptor::adaptor_getVariableValue_Vec(Vec* value, const u32* indices) const
{
	value->x = mVariableValues[indices[0]].mValue;
	value->y = mVariableValues[indices[1]].mValue;
	value->z = mVariableValues[indices[2]].mValue;
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
void TAdaptor::adaptor_updateVariableValue_Vec(u32 const*, Vec const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000D364
 * @note Size: 0xE0
 */
void TAdaptor::adaptor_setVariableValue_GXColor(const u32* indices, const GXColor& color)
{
	for (int i = 0; i < 4; i++) {
		mVariableValues[indices[i]].setValueImmediate(((const u8*)&color)[i]);
	}
}

/**
 * @note Address: 0x8000D444
 * @note Size: 0x14C
 * adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
 */
void TAdaptor::adaptor_getVariableValue_GXColor(GXColor* color, const u32* indices) const
{
	color->r = mVariableValues[indices[0]].getValueU8();
	color->g = mVariableValues[indices[1]].getValueU8();
	color->b = mVariableValues[indices[2]].getValueU8();
	color->a = mVariableValues[indices[3]].getValueU8();
}

/**
 * @note Address: N/A
 * @note Size: 0x238
 */
void TAdaptor::adaptor_updateVariableValue_GXColor(u32 const*, _GXColor const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void TAdaptor::adaptor_updateVariableValue()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void TAdaptor::adaptor_updateVariableValue(JStudio::TObject* object, u32 p2)
{
	TControl* control = object->getControl();
	f64 timestep      = control->getSecondsPerFrame();
	JGadget::TEnumerator<JStudio::TVariableValue*> enumerator(mVariableValues, mVariableValues + mCount);
	while (enumerator) {
		JStudio::TVariableValue* value = *enumerator;
		value->forward(p2);
		value->update(timestep, this);
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000D590
 * @note Size: 0x18
 */
void TAdaptor::adaptor_setVariableValue_VOID_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, u32 idx, const void* value, u32 size)
{
	adaptor->mVariableValues[idx].setValueNone();
}

/**
 * @note Address: 0x8000D5A8
 * @note Size: 0x2C
 */
void TAdaptor::adaptor_setVariableValue_IMMEDIATE_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, u32 idx, const void* value,
                                                   u32 size)
{
	adaptor->mVariableValues[idx].setValueImmediate(*(f32*)value);
}

/**
 * @note Address: 0x8000D5D4
 * @note Size: 0x2C
 */
void TAdaptor::adaptor_setVariableValue_TIME_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, u32 idx, const void* value, u32 size)
{
	adaptor->mVariableValues[idx].setValueTime(*(f32*)value);
}

/**
 * @note Address: 0x8000D600
 * @note Size: 0x70
 */
void TAdaptor::adaptor_setVariableValue_FVR_NAME_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, u32 idx, const void* value,
                                                  u32 size)
{
	TVariableValue* varVal = &adaptor->mVariableValues[idx];
	varVal->setValueFunctionValue(object->getControl()->getFunctionValue(value, size));
}

/**
 * @note Address: 0x8000D670
 * @note Size: 0x6C
 */
void TAdaptor::adaptor_setVariableValue_FVR_INDEX_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, u32 idx, const void* value,
                                                   u32 size)
{
	TVariableValue* varVal = &adaptor->mVariableValues[idx];
	varVal->setValueFunctionValue(object->getControl()->getFunctionValue_index(*(u32*)value));
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
TObject::~TObject()
{
	// UNUSED FUNCTION
	delete mAdaptor;
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
void TObject::forward_value(u32 p1)
{
	TAdaptor* adaptor = mAdaptor;
	if (adaptor) {
		adaptor->adaptor_updateVariableValue(this, p1);
		adaptor->adaptor_do_update(this, p1);
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000D6DC
 * @note Size: 0x3C
 * do_begin__Q27JStudio7TObjectFv
 */
void TObject::do_begin()
{
	if (mAdaptor != nullptr) {
		mAdaptor->adaptor_do_begin(this);
	}
}

/**
 * @note Address: 0x8000D718
 * @note Size: 0x3C
 * do_end__Q27JStudio7TObjectFv
 */
void TObject::do_end()
{
	if (mAdaptor != nullptr) {
		mAdaptor->adaptor_do_end(this);
	}
}

/**
 * @note Address: 0x8000D754
 * @note Size: 0xEC
 * do_wait__Q27JStudio7TObjectFUl
 */
void TObject::do_wait(u32 p1)
{
	forward_value(p1);
}

/**
 * @note Address: 0x8000D840
 * @note Size: 0x5C
 * do_data__Q27JStudio7TObjectFPCvUlPCvUl
 */
void TObject::do_data(void const* p1, u32 p2, void const* p3, u32 p4)
{
	if (mAdaptor != nullptr) {
		mAdaptor->adaptor_do_data(this, p1, p2, p3, p4);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 * __ct__Q27JStudio7TObjectFQ37JStudio4data9TE32BlockPCvUlPQ27JStudio8TAdaptor
 */
TObject::TObject(JStudio::data::TE32Block, void const*, u32, JStudio::TAdaptor*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 * __ct__Q27JStudio7TObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio8TAdaptor
 */
// TObject::TObject(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8000D89C
 * @note Size: 0x5C
 * __dt__Q27JStudio14TAdaptor_actorFv
 */
TAdaptor_actor::~TAdaptor_actor()
{
}

const u32 TAdaptor_actor::sauVariableValue_3_TRANSLATION_XYZ[3] = { 3, 4, 5 };
const u32 TAdaptor_actor::sauVariableValue_3_ROTATION_XYZ[3]    = { 6, 7, 8 };
const u32 TAdaptor_actor::sauVariableValue_3_SCALING_XYZ[3]     = { 9, 10, 11 };

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio13TObject_actorFPCvUlPQ27JStudio14TAdaptor_actor
 */
TObject_actor::TObject_actor(void const* p1, u32 p2, JStudio::TAdaptor_actor* p3)
    : TObject(data::TE32B_ACTOR, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000D8F8
 * @note Size: 0x58
 * __ct__Q27JStudio13TObject_actorFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_actor
 */
TObject_actor::TObject_actor(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_actor* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000D950
 * @note Size: 0x484
 */
void TObject_actor::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor_actor* adaptor = static_cast<TAdaptor_actor*>(getAdaptor());
	if (!adaptor) {
		return;
	}

	u32 value2;                      // r5
	u32 value;                       // r29
	TVariableValue::TOutput* output; // r28
	const u32* values;
#ifdef __MWERKS__
	// this is due to some stripped assert I am almost sure of it
	// but nothing else has worked, including (void*)&v1 and whatnot
	register u32 v1 = p1 >> 5;
	BUMP_VAR(v1);
#else
	u32 v1 = p1 >> 5;
#endif
	data::TEOperationData operation    = (data::TEOperationData)(p1 & 0x1F);
	TAdaptor::AdaptorDoFunction doFunc = nullptr;

	switch (v1) {
	case 0x39:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_SHAPE;
		goto output_type_4;
		return;

	case 0x3A:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_ANIMATION;
		goto output_type_4;
		return;

	case 0x43:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_ANIMATION_MODE;
		goto output_type_4;
		return;

	case 0x4C:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION;
		goto output_type_4;
		return;

	case 0x4E:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION_MODE;
		goto output_type_4;
		return;

	case 0x30:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_PARENT;
		goto output_type_4;
		return;

	case 0x31:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_PARENT_NODE;
		goto output_type_4;
		return;

	case 0x32:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_PARENT_ENABLE;
		output = &soovv_actor_PARENT_ENABLE_;
		value  = 12;
		goto output_type_1;
		return;

	case 0x51:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_PARENT_FUNCTION;
		goto output_type_4;
		return;

	case 0x33:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_RELATION;
		goto output_type_4;
		return;

	case 0x34:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_RELATION_NODE;
		goto output_type_4;
		return;

	case 0x35:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_RELATION_ENABLE;
		output = &soovv_actor_RELATION_ENABLE_;
		value  = 13;
		goto output_type_1;
		return;

	case 0x3B:
		value2 = 0;
		goto output_type_2;
		return;

	case 0x4B:
		value2 = 1;
		goto output_type_2;
		return;

	case 0x9:
		value2 = 3;
		goto output_type_2;
		return;

	case 0xA:
		value2 = 4;
		goto output_type_2;
		return;

	case 0xB:
		value2 = 5;
		goto output_type_2;
		return;

	case 0xD:
		value2 = 6;
		goto output_type_2;
		return;

	case 0xE:
		value2 = 7;
		goto output_type_2;
		return;

	case 0xF:
		value2 = 8;
		goto output_type_2;
		return;

	case 0x11:
		value2 = 9;
		goto output_type_2;
		return;

	case 0x12:
		value2 = 10;
		goto output_type_2;
		return;

	case 0x13:
		value2 = 11;
		goto output_type_2;
		return;

	case 0xC:
		values = TAdaptor_actor::sauVariableValue_3_TRANSLATION_XYZ;
		value2 = 3;
		goto output_type_3;
		return;

	case 0x10:
		values = TAdaptor_actor::sauVariableValue_3_ROTATION_XYZ;
		value2 = 3;
		goto output_type_3;
		return;

	case 0x14:
		values = TAdaptor_actor::sauVariableValue_3_SCALING_XYZ;
		value2 = 3;
		goto output_type_3;
		return;

	default:
		return;
	}

output_type_1: // 0x274
	switch (operation) {
	case data::TEOD_Unknown_10:
	case data::TEOD_Unknown_11:
	case data::TEOD_Unknown_12:
		adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
		adaptor->adaptor_referVariableValue(value).setOutput(output);
		break;
	default:
		(adaptor->*doFunc)(operation, p2, p3);
		break;
	}
	return;

output_type_2: // 0x33C
	adaptor->adaptor_setVariableValue(this, value2, operation, p2, p3);
	return;

output_type_3: // 0x3AC
	adaptor->adaptor_setVariableValue_n(this, values, value2, operation, p2, p3);
	return;

output_type_4: // 0x458
	(adaptor->*doFunc)(operation, p2, p3);
	return;
}

/**
 * @note Address: 0x8000DDD4
 * @note Size: 0x5C
 * __dt__Q27JStudio21TAdaptor_ambientLightFv
 */
TAdaptor_ambientLight::~TAdaptor_ambientLight()
{
}

const u32 TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB[3]  = { 0, 1, 2 };
const u32 TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA[4] = { 0, 1, 2, 3 };

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio20TObject_ambientLightFPCvUlPQ27JStudio21TAdaptor_ambientLight
 */
TObject_ambientLight::TObject_ambientLight(void const* p1, u32 p2, JStudio::TAdaptor_ambientLight* p3)
    : TObject(data::TE32B_AMBIENT_LIGHT, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000DE30
 * @note Size: 0x58
 * __ct__Q27JStudio20TObject_ambientLightFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio21TAdaptor_ambientLight
 */
TObject_ambientLight::TObject_ambientLight(const JStudio::stb::data::TParse_TBlock_object& p1, JStudio::TAdaptor_ambientLight* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000DE88
 * @note Size: 0x1DC
 * do_paragraph__Q27JStudio20TObject_ambientLightFUlPCvUl
 */
void TObject_ambientLight::do_paragraph(u32 p1, void const* p2, u32 p3)
{
	TAdaptor* adaptor = getAdaptor();
	if (adaptor == nullptr) {
		return;
	}
	u32 value;
	const u32* values;
	u32 v1                          = p1 >> 5;
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);
	switch (v1) {
	case 0x1D:
		value = 0;
		break;
	case 0x1E:
		value = 1;
		break;
	case 0x1F:
		value = 2;
		break;
	case 0x20:
		value = 3;
		break;
	case 0x21:
		values = TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB;
		value  = 3;
		goto multi;
		return;
	case 0x22:
		values = TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA;
		value  = 4;
		goto multi;
		return;
	default:
		return;
	}
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;
multi:
	adaptor->adaptor_setVariableValue_n(this, values, value, operation, p2, 0);
}

/**
 * @note Address: 0x8000E064
 * @note Size: 0x5C
 * __dt__Q27JStudio15TAdaptor_cameraFv
 */
TAdaptor_camera::~TAdaptor_camera()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio14TObject_cameraFPCvUlPQ27JStudio15TAdaptor_camera
 */
TObject_camera::TObject_camera(void const* p1, u32 p2, JStudio::TAdaptor_camera* p3)
    : TObject(data::TE32B_CAMERA, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000E0C0
 * @note Size: 0x58
 * __ct__Q27JStudio14TObject_cameraFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio15TAdaptor_camera
 */
TObject_camera::TObject_camera(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_camera* p2)
    : TObject(p1, p2)
{
}

const u32 TAdaptor_camera::sauVariableValue_3_POSITION_XYZ[3]        = { 0, 1, 2 };
const u32 TAdaptor_camera::sauVariableValue_3_TARGET_POSITION_XYZ[3] = { 3, 4, 5 };
const u32 TAdaptor_camera::sauVariableValue_2_DISTANCE_NEAR_FAR[2]   = { 8, 9 };

/**
 * @note Address: 0x8000E118
 * @note Size: 0x3F8
 * do_paragraph__Q27JStudio14TObject_cameraFUlPCvUl
 */
void TObject_camera::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor_camera* adaptor = static_cast<TAdaptor_camera*>(getAdaptor());
	if (!adaptor) {
		return;
	}

#ifdef __MWERKS__
	// this is due to some stripped assert I am almost sure of it
	// but nothing else has worked, including (void*)&v1 and whatnot
	register u32 v1 = p1 >> 5;
	BUMP_VAR(v1);
#else
	u32 v1 = p1 >> 5;
#endif
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	TAdaptor::AdaptorDoFunction doFunc = nullptr;
	u32 value                          = -1;
	const u32* values                  = nullptr;
	TVariableValue::TOutput* output    = nullptr;

	switch (v1) {
	case 0x30:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT;
		goto output_type_4;
		return;

	case 0x31:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT_NODE;
		goto output_type_4;
		return;

	case 0x32:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT_ENABLE;
		output = &soovv_camera_PARENT_ENABLE_;
		value  = 10;
		goto output_type_1;
		return;

	case 0x51:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT_FUNCTION;
		goto output_type_4;
		return;

	case 0x52:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_TARGET_PARENT;
		goto output_type_4;
		return;

	case 0x53:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_TARGET_PARENT_NODE;
		goto output_type_4;
		return;

	case 0x54:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE;
		output = &soovv_camera_TARGET_PARENT_ENABLE_;
		value  = 11;
		goto output_type_1;
		return;

	case 0x15:
		value = 0;
		goto output_type_2;
		return;

	case 0x16:
		value = 1;
		goto output_type_2;
		return;

	case 0x17:
		value = 2;
		goto output_type_2;
		return;

	case 0x19:
		value = 3;
		goto output_type_2;
		return;

	case 0x1A:
		value = 4;
		goto output_type_2;
		return;

	case 0x1B:
		value = 5;
		goto output_type_2;
		return;

	case 0x27:
		value = 6;
		goto output_type_2;
		return;

	case 0x26:
		value = 7;
		goto output_type_2;
		return;

	case 0x28:
		value = 8;
		goto output_type_2;
		return;

	case 0x29:
		value = 9;
		goto output_type_2;
		return;

	case 0x18:
		values = TAdaptor_camera::sauVariableValue_3_POSITION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x1C:
		values = TAdaptor_camera::sauVariableValue_3_TARGET_POSITION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x2A:
		values = TAdaptor_camera::sauVariableValue_2_DISTANCE_NEAR_FAR;
		value  = 2;
		goto output_type_3;
		return;

	default:
		return;
	}

output_type_1: // 0x274
	switch (operation) {
	case data::TEOD_Unknown_10:
	case data::TEOD_Unknown_11:
	case data::TEOD_Unknown_12:
		adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
		adaptor->adaptor_referVariableValue(value).setOutput(output);
		break;
	default:
		(adaptor->*doFunc)(operation, p2, p3);
		break;
	}
	return;

output_type_2: // 0x33C
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;

output_type_3: // 0x3AC
	adaptor->adaptor_setVariableValue_n(this, values, value, operation, p2, p3);
	return;

output_type_4: // 0x458
	(adaptor->*doFunc)(operation, p2, p3);
	return;
}

/**
 * @note Address: 0x8000E510
 * @note Size: 0x5C
 * __dt__Q27JStudio12TAdaptor_fogFv
 */
TAdaptor_fog::~TAdaptor_fog()
{
}

const u32 TAdaptor_fog::sauVariableValue_3_COLOR_RGB[3]       = { 0, 1, 2 };
const u32 TAdaptor_fog::sauVariableValue_4_COLOR_RGBA[4]      = { 0, 1, 2, 3 };
const u32 TAdaptor_fog::sauVariableValue_2_RANGE_BEGIN_END[2] = { 4, 5 };

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio11TObject_fogFPCvUlPQ27JStudio12TAdaptor_fog
 */
TObject_fog::TObject_fog(void const* p1, u32 p2, JStudio::TAdaptor_fog* p3)
    : TObject(data::TE32B_FOG, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000E56C
 * @note Size: 0x58
 * __ct__Q27JStudio11TObject_fogFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio12TAdaptor_fog
 */
TObject_fog::TObject_fog(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_fog* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000E5C4
 * @note Size: 0x1E8
 * do_paragraph__Q27JStudio11TObject_fogFUlPCvUl
 */
void TObject_fog::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor_fog* adaptor = static_cast<TAdaptor_fog*>(getAdaptor());
	if (!adaptor) {
		return;
	}

	u32 v1                          = p1 >> 5;
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	u32 value;
	const u32* values = nullptr;

	switch (v1) {
	case 0x1D:
		value = 0;
		goto output_type_single;
		return;

	case 0x1E:
		value = 1;
		goto output_type_single;
		return;

	case 0x1F:
		value = 2;
		goto output_type_single;
		return;

	case 0x20:
		value = 3;
		goto output_type_single;
		return;

	case 0x2B:
		value = 4;
		goto output_type_single;
		return;

	case 0x2C:
		value = 5;
		goto output_type_single;
		return;

	case 0x21:
		values = TAdaptor_fog::sauVariableValue_3_COLOR_RGB;
		value  = 3;
		goto output_type_multi;
		return;

	case 0x22:
		values = TAdaptor_fog::sauVariableValue_4_COLOR_RGBA;
		value  = 4;
		goto output_type_multi;
		return;

	case 0x2D:
		values = TAdaptor_fog::sauVariableValue_2_RANGE_BEGIN_END;
		value  = 2;
		goto output_type_multi;
		return;

	default:
		return;
	}

output_type_single: // 0x33C
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;

output_type_multi: // 0x3AC
	adaptor->adaptor_setVariableValue_n(this, values, value, operation, p2, p3);
	return;
}

/**
 * @note Address: 0x8000E7AC
 * @note Size: 0x5C
 * __dt__Q27JStudio14TAdaptor_lightFv
 */
TAdaptor_light::~TAdaptor_light()
{
}

const u32 TAdaptor_light::sauVariableValue_3_COLOR_RGB[3]           = { 0, 1, 2 };
const u32 TAdaptor_light::sauVariableValue_4_COLOR_RGBA[4]          = { 0, 1, 2, 3 };
const u32 TAdaptor_light::sauVariableValue_3_POSITION_XYZ[3]        = { 4, 5, 6 };
const u32 TAdaptor_light::sauVariableValue_3_TARGET_POSITION_XYZ[3] = { 7, 8, 9 };
const u32 TAdaptor_light::sauVariableValue_2_DIRECTION_THETA_PHI[2] = { 10, 11 };

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio13TObject_lightFPCvUlPQ27JStudio14TAdaptor_light
 */
TObject_light::TObject_light(void const* p1, u32 p2, JStudio::TAdaptor_light* p3)
    : TObject(data::TE32B_LIGHT, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000E808
 * @note Size: 0x58
 * __ct__Q27JStudio13TObject_lightFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_light
 */
TObject_light::TObject_light(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_light* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000E860
 * @note Size: 0x370
 * do_paragraph__Q27JStudio13TObject_lightFUlPCvUl
 */
void TObject_light::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor* adaptor = getAdaptor();
	if (!adaptor) {
		return;
	}

#ifdef __MWERKS__
	// this is due to some stripped assert I am almost sure of it
	// but nothing else has worked, including (void*)&v1 and whatnot
	register u32 v1 = p1 >> 5;
	BUMP_VAR(v1);
#else
	u32 v1 = p1 >> 5;
#endif
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	TAdaptor::AdaptorDoFunction doFunc = nullptr;
	u32 value                          = -1;
	const u32* values                  = nullptr;
	TVariableValue::TOutput* output    = nullptr;

	switch (v1) {
	case 0x36:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_light::adaptor_do_ENABLE;
		value  = 12;
		output = &soovv_light_ENABLE_;
		goto output_type_1;
		return;

	case 0x37:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_light::adaptor_do_FACULTY;
		goto output_type_4;
		return;

	case 0x1D:
		value = 0;
		goto output_type_2;
		return;

	case 0x1E:
		value = 1;
		goto output_type_2;
		return;

	case 0x1F:
		value = 2;
		goto output_type_2;
		return;

	case 0x20:
		value = 3;
		goto output_type_2;
		return;

	case 0x15:
		value = 4;
		goto output_type_2;
		return;

	case 0x16:
		value = 5;
		goto output_type_2;
		return;

	case 0x17:
		value = 6;
		goto output_type_2;
		return;

	case 0x19:
		value = 7;
		goto output_type_2;
		return;

	case 0x1A:
		value = 8;
		goto output_type_2;
		return;

	case 0x1B:
		value = 9;
		goto output_type_2;
		return;

	case 0x23:
		value = 10;
		goto output_type_2;
		return;

	case 0x24:
		value = 11;
		goto output_type_2;
		return;

	case 0x21:
		values = TAdaptor_light::sauVariableValue_3_COLOR_RGB;
		value  = 3;
		goto output_type_3;
		return;

	case 0x22:
		values = TAdaptor_light::sauVariableValue_4_COLOR_RGBA;
		value  = 4;
		goto output_type_3;
		return;

	case 0x18:
		values = TAdaptor_light::sauVariableValue_3_POSITION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x1C:
		values = TAdaptor_light::sauVariableValue_3_TARGET_POSITION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x25:
		values = TAdaptor_light::sauVariableValue_2_DIRECTION_THETA_PHI;
		value  = 2;
		goto output_type_3;
		return;

	default:
		return;
	}

output_type_1: // 0x274
	switch (operation) {
	case data::TEOD_Unknown_10:
	case data::TEOD_Unknown_11:
	case data::TEOD_Unknown_12:
		adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
		adaptor->adaptor_referVariableValue(value).setOutput(output);
		break;
	default:
		(adaptor->*doFunc)(operation, p2, p3);
		break;
	}
	return;

output_type_2: // 0x33C
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;

output_type_3: // 0x3AC
	adaptor->adaptor_setVariableValue_n(this, values, value, operation, p2, p3);
	return;

output_type_4: // 0x458
	(adaptor->*doFunc)(operation, p2, p3);
	return;
}

/**
 * @note Address: 0x8000EBD0
 * @note Size: 0x5C
 * __dt__Q27JStudio16TAdaptor_messageFv
 */
TAdaptor_message::~TAdaptor_message()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio15TObject_messageFPCvUlPQ27JStudio16TAdaptor_message
 */
TObject_message::TObject_message(void const* p1, u32 p2, JStudio::TAdaptor_message* p3)
    : TObject(data::TE32B_MESSAGE, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000EC2C
 * @note Size: 0x58
 * __ct__Q27JStudio15TObject_messageFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio16TAdaptor_message
 */
TObject_message::TObject_message(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_message* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000EC84
 * @note Size: 0x90
 * do_paragraph__Q27JStudio15TObject_messageFUlPCvUl
 */
void TObject_message::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor* adaptor = getAdaptor();
	if (!adaptor) {
		return;
	}

#ifdef __MWERKS__
	// this is due to some stripped assert I am almost sure of it
	// but nothing else has worked, including (void*)&v1 and whatnot
	register u32 v1 = p1 >> 5;
	BUMP_VAR(v1);
#else
	u32 v1 = p1 >> 5;
#endif
	data::TEOperationData operation    = (data::TEOperationData)(p1 & 0x1F);
	TAdaptor::AdaptorDoFunction doFunc = nullptr;

	switch (v1) {
	case 0x42:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_message::adaptor_do_MESSAGE;
		break;

	default:
		return;
	}

	(adaptor->*doFunc)(operation, p2, p3);
}

/**
 * @note Address: 0x8000ED14
 * @note Size: 0x5C
 * __dt__Q27JStudio17TAdaptor_particleFv
 */
TAdaptor_particle::~TAdaptor_particle()
{
}

const u32 TAdaptor_particle::sauVariableValue_3_TRANSLATION_XYZ[3] = { 0, 1, 2 };
const u32 TAdaptor_particle::sauVariableValue_3_ROTATION_XYZ[3]    = { 3, 4, 5 };
const u32 TAdaptor_particle::sauVariableValue_3_SCALING_XYZ[3]     = { 6, 7, 8 };
const u32 TAdaptor_particle::sauVariableValue_3_COLOR_RGB[3]       = { 9, 10, 11 };
const u32 TAdaptor_particle::sauVariableValue_4_COLOR_RGBA[4]      = { 9, 10, 11, 12 };
const u32 TAdaptor_particle::sauVariableValue_3_COLOR1_RGB[3]      = { 9, 10, 11 };
const u32 TAdaptor_particle::sauVariableValue_4_COLOR1_RGBA[4]     = { 9, 10, 11, 12 };

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio16TObject_particleFPCvUlPQ27JStudio17TAdaptor_particle
 */
TObject_particle::TObject_particle(void const* p1, u32 p2, JStudio::TAdaptor_particle* p3)
    : TObject(data::TE32B_PARTICLE, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000ED70
 * @note Size: 0x58
 * __ct__Q27JStudio16TObject_particleFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio17TAdaptor_particle
 */
TObject_particle::TObject_particle(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_particle* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000EDC8
 * @note Size: 0x458
 * do_paragraph__Q27JStudio16TObject_particleFUlPCvUl
 */
void TObject_particle::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor_particle* adaptor = static_cast<TAdaptor_particle*>(getAdaptor());
	if (!adaptor) {
		return;
	}

#ifdef __MWERKS__
	// this is due to some stripped assert I am almost sure of it
	// but nothing else has worked, including (void*)&v1 and whatnot
	register u32 v1 = p1 >> 5;
	BUMP_VAR(v1);
#else
	u32 v1 = p1 >> 5;
#endif
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	TAdaptor::AdaptorDoFunction doFunc = nullptr;
	u32 value                          = -1;
	const u32* values                  = nullptr;
	TVariableValue::TOutput* output    = nullptr;

	switch (v1) {
	case 0x44:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_PARTICLE;
		goto output_type_4;
		return;

	case 0x4F:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_BEGIN;
		goto output_type_4;
		return;

	case 0x2E:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_BEGIN_FADE_IN;
		goto output_type_4;
		return;

	case 0x50:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_END;
		goto output_type_4;
		return;

	case 0x2F:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_END_FADE_OUT;
		goto output_type_4;
		return;

	case 0x30:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_PARENT;
		goto output_type_4;
		return;

	case 0x31:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_PARENT_NODE;
		goto output_type_4;
		return;

	case 0x32:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_PARENT_ENABLE;
		output = &soovv_particle_PARENT_ENABLE_;
		value  = 17;
		goto output_type_1;
		return;

	case 0x9:
		value = 0;
		goto output_type_2;
		return;

	case 0xA:
		value = 1;
		goto output_type_2;
		return;

	case 0xB:
		value = 2;
		goto output_type_2;
		return;

	case 0xD:
		value = 3;
		goto output_type_2;
		return;

	case 0xE:
		value = 4;
		goto output_type_2;
		return;

	case 0xF:
		value = 5;
		goto output_type_2;
		return;

	case 0x11:
		value = 6;
		goto output_type_2;
		return;

	case 0x12:
		value = 7;
		goto output_type_2;
		return;

	case 0x13:
		value = 8;
		goto output_type_2;
		return;

	case 0x1D:
		value = 9;
		goto output_type_2;
		return;

	case 0x1E:
		value = 10;
		goto output_type_2;
		return;

	case 0x1F:
		value = 11;
		goto output_type_2;
		return;

	case 0x20:
		value = 12;
		goto output_type_2;
		return;

	case 0x45:
		value = 13;
		goto output_type_2;
		return;

	case 0x46:
		value = 14;
		goto output_type_2;
		return;

	case 0x47:
		value = 15;
		goto output_type_2;
		return;

	case 0x48:
		value = 16;
		goto output_type_2;
		return;

	case 0xC:
		values = TAdaptor_particle::sauVariableValue_3_TRANSLATION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x10:
		values = TAdaptor_particle::sauVariableValue_3_ROTATION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x14:
		values = TAdaptor_particle::sauVariableValue_3_SCALING_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	case 0x21:
		values = TAdaptor_particle::sauVariableValue_3_COLOR_RGB;
		value  = 3;
		goto output_type_3;
		return;

	case 0x22:
		values = TAdaptor_particle::sauVariableValue_4_COLOR_RGBA;
		value  = 4;
		goto output_type_3;
		return;

	case 0x49:
		values = TAdaptor_particle::sauVariableValue_3_COLOR1_RGB;
		value  = 3;
		goto output_type_3;
		return;

	case 0x4A:
		values = TAdaptor_particle::sauVariableValue_4_COLOR1_RGBA;
		value  = 4;
		goto output_type_3;
		return;

	default:
		return;
	}

output_type_1: // 0x274
	switch (operation) {
	case data::TEOD_Unknown_10:
	case data::TEOD_Unknown_11:
	case data::TEOD_Unknown_12:
		adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
		adaptor->adaptor_referVariableValue(value).setOutput(output);
		break;
	default:
		(adaptor->*doFunc)(operation, p2, p3);
		break;
	}
	return;

output_type_2: // 0x33C
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;

output_type_3: // 0x3AC
	adaptor->adaptor_setVariableValue_n(this, values, value, operation, p2, p3);
	return;

output_type_4: // 0x458
	(adaptor->*doFunc)(operation, p2, p3);
	return;
}

/**
 * @note Address: 0x8000F220
 * @note Size: 0x5C
 * __dt__Q27JStudio14TAdaptor_soundFv
 */
TAdaptor_sound::~TAdaptor_sound()
{
}

const u32 TAdaptor_sound::sauVariableValue_3_POSITION_XYZ[3] = { 0, 1, 2 };

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * __ct__Q27JStudio13TObject_soundFPCvUlPQ27JStudio14TAdaptor_sound
 */
TObject_sound::TObject_sound(void const* p1, u32 p2, JStudio::TAdaptor_sound* p3)
    : TObject(data::TE32B_SOUND, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8000F27C
 * @note Size: 0x58
 * __ct__Q27JStudio13TObject_soundFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_sound
 */
TObject_sound::TObject_sound(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_sound* p2)
    : TObject(p1, p2)
{
}

/**
 * @note Address: 0x8000F2D4
 * @note Size: 0x3F8
 * do_paragraph__Q27JStudio13TObject_soundFUlPCvUl
 */
void TObject_sound::do_paragraph(u32 p1, const void* p2, u32 p3)
{
	TAdaptor_sound* adaptor = static_cast<TAdaptor_sound*>(getAdaptor());
	if (!adaptor) {
		return;
	}

	typedef void (TAdaptor_sound::*soundParagraphFunc)(JStudio::data::TEOperationData, const void*, u32);

#ifdef __MWERKS__
	// this is due to some stripped assert I am almost sure of it
	// but nothing else has worked, including (void*)&v1 and whatnot
	register u32 v1 = p1 >> 5;
	BUMP_VAR(v1);
#else
	u32 v1 = p1 >> 5;
#endif
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	soundParagraphFunc doFunc       = nullptr;
	u32 value                       = -1;
	const u32* values               = nullptr;
	TVariableValue::TOutput* output = nullptr;

	switch (v1) {
	case 0x3C:
		doFunc = &TAdaptor_sound::adaptor_do_SOUND;
		goto output_type_4;
		return;

	case 0x4F:
		doFunc = &TAdaptor_sound::adaptor_do_BEGIN;
		goto output_type_4;
		return;

	case 0x2E:
		doFunc = &TAdaptor_sound::adaptor_do_BEGIN_FADE_IN;
		goto output_type_4;
		return;

	case 0x50:
		doFunc = &TAdaptor_sound::adaptor_do_END;
		goto output_type_4;
		return;

	case 0x2F:
		doFunc = &TAdaptor_sound::adaptor_do_END_FADE_OUT;
		goto output_type_4;
		return;

	case 0x30:
		doFunc = &TAdaptor_sound::adaptor_do_PARENT;
		goto output_type_4;
		return;

	case 0x31:
		doFunc = &TAdaptor_sound::adaptor_do_PARENT_NODE;
		goto output_type_4;
		return;

	case 0x32:
		doFunc = &TAdaptor_sound::adaptor_do_PARENT_ENABLE;
		output = &soovv_sound_PARENT_ENABLE_;
		value  = 3;
		goto output_type_1;
		return;

	case 0x38:
		doFunc = &TAdaptor_sound::adaptor_do_LOCATED;
		output = &soovv_sound_LOCATED_;
		value  = 4;
		goto output_type_1;
		return;

	case 0x15:
		value = 0;
		goto output_type_2;
		return;

	case 0x16:
		value = 1;
		goto output_type_2;
		return;

	case 0x17:
		value = 2;
		goto output_type_2;
		return;

	case 0x3D:
		value = 5;
		goto output_type_2;
		return;

	case 0x3E:
		value = 6;
		goto output_type_2;
		return;

	case 0x3F:
		value = 7;
		goto output_type_2;
		return;

	case 0x40:
		value = 8;
		goto output_type_2;
		return;

	case 0x41:
		value = 9;
		goto output_type_2;
		return;

	case 0x18:
		values = TAdaptor_sound::sauVariableValue_3_POSITION_XYZ;
		value  = 3;
		goto output_type_3;
		return;

	default:
		return;
	}

output_type_1: // 0x274
	switch (operation) {
	case data::TEOD_Unknown_10:
	case data::TEOD_Unknown_11:
	case data::TEOD_Unknown_12:
		adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
		adaptor->adaptor_referVariableValue(value).setOutput(output);
		break;
	default:
		(adaptor->*doFunc)(operation, p2, p3);
		break;
	}
	return;

output_type_2: // 0x33C
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;

output_type_3: // 0x3AC
	adaptor->adaptor_setVariableValue_n(this, values, value, operation, p2, p3);
	return;

output_type_4: // 0x458
	(adaptor->*doFunc)(operation, p2, p3);
	return;
}
} // namespace JStudio
