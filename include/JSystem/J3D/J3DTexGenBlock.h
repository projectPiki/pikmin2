#ifndef _JSYSTEM_J3D_J3DTEXGENBLOCK_H
#define _JSYSTEM_J3D_J3DTEXGENBLOCK_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DNBTScale;
struct J3DTexMtx;

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                               // _08 (weak)
	virtual void calc(const float (*)[4])                         = 0; // _0C
	virtual void calcWithoutViewMtx(const float (*)[4])           = 0; // _10
	virtual void calcPostTexMtx(const float (*)[4])               = 0; // _14
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]) = 0; // _18
	virtual void load()                                           = 0; // _1C
	virtual void patch()                                          = 0; // _20
	virtual void diff(u32)                                        = 0; // _24
	virtual void diffTexMtx()                                     = 0; // _28
	virtual void diffTexGen()                                     = 0; // _2C
	virtual u32 countDLSize();                                         // _30 (weak)
	virtual JBlockType getType() = 0;                                  // _34
	virtual void setTexGenNum(const u32*);                             // _38 (weak)
	virtual void setTexGenNum(u32);                                    // _3C (weak)
	/**
	 * @reifiedAddress{800602D0}
	 * @reifiedFile{JSystem/J3D/J3DPacket.cpp}
	 */
	virtual u32 getTexGenNum() const // _40 (weak)
	{
		return 0;
	}
	virtual void setTexCoord(u32, const J3DTexCoord*); // _44 (weak)
	virtual J3DTexCoord* getTexCoord(u32);             // _48 (weak)
	virtual void setTexMtx(u32, J3DTexMtx*);           // _4C (weak)
	virtual J3DTexMtx* getTexMtx(u32);                 // _50 (weak)
	virtual void setNBTScale(const J3DNBTScale*);      // _54 (weak)
	virtual void setNBTScale(J3DNBTScale);             // _58 (weak)
	virtual J3DNBTScale* getNBTScale();                // _5C (weak)
	virtual u32 getTexMtxOffset() const;               // _60 (weak)
	virtual void setTexMtxOffset(u32);                 // _64 (weak)
	/**
	 * @reifiedAddress{80061A24}
	 * @reifiedFile{JSystem/J3D/J3DMaterial.cpp}
	 */
	virtual ~J3DTexGenBlock() {}; // _68 (weak)

	// VTBL _00
};

/**
 * @size{0x4}
 */
struct J3DTexGenBlockNull : public J3DTexGenBlock {
	virtual void calc(const float (*)[4]);                         // _0C (weak)
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10 (weak)
	virtual void calcPostTexMtx(const float (*)[4]);               // _14 (weak)
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18 (weak)
	virtual void load();                                           // _1C (weak)
	virtual void patch();                                          // _20 (weak)
	virtual void diff(u32);                                        // _24 (weak)
	virtual void diffTexMtx();                                     // _28 (weak)
	virtual void diffTexGen();                                     // _2C (weak)
	virtual JBlockType getType();                                  // _34 (weak)
	/**
	 * @reifiedAddress{8006F5FC}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual ~J3DTexGenBlockNull() {}; // _68 (weak)
};

struct J3DTexGenBlockPatched : public J3DTexGenBlock {
	inline J3DTexGenBlockPatched()
	    : J3DTexGenBlock()
	    , m_texCoords()
	{
		initialize();
	}

	virtual void reset(J3DTexGenBlock*);                           // _08
	virtual void calc(const float (*)[4]);                         // _0C
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10
	virtual void calcPostTexMtx(const float (*)[4]);               // _14
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18
	virtual void load();                                           // _1C (weak)
	virtual void patch();                                          // _20
	virtual void diff(u32);                                        // _24
	virtual void diffTexMtx();                                     // _28
	virtual void diffTexGen();                                     // _2C
	virtual u32 countDLSize();                                     // _30
	virtual JBlockType getType();                                  // _34 (weak)
	virtual void setTexGenNum(const u32*);                         // _38 (weak)
	virtual void setTexGenNum(u32);                                // _3C (weak)
	virtual u32 getTexGenNum() const;                              // _40 (weak)
	virtual void setTexCoord(u32, const J3DTexCoord*);             // _44 (weak)
	virtual J3DTexCoord* getTexCoord(u32);                         // _48 (weak)
	virtual void setTexMtx(u32, J3DTexMtx*);                       // _4C (weak)
	virtual J3DTexMtx* getTexMtx(u32);                             // _50 (weak)
	virtual u32 getTexMtxOffset() const;                           // _60 (weak)
	virtual void setTexMtxOffset(u32);                             // _64 (weak)
	/**
	 * @reifiedAddress{800619A0}
	 * @reifiedFile{JSystem/J3D/J3DMaterial.cpp}
	 */
	virtual ~J3DTexGenBlockPatched() {}; // _68 (weak)

	void initialize();

	// VTBL _00
	u32 m_texgenCnt;             // _04
	J3DTexCoord m_texCoords[8];  // _08
	J3DTexMtx* m_texMatrices[8]; // _38
	u32 m_dlistOffs;             // _58
};

struct J3DTexGenBlockBasic : public J3DTexGenBlockPatched {
	inline J3DTexGenBlockBasic()
	    : J3DTexGenBlockPatched()
	    , m_nbtScale()
	{
		initialize();
	}

	virtual void reset(J3DTexGenBlock*);          // _08
	virtual void load();                          // _1C
	virtual void patch();                         // _20
	virtual u32 countDLSize();                    // _30
	virtual JBlockType getType();                 // _34 (weak)
	virtual void setNBTScale(const J3DNBTScale*); // _54 (weak)
	virtual void setNBTScale(J3DNBTScale);        // _58 (weak)
	virtual J3DNBTScale* getNBTScale();           // _5C (weak)
	virtual ~J3DTexGenBlockBasic() {};            // _68 (weak)

	void initialize();

	J3DNBTScale m_nbtScale; // _5C
};

struct J3DTexGenBlock4 : public J3DTexGenBlockPatched {
	inline J3DTexGenBlock4()
	    : J3DTexGenBlockPatched()
	    , m_nbtScale()
	{
		initialize();
	}
	virtual void reset(J3DTexGenBlock*);          // _08
	virtual void load();                          // _1C
	virtual void patch();                         // _20
	virtual u32 countDLSize();                    // _30
	virtual JBlockType getType();                 // _34 (weak)
	virtual void setNBTScale(const J3DNBTScale*); // _54 (weak)
	virtual void setNBTScale(J3DNBTScale);        // _58 (weak)
	virtual J3DNBTScale* getNBTScale();           // _5C (weak)
	virtual ~J3DTexGenBlock4() {};                // _68 (weak)

	void initialize();

	J3DNBTScale m_nbtScale; // _5C
};

#endif
