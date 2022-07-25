#ifndef _JSTUDIO_FVB_TOBJECT_TRANSITION_H
#define _JSTUDIO_FVB_TOBJECT_TRANSITION_H

/*
    __vt__Q37JStudio3fvb18TObject_transition:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb18TObject_transitionFv
    .4byte prepare_data___Q37JStudio3fvb18TObject_transitionFRCQ57JStudio3fvb4data17TParse_TParagraph5TDataPQ37JStudio3fvb8TControl
*/

namespace JStudio {
namespace fvb {
struct TObject_transition {
	virtual ~TObject_transition();                                                // _08 (weak)
	virtual void prepare_data_(const data::TParse_TParagraph::TData&, TControl*); // _0C
};
} // namespace fvb
} // namespace JStudio

#endif
