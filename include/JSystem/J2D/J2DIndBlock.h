#ifndef _JSYSTEM_J2D_J2DINDBLOCK_H
#define _JSYSTEM_J2D_J2DINDBLOCK_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J2DIndTexCoordScaleInfo {
	u8 _00;
	u8 _01;
};

/**
 * @size{0x2}
 */
struct J2DIndTexCoordScale {
	J2DIndTexCoordScale();
	~J2DIndTexCoordScale() { }

	void load(u8);

	u8 _00; // _00
	u8 _01; // _01
};

struct J2DIndTexMtxInfo {
	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
	u8 _18;  // _18
};

/**
 * @size{0x1C}
 */
struct J2DIndTexMtx {
	J2DIndTexMtx();
	~J2DIndTexMtx() { }

	void load(u8);

	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
	u8 _18;  // _18
};

extern J2DIndTexMtxInfo j2dDefaultIndTexMtxInfo;

/**
 * @size{0x2}
 */
struct J2DIndTexOrder {
	J2DIndTexOrder();
	void load(u8);

	u8 _00; // _00
	u8 _01; // _01
};

struct J2DIndBlock {
	virtual void initialize() { }                                                             // _08 (weak)
	virtual void setGX() { }                                                                  // _0C (weak)
	virtual u32 getType() = 0;                                                                // _10
	virtual void setIndTexStageNum(u8 texStageNum) { }                                        // _14 (weak)
	virtual u8 getIndTexStageNum() const { return 0; }                                        // _18 (weak)
	virtual void setIndTexOrder(unsigned long index, J2DIndTexOrder order) { }                // _1C (weak)
	virtual J2DIndTexOrder* getIndTexOrder(unsigned long index) { return nullptr; }           // _20 (weak)
	virtual void setIndTexMtx(unsigned long index, J2DIndTexMtx texMtx) { }                   // _24 (weak)
	virtual J2DIndTexMtx* getIndTexMtx(unsigned long index) { return nullptr; }               // _28 (weak)
	virtual void setIndTexCoordScale(unsigned long index, J2DIndTexCoordScale scale) { }      // _2C (weak)
	virtual J2DIndTexCoordScale* getIndTexCoordScale(unsigned long index) { return nullptr; } // _30 (weak)
	virtual ~J2DIndBlock() { }                                                                // _34 (weak)

	//  _00 VTBL
};

struct J2DIndBlockNull : public J2DIndBlock {
	inline J2DIndBlockNull()
	    : J2DIndBlock()
	{
	}

	virtual void setGX();       // _0C (weak)
	virtual u32 getType();      // _10 (weak)
	virtual ~J2DIndBlockNull(); // _34 (weak)
};

struct J2DIndBlockFull : public J2DIndBlock {
	inline J2DIndBlockFull()
	    : J2DIndBlock()
	    , m_texOrders()
	    , m_texMtxes()
	    , m_texCoordScales()
	{
		initialize();
	}

	virtual void initialize();                                                                                            // _08
	virtual void setGX();                                                                                                 // _0C
	virtual u32 getType() { return JBT_IndFull; }                                                                         // _10 (weak)
	virtual void setIndTexStageNum(u8 texStageNum) { m_texStageNum = texStageNum; }                                       // _14 (weak)
	virtual u8 getIndTexStageNum() const { return m_texStageNum; }                                                        // _18 (weak)
	virtual void setIndTexOrder(unsigned long index, J2DIndTexOrder order) { m_texOrders[index] = order; }                // _1C (weak)
	virtual J2DIndTexOrder* getIndTexOrder(unsigned long index) { return m_texOrders + index; }                           // _20 (weak)
	virtual void setIndTexMtx(unsigned long, J2DIndTexMtx);                                                               // _24 (weak)
	virtual J2DIndTexMtx* getIndTexMtx(unsigned long index) { return m_texMtxes + index; }                                // _28 (weak)
	virtual void setIndTexCoordScale(unsigned long index, J2DIndTexCoordScale scale) { m_texCoordScales[index] = scale; } // _2C (weak)
	virtual J2DIndTexCoordScale* getIndTexCoordScale(unsigned long index) { return m_texCoordScales + index; }            // _30 (weak)
	virtual ~J2DIndBlockFull() { }                                                                                        // _34 (weak)

	u8 m_texStageNum;              // _04
	J2DIndTexOrder m_texOrders[4]; // _05
	u32 : 0;
	J2DIndTexMtx m_texMtxes[3];              // _10
	J2DIndTexCoordScale m_texCoordScales[4]; // _64
};

#endif
