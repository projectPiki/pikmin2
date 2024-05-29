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
TVariableValue::TOutput::~TOutput() { }

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
void TVariableValue::update_time_(TVariableValue* p1, f64 p2) { p1->mValue = (f64)p1->_0C.val * ((f64)p1->_04 * p2); }

/**
 * @note Address: 0x8000D100
 * @note Size: 0x64
 */
void TVariableValue::update_functionValue_(TVariableValue* p1, f64 p2) { p1->mValue = p1->_0C.fv->getValue(p1->_04 * p2); }

/**
 * @note Address: 0x8000D164
 * @note Size: 0x5C
 * __dt__Q37JStudio14TVariableValue13TOutput_none_Fv
 */
TVariableValue::TOutput_none_::~TOutput_none_() { }

/**
 * @note Address: 0x8000D1C0
 * @note Size: 0x4
 */
void TVariableValue::TOutput_none_::operator()(f32, JStudio::TAdaptor*) const { }

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
void TAdaptor::adaptor_do_prepare(JStudio::TObject const*) { }

/**
 * @note Address: 0x8000D1C8
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_begin(JStudio::TObject const*) { }

/**
 * @note Address: 0x8000D1CC
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_end(JStudio::TObject const*) { }

/**
 * @note Address: 0x8000D1D0
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_update(JStudio::TObject const*, u32) { }

/**
 * @note Address: 0x8000D1D4
 * @note Size: 0x4
 */
void TAdaptor::adaptor_do_data(JStudio::TObject const*, void const*, u32, void const*, u32) { }

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
	case data::TEOD_Unknown_00:
	case data::TEOD_Unknown_04:
	case data::TEOD_Unknown_05:
	case data::TEOD_Unknown_06:
	case data::TEOD_Unknown_07:
	case data::TEOD_Unknown_08:
	case data::TEOD_Unknown_09:
	case data::TEOD_Unknown_0A:
	case data::TEOD_Unknown_0B:
	case data::TEOD_Unknown_0C:
	case data::TEOD_Unknown_0D:
	case data::TEOD_Unknown_0E:
	case data::TEOD_Unknown_0F:
	case data::TEOD_Unknown_11:
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
	StaticCapsSetVariableValueFunction func;
	u32 offset;
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
	case data::TEOD_Unknown_10:
		return;
	case data::TEOD_Unknown_12:
		offset = 4;
		func   = adaptor_setVariableValue_FVR_INDEX_;
		break;
	case data::TEOD_Unknown_00:
	case data::TEOD_Unknown_04:
	case data::TEOD_Unknown_05:
	case data::TEOD_Unknown_06:
	case data::TEOD_Unknown_07:
	case data::TEOD_Unknown_08:
	case data::TEOD_Unknown_09:
	case data::TEOD_Unknown_0A:
	case data::TEOD_Unknown_0B:
	case data::TEOD_Unknown_0C:
	case data::TEOD_Unknown_0D:
	case data::TEOD_Unknown_0E:
	case data::TEOD_Unknown_0F:
	case data::TEOD_Unknown_11:
	default:
		return;
	}

	JGadget::TEnumerator<const u32*> enumerator(values, &values[p3]);
	while (enumerator) {
		func(this, object, **enumerator, p5, offset);
		p5 = ((u8*)p5) + offset;
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

const u32 TAdaptor_actor::sauVariableValue_3_TRANSLATION_XYZ[3] = { 3, 4, 5 };
const u32 TAdaptor_actor::sauVariableValue_3_ROTATION_XYZ[3]    = { 6, 7, 8 };
const u32 TAdaptor_actor::sauVariableValue_3_SCALING_XYZ[3]     = { 9, 10, 11 };

const u32 TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB[3]  = { 0, 1, 2 };
const u32 TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA[4] = { 0, 1, 2, 3 };

const u32 TAdaptor_camera::sauVariableValue_3_POSITION_XYZ[3]        = { 0, 1, 2 };
const u32 TAdaptor_camera::sauVariableValue_3_TARGET_POSITION_XYZ[3] = { 3, 4, 5 };
const u32 TAdaptor_camera::sauVariableValue_2_DISTANCE_NEAR_FAR[2]   = { 8, 9 };

const u32 TAdaptor_fog::sauVariableValue_3_COLOR_RGB[3]       = { 0, 1, 2 };
const u32 TAdaptor_fog::sauVariableValue_4_COLOR_RGBA[4]      = { 0, 1, 2, 3 };
const u32 TAdaptor_fog::sauVariableValue_2_RANGE_BEGIN_END[2] = { 4, 5 };

const u32 TAdaptor_light::sauVariableValue_3_COLOR_RGB[3]           = { 0, 1, 2 };
const u32 TAdaptor_light::sauVariableValue_4_COLOR_RGBA[4]          = { 0, 1, 2, 3 };
const u32 TAdaptor_light::sauVariableValue_3_POSITION_XYZ[3]        = { 4, 5, 6 };
const u32 TAdaptor_light::sauVariableValue_3_TARGET_POSITION_XYZ[3] = { 7, 8, 9 };
const u32 TAdaptor_light::sauVariableValue_2_DIRECTION_THETA_PHI[2] = { 10, 11 };

const u32 TAdaptor_particle::sauVariableValue_3_TRANSLATION_XYZ[3] = { 0, 1, 2 };
const u32 TAdaptor_particle::sauVariableValue_3_ROTATION_XYZ[3]    = { 3, 4, 5 };
const u32 TAdaptor_particle::sauVariableValue_3_SCALING_XYZ[3]     = { 6, 7, 8 };
const u32 TAdaptor_particle::sauVariableValue_3_COLOR_RGB[3]       = { 9, 10, 11 };
const u32 TAdaptor_particle::sauVariableValue_4_COLOR_RGBA[4]      = { 9, 10, 11, 12 };
const u32 TAdaptor_particle::sauVariableValue_3_COLOR1_RGB[3]      = { 9, 10, 11 };
const u32 TAdaptor_particle::sauVariableValue_4_COLOR1_RGBA[4]     = { 9, 10, 11, 12 };

const u32 TAdaptor_sound::sauVariableValue_3_POSITION_XYZ[3] = { 0, 1, 2 };

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
	TAdaptor* adaptor = getAdaptor();
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	lwz      r31, 0x34(r3)
	cmplwi   r31, 0
	beq      lbl_8000D824
	lwz      r0, 8(r31)
	lwz      r3, 0x14(r26)
	mulli    r0, r0, 0x14
	lwz      r28, 4(r31)
	lfd      f31, 0x58(r3)
	add      r30, r28, r0
	b        lbl_8000D800

lbl_8000D79C:
	lwz      r3, 4(r28)
	mr       r29, r28
	addi     r28, r28, 0x14
	subfic   r0, r3, -1
	cmplw    r0, r27
	bgt      lbl_8000D7C0
	li       r0, -1
	stw      r0, 4(r29)
	b        lbl_8000D7C8

lbl_8000D7C0:
	add      r0, r3, r27
	stw      r0, 4(r29)

lbl_8000D7C8:
	lwz      r12, 8(r29)
	cmplwi   r12, 0
	beq      lbl_8000D800
	fmr      f1, f31
	mr       r3, r29
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r29)
	mr       r4, r31
	lfs      f1, 0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8000D800:
	cmplw    r28, r30
	bne      lbl_8000D79C
	mr       r3, r31
	mr       r4, r26
	lwz      r12, 0(r31)
	mr       r5, r27
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8000D824:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	lmw      r26, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
TAdaptor_actor::~TAdaptor_actor() { }

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
	u32 v1                             = p1 >> 5;
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
		output = &soovv_actor_PARENT_ENABLE_;
		value  = 12;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_PARENT_ENABLE;
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
		output = &soovv_actor_RELATION_ENABLE_;
		value  = 13;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_actor::adaptor_do_RELATION_ENABLE;
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

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r7,
r6 stw      r0, 0x44(r1) mr       r0, r5 addi     r10, r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l stmw     r25,
0x24(r1) mr       r30, r3 lwz      r31, 0x34(r3) lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	cmplwi   r31, 0
	beq      lbl_8000DDC0
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -9
	lwz      r8, 0(r9)
	cmplwi   r6, 0x48
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000DDC0
	lis      r5, lbl_8049E86C@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049E86C@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr
	.global  lbl_8000D9D4

lbl_8000D9D4:
	lwz      r6, 0xac(r3)
	lwz      r5, 0xb0(r3)
	lwz      r3, 0xb4(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000D9F0

lbl_8000D9F0:
	lwz      r6, 0xb8(r3)
	lwz      r5, 0xbc(r3)
	lwz      r3, 0xc0(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA0C

lbl_8000DA0C:
	lwz      r6, 0xc4(r3)
	lwz      r5, 0xc8(r3)
	lwz      r3, 0xcc(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA28

lbl_8000DA28:
	lwz      r6, 0xd0(r3)
	lwz      r5, 0xd4(r3)
	lwz      r3, 0xd8(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA44

lbl_8000DA44:
	lwz      r6, 0xdc(r3)
	lwz      r5, 0xe0(r3)
	lwz      r3, 0xe4(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA60

lbl_8000DA60:
	lwz      r6, 0xe8(r3)
	lwz      r5, 0xec(r3)
	lwz      r3, 0xf0(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA7C

lbl_8000DA7C:
	lwz      r6, 0xf4(r3)
	lwz      r5, 0xf8(r3)
	lwz      r3, 0xfc(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA98

lbl_8000DA98:
	lwz      r8, 0x100(r3)
	lis      r5,
"soovv_actor_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x104(r3) addi     r5, r5,
"soovv_actor_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz r3,
0x108(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 0xc stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000DBC4 .global  lbl_8000DAC4

lbl_8000DAC4:
	lwz      r6, 0x10c(r3)
	lwz      r5, 0x110(r3)
	lwz      r3, 0x114(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DAE0

lbl_8000DAE0:
	lwz      r6, 0x118(r3)
	lwz      r5, 0x11c(r3)
	lwz      r3, 0x120(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DAFC

lbl_8000DAFC:
	lwz      r6, 0x124(r3)
	lwz      r5, 0x128(r3)
	lwz      r3, 0x12c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DB18

lbl_8000DB18:
	lwz      r8, 0x130(r3)
	lis      r5,
"soovv_actor_RELATION_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x134(r3) addi     r5, r5,
"soovv_actor_RELATION_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz
r3, 0x138(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 0xd stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000DBC4 .global  lbl_8000DB44

lbl_8000DB44:
	li       r5, 0
	b        lbl_8000DC8C
	.global  lbl_8000DB4C

lbl_8000DB4C:
	li       r5, 1
	b        lbl_8000DC8C
	.global  lbl_8000DB54

lbl_8000DB54:
	li       r5, 3
	b        lbl_8000DC8C
	.global  lbl_8000DB5C

lbl_8000DB5C:
	li       r5, 4
	b        lbl_8000DC8C
	.global  lbl_8000DB64

lbl_8000DB64:
	li       r5, 5
	b        lbl_8000DC8C
	.global  lbl_8000DB6C

lbl_8000DB6C:
	li       r5, 6
	b        lbl_8000DC8C
	.global  lbl_8000DB74

lbl_8000DB74:
	li       r5, 7
	b        lbl_8000DC8C
	.global  lbl_8000DB7C

lbl_8000DB7C:
	li       r5, 8
	b        lbl_8000DC8C
	.global  lbl_8000DB84

lbl_8000DB84:
	li       r5, 9
	b        lbl_8000DC8C
	.global  lbl_8000DB8C

lbl_8000DB8C:
	li       r5, 0xa
	b        lbl_8000DC8C
	.global  lbl_8000DB94

lbl_8000DB94:
	li       r5, 0xb
	b        lbl_8000DC8C
	.global  lbl_8000DB9C

lbl_8000DB9C:
	addi     r6, r10, 0
	li       r5, 3
	b        lbl_8000DCFC
	.global  lbl_8000DBA8

lbl_8000DBA8:
	addi     r6, r10, 0xc
	li       r5, 3
	b        lbl_8000DCFC
	.global  lbl_8000DBB4

lbl_8000DBB4:
	addi     r6, r10, 0x18
	li       r5, 3
	b        lbl_8000DCFC
	.global  lbl_8000DBC0

lbl_8000DBC0:
	b        lbl_8000DDC0

lbl_8000DBC4:
	cmpwi    r4, 0x13
	bge      lbl_8000DC70
	cmpwi    r4, 0x10
	bge      lbl_8000DBD8
	b        lbl_8000DC70

lbl_8000DBD8:
	cmplwi   r4, 0x12
	bgt      lbl_8000DC48
	lis      r5, lbl_8049E820@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049E820@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000DBF8

lbl_8000DBF8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC04

lbl_8000DC04:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC10

lbl_8000DC10:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC1C

lbl_8000DC1C:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC28

lbl_8000DC28:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000DC30:
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000DC48

lbl_8000DC48:
	mulli    r0, r29, 0x14
	lwz      r3, 4(r31)
	cmplwi   r28, 0
	add      r3, r3, r0
	beq      lbl_8000DC64
	mr       r0, r28
	b        lbl_8000DC68

lbl_8000DC64:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000DC68:
	stw      r0, 0x10(r3)
	b        lbl_8000DDC0

lbl_8000DC70:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000DDC0

lbl_8000DC8C:
	cmplwi   r4, 0x12
	bgt      lbl_8000DDC0
	lis      r6, lbl_8049E7D4@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049E7D4@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000DCAC

lbl_8000DCAC:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCB8

lbl_8000DCB8:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCC4

lbl_8000DCC4:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCD0

lbl_8000DCD0:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCDC

lbl_8000DCDC:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000DCE4:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000DCF8

lbl_8000DCF8:
	b        lbl_8000DDC0

lbl_8000DCFC:
	cmpwi    r4, 3
	mr       r29, r0
	beq      lbl_8000DD48
	bge      lbl_8000DD1C
	cmpwi    r4, 1
	beq      lbl_8000DD28
	bge      lbl_8000DD38
	b        lbl_8000DDC0

lbl_8000DD1C:
	cmpwi    r4, 0x12
	beq      lbl_8000DD58
	b        lbl_8000DDC0

lbl_8000DD28:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r28, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DD64

lbl_8000DD38:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DD64

lbl_8000DD48:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DD64

lbl_8000DD58:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000DD64:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000DD9C

lbl_8000DD74:
	mr       r12, r28
	mr       r3, r31
	mr       r4, r30
	mr       r6, r29
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r29, r29, r27

lbl_8000DD9C:
	cmplw    r26, r25
	bne      lbl_8000DD74
	b        lbl_8000DDC0

lbl_8000DDA8:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000DDC0:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8000DDD4
 * @note Size: 0x5C
 * __dt__Q27JStudio21TAdaptor_ambientLightFv
 */
TAdaptor_ambientLight::~TAdaptor_ambientLight() { }

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
	u32 count;
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
		count  = 3;
		values = TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB;
		goto multi;
		return;
	case 0x22:
		count  = 4;
		values = TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA;
		goto multi;
		return;
	default:
		return;
	}
	adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;
multi:
	adaptor->adaptor_setVariableValue_n(this, values, count, operation, p2, 0);
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  mr        r7, r6
	  stw       r0, 0x34(r1)
	  mr        r0, r5
	  stmw      r25, 0x14(r1)
	  mr        r30, r3
	  lwz       r31, 0x34(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x1C8
	  rlwinm    r3,r4,27,5,31
	  rlwinm    r6,r4,0,27,31
	  cmpwi     r3, 0x20
	  beq-      .loc_0x7C
	  bge-      .loc_0x54
	  cmpwi     r3, 0x1E
	  beq-      .loc_0x6C
	  bge-      .loc_0x74
	  cmpwi     r3, 0x1D
	  bge-      .loc_0x64
	  b         .loc_0x1C8

	.loc_0x54:
	  cmpwi     r3, 0x22
	  beq-      .loc_0x98
	  bge-      .loc_0x1C8
	  b         .loc_0x84

	.loc_0x64:
	  li        r5, 0
	  b         .loc_0xB0

	.loc_0x6C:
	  li        r5, 0x1
	  b         .loc_0xB0

	.loc_0x74:
	  li        r5, 0x2
	  b         .loc_0xB0

	.loc_0x7C:
	  li        r5, 0x3
	  b         .loc_0xB0

	.loc_0x84:
	  lis       r3, 0x8047
	  li        r4, 0x3
	  addi      r3, r3, 0x3374
	  mr        r5, r3
	  b         .loc_0x120

	.loc_0x98:
	  lis       r3, 0x8047
	  li        r4, 0x4
	  addi      r3, r3, 0x3380
	  mr        r5, r3
	  b         .loc_0x120
	  b         .loc_0x1C8

	.loc_0xB0:
	  cmplwi    r6, 0x12
	  bgt-      .loc_0x1C8
	  lis       r4, 0x804A
	  rlwinm    r3,r6,2,0,29
	  subi      r4, r4, 0x1670
	  lwzx      r3, r4, r3
	  mtctr     r3
	  bctr
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A70
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A58
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A2C
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A00
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2990

	.loc_0x108:
	  mr        r3, r31
	  mr        r4, r30
	  mr        r6, r0
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C8

	.loc_0x120:
	  cmpwi     r6, 0x3
	  mr        r28, r0
	  beq-      .loc_0x16C
	  bge-      .loc_0x140
	  cmpwi     r6, 0x1
	  beq-      .loc_0x14C
	  bge-      .loc_0x15C
	  b         .loc_0x1C8

	.loc_0x140:
	  cmpwi     r6, 0x12
	  beq-      .loc_0x17C
	  b         .loc_0x1C8

	.loc_0x14C:
	  lis       r3, 0x8001
	  li        r27, 0
	  subi      r29, r3, 0x2A70
	  b         .loc_0x188

	.loc_0x15C:
	  lis       r3, 0x8001
	  li        r27, 0x4
	  subi      r29, r3, 0x2A58
	  b         .loc_0x188

	.loc_0x16C:
	  lis       r3, 0x8001
	  li        r27, 0x4
	  subi      r29, r3, 0x2A2C
	  b         .loc_0x188

	.loc_0x17C:
	  lis       r3, 0x8001
	  li        r27, 0x4
	  subi      r29, r3, 0x2990

	.loc_0x188:
	  rlwinm    r0,r4,2,0,29
	  mr        r26, r5
	  add       r25, r5, r0
	  b         .loc_0x1C0

	.loc_0x198:
	  mr        r12, r29
	  mr        r3, r31
	  mr        r4, r30
	  mr        r6, r28
	  mr        r7, r27
	  lwz       r5, 0x0(r26)
	  mtctr     r12
	  addi      r26, r26, 0x4
	  bctrl
	  add       r28, r28, r27

	.loc_0x1C0:
	  cmplw     r26, r25
	  bne+      .loc_0x198

	.loc_0x1C8:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/**
 * @note Address: 0x8000E064
 * @note Size: 0x5C
 * __dt__Q27JStudio15TAdaptor_cameraFv
 */
TAdaptor_camera::~TAdaptor_camera() { }

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

	u32 v1                          = p1 >> 5;
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
		output = &soovv_camera_PARENT_ENABLE_;
		value  = 10;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT_ENABLE;
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
		output = &soovv_camera_TARGET_PARENT_ENABLE_;
		value  = 11;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE;
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x44(r1)
	mr       r0, r5
	stmw     r25, 0x24(r1)
	mr       r30, r3
	lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	lwz      r31, 0x34(r30)
	cmplwi   r31, 0
	beq      lbl_8000E4FC
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -21
	lwz      r8, 0(r9)
	cmplwi   r6, 0x3f
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000E4FC
	lis      r5, lbl_8049EAC8@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049EAC8@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr
	.global  lbl_8000E194

lbl_8000E194:
	lwz      r6, 0x344(r3)
	lwz      r5, 0x348(r3)
	lwz      r3, 0x34c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E1B0

lbl_8000E1B0:
	lwz      r6, 0x350(r3)
	lwz      r5, 0x354(r3)
	lwz      r3, 0x358(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E1CC

lbl_8000E1CC:
	lwz      r8, 0x35c(r3)
	lis      r5,
"soovv_camera_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x360(r3) addi     r5, r5,
"soovv_camera_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz
r3, 0x364(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 0xa stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000E300 .global  lbl_8000E1F8

lbl_8000E1F8:
	lwz      r6, 0x368(r3)
	lwz      r5, 0x36c(r3)
	lwz      r3, 0x370(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E214

lbl_8000E214:
	lwz      r6, 0x374(r3)
	lwz      r5, 0x378(r3)
	lwz      r3, 0x37c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E230

lbl_8000E230:
	lwz      r6, 0x380(r3)
	lwz      r5, 0x384(r3)
	lwz      r3, 0x388(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E24C

lbl_8000E24C:
	lwz      r8, 0x38c(r3)
	lis      r5,
"soovv_camera_TARGET_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha
	lwz      r6, 0x390(r3)
	addi     r5, r5,
"soovv_camera_TARGET_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l
	lwz      r3, 0x394(r3)
	mr       r28, r5
	stw      r8, 8(r1)
	li       r29, 0xb
	stw      r6, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E300
	.global  lbl_8000E278

lbl_8000E278:
	li       r5, 0
	b        lbl_8000E3C8
	.global  lbl_8000E280

lbl_8000E280:
	li       r5, 1
	b        lbl_8000E3C8
	.global  lbl_8000E288

lbl_8000E288:
	li       r5, 2
	b        lbl_8000E3C8
	.global  lbl_8000E290

lbl_8000E290:
	li       r5, 3
	b        lbl_8000E3C8
	.global  lbl_8000E298

lbl_8000E298:
	li       r5, 4
	b        lbl_8000E3C8
	.global  lbl_8000E2A0

lbl_8000E2A0:
	li       r5, 5
	b        lbl_8000E3C8
	.global  lbl_8000E2A8

lbl_8000E2A8:
	li       r5, 6
	b        lbl_8000E3C8
	.global  lbl_8000E2B0

lbl_8000E2B0:
	li       r5, 7
	b        lbl_8000E3C8
	.global  lbl_8000E2B8

lbl_8000E2B8:
	li       r5, 8
	b        lbl_8000E3C8
	.global  lbl_8000E2C0

lbl_8000E2C0:
	li       r5, 9
	b        lbl_8000E3C8
	.global  lbl_8000E2C8

lbl_8000E2C8:
	lis      r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@ha
	li       r5, 3
	addi     r3, r3,
sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@l mr       r6, r3
	b        lbl_8000E438
	.global  lbl_8000E2DC

lbl_8000E2DC:
	lis      r3,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera@ha li r5, 3
	addi     r3, r3,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera@l mr r6, r3
	b        lbl_8000E438
	.global  lbl_8000E2F0

lbl_8000E2F0:
	addi     r6, r2,
sauVariableValue_2_DISTANCE_NEAR_FAR__Q27JStudio15TAdaptor_camera@sda21 li r5, 2
	b        lbl_8000E438
	.global  lbl_8000E2FC

lbl_8000E2FC:
	b        lbl_8000E4FC

lbl_8000E300:
	cmpwi    r4, 0x13
	bge      lbl_8000E3AC
	cmpwi    r4, 0x10
	bge      lbl_8000E314
	b        lbl_8000E3AC

lbl_8000E314:
	cmplwi   r4, 0x12
	bgt      lbl_8000E384
	lis      r5, lbl_8049EA7C@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049EA7C@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000E334

lbl_8000E334:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E340

lbl_8000E340:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E34C

lbl_8000E34C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E358

lbl_8000E358:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E364

lbl_8000E364:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E36C:
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000E384

lbl_8000E384:
	mulli    r0, r29, 0x14
	lwz      r3, 4(r31)
	cmplwi   r28, 0
	add      r3, r3, r0
	beq      lbl_8000E3A0
	mr       r0, r28
	b        lbl_8000E3A4

lbl_8000E3A0:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000E3A4:
	stw      r0, 0x10(r3)
	b        lbl_8000E4FC

lbl_8000E3AC:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000E4FC

lbl_8000E3C8:
	cmplwi   r4, 0x12
	bgt      lbl_8000E4FC
	lis      r6, lbl_8049EA30@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049EA30@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000E3E8

lbl_8000E3E8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E3F4

lbl_8000E3F4:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E400

lbl_8000E400:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E40C

lbl_8000E40C:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E418

lbl_8000E418:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E420:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000E434

lbl_8000E434:
	b        lbl_8000E4FC

lbl_8000E438:
	cmpwi    r4, 3
	mr       r29, r0
	beq      lbl_8000E484
	bge      lbl_8000E458
	cmpwi    r4, 1
	beq      lbl_8000E464
	bge      lbl_8000E474
	b        lbl_8000E4FC

lbl_8000E458:
	cmpwi    r4, 0x12
	beq      lbl_8000E494
	b        lbl_8000E4FC

lbl_8000E464:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r28, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E4A0

lbl_8000E474:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E4A0

lbl_8000E484:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E4A0

lbl_8000E494:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E4A0:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000E4D8

lbl_8000E4B0:
	mr       r12, r28
	mr       r3, r31
	mr       r4, r30
	mr       r6, r29
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r29, r29, r27

lbl_8000E4D8:
	cmplw    r26, r25
	bne      lbl_8000E4B0
	b        lbl_8000E4FC

lbl_8000E4E4:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000E4FC:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8000E510
 * @note Size: 0x5C
 * __dt__Q27JStudio12TAdaptor_fogFv
 */
TAdaptor_fog::~TAdaptor_fog() { }

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

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x34(r1)
	mr       r0, r5
	stmw     r25, 0x14(r1)
	mr       r30, r3
	lwz      r31, 0x34(r3)
	cmplwi   r31, 0
	beq      lbl_8000E798
	srwi     r3, r4, 5
	clrlwi   r6, r4, 0x1b
	addi     r4, r3, -29
	cmplwi   r4, 0x10
	bgt      lbl_8000E798
	lis      r3, lbl_8049EC14@ha
	slwi     r4, r4, 2
	addi     r3, r3, lbl_8049EC14@l
	lwzx     r3, r3, r4
	mtctr    r3
	bctr
	.global  lbl_8000E618

lbl_8000E618:
	li       r5, 0
	b        lbl_8000E680
	.global  lbl_8000E620

lbl_8000E620:
	li       r5, 1
	b        lbl_8000E680
	.global  lbl_8000E628

lbl_8000E628:
	li       r5, 2
	b        lbl_8000E680
	.global  lbl_8000E630

lbl_8000E630:
	li       r5, 3
	b        lbl_8000E680
	.global  lbl_8000E638

lbl_8000E638:
	li       r5, 4
	b        lbl_8000E680
	.global  lbl_8000E640

lbl_8000E640:
	li       r5, 5
	b        lbl_8000E680
	.global  lbl_8000E648

lbl_8000E648:
	lis      r3, sauVariableValue_3_COLOR_RGB__Q27JStudio12TAdaptor_fog@ha
	li       r4, 3
	addi     r3, r3, sauVariableValue_3_COLOR_RGB__Q27JStudio12TAdaptor_fog@l
	mr       r5, r3
	b        lbl_8000E6F0
	.global  lbl_8000E65C

lbl_8000E65C:
	lis      r3, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@ha
	li       r4, 4
	addi     r3, r3, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@l
	mr       r5, r3
	b        lbl_8000E6F0
	.global  lbl_8000E670

lbl_8000E670:
	addi     r5, r2,
sauVariableValue_2_RANGE_BEGIN_END__Q27JStudio12TAdaptor_fog@sda21 li       r4,
2 b        lbl_8000E6F0 .global  lbl_8000E67C

lbl_8000E67C:
	b        lbl_8000E798

lbl_8000E680:
	cmplwi   r6, 0x12
	bgt      lbl_8000E798
	lis      r4, lbl_8049EBC8@ha
	slwi     r3, r6, 2
	addi     r4, r4, lbl_8049EBC8@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000E6A0

lbl_8000E6A0:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6AC

lbl_8000E6AC:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6B8

lbl_8000E6B8:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6C4

lbl_8000E6C4:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6D0

lbl_8000E6D0:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E6D8:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000E6EC

lbl_8000E6EC:
	b        lbl_8000E798

lbl_8000E6F0:
	cmpwi    r6, 3
	mr       r28, r0
	beq      lbl_8000E73C
	bge      lbl_8000E710
	cmpwi    r6, 1
	beq      lbl_8000E71C
	bge      lbl_8000E72C
	b        lbl_8000E798

lbl_8000E710:
	cmpwi    r6, 0x12
	beq      lbl_8000E74C
	b        lbl_8000E798

lbl_8000E71C:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r29, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E758

lbl_8000E72C:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E758

lbl_8000E73C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E758

lbl_8000E74C:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E758:
	slwi     r0, r4, 2
	mr       r26, r5
	add      r25, r5, r0
	b        lbl_8000E790

lbl_8000E768:
	mr       r12, r29
	mr       r3, r31
	mr       r4, r30
	mr       r6, r28
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r28, r28, r27

lbl_8000E790:
	cmplw    r26, r25
	bne      lbl_8000E768

lbl_8000E798:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8000E7AC
 * @note Size: 0x5C
 * __dt__Q27JStudio14TAdaptor_lightFv
 */
TAdaptor_light::~TAdaptor_light() { }

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
	TAdaptor_light* adaptor = static_cast<TAdaptor_light*>(getAdaptor());
	if (!adaptor) {
		return;
	}

	u32 v1                          = p1 >> 5;
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	TAdaptor::AdaptorDoFunction doFunc = nullptr;
	u32 value                          = -1;
	const u32* values                  = nullptr;
	TVariableValue::TOutput* output    = nullptr;

	switch (v1) {
	case 0x36:
		output = &soovv_light_ENABLE_;
		value  = 12;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_light::adaptor_do_ENABLE;
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x44(r1)
	mr       r0, r5
	stmw     r25, 0x24(r1)
	mr       r30, r3
	lis      r3,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha addi     r11,
r3, sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l lwz r31,
0x34(r30) cmplwi   r31, 0 beq      lbl_8000EBBC lis      r3, __ptmf_null@ha srwi
r8, r4, 5 addi     r10, r3, __ptmf_null@l clrlwi   r4, r4, 0x1b lwz      r3,
4(r10) addi     r8, r8, -21 lwz      r9, 0(r10) cmplwi   r8, 0x22 stw      r3,
0xc(r1) stw      r9, 8(r1) lwz      r3, 8(r10) stw      r3, 0x10(r1) bgt
lbl_8000EBBC lis      r3, lbl_8049ED08@ha slwi     r8, r8, 2 addi     r3, r3,
lbl_8049ED08@l lwzx     r3, r3, r8 mtctr    r3 bctr .global  lbl_8000E8DC

lbl_8000E8DC:
	lis      r5, lbl_8049EC58@ha
	lis      r3,
"soovv_light_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha addi     r8,
r5, lbl_8049EC58@l lwz      r6, 0(r8) addi     r3, r3,
"soovv_light_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz      r5,
4(r8) mr       r29, r3 lwz      r3, 8(r8) stw      r6, 8(r1) stw      r5,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000E9D0 .global  lbl_8000E90C

lbl_8000E90C:
	lis      r3, lbl_8049EC64@ha
	addi     r8, r3, lbl_8049EC64@l
	lwz      r7, 0(r8)
	lwz      r3, 4(r8)
	lwz      r0, 8(r8)
	stw      r7, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)
	b        lbl_8000EBAC
	.global  lbl_8000E930

lbl_8000E930:
	li       r5, 0
	b        lbl_8000EA90
	.global  lbl_8000E938

lbl_8000E938:
	li       r5, 1
	b        lbl_8000EA90
	.global  lbl_8000E940

lbl_8000E940:
	li       r5, 2
	b        lbl_8000EA90
	.global  lbl_8000E948

lbl_8000E948:
	li       r5, 3
	b        lbl_8000EA90
	.global  lbl_8000E950

lbl_8000E950:
	li       r5, 4
	b        lbl_8000EA90
	.global  lbl_8000E958

lbl_8000E958:
	li       r5, 5
	b        lbl_8000EA90
	.global  lbl_8000E960

lbl_8000E960:
	li       r5, 6
	b        lbl_8000EA90
	.global  lbl_8000E968

lbl_8000E968:
	li       r5, 7
	b        lbl_8000EA90
	.global  lbl_8000E970

lbl_8000E970:
	li       r5, 8
	b        lbl_8000EA90
	.global  lbl_8000E978

lbl_8000E978:
	li       r5, 9
	b        lbl_8000EA90
	.global  lbl_8000E980

lbl_8000E980:
	li       r5, 0xa
	b        lbl_8000EA90
	.global  lbl_8000E988

lbl_8000E988:
	li       r5, 0xb
	b        lbl_8000EA90
	.global  lbl_8000E990

lbl_8000E990:
	addi     r6, r11, 0x74
	li       r5, 3
	b        lbl_8000EB00
	.global  lbl_8000E99C

lbl_8000E99C:
	addi     r6, r11, 0x80
	li       r5, 4
	b        lbl_8000EB00
	.global  lbl_8000E9A8

lbl_8000E9A8:
	addi     r6, r11, 0x90
	li       r5, 3
	b        lbl_8000EB00
	.global  lbl_8000E9B4

lbl_8000E9B4:
	addi     r6, r11, 0x9c
	li       r5, 3
	b        lbl_8000EB00
	.global  lbl_8000E9C0

lbl_8000E9C0:
	addi     r6, r2,
sauVariableValue_2_DIRECTION_THETA_PHI__Q27JStudio14TAdaptor_light@sda21 li r5,
2 b        lbl_8000EB00 .global  lbl_8000E9CC

lbl_8000E9CC:
	b        lbl_8000EBBC

lbl_8000E9D0:
	cmpwi    r4, 0x13
	bge      lbl_8000EA74
	cmpwi    r4, 0x10
	bge      lbl_8000E9E4
	b        lbl_8000EA74

lbl_8000E9E4:
	cmplwi   r4, 0x12
	bgt      lbl_8000EA54
	lis      r5, lbl_8049ECBC@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049ECBC@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000EA04

lbl_8000EA04:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA10

lbl_8000EA10:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA1C

lbl_8000EA1C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA28

lbl_8000EA28:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA34

lbl_8000EA34:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000EA3C:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	li       r5, 0xc
	mtctr    r12
	bctrl
	.global  lbl_8000EA54

lbl_8000EA54:
	cmplwi   r29, 0
	lwz      r3, 4(r31)
	beq      lbl_8000EA68
	mr       r0, r29
	b        lbl_8000EA6C

lbl_8000EA68:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000EA6C:
	stw      r0, 0x100(r3)
	b        lbl_8000EBBC

lbl_8000EA74:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000EBBC

lbl_8000EA90:
	cmplwi   r4, 0x12
	bgt      lbl_8000EBBC
	lis      r6, lbl_8049EC70@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049EC70@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000EAB0:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EABC:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EAC8:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EAD4:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EAE0:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000EAE8:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000EAFC:
	b        lbl_8000EBBC

lbl_8000EB00:
	cmpwi    r4, 3
	mr       r28, r0
	beq      lbl_8000EB4C
	bge      lbl_8000EB20
	cmpwi    r4, 1
	beq      lbl_8000EB2C
	bge      lbl_8000EB3C
	b        lbl_8000EBBC

lbl_8000EB20:
	cmpwi    r4, 0x12
	beq      lbl_8000EB5C
	b        lbl_8000EBBC

lbl_8000EB2C:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r29, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EB68

lbl_8000EB3C:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EB68

lbl_8000EB4C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EB68

lbl_8000EB5C:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000EB68:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000EBA0

lbl_8000EB78:
	mr       r12, r29
	mr       r3, r31
	mr       r4, r30
	mr       r6, r28
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r28, r28, r27

lbl_8000EBA0:
	cmplw    r26, r25
	bne      lbl_8000EB78
	b        lbl_8000EBBC

lbl_8000EBAC:
	mr       r3, r31
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000EBBC:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8000EBD0
 * @note Size: 0x5C
 * __dt__Q27JStudio16TAdaptor_messageFv
 */
TAdaptor_message::~TAdaptor_message() { }

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
	TAdaptor_camera* adaptor = static_cast<TAdaptor_camera*>(getAdaptor());
	if (!adaptor) {
		return;
	}

	u32 v1                             = p1 >> 5;
	data::TEOperationData operation    = (data::TEOperationData)(p1 & 0x1F);
	TAdaptor::AdaptorDoFunction doFunc = nullptr;

	switch (v1) {
	case 0x42:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_camera::adaptor_do_PARENT;
		break;

	default:
		return;
	}

	(adaptor->*doFunc)(operation, p2, p3);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r3, 0x34(r3)
	cmplwi   r3, 0
	beq      lbl_8000ED04
	lis      r7, __ptmf_null@ha
	srwi     r9, r4, 5
	addi     r8, r7, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r0, 4(r8)
	cmpwi    r9, 0x42
	lwz      r7, 0(r8)
	stw      r0, 0xc(r1)
	stw      r7, 8(r1)
	lwz      r0, 8(r8)
	stw      r0, 0x10(r1)
	beq      lbl_8000ECD0
	b        lbl_8000ED04

lbl_8000ECD0:
	lis      r7, lbl_8049ED94@ha
	addi     r9, r7, lbl_8049ED94@l
	lwz      r8, 0(r9)
	lwz      r7, 4(r9)
	lwz      r0, 8(r9)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r0, 0x10(r1)
	b        lbl_8000ECF8
	b        lbl_8000ED04

lbl_8000ECF8:
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000ED04:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8000ED14
 * @note Size: 0x5C
 * __dt__Q27JStudio17TAdaptor_particleFv
 */
TAdaptor_particle::~TAdaptor_particle() { }

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

	u32 v1                          = p1 >> 5;
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
		output = &soovv_particle_PARENT_ENABLE_;
		value  = 17;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_particle::adaptor_do_PARENT_ENABLE;
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r7,
r6 stw      r0, 0x44(r1) mr       r0, r5 addi     r10, r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l stmw     r25,
0x24(r1) mr       r30, r3 lwz      r31, 0x34(r3) lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	cmplwi   r31, 0
	beq      lbl_8000F20C
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -9
	lwz      r8, 0(r9)
	cmplwi   r6, 0x47
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000F20C
	lis      r5, lbl_8049EE98@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049EE98@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr

lbl_8000EE4C:
	lwz      r6, 0x708(r3)
	lwz      r5, 0x70c(r3)
	lwz      r3, 0x710(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EE68:
	lwz      r6, 0x714(r3)
	lwz      r5, 0x718(r3)
	lwz      r3, 0x71c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EE84:
	lwz      r6, 0x720(r3)
	lwz      r5, 0x724(r3)
	lwz      r3, 0x728(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EEA0:
	lwz      r6, 0x72c(r3)
	lwz      r5, 0x730(r3)
	lwz      r3, 0x734(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EEBC:
	lwz      r6, 0x738(r3)
	lwz      r5, 0x73c(r3)
	lwz      r3, 0x740(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EED8:
	lwz      r6, 0x744(r3)
	lwz      r5, 0x748(r3)
	lwz      r3, 0x74c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EEF4:
	lwz      r6, 0x750(r3)
	lwz      r5, 0x754(r3)
	lwz      r3, 0x758(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EF10:
	lwz      r8, 0x75c(r3)
	lis      r5,
"soovv_particle_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x760(r3) addi     r5, r5,
"soovv_particle_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz
r3, 0x764(r3) mr       r29, r5 stw      r8, 8(r1) stw      r6, 0xc(r1) stw r3,
0x10(r1) b        lbl_8000F018

lbl_8000EF38:
	li       r5, 0
	b        lbl_8000F0D8

lbl_8000EF40:
	li       r5, 1
	b        lbl_8000F0D8

lbl_8000EF48:
	li       r5, 2
	b        lbl_8000F0D8

lbl_8000EF50:
	li       r5, 3
	b        lbl_8000F0D8

lbl_8000EF58:
	li       r5, 4
	b        lbl_8000F0D8

lbl_8000EF60:
	li       r5, 5
	b        lbl_8000F0D8

lbl_8000EF68:
	li       r5, 6
	b        lbl_8000F0D8

lbl_8000EF70:
	li       r5, 7
	b        lbl_8000F0D8

lbl_8000EF78:
	li       r5, 8
	b        lbl_8000F0D8

lbl_8000EF80:
	li       r5, 9
	b        lbl_8000F0D8

lbl_8000EF88:
	li       r5, 0xa
	b        lbl_8000F0D8

lbl_8000EF90:
	li       r5, 0xb
	b        lbl_8000F0D8

lbl_8000EF98:
	li       r5, 0xc
	b        lbl_8000F0D8

lbl_8000EFA0:
	li       r5, 0xd
	b        lbl_8000F0D8

lbl_8000EFA8:
	li       r5, 0xe
	b        lbl_8000F0D8

lbl_8000EFB0:
	li       r5, 0xf
	b        lbl_8000F0D8

lbl_8000EFB8:
	li       r5, 0x10
	b        lbl_8000F0D8

lbl_8000EFC0:
	addi     r6, r10, 0xa8
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFCC:
	addi     r6, r10, 0xb4
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFD8:
	addi     r6, r10, 0xc0
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFE4:
	addi     r6, r10, 0xcc
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFF0:
	addi     r6, r10, 0xd8
	li       r5, 4
	b        lbl_8000F148

lbl_8000EFFC:
	addi     r6, r10, 0xe8
	li       r5, 3
	b        lbl_8000F148

lbl_8000F008:
	addi     r6, r10, 0xf4
	li       r5, 4
	b        lbl_8000F148

lbl_8000F014:
	b        lbl_8000F20C

lbl_8000F018:
	cmpwi    r4, 0x13
	bge      lbl_8000F0BC
	cmpwi    r4, 0x10
	bge      lbl_8000F02C
	b        lbl_8000F0BC

lbl_8000F02C:
	cmplwi   r4, 0x12
	bgt      lbl_8000F09C
	lis      r5, lbl_8049EE4C@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049EE4C@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F04C:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F058:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F064:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F070:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F07C:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F084:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	li       r5, 0x11
	mtctr    r12
	bctrl

lbl_8000F09C:
	cmplwi   r29, 0
	lwz      r3, 4(r31)
	beq      lbl_8000F0B0
	mr       r0, r29
	b        lbl_8000F0B4

lbl_8000F0B0:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000F0B4:
	stw      r0, 0x164(r3)
	b        lbl_8000F20C

lbl_8000F0BC:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000F20C

lbl_8000F0D8:
	cmplwi   r4, 0x12
	bgt      lbl_8000F20C
	lis      r6, lbl_8049EE00@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049EE00@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F0F8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F104:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F110:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F11C:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F128:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F130:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000F144:
	b        lbl_8000F20C

lbl_8000F148:
	cmpwi    r4, 3
	mr       r28, r0
	beq      lbl_8000F194
	bge      lbl_8000F168
	cmpwi    r4, 1
	beq      lbl_8000F174
	bge      lbl_8000F184
	b        lbl_8000F20C

lbl_8000F168:
	cmpwi    r4, 0x12
	beq      lbl_8000F1A4
	b        lbl_8000F20C

lbl_8000F174:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r29, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F1B0

lbl_8000F184:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F1B0

lbl_8000F194:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F1B0

lbl_8000F1A4:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F1B0:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000F1E8

lbl_8000F1C0:
	mr       r12, r29
	mr       r3, r31
	mr       r4, r30
	mr       r6, r28
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r28, r28, r27

lbl_8000F1E8:
	cmplw    r26, r25
	bne      lbl_8000F1C0
	b        lbl_8000F20C

lbl_8000F1F4:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000F20C:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8000F220
 * @note Size: 0x5C
 * __dt__Q27JStudio14TAdaptor_soundFv
 */
TAdaptor_sound::~TAdaptor_sound() { }

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

	u32 v1                          = p1 >> 5;
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);

	TAdaptor::AdaptorDoFunction doFunc = nullptr;
	u32 value                          = -1;
	const u32* values                  = nullptr;
	TVariableValue::TOutput* output    = nullptr;

	switch (v1) {
	case 0x3C:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_SOUND;
		goto output_type_4;
		return;

	case 0x4F:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_BEGIN;
		goto output_type_4;
		return;

	case 0x2E:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_BEGIN_FADE_IN;
		goto output_type_4;
		return;

	case 0x50:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_END;
		goto output_type_4;
		return;

	case 0x2F:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_END_FADE_OUT;
		goto output_type_4;
		return;

	case 0x30:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_PARENT;
		goto output_type_4;
		return;

	case 0x31:
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_PARENT_NODE;
		goto output_type_4;
		return;

	case 0x32:
		output = &soovv_sound_PARENT_ENABLE_;
		value  = 3;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_PARENT_ENABLE;
		goto output_type_1;
		return;

	case 0x38:
		output = &soovv_sound_LOCATED_;
		value  = 4;
		doFunc = (TAdaptor::AdaptorDoFunction)&TAdaptor_sound::adaptor_do_LOCATED;
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x44(r1)
	mr       r0, r5
	stmw     r25, 0x24(r1)
	mr       r30, r3
	lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	lwz      r31, 0x34(r30)
	cmplwi   r31, 0
	beq      lbl_8000F6B8
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -21
	lwz      r8, 0(r9)
	cmplwi   r6, 0x3b
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000F6B8
	lis      r5, lbl_8049F0BC@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049F0BC@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr

lbl_8000F350:
	lwz      r6, 0x920(r3)
	lwz      r5, 0x924(r3)
	lwz      r3, 0x928(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F36C:
	lwz      r6, 0x92c(r3)
	lwz      r5, 0x930(r3)
	lwz      r3, 0x934(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F388:
	lwz      r6, 0x938(r3)
	lwz      r5, 0x93c(r3)
	lwz      r3, 0x940(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3A4:
	lwz      r6, 0x944(r3)
	lwz      r5, 0x948(r3)
	lwz      r3, 0x94c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3C0:
	lwz      r6, 0x950(r3)
	lwz      r5, 0x954(r3)
	lwz      r3, 0x958(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3DC:
	lwz      r6, 0x95c(r3)
	lwz      r5, 0x960(r3)
	lwz      r3, 0x964(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3F8:
	lwz      r6, 0x968(r3)
	lwz      r5, 0x96c(r3)
	lwz      r3, 0x970(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F414:
	lwz      r8, 0x974(r3)
	lis      r5,
"soovv_sound_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x978(r3) addi     r5, r5,
"soovv_sound_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz r3,
0x97c(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 3 stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000F4C0

lbl_8000F440:
	lwz      r8, 0x980(r3)
	lis      r5,
"soovv_sound_LOCATED___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz      r6,
0x984(r3) addi     r5, r5,
"soovv_sound_LOCATED___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz      r3,
0x988(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 4 stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000F4C0

lbl_8000F46C:
	li       r5, 0
	b        lbl_8000F588

lbl_8000F474:
	li       r5, 1
	b        lbl_8000F588

lbl_8000F47C:
	li       r5, 2
	b        lbl_8000F588

lbl_8000F484:
	li       r5, 5
	b        lbl_8000F588

lbl_8000F48C:
	li       r5, 6
	b        lbl_8000F588

lbl_8000F494:
	li       r5, 7
	b        lbl_8000F588

lbl_8000F49C:
	li       r5, 8
	b        lbl_8000F588

lbl_8000F4A4:
	li       r5, 9
	b        lbl_8000F588

lbl_8000F4AC:
	lis      r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound@ha
	addi     r3, r3,
sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound@l mr       r5, r3 b
lbl_8000F5F8

lbl_8000F4BC:
	b        lbl_8000F6B8

lbl_8000F4C0:
	cmpwi    r4, 0x13
	bge      lbl_8000F56C
	cmpwi    r4, 0x10
	bge      lbl_8000F4D4
	b        lbl_8000F56C

lbl_8000F4D4:
	cmplwi   r4, 0x12
	bgt      lbl_8000F544
	lis      r5, lbl_8049F070@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049F070@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F4F4:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F500:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F50C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F518:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F524:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F52C:
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000F544:
	mulli    r0, r29, 0x14
	lwz      r3, 4(r31)
	cmplwi   r28, 0
	add      r3, r3, r0
	beq      lbl_8000F560
	mr       r0, r28
	b        lbl_8000F564

lbl_8000F560:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000F564:
	stw      r0, 0x10(r3)
	b        lbl_8000F6B8

lbl_8000F56C:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000F6B8

lbl_8000F588:
	cmplwi   r4, 0x12
	bgt      lbl_8000F6B8
	lis      r6, lbl_8049F024@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049F024@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F5A8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5B4:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5C0:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5CC:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5D8:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F5E0:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000F5F4:
	b        lbl_8000F6B8

lbl_8000F5F8:
	cmpwi    r4, 3
	mr       r29, r0
	beq      lbl_8000F644
	bge      lbl_8000F618
	cmpwi    r4, 1
	beq      lbl_8000F624
	bge      lbl_8000F634
	b        lbl_8000F6B8

lbl_8000F618:
	cmpwi    r4, 0x12
	beq      lbl_8000F654
	b        lbl_8000F6B8

lbl_8000F624:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r28, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F660

lbl_8000F634:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F660

lbl_8000F644:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F660

lbl_8000F654:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F660:
	mr       r26, r5
	addi     r25, r5, 0xc
	b        lbl_8000F694

lbl_8000F66C:
	mr       r12, r28
	mr       r3, r31
	mr       r4, r30
	mr       r6, r29
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r29, r29, r27

lbl_8000F694:
	cmplw    r26, r25
	bne      lbl_8000F66C
	b        lbl_8000F6B8

lbl_8000F6A0:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000F6B8:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace JStudio
