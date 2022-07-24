#ifndef _J3DPACKET_H
#define _J3DPACKET_H

/*
    __vt__9J3DPacket:
    .4byte 0
    .4byte 0
    .4byte entry__9J3DPacketFP13J3DDrawBuffer
    .4byte draw__9J3DPacketFv
    .4byte __dt__9J3DPacketFv
*/

struct J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _08
	virtual void draw();                // _0C (inline)
	virtual ~J3DPacket();               // _10 (inline)
};

#endif
