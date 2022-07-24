#ifndef _J2DINDBLOCKFULL_H
#define _J2DINDBLOCKFULL_H

/*
    __vt__15J2DIndBlockFull:
    .4byte 0
    .4byte 0
    .4byte initialize__15J2DIndBlockFullFv
    .4byte setGX__15J2DIndBlockFullFv
    .4byte getType__15J2DIndBlockFullFv
    .4byte setIndTexStageNum__15J2DIndBlockFullFUc
    .4byte getIndTexStageNum__15J2DIndBlockFullCFv
    .4byte setIndTexOrder__15J2DIndBlockFullFUl14J2DIndTexOrder
    .4byte getIndTexOrder__15J2DIndBlockFullFUl
    .4byte setIndTexMtx__15J2DIndBlockFullFUl12J2DIndTexMtx
    .4byte getIndTexMtx__15J2DIndBlockFullFUl
    .4byte setIndTexCoordScale__15J2DIndBlockFullFUl19J2DIndTexCoordScale
    .4byte getIndTexCoordScale__15J2DIndBlockFullFUl
    .4byte __dt__15J2DIndBlockFullFv
*/

struct J2DIndBlockFull {
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
	virtual ~J2DIndBlockFull();                                           // _34

	// _00 VTBL
};

#endif
