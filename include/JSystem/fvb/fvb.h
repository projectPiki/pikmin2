#ifndef _JSTUDIO_FVB_H
#define _JSTUDIO_FVB_H

#include "JStudio/object.h"
#include "types.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/fvb/fvb-data.h"

struct TFunctionValue;

namespace JStudio {
namespace fvb {
struct TControl;

void getCompositeData_raw_(const void*);
void getCompositeData_index_(const void*);
void getCompositeData_parameter_(const void*);
void getCompositeData_add_(const void*);
void getCompositeData_subtract_(const void*);
void getCompositeData_multiply_(const void*);

struct TParse {
	TParse(TControl*);

	virtual ~TParse();                                      // _08
	virtual bool parseHeader_next(const void**, u32*, u32); // _0C
	virtual bool parseBlock_next(const void**, u32*, u32);  // _10

	TControl* getControl() const { return pControl_; }
	TControl* pControl_;
};

struct TObject : object::TObject_ID {
	TObject(const data::TParse_TBlock& block);
	TObject(const void* id, u32 id_size, TFunctionValue* value);

	virtual ~TObject()                                                                        = 0; // _08
	virtual void prepare_data_(const data::TParse_TParagraph::TData& data, TControl* control) = 0; // _0C

	void prepare(const data::TParse_TBlock& block, TControl* control);

	// VTBL _08
	JGadget::TLinkListNode mNode; //_0C
	TFunctionValue* pfv;          //_14
};

struct TFactory {
	virtual ~TFactory();                                 // _08
	virtual TObject* create(const data::TParse_TBlock&); // _0C
	virtual void destroy(TObject*);                      // _10
};

struct TObject_composite {
	TObject_composite();
	TObject_composite(const void*, u32);           // unused/inlined
	TObject_composite(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_composite();                                                 // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};

struct TObject_constant {
	TObject_constant();
	TObject_constant(const void*, u32);           // unused/inlined
	TObject_constant(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_constant();                                                  // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};

struct TObject_transition {
	TObject_transition();
	TObject_transition(const void*, u32);           // unused/inlined
	TObject_transition(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_transition();                                                // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};

struct TObject_list {
	TObject_list();
	TObject_list(const void*, u32);           // unused/inlined
	TObject_list(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_list();                                                      // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};

struct TObject_list_parameter {
	TObject_list_parameter();
	TObject_list_parameter(const void*, u32);           // unused/inlined
	TObject_list_parameter(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_list_parameter();                                            // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};

struct TObject_hermite {
	TObject_hermite();
	TObject_hermite(const void*, u32);           // unused/inlined
	TObject_hermite(const data::TParse_TBlock&); // unused/inlined

	virtual ~TObject_hermite();                                                   // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
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

	/** @fabricated */
	TFactory* getFactory() const { return pFactory; }

	TFactory* pFactory;
	JGadget::TNodeLinkList ocObject_;
};

} // namespace fvb
} // namespace JStudio
#endif
