#ifndef _JSTUDIO_TFUNCTIONVALUE_TRANSITION_H
#define _JSTUDIO_TFUNCTIONVALUE_TRANSITION_H

/*
    __vt__Q27JStudio25TFunctionValue_transition:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio25TFunctionValue_transitionFv
    .4byte getType__Q27JStudio25TFunctionValue_transitionCFv
    .4byte getAttributeSet__Q27JStudio25TFunctionValue_transitionFv
    .4byte initialize__Q27JStudio25TFunctionValue_transitionFv
    .4byte prepare__Q27JStudio25TFunctionValue_transitionFv
    .4byte getValue__Q27JStudio25TFunctionValue_transitionFd
*/

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
