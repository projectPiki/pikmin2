#ifndef _SYS_MATTEVREGANIMATION_H
#define _SYS_MATTEVREGANIMATION_H

namespace Sys {
struct MatTevRegAnimation {
	MatTevRegAnimation();

	void getAnmBase();
	void onAttachResource(void*);
	void remove();
	void set();
};
} // namespace Sys

#endif