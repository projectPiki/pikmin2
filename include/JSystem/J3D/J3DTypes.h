#ifndef _JSYSTEM_J3D_J3DTYPES_H
#define _JSYSTEM_J3D_J3DTYPES_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JMath.h"
#include "types.h"

// TODO: Make a bitmask enum
/**
 * @fabricatedName
 */
typedef u32 J3DModelLoaderFlags;
#define J3DMLF_MtxCalc_SoftImage          0x00000001
#define J3DMLF_MtxCalc_Maya               0x00000002
#define J3DMLF_03                         0x00000004
#define J3DMLF_04                         0x00000008
#define J3DMLF_UseConcatViewShapeMatrices 0x00000010
#define J3DMLF_06                         0x00000020
#define J3DMLF_07                         0x00000040
#define J3DMLF_08                         0x00000080
#define J3DMLF_09                         0x00000100
#define J3DMLF_10                         0x00000200
#define J3DMLF_11                         0x00000400
#define J3DMLF_12                         0x00000800
#define J3DMLF_13                         0x00001000
#define J3DMLF_14                         0x00002000
#define J3DMLF_15                         0x00004000
#define J3DMLF_16                         0x00008000
#define J3DMLF_17                         0x00010000
#define J3DMLF_18                         0x00020000
#define J3DMLF_19                         0x00040000
#define J3DMLF_20                         0x00080000
#define J3DMLF_21                         0x00100000
#define J3DMLF_22                         0x00200000
#define J3DMLF_23                         0x00400000
#define J3DMLF_24                         0x00800000
#define J3DMLF_25                         0x01000000
#define J3DMLF_26                         0x02000000
#define J3DMLF_27                         0x04000000
#define J3DMLF_28                         0x08000000
#define J3DMLF_29                         0x10000000
#define J3DMLF_30                         0x20000000
#define J3DMLF_31                         0x40000000
#define J3DMLF_32                         0x80000000

enum JBlockType {
	JBT_ColorAmbientOn = 'CLAB',
	JBT_ColorNull      = 'CLNL',
	JBT_ColorLightOff  = 'CLOF',
	JBT_ColorLightOn   = 'CLON',
	JBT_IndFull        = 'IBLF',
	JBT_IndNull        = 'IBLN',
	JBT_PETexEdge      = 'PEED',
	JBT_PEFogOff       = 'PEFG',
	JBT_PEFull         = 'PEFL',
	JBT_PENull         = 'PENL',
	JBT_PEOpa          = 'PEOP',
	JBT_PEXlu          = 'PEXL',
	JBT_TexGen4        = 'TGB4',
	JBT_TexGenBasic    = 'TGBC',
	JBT_TexGenNull     = 'TGNL',
	JBT_TexGenPatched  = 'TGPT',
	JBT_Tev16          = 'TV16',
	JBT_Tev1           = 'TVB1',
	JBT_Tev2           = 'TVB2',
	JBT_Tev4           = 'TVB4',
	JBT_Tev8           = 'TVB8',
	JBT_TevNull        = 'TVNL',
	JBT_TevPatched     = 'TVPT'
};

enum J3DErrType { JET_Success = 0, JET_NoMatAnm, JET_LockedModelData, JET_NullBinRes, JET_OutOfMemory, JET_InvalidArg, JET_InvalidData };

struct J3DAlphaComp {
	u16 _00; // _00
	u8 _02;  // _02
	u8 _03;  // _03
};

struct J3DBlend {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

typedef u16 J3DZMode;

struct J3DColorChan {
	J3DColorChan();

	u8 _00; // _00
	u8 _01; // _01
};

// IDK what the structure of this is meant to be
struct J3DIndTevStageInfo {
	u8 _00 : 2;
};

extern const J3DIndTevStageInfo j3dDefaultIndTevStageInfo[8];

struct J3DIndTevStage {
	J3DIndTevStage();

	u32 _00 : 10;
	// u32 _01 : 1;
	// u32 _02 : 1;
	// u32 _03 : 1;
	// u32 _04 : 1;
	// u32 _05 : 1;
	// u32 _06 : 1;
	// u32 _07 : 1;
	// u32 _08 : 1;
	// u32 _09 : 1;
	// u32 _0A : 1;
	u32 _0B : 1;
	u32 _0C : 1;
	u32 _0D : 3;
	u32 _10 : 3;
	u32 _13 : 4;
	u32 _17 : 2;
	u32 _19 : 3;
	u32 _1C : 2;
	u32 _1E : 2;
};

struct J3DLightObj {
	JGeometry::TVec3f m_position;  // _00
	JGeometry::TVec3f m_direction; // _0C
	_GXColor* _18;                 // _18
	f32 _1C;                       // _1C
	f32 _20;                       // _20
	f32 _24;                       // _24
	f32 _28;                       // _28
	f32 _2C;                       // _2C
	f32 _30;                       // _30

	void load(u32) const;
};

struct J3DTevOrder {
	J3DTevOrder();

	u8 m_texCoordID; // _00
	u8 m_texMapID;   // _01
	u8 m_channelID;  // _02
	u8 _03;
};

// TODO: Determine if this needs packing pragmas to make it exactly 1 bytes
/**
 * @size{0x1}
 */
struct J3DTevSwapModeTable {
	J3DTevSwapModeTable();

	u8 _00;
};

struct J3DTevStage {
	J3DTevStage();
	J3DTevStage(const struct J3DTevStageInfo&);

	void setTevStageInfo(const J3DTevStageInfo&);

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
	u8 _04; // _04
	u8 _05; // _05
	u8 _06; // _06
	u8 _07; // _07
};

struct J3DTexCoordInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
};
extern const J3DTexCoordInfo j3dDefaultTexCoordInfo[8];

// TODO: Determine if this needs packing pragmas to make it exactly 6 bytes
/**
 * @size{0x6}
 */
struct J3DTexCoord {
	inline J3DTexCoord()
	    : _00(j3dDefaultTexCoordInfo[0]._00)
	    , _01(j3dDefaultTexCoordInfo[0]._01)
	    , _02(j3dDefaultTexCoordInfo[0]._02)
	    , _04(_02)
	{
	}

	inline J3DTexCoord(const J3DTexCoordInfo& info)
	    : _00(info._00)
	    , _01(info._01)
	    , _02(info._02)
	    , _04(info._02)
	{
	}

	u8 _00;  // _00
	u8 _01;  // _01
	u8 _02;  // _02
	u16 _04; // _04
};

struct J3DTextureSRTInfo {
	f32 m_scaleX; // _00 - name derived from J3DTexMtx[0x10]
	f32 m_scaleY; // _04 - name derived from J3DTexMtx[0x14]
	u16 _08;      // _08
	f32 _0C;      // _0C
	f32 _10;      // _10
};

struct J3DTransformInfo {
	JGeometry::TVec3f m_scale;        // _00
	JGeometry::TVec3<s16> m_eulerRot; // _0C
	JGeometry::TVec3f m_zRotation;    // _14
};

extern const J3DTransformInfo j3dDefaultTransformInfo;

struct J3DNBTScaleInfo {
	u8 _00;                // _00
	JGeometry::TVec3f _04; // _04

	// float _08; // _08
	// float _0C; // _0C
};

extern const J3DNBTScaleInfo j3dDefaultNBTScaleInfo;

struct J3DNBTScale {
	inline J3DNBTScale()
	    : _00(j3dDefaultNBTScaleInfo._00)
	    , _04(j3dDefaultNBTScaleInfo._04)
	{
		// _04.x = j3dDefaultNBTScaleInfo._04;
		// _04.y = j3dDefaultNBTScaleInfo._08;
		// _04.z = j3dDefaultNBTScaleInfo._0C;
	}

	/** @fabricated */
	inline J3DNBTScale(const J3DNBTScaleInfo& info)
	    : _00(info._00)
	    , _04(info._04)
	{
		// _04.x = info._04;
		// _04.y = info._08;
		// _04.z = info._0C;
	}

	u8 _00; // _00
	JGeometry::TVec3f _04;
};
void loadNBTScale(J3DNBTScale&);

void loadTexCoordGens(u32, J3DTexCoord*);

enum J3DTexDiffFlag { TexDiff_0 = 0, TexDiff_1 };

enum J3DDeformAttachFlag { DeformAttach_0 = 0, DeformAttach_1 = 1 };

extern const u32 j3dDefaultColInfo;
// extern const J3DGXColor j3dDefaultTevColor;
// extern const J3DGXColorS10 j3dDefaultTevKColor;
extern const u32 j3dDefaultTevColor;
extern const u64 j3dDefaultTevKColor;

extern const u8 j3dDefaultTevSwapTableID;

#endif
