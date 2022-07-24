#ifndef _J2DTEXTBOX_H
#define _J2DTEXTBOX_H

/*
    __vt__10J2DTextBox:
    .4byte 0
    .4byte 0
    .4byte __dt__10J2DTextBoxFv
    .4byte getTypeID__10J2DTextBoxCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__10J2DTextBoxFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__10J2DTextBoxFb
    .4byte calcMtx__7J2DPaneFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__10J2DTextBoxFff
    .4byte drawSelf__10J2DTextBoxFffPA3_A4_f
    .4byte search__7J2DPaneFUx
    .4byte searchUserInfo__7J2DPaneFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__10J2DTextBoxFPC7ResTIMG
    .4byte isUsed__10J2DTextBoxFPC7ResFONT
    .4byte clearAnmTransform__7J2DPaneFv
    .4byte rewriteAlpha__10J2DTextBoxFv
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
    .4byte draw__10J2DTextBoxFff
    .4byte draw__10J2DTextBoxFfff18J2DTextBoxHBinding
    .4byte setFont__10J2DTextBoxFP7JUTFont
    .4byte getFont__10J2DTextBoxCFv
    .4byte setBlack__10J2DTextBoxFQ28JUtility6TColor
    .4byte setWhite__10J2DTextBoxFQ28JUtility6TColor
    .4byte setBlackWhite__10J2DTextBoxFQ28JUtility6TColorQ28JUtility6TColor
    .4byte getBlack__10J2DTextBoxCFv
    .4byte getWhite__10J2DTextBoxCFv
    .4byte getMaterial__10J2DTextBoxCFv
    .4byte 0
*/

struct J2DPane {
	virtual ~J2DPane();                                       // _08
	virtual void getTypeID() const;                           // _0C
	virtual void move(float, float);                          // _10
	virtual void add(float, float);                           // _14
	virtual void resize(float, float);                        // _18
	virtual void setCullBack(bool);                           // _1C
	virtual void setCullBack(_GXCullMode);                    // _20
	virtual void setAlpha(unsigned char);                     // _24
	virtual void setConnectParent(bool);                      // _28
	virtual void calcMtx();                                   // _2C
	virtual void update();                                    // _30
	virtual void drawSelf(float, float);                      // _34
	virtual void drawSelf(float, float, float (*)[3][4]);     // _38
	virtual void search(unsigned long long);                  // _3C
	virtual void searchUserInfo(unsigned long long);          // _40
	virtual void makeMatrix(float, float);                    // _44
	virtual void makeMatrix(float, float, float, float);      // _48
	virtual void isUsed(const ResTIMG*);                      // _4C
	virtual void isUsed(const ResFONT*);                      // _50
	virtual void clearAnmTransform();                         // _54
	virtual void rewriteAlpha();                              // _58
	virtual void setAnimation(J2DAnmBase*);                   // _5C
	virtual void setAnimation(J2DAnmTransform*);              // _60
	virtual void setAnimation(J2DAnmColor*);                  // _64
	virtual void setAnimation(J2DAnmTexPattern*);             // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);              // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _74
	virtual void setAnimation(J2DAnmVtxColor*);               // _78
	virtual void animationTransform(const J2DAnmTransform*);  // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _84
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _8C
	virtual void animationPane(const J2DAnmTransform*);       // _90

	// _00 VTBL
};

struct J2DTextBox : public J2DPane {
	virtual ~J2DTextBox();                                          // _08
	virtual void getTypeID() const;                                 // _0C
	virtual void resize(float, float);                              // _18
	virtual void setConnectParent(bool);                            // _28
	virtual void drawSelf(float, float);                            // _34
	virtual void drawSelf(float, float, float (*)[3][4]);           // _38
	virtual void isUsed(const ResTIMG*);                            // _4C
	virtual void isUsed(const ResFONT*);                            // _50
	virtual void rewriteAlpha();                                    // _58
	virtual void draw(float, float);                                // _94
	virtual void draw(float, float, float, J2DTextBoxHBinding);     // _98
	virtual void setFont(JUTFont*);                                 // _9C
	virtual void getFont() const;                                   // _A0
	virtual void setBlack(JUtility::TColor);                        // _A4
	virtual void setWhite(JUtility::TColor);                        // _A8
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor); // _AC
	virtual void getBlack() const;                                  // _B0
	virtual void getWhite() const;                                  // _B4
	virtual void getMaterial() const;                               // _B8
	virtual void _BC() = 0;                                         // _BC

	// _00 VTBL
};

#endif
