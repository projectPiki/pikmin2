#ifndef _JSTUDIO_TFUNCTIONVALUE_LIST_PARAMETER_H
#define _JSTUDIO_TFUNCTIONVALUE_LIST_PARAMETER_H

namespace JStudio {
struct TFunctionValue_list_parameter {
	virtual ~TFunctionValue_list_parameter(); // _00
	virtual void getType() const;             // _04
	virtual void getAttributeSet();           // _08
	virtual void initialize();                // _0C
	virtual void prepare();                   // _10
	virtual void getValue(double);            // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
