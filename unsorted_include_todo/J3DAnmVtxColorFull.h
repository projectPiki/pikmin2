#ifndef _J3DANMVTXCOLORFULL_H
#define _J3DANMVTXCOLORFULL_H

/*
    __vt__18J3DAnmVtxColorFull:
    .4byte 0
    .4byte 0
    .4byte __dt__18J3DAnmVtxColorFullFv
    .4byte getKind__18J3DAnmVtxColorFullCFv
    .4byte getColor__18J3DAnmVtxColorFullCFUcUsP8_GXColor
*/

struct J3DAnmVtxColorFull {
	virtual ~J3DAnmVtxColorFull();                                         // _08 (inline)
	virtual void getKind() const;                                          // _0C (inline)
	virtual void getColor(unsigned char, unsigned short, _GXColor*) const; // _10
};

#endif
