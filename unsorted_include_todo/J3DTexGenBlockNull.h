#ifndef _J3DTEXGENBLOCKNULL_H
#define _J3DTEXGENBLOCKNULL_H

/*
    __vt__18J3DTexGenBlockNull:
    .4byte 0
    .4byte 0
    .4byte reset__14J3DTexGenBlockFP14J3DTexGenBlock
    .4byte calc__18J3DTexGenBlockNullFPA4_Cf
    .4byte calcWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf
    .4byte calcPostTexMtx__18J3DTexGenBlockNullFPA4_Cf
    .4byte calcPostTexMtxWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf
    .4byte load__18J3DTexGenBlockNullFv
    .4byte patch__18J3DTexGenBlockNullFv
    .4byte diff__18J3DTexGenBlockNullFUl
    .4byte diffTexMtx__18J3DTexGenBlockNullFv
    .4byte diffTexGen__18J3DTexGenBlockNullFv
    .4byte countDLSize__14J3DTexGenBlockFv
    .4byte getType__18J3DTexGenBlockNullFv
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
    .4byte __dt__18J3DTexGenBlockNullFv
*/

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                           // _08 (weak)
	virtual void calc(const float (*)[4]);                         // _0C (weak)
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10 (weak)
	virtual void calcPostTexMtx(const float (*)[4]);               // _14 (weak)
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18 (weak)
	virtual void load();                                           // _1C (weak)
	virtual void patch();                                          // _20 (weak)
	virtual void diff(unsigned long);                              // _24 (weak)
	virtual void diffTexMtx();                                     // _28 (weak)
	virtual void diffTexGen();                                     // _2C (weak)
	virtual void countDLSize();                                    // _30 (weak)
	virtual void getType();                                        // _34 (weak)
	virtual void setTexGenNum(const unsigned long*);               // _38 (weak)
	virtual void setTexGenNum(unsigned long);                      // _3C (weak)
	virtual void getTexGenNum() const;                             // _40 (weak)
	virtual void setTexCoord(unsigned long, const J3DTexCoord*);   // _44 (weak)
	virtual void getTexCoord(unsigned long);                       // _48 (weak)
	virtual void setTexMtx(unsigned long, J3DTexMtx*);             // _4C (weak)
	virtual void getTexMtx(unsigned long);                         // _50 (weak)
	virtual void setNBTScale(const J3DNBTScale*);                  // _54 (weak)
	virtual void setNBTScale(J3DNBTScale);                         // _58 (weak)
	virtual void getNBTScale();                                    // _5C (weak)
	virtual void getTexMtxOffset() const;                          // _60 (weak)
	virtual void setTexMtxOffset(unsigned long);                   // _64 (weak)
};

struct J3DTexGenBlockNull : public J3DTexGenBlock {
	virtual void calc(const float (*)[4]);                         // _0C (weak)
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10 (weak)
	virtual void calcPostTexMtx(const float (*)[4]);               // _14 (weak)
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18 (weak)
	virtual void load();                                           // _1C (weak)
	virtual void patch();                                          // _20 (weak)
	virtual void diff(unsigned long);                              // _24 (weak)
	virtual void diffTexMtx();                                     // _28 (weak)
	virtual void diffTexGen();                                     // _2C (weak)
	virtual void getType();                                        // _34 (weak)
	virtual ~J3DTexGenBlockNull();                                 // _68 (weak)
};

#endif
