#include "JSystem/JStudio/functionvalue.h"
#include "float.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JGadget/list.h"
#include "JSystem/JGadget/search.h"
#include "JSystem/JGadget/enumerator.h"
#include "fdlibm.h"
#include "stl/functional.h"
#include "stl/algorithm.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"
#include "math.h"
#include "types.h"

namespace JGadget {
template <typename Iterator, typename Value>
// TODO: this
Iterator findUpperBound_binary_current(Iterator, Iterator, Iterator, const Value&);
}; // namespace JGadget

namespace JStudio {

namespace {
const ExtrapolateParameter gapfnExtrapolateParameter_[4] = {
	functionvalue::extrapolateParameter_raw,
	functionvalue::extrapolateParameter_repeat,
	functionvalue::extrapolateParameter_turn,
	functionvalue::extrapolateParameter_clamp,
};
} // namespace

/**
 * @note Address: 0x80008AEC
 * @note Size: 0x48
 */
ExtrapolateParameter TFunctionValue::toFunction_outside(int idx)
{
	ExtrapolateParameter fallback = nullptr;
	ExtrapolateParameter result   = JGadget::toValueFromIndex<ExtrapolateParameter>(idx, gapfnExtrapolateParameter_, 4, fallback);

	if (result == nullptr) { // needs to be an explicit check not !result to generate the right code when inlined smh
		return gapfnExtrapolateParameter_[0];
	}

	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
TFunctionValue::TFunctionValue() { }

/**
 * @note Address: 0x80008B34
 * @note Size: 0x48
 */
TFunctionValue::~TFunctionValue() { }

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void TFunctionValueAttribute_refer::refer_initialize() { clear(); }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
f64 functionvalue::interpolateValue_hermite(f64 c0, f64 c1, f64 x0, f64 c2, f64 x2, f64 c3, f64 x3)
{
	// not correct (yet)
	f64 a;
	f64 b;
	f64 c;
	f64 d;

	a           = c0 - c1;
	b           = a * (1.0 / (x2 - c1));      // (a - b) * 1.0 / (c - d)
	c           = b - 1.0;                    // 1.0
	d           = (3.0 + -2.0 * b) * (b * b); // 3.0 - 2.0 * b
	f64 cab     = (c * a * b);
	f64 coeffx3 = cab * x3;
	f64 cca     = (c * c * a);
	f64 coeffc2 = cca * c2;
	return ((1.0 - d) * x0 + (d * c3)) + coeffc2 + coeffx3;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
f64 functionvalue::interpolateValue_BSpline_uniform(f64 f1, f64 f2, f64 f3, f64 f4, f64 f5)
{
	// not correct (yet)
	f64 f6   = (1.0 - f1);
	f64 temp = f6;
	temp     = (f6 * f6) * temp;

	f64 f0 = f1 * f1;
	f64 f8 = f0 * f1;

	f64 temp2 = (0.16666666666666666) * ((f1 + f0) - f8);
	temp2 += 0.5;
	f64 temp3 = temp2 * f4;

	f64 temp4 = (((0.16666666666666666) * f8 - f0) + (2.0 / 3.0));
	f64 temp5 = temp4 * f3;

	return temp5 + (temp * f2 + f8 * f5) * 0.5 + temp3;
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
f64 functionvalue::interpolateValue_BSpline_uniform_first1(f64, f64, f64, f64, f64)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
f64 functionvalue::interpolateValue_BSpline_uniform_first2(f64, f64, f64, f64, f64)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
f64 functionvalue::interpolateValue_BSpline_uniform_last1(f64, f64, f64, f64, f64)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
f64 functionvalue::interpolateValue_BSpline_uniform_last2(f64, f64, f64, f64, f64)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
f64 functionvalue::interpolateValue_BSpline_nonuniform(f64, const f64*, const f64*)
{
	// UNUSED/INLINED
}

/**
 * @note Address: 0x80008B7C
 * @note Size: 0x60
 */
f64 functionvalue::extrapolateParameter_turn(f64 value, f64 max)
{
	f64 peak    = 2.0 * max;
	f64 bounded = extrapolateParameter_repeat(value, peak);
	if (bounded >= max) {
		bounded = peak - bounded;
	}
	return bounded;
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void TFunctionValueAttribute_range::range_initialize()
{
	mStart = NAN;
	mEnd   = mStart;
	mWidth = mStart;

	range_setProgress(TFunctionValue::PROG_Init);
	range_setAdjust(TFunctionValue::ADJ_Init);
	range_setOutside(TFunctionValue::OUT_Init);
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void TFunctionValueAttribute_range::range_prepare()
{
	TFunctionValue::TEProgress progress = range_getProgress();

	switch (progress) {
	default:
	case 0:
		_20 = 0.0;
		_28 = 1.0;
		break;
	case 1:
		_20 = 0.0;
		_28 = -1.0;
		break;
	case 2:
		_20 = mStart;
		_28 = -1.0;
		break;
	case 3:
		_20 = mEnd;
		_28 = -1.0;
		break;
	case 4:
		_20 = 0.5 * (mStart + mEnd);
		_28 = -1.0;
		break;
	}
}

/**
 * @note Address: 0x80008BDC
 * @note Size: 0x14
 */
void TFunctionValueAttribute_range::range_set(f64 start, f64 end)
{
	mStart = start;
	mEnd   = end;
	mWidth = end - start;
}

/**
 * @note Address: 0x80008BDC
 * @note Size: 0x14
 */
f64 TFunctionValueAttribute_range::range_getParameter(f64 arg1, f64 arg2, f64 arg3) const
{
	f64 progress                    = range_getParameter_progress(arg1);
	TFunctionValue::TEAdjust adjust = range_getAdjust();

	f64 result;

	switch (adjust) {
	default:
	case 0:
		result = range_getParameter_outside(progress);
		break;
	case 1:
		result = range_getParameter_outside(progress + mStart);
		break;
	case 2:
		result = range_getParameter_outside(progress + mEnd);
		break;
	case 3:
		result = range_getParameter_outside(progress + 0.5 * (mStart + mEnd));
		break;
	case 4:
		f64 temp = range_getParameter_outside(progress);
		result   = arg2 + ((temp - mStart) * (arg3 - arg2)) / mWidth;
		break;
	}
	return result;
}
/**
 * @note Address: N/A
 * @note Size: 0x44
 */
TFunctionValueAttribute_range::TFunctionValueAttribute_range()
    : mStart(NAN)
    , mEnd(mStart)
    , mWidth(mStart)
    , mProgress(TFunctionValue::PROG_Init)
    , mAdjust(TFunctionValue::ADJ_Init)
    , _20(mStart)
    , _28(mStart)
    , mStartIndex(TFunctionValue::OUT_Init)
    , mEndIndex(TFunctionValue::OUT_Init)
{
}

/**
 * @note Address: 0x80008BF0
 * @note Size: 0x64
 */
TFunctionValue_composite::TFunctionValue_composite()
    : mFunction(nullptr)
    , mData((void*)nullptr)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q27JStudio14TFunctionValue@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q27JStudio14TFunctionValue@l
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 4
	lbz      r0, lbl_80514D88@sda21(r13)
	stb      r0, 8(r1)
	bl "__ct__Q27JGadget20TVector_pointer_voidFRCQ27JGadget14TAllocator<Pv>" lis
	r3, __vt__Q27JStudio24TFunctionValue_composite@ha li       r0, 0 addi r4,
	r3, __vt__Q27JStudio24TFunctionValue_composite@l mr       r3, r31 stw r4,
	0(r31) stw      r0, 0x18(r31) stw      r0, 0x20(r31) lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80008C54
 * @note Size: 0x8
 */
int TFunctionValue_composite::getType() const { return TYPE_Composite; }

/**
 * @note Address: 0x80008C5C
 * @note Size: 0x20
 */
TFunctionValueAttributeSet TFunctionValue_composite::getAttributeSet() { return TFunctionValueAttributeSet(this, nullptr, nullptr); }

/**
 * @note Address: 0x80008C7C
 * @note Size: 0x4C
 */
void TFunctionValue_composite::initialize()
{
	refer_initialize();
	mFunction = nullptr;
	mData     = TData((void*)nullptr);
}

/**
 * @note Address: 0x80008CC8
 * @note Size: 0x4
 */
void TFunctionValue_composite::prepare() { }

/**
 * @note Address: 0x80008CCC
 * @note Size: 0x34
 */
f64 TFunctionValue_composite::getValue(f64 p1)
{
	const TFunctionValueAttribute_refer* container = refer_getContainer();
	return mFunction(p1, container, data_getData());
}

/**
 * @note Address: 0x80008D00
 * @note Size: 0x6C
 */
f64 TFunctionValue_composite::composite_raw(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1,
                                            const JStudio::TFunctionValue_composite::TData& p2, f64 p3)
{
	u32 index = p2.getAsWord();
	u32 size  = ((JGadget::TVector_pointer<JStudio::TFunctionValue*>&)p1).size();

	if (index >= size) {
		return 0.0;
	}

	TFunctionValue** iter = (TFunctionValue**)p1.begin();
	// std::advance_pointer(local_18, index);
	iter += index;
	TFunctionValue* fval = *iter;
	return fval->getValue(p3);
}

/**
 * @note Address: 0x80008D6C
 * @note Size: 0x16C
 */
f64 TFunctionValue_composite::composite_index(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1,
                                              const JStudio::TFunctionValue_composite::TData& p2, f64 p3)
{
	s32 size = p1.size();
	if (size <= 1) {
		return 0.0;
	}
	TFunctionValue** iter = (TFunctionValue**)p1.begin();
	TFunctionValue* first = *iter;

	f64 dVar4 = first->getValue(p3);
	s32 index = floor(dVar4);
	u32 uVar2 = p2.getAsWord();
	switch (uVar2) {
	case 0:
	case 3:
	default:
		if (index < 0) {
			index = 0;
		} else if (index >= size - 1) {
			index = size - 2;
		}
		break;
	case 1:
		div_t dt = div(index, size - 1);
		index    = dt.rem;
		if (index < 0) {
			index = size + index;
			index--;
		}
		break;
	case 2:
		if (size - 1 == 1) {
			index = 0;
		} else {
			u32 uVar3 = (u32)(size - 2) * 2;
			div_t dt2 = div(index, uVar3);
			index     = dt2.rem;
			if (index < 0) {
				index += uVar3;
			}
			if (index >= size - 1) {
				index = uVar3 - index;
			}
		}
		break;
	}

	// std::advance_pointer(local_148, index + 1);
	iter += index + 1;
	first = *iter;
	return first->getValue(p3);
}

/**
 * @note Address: 0x80008ED8
 * @note Size: 0x68
 */
f64 TFunctionValue_composite::composite_parameter(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1, const TData& data, f64 p3)
{
	f64 value = p3 - data.getAsDouble();
	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> container(p1);
	while (container) {
		TFunctionValue* const* fvPtr = *container;
		TFunctionValue* funcVal      = *fvPtr;
		value                        = funcVal->getValue(value);
	}
	return value;
}

/**
 * @note Address: 0x80008F40
 * @note Size: 0x84
 */
f64 TFunctionValue_composite::composite_add(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1, const TData& data, f64 p3)
{
	f64 value = data.getAsDouble();
	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> container(p1);
	while (container) {
		TFunctionValue* const* fvPtr = *container;
		TFunctionValue* funcVal      = *fvPtr;
		value += funcVal->getValue(p3);
	}
	return value;
}

/**
 * @note Address: 0x80008FC4
 * @note Size: 0xE8
 */
f64 TFunctionValue_composite::composite_subtract(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1, const TData& data, f64 p3)
{
	u32 size = p1.size();
	if (size == 0) {
		return 0.0;
	}

	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> container(p1);
	TFunctionValue* const* start = *container;
	TFunctionValue* front        = *start;
	f64 value                    = front->getValue(p3);
	while (container) {
		TFunctionValue* const* fvPtr = *container;
		TFunctionValue* funcVal      = *fvPtr;
		value -= funcVal->getValue(p3);
	}

	value -= data.getAsDouble();
	return value;
}

/**
 * @note Address: 0x800090AC
 * @note Size: 0x84
 */
f64 TFunctionValue_composite::composite_multiply(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1, const TData& data, f64 p3)
{
	f64 value = data.getAsDouble();
	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> container(p1);
	while (container) {
		TFunctionValue* const* fvPtr = *container;
		TFunctionValue* funcVal      = *fvPtr;
		value *= funcVal->getValue(p3);
	}
	return value;
}

/**
 * @note Address: 0x80009130
 * @note Size: 0xE8
 */
f64 TFunctionValue_composite::composite_divide(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& p1, const TData& data, f64 p3)
{
	u32 size = p1.size();
	if (size == 0) {
		return 0.0;
	}

	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> container(p1);
	TFunctionValue* const* start = *container;
	TFunctionValue* front        = *start;
	f64 value                    = front->getValue(p3);
	while (container) {
		TFunctionValue* const* fvPtr = *container;
		TFunctionValue* funcVal      = *fvPtr;
		value /= funcVal->getValue(p3);
	}

	value /= data.getAsDouble();
	return value;
}

/**
 * @note Address: 0x80009218
 * @note Size: 0x28
 */
TFunctionValue_constant::TFunctionValue_constant()
    : mValue(NAN)
{
}

/**
 * @note Address: 0x80009240
 * @note Size: 0x8
 */
int TFunctionValue_constant::getType() const { return TYPE_Constant; }

/**
 * @note Address: 0x80009248
 * @note Size: 0x14
 */
TFunctionValueAttributeSet TFunctionValue_constant::getAttributeSet() { return TFunctionValueAttributeSet(nullptr, nullptr, nullptr); }

/**
 * @note Address: 0x8000925C
 * @note Size: 0x10
 */
void TFunctionValue_constant::initialize() { mValue = NAN; }

/**
 * @note Address: 0x8000926C
 * @note Size: 0x4
 */
void TFunctionValue_constant::prepare() { }

/**
 * @note Address: 0x80009270
 * @note Size: 0x8
 */
f64 TFunctionValue_constant::getValue(f64) { return mValue; }

/**
 * @note Address: 0x80009278
 * @note Size: 0x74
 */
TFunctionValue_transition::TFunctionValue_transition()
    : _48(NAN)
    , _50(_48)
{
}

/**
 * @note Address: 0x800092EC
 * @note Size: 0x8
 */
int TFunctionValue_transition::getType() const { return TYPE_Transition; }

/**
 * @note Address: 0x800092F4
 * @note Size: 0x30
 */
TFunctionValueAttributeSet TFunctionValue_transition::getAttributeSet() { return TFunctionValueAttributeSet(nullptr, this, this); }

/**
 * @note Address: 0x80009324
 * @note Size: 0x48
 */
void TFunctionValue_transition::initialize()
{
	range_initialize();
	interpolate_initialize();
	_48 = NAN;
	_50 = _48;
}

/**
 * @note Address: 0x8000936C
 * @note Size: 0xA8
 */
void TFunctionValue_transition::prepare()
{
	range_prepare();
	interpolate_prepare();
}

/**
 * @note Address: 0x80009414
 * @note Size: 0x250
 */
f64 TFunctionValue_transition::getValue(f64 p1)
{
	f64 progress = range_getParameter_progress(p1);
	f64 dVar3    = range_getParameter_outside(progress);
	switch (range_getAdjust()) {
	default:
		if (dVar3 < range_getBegin()) {
			return _48;
		}
		return _50;
	case TFunctionValue::ADJ_Unk2:
		if (dVar3 < range_getEnd()) {
			return _48;
		}
		return _50;
	case TFunctionValue::ADJ_Unk3:
	ADJ_UNK3_label:
		if (dVar3 < 0.5 * (range_getBegin() + range_getEnd())) {
			return _48;
		}
		return _50;
	case TFunctionValue::ADJ_Unk4:
		if (dVar3 < range_getBegin()) {
			return _48;
		}
		if (dVar3 >= range_getEnd()) {
			return _50;
		}
		switch (interpolate_get()) {
		case 0:
			goto ADJ_UNK3_label;
		case 1:
		case 3:
			return _48 + ((dVar3 - range_getBegin()) * data_getDifference()) / range_getDifference();
		case 2:
			break;
			return functionvalue::interpolateValue_hermite(dVar3, range_getBegin(), _48, 0.0, range_getEnd(), _50, 0.0);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfd      f0, lbl_805163A0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfd      f4, 0x28(r3)
	lfd      f3, 0x30(r3)
	fsub     f2, f1, f4
	lfd      f1, 8(r3)
	fmadd    f2, f3, f2, f4
	fsub     f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80009498
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0xc(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009474 addi     r3, r1, 0xc

lbl_80009474:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009488
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009488:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_800094F0

lbl_80009498:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_800094F0
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 8(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_800094D0 addi     r3, r1, 8

lbl_800094D0:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_800094E4
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_800094E4:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_800094F0:
	lbz      r0, 0x21(r31)
	lfd      f3, 8(r31)
	extsb    r0, r0
	cmpwi    r0, 3
	fadd     f1, f1, f3
	beq      lbl_80009558
	bge      lbl_80009518
	cmpwi    r0, 2
	bge      lbl_8000953C
	b        lbl_80009524

lbl_80009518:
	cmpwi    r0, 5
	bge      lbl_80009524
	b        lbl_80009580

lbl_80009524:
	fcmpo    cr0, f1, f3
	bge      lbl_80009534
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009534:
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_8000953C:
	lfd      f0, 0x10(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80009550
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009550:
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_80009558:
	lfd      f0, 0x10(r31)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f0, f3, f0
	fmul     f0, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80009578
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009578:
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_80009580:
	fcmpo    cr0, f1, f3
	bge      lbl_80009590
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009590:
	lfd      f0, 0x10(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_800095A8
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_800095A8:
	lwz      r0, 0x40(r31)
	cmpwi    r0, 2
	beq      lbl_800095F4
	bge      lbl_800095C8
	cmpwi    r0, 0
	beq      lbl_80009558
	bge      lbl_800095D0
	b        lbl_80009558

lbl_800095C8:
	cmpwi    r0, 4
	bge      lbl_80009558

lbl_800095D0:
	lfd      f4, 0x48(r31)
	fsub     f2, f1, f3
	lfd      f1, 0x50(r31)
	lfd      f0, 0x18(r31)
	fsub     f1, f1, f4
	fmul     f1, f2, f1
	fdiv     f0, f1, f0
	fadd     f1, f4, f0
	b        lbl_80009650

lbl_800095F4:
	fsub     f0, f0, f3
	lfd      f6, lbl_805163A8@sda21(r2)
	fsub     f8, f1, f3
	lfd      f3, lbl_805163B8@sda21(r2)
	lfd      f2, lbl_805163B0@sda21(r2)
	fdiv     f5, f6, f0
	lfd      f0, 0x50(r31)
	lfd      f1, 0x48(r31)
	lfd      f4, lbl_805163A0@sda21(r2)
	fmul     f7, f8, f5
	fmadd    f3, f3, f7, f2
	fmul     f2, f7, f7
	fsub     f5, f7, f6
	fmul     f2, f3, f2
	fmul     f3, f5, f5
	fmul     f0, f2, f0
	fsub     f2, f6, f2
	fmul     f5, f5, f8
	fmul     f3, f8, f3
	fmadd    f0, f2, f1, f0
	fmul     f1, f7, f5
	fmadd    f0, f3, f4, f0
	fmadd    f1, f1, f4, f0

lbl_80009650:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80009664
 * @note Size: 0x78
 */
TFunctionValue_list::TFunctionValue_list()
    : _44(nullptr)
    , mData(0)
    , _50(NAN)
    , mUpdateFunction(nullptr)
{
}

/**
 * @note Address: 0x800096DC
 * @note Size: 0x8
 */
int TFunctionValue_list::getType() const { return TYPE_List; }

/**
 * @note Address: 0x800096E4
 * @note Size: 0x30
 */
TFunctionValueAttributeSet TFunctionValue_list::getAttributeSet() { return TFunctionValueAttributeSet(nullptr, this, this); }

/**
 * @note Address: 0x80009714
 * @note Size: 0x4C
 */
void TFunctionValue_list::initialize()
{
	range_initialize();
	interpolate_initialize();
	_44             = nullptr;
	mData           = 0;
	_50             = NAN;
	mUpdateFunction = nullptr;
}

/**
 * @note Address: 0x80009760
 * @note Size: 0x128
 */
void TFunctionValue_list::prepare()
{
	range_prepare();
	interpolate_prepare();

	switch (interpolate_get()) {
	default:
	case TFunctionValue::INTERP_None:
		mUpdateFunction = update_INTERPOLATE_NONE_;
		break;
	case TFunctionValue::INTERP_Linear:
		mUpdateFunction = update_INTERPOLATE_LINEAR_;
		break;
	case TFunctionValue::INTERP_Plateau:
		mUpdateFunction = update_INTERPOLATE_PLATEAU_;
		break;
	case TFunctionValue::INTERP_BSpline:
		mUpdateFunction = update_INTERPOLATE_BSPLINE_dataMore3_;
		if (mData == 2) {
			mUpdateFunction = update_INTERPOLATE_LINEAR_;
		}
		break;
	}
}

/**
 * @note Address: 0x80009888
 * @note Size: 0x530
 */
f64 TFunctionValue_list::getValue(f64 p1)
{
	f64 dVar9                      = range_getParameter_progress(p1);
	u32 iVar7                      = mData - 1;
	TFunctionValue::TEAdjust iVar5 = range_getAdjust();
	f64 dVar12                     = iVar7;
	TIndexData_ indexData;
	f64 parOutside;
	switch (iVar5) {
	case 0:
	default:
		parOutside    = range_getParameter_outside(dVar9);
		indexData._00 = parOutside / _50;
		break;
	case 1:
		parOutside    = range_getParameter_outside(dVar9 + range_getBegin());
		indexData._00 = parOutside / _50;
		break;
	case 2:
		parOutside    = range_getParameter_outside(dVar9 + range_getEnd());
		indexData._00 = parOutside / _50;
		break;
	case 3:
		parOutside    = range_getParameter_outside(dVar9 + 0.5 * (range_getBegin() + range_getEnd()));
		indexData._00 = parOutside / _50;
		break;
	case 4:
		parOutside    = range_getParameter_outside(dVar9);
		indexData._00 = (dVar12 * (parOutside - range_getBegin())) / range_getDifference();
		break;
	}

	if (indexData._00 < 0.0) {
		return _44[0];
	}
	if (indexData._00 >= dVar12) {
		return _44[iVar7];
	}
	indexData._08 = floor(indexData._00);
	indexData._10 = indexData._08;

	return mUpdateFunction(*this, indexData);
}

/**
 * @note Address: 0x80009DB8
 * @note Size: 0x14
 */
f64 TFunctionValue_list::update_INTERPOLATE_NONE_(const TFunctionValue_list& list, const TIndexData_& data) { return list._44[data._10]; }

/**
 * @note Address: 0x80009DCC
 * @note Size: 0x30
 */
f64 TFunctionValue_list::update_INTERPOLATE_LINEAR_(const TFunctionValue_list& list, const TIndexData_& data)
{
	return functionvalue::interpolateValue_linear_1(data._00, data._08, list._44[data._10], list._44[data._10 + 1]);
}

/**
 * @note Address: 0x80009DFC
 * @note Size: 0x7C
 */
f64 TFunctionValue_list::update_INTERPOLATE_PLATEAU_(const TFunctionValue_list& list, const TIndexData_& data)
{
	return functionvalue::interpolateValue_plateau(data._00, data._08, list._44[data._10], 1.0 + data._08, list._44[data._10 + 1]);
	/*
	.loc_0x0:
	  lfd       f4, 0x8(r4)
	  lfd       f6, -0x7FB8(r2)
	  lfd       f1, 0x0(r4)
	  fadd      f0, f6, f4
	  lwz       r0, 0x10(r4)
	  fsub      f8, f1, f4
	  lfd       f3, -0x7FA8(r2)
	  lfd       f2, -0x7FB0(r2)
	  rlwinm    r0,r0,2,0,29
	  fsub      f0, f0, f4
	  lwz       r4, 0x44(r3)
	  lfd       f4, -0x7FC0(r2)
	  add       r3, r4, r0
	  lfsx      f1, r4, r0
	  fdiv      f5, f6, f0
	  lfs       f0, 0x4(r3)
	  fmul      f7, f8, f5
	  fmadd     f3, f3, f7, f2
	  fmul      f2, f7, f7
	  fsub      f5, f7, f6
	  fmul      f2, f3, f2
	  fmul      f3, f5, f5
	  fmul      f5, f5, f8
	  fmul      f0, f2, f0
	  fsub      f2, f6, f2
	  fmul      f3, f8, f3
	  fmadd     f0, f2, f1, f0
	  fmul      f1, f7, f5
	  fmadd     f0, f3, f4, f0
	  fmadd     f1, f1, f4, f0
	  blr
	*/
}

/**
 * @note Address: 0x80009E78
 * @note Size: 0xB4
 */
f64 TFunctionValue_list::update_INTERPOLATE_BSPLINE_dataMore3_(const TFunctionValue_list& list, const TIndexData_& data)
{
	f64 dVar11 = list._44[data._10];
	f64 dVar10 = list._44[data._10 + 1];
	f64 dVar9;
	f64 dVar8;
	if (data._10 == 0) {
		dVar9 = 2.0 * dVar11 - dVar10;
		dVar8 = list._44[data._10 + 2];
	} else {
		if (data._10 == list.mData - 2) {
			dVar9 = list._44[data._10 - 1];
			dVar8 = 2.0 * dVar10 - dVar11;
		} else {
			dVar9 = list._44[data._10 - 1];
			dVar8 = list._44[data._10 + 2];
		}
	}
	return functionvalue::interpolateValue_BSpline_uniform(data._00 - data._08, dVar9, dVar11, dVar10, dVar8);
	/*
	.loc_0x0:
	  lwz       r6, 0x10(r4)
	  lwz       r7, 0x44(r3)
	  rlwinm    r0,r6,2,0,29
	  cmplwi    r6, 0
	  add       r5, r7, r0
	  lfsx      f8, r7, r0
	  lfs       f9, 0x4(r5)
	  bne-      .loc_0x30
	  lfd       f0, -0x7F88(r2)
	  lfs       f11, 0x8(r5)
	  fmsub     f10, f0, f8, f9
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r3, 0x48(r3)
	  subi      r0, r3, 0x2
	  cmplw     r6, r0
	  bne-      .loc_0x50
	  lfd       f0, -0x7F88(r2)
	  lfs       f10, -0x4(r5)
	  fmsub     f11, f0, f9, f8
	  b         .loc_0x58

	.loc_0x50:
	  lfs       f10, -0x4(r5)
	  lfs       f11, 0x8(r5)

	.loc_0x58:
	  lfd       f2, 0x0(r4)
	  lfd       f1, 0x8(r4)
	  lfd       f0, -0x7FB8(r2)
	  fsub      f12, f2, f1
	  lfd       f6, -0x7F98(r2)
	  lfd       f4, -0x7FA0(r2)
	  lfd       f3, -0x7F90(r2)
	  fmul      f5, f12, f12
	  fsub      f2, f0, f12
	  fmul      f7, f5, f12
	  fmul      f1, f2, f2
	  fmul      f0, f7, f11
	  fmul      f1, f1, f2
	  fmsub     f2, f6, f7, f5
	  fmadd     f0, f1, f10, f0
	  fadd      f5, f12, f5
	  fadd      f1, f3, f2
	  fmul      f0, f4, f0
	  fsub      f2, f5, f7
	  fmadd     f0, f1, f8, f0
	  fmadd     f1, f6, f2, f4
	  fmadd     f1, f1, f9, f0
	  blr
	*/
}

/**
 * @note Address: 0x80009F2C
 * @note Size: 0x84
 */
TFunctionValue_list_parameter::TFunctionValue_list_parameter()
    : mFloatData(nullptr)
    , _48(0)
    , mData1(nullptr)
    , mData2(mData1)
    , mData3(mData1)
    , mUpdateFunction(nullptr)
{
}

/**
 * @note Address: 0x80009FB0
 * @note Size: 0x8
 */
int TFunctionValue_list_parameter::getType() const { return TYPE_List_Parameter; }

/**
 * @note Address: 0x80009FB8
 * @note Size: 0x30
 */
TFunctionValueAttributeSet TFunctionValue_list_parameter::getAttributeSet() { return TFunctionValueAttributeSet(nullptr, this, this); }

/**
 * @note Address: 0x80009FE8
 * @note Size: 0x30
 */
void TFunctionValue_list_parameter::data_set(const f32* p1, u32 p2)
{
	mFloatData = p1;
	_48        = p2;

	mData1.set(mFloatData);
	mData2.set(&mFloatData[_48 * 2]);
	mData3 = mData1;
}

/**
 * @note Address: 0x8000A018
 * @note Size: 0x58
 */
void TFunctionValue_list_parameter::initialize()
{
	range_initialize();
	interpolate_initialize();

	mFloatData = nullptr;
	_48        = 0;

	TIterator_data_ iter(nullptr);
	mData1          = iter;
	mData2          = mData1;
	mData3          = mData1;
	mUpdateFunction = nullptr;
}

/**
 * @note Address: 0x8000A070
 * @note Size: 0x128
 */
void TFunctionValue_list_parameter::prepare()
{
	range_prepare();
	interpolate_prepare();

	switch (interpolate_get()) {
	default:
	case TFunctionValue::INTERP_None:
		mUpdateFunction = update_INTERPOLATE_NONE_;
		break;
	case TFunctionValue::INTERP_Linear:
		mUpdateFunction = update_INTERPOLATE_LINEAR_;
		break;
	case TFunctionValue::INTERP_Plateau:
		mUpdateFunction = update_INTERPOLATE_PLATEAU_;
		break;
	case TFunctionValue::INTERP_BSpline:
		mUpdateFunction = update_INTERPOLATE_BSPLINE_dataMore3_;
		if (_48 == 2) {
			mUpdateFunction = update_INTERPOLATE_LINEAR_;
		}
		break;
	}
}

/**
 * @note Address: 0x8000A198
 * @note Size: 0x538
 */
f64 TFunctionValue_list_parameter::getValue(f64 p1)
{
	p1 = range_getParameter(p1, data_getValue_front(), data_getValue_back());

	mData3 = JGadget::findUpperBound_binary_current(mData1, mData2, mData3, p1);
	if (mData3 == mData1) {
		return mData3.get()[1];
	}
	if (mData3 == mData2) {
		--mData3;
		return mData3.get()[1];
	}

	const f32* pf         = mData3.get();
	const int suData_size = 1;
	return mUpdateFunction(*this, p1);
}

/**
 * @note Address: 0x8000A958
 * @note Size: 0xC
 */
f64 TFunctionValue_list_parameter::update_INTERPOLATE_NONE_(const TFunctionValue_list_parameter& list, f64 p2)
{
	return list.mData3.get()[-1];
}

/**
 * @note Address: 0x8000A964
 * @note Size: 0x30
 */
f64 TFunctionValue_list_parameter::update_INTERPOLATE_LINEAR_(const TFunctionValue_list_parameter& list, f64 p2)
{
	const f32* data = list.mData3.get();
	return functionvalue::interpolateValue_linear(p2, data[-2], data[-1], data[0], data[1]);
}

/**
 * @note Address: 0x8000A994
 * @note Size: 0x6C
 */
f64 TFunctionValue_list_parameter::update_INTERPOLATE_PLATEAU_(const TFunctionValue_list_parameter& list, f64 p2)
{
	const f32* data = list.mData3.get();
	return functionvalue::interpolateValue_plateau(p2, data[-2], data[-1], data[0], data[1]);
	/*
	.loc_0x0:
	  lwz       r3, 0x54(r3)
	  lfd       f6, -0x7FB8(r2)
	  lfs       f2, -0x8(r3)
	  lfs       f0, 0x0(r3)
	  fsub      f8, f1, f2
	  lfd       f3, -0x7FA8(r2)
	  fsub      f4, f0, f2
	  lfd       f2, -0x7FB0(r2)
	  lfs       f0, 0x4(r3)
	  lfs       f1, -0x4(r3)
	  fdiv      f5, f6, f4
	  lfd       f4, -0x7FC0(r2)
	  fmul      f7, f8, f5
	  fmadd     f3, f3, f7, f2
	  fmul      f2, f7, f7
	  fsub      f5, f7, f6
	  fmul      f2, f3, f2
	  fmul      f3, f5, f5
	  fmul      f0, f2, f0
	  fsub      f2, f6, f2
	  fmul      f5, f5, f8
	  fmul      f3, f8, f3
	  fmadd     f0, f2, f1, f0
	  fmul      f1, f7, f5
	  fmadd     f0, f3, f4, f0
	  fmadd     f1, f1, f4, f0
	  blr
	*/
}

/**
 * @note Address: 0x8000AA00
 * @note Size: 0x260
 */
f64 TFunctionValue_list_parameter::update_INTERPOLATE_BSPLINE_dataMore3_(const TFunctionValue_list_parameter& list, f64 p2)
{
	const f32* pfVar2 = list.mData3.get();
	f64 local_68[4];
	f64 local_48[6];
	local_68[1] = pfVar2[-1];
	local_68[2] = pfVar2[1];
	local_48[2] = pfVar2[-2];
	local_48[3] = pfVar2[0];
	s32 iVar3   = ((int)list.mData2.get() - (int)pfVar2) / 4;
	s32 iVar5   = ((int)pfVar2 - (int)list.mData1.get()) / 4;
	switch (iVar5) {
	case 2:
		local_68[0] = 2.0 * local_68[1] - local_68[2];
		local_68[3] = pfVar2[3];
		local_48[4] = pfVar2[2];
		local_48[1] = 2.0 * local_48[2] - local_48[3];
		local_48[0] = 2.0 * local_48[2] - local_48[4];
		switch (iVar3) {
		case 2:
		case 4:
			local_48[5] = 2.0 * local_48[4] - local_48[3];
			break;
		default:
			local_48[5] = pfVar2[4];
			break;
		}
		break;
	case 4:
		local_68[0] = pfVar2[-3];
		local_48[1] = pfVar2[-4];
		local_48[0] = 2.0 * local_48[1] - local_48[2];
		switch (iVar3) {
		case 2:
			local_68[3] = 2.0 * local_68[2] - local_68[1];
			local_48[4] = 2.0 * local_48[3] - local_48[2];
			local_48[5] = 2.0 * local_48[3] - local_48[1];
			break;
		case 4:
			local_68[3] = pfVar2[3];
			local_48[4] = pfVar2[2];
			local_48[5] = 2.0 * local_48[4] - local_48[3];
			break;
		default:
			local_68[3] = pfVar2[3];
			local_48[4] = pfVar2[2];
			local_48[5] = pfVar2[4];
		}
		break;
	default:
		local_68[0] = pfVar2[-3];
		local_48[1] = pfVar2[-4];
		local_48[0] = pfVar2[-6];
		switch (iVar3) {
		case 2:
			local_68[3] = 2.0 * local_68[2] - local_68[1];
			local_48[4] = 2.0 * local_48[3] - local_48[2];
			local_48[5] = 2.0 * local_48[3] - local_48[1];
			break;
		case 4:
			local_68[3] = pfVar2[3];
			local_48[4] = pfVar2[2];
			local_48[5] = 2.0 * local_48[4] - local_48[3];
			break;
		default:
			local_68[3] = pfVar2[3];
			local_48[4] = pfVar2[2];
			local_48[5] = pfVar2[4];
			break;
		}
		break;
	}
	return functionvalue::interpolateValue_BSpline_nonuniform(p2, (f64*)&local_68, (f64*)&local_48);
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stfd      f28, 0x20(r1)
	  psq_st    f28,0x28(r1),0,0
	  stfd      f27, 0x10(r1)
	  psq_st    f27,0x18(r1),0,0
	  lwz       r5, 0x54(r3)
	  lwz       r4, 0x50(r3)
	  lwz       r0, 0x4C(r3)
	  sub       r3, r4, r5
	  lfs       f4, -0x4(r5)
	  srawi     r3, r3, 0x2
	  sub       r0, r5, r0
	  addze     r3, r3
	  lfs       f5, 0x4(r5)
	  srawi     r0, r0, 0x2
	  lfs       f6, -0x8(r5)
	  addze     r0, r0
	  lfs       f31, 0x0(r5)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x13C
	  bge-      .loc_0x78
	  cmpwi     r0, 0x2
	  bge-      .loc_0x84
	  b         .loc_0x13C

	.loc_0x78:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x13C
	  b         .loc_0xD4

	.loc_0x84:
	  lfd       f0, -0x7F88(r2)
	  cmpwi     r3, 0x3
	  lfs       f30, 0x8(r5)
	  fmul      f2, f0, f6
	  lfs       f8, 0xC(r5)
	  fmsub     f7, f0, f4, f5
	  fsub      f27, f2, f31
	  fsub      f9, f2, f30
	  beq-      .loc_0xCC
	  bge-      .loc_0xB8
	  cmpwi     r3, 0x2
	  bge-      .loc_0xC0
	  b         .loc_0xCC

	.loc_0xB8:
	  cmpwi     r3, 0x5
	  bge-      .loc_0xCC

	.loc_0xC0:
	  lfd       f0, -0x7F88(r2)
	  fmsub     f10, f0, f30, f31
	  b         .loc_0x1A4

	.loc_0xCC:
	  lfs       f10, 0x10(r5)
	  b         .loc_0x1A4

	.loc_0xD4:
	  lfs       f27, -0x10(r5)
	  cmpwi     r3, 0x3
	  lfd       f0, -0x7F88(r2)
	  lfs       f7, -0xC(r5)
	  fmsub     f9, f0, f27, f6
	  beq-      .loc_0x12C
	  bge-      .loc_0xFC
	  cmpwi     r3, 0x2
	  bge-      .loc_0x108
	  b         .loc_0x12C

	.loc_0xFC:
	  cmpwi     r3, 0x5
	  bge-      .loc_0x12C
	  b         .loc_0x11C

	.loc_0x108:
	  fmul      f2, f0, f31
	  fmsub     f8, f0, f5, f4
	  fsub      f30, f2, f6
	  fsub      f10, f2, f27
	  b         .loc_0x1A4

	.loc_0x11C:
	  lfs       f30, 0x8(r5)
	  lfs       f8, 0xC(r5)
	  fmsub     f10, f0, f30, f31
	  b         .loc_0x1A4

	.loc_0x12C:
	  lfs       f8, 0xC(r5)
	  lfs       f30, 0x8(r5)
	  lfs       f10, 0x10(r5)
	  b         .loc_0x1A4

	.loc_0x13C:
	  cmpwi     r3, 0x3
	  lfs       f7, -0xC(r5)
	  lfs       f27, -0x10(r5)
	  lfs       f9, -0x18(r5)
	  beq-      .loc_0x198
	  bge-      .loc_0x160
	  cmpwi     r3, 0x2
	  bge-      .loc_0x16C
	  b         .loc_0x198

	.loc_0x160:
	  cmpwi     r3, 0x5
	  bge-      .loc_0x198
	  b         .loc_0x184

	.loc_0x16C:
	  lfd       f0, -0x7F88(r2)
	  fmul      f2, f0, f31
	  fmsub     f8, f0, f5, f4
	  fsub      f30, f2, f6
	  fsub      f10, f2, f27
	  b         .loc_0x1A4

	.loc_0x184:
	  lfs       f30, 0x8(r5)
	  lfd       f0, -0x7F88(r2)
	  lfs       f8, 0xC(r5)
	  fmsub     f10, f0, f30, f31
	  b         .loc_0x1A4

	.loc_0x198:
	  lfs       f8, 0xC(r5)
	  lfs       f30, 0x8(r5)
	  lfs       f10, 0x10(r5)

	.loc_0x1A4:
	  fsub      f3, f31, f6
	  lfd       f11, -0x7FB8(r2)
	  fsub      f2, f1, f6
	  fsub      f0, f31, f1
	  fdiv      f12, f11, f3
	  fmul      f11, f2, f12
	  fsub      f3, f30, f6
	  fmul      f12, f0, f12
	  fdiv      f29, f11, f3
	  fsub      f11, f31, f27
	  fsub      f28, f30, f1
	  fsub      f3, f1, f27
	  fdiv      f13, f12, f11
	  fmul      f12, f28, f29
	  fsub      f11, f30, f27
	  fmul      f30, f0, f13
	  fmadd     f13, f3, f13, f12
	  fsub      f31, f31, f9
	  fmul      f12, f2, f29
	  fdiv      f13, f13, f11
	  fdiv      f30, f30, f31
	  fsub      f11, f10, f6
	  fmul      f6, f28, f13
	  fdiv      f11, f12, f11
	  fsub      f9, f1, f9
	  fsub      f10, f10, f1
	  fmul      f1, f0, f30
	  fmadd     f0, f9, f30, f6
	  fmul      f6, f10, f11
	  fmul      f0, f0, f4
	  fmadd     f3, f3, f13, f6
	  fmadd     f0, f1, f7, f0
	  fmul      f1, f2, f11
	  fmadd     f0, f3, f5, f0
	  fmadd     f1, f1, f8, f0
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  psq_l     f28,0x28(r1),0,0
	  lfd       f28, 0x20(r1)
	  psq_l     f27,0x18(r1),0,0
	  lfd       f27, 0x10(r1)
	  addi      r1, r1, 0x60
	  blr
	*/
}

/**
 * @note Address: 0x8000AC60
 * @note Size: 0x98
 */
TFunctionValue_hermite::TFunctionValue_hermite()
    : mFloatData(nullptr)
    , _44(0)
    , mSize(0)
    , mData1(*this, nullptr)
    , mData2(mData1)
    , mData3(mData1)
{
}

/**
 * @note Address: 0x8000ACF8
 * @note Size: 0x8
 */
int TFunctionValue_hermite::getType() const { return TYPE_Hermite; }

/**
 * @note Address: 0x8000AD00
 * @note Size: 0x20
 */
TFunctionValueAttributeSet TFunctionValue_hermite::getAttributeSet() { return TFunctionValueAttributeSet(nullptr, this, nullptr); }

/**
 * @note Address: 0x8000AD20
 * @note Size: 0x50
 */
void TFunctionValue_hermite::data_set(const f32* floatData, u32 p2, u32 size)
{
	mFloatData = floatData;
	_44        = p2;
	mSize      = size;

	mData1.set(mFloatData, mSize);
	mData2.set(&mFloatData[_44 * mSize], mSize);
	mData3 = mData1;
}

/**
 * @note Address: 0x8000AD70
 * @note Size: 0x6C
 */
void TFunctionValue_hermite::initialize()
{
	range_initialize();

	mFloatData = nullptr;
	_44        = 0;
	mSize      = 0;

	TIterator_data_ data(*this, nullptr);
	mData1 = data;
	mData2 = mData1;
	mData3 = mData1;
}

/**
 * @note Address: 0x8000ADDC
 * @note Size: 0xA8
 */
void TFunctionValue_hermite::prepare() { range_prepare(); }

/**
 * @note Address: 0x8000AE84
 * @note Size: 0x5D0
 */
f64 TFunctionValue_hermite::getValue(f64 p1)
{
	p1     = range_getParameter(p1, data_getValue_front(), data_getValue_back());
	mData3 = JGadget::findUpperBound_binary_current(mData1, mData2, mData3, p1);

	if (mData3 == mData1) {
		return mData3.get()[1];
	}
	if (mData3 == mData2) {
		--mData3;
		return mData3.get()[1];
	}

	const f32* pfVar5 = mData3.get();
	const f32* pfVar7 = pfVar5 - mSize;

	return functionvalue::interpolateValue_hermite(p1, pfVar7[0], pfVar7[1], pfVar7[mSize - 1], pfVar5[0], pfVar5[1], pfVar5[2]);
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stfd     f1, 8(r1)
	mr       r31, r3
	lwz      r3, 0x44(r3)
	lwz      r0, 0x48(r31)
	addi     r3, r3, -1
	lfd      f2, 0x28(r31)
	mullw    r0, r3, r0
	lbz      r3, 0x21(r31)
	fsub     f0, f1, f2
	lfd      f1, 0x30(r31)
	extsb    r3, r3
	lwz      r4, 0x40(r31)
	slwi     r0, r0, 2
	fmadd    f3, f1, f0, f2
	cmpwi    r3, 2
	lfs      f31, 0(r4)
	lfsx     f30, r4, r0
	beq      lbl_8000B09C
	bge      lbl_8000AF00
	cmpwi    r3, 0
	beq      lbl_8000AF10
	bge      lbl_8000AFD4
	b        lbl_8000AF10

lbl_8000AF00:
	cmpwi    r3, 4
	beq      lbl_8000B23C
	bge      lbl_8000AF10
	b        lbl_8000B168

lbl_8000AF10:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000AF70
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x34(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000AF4C addi     r3, r1, 0x34

lbl_8000AF4C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000AF60
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000AF60:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000AFC8

lbl_8000AF70:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000AFC8
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x30(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000AFA8 addi     r3, r1, 0x30

lbl_8000AFA8:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000AFBC
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000AFBC:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000AFC8:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000AFD4:
	lfd      f2, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fadd     f1, f3, f2
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8000B038
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x2c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B014 addi     r3, r1, 0x2c

lbl_8000B014:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B028
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B028:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B090

lbl_8000B038:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B090
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x28(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B070 addi     r3, r1, 0x28

lbl_8000B070:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B084
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B084:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B090:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000B09C:
	lfd      f0, 0x10(r31)
	lfd      f2, 8(r31)
	fadd     f1, f3, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8000B104
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x24(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B0E0 addi     r3, r1, 0x24

lbl_8000B0E0:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B0F4
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B0F4:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B15C

lbl_8000B104:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B15C
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x20(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B13C addi     r3, r1, 0x20

lbl_8000B13C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B150
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B150:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B15C:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000B168:
	lfd      f4, 8(r31)
	lfd      f0, 0x10(r31)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f4, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fmadd    f1, f2, f1, f3
	fsub     f1, f1, f4
	fcmpo    cr0, f1, f0
	bge      lbl_8000B1D8
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x1c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B1B4 addi     r3, r1, 0x1c

lbl_8000B1B4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B1C8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B1C8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B230

lbl_8000B1D8:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B230
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x18(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B210 addi     r3, r1, 0x18

lbl_8000B210:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B224
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B224:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B230:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000B23C:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000B29C
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x14(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B278 addi     r3, r1, 0x14

lbl_8000B278:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B28C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B28C:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B2F4

lbl_8000B29C:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B2F4
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x10(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B2D4 addi     r3, r1, 0x10

lbl_8000B2D4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B2E8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B2E8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B2F4:
	lfd      f3, 8(r31)
	fsub     f2, f30, f31
	lfd      f0, 0x18(r31)
	fadd     f1, f1, f3
	fsub     f1, f1, f3
	fmul     f1, f1, f2
	fdiv     f0, f1, f0
	fadd     f1, f31, f0

lbl_8000B314:
	stfd     f1, 8(r1)
	addi     r3, r1, 0x50
	addi     r4, r1, 0x48
	addi     r5, r1, 0x40
	lwz      r8, 0x5c(r31)
	addi     r6, r1, 0x38
	lwz      r0, 0x60(r31)
	addi     r7, r1, 8
	stw      r8, 0x38(r1)
	stw      r0, 0x3c(r1)
	lwz      r8, 0x54(r31)
	lwz      r0, 0x58(r31)
	stw      r8, 0x40(r1)
	stw      r0, 0x44(r1)
	lwz      r8, 0x4c(r31)
	lwz      r0, 0x50(r31)
	stw      r8, 0x48(r1)
	stw      r0, 0x4c(r1)
	bl
"findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCd"
	lwz      r0, 0x50(r1)
	stw      r0, 0x5c(r31)
	lwz      r0, 0x54(r1)
	stw      r0, 0x60(r31)
	lwz      r4, 0x5c(r31)
	lwz      r0, 0x4c(r31)
	cmplw    r4, r0
	bne      lbl_8000B388
	lfs      f1, 4(r4)
	b        lbl_8000B430

lbl_8000B388:
	lwz      r0, 0x54(r31)
	cmplw    r4, r0
	bne      lbl_8000B3B4
	lwz      r3, 0x60(r31)
	lwz      r0, 0x5c(r31)
	slwi     r3, r3, 2
	subf     r0, r3, r0
	stw      r0, 0x5c(r31)
	lwz      r3, 0x5c(r31)
	lfs      f1, 4(r3)
	b        lbl_8000B430

lbl_8000B3B4:
	lwz      r0, 0x48(r31)
	lfs      f0, 0(r4)
	slwi     r0, r0, 2
	lfd      f7, lbl_805163A8@sda21(r2)
	subf     r5, r0, r4
	lfd      f1, 8(r1)
	lfs      f5, 0(r5)
	add      r3, r5, r0
	lfd      f4, lbl_805163B8@sda21(r2)
	fsub     f3, f0, f5
	lfd      f2, lbl_805163B0@sda21(r2)
	fsub     f9, f1, f5
	lfs      f0, 4(r4)
	lfs      f1, 4(r5)
	fdiv     f6, f7, f3
	lfs      f3, -4(r3)
	lfs      f5, 8(r4)
	fmul     f8, f9, f6
	fmadd    f4, f4, f8, f2
	fmul     f2, f8, f8
	fsub     f6, f8, f7
	fmul     f2, f4, f2
	fmul     f4, f6, f6
	fmul     f0, f2, f0
	fsub     f2, f7, f2
	fmul     f6, f6, f9
	fmul     f4, f9, f4
	fmadd    f0, f2, f1, f0
	fmul     f1, f8, f6
	fmadd    f0, f4, f3, f0
	fmadd    f1, f1, f5, f0

lbl_8000B430:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

} // namespace JStudio
