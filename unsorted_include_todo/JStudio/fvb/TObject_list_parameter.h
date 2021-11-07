#ifndef _JSTUDIO_FVB_TOBJECT_LIST_PARAMETER_H
#define _JSTUDIO_FVB_TOBJECT_LIST_PARAMETER_H

namespace JStudio {
namespace fvb {
	struct TObject_list_parameter {
		virtual ~TObject_list_parameter(); // _00
		virtual void prepare_data_(const data::TParse_TParagraph::TData&,
		                           TControl*); // _04

		// _00 VTBL
	};
} // namespace fvb
} // namespace JStudio

#endif
