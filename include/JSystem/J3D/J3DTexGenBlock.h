#ifndef _JSYSTEM_J3D_J3DTEXGENBLOCK_H
#define _JSYSTEM_J3D_J3DTEXGENBLOCK_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DNBTScale;
struct J3DTexMtx;

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*) { }                   // _08 (weak)
	virtual void calc(const Mtx)                         = 0; // _0C
	virtual void calcWithoutViewMtx(const Mtx)           = 0; // _10
	virtual void calcPostTexMtx(const Mtx)               = 0; // _14
	virtual void calcPostTexMtxWithoutViewMtx(const Mtx) = 0; // _18
	virtual void load()                                  = 0; // _1C
	virtual void patch()                                 = 0; // _20
	virtual void diff(u32)                               = 0; // _24
	virtual void diffTexMtx()                            = 0; // _28
	virtual void diffTexGen()                            = 0; // _2C
	virtual u32 countDLSize() { return 0; }                   // _30 (weak)
	virtual JBlockType getType() = 0;                         // _34
	virtual void setTexGenNum(const u32*) { }                 // _38 (weak)
	virtual void setTexGenNum(u32) { }                        // _3C (weak)
	virtual u32 getTexGenNum() const { return 0; }            // _40 (weak)
	virtual void setTexCoord(u32, const J3DTexCoord*) { }     // _44 (weak)
	virtual J3DTexCoord* getTexCoord(u32) { return nullptr; } // _48 (weak)
	virtual void setTexMtx(u32, J3DTexMtx*) { }               // _4C (weak)
	virtual J3DTexMtx* getTexMtx(u32) { return nullptr; }     // _50 (weak)
	virtual void setNBTScale(const J3DNBTScale*) { }          // _54 (weak)
	virtual void setNBTScale(J3DNBTScale) { }                 // _58 (weak)
	virtual J3DNBTScale* getNBTScale() { return nullptr; }    // _5C (weak)
	virtual u32 getTexMtxOffset() const { return 0; }         // _60 (weak)
	virtual void setTexMtxOffset(u32) { }                     // _64 (weak)
	virtual ~J3DTexGenBlock() { }                             // _68 (weak)

	// _00 = VTBL
};

/**
 * @size{0x4}
 */
struct J3DTexGenBlockNull : public J3DTexGenBlock {
	virtual void calc(const Mtx) { }                         // _0C (weak)
	virtual void calcWithoutViewMtx(const Mtx) { }           // _10 (weak)
	virtual void calcPostTexMtx(const Mtx) { }               // _14 (weak)
	virtual void calcPostTexMtxWithoutViewMtx(const Mtx) { } // _18 (weak)
	virtual void load() { }                                  // _1C (weak)
	virtual void patch() { }                                 // _20 (weak)
	virtual void diff(u32) { }                               // _24 (weak)
	virtual void diffTexMtx() { }                            // _28 (weak)
	virtual void diffTexGen() { }                            // _2C (weak)
	virtual JBlockType getType() { return JBT_TexGenNull; }  // _34 (weak)
	virtual ~J3DTexGenBlockNull() { }                        // _68 (weak)

	// _00 = VTBL
};

struct J3DTexGenBlockPatched : public J3DTexGenBlock {
	inline J3DTexGenBlockPatched()
	    : J3DTexGenBlock()
	    , mTexCoords()
	{
		initialize();
	}

	virtual void reset(J3DTexGenBlock*);                                                          // _08
	virtual void calc(const Mtx);                                                                 // _0C
	virtual void calcWithoutViewMtx(const Mtx);                                                   // _10
	virtual void calcPostTexMtx(const Mtx);                                                       // _14
	virtual void calcPostTexMtxWithoutViewMtx(const Mtx);                                         // _18
	virtual void load() { }                                                                       // _1C (weak)
	virtual void patch();                                                                         // _20
	virtual void diff(u32);                                                                       // _24
	virtual void diffTexMtx();                                                                    // _28
	virtual void diffTexGen();                                                                    // _2C
	virtual u32 countDLSize();                                                                    // _30
	virtual JBlockType getType() { return JBT_TexGenPatched; }                                    // _34 (weak)
	virtual void setTexGenNum(const u32* texGenNum) { mTexGenCnt = *texGenNum; }                  // _38 (weak)
	virtual void setTexGenNum(u32 texGenNum) { mTexGenCnt = texGenNum; }                          // _3C (weak)
	virtual u32 getTexGenNum() const { return mTexGenCnt; }                                       // _40 (weak)
	virtual void setTexCoord(u32 index, const J3DTexCoord* coord) { mTexCoords[index] = *coord; } // _44 (weak)
	virtual J3DTexCoord* getTexCoord(u32 index) { return &mTexCoords[index]; }                    // _48 (weak)
	virtual void setTexMtx(u32 index, J3DTexMtx* mtx) { mTexMatrices[index] = mtx; }              // _4C (weak)
	virtual J3DTexMtx* getTexMtx(u32 index) { return mTexMatrices[index]; }                       // _50 (weak)
	virtual u32 getTexMtxOffset() const { return mTexMtxOffset; }                                 // _60 (weak)
	virtual void setTexMtxOffset(u32 offset) { mTexMtxOffset = offset; }                          // _64 (weak)
	virtual ~J3DTexGenBlockPatched() { }                                                          // _68 (weak)

	void initialize();

	// _00 = VTBL
	u32 mTexGenCnt;             // _04
	J3DTexCoord mTexCoords[8];  // _08
	J3DTexMtx* mTexMatrices[8]; // _38
	u32 mTexMtxOffset;          // _58
};

struct J3DTexGenBlockBasic : public J3DTexGenBlockPatched {
	inline J3DTexGenBlockBasic()
	    : J3DTexGenBlockPatched()
	    , mNbtScale()
	{
		initialize();
	}

	virtual void reset(J3DTexGenBlock*);                                       // _08
	virtual void load();                                                       // _1C
	virtual void patch();                                                      // _20
	virtual u32 countDLSize();                                                 // _30
	virtual JBlockType getType() { return JBT_TexGenBasic; }                   // _34 (weak)
	virtual void setNBTScale(const J3DNBTScale* scale) { mNbtScale = *scale; } // _54 (weak)
	virtual void setNBTScale(J3DNBTScale scale) { mNbtScale = scale; }         // _58 (weak)
	virtual J3DNBTScale* getNBTScale() { return &mNbtScale; }                  // _5C (weak)
	virtual ~J3DTexGenBlockBasic() { }                                         // _68 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_5C = J3DTexGenBlockPatched
	J3DNBTScale mNbtScale; // _5C
};

struct J3DTexGenBlock4 : public J3DTexGenBlockPatched {
	inline J3DTexGenBlock4()
	    : J3DTexGenBlockPatched()
	    , mNbtScale()
	{
		initialize();
	}
	virtual void reset(J3DTexGenBlock*);                                       // _08
	virtual void load();                                                       // _1C
	virtual void patch();                                                      // _20
	virtual u32 countDLSize();                                                 // _30
	virtual JBlockType getType() { return JBT_TexGen4; }                       // _34 (weak)
	virtual void setNBTScale(const J3DNBTScale* scale) { mNbtScale = *scale; } // _54 (weak)
	virtual void setNBTScale(J3DNBTScale scale) { mNbtScale = scale; }         // _58 (weak)
	virtual J3DNBTScale* getNBTScale() { return &mNbtScale; }                  // _5C (weak)
	virtual ~J3DTexGenBlock4() { }                                             // _68 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_5C = J3DTexGenBlockPatched
	J3DNBTScale mNbtScale; // _5C
};

#endif
