#ifndef _JSYSTEM_J3D_J3DMTXBUFFER_H
#define _JSYSTEM_J3D_J3DMTXBUFFER_H

#include "Dolphin/mtx.h"
#include "types.h"

struct J3DJointTree;
struct J3DModelData;

/**
 * @size{0x34}
 * @fabricatedName
 */
struct J3DMtxBufferParent {
	J3DJointTree* mJointTree; // _00
	u8* _04;                  // _04
	u8* _08;                  // _08
	Mtx* mWorldMatrices;      // _0C
	Mtx* _10;                 // _10
	Mtx** _14[2];             // _14
	Mtx33** _1C[2];           // _1C
	Mtx33*** _24[2];          // _24
	u32 mModelType;           // _2C
	u32 mCurrentViewNumber;   // _30
};

struct J3DMtxBuffer : public J3DMtxBufferParent {
	inline J3DMtxBuffer() { initialize(); }

	virtual ~J3DMtxBuffer() { } // _08 (weak)

	void initialize();
	int create(J3DModelData*, u32);
	int createAnmMtx(J3DModelData*);
	int createWeightEnvelopeMtx(J3DModelData*);
	int setNoUseDrawMtx();
	int createDoubleDrawMtx(J3DModelData*, u32);
	int createBumpMtxArray(J3DModelData*, u32);
	void calcWeightEnvelopeMtx();
	void calcDrawMtx(u32, const Vec&, const Mtx&);
	void calcNrmMtx();
	void calcBBoardMtx();

	inline Matrixf* getWorldMatrix(int i) { return (Matrixf*)mWorldMatrices[i]; }

	static Mtx* sNoUseDrawMtxPtr;
	static Mtx33* sNoUseNrmMtxPtr;

	// _00-_30 = J3DMtxBufferParent;
	// _34     = VTBL
};

#endif
