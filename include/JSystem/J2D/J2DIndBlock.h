#ifndef _JSYSTEM_J2D_J2DINDBLOCK_H
#define _JSYSTEM_J2D_J2DINDBLOCK_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J2DIndTexCoordScaleInfo {

	GXIndTexScale getScaleS() const { return (GXIndTexScale)mScaleS; }
	GXIndTexScale getScaleT() const { return (GXIndTexScale)mScaleT; }

	J2DIndTexCoordScaleInfo& operator=(const J2DIndTexCoordScaleInfo& other)
	{
		mScaleS = other.mScaleS;
		mScaleT = other.mScaleT;
		return *this;
	}

	u8 mScaleS; // _00
	u8 mScaleT; // _01
};

extern const J2DIndTexCoordScaleInfo j2dDefaultIndTexCoordScaleInfo;

/**
 * @size{0x2}
 */
struct J2DIndTexCoordScale {
	J2DIndTexCoordScale() { mScaleInfo = j2dDefaultIndTexCoordScaleInfo; }

	J2DIndTexCoordScale(const J2DIndTexCoordScaleInfo& info) { mScaleInfo = info; }

	~J2DIndTexCoordScale() { }

	void load(u8);

	J2DIndTexCoordScaleInfo mScaleInfo; // _00
};

struct J2DIndTexMtxInfo {
	Mtx23 mMtx; // _00
	s8 mScale;  // _18

	J2DIndTexMtxInfo& operator=(const J2DIndTexMtxInfo& other)
	{
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				mMtx[i][j] = other.mMtx[i][j];
			}
		}
		mScale = *(s8*)&other.mScale; // don't even ask.
		return *this;
	}
};

extern const J2DIndTexMtxInfo j2dDefaultIndTexMtxInfo;

/**
 * @size{0x1C}
 */
struct J2DIndTexMtx {
	J2DIndTexMtx() { mMtxInfo = j2dDefaultIndTexMtxInfo; }

	J2DIndTexMtx(const J2DIndTexMtxInfo& info) { mMtxInfo = info; }

	~J2DIndTexMtx() { }

	void load(u8);

	J2DIndTexMtxInfo mMtxInfo; // _00
};

struct J2DIndTexOrderInfo {

	J2DIndTexOrderInfo& operator=(const J2DIndTexOrderInfo& other)
	{
		mTexCoordID = other.mTexCoordID;
		mTexMapID   = other.mTexMapID;
		return *this;
	}

	GXTexCoordID getTexCoordID() const { return (GXTexCoordID)mTexCoordID; }
	GXTexMapID getTexMapID() const { return (GXTexMapID)mTexMapID; }

	u8 mTexCoordID; // _00
	u8 mTexMapID;   // _01
};

extern const J2DIndTexOrderInfo j2dDefaultIndTexOrderNull;

/**
 * @size{0x2}
 */
struct J2DIndTexOrder {
	J2DIndTexOrder() { mOrder = j2dDefaultIndTexOrderNull; }
	J2DIndTexOrder(const J2DIndTexOrderInfo& info) { mOrder = info; }
	void load(u8);

	J2DIndTexOrderInfo mOrder; // _00
};

struct J2DIndBlock {
	virtual void initialize() { }                                                   // _08 (weak)
	virtual void setGX() { }                                                        // _0C (weak)
	virtual u32 getType() = 0;                                                      // _10
	virtual void setIndTexStageNum(u8 texStageNum) { }                              // _14 (weak)
	virtual u8 getIndTexStageNum() const { return 0; }                              // _18 (weak)
	virtual void setIndTexOrder(u32 index, J2DIndTexOrder order) { }                // _1C (weak)
	virtual J2DIndTexOrder* getIndTexOrder(u32 index) { return nullptr; }           // _20 (weak)
	virtual void setIndTexMtx(u32 index, J2DIndTexMtx texMtx) { }                   // _24 (weak)
	virtual J2DIndTexMtx* getIndTexMtx(u32 index) { return nullptr; }               // _28 (weak)
	virtual void setIndTexCoordScale(u32 index, J2DIndTexCoordScale scale) { }      // _2C (weak)
	virtual J2DIndTexCoordScale* getIndTexCoordScale(u32 index) { return nullptr; } // _30 (weak)
	virtual ~J2DIndBlock() { }                                                      // _34 (weak)

	//  _00 VTBL
};

struct J2DIndBlockNull : public J2DIndBlock {
	inline J2DIndBlockNull()
	    : J2DIndBlock()
	{
	}

	virtual void setGX() { }                      // _0C (weak)
	virtual u32 getType() { return JBT_IndNull; } // _10 (weak)
	virtual ~J2DIndBlockNull() { }                // _34 (weak)
};

struct J2DIndBlockFull : public J2DIndBlock {
	inline J2DIndBlockFull()
	    : J2DIndBlock()
	    , mTexOrders()
	    , mTexMtxes()
	    , mTexCoordScales()
	{
		initialize();
	}

	virtual void initialize();                                                                                 // _08
	virtual void setGX();                                                                                      // _0C
	virtual u32 getType() { return JBT_IndFull; }                                                              // _10 (weak)
	virtual void setIndTexStageNum(u8 texStageNum) { mTexStageNum = texStageNum; }                             // _14 (weak)
	virtual u8 getIndTexStageNum() const { return mTexStageNum; }                                              // _18 (weak)
	virtual void setIndTexOrder(u32 index, J2DIndTexOrder order) { mTexOrders[index] = order; }                // _1C (weak)
	virtual J2DIndTexOrder* getIndTexOrder(u32 index) { return mTexOrders + index; }                           // _20 (weak)
	virtual void setIndTexMtx(u32 index, J2DIndTexMtx texMtx) { mTexMtxes[index].mMtxInfo = texMtx.mMtxInfo; } // _24 (weak)
	virtual J2DIndTexMtx* getIndTexMtx(u32 index) { return mTexMtxes + index; }                                // _28 (weak)
	virtual void setIndTexCoordScale(u32 index, J2DIndTexCoordScale scale) { mTexCoordScales[index] = scale; } // _2C (weak)
	virtual J2DIndTexCoordScale* getIndTexCoordScale(u32 index) { return mTexCoordScales + index; }            // _30 (weak)
	virtual ~J2DIndBlockFull() { }                                                                             // _34 (weak)

	u8 mTexStageNum;              // _04
	J2DIndTexOrder mTexOrders[4]; // _05
	u32 : 0;
	J2DIndTexMtx mTexMtxes[3];              // _10
	J2DIndTexCoordScale mTexCoordScales[4]; // _64
};

#endif
