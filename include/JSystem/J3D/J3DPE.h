#ifndef _JSYSTEM_J3D_J3DPE_H
#define _JSYSTEM_J3D_J3DPE_H

#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DPacket.h"
#include "types.h"

struct J3DFogInfo {
	void operator=(const J3DFogInfo& other)
	{
		mType      = other.mType;
		mAdjEnable = other.mAdjEnable;
		mCenter    = other.mCenter;
		mStartZ    = other.mStartZ;
		mEndZ      = other.mEndZ;
		mNearZ     = other.mNearZ;
		mFarZ      = other.mFarZ;
		mColor     = other.mColor;
		for (int i = 0; i < 10; i++) {
			mFogAdjTable[i] = other.mFogAdjTable[i];
		}
	}

	u8 mType;             // _00
	u8 mAdjEnable;        // _01
	u16 mCenter;          // _02
	f32 mStartZ;          // _04
	f32 mEndZ;            // _08
	f32 mNearZ;           // _0C
	f32 mFarZ;            // _10
	GXColor mColor;       // _14
	u16 mFogAdjTable[10]; // _18
};

extern const J3DFogInfo j3dDefaultFogInfo;

struct J3DFog : public J3DFogInfo {
	J3DFog(J3DFogInfo& info) { *(J3DFogInfo*)this = info; }
	J3DFog() { *(J3DFogInfo*)this = j3dDefaultFogInfo; }

	// something weird going on with the default/overridden copy ctor for this...
	// see J3DMaterialFactory::createNormalMaterial, vs
	// J3DMaterialFactory_v21::newFog

	J3DFogInfo* getFogInfo() { return (J3DFogInfo*)this; }

	void load() const
	{
		J3DGDSetFog(GXFogType(mType), mStartZ, mEndZ, mNearZ, mFarZ, mColor);
		J3DGDSetFogRangeAdj(mAdjEnable, mCenter, (GXFogAdjTable*)mFogAdjTable);
	}
	void setType(u8 type) { mType = type; }

	// _00-_2C = J3DFogInfo
};

/**
 * @size{0x4}
 */
struct J3DPEBlock {
	virtual void reset(J3DPEBlock*) { }                      // _08 (weak)
	virtual void load() = 0;                                 // _0C
	virtual void patch() { }                                 // _10 (weak)
	virtual void diff(u32) { }                               // _14 (weak)
	virtual void diffFog() { }                               // _18 (weak)
	virtual void diffBlend() { }                             // _1C (weak)
	virtual u32 countDLSize() { return 0; }                  // _20 (weak)
	virtual JBlockType getType() = 0;                        // _24
	virtual void setFog(J3DFog) { }                          // _28 (weak)
	virtual void setFog(J3DFog*) { }                         // _2C (weak)
	virtual J3DFog* getFog() { return nullptr; }             // _30 (weak)
	virtual void setAlphaComp(const J3DAlphaComp*) { }       // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp&) { }       // _38 (weak)
	virtual J3DAlphaComp* getAlphaComp() { return nullptr; } // _3C (weak)
	virtual void setBlend(const J3DBlend*) { }               // _40 (weak)
	virtual void setBlend(const J3DBlend&) { }               // _44 (weak)
	virtual J3DBlend* getBlend() { return nullptr; }         // _48 (weak)
	virtual void setZMode(const J3DZMode*) { }               // _4C (weak)
	virtual void setZMode(J3DZMode) { }                      // _50 (weak)
	virtual J3DZMode* getZMode() { return nullptr; }         // _54 (weak)
	virtual void setZCompLoc(const u8*) { }                  // _58 (weak)
	virtual void setZCompLoc(u8) { }                         // _5C (weak)
	virtual u8 getZCompLoc() const { return nullptr; }       // _60 (weak)
	virtual void setDither(const u8*) { }                    // _64 (weak)
	virtual void setDither(u8) { }                           // _68 (weak)
	virtual u8 getDither() const { return 0; }               // _6C (weak)
	virtual u32 getFogOffset() const { return 0; }           // _70 (weak)
	virtual void setFogOffset(u32) { }                       // _74 (weak)
	virtual ~J3DPEBlock() { }                                // _78 (weak)

	// _00 = VTBL
};

struct J3DPEBlockFogOff : public J3DPEBlock {
	J3DPEBlockFogOff() { initialize(); }

	virtual void reset(J3DPEBlock*); // _08
	virtual void load();             // _0C
	virtual void diff(u32 flag)      // _14 (weak)
	{
		if (flag & J3DMDF_DiffBlend) {
			diffBlend();
		}
	}
	virtual void diffBlend();                                                             // _1C
	virtual u32 countDLSize();                                                            // _20
	virtual JBlockType getType() { return JBT_PEFogOff; }                                 // _24 (weak)
	virtual void setAlphaComp(const J3DAlphaComp* alphaComp) { mAlphaComp = *alphaComp; } // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp& alphaComp) { mAlphaComp = alphaComp; }  // _38 (weak)
	virtual J3DAlphaComp* getAlphaComp() { return &mAlphaComp; }                          // _3C (weak)
	virtual void setBlend(const J3DBlend* blend) { mBlend = *blend; }                     // _40 (weak)
	virtual void setBlend(const J3DBlend& blend) { mBlend = blend; }                      // _44 (weak)
	virtual J3DBlend* getBlend() { return &mBlend; }                                      // _48 (weak)
	virtual void setZMode(const J3DZMode* zMode) { mZMode = *zMode; }                     // _4C (weak)
	virtual void setZMode(J3DZMode zMode) { mZMode = zMode; }                             // _50 (weak)
	virtual J3DZMode* getZMode() { return &mZMode; }                                      // _54 (weak)
	virtual void setZCompLoc(const u8* compLoc) { mZCompLoc = *compLoc; }                 // _58 (weak)
	virtual void setZCompLoc(u8 compLoc) { mZCompLoc = compLoc; }                         // _5C (weak)
	virtual u8 getZCompLoc() const { return mZCompLoc; }                                  // _60 (weak)
	virtual void setDither(const u8* dither) { mDither = *dither; }                       // _64 (weak)
	virtual void setDither(u8 dither) { mDither = dither; }                               // _68 (weak)
	virtual u8 getDither() const { return mDither; }                                      // _6C (weak)
	virtual ~J3DPEBlockFogOff() { }                                                       // _78 (weak)

	void initialize();

	// _00 = VTBL
	J3DAlphaComp mAlphaComp; // _04
	J3DBlend mBlend;         // _08
	J3DZMode mZMode;         // _0C
	u8 mZCompLoc;            // _0E
	u8 mDither;              // _0F
};

struct J3DPEBlockFull : public J3DPEBlock {
	J3DPEBlockFull() { initialize(); }

	virtual void reset(J3DPEBlock*);                                                      // _08
	virtual void load();                                                                  // _0C
	virtual void patch();                                                                 // _10
	virtual void diff(u32);                                                               // _14
	virtual void diffFog();                                                               // _18
	virtual void diffBlend();                                                             // _1C
	virtual u32 countDLSize();                                                            // _20
	virtual JBlockType getType() { return JBT_PEFull; }                                   // _24 (weak)
	virtual void setFog(J3DFog fog) { mFog = fog; }                                       // _28 (weak)
	virtual void setFog(J3DFog* fog) { mFog = *fog; }                                     // _2C (weak)
	virtual J3DFog* getFog() { return &mFog; }                                            // _30 (weak)
	virtual void setAlphaComp(const J3DAlphaComp* alphaComp) { mAlphaComp = *alphaComp; } // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp& alphaComp) { mAlphaComp = alphaComp; }  // _38 (weak)
	virtual J3DAlphaComp* getAlphaComp() { return &mAlphaComp; }                          // _3C (weak)
	virtual void setBlend(const J3DBlend* blend) { mBlend = *blend; }                     // _40 (weak)
	virtual void setBlend(const J3DBlend& blend) { mBlend = blend; }                      // _44 (weak)
	virtual J3DBlend* getBlend() { return &mBlend; }                                      // _48 (weak)
	virtual void setZMode(const J3DZMode* zMode) { mZMode = *zMode; }                     // _4C (weak)
	virtual void setZMode(J3DZMode zMode) { mZMode = zMode; }                             // _50 (weak)
	virtual J3DZMode* getZMode() { return &mZMode; }                                      // _54 (weak)
	virtual void setZCompLoc(const u8* compLoc) { mZCompLoc = *compLoc; }                 // _58 (weak)
	virtual void setZCompLoc(u8 compLoc) { mZCompLoc = compLoc; }                         // _5C (weak)
	virtual u8 getZCompLoc() const { return mZCompLoc; }                                  // _60 (weak)
	virtual void setDither(const u8* dither) { mDither = *dither; }                       // _64 (weak)
	virtual void setDither(u8 dither) { mDither = dither; }                               // _68 (weak)
	virtual u8 getDither() const { return mDither; }                                      // _6C (weak)
	virtual u32 getFogOffset() const { return mFogOffset; }                               // _70 (weak)
	virtual void setFogOffset(u32 fogOffset) { mFogOffset = fogOffset; }                  // _74 (weak)
	virtual ~J3DPEBlockFull() { }                                                         // _78 (weak)

	void initialize();

	// _00 = VTBL
	J3DFog mFog;             // _04
	J3DAlphaComp mAlphaComp; // _30
	J3DBlend mBlend;         // _34
	J3DZMode mZMode;         // _38
	u8 mZCompLoc;            // _3A
	u8 mDither;              // _3B
	u32 mFogOffset;          // _3C
};

/**
 * @size{0x4}
 */
struct J3DPEBlockNull : public J3DPEBlock {
	virtual void load() { }                             // _0C (weak)
	virtual JBlockType getType() { return JBT_PENull; } // _24 (weak)
	virtual ~J3DPEBlockNull() { }                       // _78 (weak)

	// _00 = VTBL
};

/**
 * @size{0x4}
 */
struct J3DPEBlockOpa : public J3DPEBlock {
	virtual void load();                               // _0C
	virtual u32 countDLSize();                         // _20
	virtual JBlockType getType() { return JBT_PEOpa; } // _24 (weak)
	virtual ~J3DPEBlockOpa() { }                       // _78 (weak)

	// _00 = VTBL
};

/**
 * @size{0x4}
 */
struct J3DPEBlockTexEdge : public J3DPEBlock {
	virtual void load();                                   // _0C
	virtual u32 countDLSize();                             // _20
	virtual JBlockType getType() { return JBT_PETexEdge; } // _24 (weak)
	virtual ~J3DPEBlockTexEdge() { }                       // _78 (weak)

	// _00 = VTBL
};

/**
 * @size{0x4}
 */
struct J3DPEBlockXlu : public J3DPEBlock {
	virtual void load();                               // _0C
	virtual u32 countDLSize();                         // _20
	virtual JBlockType getType() { return JBT_PEXlu; } // _24 (weak)
	virtual ~J3DPEBlockXlu() { }                       // _78 (weak)

	// _00 = VTBL
};

#endif
