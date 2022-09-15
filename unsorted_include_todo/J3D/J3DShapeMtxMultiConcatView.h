#ifndef _J3DSHAPEMTXMULTICONCATVIEW_H
#define _J3DSHAPEMTXMULTICONCATVIEW_H

/*
    __vt__26J3DShapeMtxMultiConcatView:
    .4byte 0
    .4byte 0
    .4byte __dt__26J3DShapeMtxMultiConcatViewFv
    .4byte getType__26J3DShapeMtxMultiConcatViewCFv
    .4byte getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv
    .4byte getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs
    .4byte load__26J3DShapeMtxMultiConcatViewCFv
    .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
    .4byte loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUs
    .4byte loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f
*/

struct J3DShapeMtx {
	virtual ~J3DShapeMtx();                                                  // _08 (weak)
	virtual void getType() const;                                            // _0C (weak)
	virtual void getUseMtxNum() const;                                       // _10 (weak)
	virtual void getUseMtxIndex(unsigned short) const;                       // _14 (weak)
	virtual void load() const;                                               // _18
	virtual void calcNBTScale(const Vec&, float (*)[3][3], float (*)[3][3]); // _1C
};

struct J3DShapeMtxMultiConcatView : public J3DShapeMtx {
	virtual ~J3DShapeMtxMultiConcatView();                            // _08 (weak)
	virtual void getType() const;                                     // _0C (weak)
	virtual void getUseMtxNum() const;                                // _10 (weak)
	virtual void getUseMtxIndex(unsigned short) const;                // _14 (weak)
	virtual void load() const;                                        // _18
	virtual void loadNrmMtx(int, unsigned short) const;               // _20 (weak)
	virtual void loadNrmMtx(int, unsigned short, float (*)[4]) const; // _24
};

#endif
