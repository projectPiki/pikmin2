#ifndef _JSYSTEM_J3D_J3DMODEL_H
#define _JSYSTEM_J3D_J3DMODEL_H

#include "Dolphin/mtx.h"
#include "types.h"
#include "JSystem/J3D/J3DVertexBuffer.h"
#include "JSystem/JGeometry.h"

struct J3DDeformData;
struct J3DMatPacket;
struct J3DModelData;
struct J3DMtxBuffer;
struct J3DShapePacket;
struct J3DSkinDeform;
struct J3DVtxColorCalc;

struct J3DModel : public J3DVertexBuffer {
	virtual void update();         // _00
	virtual void entry();          // _04
	virtual void calc();           // _08
	virtual void calcMaterial();   // _0C
	virtual void calcDiffTexMtx(); // _10
	virtual void viewCalc();       // _14
	virtual ~J3DModel();           // _18

	// _00 VTBL
	J3DModelData* m_modelData;       // _04
	uint _08;                        // _08 /* bitfield of some sort */
	u32 m_displayListFlag;           // _0C
	void* _10;                       // _10
	u32 _14;                         // _14
	JGeometry::TVec3f m_modelScale;  // _18
	PSMatrix _24;                    // _24
	PSMatrix _54;                    // _54
	J3DMtxBuffer* m_mtxBuffer;       // _84
	J3DVertexBuffer m_vertexBuffer;  // _88
	J3DMatPacket* m_matPackets;      // _C0
	J3DShapePacket* m_shapePackets;  // _C4
	J3DDeformData* m_deformData;     // _C8
	J3DSkinDeform* m_skinDeform;     // _CC
	J3DVtxColorCalc* m_vtxColorCalc; // _D0
	u32 _D4;                         // _D4
	void* _D8;                       // _D8
};

#endif
