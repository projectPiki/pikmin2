#ifndef _JSTUDIO_TVARIABLEVALUE_H
#define _JSTUDIO_TVARIABLEVALUE_H

#include "types.h"

namespace JStudio {
struct TAdaptor;
struct TFunctionValue;

struct TVariableValue {
	typedef void (*UpdateFunction)(TVariableValue*, f64);
	struct TOutput {
		virtual void operator()(f32, TAdaptor*) const = 0; // _08
		virtual ~TOutput()                            = 0; // _0C
	};

	struct TOutput_none_ : public TOutput {
		virtual void operator()(f32, TAdaptor*) const; // _08
		virtual ~TOutput_none_();                      // _0C
	};

	TVariableValue()
	    : _04(0)
	    , _08(nullptr)
	    , _10(&soOutput_none_)
	{
	}

	static void update_immediate_(TVariableValue*, f64);
	static void update_time_(TVariableValue*, f64);
	static void update_functionValue_(TVariableValue*, f64);

	// unused/inlined:
	void update(f64, TAdaptor*);

	inline void setOutput(const TOutput* output) { _10 = (output != nullptr ? (TOutput*)output : (TOutput*)&soOutput_none_); }

	void setValueImmediate(f32 value)
	{
		_08     = &update_immediate_;
		_04     = 0;
		_0C.val = value;
	}

	void setValueTime(f32 value)
	{
		_08     = &update_time_;
		_04     = 0;
		_0C.val = value;
	}

	void setValueFunctionValue(TFunctionValue* value)
	{
		_08    = &update_functionValue_;
		_04    = 0;
		_0C.fv = value;
	}

	void setValueNone() { _08 = nullptr; }

	f32 getValue() const { return mValue; }

	u8 getValueU8() const
	{
		f32 val = mValue;
		if (val <= 0.0f) {
			return 0.0f;
		} else if (val >= 255.0f) {
			return 255.0f;
		}
		return val;
	}

	void forward(u32 steps)
	{
		if (0xFFFFFFFF - _04 <= steps) {
			_04 = -1;
		} else {
			_04 += steps;
		}
	}

	f32 mValue;         // _00
	u32 _04;            // _04
	UpdateFunction _08; // _08
	union {
		TFunctionValue* fv;
		f32 val;
	} _0C;        // _0C
	TOutput* _10; // _10

	static TOutput_none_ soOutput_none_;
};
} // namespace JStudio

#endif
