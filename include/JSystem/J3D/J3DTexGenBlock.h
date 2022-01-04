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
	virtual void diff(ulong)                                      = 0; // _1C
	virtual void diffTexMtx()                                     = 0; // _20
	virtual void diffTexGen()                                     = 0; // _24
	virtual i32 countDLSize();                                        // _28
	virtual JBlockType getType() = 0;                                  // _2C
	virtual void setTexGenNum(const ulong*);                           // _30
	virtual void setTexGenNum(ulong);                                  // _34
	virtual ulong getTexGenNum() const;                                // _38
	virtual void setTexCoord(ulong, const J3DTexCoord*);               // _3C
	virtual J3DTexCoord* getTexCoord(ulong);                           // _40
	virtual void setTexMtx(ulong, J3DTexMtx*);                         // _44
	virtual J3DTexMtx* getTexMtx(ulong);                               // _48
	virtual void setNBTScale(const J3DNBTScale*);                      // _4C
	virtual void setNBTScale(J3DNBTScale);                             // _50
	virtual J3DNBTScale* getNBTScale();                                // _54
	virtual ulong getTexMtxOffset() const;                             // _58
	virtual void setTexMtxOffset(ulong);                               // _5C
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
	virtual void diff(ulong);                                      // _1C
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
	virtual void diff(ulong);                                      // _1C
	virtual void diffTexMtx();                                     // _20
	virtual void diffTexGen();                                     // _24
	virtual i32 countDLSize();                                    // _28
	virtual JBlockType getType();                                  // _2C
	virtual void setTexGenNum(const ulong*);                       // _30
	virtual void setTexGenNum(ulong);                              // _34
	virtual ulong getTexGenNum() const;                            // _38
	virtual void setTexCoord(ulong, const J3DTexCoord*);           // _3C
	virtual J3DTexCoord* getTexCoord(ulong);                       // _40
	virtual void setTexMtx(ulong, J3DTexMtx*);                     // _44
	virtual J3DTexMtx* getTexMtx(ulong);                           // _48
	virtual ulong getTexMtxOffset() const;                         // _58
	virtual void setTexMtxOffset(ulong);                           // _5C
	virtual ~J3DTexGenBlockPatched();                              // _60

	// VTBL _00
	ulong m_texgenCnt;           // _04
	J3DTexCoord m_texCoords[8];  // _08
	J3DTexMtx* m_texMatrices[8]; // _38
	u32* m_dlistOffs;            // _58
};

struct J3DTexGenBlockBasic : public J3DTexGenBlockPatched {
	virtual void reset(J3DTexGenBlock*);          // _00
	virtual void load();                          // _14
	virtual void patch();                         // _18
	virtual i32 countDLSize();                   // _28
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
	virtual i32 countDLSize();                   // _28
	virtual JBlockType getType();                 // _2C
	virtual void setNBTScale(const J3DNBTScale*); // _4C
	virtual void setNBTScale(J3DNBTScale);        // _50
	virtual J3DNBTScale* getNBTScale();           // _54
	virtual ~J3DTexGenBlock4();                   // _60

	J3DNBTScale m_nbtScale; // _5C
};

#endif
