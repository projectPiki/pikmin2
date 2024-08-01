#ifndef JSTUDIO_FUNCTIONVALUE_H
#define JSTUDIO_FUNCTIONVALUE_H

#include "fdlibm.h"
#include "Dolphin/vec.h"
#include "JSystem/JGadget/vector.h"
#include "types.h"

namespace JStudio {
struct TFunctionValue;
struct TFunctionValueAttributeSet;
struct TFunctionValueAttribute_refer;
struct TFunctionValueAttribute_range;
struct TFunctionValueAttribute_interpolate;
struct TFunctionValueAttributeSet_const;

typedef f64 (*ExtrapolateParameter)(f64 value, f64 max);

namespace functionvalue {
// this is just for interpolation and extrapolation functions
// EXTRAPOLATION
inline f64 extrapolateParameter_raw(f64 value, f64 max) { return value; }

inline f64 extrapolateParameter_repeat(f64 value, f64 max)
{
	f64 t = fmod(value, max);

	if (t < 0.0) {
		t += max;
	}

	return t;
}

inline f64 extrapolateParameter_clamp(f64 value, f64 max)
{
	if (value <= 0.0) {
		return 0.0;
	}

	if (max <= value) {
		value = max;
	}

	return value;
}

f64 extrapolateParameter_turn(f64 value, f64 max);

// INTERPOLATION
f64 interpolateValue_hermite(f64, f64, f64, f64, f64, f64, f64);
f64 interpolateValue_BSpline_uniform(f64, f64, f64, f64, f64);
f64 interpolateValue_BSpline_uniform_first1(f64, f64, f64, f64, f64);
f64 interpolateValue_BSpline_uniform_first2(f64, f64, f64, f64, f64);
f64 interpolateValue_BSpline_uniform_last2(f64, f64, f64, f64, f64);
f64 interpolateValue_BSpline_uniform_last1(f64, f64, f64, f64, f64);
f64 interpolateValue_BSpline_nonuniform(f64, const f64*, const f64*);

// fabricated/taken from wind waker
inline f64 interpolateValue_linear(f64 a1, f64 a2, f64 a3, f64 a4, f64 a5) { return a3 + ((a5 - a3) * (a1 - a2)) / (a4 - a2); }

inline f64 interpolateValue_linear_1(f64 a1, f64 a2, f64 a3, f64 a4) { return a3 + (a4 - a3) * (a1 - a2); }
inline f64 interpolateValue_plateau(f64 startValue, f64 endValue, f64 startPoint, f64 endPoint, f64 fraction)
{
	return interpolateValue_hermite(startValue, endValue, startPoint, 0.0, endPoint, fraction, 0.0);
}
} // namespace functionvalue

struct TFunctionValue {
	enum TEType {
		TYPE_Composite      = 1,
		TYPE_Constant       = 2,
		TYPE_Transition     = 3,
		TYPE_List           = 4,
		TYPE_List_Parameter = 5,
		TYPE_Hermite        = 6,
	};

	enum TEProgress { PROG_Init = 0 };

	enum TEAdjust {
		ADJ_Init = 0,
		ADJ_Unk1 = 1,
		ADJ_Unk2 = 2,
		ADJ_Unk3 = 3,
		ADJ_Unk4 = 4,
	};

	enum TEOutside {
		OUT_Init = 0,
	};

	enum TEInterpolate {
		INTERP_None    = 0,
		INTERP_Linear  = 1,
		INTERP_Plateau = 2,
		INTERP_BSpline = 3,
	};

	TFunctionValue(); // unused/inlined

	virtual ~TFunctionValue();                                // _08
	virtual int getType() const                          = 0; // _0C
	virtual TFunctionValueAttributeSet getAttributeSet() = 0; // _10
	virtual void initialize()                            = 0; // _14
	virtual void prepare()                               = 0; // _18
	virtual f64 getValue(f64)                            = 0; // _1C

	static ExtrapolateParameter toFunction_outside(int idx);

	static ExtrapolateParameter toFunction(TFunctionValue::TEOutside outside) { return toFunction_outside(outside); }

	// unused/inlined (also probably static):
	void toString_type(int);
	void toValue_type(const char*);
	void toString_progress(int);
	void toValue_progress(const char*);
	void toString_adjust(int);
	void toValue_adjust(const char*);
	void toString_outside(int);
	void toValue_outside(const char*);
	void toString_interpolate(int);
	void toValue_interpolate(const char*);

	// _00 = VTBL
};

struct TFunctionValueAttributeSet_const {

	TFunctionValueAttributeSet_const(TFunctionValueAttribute_refer* refer, TFunctionValueAttribute_range* range,
	                                 TFunctionValueAttribute_interpolate* interp)
	    : mRefer(refer)
	    , mRange(range)
	    , mInterp(interp)
	{
	}

	// unused/inlined:
	TFunctionValueAttribute_refer* refer_get() const { return mRefer; }
	TFunctionValueAttribute_range* range_get() const { return mRange; }
	TFunctionValueAttribute_interpolate* interpolate_get() const { return mInterp; }

	TFunctionValueAttribute_refer* mRefer;        // _00
	TFunctionValueAttribute_range* mRange;        // _04
	TFunctionValueAttribute_interpolate* mInterp; // _08
};

struct TFunctionValueAttributeSet : public TFunctionValueAttributeSet_const {
	TFunctionValueAttributeSet(TFunctionValueAttribute_refer* refer, TFunctionValueAttribute_range* range,
	                           TFunctionValueAttribute_interpolate* interp)
	    : TFunctionValueAttributeSet_const(refer, range, interp)
	{
	}


	// _00-_0C = TFunctionValueAttributeSet_const
};

struct TFunctionValueAttribute_refer : public JGadget::TVector_pointer<TFunctionValue*> {
	TFunctionValueAttribute_refer()
	    : JGadget::TVector_pointer<TFunctionValue*>(JGadget::TAllocator<void*>())
	{
	}

	~TFunctionValueAttribute_refer() { } // unused/inlined

	// unused/inlined
	void refer_initialize();
	bool refer_isReferring(const TFunctionValue*) const;

	const TFunctionValueAttribute_refer* refer_getContainer() const { return this; }
	JGadget::TVector_pointer<TFunctionValue*>& refer_referContainer() { return *this; }

	// _00-_18 = JGadget::TVector_pointer
};

struct TFunctionValueAttribute_range {
	TFunctionValueAttribute_range();

	void range_set(f64, f64);

	// unused/inlined:
	void range_initialize();
	void range_prepare();
	f64 range_getParameter(f64, f64, f64) const;

	TFunctionValue::TEProgress range_getProgress() const { return (TFunctionValue::TEProgress)mProgress; }
	void range_setProgress(TFunctionValue::TEProgress progress) { mProgress = progress; }

	TFunctionValue::TEAdjust range_getAdjust() const { return (TFunctionValue::TEAdjust)mAdjust; }
	void range_setAdjust(TFunctionValue::TEAdjust adjust) { mAdjust = adjust; }

	void range_setOutside(TFunctionValue::TEOutside outside) { range_setOutside(outside, outside); }
	void range_setOutside(TFunctionValue::TEOutside begin, TFunctionValue::TEOutside end)
	{
		range_setOutside_begin(begin);
		range_setOutside_end(end);
	}
	void range_setOutside_begin(TFunctionValue::TEOutside begin) { mStartIndex = begin; }
	void range_setOutside_end(TFunctionValue::TEOutside end) { mEndIndex = end; }

	f64 range_getParameter_outside(f64 arg1) const
	{
		f64 result = arg1;
		result -= mStart;

		if (result < 0.0) {
			result = TFunctionValue::toFunction(mStartIndex)(result, mWidth);
		} else if (result >= mWidth) {
			result = TFunctionValue::toFunction(mEndIndex)(result, mWidth);
		}
		result += mStart;
		return result;
	}

	f64 range_getParameter_progress(f64 arg1) const { return _20 + _28 * (arg1 - _20); }
	f64 range_getBegin() const { return mStart; }
	f64 range_getEnd() const { return mEnd; }
	f64 range_getDifference() const { return mWidth; }

	f64 mStart;                            // _00
	f64 mEnd;                              // _08
	f64 mWidth;                            // _10
	s8 mProgress;                          // _18
	s8 mAdjust;                            // _19
	u32 _1C;                               // _1C
	f64 _20;                               // _20
	f64 _28;                               // _28
	TFunctionValue::TEOutside mStartIndex; // _30
	TFunctionValue::TEOutside mEndIndex;   // _38
};

struct TFunctionValueAttribute_interpolate {
	TFunctionValueAttribute_interpolate()
	    : mInterpolate(0)
	{
	}

	void interpolate_initialize() { mInterpolate = 0; }
	void interpolate_prepare() { }
	u32 interpolate_get() const { return mInterpolate; }
	void interpolate_set(TFunctionValue::TEInterpolate interpolate) { mInterpolate = interpolate; }

	u32 mInterpolate; // _00
};

struct TFunctionValue_constant : public TFunctionValue {
	TFunctionValue_constant();

	virtual ~TFunctionValue_constant() { }                // _08 (weak)
	virtual int getType() const;                          // _0C
	virtual TFunctionValueAttributeSet getAttributeSet(); // _10
	virtual void initialize();                            // _14
	virtual void prepare();                               // _18
	virtual f64 getValue(f64);                            // _1C

	void data_set(f64 value) { mValue = value; }

	// _00 = VTBL
	u32 _04;    // _04
	f64 mValue; // _08
};

struct TFunctionValue_composite : public TFunctionValue, public TFunctionValueAttribute_refer {
	struct TData {
		TData(void* data)
		    : mWordData((u32)data)
		{
		}
		TData(const void* data)
		    : mRawData(data)
		{
		}
		TData(u32 data)
		    : mWordData(data)
		{
		}
		TData(f64 data)
		    : mDoubleData(data)
		{
		}

        TData(const TData& other);

		inline void operator=(const TData& other) { mDoubleData = other.mDoubleData; }
		u32 getAsWord() const { return mWordData; }
		f64 getAsDouble() const { return mDoubleData; }
		const void* getAsRaw() const { return mRawData; }

		union {
			const void* mRawData;
			u32 mWordData;
			f64 mDoubleData;
		}; // _00
	};

	typedef f64 (*UnkFunc)(f64, const TFunctionValueAttribute_refer*, const TData*);
	typedef f64 (*CompositeFunc)(const JGadget::TVector_pointer<TFunctionValue*>&, const TData&, f64);

	TFunctionValue_composite();

	virtual ~TFunctionValue_composite() { }               // _08 (weak)
	virtual int getType() const;                          // _0C
	virtual TFunctionValueAttributeSet getAttributeSet(); // _10
	virtual void initialize();                            // _14
	virtual void prepare();                               // _18
	virtual f64 getValue(f64);                            // _1C

	static f64 composite_raw(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);
	static f64 composite_index(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);
	static f64 composite_parameter(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);
	static f64 composite_add(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);
	static f64 composite_subtract(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);
	static f64 composite_multiply(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);
	static f64 composite_divide(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const TData&, f64);

	void data_set(CompositeFunc function, const TData& data)
	{
		mFunction = (UnkFunc)function;
		data_setData(data);
	}

	const TData* data_getData() const { return &mData; }
	void data_setData(const TData& data) { mData = data; }

	// _00     = VTBL (TFunctionValue)
	// _04-_1C = TFunctionValueAttribute_refer
	UnkFunc mFunction; // _1C
	TData mData;       // _20
};

struct TFunctionValue_transition : public TFunctionValue, public TFunctionValueAttribute_range, public TFunctionValueAttribute_interpolate {
	TFunctionValue_transition();

	virtual ~TFunctionValue_transition() { }              // _08 (weak)
	virtual int getType() const;                          // _0C
	virtual TFunctionValueAttributeSet getAttributeSet(); // _10
	virtual void initialize();                            // _14
	virtual void prepare();                               // _18
	virtual f64 getValue(f64);                            // _1C

	void data_set(f64 a1, f64 a2)
	{
		mTransitionLowerBound = a1;
		mTransitionUpperBound = a2;
	}

	f64 data_getDifference() const { return mTransitionUpperBound - mTransitionLowerBound; }

	// _00 = VTBL (TFunctionValue)
	// _04-_40 = TFunctionValueAttribute_range
	// _40-_44 = TFunctionValueAttribute_interpolate
	f64 mTransitionLowerBound; // _48
	f64 mTransitionUpperBound; // _50
};

struct TFunctionValue_list : public TFunctionValue, public TFunctionValueAttribute_range, public TFunctionValueAttribute_interpolate {
	struct TIndexData_ {
		f64 mStartValue; // _00
		f64 mEndValue;   // _08
		u32 mEntryIndex; // _10
	};

	typedef f64 (*update_INTERPOLATE)(const TFunctionValue_list&, const TIndexData_&);

	TFunctionValue_list();

	virtual ~TFunctionValue_list() { }                    // _08 (weak)
	virtual int getType() const;                          // _0C
	virtual TFunctionValueAttributeSet getAttributeSet(); // _10
	virtual void initialize();                            // _14
	virtual void prepare();                               // _18
	virtual f64 getValue(f64);                            // _1C

	void data_set(const f32* ptr, u32 p2)
	{
		mEntries = ptr;
		mData    = p2;
	}

	void data_setInterval(f64 p1) { _50 = p1; }

	static f64 update_INTERPOLATE_NONE_(const TFunctionValue_list&, const TIndexData_&);
	static f64 update_INTERPOLATE_LINEAR_(const TFunctionValue_list&, const TIndexData_&);
	static f64 update_INTERPOLATE_PLATEAU_(const TFunctionValue_list&, const TIndexData_&);
	static f64 update_INTERPOLATE_BSPLINE_dataMore3_(const TFunctionValue_list&, const TIndexData_&);

	// unused/inlined:
	static f64 update_INTERPOLATE_CONTINUE_(const TFunctionValue_list&, const TIndexData_&);
	static f64 update_INTERPOLATE_AVERAGE_(const TFunctionValue_list&, const TIndexData_&);
	static f64 update_INTERPOLATE_SMOOTH_(const TFunctionValue_list&, const TIndexData_&);

	// _00     = VTBL (TFunctionValue)
	// _04-_40 = TFunctionValueAttribute_range
	// _40-_44 = TFunctionValueAttribute_interpolate
	const f32* mEntries;                // _44
	u32 mData;                          // _48
	f64 _50;                            // _50
	update_INTERPOLATE mUpdateFunction; // _58
};

struct TFunctionValue_list_parameter : public TFunctionValue,
                                       public TFunctionValueAttribute_range,
                                       public TFunctionValueAttribute_interpolate {
	struct TIterator_data_ {
		TIterator_data_(const f32* value)
		    : mValue(value)
		{
		}
		TIterator_data_(const TIterator_data_& other)
		    : mValue(other.mValue)
		{
		}

		void operator=(const TIterator_data_& other) { mValue = other.mValue; }
		TIterator_data_& operator--()
		{
			mValue -= 2;
			return *this;
		}
		friend bool operator==(const TIterator_data_& data1, const TIterator_data_& data2) { return data1.mValue == data2.mValue; }

		const f32* get() const { return mValue; }
		void set(const f32* value) { mValue = value; }

		const f32* mValue; // _00
	};

	typedef f64 (*update_INTERPOLATE)(const TFunctionValue_list_parameter&, f64);

	TFunctionValue_list_parameter();

	virtual ~TFunctionValue_list_parameter() { }          // _08 (weak)
	virtual int getType() const;                          // _0C
	virtual TFunctionValueAttributeSet getAttributeSet(); // _10
	virtual void initialize();                            // _14
	virtual void prepare();                               // _18
	virtual f64 getValue(f64);                            // _1C

	void data_set(const f32*, u32);
	static f64 update_INTERPOLATE_NONE_(const JStudio::TFunctionValue_list_parameter&, f64);
	static f64 update_INTERPOLATE_LINEAR_(const JStudio::TFunctionValue_list_parameter&, f64);
	static f64 update_INTERPOLATE_PLATEAU_(const JStudio::TFunctionValue_list_parameter&, f64);
	static f64 update_INTERPOLATE_BSPLINE_dataMore3_(const JStudio::TFunctionValue_list_parameter&, f64);

	// unused/inlined:
	static f64 update_INTERPOLATE_CONTINUE_(const JStudio::TFunctionValue_list_parameter&, f64);
	static f64 update_INTERPOLATE_AVERAGE_(const JStudio::TFunctionValue_list_parameter&, f64);
	static f64 update_INTERPOLATE_SMOOTH_(const JStudio::TFunctionValue_list_parameter&, f64);

	f64 data_getValue_back() { return mFloatData[(_48 - 1) * 2]; }

	f64 data_getValue_front() { return mFloatData[0]; }

	// _00     = VTBL (TFunctionValue)
	// _04-_40 = TFunctionValueAttribute_range
	// _40-_44 = TFunctionValueAttribute_interpolate
	const f32* mFloatData;              // _44
	u32 _48;                            // _48
	TIterator_data_ mData1;             // _4C
	TIterator_data_ mData2;             // _50
	TIterator_data_ mData3;             // _54
	update_INTERPOLATE mUpdateFunction; // _58
};

struct TFunctionValue_hermite : public TFunctionValue, public TFunctionValueAttribute_range {
	struct TIterator_data_ {
		TIterator_data_(const TFunctionValue_hermite& rParent, const f32* value)
		{
			value_ = value;
			size_  = rParent.data_getSize();
		}

		const f32* get() { return value_; }

		void set(const f32* value, u32 size)
		{
			value_ = value;
			size_  = size;
		}

		friend bool operator==(const TIterator_data_& lhs, const TIterator_data_& rhs) { return lhs.value_ == rhs.value_; }

		TIterator_data_& operator--()
		{
			value_ -= size_;
			return *this;
		}

		/* 0x00 */ const f32* value_;
		/* 0x04 */ u32 size_;
	};

	TFunctionValue_hermite();

	virtual ~TFunctionValue_hermite() { }                 // _08 (weak)
	virtual int getType() const;                          // _0C
	virtual TFunctionValueAttributeSet getAttributeSet(); // _10
	virtual void initialize();                            // _14
	virtual void prepare();                               // _18
	virtual f64 getValue(f64);                            // _1C

	void data_set(const f32*, u32, u32);

	u32 data_getSize() const { return mSize; }
	f64 data_getValue_back() { return mFloatData[(_44 - 1) * mSize]; }
	f64 data_getValue_front() { return mFloatData[0]; }

	// _00     = VTBL (TFunctionValue)
	// _04-_40 = TFunctionValueAttribute_range
	const f32* mFloatData;  // _40
	u32 _44;                // _44
	u32 mSize;              // _48
	TIterator_data_ mData1; // _4C
	TIterator_data_ mData2; // _54
	TIterator_data_ mData3; // _5C
};

} // namespace JStudio

#endif
