#ifndef _JSYSTEM_J3D_J3DPE_H
#define _JSYSTEM_J3D_J3DPE_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DFog {
	u8 _00;       // _00
	u8 _01;       // _01
	u16 _02;      // _02
	f32 _04;      // _04
	f32 _08;      // _08
	f32 _0C;      // _0C
	f32 _10;      // _10
	u8 _14;       // _14
	u8 _15;       // _15
	u8 _16;       // _16
	u8 _17;       // _17
	u16 _18[0xA]; // _18
};

/**
 * @size{0x4}
 */
struct J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08 (weak)
	virtual void load() = 0;                        // _0C
	virtual void patch();                           // _10 (weak)
	virtual void diff(unsigned long);               // _14 (weak)
	virtual void diffFog();                         // _18 (weak)
	virtual void diffBlend();                       // _1C (weak)
	virtual u32 countDLSize();                      // _20 (weak)
	virtual JBlockType getType() = 0;               // _24
	virtual void setFog(J3DFog);                    // _28 (weak)
	virtual void setFog(J3DFog*);                   // _2C (weak)
	virtual J3DFog* getFog();                       // _30 (weak)
	virtual void setAlphaComp(const J3DAlphaComp*); // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp&); // _38 (weak)
	virtual J3DAlphaComp* getAlphaComp();           // _3C (weak)
	virtual void setBlend(const J3DBlend*);         // _40 (weak)
	virtual void setBlend(const J3DBlend&);         // _44 (weak)
	virtual J3DBlend* getBlend();                   // _48 (weak)
	virtual void setZMode(const J3DZMode*);         // _4C (weak)
	virtual void setZMode(J3DZMode);                // _50 (weak)
	virtual J3DZMode* getZMode();                   // _54 (weak)
	virtual void setZCompLoc(const unsigned char*); // _58 (weak)
	virtual void setZCompLoc(unsigned char);        // _5C (weak)
	virtual u8 getZCompLoc() const;                 // _60 (weak)
	virtual void setDither(const unsigned char*);   // _64 (weak)
	virtual void setDither(unsigned char);          // _68 (weak)
	virtual u8 getDither() const;                   // _6C (weak)
	virtual u32 getFogOffset() const;               // _70 (weak)
	virtual void setFogOffset(unsigned long);       // _74 (weak)
	virtual ~J3DPEBlock();                          // _78 (weak)
};

struct J3DPEBlockFogOff : public J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08
	virtual void load();                            // _0C
	virtual void diff(unsigned long);               // _14 (weak)
	virtual void diffBlend();                       // _1C
	virtual u32 countDLSize();                      // _20
	virtual JBlockType getType();                   // _24 (weak)
	virtual void setAlphaComp(const J3DAlphaComp*); // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp&); // _38 (weak)
	virtual J3DAlphaComp* getAlphaComp();           // _3C (weak)
	virtual void setBlend(const J3DBlend*);         // _40 (weak)
	virtual void setBlend(const J3DBlend&);         // _44 (weak)
	virtual J3DBlend* getBlend();                   // _48 (weak)
	virtual void setZMode(const J3DZMode*);         // _4C (weak)
	virtual void setZMode(J3DZMode);                // _50 (weak)
	virtual J3DZMode* getZMode();                   // _54 (weak)
	virtual void setZCompLoc(const unsigned char*); // _58 (weak)
	virtual void setZCompLoc(unsigned char);        // _5C (weak)
	virtual u8 getZCompLoc() const;                 // _60 (weak)
	virtual void setDither(const unsigned char*);   // _64 (weak)
	virtual void setDither(unsigned char);          // _68 (weak)
	virtual u8 getDither() const;                   // _6C (weak)
	virtual ~J3DPEBlockFogOff();                    // _78 (weak)

	void initialize();

	J3DAlphaComp m_alphaComp; // _04
	J3DBlend m_blend;         // _08
	J3DZMode m_zMode;         // _0C
	u8 _0E;                   // _0E
	u8 m_dither;              // _0F
};

struct J3DPEBlockFull : public J3DPEBlock {
	virtual void reset(J3DPEBlock*);  // _08
	virtual void load();              // _0C
	virtual void patch();             // _10
	virtual void diff(unsigned long); // _14
	virtual void diffFog();           // _18
	virtual void diffBlend();         // _1C
	virtual u32 countDLSize();        // _20
	/**
	 * @reifiedAddress{800816D0}
	 * @reifiedFile{JSystem/J3D/J3DMatBlock.cpp}
	 */
	virtual JBlockType getType() // _24 (weak)
	{
		return JBT_PEFull;
	}
	virtual void setFog(J3DFog);                    // _28 (weak)
	virtual void setFog(J3DFog*);                   // _2C (weak)
	virtual J3DFog* getFog();                       // _30 (weak)
	virtual void setAlphaComp(const J3DAlphaComp*); // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp&); // _38 (weak)
	virtual J3DAlphaComp* getAlphaComp();           // _3C (weak)
	virtual void setBlend(const J3DBlend*);         // _40 (weak)
	virtual void setBlend(const J3DBlend&);         // _44 (weak)
	virtual J3DBlend* getBlend();                   // _48 (weak)
	virtual void setZMode(const J3DZMode*);         // _4C (weak)
	virtual void setZMode(J3DZMode);                // _50 (weak)
	virtual J3DZMode* getZMode();                   // _54 (weak)
	virtual void setZCompLoc(const unsigned char*); // _58 (weak)
	virtual void setZCompLoc(unsigned char);        // _5C (weak)
	virtual u8 getZCompLoc() const;                 // _60 (weak)
	/**
	 * @reifiedAddress{80081910}
	 * @reifiedFile{JSystem/J3D/J3DMatBlock.cpp}
	 */
	virtual void setDither(const unsigned char* dither) // _64 (weak)
	{
		m_dither = *dither;
	}
	/**
	 * @reifiedAddress{80081908}
	 * @reifiedFile{JSystem/J3D/J3DMatBlock.cpp}
	 */
	virtual void setDither(unsigned char dither) // _68 (weak)
	{
		m_dither = dither;
	}
	/**
	 * @reifiedAddress{8008191C}
	 * @reifiedFile{JSystem/J3D/J3DMatBlock.cpp}
	 */
	virtual u8 getDither() const // _6C (weak)
	{
		return m_dither;
	}
	/**
	 * @reifiedAddress{80081924}
	 * @reifiedFile{JSystem/J3D/J3DMatBlock.cpp}
	 */
	virtual u32 getFogOffset() const // _70 (weak)
	{
		return m_fogOffset;
	}
	/**
	 * @reifiedAddress{8008192C}
	 * @reifiedFile{JSystem/J3D/J3DMatBlock.cpp}
	 */
	virtual void setFogOffset(unsigned long fogOffset) // _74 (weak)
	{
		m_fogOffset = fogOffset;
	}
	virtual ~J3DPEBlockFull(); // _78 (weak)

	void initialize();

	J3DFog m_fog;             // _04
	J3DAlphaComp m_alphaComp; // _30
	J3DBlend m_blend;         // _34
	J3DZMode m_zMode;         // _38
	u8 _3A;                   // _3A
	u8 m_dither;              // _3B
	u32 m_fogOffset;          // _3C
};

/**
 * @size{0x4}
 */
struct J3DPEBlockNull : public J3DPEBlock {
	virtual void load();          // _0C (weak)
	virtual JBlockType getType(); // _24 (weak)
	virtual ~J3DPEBlockNull();    // _78 (weak)
};

/**
 * @size{0x4}
 */
struct J3DPEBlockOpa : public J3DPEBlock {
	virtual void load();          // _0C
	virtual u32 countDLSize();    // _20
	virtual JBlockType getType(); // _24 (weak)
	virtual ~J3DPEBlockOpa();     // _78 (weak)
};

/**
 * @size{0x4}
 */
struct J3DPEBlockTexEdge : public J3DPEBlock {
	virtual void load();          // _0C
	virtual u32 countDLSize();    // _20
	virtual JBlockType getType(); // _24 (weak)
	virtual ~J3DPEBlockTexEdge(); // _78 (weak)
};

/**
 * @size{0x4}
 */
struct J3DPEBlockXlu : public J3DPEBlock {
	virtual void load();          // _0C
	virtual u32 countDLSize();    // _20
	virtual JBlockType getType(); // _24 (weak)
	virtual ~J3DPEBlockXlu();     // _78 (weak)
};

#endif
