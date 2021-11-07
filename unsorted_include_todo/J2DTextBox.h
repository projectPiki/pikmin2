#ifndef _J2DTEXTBOX_H
#define _J2DTEXTBOX_H

struct J2DPane {
	virtual void _00() = 0;                                   // _00
	virtual void _04() = 0;                                   // _04
	virtual void move(float, float);                          // _08
	virtual void add(float, float);                           // _0C
	virtual void _10() = 0;                                   // _10
	virtual void setCullBack(bool);                           // _14
	virtual void setCullBack(_GXCullMode);                    // _18
	virtual void setAlpha(unsigned char);                     // _1C
	virtual void _20() = 0;                                   // _20
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

struct J2DTextBox : public J2DPane {
	virtual ~J2DTextBox();                                          // _00
	virtual void getTypeID() const;                                 // _04
	virtual void move(float, float);                                // _08
	virtual void add(float, float);                                 // _0C
	virtual void resize(float, float);                              // _10
	virtual void setCullBack(bool);                                 // _14
	virtual void setCullBack(_GXCullMode);                          // _18
	virtual void setAlpha(unsigned char);                           // _1C
	virtual void setConnectParent(bool);                            // _20
	virtual void calcMtx();                                         // _24
	virtual void update();                                          // _28
	virtual void drawSelf(float, float);                            // _2C
	virtual void drawSelf(float, float, float (*)[3][4]);           // _30
	virtual void search(unsigned long long);                        // _34
	virtual void searchUserInfo(unsigned long long);                // _38
	virtual void makeMatrix(float, float);                          // _3C
	virtual void makeMatrix(float, float, float, float);            // _40
	virtual void isUsed(const ResTIMG*);                            // _44
	virtual void isUsed(const ResFONT*);                            // _48
	virtual void clearAnmTransform();                               // _4C
	virtual void rewriteAlpha();                                    // _50
	virtual void setAnimation(J2DAnmBase*);                         // _54
	virtual void setAnimation(J2DAnmTransform*);                    // _58
	virtual void setAnimation(J2DAnmColor*);                        // _5C
	virtual void setAnimation(J2DAnmTexPattern*);                   // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);                // _64
	virtual void setAnimation(J2DAnmTevRegKey*);                    // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);               // _6C
	virtual void setAnimation(J2DAnmVtxColor*);                     // _70
	virtual void animationTransform(const J2DAnmTransform*);        // _74
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*);       // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);             // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);             // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);                   // _84
	virtual void animationPane(const J2DAnmTransform*);             // _88
	virtual void draw(float, float);                                // _8C
	virtual void draw(float, float, float, J2DTextBoxHBinding);     // _90
	virtual void setFont(JUTFont*);                                 // _94
	virtual void getFont() const;                                   // _98
	virtual void setBlack(JUtility::TColor);                        // _9C
	virtual void setWhite(JUtility::TColor);                        // _A0
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor); // _A4
	virtual void getBlack() const;                                  // _A8
	virtual void getWhite() const;                                  // _AC
	virtual void getMaterial() const;                               // _B0
	virtual void _B4() = 0;                                         // _B4

	// _00 VTBL
};

#endif
