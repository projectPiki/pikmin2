#ifndef _J3DSHAPEMTXMULTI_H
#define _J3DSHAPEMTXMULTI_H

/*
    __vt__16J3DShapeMtxMulti:
    .4byte 0
    .4byte 0
    .4byte __dt__16J3DShapeMtxMultiFv
    .4byte getType__16J3DShapeMtxMultiCFv
    .4byte getUseMtxNum__16J3DShapeMtxMultiCFv
    .4byte getUseMtxIndex__16J3DShapeMtxMultiCFUs
    .4byte load__16J3DShapeMtxMultiCFv
    .4byte calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f
*/

struct J3DShapeMtxMulti {
	virtual ~J3DShapeMtxMulti();                                             // _08
	virtual void getType() const;                                            // _0C
	virtual void getUseMtxNum() const;                                       // _10
	virtual void getUseMtxIndex(unsigned short) const;                       // _14
	virtual void load() const;                                               // _18
	virtual void calcNBTScale(const Vec&, float (*)[3][3], float (*)[3][3]); // _1C

	// _00 VTBL
};

#endif
