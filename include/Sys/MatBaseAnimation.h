#ifndef _SYS_MATBASEANIMATION_H
#define _SYS_MATBASEANIMATION_H

namespace Sys {
struct MatBaseAnimation {
	void attachResource(void*, struct J3DModelData*);
	void getFrameMax();
};
} // namespace Sys

#endif
