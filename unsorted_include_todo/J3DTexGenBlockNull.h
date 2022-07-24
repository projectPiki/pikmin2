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
	virtual void reset(J3DTexGenBlock*);                           // _08 (inline)
	virtual void calc(const float (*)[4]);                         // _0C (inline)
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10 (inline)
	virtual void calcPostTexMtx(const float (*)[4]);               // _14 (inline)
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18 (inline)
	virtual void load();                                           // _1C (inline)
	virtual void patch();                                          // _20 (inline)
	virtual void diff(unsigned long);                              // _24 (inline)
	virtual void diffTexMtx();                                     // _28 (inline)
	virtual void diffTexGen();                                     // _2C (inline)
	virtual void countDLSize();                                    // _30 (inline)
	virtual void getType();                                        // _34 (inline)
	virtual void setTexGenNum(const unsigned long*);               // _38 (inline)
	virtual void setTexGenNum(unsigned long);                      // _3C (inline)
	virtual void getTexGenNum() const;                             // _40 (inline)
	virtual void setTexCoord(unsigned long, const J3DTexCoord*);   // _44 (inline)
	virtual void getTexCoord(unsigned long);                       // _48 (inline)
	virtual void setTexMtx(unsigned long, J3DTexMtx*);             // _4C (inline)
	virtual void getTexMtx(unsigned long);                         // _50 (inline)
	virtual void setNBTScale(const J3DNBTScale*);                  // _54 (inline)
	virtual void setNBTScale(J3DNBTScale);                         // _58 (inline)
	virtual void getNBTScale();                                    // _5C (inline)
	virtual void getTexMtxOffset() const;                          // _60 (inline)
	virtual void setTexMtxOffset(unsigned long);                   // _64 (inline)
};

struct J3DTexGenBlockNull : public J3DTexGenBlock {
	virtual void calc(const float (*)[4]);                         // _0C (inline)
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10 (inline)
	virtual void calcPostTexMtx(const float (*)[4]);               // _14 (inline)
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18 (inline)
	virtual void load();                                           // _1C (inline)
	virtual void patch();                                          // _20 (inline)
	virtual void diff(unsigned long);                              // _24 (inline)
	virtual void diffTexMtx();                                     // _28 (inline)
	virtual void diffTexGen();                                     // _2C (inline)
	virtual void getType();                                        // _34 (inline)
	virtual ~J3DTexGenBlockNull();                                 // _68 (inline)
};

#endif
