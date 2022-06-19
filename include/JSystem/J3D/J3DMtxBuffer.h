#ifndef _JSYSTEM_J3D_J3DMTXBUFFER_H
#define _JSYSTEM_J3D_J3DMTXBUFFER_H

#include "Dolphin/mtx.h"
#include "types.h"

/**
 * @size{0x34}
 * @fabricatedName
 */
struct J3DMtxBufferParent {
	struct J3DJointTree* m_jointTree; // _00
	u8* _04;                          // _04
	unknown _08;                      // _08
	Mtx* m_worldMatrices;             // _0C
	Mtx* _10;                         // _10
	Mtx** _14;                        // _14
	Mtx** _18;                        // _18
	unknown** _1C;                    // _1C
	unknown** _20;                    // _20
	unknown _24;                      // _24
	unknown** _28;                    // _28
	u32 m_modelType;                  // _2C
	u32 m_currentViewNumber;          // _30
};

struct J3DMtxBuffer : public J3DMtxBufferParent {
	virtual ~J3DMtxBuffer(); // _00

	void initialize();
	void create(struct J3DModelData*, unsigned long);
	void createAnmMtx(struct J3DModelData*);
	void createWeightEnvelopeMtx(struct J3DModelData*);
	void setNoUseDrawMtx();
	void createDoubleDrawMtx(struct J3DModelData*, unsigned long);
	void createBumpMtxArray(struct J3DModelData*, unsigned long);
	void calcWeightEnvelopeMtx();
	void calcDrawMtx(unsigned long, const Vec&, const Mtx&);
	void calcNrmMtx();
	void calcBBoardMtx();

	// _34 VTBL
};

#endif
