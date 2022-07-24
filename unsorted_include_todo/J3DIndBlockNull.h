#ifndef _J3DINDBLOCKNULL_H
#define _J3DINDBLOCKNULL_H

/*
    __vt__15J3DIndBlockNull:
    .4byte 0
    .4byte 0
    .4byte reset__15J3DIndBlockNullFP11J3DIndBlock
    .4byte diff__15J3DIndBlockNullFUl
    .4byte load__15J3DIndBlockNullFv
    .4byte countDLSize__11J3DIndBlockFv
    .4byte getType__15J3DIndBlockNullFv
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
    .4byte __dt__15J3DIndBlockNullFv
*/

struct J3DIndBlock {
	virtual void reset(J3DIndBlock*);                                            // _08 (inline)
	virtual void diff(unsigned long);                                            // _0C (inline)
	virtual void load();                                                         // _10 (inline)
	virtual void countDLSize();                                                  // _14 (inline)
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
};

struct J3DIndBlockNull : public J3DIndBlock {
	virtual void reset(J3DIndBlock*); // _08 (inline)
	virtual void diff(unsigned long); // _0C (inline)
	virtual void load();              // _10 (inline)
	virtual void getType();           // _18 (inline)
	virtual ~J3DIndBlockNull();       // _48 (inline)
};

#endif
