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
	virtual ~TFunctionValue_composite(); // _08 (weak)
	virtual void getType() const;        // _0C
	virtual void getAttributeSet();      // _10
	virtual void initialize();           // _14
	virtual void prepare();              // _18
	virtual void getValue(double);       // _1C

	TFunctionValue_composite();
	void composite_raw(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&, double);
	void composite_index(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                     double);
	void composite_parameter(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                         double);
	void composite_add(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&, double);
	void composite_subtract(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                        double);
	void composite_multiply(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                        double);
	void composite_divide(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                      double);
};
} // namespace JStudio

#endif
