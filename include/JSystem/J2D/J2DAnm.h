#ifndef _JSYSTEM_J2D_J2DANM_H
#define _JSYSTEM_J2D_J2DANM_H

#include "JSystem/JUtility/JUTPalette.h"
#include "JSystem/ResTIMG.h"
#include "types.h"
#include "Dolphin/gx.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/JMath.h"

struct J2DAnmTexPatternTIMGPointer;
struct J2DScreen;
struct J3DAnmColorFullTable;
struct J3DAnmColorKeyTable;
struct J3DAnmCRegKeyTable;
struct J3DAnmKRegKeyTable;
struct J3DAnmTexPatternFullTable;
struct J3DAnmTransformFullTable;
struct J3DAnmTransformKeyTable;
struct J3DAnmVisibilityFullTable;
struct J3DTransformInfo;
struct J3DTextureSRTInfo;
struct Vec;

enum J2DAnmKind {
	J2DANM_Transform      = 0,
	J2DANM_Color          = 1,
	J2DANM_TexturePattern = 2,
	J2DANM_Unk3           = 3,
	J2DANM_TextureSRT     = 4,
	J2DANM_TevReg         = 5,
	J2DANM_VisibilityFull = 6,
	J2DANM_VtxColor       = 7,
};

struct J2DAnmBase {
	J2DAnmBase()
	{
		mCurrentFrame = 0.0f;
		mFrameLength  = 0;
	}

	virtual ~J2DAnmBase() { }                           // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*) { } // _0C (weak)

	inline s16 getFrameMax() const { return mFrameLength; }
	inline void setFrame(f32 frame) { mCurrentFrame = frame; }
	inline f32 getFrame() const { return mCurrentFrame; }
	inline J2DAnmKind getKind() const { return mKind; }

	// VTBL _00
	u8 _04;            // _04
	u8 _05;            // _05
	s16 mFrameLength;  // _06
	f32 mCurrentFrame; // _08
	J2DAnmKind mKind;  // _0C
};

struct J2DAnmColor : public J2DAnmBase {
	J2DAnmColor()
	{
		_16                = 0;
		_14                = 0;
		_12                = 0;
		_10                = 0;
		mUpdateMaterialNum = 0;
		mUpdateMaterialID  = nullptr;
		mKind              = J2DANM_Color;
	}

	virtual ~J2DAnmColor() { }                       // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C
	virtual void getColor(u16, GXColor*) const;      // _10 (weak)

	inline u16 getUpdateMaterialNum() const { return mUpdateMaterialNum; }
	inline u16 getUpdateMaterialID(u16 i) const { return mUpdateMaterialID[i]; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 _10;                // _10
	u16 _12;                // _12
	u16 _14;                // _14
	u16 _16;                // _16
	u16 mUpdateMaterialNum; // _18
	u16* mUpdateMaterialID; // _1C, array of IDs
	JUTNameTab mNameTab;    // _20
};

// Size: 0x44
struct J2DAnmColorFull : public J2DAnmColor {
	J2DAnmColorFull()
	{
		mRedVals   = nullptr;
		mGreenVals = nullptr;
		mBlueVals  = nullptr;
		mAlphaVals = nullptr;
		mTables    = nullptr;
	}

	virtual ~J2DAnmColorFull() { }              // _08 (weak)
	virtual void getColor(u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_30 = J2DAnmColor
	u8* mRedVals;                  // _30
	u8* mGreenVals;                // _34
	u8* mBlueVals;                 // _38
	u8* mAlphaVals;                // _3C
	J3DAnmColorFullTable* mTables; // _40
};

// Size: 0x44
struct J2DAnmColorKey : public J2DAnmColor {
	J2DAnmColorKey()
	{
		mRedVals   = nullptr;
		mGreenVals = nullptr;
		mBlueVals  = nullptr;
		mAlphaVals = nullptr;
		mTables    = nullptr;
	}

	virtual ~J2DAnmColorKey() { }               // _08 (weak)
	virtual void getColor(u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_30 = J2DAnmColor
	s16* mRedVals;                // _30
	s16* mGreenVals;              // _34
	s16* mBlueVals;               // _38
	s16* mAlphaVals;              // _3C
	J3DAnmColorKeyTable* mTables; // _40
};

// Size: 0x74
struct J2DAnmTevRegKey : public J2DAnmBase {
	J2DAnmTevRegKey()
	{
		mKRegUpdateMaterialNum = 0;
		mCRegUpdateMaterialNum = 0;
		_1A                    = 0;
		_18                    = 0;
		_16                    = 0;
		_14                    = 0;
		_22                    = 0;
		_20                    = 0;
		_1E                    = 0;
		_1C                    = 0;
		mKRegUpdateMaterialID  = nullptr;
		mCRegUpdateMaterialID  = nullptr;
		mCAlphaVals            = nullptr;
		mCBlueVals             = nullptr;
		mCGreenVals            = nullptr;
		mCRedVals              = nullptr;
		mKAlphaVals            = nullptr;
		mKBlueVals             = nullptr;
		mKGreenVals            = nullptr;
		mKRedVals              = nullptr;
		mKind                  = J2DANM_TevReg;
	}

	virtual ~J2DAnmTevRegKey() { }                   // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	void getTevColorReg(u16, GXColorS10*) const;
	void getTevKonstReg(u16, GXColor*) const;

	inline u16 getCRegUpdateMaterialNum() const { return mCRegUpdateMaterialNum; }
	inline u16 getCRegUpdateMaterialID(u16 i) const { return mCRegUpdateMaterialID[i]; }

	inline u16 getKRegUpdateMaterialNum() const { return mKRegUpdateMaterialNum; }
	inline u16 getKRegUpdateMaterialID(u16 i) const { return mKRegUpdateMaterialID[i]; }

	inline J3DAnmCRegKeyTable* getAnmCRegKeyTable() const { return mCRegKeyTable; }
	inline J3DAnmKRegKeyTable* getAnmKRegKeyTable() const { return mKRegKeyTable; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 mCRegUpdateMaterialNum;        // _10, element count of _24
	u16 mKRegUpdateMaterialNum;        // _12, element count of _38
	u16 _14;                           // _14
	u16 _16;                           // _16
	u16 _18;                           // _18
	u16 _1A;                           // _1A
	u16 _1C;                           // _1C
	u16 _1E;                           // _1E
	u16 _20;                           // _20
	u16 _22;                           // _22
	u16* mCRegUpdateMaterialID;        // _24
	JUTNameTab mCRegNameTab;           // _28
	u16* mKRegUpdateMaterialID;        // _38
	JUTNameTab mKRegNameTab;           // _3C
	J3DAnmCRegKeyTable* mCRegKeyTable; // _4C
	J3DAnmKRegKeyTable* mKRegKeyTable; // _50
	s16* mCRedVals;                    // _54
	s16* mCGreenVals;                  // _58
	s16* mCBlueVals;                   // _5C
	s16* mCAlphaVals;                  // _60
	s16* mKRedVals;                    // _64
	s16* mKGreenVals;                  // _68
	s16* mKBlueVals;                   // _6C
	s16* mKAlphaVals;                  // _70
};

// Size: 0x34
struct J2DAnmTexPattern : public J2DAnmBase {
	struct J2DAnmTexPatternTIMGPointer {
		J2DAnmTexPatternTIMGPointer();

		~J2DAnmTexPatternTIMGPointer();

		ResTIMG* mImg;        // _00
		JUTPalette* mPalette; // _04
	};

	J2DAnmTexPattern()
	{
		mValues            = nullptr;
		mAnmTable          = nullptr;
		mKind              = J2DANM_TexturePattern;
		mUpdateMaterialNum = 0;
		mUpdateMaterialID  = nullptr;
		mImgPtrArray       = nullptr;
	}

	virtual ~J2DAnmTexPattern() { delete[] mImgPtrArray; } // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*);       // _0C

	void getTexNo(u16, u16*) const;
	ResTIMG* getResTIMG(u16) const;
	JUTPalette* getPalette(u16) const;

	inline u16 getUpdateMaterialNum() const { return mUpdateMaterialNum; }
	inline u16 getUpdateMaterialID(u16 i) const { return mUpdateMaterialID[i]; }
	inline J3DAnmTexPatternFullTable* getAnmTable() const { return mAnmTable; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16* mValues;                              // _10
	J3DAnmTexPatternFullTable* mAnmTable;      // _14
	u16 _18;                                   // _18
	u16 mUpdateMaterialNum;                    // _1A
	u16* mUpdateMaterialID;                    // _1C
	JUTNameTab mNameTab;                       // _20
	J2DAnmTexPatternTIMGPointer* mImgPtrArray; // _30
};

// Size: 0x88
// NB: this has a different size to the one in the Twilight Princess repo.
struct J2DAnmTextureSRTKey : public J2DAnmBase {
	J2DAnmTextureSRTKey()
	{ // taken from TP - may need tweaking for P2 given different sized struct?
		_10                = 0;
		_20                = 0;
		_1E                = 0;
		_1C                = 0;
		mUpdateMaterialNum = 0;
		mInfoTable         = nullptr;
		mTranslationVals   = nullptr;
		mScaleVals         = nullptr;
		mRotationVals      = nullptr;
		_50                = 0;
		_4E                = 0;
		_4C                = 0;
		_60                = nullptr;
		_64                = nullptr;
		_5C                = nullptr;
		_54                = nullptr;
		_58                = nullptr;
		_84                = 0;
		mKind              = J2DANM_TextureSRT;
	}

	virtual ~J2DAnmTextureSRTKey() { }               // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	void calcTransform(f32, u16, J3DTextureSRTInfo*) const;

	// unused/inlined:
	void calcPostTransform(f32, u16, J3DTextureSRTInfo*) const;

	inline u16 getUpdateMaterialNum() const { return mUpdateMaterialNum / 3; }
	inline u16 getUpdateMaterialID(u16 i) const { return mUpdateMaterialID[i]; }
	inline u8 getUpdateTexMtxID(u16 i) const { return mUpdateTexMtxID[i]; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u32 _10;                             // _10
	u16 mUpdateMaterialNum;              // _14
	J3DAnmTransformKeyTable* mInfoTable; // _18
	u16 _1C;                             // _1C
	u16 _1E;                             // _1E
	u16 _20;                             // _20
	u16 _22;                             // _22
	f32* mScaleVals;                     // _24
	s16* mRotationVals;                  // _28
	f32* mTranslationVals;               // _2C
	u8* mUpdateTexMtxID;                 // _30
	u16* mUpdateMaterialID;              // _34
	JUTNameTab mNameTab;                 // _38
	Vec* _48;                            // _48
	u16 _4C;                             // _4C
	u16 _4E;                             // _4E
	u16 _50;                             // _50
	u16 _52;                             // _52
	f32* _54;                            // _54
	s16* _58;                            // _58
	f32* _5C;                            // _5C
	u16 _60;                             // _60
	J3DAnmTransformKeyTable* _64;        // _64
	u8* _68;                             // _68
	u16* _6C;                            // _6C
	JUTNameTab mNameTab2;                // _70
	Vec* _80;                            // _80
	u32 _84;                             // _84
};

struct J2DAnmTransform : public J2DAnmBase {
	J2DAnmTransform(f32* pScaleValues, s16* pRotationValues, f32* pTranslateValues)
	{
		mScaleVals       = pScaleValues;
		mRotationVals    = pRotationValues;
		mTranslationVals = pTranslateValues;
		mKind            = J2DANM_Transform;
	}

	virtual ~J2DAnmTransform() { }                              // _08 (weak)
	virtual void getTransform(u16, J3DTransformInfo*) const { } // _10 (weak)

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	f32* mScaleVals;       // _10
	s16* mRotationVals;    // _14
	f32* mTranslationVals; // _18
};

// Size: 0x28
struct J2DAnmTransformFull : public J2DAnmTransform {
	J2DAnmTransformFull()
	    : J2DAnmTransform(nullptr, nullptr, nullptr)
	{
		mTable = nullptr;
	}

	virtual ~J2DAnmTransformFull() { }                       // _08 (weak)
	virtual void getTransform(u16, J3DTransformInfo*) const; // _10

	// _00     = VTBL
	// _00-_1C = J2DAnmTransform
	u8 _1C[6];                        // _1C, unknown
	u16 _22;                          // _22
	J3DAnmTransformFullTable* mTable; // _24
};

// Size: 0x2C
struct J2DAnmTransformKey : public J2DAnmTransform {
	J2DAnmTransformKey()
	    : J2DAnmTransform(nullptr, nullptr, nullptr)
	{
		_24        = 0;
		mInfoTable = nullptr;
	}

	virtual ~J2DAnmTransformKey() { }                               // _08 (weak)
	virtual void getTransform(u16 p1, J3DTransformInfo* info) const // _10 (weak)
	{
		calcTransform(getFrame(), p1, info);
	}
	virtual void calcTransform(f32, u16, J3DTransformInfo*) const; // _14

	// _00     = VTBL
	// _00-_1C = J2DAnmTransform
	u8 _1C[6];                           // _1C, unknown
	u16 _22;                             // _22
	int _24;                             // _24
	J3DAnmTransformKeyTable* mInfoTable; // _28
};

// Size: 0x1C
struct J2DAnmVisibilityFull : public J2DAnmBase {
	J2DAnmVisibilityFull()
	{
		_10     = 0;
		mTable  = nullptr;
		_12     = 0;
		mValues = nullptr;
		mKind   = J2DANM_VisibilityFull;
	}

	virtual ~J2DAnmVisibilityFull() { } // _08 (weak)

	void getVisibility(u16, u8*) const;

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 _10;                           // _10
	u16 _12;                           // _12
	J3DAnmVisibilityFullTable* mTable; // _14
	u8* mValues;                       // _18
};

struct J2DAnmVtxColor : public J2DAnmBase {
	J2DAnmVtxColor()
	{
		mKind = J2DANM_VtxColor;
		for (int i = 0; i < ARRAY_SIZE(mAnmTableNum); i++) {
			mAnmTableNum[i] = 0;
		}
		for (int i = 0; i < ARRAY_SIZE(mVtxColorIndexData); i++) {
			mVtxColorIndexData[i] = nullptr;
		}
	}

	virtual ~J2DAnmVtxColor() { }                      // _08 (weak)
	virtual void getColor(u8, u16, GXColor*) const { } // _10 (weak)

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 mAnmTableNum[2];                            // _10
	J3DAnmVtxColorIndexData* mVtxColorIndexData[2]; // _14
	u16* mVtxColorIndexPtr[2];                      // _1C
};

struct J2DAnmVtxColorFull : public J2DAnmVtxColor {
	J2DAnmVtxColorFull()
	{
		for (int i = 0; i < ARRAY_SIZE(mInfoTables); i++) {
			mInfoTables[i] = nullptr;
		}
	}

	virtual ~J2DAnmVtxColorFull() { }               // _08 (weak)
	virtual void getColor(u8, u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_24 = J2DAnmVtxColor
	J3DAnmColorFullTable* mInfoTables[2]; // _24
	u8* mRedVals;                         // _2C
	u8* mGreenVals;                       // _30
	u8* mBlueVals;                        // _34
	u8* mAlphaVals;                       // _38
};

// Size: 0x3C
struct J2DAnmVtxColorKey : public J2DAnmVtxColor {
	J2DAnmVtxColorKey()
	{
		for (int i = 0; i < ARRAY_SIZE(mInfoTables); i++) {
			mInfoTables[i] = nullptr;
		}
	}

	virtual ~J2DAnmVtxColorKey() { }                // _08 (weak)
	virtual void getColor(u8, u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_24 = J2DAnmVtxColor
	J3DAnmColorKeyTable* mInfoTables[2]; // _24
	s16* mRedVals;                       // _2C
	s16* mGreenVals;                     // _30
	s16* mBlueVals;                      // _34
	s16* mAlphaVals;                     // _38
};

template <typename T>
inline f32 J2DHermiteInterpolation(f32, T*, T*, T*, T*, T*, T*);

template <>
inline f32 J2DHermiteInterpolation<f32>(f32 f1, f32* f2, f32* f3, f32* f4, f32* f5, f32* f6, f32* f7)
{
	return JMAHermiteInterpolation(f1, *f2, *f3, *f4, *f5, *f6, *f7);
}

template <>
inline f32 J2DHermiteInterpolation<s16>(register f32 pp1, register s16* pp2, register s16* pp3, register s16* pp4, register s16* pp5,
                                        register s16* pp6, register s16* pp7)
{
	register f32 p1 = pp1;
	register f32 ff8;
	register f32 ff7;
	register f32 ff6;
	register f32 ff5;
	register f32 ff4;
	register f32 ff3;
	register f32 ff2;
	register f32 ff0;
	register f32 fout;
	register s16* p2 = pp2;
	register s16* p3 = pp3;
	register s16* p4 = pp4;
	register s16* p5 = pp5;
	register s16* p6 = pp6;
	register s16* p7 = pp7;
	// clang-format off
    asm {
        psq_l ff2, 0(p2), 0x1, 5
        psq_l ff0, 0(p5), 0x1, 5
        psq_l ff7, 0(p3), 0x1, 5
        fsubs ff5, ff0, ff2
        psq_l ff6, 0(p6), 0x1, 5
        fsubs ff3, p1, ff2
        psq_l ff0, 0(p7), 0x1, 5
        fsubs ff4, ff6, ff7
        fdivs ff3, ff3, ff5
        psq_l fout, 0(p4), 0x1, 5
        fmadds ff0, ff0, ff5, ff7
        fmuls ff2, ff3, ff3
        fnmsubs ff4, ff5, fout, ff4
        fsubs ff0, ff0, ff6
        fsubs ff0, ff0, ff4
        fmuls ff0, ff2, ff0
        fmadds fout, ff5, fout, ff0
        fmadds fout, fout, ff3, ff7
        fmadds fout, ff4, ff2, fout
        fsubs fout, fout, ff0
    }
	// clang-format on
	return fout;
}

#endif
