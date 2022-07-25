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
	virtual ~TFunctionValue_hermite(); // _08 (weak)
	virtual void getType() const;      // _0C
	virtual void getAttributeSet();    // _10
	virtual void initialize();         // _14
	virtual void prepare();            // _18
	virtual void getValue(double);     // _1C

	TFunctionValue_hermite();
	void data_set(const float*, unsigned long, unsigned long);
};
} // namespace JStudio

#endif
