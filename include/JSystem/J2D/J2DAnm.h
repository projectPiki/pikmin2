#ifndef _JSYSTEM_J2D_J2DANM_H
#define _JSYSTEM_J2D_J2DANM_H

#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/ResTIMG.h"
#include "types.h"
#include "Dolphin/gx.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"

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
		m_currentFrame = 0.0f;
		m_maxFrame     = 0;
	}

	virtual ~J2DAnmBase() { }                        // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C (weak)

	inline s16 getFrameMax() const { return m_maxFrame; }
	inline void setFrame(f32 frame) { m_currentFrame = frame; }
	inline f32 getFrame() const { return m_currentFrame; }
	inline J2DAnmKind getKind() const { return m_kind; }

	// VTBL _00
	u8 _04[2];          // _04, unknown
	s16 m_maxFrame;     // _06
	f32 m_currentFrame; // _08
	J2DAnmKind m_kind;  // _0C
};

struct J2DAnmColor : public J2DAnmBase {
	J2DAnmColor()
	{
		_16                 = 0;
		_14                 = 0;
		_12                 = 0;
		_10                 = 0;
		m_updateMaterialNum = 0;
		m_updateMaterialID  = nullptr;
		m_kind              = J2DANM_Color;
	}

	virtual ~J2DAnmColor() { }                       // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C
	virtual void getColor(u16, GXColor*) const;      // _10 (weak)

	inline u16 getUpdateMaterialNum() const { return m_updateMaterialNum; }
	inline u16 getUpdateMaterialID(u16 i) const { return m_updateMaterialID[i]; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 _10;                 // _10
	u16 _12;                 // _12
	u16 _14;                 // _14
	u16 _16;                 // _16
	u16 m_updateMaterialNum; // _18
	u16* m_updateMaterialID; // _1C, array of IDs
	JUTNameTab m_nameTab;    // _20
};

// Size: 0x44
struct J2DAnmColorFull : public J2DAnmColor {
	J2DAnmColorFull()
	{
		m_redVals   = nullptr;
		m_greenVals = nullptr;
		m_blueVals  = nullptr;
		m_alphaVals = nullptr;
		m_tables    = nullptr;
	}

	virtual ~J2DAnmColorFull() { }              // _08 (weak)
	virtual void getColor(u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_30 = J2DAnmColor
	u8* m_redVals;                  // _30
	u8* m_greenVals;                // _34
	u8* m_blueVals;                 // _38
	u8* m_alphaVals;                // _3C
	J3DAnmColorFullTable* m_tables; // _40
};

// Size: 0x44
struct J2DAnmColorKey : public J2DAnmColor {
	J2DAnmColorKey()
	{
		m_redVals   = nullptr;
		m_greenVals = nullptr;
		m_blueVals  = nullptr;
		m_alphaVals = nullptr;
		m_tables    = nullptr;
	}

	virtual ~J2DAnmColorKey() { }               // _08 (weak)
	virtual void getColor(u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_30 = J2DAnmColor
	s16* m_redVals;                // _30
	s16* m_greenVals;              // _34
	s16* m_blueVals;               // _38
	s16* m_alphaVals;              // _3C
	J3DAnmColorKeyTable* m_tables; // _40
};

// Size: 0x74
struct J2DAnmTevRegKey : public J2DAnmBase {
	J2DAnmTevRegKey()
	{
		m_kRegUpdateMaterialNum = 0;
		m_cRegUpdateMaterialNum = 0;
		_1A                     = 0;
		_18                     = 0;
		_16                     = 0;
		_14                     = 0;
		_22                     = 0;
		_20                     = 0;
		_1E                     = 0;
		_1C                     = 0;
		m_kRegUpdateMaterialID  = nullptr;
		m_cRegUpdateMaterialID  = nullptr;
		m_cAlphaVals            = nullptr;
		m_cBlueVals             = nullptr;
		m_cGreenVals            = nullptr;
		m_cRedVals              = nullptr;
		m_kAlphaVals            = nullptr;
		m_kBlueVals             = nullptr;
		m_kGreenVals            = nullptr;
		m_kRedVals              = nullptr;
		m_kind                  = J2DANM_TevReg;
	}

	virtual ~J2DAnmTevRegKey() { }                   // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	void getTevColorReg(u16, GXColorS10*) const;
	void getTevKonstReg(u16, GXColor*) const;

	inline u16 getCRegUpdateMaterialNum() const { return m_cRegUpdateMaterialNum; }
	inline u16 getCRegUpdateMaterialID(u16 i) const { return m_cRegUpdateMaterialID[i]; }

	inline u16 getKRegUpdateMaterialNum() const { return m_kRegUpdateMaterialNum; }
	inline u16 getKRegUpdateMaterialID(u16 i) const { return m_kRegUpdateMaterialID[i]; }

	inline J3DAnmCRegKeyTable* getAnmCRegKeyTable() const { return m_cRegKeyTable; }
	inline J3DAnmKRegKeyTable* getAnmKRegKeyTable() const { return m_kRegKeyTable; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 m_cRegUpdateMaterialNum;        // _10, element count of _24
	u16 m_kRegUpdateMaterialNum;        // _12, element count of _38
	u16 _14;                            // _14
	u16 _16;                            // _16
	u16 _18;                            // _18
	u16 _1A;                            // _1A
	u16 _1C;                            // _1C
	u16 _1E;                            // _1E
	u16 _20;                            // _20
	u16 _22;                            // _22
	u16* m_cRegUpdateMaterialID;        // _24
	JUTNameTab m_cRegNameTab;           // _28
	u16* m_kRegUpdateMaterialID;        // _38
	JUTNameTab m_kRegNameTab;           // _3C
	J3DAnmCRegKeyTable* m_cRegKeyTable; // _4C
	J3DAnmKRegKeyTable* m_kRegKeyTable; // _50
	s16* m_cRedVals;                    // _54
	s16* m_cGreenVals;                  // _58
	s16* m_cBlueVals;                   // _5C
	s16* m_cAlphaVals;                  // _60
	s16* m_kRedVals;                    // _64
	s16* m_kGreenVals;                  // _68
	s16* m_kBlueVals;                   // _6C
	s16* m_kAlphaVals;                  // _70
};

// Size: 0x34
struct J2DAnmTexPattern : public J2DAnmBase {
	struct J2DAnmTexPatternTIMGPointer {
		J2DAnmTexPatternTIMGPointer();

		~J2DAnmTexPatternTIMGPointer();

		ResTIMG* m_img;        // _00
		JUTPalette* m_palette; // _04
	};

	J2DAnmTexPattern()
	{
		m_values            = nullptr;
		m_anmTable          = nullptr;
		m_kind              = J2DANM_TexturePattern;
		m_updateMaterialNum = 0;
		m_updateMaterialID  = nullptr;
		m_imgPtrArray       = nullptr;
	}

	virtual ~J2DAnmTexPattern() { delete[] m_imgPtrArray; } // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*);        // _0C

	void getTexNo(u16, u16*) const;
	void getResTIMG(u16) const;
	void getPalette(u16) const;

	inline u16 getUpdateMaterialNum() const { return m_updateMaterialNum; }
	inline u16 getUpdateMaterialID(u16 i) const { return m_updateMaterialID[i]; }
	inline J3DAnmTexPatternFullTable* getAnmTable() const { return m_anmTable; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16* m_values;                              // _10
	J3DAnmTexPatternFullTable* m_anmTable;      // _14
	u16 _18;                                    // _18
	u16 m_updateMaterialNum;                    // _1A
	u16* m_updateMaterialID;                    // _1C
	JUTNameTab m_nameTab;                       // _20
	J2DAnmTexPatternTIMGPointer* m_imgPtrArray; // _30
};

// Size: 0x88
// NB: this has a different size to the one in the Twilight Princess repo.
struct J2DAnmTextureSRTKey : public J2DAnmBase {
	J2DAnmTextureSRTKey()
	{ // taken from TP - may need tweaking for P2 given different sized struct?
		_10                 = 0;
		_22                 = 0;
		_20                 = 0;
		_1E                 = 0;
		m_updateMaterialNum = 0;
		m_infoTable         = nullptr;
		m_translationVals   = nullptr;
		m_scaleVals         = nullptr;
		m_rotationVals      = nullptr;
		_50                 = 0;
		_4E                 = 0;
		_4C                 = 0;
		_52                 = 0;
		_60                 = nullptr;
		_5C                 = nullptr;
		_54                 = nullptr;
		_58                 = nullptr;
		_84                 = 0;
		m_kind              = J2DANM_TextureSRT;
	}

	virtual ~J2DAnmTextureSRTKey() { }               // _08 (weak)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	void calcTransform(f32, u16, J3DTextureSRTInfo*) const;

	// unused/inlined:
	void calcPostTransform(f32, u16, J3DTextureSRTInfo*) const;

	inline u16 getUpdateMaterialNum() const { return m_updateMaterialNum / 3; }
	inline u16 getUpdateMaterialID(u16 i) const { return m_updateMaterialID[i]; }
	inline u8 getUpdateTexMtxID(u16 i) const { return m_updateTexMtxID[i]; }

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u32 _10;                              // _10
	u16 _14;                              // _14
	J3DAnmTransformKeyTable* m_infoTable; // _18
	u16 m_updateMaterialNum;              // _1C
	u16 _1E;                              // _1E
	u16 _20;                              // _20
	u16 _22;                              // _22
	f32* m_scaleVals;                     // _24
	s16* m_rotationVals;                  // _28
	f32* m_translationVals;               // _2C
	u8* m_updateTexMtxID;                 // _30
	u16* m_updateMaterialID;              // _34
	JUTNameTab m_nameTab;                 // _38
	Vec* _48;                             // _48
	u16 _4C;                              // _4C
	u16 _4E;                              // _4E
	u16 _50;                              // _50
	u16 _52;                              // _52
	f32* _54;                             // _54
	s16* _58;                             // _58
	f32* _5C;                             // _5C
	u16 _60;                              // _60
	J3DAnmTransformKeyTable* _64;         // _64
	u8* _68;                              // _68
	u16* _6C;                             // _6C
	JUTNameTab _70;                       // _70
	Vec* _80;                             // _80
	u32 _84;                              // _84
};

struct J2DAnmTransform : public J2DAnmBase {
	J2DAnmTransform(f32* pScaleValues, s16* pRotationValues, f32* pTranslateValues)
	{
		m_scaleVals       = pScaleValues;
		m_rotationVals    = pRotationValues;
		m_translationVals = pTranslateValues;
		m_kind            = J2DANM_Transform;
	}

	virtual ~J2DAnmTransform() { }                              // _08 (weak)
	virtual void getTransform(u16, J3DTransformInfo*) const { } // _10 (weak)

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	f32* m_scaleVals;       // _10
	s16* m_rotationVals;    // _14
	f32* m_translationVals; // _18
};

// Size: 0x28
struct J2DAnmTransformFull : public J2DAnmTransform {
	J2DAnmTransformFull()
	    : J2DAnmTransform(nullptr, nullptr, nullptr)
	{
		m_table = nullptr;
	}

	virtual ~J2DAnmTransformFull() { }                       // _08 (weak)
	virtual void getTransform(u16, J3DTransformInfo*) const; // _10

	// _00     = VTBL
	// _00-_1C = J2DAnmTransform
	u8 _1C[6];                         // _1C, unknown
	u16 _22;                           // _22
	J3DAnmTransformFullTable* m_table; // _24
};

// Size: 0x2C
struct J2DAnmTransformKey : public J2DAnmTransform {
	J2DAnmTransformKey()
	    : J2DAnmTransform(nullptr, nullptr, nullptr)
	{
		_24     = 0;
		m_table = nullptr;
	}

	virtual ~J2DAnmTransformKey() { }                              // _08 (weak)
	virtual void getTransform(u16, J3DTransformInfo*) const;       // _10 (weak)
	virtual void calcTransform(f32, u16, J3DTransformInfo*) const; // _14

	// _00     = VTBL
	// _00-_1C = J2DAnmTransform
	u8 _1C[6];                         // _1C, unknown
	u16 _22;                           // _22
	int _24;                           // _24
	J3DAnmTransformFullTable* m_table; // _28
};

// Size: 0x1C
struct J2DAnmVisibilityFull : public J2DAnmBase {
	J2DAnmVisibilityFull()
	{
		_10      = 0;
		m_table  = nullptr;
		_12      = 0;
		m_values = nullptr;
		m_kind   = J2DANM_VisibilityFull;
	}

	virtual ~J2DAnmVisibilityFull() { } // _08 (weak)

	void getVisibility(u16, u8*) const;

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 _10;                            // _10
	u16 _12;                            // _12
	J3DAnmVisibilityFullTable* m_table; // _14
	u8* m_values;                       // _18
};

struct J2DAnmVtxColor : public J2DAnmBase {
	J2DAnmVtxColor()
	{
		m_kind = J2DANM_VtxColor;
		for (int i = 0; i < ARRAY_SIZE(m_anmTableNum); i++) {
			m_anmTableNum[i] = 0;
		}
		for (int i = 0; i < ARRAY_SIZE(m_vtxColorIndexData); i++) {
			m_vtxColorIndexData[i] = nullptr;
		}
	}

	virtual ~J2DAnmVtxColor() { }                      // _08 (weak)
	virtual void getColor(u8, u16, GXColor*) const { } // _10 (weak)

	// _00     = VTBL
	// _00-_10 = J2DAnmBase
	u16 m_anmTableNum[2];                            // _10
	J3DAnmVtxColorIndexData* m_vtxColorIndexData[2]; // _14
	u16* m_vtxColorIndexPtr[2];                      // _1C
};

struct J2DAnmVtxColorFull : public J2DAnmVtxColor {
	J2DAnmVtxColorFull()
	{
		for (int i = 0; i < ARRAY_SIZE(m_infoTables); i++) {
			m_infoTables[i] = nullptr;
		}
	}

	virtual ~J2DAnmVtxColorFull() { }               // _08 (weak)
	virtual void getColor(u8, u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_24 = J2DAnmVtxColor
	J3DAnmColorFullTable* m_infoTables[2]; // _24
	u8* m_redVals;                         // _2C
	u8* m_greenVals;                       // _30
	u8* m_blueVals;                        // _34
	u8* m_alphaVals;                       // _38
};

// Size: 0x3C
struct J2DAnmVtxColorKey : public J2DAnmVtxColor {
	J2DAnmVtxColorKey()
	{
		for (int i = 0; i < ARRAY_SIZE(m_infoTables); i++) {
			m_infoTables[i] = nullptr;
		}
	}

	virtual ~J2DAnmVtxColorKey() { }                // _08 (weak)
	virtual void getColor(u8, u16, GXColor*) const; // _10

	// _00     = VTBL
	// _00-_24 = J2DAnmVtxColor
	J3DAnmColorKeyTable* m_infoTables[2]; // _24
	s16* m_redVals;                       // _2C
	s16* m_greenVals;                     // _30
	s16* m_blueVals;                      // _34
	s16* m_alphaVals;                     // _38
};

#endif
