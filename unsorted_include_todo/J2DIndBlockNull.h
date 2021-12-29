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
	virtual void initialize();                                            // _00
	virtual void setGX();                                                 // _04
	virtual void getType();                                               // _08
	virtual void setIndTexStageNum(unsigned char);                        // _0C
	virtual void getIndTexStageNum() const;                               // _10
	virtual void setIndTexOrder(unsigned long, J2DIndTexOrder);           // _14
	virtual void getIndTexOrder(unsigned long);                           // _18
	virtual void setIndTexMtx(unsigned long, J2DIndTexMtx);               // _1C
	virtual void getIndTexMtx(unsigned long);                             // _20
	virtual void setIndTexCoordScale(unsigned long, J2DIndTexCoordScale); // _24
	virtual void getIndTexCoordScale(unsigned long);                      // _28

	// _00 VTBL
};

struct J2DIndBlockNull : public J2DIndBlock {
	virtual void initialize();                                            // _00
	virtual void setGX();                                                 // _04
	virtual void getType();                                               // _08
	virtual void setIndTexStageNum(unsigned char);                        // _0C
	virtual void getIndTexStageNum() const;                               // _10
	virtual void setIndTexOrder(unsigned long, J2DIndTexOrder);           // _14
	virtual void getIndTexOrder(unsigned long);                           // _18
	virtual void setIndTexMtx(unsigned long, J2DIndTexMtx);               // _1C
	virtual void getIndTexMtx(unsigned long);                             // _20
	virtual void setIndTexCoordScale(unsigned long, J2DIndTexCoordScale); // _24
	virtual void getIndTexCoordScale(unsigned long);                      // _28
	virtual ~J2DIndBlockNull();                                           // _2C

	// _00 VTBL
};

#endif
