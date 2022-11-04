#ifndef _JSYSTEM_J2D_J2DMATERIAL_H
#define _JSYSTEM_J2D_J2DMATERIAL_H

#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DColorBlock.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DPEBlock.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTexGenBlock.h"
#include "types.h"

/**
 * @fabricated
 * @size{0x44}
 */
struct J2DMaterial_0x84 {
	J2DAnmColor* _00;         // _00
	J2DAnmTextureSRTKey* _04; // _04
	J2DAnmTexPattern* _08;    // _08
	J2DAnmTevRegKey* _0C;     // _0C
	s16 _10[1];               // _10
	s16 _12[8];               // _12
	s16 _22[8];               // _22
	s16 _32[8];               // _32
	u8 _42[2];                // _42 - padding?
};

/**
 * @size{0x88}
 */
struct J2DMaterial {
	J2DMaterial();
	J2DMaterial(u32);

	virtual ~J2DMaterial(); // _00

	void animation();
	void makeAnmPointer();
	void setAnimation(J2DAnmColor*);
	void setAnimation(J2DAnmTevRegKey*);
	void setAnimation(J2DAnmTextureSRTKey*);
	void setAnimation(J2DAnmTexPattern*);
	void setGX();

	static J2DTevBlock* createTevBlock(int, bool);
	static J2DIndBlock* createIndBlock(int, bool);

	// _00 VTBL
	struct J2DPane* m_pane;       // _04
	int _08;                      // _08
	s16 _0C;                      // _0C
	u8 _0E;                       // _0E
	u8 _0F;                       // _0F
	J2DColorBlock m_colorBlock;   // _10
	J2DTexGenBlock m_texGenBlock; // _28
	J2DTevBlock* m_tevBlock;      // _70
	J2DIndBlock* m_indBlock;      // _74
	J2DPEBlock m_peBlock;         // _78
	J2DMaterial_0x84* _84;        // _84
};

#endif
