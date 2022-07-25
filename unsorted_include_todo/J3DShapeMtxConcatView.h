#ifndef _J3DSHAPEMTXCONCATVIEW_H
#define _J3DSHAPEMTXCONCATVIEW_H

/*
    __vt__21J3DShapeMtxConcatView:
    .4byte 0
    .4byte 0
    .4byte __dt__21J3DShapeMtxConcatViewFv
    .4byte getType__21J3DShapeMtxConcatViewCFv
    .4byte getUseMtxNum__11J3DShapeMtxCFv
    .4byte getUseMtxIndex__11J3DShapeMtxCFUs
    .4byte load__21J3DShapeMtxConcatViewCFv
    .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
    .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUs
    .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f
*/

struct J3DShapeMtx {
	virtual ~J3DShapeMtx();                                                  // _08 (weak)
	virtual void getType() const;                                            // _0C (weak)
	virtual void getUseMtxNum() const;                                       // _10 (weak)
	virtual void getUseMtxIndex(unsigned short) const;                       // _14 (weak)
	virtual void load() const;                                               // _18
	virtual void calcNBTScale(const Vec&, float (*)[3][3], float (*)[3][3]); // _1C
};

struct J3DShapeMtxConcatView : public J3DShapeMtx {
	virtual ~J3DShapeMtxConcatView();                                 // _08 (weak)
	virtual void getType() const;                                     // _0C (weak)
	virtual void load() const;                                        // _18
	virtual void loadNrmMtx(int, unsigned short) const;               // _20 (weak)
	virtual void loadNrmMtx(int, unsigned short, float (*)[4]) const; // _24
};

#endif
