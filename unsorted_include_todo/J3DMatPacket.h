#ifndef _J3DMATPACKET_H
#define _J3DMATPACKET_H

/*
    __vt__12J3DMatPacket:
    .4byte 0
    .4byte 0
    .4byte entry__12J3DMatPacketFP13J3DDrawBuffer
    .4byte draw__12J3DMatPacketFv
    .4byte __dt__12J3DMatPacketFv
*/

struct J3DMatPacket {
	virtual void entry(J3DDrawBuffer*); // _08 (weak)
	virtual void draw();                // _0C
	virtual ~J3DMatPacket();            // _10
};

#endif
