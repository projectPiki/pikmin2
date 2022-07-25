#ifndef _J3DTEXGENBLOCK_H
#define _J3DTEXGENBLOCK_H

/*
    __vt__14J3DTexGenBlock:
    .4byte 0
    .4byte 0
    .4byte reset__14J3DTexGenBlockFP14J3DTexGenBlock
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte countDLSize__14J3DTexGenBlockFv
    .4byte 0
    .4byte setTexGenNum__14J3DTexGenBlockFPCUl
    .4byte setTexGenNum__14J3DTexGenBlockFUl
    .4byte getTexGenNum__14J3DTexGenBlockCFv
    .4byte setTexCoord__14J3DTexGenBlockFUlPC11J3DTexCoord
    .4byte getTexCoord__14J3DTexGenBlockFUl
    .4byte setTexMtx__14J3DTexGenBlockFUlP9J3DTexMtx
    .4byte getTexMtx__14J3DTexGenBlockFUl
    .4byte setNBTScale__14J3DTexGenBlockFPC11J3DNBTScale
    .4byte setNBTScale__14J3DTexGenBlockF11J3DNBTScale
    .4byte getNBTScale__14J3DTexGenBlockFv
    .4byte getTexMtxOffset__14J3DTexGenBlockCFv
    .4byte setTexMtxOffset__14J3DTexGenBlockFUl
    .4byte __dt__14J3DTexGenBlockFv
*/

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                         // _08 (weak)
	virtual void _0C() = 0;                                      // _0C
	virtual void _10() = 0;                                      // _10
	virtual void _14() = 0;                                      // _14
	virtual void _18() = 0;                                      // _18
	virtual void _1C() = 0;                                      // _1C
	virtual void _20() = 0;                                      // _20
	virtual void _24() = 0;                                      // _24
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void countDLSize();                                  // _30 (weak)
	virtual void _34() = 0;                                      // _34
	virtual void setTexGenNum(const unsigned long*);             // _38 (weak)
	virtual void setTexGenNum(unsigned long);                    // _3C (weak)
	virtual void getTexGenNum() const;                           // _40 (weak)
	virtual void setTexCoord(unsigned long, const J3DTexCoord*); // _44 (weak)
	virtual void getTexCoord(unsigned long);                     // _48 (weak)
	virtual void setTexMtx(unsigned long, J3DTexMtx*);           // _4C (weak)
	virtual void getTexMtx(unsigned long);                       // _50 (weak)
	virtual void setNBTScale(const J3DNBTScale*);                // _54 (weak)
	virtual void setNBTScale(J3DNBTScale);                       // _58 (weak)
	virtual void getNBTScale();                                  // _5C (weak)
	virtual void getTexMtxOffset() const;                        // _60 (weak)
	virtual void setTexMtxOffset(unsigned long);                 // _64 (weak)
	virtual ~J3DTexGenBlock();                                   // _68 (weak)
};

#endif
