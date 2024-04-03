#ifndef _JSYSTEM_J3D_J3DIND_H
#define _JSYSTEM_J3D_J3DIND_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DIndTexCoordScaleInfo {
	void operator=(const J3DIndTexCoordScaleInfo& other)
	{
		mScaleS = other.mScaleS;
		mScaleT = other.mScaleT;
	}

	u8 mScaleS; // _00
	u8 mScaleT; // _01
	u8 _02;     // _02, padding?
	u8 _03;     // _03, padding?
};

extern const J3DIndTexCoordScaleInfo j3dDefaultIndTexCoordScaleInfo;

struct J3DIndTexCoordScale : public J3DIndTexCoordScaleInfo {
	J3DIndTexCoordScale() { *(J3DIndTexCoordScaleInfo*)this = j3dDefaultIndTexCoordScaleInfo; }
	explicit J3DIndTexCoordScale(const J3DIndTexCoordScaleInfo& info) { *(J3DIndTexCoordScaleInfo*)this = info; }

	~J3DIndTexCoordScale() { }

	u8 getScaleS() { return mScaleS; }
	u8 getScaleT() { return mScaleT; }

	// _00-_04 = J3DIndTexCoordScaleInfo
};

struct J3DIndTexMtxInfo {
	void operator=(const J3DIndTexMtxInfo& other)
	{
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				mOffsetMtx[i][j] = other.mOffsetMtx[i][j];
			}
		}
		mScaleExp = *(s8*)&other.mScaleExp; // don't even ask.
	}

	Mtx23 mOffsetMtx; // _00
	s8 mScaleExp;     // _18
};

extern const J3DIndTexMtxInfo j3dDefaultIndTexMtxInfo;

/**
 * @size{0x1C}
 */
struct J3DIndTexMtx : public J3DIndTexMtxInfo {
	J3DIndTexMtx() { *(J3DIndTexMtxInfo*)this = j3dDefaultIndTexMtxInfo; }
	J3DIndTexMtx(const J3DIndTexMtxInfo& info) { *(J3DIndTexMtxInfo*)this = info; }

	~J3DIndTexMtx() { }

	void load(u32 id) { J3DGDSetIndTexMtx(GXIndTexMtxID(id + GX_ITM_0), getOffsetMtx(), getScaleExp()); }

	Mtx3P getOffsetMtx() { return mOffsetMtx; }

	s8 getScaleExp() { return mScaleExp; }

	void setScaleExp(s8 scaleExp) { mScaleExp = scaleExp; }

	// _00-_1C = J3DIndTexMtxInfo
};

/** @fabricated */
struct J3DIndTexOrderInfo {
	void operator=(const J3DIndTexOrderInfo& other)
	{
		mTexCoordID = other.mTexCoordID;
		mTexMapID   = other.mTexMapID;
	}

	u8 mTexCoordID; // _00
	u8 mTexMapID;   // _01
	u8 _02;         // _02, padding?
	u8 _03;         // _03, padding?
};

extern const J3DIndTexOrderInfo j3dDefaultIndTexOrderNull;

/**
 * @size{0x4}
 */
struct J3DIndTexOrder : public J3DIndTexOrderInfo {
	J3DIndTexOrder() { *(J3DIndTexOrderInfo*)this = j3dDefaultIndTexOrderNull; }
	J3DIndTexOrder(const J3DIndTexOrderInfo& info) { *(J3DIndTexOrderInfo*)this = info; }

	u8 getCoord() const { return mTexCoordID; }
	u8 getMap() const { return mTexMapID; }
	void setCoord(u8 coord) { mTexCoordID = coord; }
	void setMap(u8 map) { mTexMapID = map; }

	// _00-_04 = J3DIndTexOrderInfo
};

struct J3DIndBlock {
	virtual void reset(J3DIndBlock*) { }                                      // _08 (weak)
	virtual void diff(u32) = 0;                                               // _0C
	virtual void load()    = 0;                                               // _10
	virtual u32 countDLSize() { return 0; }                                   // _14 (weak)
	virtual JBlockType getType() = 0;                                         // _18
	virtual void setIndTexStageNum(u8) { }                                    // _1C (weak)
	virtual u8 getIndTexStageNum() const { return 0; }                        // _20 (weak)
	virtual void setIndTexOrder(u32, J3DIndTexOrder) { }                      // _24 (weak)
	virtual void setIndTexOrder(u32, const J3DIndTexOrder*) { }               // _28 (weak)
	virtual J3DIndTexOrder* getIndTexOrder(u32) { return nullptr; }           // _2C (weak)
	virtual void setIndTexMtx(u32, const J3DIndTexMtx*) { }                   // _30 (weak)
	virtual void setIndTexMtx(u32, J3DIndTexMtx) { }                          // _34 (weak)
	virtual J3DIndTexMtx* getIndTexMtx(u32) { return nullptr; }               // _38 (weak)
	virtual void setIndTexCoordScale(u32, const J3DIndTexCoordScale*) { }     // _3C (weak)
	virtual void setIndTexCoordScale(u32, J3DIndTexCoordScale) { }            // _40 (weak)
	virtual J3DIndTexCoordScale* getIndTexCoordScale(u32) { return nullptr; } // _44 (weak)
	virtual ~J3DIndBlock() { }                                                // _48 (weak)

	// _00 = VTBL
};

struct J3DIndBlockFull : public J3DIndBlock {
	inline J3DIndBlockFull() { initialize(); }

	virtual void reset(J3DIndBlock*);                                                                               // _08
	virtual void diff(u32);                                                                                         // _0C
	virtual void load();                                                                                            // _10
	virtual u32 countDLSize();                                                                                      // _14
	virtual JBlockType getType() { return JBT_IndFull; }                                                            // _18 (weak)
	virtual void setIndTexStageNum(u8 stageNum) { mIndTexStageNum = stageNum; }                                     // _1C (weak)
	virtual u8 getIndTexStageNum() const { return mIndTexStageNum; }                                                // _20 (weak)
	virtual void setIndTexOrder(u32 index, J3DIndTexOrder order) { mOrders[index] = order; }                        // _24 (weak)
	virtual void setIndTexOrder(u32 index, const J3DIndTexOrder* order) { mOrders[index] = *order; }                // _28 (weak)
	virtual J3DIndTexOrder* getIndTexOrder(u32 index) { return &mOrders[index]; }                                   // _2C (weak)
	virtual void setIndTexMtx(u32 index, const J3DIndTexMtx* mtx) { mTexMtxs[index] = *mtx; }                       // _30 (weak)
	virtual void setIndTexMtx(u32 index, J3DIndTexMtx mtx) { mTexMtxs[index] = mtx; }                               // _34 (weak)
	virtual J3DIndTexMtx* getIndTexMtx(u32 index) { return &mTexMtxs[index]; }                                      // _38 (weak)
	virtual void setIndTexCoordScale(u32 index, const J3DIndTexCoordScale* scale) { mCoordScales[index] = *scale; } // _3C (weak)
	virtual void setIndTexCoordScale(u32 index, J3DIndTexCoordScale scale) { mCoordScales[index] = scale; }         // _40 (weak)
	virtual J3DIndTexCoordScale* getIndTexCoordScale(u32 index) { return &mCoordScales[index]; }                    // _44 (weak)
	virtual ~J3DIndBlockFull() { }                                                                                  // _48 (weak)

	void initialize();

	// _00 = VTBL
	u8 mIndTexStageNum;                  // _04
	J3DIndTexOrder mOrders[4];           // _05
	J3DIndTexMtx mTexMtxs[3];            // _18
	J3DIndTexCoordScale mCoordScales[4]; // _6C
};

struct J3DIndBlockNull : public J3DIndBlock {
	virtual void reset(J3DIndBlock*) { }                 // _08 (weak)
	virtual void diff(u32) { }                           // _0C (weak)
	virtual void load() { }                              // _10 (weak)
	virtual JBlockType getType() { return JBT_IndNull; } // _18 (weak)
	virtual ~J3DIndBlockNull() { }                       // _48 (weak)
};

#endif
