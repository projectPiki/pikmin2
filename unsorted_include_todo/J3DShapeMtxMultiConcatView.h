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
	virtual ~J3DShapeMtx();                            // _00
	virtual void getType() const;                      // _04
	virtual void getUseMtxNum() const;                 // _08
	virtual void getUseMtxIndex(unsigned short) const; // _0C
	virtual void load() const;                         // _10
	virtual void calcNBTScale(const Vec&, float (*)[3][3],
	                          float (*)[3][3]); // _14

	// _00 VTBL
};

struct J3DShapeMtxMultiConcatView : public J3DShapeMtx {
	virtual ~J3DShapeMtxMultiConcatView();             // _00
	virtual void getType() const;                      // _04
	virtual void getUseMtxNum() const;                 // _08
	virtual void getUseMtxIndex(unsigned short) const; // _0C
	virtual void load() const;                         // _10
	virtual void calcNBTScale(const Vec&, float (*)[3][3],
	                          float (*)[3][3]);                       // _14
	virtual void loadNrmMtx(int, unsigned short) const;               // _18
	virtual void loadNrmMtx(int, unsigned short, float (*)[4]) const; // _1C

	// _00 VTBL
};

#endif
