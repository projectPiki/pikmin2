#ifndef _J3DTEXGENBLOCK4_H
#define _J3DTEXGENBLOCK4_H

/*
    __vt__15J3DTexGenBlock4:
    .4byte 0
    .4byte 0
    .4byte reset__15J3DTexGenBlock4FP14J3DTexGenBlock
    .4byte calc__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte load__15J3DTexGenBlock4Fv
    .4byte patch__15J3DTexGenBlock4Fv
    .4byte diff__21J3DTexGenBlockPatchedFUl
    .4byte diffTexMtx__21J3DTexGenBlockPatchedFv
    .4byte diffTexGen__21J3DTexGenBlockPatchedFv
    .4byte countDLSize__15J3DTexGenBlock4Fv
    .4byte getType__15J3DTexGenBlock4Fv
    .4byte setTexGenNum__21J3DTexGenBlockPatchedFPCUl
    .4byte setTexGenNum__21J3DTexGenBlockPatchedFUl
    .4byte getTexGenNum__21J3DTexGenBlockPatchedCFv
    .4byte setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord
    .4byte getTexCoord__21J3DTexGenBlockPatchedFUl
    .4byte setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx
    .4byte getTexMtx__21J3DTexGenBlockPatchedFUl
    .4byte setNBTScale__15J3DTexGenBlock4FPC11J3DNBTScale
    .4byte setNBTScale__15J3DTexGenBlock4F11J3DNBTScale
    .4byte getNBTScale__15J3DTexGenBlock4Fv
    .4byte getTexMtxOffset__21J3DTexGenBlockPatchedCFv
    .4byte setTexMtxOffset__21J3DTexGenBlockPatchedFUl
    .4byte __dt__15J3DTexGenBlock4Fv
*/

struct J3DTexGenBlockPatched {
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

struct J3DTexGenBlock4 : public J3DTexGenBlockPatched {
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
	virtual ~J3DTexGenBlock4();                                    // _60

	// _00 VTBL
};

#endif
