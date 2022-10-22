#ifndef _JSYSTEM_J3D_J3DFILEBLOCK_H
#define _JSYSTEM_J3D_J3DFILEBLOCK_H

#include "types.h"

struct J3DFileBlockBase;

/**
 * @fabricated
 * @size{0x20}
 */
struct J3DFileHeader {
	u32 m_j3dVersion;  // _00
	u32 m_fileVersion; // _04
	u8 _08[4];         // _08
	u32 m_blockCount;  // _0C
	u8 _10[0x10];      // _10

	const J3DFileBlockBase* getFirstBlock() const { return reinterpret_cast<const J3DFileBlockBase*>(this + 1); }
};

/**
 * @fabricated
 * @size{0x8}
 */
struct J3DFileBlockBase {
	u32 m_blockType; // _00
	int m_size;      // _04

	const J3DFileBlockBase* getNext() const
	{
		return reinterpret_cast<const J3DFileBlockBase*>(reinterpret_cast<const u8*>(this) + this->m_size);
	}
};

/**
 * @fabricated
 */
enum J3DFileBlockType {
	J3DFBT_Draw        = 'DRW1',
	J3DFBT_Envelope    = 'EVP1',
	J3DFBT_Info        = 'INF1',
	J3DFBT_Joint       = 'JNT1',
	J3DFBT_MaterialV21 = 'MAT2',
	J3DFBT_Material    = 'MAT3',
	J3DFBT_MaterialDL  = 'MDL3',
	J3DFBT_Texture     = 'TEX1',
	J3DFBT_Shape       = 'SHP1',
	J3DFBT_Vertex      = 'VTX1',

	//  Anm Block Types:
	J3DFBT_AnmTexPattern     = 'TPT1',
	J3DFBT_AnmClusterFull    = 'CLF1',
	J3DFBT_AnmClusterKey     = 'CLK1',
	J3DFBT_AnmTransformFull  = 'ANF1',
	J3DFBT_AnmTransformKey   = 'ANK1',
	J3DFBT_AnmColorFull      = 'PAF1',
	J3DFBT_AnmColorKey       = 'PAK1',
	J3DFBT_AnmVtxColorFull   = 'VCF1',
	J3DFBT_AnmVtxColorKey    = 'VCK1',
	J3DFBT_AnmVisibilityFull = 'VAF1',
	J3DFBT_AnmTextureSRTKey  = 'TTK1',
	J3DFBT_AnmTevRegKey      = 'TRK1',
};

struct J3DDrawBlock : J3DFileBlockBase {
	/** @fabricated */
	// const u32 TypeID = 'DRW1';

	u16 m_count; // _08
	void* _0C;   // _0C
	void* _14;   // _14
};

struct J3DEnvelopeBlock : J3DFileBlockBase {
	/** Count of envelopes. */
	u16 m_count; // _08
	void* _0C;   // _0C
	void* _10;   // _10
	void* _14;   // _14
	void* _18;   // _18
};

struct J3DJointBlock : J3DFileBlockBase {
	u16 _08; // _08
	u32 _0C; // _0C
	u32 _10; // _10
	u32 _14; // _14
};

struct J3DMaterialBlock : J3DFileBlockBase {
	u16 m_count; // _08
	void* _0C;   // _0C
	void* _10;   // _10
	void* _14;   // _14
	void* _18;   // _18
	void* _1C;   // _1C
	void* _20;   // _20
	void* _24;   // _24
	void* _28;   // _28
	void* _2C;   // _2C
	void* _30;   // _30
	void* _34;   // _34
	void* _38;   // _38
	void* _3C;   // _3C
	void* _40;   // _40
	void* _44;   // _44
	void* _48;   // _48
	void* _4C;   // _4C
	void* _50;   // _50
	void* _54;   // _54
	void* _58;   // _58
	void* _5C;   // _5C
	void* _60;   // _60
	void* _64;   // _64
	void* _68;   // _68
	void* _6C;   // _6C
	void* _70;   // _70
	void* _74;   // _74
	void* _78;   // _78
	void* _7C;   // _7C
	void* _80;   // _80
};

struct J3DMaterialBlock_v21 : J3DFileBlockBase {
	u8 _08[0x70]; // _08
};

struct J3DMaterialDLBlock : J3DFileBlockBase {
	u16 _08;   // _08
	void* _0C; // _0C
	void* _10; // _10
	void* _14; // _14
	void* _18; // _18
	void* _1C; // _1C
	u32 _20;   // _20
};

struct J3DModelInfoBlock : J3DFileBlockBase {
	u16 _08;   // _08
	u32 _0C;   // _0C
	u32 _10;   // _10
	void* _14; // _14
};

struct J3DShapeBlock : J3DFileBlockBase {
	u16 _08; // _08
	u32 _0C; // _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C
	u32 _20; // _20
	u32 _24; // _24
	u32 _28; // _28
};

struct J3DTextureBlock : J3DFileBlockBase {
	u16 _08;   // _08
	void* _0C; // _0C
	void* _10; // _10
};

struct J3DVertexBlock : J3DFileBlockBase {
	/** @fabricated */
	// const u32 TypeID = 'VTX1';

	void* _08;    // _08
	void* _0C;    // _0C
	void* _10;    // _10
	void* _14;    // _14
	void* _18[2]; // _18
	void* _20[8]; // _20
};

#endif
