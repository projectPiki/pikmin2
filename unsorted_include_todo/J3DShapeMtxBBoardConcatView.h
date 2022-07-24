#ifndef _J3DSHAPEMTXBBOARDCONCATVIEW_H
#define _J3DSHAPEMTXBBOARDCONCATVIEW_H

/*
    __vt__27J3DShapeMtxBBoardConcatView:
    .4byte 0
    .4byte 0
    .4byte __dt__27J3DShapeMtxBBoardConcatViewFv
    .4byte getType__27J3DShapeMtxBBoardConcatViewCFv
    .4byte getUseMtxNum__11J3DShapeMtxCFv
    .4byte getUseMtxIndex__11J3DShapeMtxCFUs
    .4byte load__27J3DShapeMtxBBoardConcatViewCFv
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

struct J3DShapeMtxBBoardConcatView : public J3DShapeMtx, public J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxBBoardConcatView(); // _08 (inline)
	virtual void getType() const;           // _0C (inline)
	virtual void load() const;              // _18
};

#endif
