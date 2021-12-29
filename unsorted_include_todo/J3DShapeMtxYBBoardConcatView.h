#ifndef _J3DSHAPEMTXYBBOARDCONCATVIEW_H
#define _J3DSHAPEMTXYBBOARDCONCATVIEW_H

/*
    __vt__28J3DShapeMtxYBBoardConcatView:
    .4byte 0
    .4byte 0
    .4byte __dt__28J3DShapeMtxYBBoardConcatViewFv
    .4byte getType__28J3DShapeMtxYBBoardConcatViewCFv
    .4byte getUseMtxNum__11J3DShapeMtxCFv
    .4byte getUseMtxIndex__11J3DShapeMtxCFUs
    .4byte load__28J3DShapeMtxYBBoardConcatViewCFv
    .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
    .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUs
    .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f
*/

struct J3DShapeMtx {
	virtual void _00() = 0;                            // _00
	virtual void _04() = 0;                            // _04
	virtual void getUseMtxNum() const;                 // _08
	virtual void getUseMtxIndex(unsigned short) const; // _0C
	virtual void _10() = 0;                            // _10
	virtual void calcNBTScale(const Vec&, float (*)[3][3],
	                          float (*)[3][3]); // _14

	// _00 VTBL
};

struct J3DShapeMtxConcatView {
	virtual void _00() = 0;                                           // _00
	virtual void _04() = 0;                                           // _04
	virtual void _08() = 0;                                           // _08
	virtual void _0C() = 0;                                           // _0C
	virtual void _10() = 0;                                           // _10
	virtual void _14() = 0;                                           // _14
	virtual void loadNrmMtx(int, unsigned short) const;               // _18
	virtual void loadNrmMtx(int, unsigned short, float (*)[4]) const; // _1C

	// _00 VTBL
};

struct J3DShapeMtxYBBoardConcatView : public J3DShapeMtx,
                                      public J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxYBBoardConcatView();           // _00
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
