#ifndef _JSYSTEM_J3D_J3DTEXGENBLOCK_H
#define _JSYSTEM_J3D_J3DTEXGENBLOCK_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DNBTScale;
struct J3DTexMtx;

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                               // _00
	virtual void calc(const float (*)[4])                         = 0; // _04
	virtual void calcWithoutViewMtx(const float (*)[4])           = 0; // _08
	virtual void calcPostTexMtx(const float (*)[4])               = 0; // _0C
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]) = 0; // _10
	virtual void load()                                           = 0; // _14
	virtual void patch()                                          = 0; // _18
	virtual void diff(u32)                                        = 0; // _1C
	virtual void diffTexMtx()                                     = 0; // _20
	virtual void diffTexGen()                                     = 0; // _24
	virtual i32 countDLSize();                                         // _28
	virtual JBlockType getType() = 0;                                  // _2C
	virtual void setTexGenNum(const u32*);                             // _30
	virtual void setTexGenNum(u32);                                    // _34
	virtual u32 getTexGenNum() const;                                  // _38
	virtual void setTexCoord(u32, const J3DTexCoord*);                 // _3C
	virtual J3DTexCoord* getTexCoord(u32);                             // _40
	virtual void setTexMtx(u32, J3DTexMtx*);                           // _44
	virtual J3DTexMtx* getTexMtx(u32);                                 // _48
	virtual void setNBTScale(const J3DNBTScale*);                      // _4C
	virtual void setNBTScale(J3DNBTScale);                             // _50
	virtual J3DNBTScale* getNBTScale();                                // _54
	virtual u32 getTexMtxOffset() const;                               // _58
	virtual void setTexMtxOffset(u32);                                 // _5C
	virtual ~J3DTexGenBlock();                                         // _60

	// VTBL _00
};

/**
 * @size{0x4}
 */
struct J3DTexGenBlockNull : public J3DTexGenBlock {
	virtual void calc(const float (*)[4]);                         // _04
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _08
	virtual void calcPostTexMtx(const float (*)[4]);               // _0C
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _10
	virtual void load();                                           // _14
	virtual void patch();                                          // _18
	virtual void diff(u32);                                        // _1C
	virtual void diffTexMtx();                                     // _20
	virtual void diffTexGen();                                     // _24
	virtual JBlockType getType();                                  // _2C
	virtual ~J3DTexGenBlockNull();                                 // _60
};

struct J3DTexGenBlockPatched : public J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                           // _00
	virtual void calc(const float (*)[4]);                         // _04
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _08
	virtual void calcPostTexMtx(const float (*)[4]);               // _0C
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _10
	virtual void load();                                           // _14
	virtual void patch();                                          // _18
	virtual void diff(u32);                                        // _1C
	virtual void diffTexMtx();                                     // _20
	virtual void diffTexGen();                                     // _24
	virtual i32 countDLSize();                                     // _28
	virtual JBlockType getType();                                  // _2C
	virtual void setTexGenNum(const u32*);                         // _30
	virtual void setTexGenNum(u32);                                // _34
	virtual u32 getTexGenNum() const;                              // _38
	virtual void setTexCoord(u32, const J3DTexCoord*);             // _3C
	virtual J3DTexCoord* getTexCoord(u32);                         // _40
	virtual void setTexMtx(u32, J3DTexMtx*);                       // _44
	virtual J3DTexMtx* getTexMtx(u32);                             // _48
	virtual u32 getTexMtxOffset() const;                           // _58
	virtual void setTexMtxOffset(u32);                             // _5C
	virtual ~J3DTexGenBlockPatched();                              // _60

	// VTBL _00
	u32 m_texgenCnt;             // _04
	J3DTexCoord m_texCoords[8];  // _08
	J3DTexMtx* m_texMatrices[8]; // _38
	u32* m_dlistOffs;            // _58
};

struct J3DTexGenBlockBasic : public J3DTexGenBlockPatched {
	virtual void reset(J3DTexGenBlock*);          // _00
	virtual void load();                          // _14
	virtual void patch();                         // _18
	virtual i32 countDLSize();                    // _28
	virtual JBlockType getType();                 // _2C
	virtual void setNBTScale(const J3DNBTScale*); // _4C
	virtual void setNBTScale(J3DNBTScale);        // _50
	virtual J3DNBTScale* getNBTScale();           // _54
	virtual ~J3DTexGenBlockBasic();               // _60

	J3DNBTScale m_nbtScale; // _5C
};

struct J3DTexGenBlock4 : public J3DTexGenBlockPatched {
	virtual void reset(J3DTexGenBlock*);          // _00
	virtual void load();                          // _14
	virtual void patch();                         // _18
	virtual i32 countDLSize();                    // _28
	virtual JBlockType getType();                 // _2C
	virtual void setNBTScale(const J3DNBTScale*); // _4C
	virtual void setNBTScale(J3DNBTScale);        // _50
	virtual J3DNBTScale* getNBTScale();           // _54
	virtual ~J3DTexGenBlock4();                   // _60

	J3DNBTScale m_nbtScale; // _5C
};

#endif
