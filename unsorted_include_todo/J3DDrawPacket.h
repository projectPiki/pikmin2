#ifndef _J3DDRAWPACKET_H
#define _J3DDRAWPACKET_H

struct J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _00

	// _00 VTBL
};

struct J3DDrawPacket : public J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _00
	virtual void draw();                // _04
	virtual ~J3DDrawPacket();           // _08

	// _00 VTBL
};

#endif
