#ifndef JSTUDIO_FUNCTIONVALUE_H
#define JSTUDIO_FUNCTIONVALUE_H

#include "Dolphin/vec.h"
#include "JSystem/JGadget/vector.h"
#include "types.h"

namespace JStudio {
struct TFunctionValue;

namespace functionvalue {
void extrapolateParameter_raw(f64, f64);
void extrapolateParameter_repeat(f64, f64);
void extrapolateParameter_clamp(f64, f64);
void extrapolateParameter_turn(f64, f64);

// unused/inlined:
void interpolateValue_hermite(f64, f64, f64, f64, f64, f64, f64);
void interpolateValue_BSpline_uniform(f64, f64, f64, f64, f64);
void interpolateValue_BSpline_uniform_first1(f64, f64, f64, f64, f64);
void interpolateValue_BSpline_uniform_first2(f64, f64, f64, f64, f64);
void interpolateValue_BSpline_uniform_last2(f64, f64, f64, f64, f64);
void interpolateValue_BSpline_uniform_last1(f64, f64, f64, f64, f64);
void interpolateValue_BSpline_nonuniform(f64, const f64*, const f64*);
} // namespace functionvalue

struct TFunctionValueAttribute_range {
	TFunctionValueAttribute_range(); // unused/inlined

	void range_set(f64, f64);

	// unused/inlined:
	void range_initialize();
	void range_prepare();
	void range_getParameter(f64, f64, f64) const;
};

struct TFunctionValueAttribute_refer {
	~TFunctionValueAttribute_refer(); // unused/inlined

	// unused/inlined
	void refer_initialize();
	bool refer_isReferring(const TFunctionValue*) const;
};

struct TFunctionValueAttributeSet_const {
	TFunctionValueAttributeSet_const(const TFunctionValueAttributeSet_const&); // unused/inlined

	// unused/inlined:
	TFunctionValueAttribute_refer* refer_get() const;
};

struct TFunctionValue {
	TFunctionValue(); // unused/inlined

	// ~TFunctionValue();

	// virtual ~TFunctionValue()      = 0; // _08
	virtual ~TFunctionValue();          // _08
	virtual int getType() const    = 0; // _0C
	virtual void getAttributeSet() = 0; // _10
	virtual void initialize()      = 0; // _14
	virtual void prepare()         = 0; // _18
	virtual void getValue(f64)     = 0; // _1C

	void toFunction_outside(int);

	// unused/inlined:
	void toString_type(int);
	void toValue_type(const char*);
	void toString_progress(int);
	void toValue_progress(const char*);
	void toString_adjust(int);
	void toValue_adjust(const char*);
	void toString_outside(int);
	void toValue_outside(const char*);
	void toString_interpolate(int);
	void toValue_interpolate(const char*);
	TFunctionValueAttributeSet_const* getAttributeSet() const;
};

struct TFunctionValue_composite : public TFunctionValue {
	struct TData {
	};

	TFunctionValue_composite();

	virtual ~TFunctionValue_composite(); // _08 (weak)
	virtual int getType() const;         // _0C
	virtual void getAttributeSet();      // _10
	virtual void initialize();           // _14
	virtual void prepare();              // _18
	virtual void getValue(f64);          // _1C

	void composite_raw(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&, f64);
	void composite_index(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&, f64);
	void composite_parameter(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                         f64);
	void composite_add(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&, f64);
	void composite_subtract(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                        f64);
	void composite_multiply(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&,
	                        f64);
	void composite_divide(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&, const JStudio::TFunctionValue_composite::TData&, f64);
};

struct TFunctionValue_constant : public TFunctionValue {
	TFunctionValue_constant();

	virtual ~TFunctionValue_constant(); // _08 (weak)
	virtual int getType() const;        // _0C
	virtual void getAttributeSet();     // _10
	virtual void initialize();          // _14
	virtual void prepare();             // _18
	virtual void getValue(f64);         // _1C
};

struct TFunctionValue_hermite : public TFunctionValue {
	struct TIterator_data_ {
	};

	TFunctionValue_hermite();

	virtual ~TFunctionValue_hermite(); // _08 (weak)
	virtual int getType() const;       // _0C
	virtual void getAttributeSet();    // _10
	virtual void initialize();         // _14
	virtual void prepare();            // _18
	virtual void getValue(f64);        // _1C

	void data_set(const f32*, u32, u32);
};

struct TFunctionValue_list_parameter : public TFunctionValue {
	struct TIterator_data_ {
	};

	TFunctionValue_list_parameter();

	virtual ~TFunctionValue_list_parameter(); // _08 (weak)
	virtual int getType() const;              // _0C
	virtual void getAttributeSet();           // _10
	virtual void initialize();                // _14
	virtual void prepare();                   // _18
	virtual void getValue(f64);               // _1C

	void data_set(const f32*, u32);
	void update_INTERPOLATE_NONE_(const JStudio::TFunctionValue_list_parameter&, f64);
	void update_INTERPOLATE_LINEAR_(const JStudio::TFunctionValue_list_parameter&, f64);
	void update_INTERPOLATE_PLATEAU_(const JStudio::TFunctionValue_list_parameter&, f64);
	void update_INTERPOLATE_BSPLINE_dataMore3_(const JStudio::TFunctionValue_list_parameter&, f64);

	// unused/inlined:
	void update_INTERPOLATE_CONTINUE_(const JStudio::TFunctionValue_list_parameter&, f64);
	void update_INTERPOLATE_AVERAGE_(const JStudio::TFunctionValue_list_parameter&, f64);
	void update_INTERPOLATE_SMOOTH_(const JStudio::TFunctionValue_list_parameter&, f64);
};

struct TFunctionValue_list : public TFunctionValue {
	struct TIndexData_ {
	};

	TFunctionValue_list();

	virtual ~TFunctionValue_list(); // _08 (weak)
	virtual int getType() const;    // _0C
	virtual void getAttributeSet(); // _10
	virtual void initialize();      // _14
	virtual void prepare();         // _18
	virtual void getValue(f64);     // _1C

	void update_INTERPOLATE_NONE_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);
	void update_INTERPOLATE_LINEAR_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);
	void update_INTERPOLATE_PLATEAU_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);
	void update_INTERPOLATE_BSPLINE_dataMore3_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);

	// unused/inlined:
	void update_INTERPOLATE_CONTINUE_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);
	void update_INTERPOLATE_AVERAGE_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);
	void update_INTERPOLATE_SMOOTH_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&);
};

struct TFunctionValue_transition : public TFunctionValue {
	TFunctionValue_transition();

	virtual ~TFunctionValue_transition(); // _08 (weak)
	virtual int getType() const;          // _0C
	virtual void getAttributeSet();       // _10
	virtual void initialize();            // _14
	virtual void prepare();               // _18
	virtual void getValue(f64);           // _1C
};
} // namespace JStudio

#endif
