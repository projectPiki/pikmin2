#ifndef _J3DMTXBUFFER_H
#define _J3DMTXBUFFER_H

/*
    __vt__12J3DMtxBuffer:
    .4byte 0
    .4byte 0
    .4byte __dt__12J3DMtxBufferFv
*/

struct J3DMtxBuffer {
	virtual ~J3DMtxBuffer(); // _08 (weak)

	void initialize();
	void create(J3DModelData*, unsigned long);
	void createAnmMtx(J3DModelData*);
	void createWeightEnvelopeMtx(J3DModelData*);
	void setNoUseDrawMtx();
	void createDoubleDrawMtx(J3DModelData*, unsigned long);
	void createBumpMtxArray(J3DModelData*, unsigned long);
	void calcWeightEnvelopeMtx();
	void calcDrawMtx(unsigned long, const Vec&, const float (&)[3][4]);
	void calcNrmMtx();
	void calcBBoardMtx();
};

#endif
