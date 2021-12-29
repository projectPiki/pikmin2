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
	virtual ~J3DShapeMtx();                            // _00
	virtual void getType() const;                      // _04
	virtual void getUseMtxNum() const;                 // _08
	virtual void getUseMtxIndex(unsigned short) const; // _0C
	virtual void load() const;                         // _10
	virtual void calcNBTScale(const Vec&, float (*)[3][3],
	                          float (*)[3][3]); // _14

	// _00 VTBL
};

struct J3DShapeMtxConcatView : public J3DShapeMtx {
	virtual ~J3DShapeMtxConcatView();                  // _00
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
