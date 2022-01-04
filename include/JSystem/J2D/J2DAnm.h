#ifndef _JSYSTEM_J2D_J2DANM_H
#define _JSYSTEM_J2D_J2DANM_H

#include "types.h"
#include "Dolphin/gx.h"
#include "JSystem/JUT/JUTNameTab.h"

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
struct J3DAnmVtxColorIndexData;
struct J3DTransformInfo;
struct Vec;

#pragma enumalwaysint on
enum J2DAnmType {
	J2DANM_TRANSFORM = 0,
	J2DANM_COLOR,
	J2DANM_TEXTURE_PATTERN,
	J2DANM_UNKNOWN_3,
	J2DANM_TEXTURE_SRT_KEY,
	J2DANM_TEV_REG_KEY,
	J2DANM_VISIBILITY_FULL,
	J2DANM_VERTEX_COLOR
};
#pragma enumalwaysint reset

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// VTBL _00
	u8 _04[2];            // _04
	short m_maxFrame;     // _06
	float m_currentFrame; // _08
	J2DAnmType m_type;    // _0C
};

struct J2DAnmColor : public J2DAnmBase {
	virtual ~J2DAnmColor();                          // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04
	virtual void getColor(u16, GXColor*) const;   // _08

	short _10;            // _10
	short _12;            // _12
	short _14;            // _14
	short _16;            // _16
	u16 _18;           // _18
	short _1A;            // _1A
	void* _1C;            // _1C
	JUTNameTab m_nameTab; // _20
};

// Size: 0x44
struct J2DAnmColorFull : public J2DAnmColor {
	u8* _30;                     // _30
	u8* _34;                     // _34
	u8* _38;                     // _38
	u8* _3C;                     // _3C
	J3DAnmColorFullTable* m_tables; // _40
};

// Size: 0x44
struct J2DAnmColorKey : public J2DAnmColor {
	short* _30;                    // _30
	short* _34;                    // _34
	short* _38;                    // _38
	short* _3C;                    // _3C
	J3DAnmColorKeyTable* m_tables; // _40
};

// Size: 0x74
struct J2DAnmTevRegKey : public J2DAnmBase {
	u16 _10;   // _10 /* element count of _24? see J2DScreen::setAnimation */
	u16 _12;   // _12 /* element count of _38? see J2DScreen::setAnimation */
	u8 _14[0x10]; // _14
	u16* _24;  // _24 /* material index? see J2DScreen::setAnimation */
	JUTNameTab _28; // _28
	u16* _38;    // _38 /* material index? see J2DScreen::setAnimation */
	JUTNameTab _3C; // _3C
	J3DAnmCRegKeyTable* _4C; // _4C
	J3DAnmKRegKeyTable* _50; // _50
	short* _54;              // _54
	short* _58;              // _58
	short* _5C;              // _5C
	short* _60;              // _60
	short* _64;              // _64
	short* _68;              // _68
	short* _6C;              // _6C
	short* _70;              // _70
};

// Size: 0x34
struct J2DAnmTexPattern : public J2DAnmBase {
	u16* _10;                         // _10
	J3DAnmTexPatternFullTable* m_tables; // _14
	u8 _18[2];                           // _18
	u16 _1A;                          // _1A
	u16* _1C;                         // _1C
	JUTNameTab m_nameTab;                // _20
	J2DAnmTexPatternTIMGPointer* _30;    // _30
};

// Size: 0x88
// TODO: This might have two substructs, given near repetition...
struct J2DAnmTextureSRTKey : public J2DAnmBase {
	u32 _10;
	short _14;
	J3DAnmTransformKeyTable* _18;
	short _1C;
	short _1E;
	short _20;
	float* _24;
	short* _28;
	float* _2C;
	u8* _30;
	short* _34;
	JUTNameTab m_nameTab;
	Vec* _48;
	short _4C;
	short _4E;
	short _50;
	float* _54;
	short* _58;
	u32 _5C;
	short _60;
	J3DAnmTransformKeyTable* _64;
	u8* _68;
	u16 _6C;
	JUTNameTab _70;
	Vec* _80;
	u32 _84;
};

struct J2DAnmTransform : public J2DAnmBase {
	virtual void getTransform(u16, J3DTransformInfo*) const; // _08

	float* _10; // _10
	short* _14; // _14
	float* _18; // _18
};

// Size: 0x28
struct J2DAnmTransformFull : public J2DAnmTransform {
	u8 _1C[8];                          // _1C
	J3DAnmTransformFullTable* m_tables; // _24
};

// Size: 0x2C
struct J2DAnmTransformKey : public J2DAnmTransform {
	u8 _1C[8]; // _1C
	int _24;   // _24
	u32 _28;   // _28
};

// Size: 0x1C
struct J2DAnmVisibilityFull : public J2DAnmBase {
	short _10;                           // _10
	short _12;                           // _12
	J3DAnmVisibilityFullTable* m_tables; // _14
	u8* _18;                          // _18
};

struct J2DAnmVtxColor : public J2DAnmBase {
	virtual void getColor(u8, u16, GXColor*) const; // _08

	short _10;                    // _10
	short _12;                    // _12
	J3DAnmVtxColorIndexData* _14; // _14
	J3DAnmVtxColorIndexData* _18; // _18
	u16* _1C;                  // _1C
};

struct J2DAnmVtxColorFull : public J2DAnmVtxColor {
	u16* _20;               // _20
	J3DAnmColorFullTable* _24; // _24
	J3DAnmColorFullTable* _28; // _28
	u8* _2C;                // _2C
	u8* _30;                // _30
	u8* _34;                // _34
	u8* _38;                // _38
};

// Size: 0x3C
struct J2DAnmVtxColorKey : public J2DAnmVtxColor {
	u16* _20;              // _20
	J3DAnmColorKeyTable* _24; // _24
	J3DAnmColorKeyTable* _28; // _28
	short* _2C;               // _2C
	short* _30;               // _30
	short* _34;               // _34
	short* _38;               // _38
};

struct J2DAnmLoaderDataBase {
	static J2DAnmBase* load(const void*);
};

#endif
