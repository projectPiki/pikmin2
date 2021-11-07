#ifndef _J3DTEXGENBLOCKPATCHED_H
#define _J3DTEXGENBLOCKPATCHED_H

struct J3DTexGenBlock {
	virtual void _00() = 0;                       // _00
	virtual void _04() = 0;                       // _04
	virtual void _08() = 0;                       // _08
	virtual void _0C() = 0;                       // _0C
	virtual void _10() = 0;                       // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
	virtual void _1C() = 0;                       // _1C
	virtual void _20() = 0;                       // _20
	virtual void _24() = 0;                       // _24
	virtual void _28() = 0;                       // _28
	virtual void _2C() = 0;                       // _2C
	virtual void _30() = 0;                       // _30
	virtual void _34() = 0;                       // _34
	virtual void _38() = 0;                       // _38
	virtual void _3C() = 0;                       // _3C
	virtual void _40() = 0;                       // _40
	virtual void _44() = 0;                       // _44
	virtual void _48() = 0;                       // _48
	virtual void setNBTScale(const J3DNBTScale*); // _4C
	virtual void setNBTScale(J3DNBTScale);        // _50
	virtual void getNBTScale();                   // _54

	// _00 VTBL
};

struct J3DTexGenBlockPatched : public J3DTexGenBlock {
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
	virtual ~J3DTexGenBlockPatched();                              // _60

	// _00 VTBL
};

#endif
