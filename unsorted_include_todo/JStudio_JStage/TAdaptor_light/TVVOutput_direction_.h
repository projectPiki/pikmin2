#ifndef _JSTUDIO_JSTAGE_TADAPTOR_LIGHT_TVVOUTPUT_DIRECTION__H
#define _JSTUDIO_JSTAGE_TADAPTOR_LIGHT_TVVOUTPUT_DIRECTION__H

namespace JStudio_JStage {
namespace TAdaptor_light {
	struct TVVOutput_direction_ {
		virtual void operator()(float, JStudio::TAdaptor*) const; // _00
		virtual ~TVVOutput_direction_();                          // _04

		// _00 VTBL
	};
} // namespace TAdaptor_light
} // namespace JStudio_JStage

#endif
