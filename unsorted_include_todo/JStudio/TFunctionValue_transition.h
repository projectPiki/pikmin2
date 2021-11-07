#ifndef _JSTUDIO_TFUNCTIONVALUE_TRANSITION_H
#define _JSTUDIO_TFUNCTIONVALUE_TRANSITION_H

namespace JStudio {
struct TFunctionValue_transition {
	virtual ~TFunctionValue_transition(); // _00
	virtual void getType() const;         // _04
	virtual void getAttributeSet();       // _08
	virtual void initialize();            // _0C
	virtual void prepare();               // _10
	virtual void getValue(double);        // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
