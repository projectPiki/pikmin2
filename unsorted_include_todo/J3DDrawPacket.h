#ifndef _J3DDRAWPACKET_H
#define _J3DDRAWPACKET_H

/*
    __vt__13J3DDrawPacket:
    .4byte 0
    .4byte 0
    .4byte entry__9J3DPacketFP13J3DDrawBuffer
    .4byte draw__13J3DDrawPacketFv
    .4byte __dt__13J3DDrawPacketFv
*/

struct J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _08

	// _00 VTBL
};

struct J3DDrawPacket : public J3DPacket {
	virtual void draw();      // _0C
	virtual ~J3DDrawPacket(); // _10

	// _00 VTBL
};

#endif
