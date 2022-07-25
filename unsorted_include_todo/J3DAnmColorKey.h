#ifndef _J3DANMCOLORKEY_H
#define _J3DANMCOLORKEY_H

/*
    __vt__14J3DAnmColorKey:
    .4byte 0
    .4byte 0
    .4byte __dt__14J3DAnmColorKeyFv
    .4byte getKind__14J3DAnmColorKeyCFv
    .4byte getColor__14J3DAnmColorKeyCFUsP8_GXColor
*/

struct J3DAnmColorKey {
	virtual ~J3DAnmColorKey();                              // _08 (weak)
	virtual void getKind() const;                           // _0C (weak)
	virtual void getColor(unsigned short, _GXColor*) const; // _10
};

#endif
