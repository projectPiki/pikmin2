#ifndef _J3DINDBLOCKNULL_H
#define _J3DINDBLOCKNULL_H

struct J3DIndBlock {
	virtual void _00() = 0;                                            // _00
	virtual void _04() = 0;                                            // _04
	virtual void _08() = 0;                                            // _08
	virtual void countDLSize();                                        // _0C
	virtual void _10() = 0;                                            // _10
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

	// _00 VTBL
};

struct J3DIndBlockNull : public J3DIndBlock {
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
	virtual ~J3DIndBlockNull();                                           // _40

	// _00 VTBL
};

#endif
