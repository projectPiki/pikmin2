#ifndef _J2DWINDOW_H
#define _J2DWINDOW_H

/*
    __vt__9J2DWindow:
    .4byte 0
    .4byte 0
    .4byte __dt__9J2DWindowFv
    .4byte getTypeID__9J2DWindowCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__9J2DWindowFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__7J2DPaneFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__9J2DWindowFff
    .4byte drawSelf__9J2DWindowFffPA3_A4_f
    .4byte search__7J2DPaneFUx
    .4byte searchUserInfo__7J2DPaneFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__9J2DWindowFPC7ResTIMG
    .4byte isUsed__9J2DWindowFPC7ResFONT
    .4byte clearAnmTransform__7J2DPaneFv
    .4byte rewriteAlpha__9J2DWindowFv
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
    .4byte "draw__9J2DWindowFRCQ29JGeometry8TBox2<f>"
    .4byte "draw__9J2DWindowFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
    .4byte draw__9J2DWindowFffff
    .4byte setBlack__9J2DWindowFQ28JUtility6TColor
    .4byte setWhite__9J2DWindowFQ28JUtility6TColor
    .4byte setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor
    .4byte getBlack__9J2DWindowCFv
    .4byte getWhite__9J2DWindowCFv
    .4byte getFrameTexture__9J2DWindowCFUcUc
    .4byte getContentsTexture__9J2DWindowCFUc
    .4byte getMaterial__9J2DWindowCFRQ29J2DWindow9TMaterial
    .4byte getFrameMaterial__9J2DWindowCFUc
    .4byte getContentsMaterial__9J2DWindowCFv
    .4byte "drawContents__9J2DWindowFRCQ29JGeometry8TBox2<f>"
    .4byte 0
*/

struct J2DPane {
	virtual ~J2DPane();                                       // _00
	virtual void getTypeID() const;                           // _04
	virtual void move(float, float);                          // _08
	virtual void add(float, float);                           // _0C
	virtual void resize(float, float);                        // _10
	virtual void setCullBack(bool);                           // _14
	virtual void setCullBack(_GXCullMode);                    // _18
	virtual void setAlpha(unsigned char);                     // _1C
	virtual void setConnectParent(bool);                      // _20
	virtual void calcMtx();                                   // _24
	virtual void update();                                    // _28
	virtual void drawSelf(float, float);                      // _2C
	virtual void drawSelf(float, float, float (*)[3][4]);     // _30
	virtual void search(unsigned long long);                  // _34
	virtual void searchUserInfo(unsigned long long);          // _38
	virtual void makeMatrix(float, float);                    // _3C
	virtual void makeMatrix(float, float, float, float);      // _40
	virtual void isUsed(const ResTIMG*);                      // _44
	virtual void isUsed(const ResFONT*);                      // _48
	virtual void clearAnmTransform();                         // _4C
	virtual void rewriteAlpha();                              // _50
	virtual void setAnimation(J2DAnmBase*);                   // _54
	virtual void setAnimation(J2DAnmTransform*);              // _58
	virtual void setAnimation(J2DAnmColor*);                  // _5C
	virtual void setAnimation(J2DAnmTexPattern*);             // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _64
	virtual void setAnimation(J2DAnmTevRegKey*);              // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _6C
	virtual void setAnimation(J2DAnmVtxColor*);               // _70
	virtual void animationTransform(const J2DAnmTransform*);  // _74
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _84
	virtual void animationPane(const J2DAnmTransform*);       // _88

	// _00 VTBL
};

struct J2DWindow : public J2DPane {
	virtual ~J2DWindow();                                     // _00
	virtual void getTypeID() const;                           // _04
	virtual void move(float, float);                          // _08
	virtual void add(float, float);                           // _0C
	virtual void resize(float, float);                        // _10
	virtual void setCullBack(bool);                           // _14
	virtual void setCullBack(_GXCullMode);                    // _18
	virtual void setAlpha(unsigned char);                     // _1C
	virtual void setConnectParent(bool);                      // _20
	virtual void calcMtx();                                   // _24
	virtual void update();                                    // _28
	virtual void drawSelf(float, float);                      // _2C
	virtual void drawSelf(float, float, float (*)[3][4]);     // _30
	virtual void search(unsigned long long);                  // _34
	virtual void searchUserInfo(unsigned long long);          // _38
	virtual void makeMatrix(float, float);                    // _3C
	virtual void makeMatrix(float, float, float, float);      // _40
	virtual void isUsed(const ResTIMG*);                      // _44
	virtual void isUsed(const ResFONT*);                      // _48
	virtual void clearAnmTransform();                         // _4C
	virtual void rewriteAlpha();                              // _50
	virtual void setAnimation(J2DAnmBase*);                   // _54
	virtual void setAnimation(J2DAnmTransform*);              // _58
	virtual void setAnimation(J2DAnmColor*);                  // _5C
	virtual void setAnimation(J2DAnmTexPattern*);             // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _64
	virtual void setAnimation(J2DAnmTevRegKey*);              // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _6C
	virtual void setAnimation(J2DAnmVtxColor*);               // _70
	virtual void animationTransform(const J2DAnmTransform*);  // _74
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _84
	virtual void animationPane(const J2DAnmTransform*);       // _88
	virtual void draw(const JGeometry::TBox2<float>&);        // _8C
	virtual void draw(const JGeometry::TBox2<float>&,
	                  const JGeometry::TBox2<float>&);                // _90
	virtual void draw(float, float, float, float);                    // _94
	virtual void setBlack(JUtility::TColor);                          // _98
	virtual void setWhite(JUtility::TColor);                          // _9C
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);   // _A0
	virtual void getBlack() const;                                    // _A4
	virtual void getWhite() const;                                    // _A8
	virtual void getFrameTexture(unsigned char, unsigned char) const; // _AC
	virtual void getContentsTexture(unsigned char) const;             // _B0
	virtual void getMaterial(TMaterial&) const;                       // _B4
	virtual void getFrameMaterial(unsigned char) const;               // _B8
	virtual void getContentsMaterial() const;                         // _BC
	virtual void drawContents(const JGeometry::TBox2<float>&);        // _C0
	virtual void _C4() = 0;                                           // _C4

	// _00 VTBL
};

#endif
