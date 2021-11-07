#ifndef _JSTUDIO_FVB_TOBJECT_LIST_H
#define _JSTUDIO_FVB_TOBJECT_LIST_H

namespace JStudio {
namespace fvb {
	struct TObject_list {
		virtual ~TObject_list(); // _00
		virtual void prepare_data_(const data::TParse_TParagraph::TData&,
		                           TControl*); // _04

		// _00 VTBL
	};
} // namespace fvb
} // namespace JStudio

#endif
