#ifndef _J3DTEXGENBLOCKPATCHED_H
#define _J3DTEXGENBLOCKPATCHED_H

/*
    __vt__21J3DTexGenBlockPatched:
    .4byte 0
    .4byte 0
    .4byte reset__21J3DTexGenBlockPatchedFP14J3DTexGenBlock
    .4byte calc__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
    .4byte load__21J3DTexGenBlockPatchedFv
    .4byte patch__21J3DTexGenBlockPatchedFv
    .4byte diff__21J3DTexGenBlockPatchedFUl
    .4byte diffTexMtx__21J3DTexGenBlockPatchedFv
    .4byte diffTexGen__21J3DTexGenBlockPatchedFv
    .4byte countDLSize__21J3DTexGenBlockPatchedFv
    .4byte getType__21J3DTexGenBlockPatchedFv
    .4byte setTexGenNum__21J3DTexGenBlockPatchedFPCUl
    .4byte setTexGenNum__21J3DTexGenBlockPatchedFUl
    .4byte getTexGenNum__21J3DTexGenBlockPatchedCFv
    .4byte setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord
    .4byte getTexCoord__21J3DTexGenBlockPatchedFUl
    .4byte setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx
    .4byte getTexMtx__21J3DTexGenBlockPatchedFUl
    .4byte setNBTScale__14J3DTexGenBlockFPC11J3DNBTScale
    .4byte setNBTScale__14J3DTexGenBlockF11J3DNBTScale
    .4byte getNBTScale__14J3DTexGenBlockFv
    .4byte getTexMtxOffset__21J3DTexGenBlockPatchedCFv
    .4byte setTexMtxOffset__21J3DTexGenBlockPatchedFUl
    .4byte __dt__21J3DTexGenBlockPatchedFv
*/

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                           // _08
	virtual void calc(const float (*)[4]);                         // _0C
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10
	virtual void calcPostTexMtx(const float (*)[4]);               // _14
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18
	virtual void load();                                           // _1C (weak)
	virtual void patch();                                          // _20
	virtual void diff(unsigned long);                              // _24
	virtual void diffTexMtx();                                     // _28
	virtual void diffTexGen();                                     // _2C
	virtual void countDLSize();                                    // _30
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
};

struct J3DTexGenBlockPatched : public J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                           // _08
	virtual void calc(const float (*)[4]);                         // _0C
	virtual void calcWithoutViewMtx(const float (*)[4]);           // _10
	virtual void calcPostTexMtx(const float (*)[4]);               // _14
	virtual void calcPostTexMtxWithoutViewMtx(const float (*)[4]); // _18
	virtual void load();                                           // _1C (weak)
	virtual void patch();                                          // _20
	virtual void diff(unsigned long);                              // _24
	virtual void diffTexMtx();                                     // _28
	virtual void diffTexGen();                                     // _2C
	virtual void countDLSize();                                    // _30
	virtual void getType();                                        // _34 (weak)
	virtual void setTexGenNum(const unsigned long*);               // _38 (weak)
	virtual void setTexGenNum(unsigned long);                      // _3C (weak)
	virtual void getTexGenNum() const;                             // _40 (weak)
	virtual void setTexCoord(unsigned long, const J3DTexCoord*);   // _44 (weak)
	virtual void getTexCoord(unsigned long);                       // _48 (weak)
	virtual void setTexMtx(unsigned long, J3DTexMtx*);             // _4C (weak)
	virtual void getTexMtx(unsigned long);                         // _50 (weak)
	virtual void getTexMtxOffset() const;                          // _60 (weak)
	virtual void setTexMtxOffset(unsigned long);                   // _64 (weak)
	virtual ~J3DTexGenBlockPatched();                              // _68 (weak)

	void initialize();
};

#endif
