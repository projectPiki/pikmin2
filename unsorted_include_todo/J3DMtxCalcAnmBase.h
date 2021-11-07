#ifndef _J3DMTXCALCANMBASE_H
#define _J3DMTXCALCANMBASE_H

struct J3DMtxCalc {
	virtual void _00() = 0;                                        // _00
	virtual void _04() = 0;                                        // _04
	virtual void _08() = 0;                                        // _08
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _0C
	virtual void getAnmTransform(unsigned char);                   // _10
	virtual void setWeight(unsigned char, float);                  // _14
	virtual void getWeight(unsigned char) const;                   // _18

	// _00 VTBL
};

struct J3DMtxCalcAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcAnmBase();                                  // _00
	virtual void setAnmTransform(J3DAnmTransform*);                // _04
	virtual void getAnmTransform();                                // _08
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _0C
	virtual void getAnmTransform(unsigned char);                   // _10
	virtual void setWeight(unsigned char, float);                  // _14
	virtual void getWeight(unsigned char) const;                   // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void _20() = 0;                                        // _20

	// _00 VTBL
};

#endif
