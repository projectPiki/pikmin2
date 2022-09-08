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
	virtual void entry(J3DDrawBuffer*); // _08
	virtual void draw();                // _0C
	virtual ~J3DMatPacket();            // _10

	u32 _0C;                       // _0C
	u32 _10;                       // _10
	u8 _14[0xC];                   // _14
	struct J3DDisplayListObj* _20; // _20
	u32 _24;                       // _24
	struct J3DShapePacket* _28;    // _28
	struct J3DShapePacket* _2C;    // _2C
	struct J3DMaterial* _30;       // _30
	struct J3DDisplayListObj* _34; // _34
	u32 _38;                       // _38
	u32 _3C;                       // _3C
};

struct J3DShapePacket_0x24 {
	Mtx* _00;   // _00
	unkptr _04; // _04
	s16 _08;    // _08
};

// TODO: Data members
/**
 * @size{0x3C}
 */
struct J3DShapePacket : public J3DDrawPacket {
	virtual void draw();       // _04
	virtual ~J3DShapePacket(); // _08

	int newDifferedDisplayList(u32 displayListFlag);
	int newDifferedTexMtx(J3DTexDiffFlag);

	u32 _0C;                  // _0C
	u32 _10;                  // _10
	u8 _14[0xC];              // _14
	u32 _20;                  // _20
	J3DShapePacket_0x24* _24; // _24
	struct J3DShape* _28;     // _28
	struct J3DMtxBuffer* _2C; // _2C
	Mtx* _30;                 // _30
	u32 _34;                  // _34
	struct J3DModel* _38;     // _38
};

#endif
