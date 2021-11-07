#ifndef _JSYSTEM_TFUNCTIONVALUE_H
#define _JSYSTEM_TFUNCTIONVALUE_H

#include "types.h"

namespace JStudio {
struct TFunctionValue {
	virtual ~TFunctionValue()      = 0; // _00
	virtual void getType() const   = 0; // _04
	virtual void getAttributeSet() = 0; // _08
	virtual void initialize()      = 0; // _0C
	virtual void prepare()         = 0; // _10
	virtual void getValue(double)  = 0; // _14

	// _00 VTBL
};

struct TFunctionValue_composite : public TFunctionValue {
	virtual ~TFunctionValue_composite(); // _00
	virtual void getType() const;        // _04
	virtual void getAttributeSet();      // _08
	virtual void initialize();           // _0C
	virtual void prepare();              // _10
	virtual void getValue(double);       // _14

	// _00 VTBL
};

struct TFunctionValue_constant : public TFunctionValue {
	virtual ~TFunctionValue_constant(); // _00
	virtual void getType() const;       // _04
	virtual void getAttributeSet();     // _08
	virtual void initialize();          // _0C
	virtual void prepare();             // _10
	virtual void getValue(double);      // _14

	// _00 VTBL
};

struct TFunctionValue_transition : public TFunctionValue {
	virtual ~TFunctionValue_transition(); // _00
	virtual void getType() const;         // _04
	virtual void getAttributeSet();       // _08
	virtual void initialize();            // _0C
	virtual void prepare();               // _10
	virtual void getValue(double);        // _14

	// _00 VTBL
};

struct TFunctionValue_list : public TFunctionValue {
	virtual ~TFunctionValue_list(); // _00
	virtual void getType() const;   // _04
	virtual void getAttributeSet(); // _08
	virtual void initialize();      // _0C
	virtual void prepare();         // _10
	virtual void getValue(double);  // _14

	// _00 VTBL
};

struct TFunctionValue_list_parameter : public TFunctionValue {
	virtual ~TFunctionValue_list_parameter(); // _00
	virtual void getType() const;             // _04
	virtual void getAttributeSet();           // _08
	virtual void initialize();                // _0C
	virtual void prepare();                   // _10
	virtual void getValue(double);            // _14

	// _00 VTBL
};

struct TFunctionValue_hermite : public TFunctionValue {
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
