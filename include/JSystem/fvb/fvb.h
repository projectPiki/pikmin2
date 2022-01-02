#ifndef _JSTUDIO_FVB_H
#define _JSTUDIO_FVB_H

#include "types.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/fvb/fvb-data.h"

namespace JStudio::fvb {

void getCompositeData_raw_(const void*);
void getCompositeData_index_(const void*);
void getCompositeData_parameter_(const void*);
void getCompositeData_add_(const void*);
void getCompositeData_subtract_(const void*);
void getCompositeData_multiply_(const void*);

struct TParse {
	TParse(TControl*);
	virtual ~TParse();
	virtual bool parseHeader_next(void const**, u32*, u32);
	virtual bool parseBlock_next(void const**, u32*, u32);

	TControl* getControl() const { return pControl_; }
	TControl* pControl_;
};

struct TObject {
	TObject(const data::TParse_TBlock& block);
	TObject(void const* id, u32 id_size, TFunctionValue* value);

	virtual ~TObject() = 0;

	virtual void prepare_data_(const data::TParse_TParagraph::TData& data,
	                           TControl* control)
	    = 0;

	void prepare(const data::TParse_TBlock& block, TControl* control);

	int _00;
	int _04;
	JGadget::TLinkListNode mNode; //_0c
	TFunctionValue* pfv;          //_10
};

struct TFactory {
	virtual ~TFactory();

	virtual TObject* create(data::TParse_TBlock const&);
	virtual void destroy(TObject*);
};

struct TObject_composite {
	TObject_composite();

	virtual ~TObject_composite();
	void prepare_data_(const data::TParse_TParagraph::TData&, TControl*);
};

struct TObject_constant {
	TObject_constant();

	virtual ~TObject_constant();
	void prepare_data_(const data::TParse_TParagraph::TData&, TControl*);
};

struct TObject_transition {
	TObject_transition();

	virtual ~TObject_transition();
	void prepare_data_(const data::TParse_TParagraph::TData&, TControl*);
};

struct TObject_list {
	TObject_list();

	virtual ~TObject_list();
	void prepare_data_(const data::TParse_TParagraph::TData&, TControl*);
};

struct TObject_list_parameter {
	TObject_list_parameter();

	virtual ~TObject_list_parameter();
	void prepare_data_(const data::TParse_TParagraph::TData&, TControl*);
};

struct TObject_hermite {
	TObject_hermite();

	virtual ~TObject_hermite();
	void prepare_data_(const data::TParse_TParagraph::TData&, TControl*);
};

struct TControl {
	TControl();
	virtual ~TControl();

	void appendObject(TObject*);
	void removeObject(TObject*);
	void destroyObject(TObject*);
	void destroyObject_all();
	TObject* getObject(void const*, ulong);
	TObject* getObject_index(u32);

	TFactory* getFactory() const { return pFactory; }

	TFactory* pFactory;
	JGadget::TNodeLinkList ocObject_;
};

} // namespace JStudio::fvb
#endif
