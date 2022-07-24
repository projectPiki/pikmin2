#ifndef _J2DPICTURE_H
#define _J2DPICTURE_H

/*
    __vt__10J2DPicture:
    .4byte 0
    .4byte 0
    .4byte __dt__10J2DPictureFv
    .4byte getTypeID__10J2DPictureCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__7J2DPaneFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__7J2DPaneFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__10J2DPictureFff
    .4byte drawSelf__10J2DPictureFffPA3_A4_f
    .4byte search__7J2DPaneFUx
    .4byte searchUserInfo__7J2DPaneFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__10J2DPictureFPC7ResTIMG
    .4byte isUsed__10J2DPictureFPC7ResFONT
    .4byte clearAnmTransform__7J2DPaneFv
    .4byte rewriteAlpha__10J2DPictureFv
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
    .4byte initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT
    .4byte prepareTexture__10J2DPictureFUc
    .4byte append__10J2DPictureFPC7ResTIMGf
    .4byte append__10J2DPictureFPC7ResTIMGP10JUTPalettef
    .4byte append__10J2DPictureFPCcf
    .4byte append__10J2DPictureFPCcP10JUTPalettef
    .4byte append__10J2DPictureFP10JUTTexturef
    .4byte prepend__10J2DPictureFPC7ResTIMGf
    .4byte prepend__10J2DPictureFPC7ResTIMGP10JUTPalettef
    .4byte prepend__10J2DPictureFPCcf
    .4byte prepend__10J2DPictureFPCcP10JUTPalettef
    .4byte prepend__10J2DPictureFP10JUTTexturef
    .4byte insert__10J2DPictureFPC7ResTIMGUcf
    .4byte insert__10J2DPictureFPC7ResTIMGP10JUTPaletteUcf
    .4byte insert__10J2DPictureFPCcUcf
    .4byte insert__10J2DPictureFPCcP10JUTPaletteUcf
    .4byte insert__10J2DPictureFP10JUTTextureUcf
    .4byte remove__10J2DPictureFUc
    .4byte remove__10J2DPictureFv
    .4byte remove__10J2DPictureFP10JUTTexture
    .4byte draw__10J2DPictureFffbbb
    .4byte draw__10J2DPictureFffUcbbb
    .4byte draw__10J2DPictureFffffbbb
    .4byte drawOut__10J2DPictureFffffff
    .4byte drawOut__10J2DPictureFffffffff
    .4byte "drawOut__10J2DPictureFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
    .4byte load__10J2DPictureF11_GXTexMapIDUc
    .4byte load__10J2DPictureFUc
    .4byte setBlendRatio__10J2DPictureFffffffff
    .4byte setBlendColorRatio__10J2DPictureFffffffff
    .4byte setBlendAlphaRatio__10J2DPictureFffffffff
    .4byte changeTexture__10J2DPictureFPC7ResTIMGUc
    .4byte changeTexture__10J2DPictureFPCcUc
    .4byte changeTexture__10J2DPictureFPC7ResTIMGUcP10JUTPalette
    .4byte changeTexture__10J2DPictureFPCcUcP10JUTPalette
    .4byte getTexture__10J2DPictureCFUc
    .4byte getTextureCount__10J2DPictureCFv
    .4byte setBlack__10J2DPictureFQ28JUtility6TColor
    .4byte setWhite__10J2DPictureFQ28JUtility6TColor
    .4byte setBlackWhite__10J2DPictureFQ28JUtility6TColorQ28JUtility6TColor
    .4byte getBlack__10J2DPictureCFv
    .4byte getWhite__10J2DPictureCFv
    .4byte getMaterial__10J2DPictureCFv
    .4byte drawFullSet__10J2DPictureFffffPA3_A4_f
    .4byte drawTexCoord__10J2DPictureFffffssssssssPA3_A4_f
    .4byte getUsableTlut__10J2DPictureFUc
    .4byte 0
*/

struct J2DPane {
	virtual ~J2DPane();                                       // _08
	virtual void getTypeID() const;                           // _0C (inline)
	virtual void move(float, float);                          // _10
	virtual void add(float, float);                           // _14
	virtual void resize(float, float);                        // _18
	virtual void setCullBack(bool);                           // _1C (inline)
	virtual void setCullBack(_GXCullMode);                    // _20
	virtual void setAlpha(unsigned char);                     // _24 (inline)
	virtual void setConnectParent(bool);                      // _28 (inline)
	virtual void calcMtx();                                   // _2C (inline)
	virtual void update();                                    // _30 (inline)
	virtual void drawSelf(float, float);                      // _34
	virtual void drawSelf(float, float, float (*)[3][4]);     // _38
	virtual void search(unsigned long long);                  // _3C
	virtual void searchUserInfo(unsigned long long);          // _40
	virtual void makeMatrix(float, float);                    // _44 (inline)
	virtual void makeMatrix(float, float, float, float);      // _48
	virtual void isUsed(const ResTIMG*);                      // _4C
	virtual void isUsed(const ResFONT*);                      // _50 (inline)
	virtual void clearAnmTransform();                         // _54
	virtual void rewriteAlpha();                              // _58 (inline)
	virtual void setAnimation(J2DAnmBase*);                   // _5C
	virtual void setAnimation(J2DAnmTransform*);              // _60
	virtual void setAnimation(J2DAnmColor*);                  // _64 (inline)
	virtual void setAnimation(J2DAnmTexPattern*);             // _68 (inline)
	virtual void setAnimation(J2DAnmTextureSRTKey*);          // _6C (inline)
	virtual void setAnimation(J2DAnmTevRegKey*);              // _70 (inline)
	virtual void setAnimation(J2DAnmVisibilityFull*);         // _74 (inline)
	virtual void setAnimation(J2DAnmVtxColor*);               // _78 (inline)
	virtual void animationTransform(const J2DAnmTransform*);  // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);       // _84 (inline)
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);             // _8C (inline)
	virtual void animationPane(const J2DAnmTransform*);       // _90
};

struct J2DPicture : public J2DPane {
	virtual ~J2DPicture();                                                                   // _08
	virtual void getTypeID() const;                                                          // _0C (inline)
	virtual void drawSelf(float, float);                                                     // _34
	virtual void drawSelf(float, float, float (*)[3][4]);                                    // _38
	virtual void isUsed(const ResTIMG*);                                                     // _4C
	virtual void isUsed(const ResFONT*);                                                     // _50 (inline)
	virtual void rewriteAlpha();                                                             // _58 (inline)
	virtual void initiate(const ResTIMG*, const ResTLUT*);                                   // _94
	virtual void prepareTexture(unsigned char);                                              // _98
	virtual void append(const ResTIMG*, float);                                              // _9C (inline)
	virtual void append(const ResTIMG*, JUTPalette*, float);                                 // _A0 (inline)
	virtual void append(const char*, float);                                                 // _A4 (inline)
	virtual void append(const char*, JUTPalette*, float);                                    // _A8 (inline)
	virtual void append(JUTTexture*, float);                                                 // _AC (inline)
	virtual void prepend(const ResTIMG*, float);                                             // _B0 (inline)
	virtual void prepend(const ResTIMG*, JUTPalette*, float);                                // _B4 (inline)
	virtual void prepend(const char*, float);                                                // _B8 (inline)
	virtual void prepend(const char*, JUTPalette*, float);                                   // _BC (inline)
	virtual void prepend(JUTTexture*, float);                                                // _C0 (inline)
	virtual void insert(const ResTIMG*, unsigned char, float);                               // _C4 (inline)
	virtual void insert(const ResTIMG*, JUTPalette*, unsigned char, float);                  // _C8
	virtual void insert(const char*, unsigned char, float);                                  // _CC (inline)
	virtual void insert(const char*, JUTPalette*, unsigned char, float);                     // _D0
	virtual void insert(JUTTexture*, unsigned char, float);                                  // _D4
	virtual void remove(unsigned char);                                                      // _D8
	virtual void remove();                                                                   // _DC (inline)
	virtual void remove(JUTTexture*);                                                        // _E0
	virtual void draw(float, float, bool, bool, bool);                                       // _E4 (inline)
	virtual void draw(float, float, unsigned char, bool, bool, bool);                        // _E8 (inline)
	virtual void draw(float, float, float, float, bool, bool, bool);                         // _EC
	virtual void drawOut(float, float, float, float, float, float);                          // _F0 (inline)
	virtual void drawOut(float, float, float, float, float, float, float, float);            // _F4 (inline)
	virtual void drawOut(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&);    // _F8
	virtual void load(_GXTexMapID, unsigned char);                                           // _FC (inline)
	virtual void load(unsigned char);                                                        // _100 (inline)
	virtual void setBlendRatio(float, float, float, float, float, float, float, float);      // _104 (inline)
	virtual void setBlendColorRatio(float, float, float, float, float, float, float, float); // _108
	virtual void setBlendAlphaRatio(float, float, float, float, float, float, float, float); // _10C
	virtual void changeTexture(const ResTIMG*, unsigned char);                               // _110
	virtual void changeTexture(const char*, unsigned char);                                  // _114
	virtual void changeTexture(const ResTIMG*, unsigned char, JUTPalette*);                  // _118
	virtual void changeTexture(const char*, unsigned char, JUTPalette*);                     // _11C
	virtual void getTexture(unsigned char) const;                                            // _120 (inline)
	virtual void getTextureCount() const;                                                    // _124 (inline)
	virtual void setBlack(JUtility::TColor);                                                 // _128 (inline)
	virtual void setWhite(JUtility::TColor);                                                 // _12C (inline)
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);                          // _130 (inline)
	virtual void getBlack() const;                                                           // _134 (inline)
	virtual void getWhite() const;                                                           // _138 (inline)
	virtual void getMaterial() const;                                                        // _13C (inline)
	virtual void drawFullSet(float, float, float, float, float (*)[3][4]);                   // _140
	virtual void drawTexCoord(float, float, float, float, short, short, short, short, short, short, short, short, float (*)[3][4]); // _144
	virtual void getUsableTlut(unsigned char);                                                                                      // _148
	virtual void _14C() = 0;                                                                                                        // _14C
};

#endif
