#ifndef _J2DWINDOWEX_H
#define _J2DWINDOWEX_H

/*
    __vt__11J2DWindowEx:
    .4byte 0
    .4byte 0
    .4byte __dt__11J2DWindowExFv
    .4byte getTypeID__9J2DWindowCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__9J2DWindowFff
    .4byte setCullBack__11J2DWindowExFb
    .4byte setCullBack__11J2DWindowExF11_GXCullMode
    .4byte setAlpha__11J2DWindowExFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__7J2DPaneFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__9J2DWindowFff
    .4byte drawSelf__11J2DWindowExFffPA3_A4_f
    .4byte search__7J2DPaneFUx
    .4byte searchUserInfo__7J2DPaneFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__11J2DWindowExFPC7ResTIMG
    .4byte isUsed__11J2DWindowExFPC7ResFONT
    .4byte clearAnmTransform__7J2DPaneFv
    .4byte rewriteAlpha__11J2DWindowExFv
    .4byte setAnimation__11J2DWindowExFP10J2DAnmBase
    .4byte setAnimation__11J2DWindowExFP15J2DAnmTransform
    .4byte setAnimation__11J2DWindowExFP11J2DAnmColor
    .4byte setAnimation__11J2DWindowExFP16J2DAnmTexPattern
    .4byte setAnimation__11J2DWindowExFP19J2DAnmTextureSRTKey
    .4byte setAnimation__11J2DWindowExFP15J2DAnmTevRegKey
    .4byte setAnimation__11J2DWindowExFP20J2DAnmVisibilityFull
    .4byte setAnimation__11J2DWindowExFP14J2DAnmVtxColor
    .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
    .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
    .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
    .4byte animationPane__11J2DWindowExFPC15J2DAnmTransform
    .4byte "draw__11J2DWindowExFRCQ29JGeometry8TBox2<f>"
    .4byte "draw__11J2DWindowExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
    .4byte draw__11J2DWindowExFffff
    .4byte setBlack__11J2DWindowExFQ28JUtility6TColor
    .4byte setWhite__11J2DWindowExFQ28JUtility6TColor
    .4byte setBlackWhite__11J2DWindowExFQ28JUtility6TColorQ28JUtility6TColor
    .4byte getBlack__11J2DWindowExCFv
    .4byte getWhite__11J2DWindowExCFv
    .4byte getFrameTexture__11J2DWindowExCFUcUc
    .4byte getContentsTexture__11J2DWindowExCFUc
    .4byte getMaterial__11J2DWindowExCFRQ29J2DWindow9TMaterial
    .4byte getFrameMaterial__11J2DWindowExCFUc
    .4byte getContentsMaterial__11J2DWindowExCFv
    .4byte "drawContents__11J2DWindowExFRCQ29JGeometry8TBox2<f>"
    .4byte 0
*/

struct J2DWindow {
	virtual void _00() = 0;              // _00
	virtual void getTypeID() const;      // _04
	virtual void _08() = 0;              // _08
	virtual void _0C() = 0;              // _0C
	virtual void resize(float, float);   // _10
	virtual void _14() = 0;              // _14
	virtual void _18() = 0;              // _18
	virtual void _1C() = 0;              // _1C
	virtual void _20() = 0;              // _20
	virtual void _24() = 0;              // _24
	virtual void _28() = 0;              // _28
	virtual void drawSelf(float, float); // _2C

	// _00 VTBL
};

struct J2DPane {
	virtual void _00() = 0;                                   // _00
	virtual void _04() = 0;                                   // _04
	virtual void move(float, float);                          // _08
	virtual void add(float, float);                           // _0C
	virtual void _10() = 0;                                   // _10
	virtual void _14() = 0;                                   // _14
	virtual void _18() = 0;                                   // _18
	virtual void _1C() = 0;                                   // _1C
	virtual void setConnectParent(bool);                      // _20
	virtual void calcMtx();                                   // _24
	virtual void update();                                    // _28
	virtual void _2C() = 0;                                   // _2C
	virtual void _30() = 0;                                   // _30
	virtual void search(unsigned long long);                  // _34
	virtual void searchUserInfo(unsigned long long);          // _38
	virtual void makeMatrix(float, float);                    // _3C
	virtual void makeMatrix(float, float, float, float);      // _40
	virtual void _44() = 0;                                   // _44
	virtual void _48() = 0;                                   // _48
	virtual void clearAnmTransform();                         // _4C
	virtual void _50() = 0;                                   // _50
	virtual void _54() = 0;                                   // _54
	virtual void _58() = 0;                                   // _58
	virtual void _5C() = 0;                                   // _5C
	virtual void _60() = 0;                                   // _60
	virtual void _64() = 0;                                   // _64
	virtual void _68() = 0;                                   // _68
	virtual void _6C() = 0;                                   // _6C
	virtual void _70() = 0;                                   // _70
	virtual void animationTransform(const J2DAnmTransform*);  // _74
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _84

	// _00 VTBL
};

struct J2DWindowEx : public J2DWindow, public J2DPane {
	virtual ~J2DWindowEx();                                   // _00
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
	virtual void getMaterial(J2DWindow::TMaterial&) const;            // _B4
	virtual void getFrameMaterial(unsigned char) const;               // _B8
	virtual void getContentsMaterial() const;                         // _BC
	virtual void drawContents(const JGeometry::TBox2<float>&);        // _C0
	virtual void _C4() = 0;                                           // _C4

	// _00 VTBL
};

#endif
