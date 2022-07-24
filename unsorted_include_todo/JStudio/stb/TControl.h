#ifndef _JSTUDIO_STB_TCONTROL_H
#define _JSTUDIO_STB_TCONTROL_H

/*
    __vt__Q37JStudio3stb8TControl:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3stb8TControlFv
*/

namespace JStudio {
namespace stb {
struct TControl {
	virtual ~TControl(); // _08

	TControl();
	void getObject(const void*, unsigned long);
	void forward(unsigned long);
};
} // namespace stb
} // namespace JStudio

#endif
