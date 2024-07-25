#ifndef _JSTUDIO_FVB_H
#define _JSTUDIO_FVB_H

#include "JSystem/JStudio/object.h"
#include "JSystem/JGadget/binary.h"
#include "types.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JStudio/fvb-data-parse.h"
#include "JSYstem/JStudio/functionvalue.h"

// this is too long to type out every time
using namespace JGadget::binary;

struct TFunctionValue;

namespace JStudio {
namespace fvb {

typedef TFunctionValue_composite::TData (*GetCompositeFunc)(const void*);

struct CompositeOperation {
	TFunctionValue_composite::CompositeFunc mSetFunc; // _00
	GetCompositeFunc mGetFunc;                        // _04
};

struct TControl;

struct TParse : public TParse_header_block {
	TParse(TControl*);

	virtual ~TParse();                                      // _08
	virtual bool parseHeader_next(const void**, u32*, u32); // _0C
	virtual bool parseBlock_next(const void**, u32*, u32);  // _10

	TControl* getControl() const { return mControl; }

	// _00 = VTBL
	TControl* mControl; // _04
};

struct TObject : public object::TObject_ID {
	TObject(const data::TParse_TBlock& block, TFunctionValue* value)
	    : TObject_ID(block.getID(), block.getIDSize())
	    , mBaseFV(value)
	{
	}

	virtual ~TObject()                                                                        = 0; // _08
	virtual void prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control) = 0; // _0C

	void prepare(const data::TParse_TBlock& block, TControl* control);

	TFunctionValue& referFunctionValue() { return *mBaseFV; }

	// _08     = VTBL
	// _00-_08 = TIData
	JGadget::TLinkListNode mNode; //_0C
	TFunctionValue* mBaseFV;      //_14
};

struct TFactory {
	TFactory() { }

	virtual ~TFactory();                                 // _08
	virtual TObject* create(const data::TParse_TBlock&); // _0C
	virtual void destroy(TObject*);                      // _10
};

struct TControl {
	TControl();

	virtual ~TControl(); // _08

	TObject* getObject(const void*, u32);
	TObject* getObject_index(u32);

	// unused/inlined:
	void appendObject(TObject*);
	void removeObject(TObject*);
	void destroyObject(TObject*);
	void destroyObject_all();

	TFactory* getFactory() const { return mFactory; }
	void setFactory(TFactory* factory) { mFactory = factory; }

	// _00 = VTBL
	TFactory* mFactory;                                // _04
	JGadget::TLinkList<TObject, -12> mObjectContainer; // _08
};

struct TObject_composite : public TObject {
	TObject_composite();
	TObject_composite(const void*, u32);           // unused/inlined
	TObject_composite(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_composite() { }                                              // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C

	// _08     = VTBL
	// _00-_18 = TObject
	TFunctionValue_composite mSpecFV; // _1C
};

struct TObject_constant : public TObject {
	TObject_constant();
	TObject_constant(const void*, u32);           // unused/inlined
	TObject_constant(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_constant() { }                                               // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C

	// _08     = VTBL
	// _00-_18 = TObject
	TFunctionValue_constant mSpecFV; // _1C
};

struct TObject_transition : public TObject {
	TObject_transition();
	TObject_transition(const void*, u32);           // unused/inlined
	TObject_transition(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_transition() { }                                             // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C

	// _08     = VTBL
	// _00-_18 = TObject
	TFunctionValue_transition mSpecFV; // _1C
};

struct TObject_list : public TObject {
	struct TData {
		f32 _00;    // _00
		u32 _04;    // _04
		f32 _08[0]; // _08
	};

	TObject_list();
	TObject_list(const void*, u32);           // unused/inlined
	TObject_list(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_list() { }                                                   // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C

	// _08     = VTBL
	// _00-_18 = TObject
	TFunctionValue_list mSpecFV; // _1C
};

struct TObject_list_parameter : public TObject {
	struct TData {
		u32 _00;    // _00
		f32 _04[0]; // _04
	};

	TObject_list_parameter();
	TObject_list_parameter(const void*, u32);           // unused/inlined
	TObject_list_parameter(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_list_parameter() { }                                         // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C

	// _08     = VTBL
	// _00-_18 = TObject
	TFunctionValue_list_parameter mSpecFV; // _1C
};

struct TObject_hermite : public TObject {
	struct TData {
		u32 _00;    // _00
		f32 _04[0]; // _04
	};

	TObject_hermite();
	TObject_hermite(const void*, u32);           // unused/inlined
	TObject_hermite(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_hermite() { }                                                // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C

	// _08     = VTBL
	// _00-_18 = TObject
	TFunctionValue_hermite mSpecFV; // _1C
};

} // namespace fvb
} // namespace JStudio
#endif
