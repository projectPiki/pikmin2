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
	virtual void reset(J3DTexGenBlock*);                           // _00
	virtual void calc(const float (*)[4]);                         // _04
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _08
	virtual void calcPostTexMtx(const float (*)[4]);               // _0C
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _10
	virtual void load();                                           // _14
	virtual void patch();                                          // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffTexMtx();                                     // _20
	virtual void diffTexGen();                                     // _24
	virtual void countDLSize();                                    // _28
	virtual void getType();                                        // _2C
	virtual void setTexGenNum(const unsigned long*);               // _30
	virtual void setTexGenNum(unsigned long);                      // _34
	virtual void getTexGenNum() const;                             // _38
	virtual void setTexCoord(unsigned long, const J3DTexCoord*);   // _3C
	virtual void getTexCoord(unsigned long);                       // _40
	virtual void setTexMtx(unsigned long, J3DTexMtx*);             // _44
	virtual void getTexMtx(unsigned long);                         // _48
	virtual void setNBTScale(const J3DNBTScale*);                  // _4C
	virtual void setNBTScale(J3DNBTScale);                         // _50
	virtual void getNBTScale();                                    // _54
	virtual void getTexMtxOffset() const;                          // _58
	virtual void setTexMtxOffset(unsigned long);                   // _5C

	// _00 VTBL
};

struct J3DTexGenBlockNull : public J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                           // _00
	virtual void calc(const float (*)[4]);                         // _04
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _08
	virtual void calcPostTexMtx(const float (*)[4]);               // _0C
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _10
	virtual void load();                                           // _14
	virtual void patch();                                          // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffTexMtx();                                     // _20
	virtual void diffTexGen();                                     // _24
	virtual void countDLSize();                                    // _28
	virtual void getType();                                        // _2C
	virtual void setTexGenNum(const unsigned long*);               // _30
	virtual void setTexGenNum(unsigned long);                      // _34
	virtual void getTexGenNum() const;                             // _38
	virtual void setTexCoord(unsigned long, const J3DTexCoord*);   // _3C
	virtual void getTexCoord(unsigned long);                       // _40
	virtual void setTexMtx(unsigned long, J3DTexMtx*);             // _44
	virtual void getTexMtx(unsigned long);                         // _48
	virtual void setNBTScale(const J3DNBTScale*);                  // _4C
	virtual void setNBTScale(J3DNBTScale);                         // _50
	virtual void getNBTScale();                                    // _54
	virtual void getTexMtxOffset() const;                          // _58
	virtual void setTexMtxOffset(unsigned long);                   // _5C
	virtual ~J3DTexGenBlockNull();                                 // _60

	// _00 VTBL
};

#endif
