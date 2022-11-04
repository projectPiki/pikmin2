#ifndef _JSYSTEM_J3D_J3DPACKET_H
#define _JSYSTEM_J3D_J3DPACKET_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct J3DDrawBuffer;

struct J3DShapePacket;

// TODO: Could this use TLinkList?
struct J3DPacket {
	inline J3DPacket()
	    : _04(nullptr)
	    , _08(nullptr)
	    , _0C(0)
	{
	}

	virtual bool entry(J3DDrawBuffer*); // _08
	virtual void draw();                // _0C (weak)
	virtual ~J3DPacket();               // _10 (weak)

	void addChildPacket(J3DPacket*);

	/** @fabricated */
	void clearListPointers()
	{
		_04 = nullptr;
		_08 = nullptr;
	}

	// VTBL _00
	J3DPacket* _04; // _04
	J3DPacket* _08; // _08
	u32 _0C;        // _0C
};

struct J3DDrawPacket : public J3DPacket {
	inline J3DDrawPacket()
	    : _10(0)
	    , m_displayList(nullptr)
	    , _24(nullptr)
	{
	}

	virtual void draw();      // _0C
	virtual ~J3DDrawPacket(); // _10

	J3DErrType newDisplayList(u32);
	J3DErrType newSingleDisplayList(u32);

	u32 _10;                          // _10
	u8 _14[0xC];                      // _14
	J3DDisplayListObj* m_displayList; // _20
	void* _24;                        // _24
};

/**
 * @size{0x40}
 */
struct J3DMatPacket : public J3DDrawPacket {
	J3DMatPacket();

	virtual bool entry(J3DDrawBuffer*); // _08 (weak)
	virtual void draw();                // _0C
	virtual ~J3DMatPacket();            // _10

	void addShapePacket(J3DShapePacket*);
	void beginDiff();
	u32 endDiff();
	bool isSame(J3DMatPacket*) const;

	struct J3DShapePacket* _28; // _28
	struct J3DShapePacket* _2C; // _2C
	struct J3DMaterial* _30;    // _30
	u32 _34;                    // _34
	u32 _38;                    // _38
	u32 _3C;                    // _3C
};

struct J3DShapePacket_0x24 {
	inline J3DShapePacket_0x24(u16 num)
	    : _00(new Mtx[num])
	    , _04(new float[num][16])
	    , _08(num)
	{
	}
	Mtx* _00;  // _00
	void* _04; // _04
	s16 _08;   // _08
};

/**
 * @size{0x3C}
 */
struct J3DShapePacket : public J3DDrawPacket {
	J3DShapePacket();

	virtual void draw();       // _0C
	virtual ~J3DShapePacket(); // _10

	J3DErrType newDifferedDisplayList(u32 displayListFlag);
	J3DErrType newDifferedTexMtx(J3DTexDiffFlag);
	int calcDifferedBufferSize(u32);
	void drawFast();

	J3DShape* _28;            // _28
	struct J3DMtxBuffer* _2C; // _2C
	Mtx* _30;                 // _30
	u32 _34;                  // _34
	struct J3DModel* _38;     // _38
};

#endif
