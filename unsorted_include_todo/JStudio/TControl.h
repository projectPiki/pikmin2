#ifndef _JSTUDIO_TCONTROL_H
#define _JSTUDIO_TCONTROL_H

/*
    __vt__Q27JStudio8TControl:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio8TControlFv
*/

namespace JStudio {
struct TControl {
	virtual ~TControl(); // _08

	TControl();
	void transformOnSet_setOrigin(const Vec&, float);
	void transformOnGet_setOrigin(const Vec&, float);
};
} // namespace JStudio

#endif
