#ifndef _J3DINDBLOCKFULL_H
#define _J3DINDBLOCKFULL_H

/*
    __vt__15J3DIndBlockFull:
    .4byte 0
    .4byte 0
    .4byte reset__15J3DIndBlockFullFP11J3DIndBlock
    .4byte diff__15J3DIndBlockFullFUl
    .4byte load__15J3DIndBlockFullFv
    .4byte countDLSize__15J3DIndBlockFullFv
    .4byte getType__15J3DIndBlockFullFv
    .4byte setIndTexStageNum__15J3DIndBlockFullFUc
    .4byte getIndTexStageNum__15J3DIndBlockFullCFv
    .4byte setIndTexOrder__15J3DIndBlockFullFUl14J3DIndTexOrder
    .4byte setIndTexOrder__15J3DIndBlockFullFUlPC14J3DIndTexOrder
    .4byte getIndTexOrder__15J3DIndBlockFullFUl
    .4byte setIndTexMtx__15J3DIndBlockFullFUlPC12J3DIndTexMtx
    .4byte setIndTexMtx__15J3DIndBlockFullFUl12J3DIndTexMtx
    .4byte getIndTexMtx__15J3DIndBlockFullFUl
    .4byte setIndTexCoordScale__15J3DIndBlockFullFUlPC19J3DIndTexCoordScale
    .4byte setIndTexCoordScale__15J3DIndBlockFullFUl19J3DIndTexCoordScale
    .4byte getIndTexCoordScale__15J3DIndBlockFullFUl
    .4byte __dt__15J3DIndBlockFullFv
*/

struct J3DIndBlockFull {
	virtual void reset(J3DIndBlock*);                                  // _00
	virtual void diff(unsigned long);                                  // _04
	virtual void load();                                               // _08
	virtual void countDLSize();                                        // _0C
	virtual void getType();                                            // _10
	virtual void setIndTexStageNum(unsigned char);                     // _14
	virtual void getIndTexStageNum() const;                            // _18
	virtual void setIndTexOrder(unsigned long, J3DIndTexOrder);        // _1C
	virtual void setIndTexOrder(unsigned long, const J3DIndTexOrder*); // _20
	virtual void getIndTexOrder(unsigned long);                        // _24
	virtual void setIndTexMtx(unsigned long, const J3DIndTexMtx*);     // _28
	virtual void setIndTexMtx(unsigned long, J3DIndTexMtx);            // _2C
	virtual void getIndTexMtx(unsigned long);                          // _30
	virtual void setIndTexCoordScale(unsigned long,
	                                 const J3DIndTexCoordScale*);         // _34
	virtual void setIndTexCoordScale(unsigned long, J3DIndTexCoordScale); // _38
	virtual void getIndTexCoordScale(unsigned long);                      // _3C
	virtual ~J3DIndBlockFull();                                           // _40

	// _00 VTBL
};

#endif
