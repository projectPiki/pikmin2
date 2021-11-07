#ifndef _J3DPACKET_H
#define _J3DPACKET_H

struct J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _00
	virtual void draw();                // _04
	virtual ~J3DPacket();               // _08

	// _00 VTBL
};

#endif
