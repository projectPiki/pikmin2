#ifndef _J3DTEXGENBLOCK_H
#define _J3DTEXGENBLOCK_H

struct J3DTexGenBlock {
	virtual void reset(J3DTexGenBlock*);                         // _00
	virtual void _04() = 0;                                      // _04
	virtual void _08() = 0;                                      // _08
	virtual void _0C() = 0;                                      // _0C
	virtual void _10() = 0;                                      // _10
	virtual void _14() = 0;                                      // _14
	virtual void _18() = 0;                                      // _18
	virtual void _1C() = 0;                                      // _1C
	virtual void _20() = 0;                                      // _20
	virtual void _24() = 0;                                      // _24
	virtual void countDLSize();                                  // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void setTexGenNum(const unsigned long*);             // _30
	virtual void setTexGenNum(unsigned long);                    // _34
	virtual void getTexGenNum() const;                           // _38
	virtual void setTexCoord(unsigned long, const J3DTexCoord*); // _3C
	virtual void getTexCoord(unsigned long);                     // _40
	virtual void setTexMtx(unsigned long, J3DTexMtx*);           // _44
	virtual void getTexMtx(unsigned long);                       // _48
	virtual void setNBTScale(const J3DNBTScale*);                // _4C
	virtual void setNBTScale(J3DNBTScale);                       // _50
	virtual void getNBTScale();                                  // _54
	virtual void getTexMtxOffset() const;                        // _58
	virtual void setTexMtxOffset(unsigned long);                 // _5C
	virtual ~J3DTexGenBlock();                                   // _60

	// _00 VTBL
};

#endif
