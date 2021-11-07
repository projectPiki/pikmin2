#ifndef _J3DMATPACKET_H
#define _J3DMATPACKET_H

struct J3DMatPacket {
	virtual void entry(J3DDrawBuffer*); // _00
	virtual void draw();                // _04
	virtual ~J3DMatPacket();            // _08

	// _00 VTBL
};

#endif
