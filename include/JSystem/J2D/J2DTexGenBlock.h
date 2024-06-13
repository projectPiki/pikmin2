#ifndef _J2DTEXGENBLOCK_H
#define _J2DTEXGENBLOCK_H

#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J2D/J2DTexMtx.h"
#include "types.h"

struct J2DTexGenBlock {
	inline J2DTexGenBlock() { initialize(); }

	u32 mTexGenNum;            // _00
	J2DTexCoord mTexCoords[8]; // _04
	J2DTexMtx* mTexMtxes[8];   // _24

	void initialize();
	void setGX();
	void setTexMtx(u32, J2DTexMtx&);
	void getTexMtx(u32, J2DTexMtx&);

	u32 getTexGenNum() const { return mTexGenNum; }
	J2DTexCoord& getTexCoord(u32 i) { return mTexCoords[i]; }
	void setTexGenNum(u32 num) { mTexGenNum = num; }
	void setTexCoord(u32 i, J2DTexCoord coord) { mTexCoords[i] = coord; }
	void setTexCoord(u32 i, const J2DTexCoord* coord) { mTexCoords[i] = *coord; }
	void setTexMtx(u32 i, J2DTexMtx* mtx) { mTexMtxes[i] = mtx; }

	virtual ~J2DTexGenBlock(); // _08

	// _44 VTBL
};

#endif
