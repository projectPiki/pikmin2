#ifndef _J3DINDBLOCK_H
#define _J3DINDBLOCK_H

/*
    __vt__11J3DIndBlock:
    .4byte 0
    .4byte 0
    .4byte reset__11J3DIndBlockFP11J3DIndBlock
    .4byte 0
    .4byte 0
    .4byte countDLSize__11J3DIndBlockFv
    .4byte 0
    .4byte setIndTexStageNum__11J3DIndBlockFUc
    .4byte getIndTexStageNum__11J3DIndBlockCFv
    .4byte setIndTexOrder__11J3DIndBlockFUl14J3DIndTexOrder
    .4byte setIndTexOrder__11J3DIndBlockFUlPC14J3DIndTexOrder
    .4byte getIndTexOrder__11J3DIndBlockFUl
    .4byte setIndTexMtx__11J3DIndBlockFUlPC12J3DIndTexMtx
    .4byte setIndTexMtx__11J3DIndBlockFUl12J3DIndTexMtx
    .4byte getIndTexMtx__11J3DIndBlockFUl
    .4byte setIndTexCoordScale__11J3DIndBlockFUlPC19J3DIndTexCoordScale
    .4byte setIndTexCoordScale__11J3DIndBlockFUl19J3DIndTexCoordScale
    .4byte getIndTexCoordScale__11J3DIndBlockFUl
    .4byte __dt__11J3DIndBlockFv
*/

struct J3DIndBlock {
	virtual void reset(J3DIndBlock*);                                            // _08 (weak)
	virtual void _0C() = 0;                                                      // _0C
	virtual void _10() = 0;                                                      // _10
	virtual void countDLSize();                                                  // _14 (weak)
	virtual void _18() = 0;                                                      // _18
	virtual void setIndTexStageNum(unsigned char);                               // _1C (weak)
	virtual void getIndTexStageNum() const;                                      // _20 (weak)
	virtual void setIndTexOrder(unsigned long, J3DIndTexOrder);                  // _24 (weak)
	virtual void setIndTexOrder(unsigned long, const J3DIndTexOrder*);           // _28 (weak)
	virtual void getIndTexOrder(unsigned long);                                  // _2C (weak)
	virtual void setIndTexMtx(unsigned long, const J3DIndTexMtx*);               // _30 (weak)
	virtual void setIndTexMtx(unsigned long, J3DIndTexMtx);                      // _34 (weak)
	virtual void getIndTexMtx(unsigned long);                                    // _38 (weak)
	virtual void setIndTexCoordScale(unsigned long, const J3DIndTexCoordScale*); // _3C (weak)
	virtual void setIndTexCoordScale(unsigned long, J3DIndTexCoordScale);        // _40 (weak)
	virtual void getIndTexCoordScale(unsigned long);                             // _44 (weak)
	virtual ~J3DIndBlock();                                                      // _48 (weak)
};

#endif
