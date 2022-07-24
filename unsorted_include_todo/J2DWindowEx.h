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
	virtual ~J2DWindow();                  // _08
	virtual void getTypeID() const;        // _0C (inline)
	virtual void _10() = 0;                // _10
	virtual void _14() = 0;                // _14
	virtual void resize(float, float);     // _18
	virtual void setCullBack(bool);        // _1C (inline)
	virtual void setCullBack(_GXCullMode); // _20
	virtual void setAlpha(unsigned char);  // _24
	virtual void _28() = 0;                // _28
	virtual void _2C() = 0;                // _2C
	virtual void _30() = 0;                // _30
	virtual void drawSelf(float, float);   // _34
};

struct J2DPane {
	virtual ~J2DPane();                                       // _08
	virtual void _0C() = 0;                                   // _0C
	virtual void move(float, float);                          // _10
	virtual void add(float, float);                           // _14
	virtual void _18() = 0;                                   // _18
	virtual void setCullBack(bool);                           // _1C (inline)
	virtual void setCullBack(_GXCullMode);                    // _20
	virtual void setAlpha(unsigned char);                     // _24
	virtual void setConnectParent(bool);                      // _28 (inline)
	virtual void calcMtx();                                   // _2C (inline)
	virtual void update();                                    // _30 (inline)
	virtual void _34() = 0;                                   // _34
	virtual void drawSelf(float, float, float (*)[3][4]);     // _38
	virtual void search(unsigned long long);                  // _3C
	virtual void searchUserInfo(unsigned long long);          // _40
	virtual void makeMatrix(float, float);                    // _44 (inline)
	virtual void makeMatrix(float, float, float, float);      // _48
	virtual void isUsed(const ResTIMG*);                      // _4C
	virtual void isUsed(const ResFONT*);                      // _50 (inline)
	virtual void clearAnmTransform();                         // _54
	virtual void rewriteAlpha();                              // _58
	virtual void setAnimation(J2DAnmBase*);                   // _5C (inline)
	virtual void setAnimation(J2DAnmTransform*);              // _60 (inline)
	virtual void setAnimation(J2DAnmColor*);                  // _64
	virtual void setAnimation(J2DAnmTexPattern*);             // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);              // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _74
	virtual void setAnimation(J2DAnmVtxColor*);               // _78
	virtual void animationTransform(const J2DAnmTransform*);  // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _84 (inline)
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _8C (inline)
};

struct J2DWindowEx : public J2DWindow, public J2DPane {
	virtual ~J2DWindowEx();                                                            // _08
	virtual void setCullBack(bool);                                                    // _1C (inline)
	virtual void setCullBack(_GXCullMode);                                             // _20
	virtual void setAlpha(unsigned char);                                              // _24
	virtual void drawSelf(float, float, float (*)[3][4]);                              // _38
	virtual void isUsed(const ResTIMG*);                                               // _4C
	virtual void isUsed(const ResFONT*);                                               // _50 (inline)
	virtual void rewriteAlpha();                                                       // _58
	virtual void setAnimation(J2DAnmBase*);                                            // _5C (inline)
	virtual void setAnimation(J2DAnmTransform*);                                       // _60 (inline)
	virtual void setAnimation(J2DAnmColor*);                                           // _64
	virtual void setAnimation(J2DAnmTexPattern*);                                      // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                                   // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                                       // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                                  // _74
	virtual void setAnimation(J2DAnmVtxColor*);                                        // _78
	virtual void animationPane(const J2DAnmTransform*);                                // _90
	virtual void draw(const JGeometry::TBox2<float>&);                                 // _94
	virtual void draw(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&); // _98
	virtual void draw(float, float, float, float);                                     // _9C (inline)
	virtual void setBlack(JUtility::TColor);                                           // _A0
	virtual void setWhite(JUtility::TColor);                                           // _A4
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);                    // _A8
	virtual void getBlack() const;                                                     // _AC
	virtual void getWhite() const;                                                     // _B0
	virtual void getFrameTexture(unsigned char, unsigned char) const;                  // _B4
	virtual void getContentsTexture(unsigned char) const;                              // _B8
	virtual void getMaterial(J2DWindow::TMaterial&) const;                             // _BC (inline)
	virtual void getFrameMaterial(unsigned char) const;                                // _C0 (inline)
	virtual void getContentsMaterial() const;                                          // _C4 (inline)
	virtual void drawContents(const JGeometry::TBox2<float>&);                         // _C8
	virtual void _CC() = 0;                                                            // _CC
};

#endif
