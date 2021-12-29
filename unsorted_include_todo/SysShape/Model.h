#ifndef _SYSSHAPE_MODEL_H
#define _SYSSHAPE_MODEL_H

/*
    __vt__Q28SysShape5Model:
    .4byte 0
    .4byte 0
    .4byte getMatrix__Q28SysShape5ModelFi
    .4byte isModel__Q28SysShape5ModelFv
    .4byte isVisible__Q28SysShape5ModelFRQ23Sys6Sphere
    .4byte isVisible__Q28SysShape5ModelFv
    .4byte hide__Q28SysShape5ModelFv
    .4byte show__Q28SysShape5ModelFv
    .4byte hidePackets__Q28SysShape5ModelFv
    .4byte showPackets__Q28SysShape5ModelFv
    .4byte jointVisible__Q28SysShape5ModelFbi
    .4byte jointVisible__Q28SysShape5ModelFbPQ28SysShape5Joint
    .4byte 0
*/

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
