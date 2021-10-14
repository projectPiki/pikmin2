#ifndef _SYS_MATTEXANIMATION_H
#define _SYS_MATTEXANIMATION_H

namespace Sys {
struct MatTexAnimation {
	MatTexAnimation();

	void getAnmBase();
	void onAttachResource(void*);
	void remove();
	void set();
};
} // namespace Sys

#endif
