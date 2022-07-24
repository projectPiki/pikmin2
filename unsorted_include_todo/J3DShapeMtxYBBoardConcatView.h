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
	virtual ~J3DShapeMtx();                                                  // _08 (inline)
	virtual void getType() const;                                            // _0C (inline)
	virtual void getUseMtxNum() const;                                       // _10 (inline)
	virtual void getUseMtxIndex(unsigned short) const;                       // _14 (inline)
	virtual void load() const;                                               // _18
	virtual void calcNBTScale(const Vec&, float (*)[3][3], float (*)[3][3]); // _1C
};

struct J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxConcatView();                                 // _08 (inline)
	virtual void getType() const;                                     // _0C (inline)
	virtual void _10() = 0;                                           // _10
	virtual void _14() = 0;                                           // _14
	virtual void load() const;                                        // _18
	virtual void _1C() = 0;                                           // _1C
	virtual void loadNrmMtx(int, unsigned short) const;               // _20 (inline)
	virtual void loadNrmMtx(int, unsigned short, float (*)[4]) const; // _24
};

struct J3DShapeMtxYBBoardConcatView : public J3DShapeMtx, public J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxYBBoardConcatView(); // _08 (inline)
	virtual void getType() const;            // _0C (inline)
	virtual void load() const;               // _18
};

#endif
