#ifndef _JSTUDIO_TFUNCTIONVALUE_HERMITE_H
#define _JSTUDIO_TFUNCTIONVALUE_HERMITE_H

/*
    __vt__Q27JStudio22TFunctionValue_hermite:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio22TFunctionValue_hermiteFv
    .4byte getType__Q27JStudio22TFunctionValue_hermiteCFv
    .4byte getAttributeSet__Q27JStudio22TFunctionValue_hermiteFv
    .4byte initialize__Q27JStudio22TFunctionValue_hermiteFv
    .4byte prepare__Q27JStudio22TFunctionValue_hermiteFv
    .4byte getValue__Q27JStudio22TFunctionValue_hermiteFd
*/

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
