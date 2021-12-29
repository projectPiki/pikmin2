#ifndef _JSTUDIO_TFUNCTIONVALUE_COMPOSITE_H
#define _JSTUDIO_TFUNCTIONVALUE_COMPOSITE_H

/*
    __vt__Q27JStudio24TFunctionValue_composite:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio24TFunctionValue_compositeFv
    .4byte getType__Q27JStudio24TFunctionValue_compositeCFv
    .4byte getAttributeSet__Q27JStudio24TFunctionValue_compositeFv
    .4byte initialize__Q27JStudio24TFunctionValue_compositeFv
    .4byte prepare__Q27JStudio24TFunctionValue_compositeFv
    .4byte getValue__Q27JStudio24TFunctionValue_compositeFd
*/

namespace JStudio {
struct TFunctionValue_composite {
	virtual ~TFunctionValue_composite(); // _00
	virtual void getType() const;        // _04
	virtual void getAttributeSet();      // _08
	virtual void initialize();           // _0C
	virtual void prepare();              // _10
	virtual void getValue(double);       // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
