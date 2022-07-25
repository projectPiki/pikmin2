#ifndef _J2DPANE_H
#define _J2DPANE_H

/*
    __vt__7J2DPane:
    .4byte 0
    .4byte 0
    .4byte __dt__7J2DPaneFv
    .4byte getTypeID__7J2DPaneCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__7J2DPaneFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__7J2DPaneFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__7J2DPaneFff
    .4byte drawSelf__7J2DPaneFffPA3_A4_f
    .4byte search__7J2DPaneFUx
    .4byte searchUserInfo__7J2DPaneFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__7J2DPaneFPC7ResTIMG
    .4byte isUsed__7J2DPaneFPC7ResFONT
    .4byte clearAnmTransform__7J2DPaneFv
    .4byte rewriteAlpha__7J2DPaneFv
    .4byte setAnimation__7J2DPaneFP10J2DAnmBase
    .4byte setAnimation__7J2DPaneFP15J2DAnmTransform
    .4byte setAnimation__7J2DPaneFP11J2DAnmColor
    .4byte setAnimation__7J2DPaneFP16J2DAnmTexPattern
    .4byte setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey
    .4byte setAnimation__7J2DPaneFP15J2DAnmTevRegKey
    .4byte setAnimation__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setAnimation__7J2DPaneFP14J2DAnmVtxColor
    .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
    .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
    .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
    .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
    .4byte 0
*/

struct J2DPane {
	virtual ~J2DPane();                                       // _08
	virtual void getTypeID() const;                           // _0C (weak)
	virtual void move(float, float);                          // _10
	virtual void add(float, float);                           // _14
	virtual void resize(float, float);                        // _18
	virtual void setCullBack(bool);                           // _1C (weak)
	virtual void setCullBack(_GXCullMode);                    // _20
	virtual void setAlpha(unsigned char);                     // _24 (weak)
	virtual void setConnectParent(bool);                      // _28 (weak)
	virtual void calcMtx();                                   // _2C (weak)
	virtual void update();                                    // _30 (weak)
	virtual void drawSelf(float, float);                      // _34 (weak)
	virtual void drawSelf(float, float, float (*)[3][4]);     // _38 (weak)
	virtual void search(unsigned long long);                  // _3C
	virtual void searchUserInfo(unsigned long long);          // _40
	virtual void makeMatrix(float, float);                    // _44 (weak)
	virtual void makeMatrix(float, float, float, float);      // _48
	virtual void isUsed(const ResTIMG*);                      // _4C
	virtual void isUsed(const ResFONT*);                      // _50
	virtual void clearAnmTransform();                         // _54
	virtual void rewriteAlpha();                              // _58 (weak)
	virtual void setAnimation(J2DAnmBase*);                   // _5C
	virtual void setAnimation(J2DAnmTransform*);              // _60
	virtual void setAnimation(J2DAnmColor*);                  // _64 (weak)
	virtual void setAnimation(J2DAnmTexPattern*);             // _68 (weak)
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _6C (weak)
	virtual void setAnimation(J2DAnmTevRegKey*);              // _70 (weak)
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _74 (weak)
	virtual void setAnimation(J2DAnmVtxColor*);               // _78 (weak)
	virtual void animationTransform(const J2DAnmTransform*);  // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _84 (weak)
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _8C (weak)
	virtual void animationPane(const J2DAnmTransform*);       // _90
	virtual void _94() = 0;                                   // _94
};

#endif
