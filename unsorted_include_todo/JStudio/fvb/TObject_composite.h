#ifndef _JSTUDIO_FVB_TOBJECT_COMPOSITE_H
#define _JSTUDIO_FVB_TOBJECT_COMPOSITE_H

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
