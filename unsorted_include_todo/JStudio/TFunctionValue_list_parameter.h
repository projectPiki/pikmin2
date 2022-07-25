#ifndef _JSTUDIO_TFUNCTIONVALUE_LIST_PARAMETER_H
#define _JSTUDIO_TFUNCTIONVALUE_LIST_PARAMETER_H

/*
    __vt__Q27JStudio29TFunctionValue_list_parameter:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio29TFunctionValue_list_parameterFv
    .4byte getType__Q27JStudio29TFunctionValue_list_parameterCFv
    .4byte getAttributeSet__Q27JStudio29TFunctionValue_list_parameterFv
    .4byte initialize__Q27JStudio29TFunctionValue_list_parameterFv
    .4byte prepare__Q27JStudio29TFunctionValue_list_parameterFv
    .4byte getValue__Q27JStudio29TFunctionValue_list_parameterFd
*/

namespace JStudio {
struct TFunctionValue_list_parameter {
	virtual ~TFunctionValue_list_parameter(); // _08 (weak)
	virtual void getType() const;             // _0C
	virtual void getAttributeSet();           // _10
	virtual void initialize();                // _14
	virtual void prepare();                   // _18
	virtual void getValue(double);            // _1C

	TFunctionValue_list_parameter();
	void data_set(const float*, unsigned long);
	void update_INTERPOLATE_NONE_(const JStudio::TFunctionValue_list_parameter&, double);
	void update_INTERPOLATE_LINEAR_(const JStudio::TFunctionValue_list_parameter&, double);
	void update_INTERPOLATE_PLATEAU_(const JStudio::TFunctionValue_list_parameter&, double);
	void update_INTERPOLATE_BSPLINE_dataMore3_(const JStudio::TFunctionValue_list_parameter&, double);
};
} // namespace JStudio

#endif
