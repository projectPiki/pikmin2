#ifndef _JSTUDIO_FVB_TOBJECT_LIST_PARAMETER_H
#define _JSTUDIO_FVB_TOBJECT_LIST_PARAMETER_H

/*
    __vt__Q37JStudio3fvb22TObject_list_parameter:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb22TObject_list_parameterFv
    .4byte prepare_data___Q37JStudio3fvb22TObject_list_parameterFRCQ57JStudio3fvb4data17TParse_TParagraph5TDataPQ37JStudio3fvb8TControl
*/

namespace JStudio {
namespace fvb {
struct TObject_list_parameter {
	virtual ~TObject_list_parameter();                                            // _08 (inline)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};
} // namespace fvb
} // namespace JStudio

#endif
