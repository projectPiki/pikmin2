#ifndef _SYS_MATTEVREGANIMATION_H
#define _SYS_MATTEVREGANIMATION_H

namespace Sys {
struct MatTevRegAnimation {
	virtual void onAttachResource(void*); // _00
	virtual void getAnmBase();            // _04
	virtual void set();                   // _08
	virtual void remove();                // _0C

	// _00 VTBL
};
} // namespace Sys

#endif
