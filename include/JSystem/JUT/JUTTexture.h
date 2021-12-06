#ifndef _JSYSTEM_JUT_JUTTEXTURE_H
#define _JSYSTEM_JUT_JUTTEXTURE_H

#include "Dolphin/gx.h"
#include "types.h"

struct JUTPalette;
struct ResTIMG;

// Size: 0x40
struct JUTTexture {
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
	void capture(int, int, _GXTexFmt, bool, uchar);
	void captureTexture(int, int, int, int, bool, _GXTexFmt, _GXTexFmt);
	void captureDolTexture(void*, int, int, int, int, bool, _GXTexFmt);
	void init();
	void initTexObj();
	void initTexObj(_GXTlut);
	void load(_GXTexMapID);
	void storeTIMG(const ResTIMG*, uchar);
	void storeTIMG(const ResTIMG*, JUTPalette*);
	void storeTIMG(const ResTIMG*, JUTPalette*, _GXTlut);

	u8 _00[20];      // _00
	u32 _14;         // _14
	u8 _18[4];       // _18
	u8 _1C;          // _1C
	u8 _1D;          // _1D
	u8 _1E;          // _1E
	u8 m_mipmap;     // _1F
	ResTIMG* _20;    // _20
	u32 _24;         // _24 /* DCrange */
	JUTPalette* _28; // _28
	JUTPalette* _2C; // _2C
	u8 _30;          // _30 /* texWrapMode */
	u8 _31;          // _31 /* texWrapMode */
	u8 _32;          // _32
	u8 _33;          // _33
	ushort _34;      // _34
	ushort _36;      // _36
	short _38;       // _38
	u8 m_tlut;       // _3A
	u8 m_flags;      // _3B
	ResTIMG* _3C;    // _3C
};

#endif
