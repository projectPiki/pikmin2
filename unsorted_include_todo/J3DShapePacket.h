#ifndef _J3DSHAPEPACKET_H
#define _J3DSHAPEPACKET_H

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
