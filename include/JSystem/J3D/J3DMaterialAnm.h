#ifndef _JSYSTEM_J3D_J3DMATERIALANM_H
#define _JSYSTEM_J3D_J3DMATERIALANM_H

#include "types.h"

#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"

struct J3DMaterial;
struct J3DTextureSRTInfo;

struct J3DMatColorAnm {
	J3DMatColorAnm();

	~J3DMatColorAnm() { }

	void operator=(J3DMatColorAnm const& other)
	{
		mAnm     = other.mAnm;
		mIndex   = other.mIndex;
		mAnmFlag = other.mAnmFlag;
	}

	void setAnmFlag(bool flag) { mAnmFlag = flag; }
	bool getAnmFlag() const { return mAnmFlag; }
	void calc(GXColor* pColor) const { mAnm->getColor(mIndex, pColor); }

	u16 getIndex() const { return mIndex; }

	u16 mIndex;        // _00
	u16 mAnmFlag;      // _02
	J3DAnmColor* mAnm; // _04
};

struct J3DTexNoAnm {
	J3DTexNoAnm();

	virtual void calc(u16* data) const { mAnm->getTexNo(mIndex, data); } // _08 (weak)

	void operator=(J3DTexNoAnm const& other)
	{
		mAnm     = other.mAnm;
		mIndex   = other.mIndex;
		mAnmFlag = other.mAnmFlag;
	}

	~J3DTexNoAnm() { }

	void setAnmFlag(bool flag) { mAnmFlag = flag; }
	bool getAnmFlag() const { return mAnmFlag; }
	J3DAnmTexPattern* getAnmTexPattern() { return mAnm; }

	// _00 = VTBL
	u16 mIndex;             // _04
	u16 mAnmFlag;           // _06
	J3DAnmTexPattern* mAnm; // _08
};

struct J3DTexMtxAnm {
	J3DTexMtxAnm();

	~J3DTexMtxAnm() { }

	void operator=(J3DTexMtxAnm const& other)
	{
		mAnm     = other.mAnm;
		mIndex   = other.mIndex;
		mAnmFlag = other.mAnmFlag;
	}

	void setAnmFlag(bool flag) { mAnmFlag = flag; }
	void calc(J3DTextureSRTInfo* pSRTInfo) const { mAnm->getTransform(mIndex, pSRTInfo); }
	bool getAnmFlag() const { return mAnmFlag; }

	u16 mIndex;                // _00
	u16 mAnmFlag;              // _02
	J3DAnmTextureSRTKey* mAnm; // _04
};

struct J3DTevColorAnm {
	J3DTevColorAnm();

	~J3DTevColorAnm() { }

	void operator=(J3DTevColorAnm const& other)
	{
		mAnm     = other.mAnm;
		mIndex   = other.mIndex;
		mAnmFlag = other.mAnmFlag;
	}

	void setAnmFlag(bool flag) { mAnmFlag = flag; }
	bool getAnmFlag() const { return mAnmFlag; }
	void calc(GXColorS10* pColor) const { mAnm->getTevColorReg(mIndex, pColor); }

	u16 mIndex;            // _00
	u16 mAnmFlag;          // _02
	J3DAnmTevRegKey* mAnm; // _04
};

struct J3DTevKColorAnm {
	J3DTevKColorAnm();

	~J3DTevKColorAnm() { }

	void operator=(J3DTevKColorAnm const& other)
	{
		mAnm     = other.mAnm;
		mIndex   = other.mIndex;
		mAnmFlag = other.mAnmFlag;
	}

	void setAnmFlag(bool flag) { mAnmFlag = flag; }
	bool getAnmFlag() const { return mAnmFlag; }
	void calc(GXColor* pColor) const { mAnm->getTevKonstReg(mIndex, pColor); }

	u16 mIndex;            // _00
	u16 mAnmFlag;          // _02
	J3DAnmTevRegKey* mAnm; // _04
};

struct J3DMaterialAnm {
	J3DMaterialAnm() { initialize(); }

	virtual ~J3DMaterialAnm() { }          // _08 (weak)
	virtual void calc(J3DMaterial*) const; // _0C

	void initialize();

	// unused/TP debug inlines to do:
	void setMatColorAnm(int, J3DMatColorAnm*);
	void setTexMtxAnm(int, J3DTexMtxAnm*);
	void setTexNoAnm(int, J3DTexNoAnm*);
	void setTevColorAnm(int, J3DTevColorAnm*);
	void setTevKColorAnm(int, J3DTevKColorAnm*);

	const J3DTexMtxAnm& getTexMtxAnm(int i) const { return mTexMtxAnmList[i]; }

	// _00 = VTBL
	J3DMatColorAnm mMatColAnmList[2];   // _04
	J3DTexMtxAnm mTexMtxAnmList[8];     // _14
	J3DTexNoAnm mTexNoAnmList[8];       // _54
	J3DTevColorAnm mTevColAnmList[4];   // _B4
	J3DTevKColorAnm mTevKColAnmList[4]; // _D4
};

#endif
