#ifndef _JSTUDIO_TVARIABLEVALUE_TOUTPUT_NONE__H
#define _JSTUDIO_TVARIABLEVALUE_TOUTPUT_NONE__H

namespace JStudio {
namespace TVariableValue {
	struct TOutput_none_ {
		virtual void operator()(float, TAdaptor*) const; // _00
		virtual ~TOutput_none_();                        // _04

		// _00 VTBL
	};
} // namespace TVariableValue
} // namespace JStudio

#endif
