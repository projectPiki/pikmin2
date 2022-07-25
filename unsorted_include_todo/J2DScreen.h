#ifndef _J2DSCREEN_H
#define _J2DSCREEN_H

/*
    __vt__9J2DScreen:
    .4byte 0
    .4byte 0
    .4byte __dt__9J2DScreenFv
    .4byte getTypeID__9J2DScreenCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__7J2DPaneFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__9J2DScreenFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__7J2DPaneFff
    .4byte drawSelf__9J2DScreenFffPA3_A4_f
    .4byte search__9J2DScreenFUx
    .4byte searchUserInfo__9J2DScreenFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__9J2DScreenFPC7ResTIMG
    .4byte isUsed__9J2DScreenFPC7ResFONT
    .4byte clearAnmTransform__9J2DScreenFv
    .4byte rewriteAlpha__7J2DPaneFv
    .4byte setAnimation__9J2DScreenFP10J2DAnmBase
    .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
    .4byte setAnimation__9J2DScreenFP11J2DAnmColor
    .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
    .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
    .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
    .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
    .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
    .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
    .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
    .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
    .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
    .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
    .4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
    .4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
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
	virtual void drawSelf(float, float, float (*)[3][4]);     // _38
	virtual void search(unsigned long long);                  // _3C
	virtual void searchUserInfo(unsigned long long);          // _40
	virtual void makeMatrix(float, float);                    // _44 (weak)
	virtual void makeMatrix(float, float, float, float);      // _48
	virtual void isUsed(const ResTIMG*);                      // _4C
	virtual void isUsed(const ResFONT*);                      // _50
	virtual void clearAnmTransform();                         // _54 (weak)
	virtual void rewriteAlpha();                              // _58 (weak)
	virtual void setAnimation(J2DAnmBase*);                   // _5C (weak)
	virtual void setAnimation(J2DAnmTransform*);              // _60 (weak)
	virtual void setAnimation(J2DAnmColor*);                  // _64
	virtual void setAnimation(J2DAnmTexPattern*);             // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);              // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _74
	virtual void setAnimation(J2DAnmVtxColor*);               // _78
	virtual void animationTransform(const J2DAnmTransform*);  // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _84 (weak)
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _8C (weak)
	virtual void animationPane(const J2DAnmTransform*);       // _90
};

struct J2DScreen : public J2DPane {
	virtual ~J2DScreen();                                                                                            // _08
	virtual void getTypeID() const;                                                                                  // _0C (weak)
	virtual void calcMtx();                                                                                          // _2C (weak)
	virtual void drawSelf(float, float, float (*)[3][4]);                                                            // _38
	virtual void search(unsigned long long);                                                                         // _3C
	virtual void searchUserInfo(unsigned long long);                                                                 // _40
	virtual void isUsed(const ResTIMG*);                                                                             // _4C
	virtual void isUsed(const ResFONT*);                                                                             // _50
	virtual void clearAnmTransform();                                                                                // _54 (weak)
	virtual void setAnimation(J2DAnmBase*);                                                                          // _5C (weak)
	virtual void setAnimation(J2DAnmTransform*);                                                                     // _60 (weak)
	virtual void setAnimation(J2DAnmColor*);                                                                         // _64
	virtual void setAnimation(J2DAnmTexPattern*);                                                                    // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                                                                 // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                                                                     // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                                                                // _74
	virtual void setAnimation(J2DAnmVtxColor*);                                                                      // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);                                                              // _84 (weak)
	virtual void setAnimationVC(J2DAnmVtxColor*);                                                                    // _8C (weak)
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*, J2DPane*, unsigned long);              // _94 (weak)
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*, J2DPane*, unsigned long, JKRArchive*); // _98
	virtual void _9C() = 0;                                                                                          // _9C
};

#endif
