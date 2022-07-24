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
	virtual void initialize();                                            // _08
	virtual void setGX();                                                 // _0C
	virtual void getType();                                               // _10
	virtual void setIndTexStageNum(unsigned char);                        // _14
	virtual void getIndTexStageNum() const;                               // _18
	virtual void setIndTexOrder(unsigned long, J2DIndTexOrder);           // _1C
	virtual void getIndTexOrder(unsigned long);                           // _20
	virtual void setIndTexMtx(unsigned long, J2DIndTexMtx);               // _24
	virtual void getIndTexMtx(unsigned long);                             // _28
	virtual void setIndTexCoordScale(unsigned long, J2DIndTexCoordScale); // _2C
	virtual void getIndTexCoordScale(unsigned long);                      // _30

	// _00 VTBL
};

struct J2DIndBlockNull : public J2DIndBlock {
	virtual void setGX();       // _0C
	virtual void getType();     // _10
	virtual ~J2DIndBlockNull(); // _34

	// _00 VTBL
};

#endif
