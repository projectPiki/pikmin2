#ifndef _JSTUDIO_FVB_TOBJECT_COMPOSITE_H
#define _JSTUDIO_FVB_TOBJECT_COMPOSITE_H

/*
    __vt__Q37JStudio3fvb17TObject_composite:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb17TObject_compositeFv
    .4byte
   prepare_data___Q37JStudio3fvb17TObject_compositeFRCQ57JStudio3fvb4data17TParse_TParagraph5TDataPQ37JStudio3fvb8TControl
*/

namespace JStudio {
namespace fvb {
	struct TObject_composite {
		virtual ~TObject_composite(); // _00
		virtual void prepare_data_(const data::TParse_TParagraph::TData&,
		                           TControl*); // _04

		// _00 VTBL
	};
} // namespace fvb
} // namespace JStudio

#endif
