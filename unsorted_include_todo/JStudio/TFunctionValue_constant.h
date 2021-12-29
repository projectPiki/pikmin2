#ifndef _JSTUDIO_TFUNCTIONVALUE_CONSTANT_H
#define _JSTUDIO_TFUNCTIONVALUE_CONSTANT_H

/*
    __vt__Q27JStudio23TFunctionValue_constant:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio23TFunctionValue_constantFv
    .4byte getType__Q27JStudio23TFunctionValue_constantCFv
    .4byte getAttributeSet__Q27JStudio23TFunctionValue_constantFv
    .4byte initialize__Q27JStudio23TFunctionValue_constantFv
    .4byte prepare__Q27JStudio23TFunctionValue_constantFv
    .4byte getValue__Q27JStudio23TFunctionValue_constantFd
*/

namespace JStudio {
struct TFunctionValue_constant {
	virtual ~TFunctionValue_constant(); // _00
	virtual void getType() const;       // _04
	virtual void getAttributeSet();     // _08
	virtual void initialize();          // _0C
	virtual void prepare();             // _10
	virtual void getValue(double);      // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
