#ifndef _JSTUDIO_TVARIABLEVALUE_H
#define _JSTUDIO_TVARIABLEVALUE_H

#include "types.h"
namespace JStudio {
struct TAdaptor;

struct TVariableValue {
	typedef void (*UpdateFunction)(TVariableValue*, f64);
	struct TOutput {
		// TODO: This still has a non-inline dtor, apparently?
		virtual void operator()(float, TAdaptor*) const = 0; // _08
		virtual ~TOutput()                              = 0; // _0C
	};
	struct TOutput_none_ : public TOutput {
		virtual void operator()(float, TAdaptor*) const; // _08
		virtual ~TOutput_none_();                        // _0C
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
	void update(double, TAdaptor*);

	/**
	 * @fabricated
	 * In several places that this is used, it wouldn't have made sense to do a nullptr check.
	 */
	inline void setOutput(const TOutput* output)
	{
		_10 = (output != nullptr ? (JStudio::TVariableValue::TOutput*)output
		                         : (JStudio::TVariableValue::TOutput*)&JStudio::TVariableValue::soOutput_none_);
	}
	/** @fabricated */
	inline void set(UpdateFunction p1, u32 p2, f32 p3)
	{
		_08 = p1;
		_04 = p2;
		_0C = p3;
	}

	f32 _00;            // _00
	u32 _04;            // _04
	UpdateFunction _08; // _08
	f32 _0C;            // _0C
	TOutput* _10;       // _10

	static TOutput_none_ soOutput_none_;
};
} // namespace JStudio

#endif
