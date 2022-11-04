#ifndef _JSYSTEM_J3D_J3DSYS_H
#define _JSYSTEM_J3D_J3DSYS_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "types.h"

struct J3DDrawBuffer;
struct J3DMatPacket;
struct J3DModel;
struct J3DMtxCalc;
struct J3DShapePacket;
struct J3DTexture;

struct J3DSys {
	J3DSys();
	void drawInit();
	void reinitGX();
	void reinitGenMode();
	void reinitIndStages();
	void reinitLighting();
	void reinitPixelProc();
	void reinitTexture();
	void reinitTevStages();
	void reinitTransform();
	void loadPosMtxIndx(int, unsigned short) const;
	void loadNrmMtxIndx(int, unsigned short) const;
	void ErrorReport(J3DErrType) const;

	Mtx _00;                       // _000
	J3DMtxCalc* m_mtxCalc;         // _030
	u32 _34;                       // _034 /* bitfield */
	J3DModel* _38;                 // _038
	J3DMatPacket* m_matPacket;     // _03C
	J3DShapePacket* m_shapePacket; // _040
	u32 _44;                       // _044
	J3DDrawBuffer* _48;            // _048
	J3DDrawBuffer* _4C;            // _04C
	int _50;                       // _050
	u32 _54;                       // _054
	J3DTexture* _58;               // _058
	u8 _5C[4];                     // _05C
	u32 _60;                       // _060
	u8 _64[0xA0];                  // _064
	Mtx44* _104;                   // _104
	Mtx* _108;                     // _108
	/*
	 * These might be part of a J3DVertexBuffer.
	 * See setArray__15J3DVertexBufferCFv.
	 */
	u32 _10C; // _10C
	u32 _110; // _110
	u32 _114; // _114 /* bitfield */

	static Mtx mCurrentMtx;
	static JGeometry::TVec3f mCurrentS;
	static JGeometry::TVec3f mParentS;
	static u16 sTexCoordScaleTable[8][4];
};

extern J3DSys j3dSys;

extern s32 j3dDefaultViewNo;

#endif
