#ifndef _JSTUDIO_TVARIABLEVALUE_H
#define _JSTUDIO_TVARIABLEVALUE_H

#include "types.h"
namespace JStudio {
struct TAdaptor;

struct TVariableValue {
	typedef void (*UpdateFunction)(TVariableValue*, f64);
	struct TOutput {
		virtual void operator()(float, TAdaptor*) const = 0; // _08
		virtual ~TOutput()                              = 0; // _0C
	};
	struct TOutput_none_ : public TOutput {
		virtual void operator()(float, TAdaptor*) const; // _08
		virtual ~TOutput_none_();                        // _0C
	};

	static void update_immediate_(TVariableValue*, f64);
	static void update_time_(TVariableValue*, f64);
	static void update_functionValue_(TVariableValue*, f64);

	// unused/inlined:
	void update(double, TAdaptor*);

	f32 _00;            // _00
	u32 _04;            // _04
	UpdateFunction _08; // _08
	f32 _0C;            // _0C
	void* _10;          // _10
};
} // namespace JStudio

#endif
