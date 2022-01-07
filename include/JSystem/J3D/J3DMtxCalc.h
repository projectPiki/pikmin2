#ifndef _JSYSTEM_J3D_J3DMTXCALC_H
#define _JSYSTEM_J3D_J3DMTXCALC_H

struct J3DAnmTransform;
struct J3DMtxBuffer;
struct Vec;

struct J3DMtxCalc {
	virtual ~J3DMtxCalc();                                         // _00
	virtual void setAnmTransform(J3DAnmTransform*);                // _04
	virtual void getAnmTransform();                                // _08
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _0C
	virtual void getAnmTransform(unsigned char);                   // _10
	virtual void setWeight(unsigned char, float);                  // _14
	virtual void getWeight(unsigned char) const;                   // _18
	virtual void init(const Vec&, const float (&)[3][4]) = 0;      // _1C
	virtual void calc()                                  = 0;      // _20

	/**
	 * @reifiedAddress{80088650}
	 * @reifiedFile{JSystem/J3D/J3DJointTree.cpp}
	 */
	static void setMtxBuffer(J3DMtxBuffer* buffer) { mMtxBuffer = buffer; }

	// _00 VTBL

	static J3DMtxBuffer* mMtxBuffer;
};

struct J3DMtxCalcNoAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcNoAnmBase(); // _00
};

struct J3DMtxCalcAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcAnmBase();                   // _00
	virtual void setAnmTransform(J3DAnmTransform*); // _04
	virtual void getAnmTransform();                 // _08

	J3DAnmTransform* _04; // _04
};

struct J3DMtxCalcBlendAnmBase : public J3DMtxCalcAnmBase {
	virtual ~J3DMtxCalcBlendAnmBase();                             // _00
	virtual void setAnmTransform(J3DAnmTransform*);                // _04
	virtual void getAnmTransform();                                // _08
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _0C
	virtual void getAnmTransform(unsigned char);                   // _10
	virtual void setWeight(unsigned char, float);                  // _14
	virtual void getWeight(unsigned char) const;                   // _18

	J3DAnmTransform* _08; // _08
	J3DAnmTransform* _0C; // _0C
	J3DAnmTransform* _10; // _10
	float _14;            // _14
	float _18;            // _18
	float _1C;            // _1C
	float _20;            // _20
};

#endif
