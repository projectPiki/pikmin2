#ifndef _JSYSTEM_J2D_J2DMATERIAL_H
#define _JSYSTEM_J2D_J2DMATERIAL_H

#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DColorBlock.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DPEBlock.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTexGenBlock.h"
#include "types.h"

struct J2DPane;

/**
 * @size{0x88}
 */
struct J2DMaterial {
	struct J2DMaterialAnmPointer {
		J2DMaterialAnmPointer();

		J2DAnmColor* _00;         // _00
		J2DAnmTextureSRTKey* _04; // _04
		J2DAnmTexPattern* _08;    // _08
		J2DAnmTevRegKey* _0C;     // _0C
		s16 _10[1];               // _10
		s16 _12[8];               // _12
		s16 _22[8];               // _22
		s16 _32[8];               // _32
	};

	J2DMaterial();
	J2DMaterial(u32);

	virtual ~J2DMaterial(); // _08

	void animation();
	void makeAnmPointer();
	void setAnimation(J2DAnmColor*);
	void setAnimation(J2DAnmTevRegKey*);
	void setAnimation(J2DAnmTextureSRTKey*);
	void setAnimation(J2DAnmTexPattern*);
	void setGX();

	static J2DTevBlock* createTevBlock(int, bool);
	static J2DIndBlock* createIndBlock(int, bool);

	u16 getIndex() const { return mIndex; }
	J2DColorBlock* getColorBlock() { return &mColorBlock; }
	J2DTexGenBlock* getTexGenBlock() { return &mTexGenBlock; }
	J2DPEBlock* getPEBlock() { return &mPeBlock; }
	J2DTevBlock* getTevBlock() { return mTevBlock; }
	J2DIndBlock* getIndBlock() { return mIndBlock; }
	bool isVisible() const { return mIsVisible; }
	int getMaterialAlphaCalc() const { return mMaterialAlphaCalc; }

	// _00 = VTBL
	J2DPane* mPane;                 // _04
	int _08;                        // _08
	u16 mIndex;                     // _0C
	u8 mIsVisible;                  // _0E
	u8 mMaterialAlphaCalc;          // _0F
	J2DColorBlock mColorBlock;      // _10
	J2DTexGenBlock mTexGenBlock;    // _28
	J2DTevBlock* mTevBlock;         // _70
	J2DIndBlock* mIndBlock;         // _74
	J2DPEBlock mPeBlock;            // _78
	J2DMaterialAnmPointer* mAnmPtr; // _84
};

#endif
