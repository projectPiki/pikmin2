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
f64 functionvalue::interpolateValue_hermite(f64 startValue, f64 endValue, f64 startPoint, f64 controlValue1, f64 controlPoint1,
                                            f64 controlValue2, f64 controlPoint2)
{
	f64 valueDifference         = startValue - endValue;
	f64 inverseControlSpan      = (1 / (controlPoint1 - endValue));
	f64 scaledDiff              = valueDifference * inverseControlSpan;
	f64 squaredScaledDiff       = (scaledDiff * scaledDiff);
	f64 offset                  = scaledDiff - 1;
	f64 cubicTerm               = (3 + (-2 * scaledDiff)) * squaredScaledDiff;
	f64 linearTerm              = 1 - cubicTerm;
	f64 offsetSquared           = valueDifference * (offset * offset);
	f64 scaledDiffOffsetProduct = scaledDiff * (offset * valueDifference);
	return (scaledDiffOffsetProduct * controlPoint2)
	     + ((offsetSquared * controlValue1) + ((linearTerm * startPoint) + (cubicTerm * controlValue2)));
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
f64 functionvalue::interpolateValue_BSpline_uniform(f64 interpolationFactor, f64 point2, f64 point3, f64 point4, f64 point5)
{
	f64 inverseInterpolationFactor        = (1.0 - interpolationFactor);
	f64 inverseInterpolationFactorSquared = inverseInterpolationFactor * inverseInterpolationFactor;
	f64 inverseInterpolationFactorCubed   = inverseInterpolationFactorSquared * inverseInterpolationFactor;

	f64 interpolationFactorSquared = interpolationFactor * interpolationFactor;
	f64 interpolationFactorCubed   = interpolationFactorSquared * interpolationFactor;

	f64 coefficient1 = inverseInterpolationFactorCubed;

	f64 blendFactorForPoint3 = (16.0 / 99.0) * interpolationFactorCubed - interpolationFactorSquared + 0.5;

	f64 blendFactorForPoint4 = (16.0 / 99.0) * (interpolationFactor + interpolationFactorSquared - interpolationFactorCubed) + (2.0 / 3.0);

	f64 coefficient2 = interpolationFactorCubed;

	return ((coefficient1 * point2) + (coefficient2 * point5)) * (2.0 / 3.0) + (blendFactorForPoint3 * point3)
	     + (blendFactorForPoint4 * point4);
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
f64 functionvalue::interpolateValue_BSpline_nonuniform(f64 interpolationFactor, const f64* controlPoints, const f64* knotVector)
{
	f64 knot0              = knotVector[0];
	f64 knot1              = knotVector[1];
	f64 knot2              = knotVector[2];
	f64 knot3              = knotVector[3];
	f64 knot4              = knotVector[4];
	f64 knot5              = knotVector[5];
	f64 diff0              = interpolationFactor - knot0;
	f64 diff1              = interpolationFactor - knot1;
	f64 diff2              = interpolationFactor - knot2;
	f64 diff3              = knot3 - interpolationFactor;
	f64 diff4              = knot4 - interpolationFactor;
	f64 diff5              = knot5 - interpolationFactor;
	f64 inverseDeltaKnot32 = 1 / (knot3 - knot2);
	f64 blendFactor3       = (diff3 * inverseDeltaKnot32) / (knot3 - knot1);
	f64 blendFactor2       = (diff2 * inverseDeltaKnot32) / (knot4 - knot2);
	f64 blendFactor1       = (diff3 * blendFactor3) / (knot3 - knot0);
	f64 blendFactor4       = ((diff1 * blendFactor3) + (diff4 * blendFactor2)) / (knot4 - knot1);
	f64 blendFactor5       = (diff2 * blendFactor2) / (knot5 - knot2);
	f64 term1              = diff3 * blendFactor1;
	f64 term2              = (diff0 * blendFactor1) + (diff4 * blendFactor4);
	f64 term3              = (diff1 * blendFactor4) + (diff5 * blendFactor5);
	f64 term4              = diff2 * blendFactor5;

	return (term1 * controlPoints[0]) + (term2 * controlPoints[1]) + (term3 * controlPoints[2]) + (term4 * controlPoints[3]);
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
f64 TFunctionValue_composite::composite_index(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& functionValues,
                                              const JStudio::TFunctionValue_composite::TData& compositeData, f64 input)
{
	s32 count = functionValues.size();
	if (count <= 1) {
		return 0.0;
	}
	TFunctionValue** currentFunction = (TFunctionValue**)functionValues.begin();
	TFunctionValue* initialFunction  = *currentFunction;

	f64 initialOutput = initialFunction->getValue(input);
	s32 computedIndex = floor(initialOutput);
	u32 compositeType = compositeData.getAsWord();
	switch (compositeType) {
	case 0:
	case 3:
	default:
		if (computedIndex < 0) {
			computedIndex = 0;
		} else if (computedIndex >= count - 1) {
			computedIndex = count - 2;
		}
		break;
	case 1:
		div_t divisionResult = div(computedIndex, count - 1);
		computedIndex        = divisionResult.rem;
		if (computedIndex < 0) {
			computedIndex = count + computedIndex;
			computedIndex--;
		}
		break;
	case 2:
		if (count - 1 == 1) {
			computedIndex = 0;
		} else {
			u32 adjustedSize      = (u32)(count - 2) * 2;
			div_t divisionResult2 = div(computedIndex, adjustedSize);
			computedIndex         = divisionResult2.rem;
			if (computedIndex < 0) {
				computedIndex += adjustedSize;
			}
			if (computedIndex >= count - 1) {
				computedIndex = adjustedSize - computedIndex;
			}
		}
		break;
	}

	currentFunction += computedIndex + 1;
	initialFunction = *currentFunction;
	return initialFunction->getValue(input);
}

/**
 * @note Address: 0x80008ED8
 * @note Size: 0x68
 */
f64 TFunctionValue_composite::composite_parameter(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& functionValues,
                                                  const TData& compositeData, f64 input)
{
	f64 adjustedInput = input - compositeData.getAsDouble();
	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> enumerator(functionValues);
	while (enumerator) {
		TFunctionValue* const* functionValuePtr = *enumerator;
		TFunctionValue* functionValue           = *functionValuePtr;
		adjustedInput                           = functionValue->getValue(adjustedInput);
	}
	return adjustedInput;
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
f64 TFunctionValue_composite::composite_subtract(const JGadget::TVector_pointer<JStudio::TFunctionValue*>& functionValues,
                                                 const TData& compositeData, f64 input)
{
	u32 numFunctions = functionValues.size();
	if (numFunctions == 0) {
		return 0.0;
	}

	JGadget::TContainerEnumerator_const_TVector<TFunctionValue*> enumerator(functionValues);
	TFunctionValue* const* firstFunctionPtr = *enumerator;
	TFunctionValue* firstFunction           = *firstFunctionPtr;
	f64 resultValue                         = firstFunction->getValue(input);
	while (enumerator) {
		TFunctionValue* const* currentFunctionPtr = *enumerator;
		TFunctionValue* currentFunction           = *currentFunctionPtr;
		resultValue -= currentFunction->getValue(input);
	}

	resultValue -= compositeData.getAsDouble();
	return resultValue;
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
    : mTransitionLowerBound(NAN)
    , mTransitionUpperBound(mTransitionLowerBound)
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
	mTransitionLowerBound = NAN;
	mTransitionUpperBound = mTransitionLowerBound;
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
f64 TFunctionValue_transition::getValue(f64 inputParameter)
{
	f64 progressParameter = range_getParameter_progress(inputParameter);
	f64 adjustedValue     = range_getParameter_outside(progressParameter);
	switch (range_getAdjust()) {
	default:
		if (adjustedValue < range_getBegin()) {
			return mTransitionLowerBound;
		}
		return mTransitionUpperBound;
	case TFunctionValue::ADJ_Unk2:
		if (adjustedValue < range_getEnd()) {
			return mTransitionLowerBound;
		}
		return mTransitionUpperBound;
	case TFunctionValue::ADJ_Unk3:
	ADJ_UNK3_label:
		if (adjustedValue < 0.5 * (range_getBegin() + range_getEnd())) {
			return mTransitionLowerBound;
		}
		return mTransitionUpperBound;
	case TFunctionValue::ADJ_Unk4:
		if (adjustedValue < range_getBegin()) {
			return mTransitionLowerBound;
		}
		if (adjustedValue >= range_getEnd()) {
			return mTransitionUpperBound;
		}
		switch (interpolate_get()) {
		default:
		case 0:
			goto ADJ_UNK3_label;
		case 1:
		case 3:
			return mTransitionLowerBound + ((adjustedValue - range_getBegin()) * data_getDifference()) / range_getDifference();
		case 2:
			return functionvalue::interpolateValue_plateau(adjustedValue, range_getBegin(), mTransitionLowerBound, range_getEnd(),
			                                               mTransitionUpperBound);
		}
	}
}

/**
 * @note Address: 0x80009664
 * @note Size: 0x78
 */
TFunctionValue_list::TFunctionValue_list()
    : mEntries(nullptr)
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
	mEntries        = nullptr;
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
	f64 progressParameter          = range_getParameter_progress(p1);
	u32 lastIndex                  = mData - 1;
	TFunctionValue::TEAdjust iVar5 = range_getAdjust();
	f64 totalEntries               = lastIndex;
	TIndexData_ indexData;
	f64 parameterOutside;
	switch (iVar5) {
	case 0:
	default:
		parameterOutside      = range_getParameter_outside(progressParameter);
		indexData.mStartValue = parameterOutside / _50;
		break;
	case 1:
		parameterOutside      = range_getParameter_outside(progressParameter + range_getBegin());
		indexData.mStartValue = parameterOutside / _50;
		break;
	case 2:
		parameterOutside      = range_getParameter_outside(progressParameter + range_getEnd());
		indexData.mStartValue = parameterOutside / _50;
		break;
	case 3:
		parameterOutside      = range_getParameter_outside(progressParameter + 0.5 * (range_getBegin() + range_getEnd()));
		indexData.mStartValue = parameterOutside / _50;
		break;
	case 4:
		parameterOutside      = range_getParameter_outside(progressParameter);
		indexData.mStartValue = (totalEntries * (parameterOutside - range_getBegin())) / range_getDifference();
		break;
	}

	if (indexData.mStartValue < 0.0) {
		return mEntries[0];
	}

	if (indexData.mStartValue >= totalEntries) {
		return mEntries[lastIndex];
	}

	indexData.mEndValue   = floor(indexData.mStartValue);
	indexData.mEntryIndex = indexData.mEndValue;

	return mUpdateFunction(*this, indexData);
}

/**
 * @note Address: 0x80009DB8
 * @note Size: 0x14
 */
f64 TFunctionValue_list::update_INTERPOLATE_NONE_(const TFunctionValue_list& list, const TIndexData_& data)
{
	return list.mEntries[data.mEntryIndex];
}

/**
 * @note Address: 0x80009DCC
 * @note Size: 0x30
 */
f64 TFunctionValue_list::update_INTERPOLATE_LINEAR_(const TFunctionValue_list& list, const TIndexData_& data)
{
	return functionvalue::interpolateValue_linear_1(data.mStartValue, data.mEndValue, list.mEntries[data.mEntryIndex],
	                                                list.mEntries[data.mEntryIndex + 1]);
}

/**
 * @note Address: 0x80009DFC
 * @note Size: 0x7C
 */
f64 TFunctionValue_list::update_INTERPOLATE_PLATEAU_(const TFunctionValue_list& list, const TIndexData_& data)
{
	return functionvalue::interpolateValue_plateau(data.mStartValue, data.mEndValue, list.mEntries[data.mEntryIndex], 1.0 + data.mEndValue,
	                                               list.mEntries[data.mEntryIndex + 1]);
}

/**
 * @note Address: 0x80009E78
 * @note Size: 0xB4
 */
f64 TFunctionValue_list::update_INTERPOLATE_BSPLINE_dataMore3_(const TFunctionValue_list& list, const TIndexData_& data)
{
	const f32* l = list.mEntries;
	f64 dVar11   = l[data.mEntryIndex];
	f64 dVar10   = l[data.mEntryIndex + 1];
	f64 dVar9;
	f64 dVar8;

	if (data.mEntryIndex == 0) {
		// JUT_ASSERT(list.mData >= 3);
		dVar9 = 2.0 * dVar11 - dVar10;
		dVar8 = l[data.mEntryIndex + 2];
	} else if (data.mEntryIndex == list.mData - 2) {
		// JUT_ASSERT(list.mData >= 3);
		dVar9 = l[data.mEntryIndex - 1];
		dVar8 = 2.0 * dVar10 - dVar11;
	} else {
		// JUT_ASSERT(list.mData >= 4);
		dVar9 = l[data.mEntryIndex - 1];
		dVar8 = l[data.mEntryIndex + 2];
	}

	f64 j = data.mStartValue - data.mEndValue;
	return functionvalue::interpolateValue_BSpline_uniform(j, dVar9, dVar11, dVar10, dVar8);
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
	local_68[1] = pfVar2[-1];
	local_68[2] = pfVar2[1];
	f64 local_48[6];
	local_48[2] = pfVar2[-2];
	local_48[3] = pfVar2[0];
	s32 iVar5   = pfVar2 - list.mData1.get();
	s32 iVar3   = list.mData2.get() - pfVar2;
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
	return functionvalue::interpolateValue_BSpline_nonuniform(p2, local_68, local_48);
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
}

} // namespace JStudio
