#ifndef _JSYSTEM_JUT_JUTTEXTURE_H
#define _JSYSTEM_JUT_JUTTEXTURE_H

#include "Dolphin/gx.h"
#include "types.h"
#include "JSystem/ResTIMG.h"

struct JUTPalette;
struct ResTIMG;

// Size: 0x40
struct JUTTexture : public GXTexObj {
	JUTTexture()
	{
		m_flags &= 2;
		_28 = 0;
		_20 = 0;
	}
	JUTTexture(int, int, _GXTexFmt);
	~JUTTexture();
	;
	void attachPalette(JUTPalette*);
	void capture(int, int, _GXTexFmt, bool, u8);
	void captureTexture(int, int, int, int, bool, _GXTexFmt, _GXTexFmt);
	void captureDolTexture(void*, int, int, int, int, bool, _GXTexFmt);
	void init();
	void initTexObj();
	void initTexObj(_GXTlut);
	void load(_GXTexMapID);
	void storeTIMG(const ResTIMG*, u8);
	void storeTIMG(const ResTIMG*, JUTPalette*);
	void storeTIMG(const ResTIMG*, JUTPalette*, _GXTlut);

	/** @fabricated */
	inline int getSizeX() const { return _20->m_sizeX; }
	/** @fabricated */
	inline int getSizeY() const { return _20->m_sizeY; }

	ResTIMG* _20;    // _20
	void* _24;       // _24 /* DCrange */
	JUTPalette* _28; // _28
	JUTPalette* _2C; // _2C
	u8 _30;          // _30 /* texWrapMode */
	u8 _31;          // _31 /* texWrapMode */
	u8 _32;          // _32
	u8 _33;          // _33
	u16 _34;         // _34
	u16 _36;         // _36
	short _38;       // _38
	u8 m_tlut;       // _3A
	u8 m_flags;      // _3B
	ResTIMG* _3C;    // _3C
};

#endif
