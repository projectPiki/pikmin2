#ifndef _JSTUDIO_FVB_TOBJECT_LIST_H
#define _JSTUDIO_FVB_TOBJECT_LIST_H

/*
    __vt__Q37JStudio3fvb12TObject_list:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb12TObject_listFv
    .4byte prepare_data___Q37JStudio3fvb12TObject_listFRCQ57JStudio3fvb4data17TParse_TParagraph5TDataPQ37JStudio3fvb8TControl
*/

namespace JStudio {
namespace fvb {
struct TObject_list {
	virtual ~TObject_list();                                                      // _08 (inline)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};
} // namespace fvb
} // namespace JStudio

#endif
