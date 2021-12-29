#ifndef _J3DSHAPEPACKET_H
#define _J3DSHAPEPACKET_H

/*
    __vt__14J3DShapePacket:
    .4byte 0
    .4byte 0
    .4byte entry__9J3DPacketFP13J3DDrawBuffer
    .4byte draw__14J3DShapePacketFv
    .4byte __dt__14J3DShapePacketFv
*/

struct J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _00

	// _00 VTBL
};

struct J3DShapePacket : public J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _00
	virtual void draw();                // _04
	virtual ~J3DShapePacket();          // _08

	// _00 VTBL
};

#endif
