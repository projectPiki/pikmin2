#ifndef _JSTUDIO_TFUNCTIONVALUE_HERMITE_H
#define _JSTUDIO_TFUNCTIONVALUE_HERMITE_H

namespace JStudio {
struct TFunctionValue_hermite {
	virtual ~TFunctionValue_hermite(); // _00
	virtual void getType() const;      // _04
	virtual void getAttributeSet();    // _08
	virtual void initialize();         // _0C
	virtual void prepare();            // _10
	virtual void getValue(double);     // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
