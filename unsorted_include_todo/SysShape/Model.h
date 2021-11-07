#ifndef _SYSSHAPE_MODEL_H
#define _SYSSHAPE_MODEL_H

namespace SysShape {
struct Model {
	virtual void getMatrix(int);             // _00
	virtual void isModel();                  // _04
	virtual void isVisible(Sys::Sphere&);    // _08
	virtual void isVisible();                // _0C
	virtual void hide();                     // _10
	virtual void show();                     // _14
	virtual void hidePackets();              // _18
	virtual void showPackets();              // _1C
	virtual void jointVisible(bool, int);    // _20
	virtual void jointVisible(bool, Joint*); // _24
	virtual void _28() = 0;                  // _28

	// _00 VTBL
};
} // namespace SysShape

#endif
