#ifndef _J3DANMVTXCOLORKEY_H
#define _J3DANMVTXCOLORKEY_H

/*
    __vt__17J3DAnmVtxColorKey:
    .4byte 0
    .4byte 0
    .4byte __dt__17J3DAnmVtxColorKeyFv
    .4byte getKind__17J3DAnmVtxColorKeyCFv
    .4byte getColor__17J3DAnmVtxColorKeyCFUcUsP8_GXColor
*/

struct J3DAnmVtxColorKey {
	virtual ~J3DAnmVtxColorKey();                                          // _08 (weak)
	virtual void getKind() const;                                          // _0C (weak)
	virtual void getColor(unsigned char, unsigned short, _GXColor*) const; // _10
};

#endif
