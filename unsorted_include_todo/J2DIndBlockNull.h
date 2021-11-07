#ifndef _J2DINDBLOCKNULL_H
#define _J2DINDBLOCKNULL_H

struct J2DIndBlock {
	virtual void initialize();                                            // _00
	virtual void _04() = 0;                                               // _04
	virtual void _08() = 0;                                               // _08
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
