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
	u8* _08;                          // _08
	Mtx* m_worldMatrices;             // _0C
	Mtx* _10;                         // _10
	Mtx** _14[2];                     // _14
	Mtx33** _1C[2];                   // _1C
	Mtx33*** _24[2];                  // _24
	u32 m_modelType;                  // _2C
	u32 m_currentViewNumber;          // _30
};

struct J3DMtxBuffer : public J3DMtxBufferParent {
	inline J3DMtxBuffer() { initialize(); }

	/**
	 * @reifiedAddress{80067630}
	 * @reifiedFile{JSystem/J3D/J3DModel.cpp}
	 */
	virtual ~J3DMtxBuffer() {}; // _00

	void initialize();
	int create(struct J3DModelData*, unsigned long);
	int createAnmMtx(struct J3DModelData*);
	int createWeightEnvelopeMtx(struct J3DModelData*);
	int setNoUseDrawMtx();
	int createDoubleDrawMtx(struct J3DModelData*, unsigned long);
	int createBumpMtxArray(struct J3DModelData*, unsigned long);
	void calcWeightEnvelopeMtx();
	void calcDrawMtx(unsigned long, const Vec&, const Mtx&);
	void calcNrmMtx();
	void calcBBoardMtx();

	// _34 VTBL

	static Mtx* sNoUseDrawMtxPtr;
	static Mtx33* sNoUseNrmMtxPtr;
};

#endif
