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
	virtual void reset(J3DIndBlock*);                                            // _08
	virtual void diff(unsigned long);                                            // _0C
	virtual void load();                                                         // _10
	virtual void countDLSize();                                                  // _14
	virtual void getType();                                                      // _18 (inline)
	virtual void setIndTexStageNum(unsigned char);                               // _1C (inline)
	virtual void getIndTexStageNum() const;                                      // _20 (inline)
	virtual void setIndTexOrder(unsigned long, J3DIndTexOrder);                  // _24 (inline)
	virtual void setIndTexOrder(unsigned long, const J3DIndTexOrder*);           // _28 (inline)
	virtual void getIndTexOrder(unsigned long);                                  // _2C (inline)
	virtual void setIndTexMtx(unsigned long, const J3DIndTexMtx*);               // _30 (inline)
	virtual void setIndTexMtx(unsigned long, J3DIndTexMtx);                      // _34 (inline)
	virtual void getIndTexMtx(unsigned long);                                    // _38 (inline)
	virtual void setIndTexCoordScale(unsigned long, const J3DIndTexCoordScale*); // _3C (inline)
	virtual void setIndTexCoordScale(unsigned long, J3DIndTexCoordScale);        // _40 (inline)
	virtual void getIndTexCoordScale(unsigned long);                             // _44 (inline)
	virtual ~J3DIndBlockFull();                                                  // _48 (inline)
};

#endif
