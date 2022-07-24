#ifndef _J2DINDBLOCK_H
#define _J2DINDBLOCK_H

/*
    __vt__11J2DIndBlock:
    .4byte 0
    .4byte 0
    .4byte initialize__11J2DIndBlockFv
    .4byte setGX__11J2DIndBlockFv
    .4byte 0
    .4byte setIndTexStageNum__11J2DIndBlockFUc
    .4byte getIndTexStageNum__11J2DIndBlockCFv
    .4byte setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder
    .4byte getIndTexOrder__11J2DIndBlockFUl
    .4byte setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx
    .4byte getIndTexMtx__11J2DIndBlockFUl
    .4byte setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale
    .4byte getIndTexCoordScale__11J2DIndBlockFUl
    .4byte __dt__11J2DIndBlockFv
*/

struct J2DIndBlock {
	virtual void initialize();                                            // _08 (inline)
	virtual void setGX();                                                 // _0C (inline)
	virtual void _10() = 0;                                               // _10
	virtual void setIndTexStageNum(unsigned char);                        // _14 (inline)
	virtual void getIndTexStageNum() const;                               // _18 (inline)
	virtual void setIndTexOrder(unsigned long, J2DIndTexOrder);           // _1C (inline)
	virtual void getIndTexOrder(unsigned long);                           // _20 (inline)
	virtual void setIndTexMtx(unsigned long, J2DIndTexMtx);               // _24 (inline)
	virtual void getIndTexMtx(unsigned long);                             // _28 (inline)
	virtual void setIndTexCoordScale(unsigned long, J2DIndTexCoordScale); // _2C (inline)
	virtual void getIndTexCoordScale(unsigned long);                      // _30 (inline)
	virtual ~J2DIndBlock();                                               // _34 (inline)
};

#endif
