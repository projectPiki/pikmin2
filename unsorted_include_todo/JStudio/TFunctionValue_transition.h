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
	virtual ~TFunctionValue_transition(); // _08 (weak)
	virtual void getType() const;         // _0C
	virtual void getAttributeSet();       // _10
	virtual void initialize();            // _14
	virtual void prepare();               // _18
	virtual void getValue(double);        // _1C

	TFunctionValue_transition();
};
} // namespace JStudio

#endif
