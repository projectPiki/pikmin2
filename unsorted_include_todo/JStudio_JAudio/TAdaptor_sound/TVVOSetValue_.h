#ifndef _JSTUDIO_JAUDIO_TADAPTOR_SOUND_TVVOSETVALUE__H
#define _JSTUDIO_JAUDIO_TADAPTOR_SOUND_TVVOSETVALUE__H

namespace JStudio_JAudio {
namespace TAdaptor_sound {
	struct TVVOSetValue_ {
		virtual void operator()(float, JStudio::TAdaptor*) const; // _00
		virtual ~TVVOSetValue_();                                 // _04

		// _00 VTBL
	};
} // namespace TAdaptor_sound
} // namespace JStudio_JAudio

#endif
