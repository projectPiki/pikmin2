#ifndef _JSYSTEM_FVB_TPARSE_H
#define _JSYSTEM_FVB_TPARSE_H

#include "types.h"

namespace JStudio {
namespace fvb {
namespace data {
struct TParse_TParagraph {
	struct TData {
		u32* _00;
		u32* _04;
		u16* _08;
		u16* _0C;
	};

	void getData(TData*) const;
};

// TODO: Define TParse_TBlock
struct TParse_TBlock {
};
} // namespace data

struct TControl {
	virtual ~TControl(); // _00

	// _00 VTBL
};

struct TObject {
	virtual ~TObject() = 0; // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TObject_composite : public TObject {
	virtual ~TObject_composite(); // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TObject_transition : public TObject {
	virtual ~TObject_transition(); // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TObject_list_parameter : public TObject {
	virtual ~TObject_list_parameter(); // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TObject_list : public TObject {
	virtual ~TObject_list(); // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TObject_constant : public TObject {
	virtual ~TObject_constant(); // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TObject_hermite : public TObject {
	virtual ~TObject_hermite(); // _00
	virtual void prepare_data_(const data::TParse_TParagraph::TData&,
	                           TControl*); // _04

	// _00 VTBL
};

struct TFactory {
	virtual ~TFactory();                             // _00
	virtual void create(const data::TParse_TBlock&); // _04
	virtual void destroy(TObject*);                  // _08

	// _00 VTBL
};

struct TParse {
	TParse(TControl*);
	virtual ~TParse(); // _00
	virtual void parseHeader_next(const void**, unsigned long*,
	                              unsigned long); // _04
	virtual void parseBlock_next(const void**, unsigned long*,
	                             unsigned long); // _08
};
} // namespace fvb
} // namespace JStudio

#endif
