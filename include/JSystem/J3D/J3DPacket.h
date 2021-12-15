#ifndef _JSYSTEM_J3D_J3DPACKET_H
#define _JSYSTEM_J3D_J3DPACKET_H

#include "JSystem/J3D/J3DTypes.h"

struct J3DDrawBuffer;

struct J3DPacket {
	virtual void entry(J3DDrawBuffer*); // _00
	virtual void draw();                // _04
	virtual ~J3DPacket();               // _08

	void addChildPacket(J3DPacket*);

	// VTBL _00
	J3DPacket* _04;
	J3DPacket* _08;
};

struct J3DDrawPacket : public J3DPacket {
	virtual void draw();      // _04
	virtual ~J3DDrawPacket(); // _08
};

// TODO: Data members
/**
 * @size{0x40}
 */
struct J3DMatPacket : public J3DDrawPacket {
	virtual void entry(J3DDrawBuffer*); // _00
	virtual void draw();                // _04
	virtual ~J3DMatPacket();            // _08
};

// TODO: Data members
/**
 * @size{0x3C}
 */
struct J3DShapePacket : public J3DDrawPacket {
	virtual void draw();       // _04
	virtual ~J3DShapePacket(); // _08
};

#endif
