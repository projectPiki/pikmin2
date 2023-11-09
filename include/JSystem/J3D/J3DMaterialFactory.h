#ifndef _JSYSTEM_J3D_J3DMATERIALFACTORY_H
#define _JSYSTEM_J3D_J3DMATERIALFACTORY_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DAlphaCompInfo {
	u8 _00[0x5]; // _00
};

struct J3DColorChanInfo {
	u8 _00[0x8]; // _00
};

struct J3DDisplayListInit {
	u32 _00; // _00
	u32 _04; // _04
};

struct J3DFogInfo {
	u8 _00;       // _00
	u8 _01;       // _01
	u16 _02;      // _02
	f32 _04;      // _04
	f32 _08;      // _08
	f32 _0C;      // _0C
	f32 _10;      // _10
	u8 _14;       // _14
	u8 _15;       // _15
	u8 _16;       // _16
	u16 _18[0xA]; // _18
};

struct J3DIndInitData {
	u8 _00;             // _00
	u8 mIndTexStageNum; // _01
	u32 : 0;
	J3DIndTexOrder mIndTexOrders[4];           // _04
	J3DIndTexMtx mIndTexMatrices[3];           // _14
	J3DIndTexCoordScale mIndTexCoordScales[1]; // _68 - unknown length
	u8 _6C[0xCC];                              // _6C - tbd
};

struct J3DLightInfo {
};

struct J3DPatchingInfo {
	u16 _00;   // _00
	u16 _02;   // _02
	u16 _04;   // _04
	u16 _06;   // _06
	u16 _08;   // _08
	u16 _0A;   // _0A
	u8 _0C[4]; // _0C
};

struct J3DTevStageInfo {
	u8 _00[0x14]; // _00
};

extern const J3DTevSwapModeInfo j3dDefaultTevSwapMode;

struct J3DTevSwapModeTableInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

struct J3DTexCoord2Info {
};

struct J3DTexMtxInfo {
	u8 _00;    // _00
	u8 _01;    // _01
	u8 _02;    // _02
	u8 _03;    // _03
	f32 _04;   // _04
	f32 _08;   // _08
	f32 _0C;   // _0C
	f32 _10;   // _10
	f32 _14;   // _14
	u16 _18;   // _18
	f32 _1C;   // _1C
	f32 _20;   // _20
	Mtx44 _24; // _24
};

/**
 * @size{0x14C}
 */
struct J3DMaterialInitData {
	u8 _00;                           // _00
	u8 _01;                           // _01
	u8 _02;                           // _02
	u8 _03;                           // _03
	u8 _04;                           // _04
	u8 _05;                           // _05
	u8 _06;                           // _06
	u8 _07;                           // _07
	u16 mMatColorIndices[2];          // _08 - guessed length
	u16 mColorChanIndices[4];         // _0C - guessed length
	u16 mAmbColorIndices[10];         // _14 - guessed length
	u16 mTexCoordInfoIndices[16];     // _28 - guessed length
	u16 mTexMtxIndices[8];            // _48 - guessed length
	u8 _58[0x2C];                     // _58 - unknown
	u16 mTexNoIndices[8];             // _84 - guessed length
	u16 mTevKColorIndices[4];         // _94 - guessed length
	u8 mTevKColorSelIndices[4];       // _9C - unknown length
	u8 _A0[0x1C];                     // _A0 - unknown
	u16 mTevOrderInfoIndices[16];     // _BC - guessed length
	u16 mTevColorIndices[4];          // _DC - guessed length
	u16 mTevStageIndices[16];         // _E4 - guessed length
	u16 _104[16];                     // _104 - guessed length
	u16 mTevSwapModeTableIndices[16]; // _124 - guessed length
	u16 mFogInfoIndex;                // _144
	u16 mAlphaCompInfoIndex;          // _146
	u16 mBlendInfoIndex;              // _148
	u16 mNbtScaleInfoIndex;           // _14A
};

struct J3DMaterialFactory {
	enum MaterialType { NORMAL = 0, LOCKED, PATCHED };

	J3DMaterialFactory(const J3DMaterialBlock& block);
	J3DMaterialFactory(const J3DMaterialDLBlock& block);

	size_t calcSize(J3DMaterial*, MaterialType, int, u32) const;
	size_t calcSizeNormalMaterial(J3DMaterial*, int, u32) const;
	size_t calcSizePatchedMaterial(J3DMaterial*, int, u32) const;
	size_t calcSizeLockedMaterial(J3DMaterial*, int, u32) const;
	u32 countUniqueMaterials();
	J3DMaterial* create(J3DMaterial*, MaterialType, int, u32) const;
	J3DMaterial* createNormalMaterial(J3DMaterial*, int, u32) const;
	J3DLockedMaterial* createLockedMaterial(J3DMaterial*, int, u32) const;
	J3DPatchedMaterial* createPatchedMaterial(J3DMaterial*, int, u32) const;
	J3DAlphaComp newAlphaComp(int) const;
	J3DGXColor newAmbColor(int, int) const;
	J3DBlend newBlend(int) const;
	J3DColorChan newColorChan(int, int) const;
	u8 newColorChanNum(int) const;
	u8 newCullMode(int) const;
	u8 newDither(int) const;
	J3DFog newFog(int) const;
	J3DIndTexCoordScale newIndTexCoordScale(int, int) const;
	J3DIndTexMtx newIndTexMtx(int, int) const;
	J3DIndTexOrder newIndTexOrder(int, int) const;
	u8 newIndTexStageNum(int) const;
	J3DIndTevStage newIndTevStage(int, int) const;
	J3DGXColor newMatColor(int, int) const;
	J3DNBTScale newNBTScale(int) const;
	J3DGXColorS10 newTevColor(int, int) const;
	J3DGXColor newTevKColor(int, int) const;
	J3DTevOrder newTevOrder(int, int) const;
	J3DTevStage newTevStage(int, int) const;
	u8 newTevStageNum(int) const;
	J3DTevSwapModeTable newTevSwapModeTable(int, int) const;
	J3DTexCoord newTexCoord(int, int) const;
	u8 newTexGenNum(int) const;
	J3DTexMtx newTexMtx(int, int) const;
	u16 newTexNo(int, int) const;
	u8 newZCompLoc(int) const;
	J3DZMode newZMode(int) const;
	void modifyPatchedCurrentMtx(J3DMaterial*, int) const;

	/** @fabricated */
	// inline s32 getMaterialInitDataIndex(s32 initDataIndexIndex) const { return _08[initDataIndexIndex]; }
	inline J3DMaterialInitData& getMaterialInitData(s32 index) const { return _04[_08[index]]; }

	/** @fabricated */
	inline J3DIndInitData& getIndInitData(s32 index) const { return _0C[index]; }

	// unused/inlined:
	// inline J3DMaterialInitData& getMaterialInitData(u16 initDataIndexIndex) const { return _04[_08[initDataIndexIndex]]; }
	// J3DMaterialInitData& getMaterialInitData(u16 initDataIndexIndex) const;

	u16 _00; // _00

	J3DMaterialInitData* _04;     // _04
	u16* _08;                     // _08
	J3DIndInitData* _0C;          // _0C
	GXColor* _10;                 // _10
	u8* _14;                      // _14
	J3DColorChanInfo* _18;        // _18
	GXColor* _1C;                 // _1C
	J3DLightInfo* _20;            // _20
	u8* _24;                      // _24
	J3DTexCoord* _28;             // _28
	J3DTexCoord2Info* _2C;        // _2C
	J3DTexMtxInfo* _30;           // _30
	J3DTexMtxInfo* _34;           // _34
	u16* _38;                     // _38
	_GXCullMode* _3C;             // _3C
	J3DTevOrderInfo* _40;         // _40
	GXColorS10* _44;              // _44
	GXColor* _48;                 // _48
	u8* _4C;                      // _4C
	J3DTevStageInfo* _50;         // _50
	J3DTevSwapModeInfo* _54;      // _54
	J3DTevSwapModeTableInfo* _58; // _58
	J3DFogInfo* _5C;              // _5C
	J3DAlphaCompInfo* _60;        // _60
	J3DBlendInfo* _64;            // _64
	J3DZModeInfo* _68;            // _68
	u8* _6C;                      // _6C
	u8* _70;                      // _70
	J3DNBTScaleInfo* _74;         // _74
	J3DDisplayListInit* _78;      // _78
	J3DPatchingInfo* _7C;         // _7C
	J3DCurrentMtxInfo* _80;       // _80
	u8* _84;                      // _84
};

/**
 * @size{0x138}
 */
struct J3DMaterialInitData_v21 {
	u8 _00[0x138]; // _00
};

struct J3DMaterialFactory_v21 {
	J3DMaterialFactory_v21(const J3DMaterialBlock_v21&);
	int countUniqueMaterials();
	void create(J3DMaterial*, int, u32) const;
	void newMatColor(int, int) const;
	void newColorChanNum(int) const;
	void newColorChan(int, int) const;
	u8 newTexGenNum(int) const;
	J3DTexMtx newTexMtx(int, int) const;
	u16 newTexNo(int, int) const;
	u8 newZCompLoc(int) const;
	J3DZMode newZMode(int) const;
	void modifyPatchedCurrentMtx(J3DMaterial*, int) const;
	void newTexCoord(int, int) const;
	void newCullMode(int) const;
	void newTevOrder(int, int) const;
	void newTevColor(int, int) const;
	void newTevKColor(int, int) const;
	void newTevStageNum(int) const;
	void newTevStage(int, int) const;
	void newTevSwapModeTable(int, int) const;
	void newFog(int) const;
	void newAlphaComp(int) const;
	void newBlend(int) const;
	void newDither(int) const;
	void newNBTScale(int) const;

	u8 _00[4]; // _00

	J3DMaterialInitData_v21* _04; // _04
	void* _08;                    // _08
	void* _0C;                    // _0C
	void* _10;                    // _10
	void* _14;                    // _14
	void* _18;                    // _18
	void* _1C;                    // _1C
	void* _20;                    // _20
	void* _24;                    // _24
	void* _28;                    // _28
	void* _2C;                    // _2C
	void* _30;                    // _30
	void* _34;                    // _34
	void* _38;                    // _38
	void* _3C;                    // _3C
	void* _40;                    // _40
	void* _44;                    // _44
	void* _48;                    // _48
	void* _4C;                    // _4C
	void* _50;                    // _50
	void* _54;                    // _54
	void* _58;                    // _58
	void* _5C;                    // _5C
	void* _60;                    // _60
	void* _64;                    // _64
	void* _68;                    // _68
	void* _6C;                    // _6C
	void* _70;                    // _70
	void* _74;                    // _74
	void* _78;                    // _78
	void* _7C;                    // _7C
	void* _80;                    // _80
	void* _84;                    // _84
};

#endif
