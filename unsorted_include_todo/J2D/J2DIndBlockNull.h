#ifndef _J2DINDBLOCKNULL_H
#define _J2DINDBLOCKNULL_H

/*
    __vt__15J2DIndBlockNull:
    .4byte 0
    .4byte 0
    .4byte initialize__11J2DIndBlockFv
    .4byte setGX__15J2DIndBlockNullFv
    .4byte getType__15J2DIndBlockNullFv
    .4byte setIndTexStageNum__11J2DIndBlockFUc
    .4byte getIndTexStageNum__11J2DIndBlockCFv
    .4byte setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder
    .4byte getIndTexOrder__11J2DIndBlockFUl
    .4byte setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx
    .4byte getIndTexMtx__11J2DIndBlockFUl
    .4byte setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale
    .4byte getIndTexCoordScale__11J2DIndBlockFUl
    .4byte __dt__15J2DIndBlockNullFv
*/

struct J2DIndBlock {
	virtual void initialize();                                            // _08 (weak)
	virtual void setGX();                                                 // _0C (weak)
	virtual void getType();                                               // _10 (weak)
	virtual void setIndTexStageNum(unsigned char);                        // _14 (weak)
	virtual void getIndTexStageNum() const;                               // _18 (weak)
	virtual void setIndTexOrder(unsigned long, J2DIndTexOrder);           // _1C (weak)
	virtual void getIndTexOrder(unsigned long);                           // _20 (weak)
	virtual void setIndTexMtx(unsigned long, J2DIndTexMtx);               // _24 (weak)
	virtual void getIndTexMtx(unsigned long);                             // _28 (weak)
	virtual void setIndTexCoordScale(unsigned long, J2DIndTexCoordScale); // _2C (weak)
	virtual void getIndTexCoordScale(unsigned long);                      // _30 (weak)
};

struct J2DIndBlockNull : public J2DIndBlock {
	virtual void setGX();       // _0C (weak)
	virtual void getType();     // _10 (weak)
	virtual ~J2DIndBlockNull(); // _34 (weak)
};

#endif
