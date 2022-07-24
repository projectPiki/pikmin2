#ifndef _JSTUDIO_FVB_TCONTROL_H
#define _JSTUDIO_FVB_TCONTROL_H

/*
    __vt__Q37JStudio3fvb8TControl:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb8TControlFv
*/

namespace JStudio {
namespace fvb {
struct TControl {
	virtual ~TControl(); // _08

	TControl();
	void getObject(const void*, unsigned long);
	void getObject_index(unsigned long);
};
} // namespace fvb
} // namespace JStudio

#endif
