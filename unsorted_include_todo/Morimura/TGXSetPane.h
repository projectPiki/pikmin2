#ifndef _MORIMURA_TGXSETPANE_H
#define _MORIMURA_TGXSETPANE_H

/*
    __vt__Q28Morimura10TGXSetPane:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura10TGXSetPaneFv
    .4byte getTypeID__10J2DPictureCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__7J2DPaneFff
    .4byte setCullBack__12J2DPictureExFb
    .4byte setCullBack__12J2DPictureExF11_GXCullMode
    .4byte setAlpha__12J2DPictureExFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__7J2DPaneFv
    .4byte update__7J2DPaneFv
    .4byte drawSelf__10J2DPictureFff
    .4byte drawSelf__Q28Morimura10TGXSetPaneFffPA3_A4_f
    .4byte search__7J2DPaneFUx
    .4byte searchUserInfo__7J2DPaneFUx
    .4byte makeMatrix__7J2DPaneFff
    .4byte makeMatrix__7J2DPaneFffff
    .4byte isUsed__12J2DPictureExFPC7ResTIMG
    .4byte isUsed__12J2DPictureExFPC7ResFONT
    .4byte clearAnmTransform__7J2DPaneFv
    .4byte rewriteAlpha__12J2DPictureExFv
    .4byte setAnimation__12J2DPictureExFP10J2DAnmBase
    .4byte setAnimation__12J2DPictureExFP15J2DAnmTransform
    .4byte setAnimation__12J2DPictureExFP11J2DAnmColor
    .4byte setAnimation__12J2DPictureExFP16J2DAnmTexPattern
    .4byte setAnimation__12J2DPictureExFP19J2DAnmTextureSRTKey
    .4byte setAnimation__12J2DPictureExFP15J2DAnmTevRegKey
    .4byte setAnimation__12J2DPictureExFP20J2DAnmVisibilityFull
    .4byte setAnimation__12J2DPictureExFP14J2DAnmVtxColor
    .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
    .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
    .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
    .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
    .4byte animationPane__12J2DPictureExFPC15J2DAnmTransform
    .4byte initiate__12J2DPictureExFPC7ResTIMGPC7ResTLUT
    .4byte prepareTexture__12J2DPictureExFUc
    .4byte append__12J2DPictureExFPC7ResTIMGf
    .4byte append__12J2DPictureExFPC7ResTIMGP10JUTPalettef
    .4byte append__12J2DPictureExFPCcf
    .4byte append__12J2DPictureExFPCcP10JUTPalettef
    .4byte append__12J2DPictureExFP10JUTTexturef
    .4byte prepend__12J2DPictureExFPC7ResTIMGf
    .4byte prepend__12J2DPictureExFPC7ResTIMGP10JUTPalettef
    .4byte prepend__12J2DPictureExFPCcf
    .4byte prepend__12J2DPictureExFPCcP10JUTPalettef
    .4byte prepend__12J2DPictureExFP10JUTTexturef
    .4byte insert__12J2DPictureExFPC7ResTIMGUcf
    .4byte insert__12J2DPictureExFPC7ResTIMGP10JUTPaletteUcf
    .4byte insert__12J2DPictureExFPCcUcf
    .4byte insert__12J2DPictureExFPCcP10JUTPaletteUcf
    .4byte insert__12J2DPictureExFP10JUTTextureUcf
    .4byte remove__12J2DPictureExFUc
    .4byte remove__12J2DPictureExFv
    .4byte remove__12J2DPictureExFP10JUTTexture
    .4byte draw__12J2DPictureExFffbbb
    .4byte draw__12J2DPictureExFffUcbbb
    .4byte draw__12J2DPictureExFffffbbb
    .4byte drawOut__12J2DPictureExFffffff
    .4byte drawOut__12J2DPictureExFffffffff
    .4byte
   "drawOut__12J2DPictureExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
    .4byte load__12J2DPictureExF11_GXTexMapIDUc
    .4byte load__12J2DPictureExFUc
    .4byte setBlendRatio__10J2DPictureFffffffff
    .4byte setBlendColorRatio__12J2DPictureExFffffffff
    .4byte setBlendAlphaRatio__12J2DPictureExFffffffff
    .4byte changeTexture__12J2DPictureExFPC7ResTIMGUc
    .4byte changeTexture__12J2DPictureExFPCcUc
    .4byte changeTexture__12J2DPictureExFPC7ResTIMGUcP10JUTPalette
    .4byte changeTexture__12J2DPictureExFPCcUcP10JUTPalette
    .4byte getTexture__12J2DPictureExCFUc
    .4byte getTextureCount__12J2DPictureExCFv
    .4byte setBlack__12J2DPictureExFQ28JUtility6TColor
    .4byte setWhite__12J2DPictureExFQ28JUtility6TColor
    .4byte setBlackWhite__12J2DPictureExFQ28JUtility6TColorQ28JUtility6TColor
    .4byte getBlack__12J2DPictureExCFv
    .4byte getWhite__12J2DPictureExCFv
    .4byte getMaterial__12J2DPictureExCFv
    .4byte drawFullSet__12J2DPictureExFffffPA3_A4_f
    .4byte drawTexCoord__12J2DPictureExFffffssssssssPA3_A4_f
    .4byte getUsableTlut__12J2DPictureExFUc
*/

struct J2DPicture {
	virtual void _00() = 0;              // _00
	virtual void getTypeID() const;      // _04
	virtual void _08() = 0;              // _08
	virtual void _0C() = 0;              // _0C
	virtual void _10() = 0;              // _10
	virtual void _14() = 0;              // _14
	virtual void _18() = 0;              // _18
	virtual void _1C() = 0;              // _1C
	virtual void _20() = 0;              // _20
	virtual void _24() = 0;              // _24
	virtual void _28() = 0;              // _28
	virtual void drawSelf(float, float); // _2C
	virtual void _30() = 0;              // _30
	virtual void _34() = 0;              // _34
	virtual void _38() = 0;              // _38
	virtual void _3C() = 0;              // _3C
	virtual void _40() = 0;              // _40
	virtual void _44() = 0;              // _44
	virtual void _48() = 0;              // _48
	virtual void _4C() = 0;              // _4C
	virtual void _50() = 0;              // _50
	virtual void _54() = 0;              // _54
	virtual void _58() = 0;              // _58
	virtual void _5C() = 0;              // _5C
	virtual void _60() = 0;              // _60
	virtual void _64() = 0;              // _64
	virtual void _68() = 0;              // _68
	virtual void _6C() = 0;              // _6C
	virtual void _70() = 0;              // _70
	virtual void _74() = 0;              // _74
	virtual void _78() = 0;              // _78
	virtual void _7C() = 0;              // _7C
	virtual void _80() = 0;              // _80
	virtual void _84() = 0;              // _84
	virtual void _88() = 0;              // _88
	virtual void _8C() = 0;              // _8C
	virtual void _90() = 0;              // _90
	virtual void _94() = 0;              // _94
	virtual void _98() = 0;              // _98
	virtual void _9C() = 0;              // _9C
	virtual void _A0() = 0;              // _A0
	virtual void _A4() = 0;              // _A4
	virtual void _A8() = 0;              // _A8
	virtual void _AC() = 0;              // _AC
	virtual void _B0() = 0;              // _B0
	virtual void _B4() = 0;              // _B4
	virtual void _B8() = 0;              // _B8
	virtual void _BC() = 0;              // _BC
	virtual void _C0() = 0;              // _C0
	virtual void _C4() = 0;              // _C4
	virtual void _C8() = 0;              // _C8
	virtual void _CC() = 0;              // _CC
	virtual void _D0() = 0;              // _D0
	virtual void _D4() = 0;              // _D4
	virtual void _D8() = 0;              // _D8
	virtual void _DC() = 0;              // _DC
	virtual void _E0() = 0;              // _E0
	virtual void _E4() = 0;              // _E4
	virtual void _E8() = 0;              // _E8
	virtual void _EC() = 0;              // _EC
	virtual void _F0() = 0;              // _F0
	virtual void _F4() = 0;              // _F4
	virtual void _F8() = 0;              // _F8
	virtual void setBlendRatio(float, float, float, float, float, float, float,
	                           float); // _FC

	// _00 VTBL
};

struct J2DPane {
	virtual void _00() = 0;                                   // _00
	virtual void _04() = 0;                                   // _04
	virtual void move(float, float);                          // _08
	virtual void add(float, float);                           // _0C
	virtual void resize(float, float);                        // _10
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

struct J2DPictureEx {
	virtual void _00() = 0;                                    // _00
	virtual void _04() = 0;                                    // _04
	virtual void _08() = 0;                                    // _08
	virtual void _0C() = 0;                                    // _0C
	virtual void _10() = 0;                                    // _10
	virtual void setCullBack(bool);                            // _14
	virtual void setCullBack(_GXCullMode);                     // _18
	virtual void setAlpha(unsigned char);                      // _1C
	virtual void _20() = 0;                                    // _20
	virtual void _24() = 0;                                    // _24
	virtual void _28() = 0;                                    // _28
	virtual void _2C() = 0;                                    // _2C
	virtual void _30() = 0;                                    // _30
	virtual void _34() = 0;                                    // _34
	virtual void _38() = 0;                                    // _38
	virtual void _3C() = 0;                                    // _3C
	virtual void _40() = 0;                                    // _40
	virtual void isUsed(const ResTIMG*);                       // _44
	virtual void isUsed(const ResFONT*);                       // _48
	virtual void _4C() = 0;                                    // _4C
	virtual void rewriteAlpha();                               // _50
	virtual void setAnimation(J2DAnmBase*);                    // _54
	virtual void setAnimation(J2DAnmTransform*);               // _58
	virtual void setAnimation(J2DAnmColor*);                   // _5C
	virtual void setAnimation(J2DAnmTexPattern*);              // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);           // _64
	virtual void setAnimation(J2DAnmTevRegKey*);               // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);          // _6C
	virtual void setAnimation(J2DAnmVtxColor*);                // _70
	virtual void _74() = 0;                                    // _74
	virtual void _78() = 0;                                    // _78
	virtual void _7C() = 0;                                    // _7C
	virtual void _80() = 0;                                    // _80
	virtual void _84() = 0;                                    // _84
	virtual void animationPane(const J2DAnmTransform*);        // _88
	virtual void initiate(const ResTIMG*, const ResTLUT*);     // _8C
	virtual void prepareTexture(unsigned char);                // _90
	virtual void append(const ResTIMG*, float);                // _94
	virtual void append(const ResTIMG*, JUTPalette*, float);   // _98
	virtual void append(const char*, float);                   // _9C
	virtual void append(const char*, JUTPalette*, float);      // _A0
	virtual void append(JUTTexture*, float);                   // _A4
	virtual void prepend(const ResTIMG*, float);               // _A8
	virtual void prepend(const ResTIMG*, JUTPalette*, float);  // _AC
	virtual void prepend(const char*, float);                  // _B0
	virtual void prepend(const char*, JUTPalette*, float);     // _B4
	virtual void prepend(JUTTexture*, float);                  // _B8
	virtual void insert(const ResTIMG*, unsigned char, float); // _BC
	virtual void insert(const ResTIMG*, JUTPalette*, unsigned char,
	                    float);                                          // _C0
	virtual void insert(const char*, unsigned char, float);              // _C4
	virtual void insert(const char*, JUTPalette*, unsigned char, float); // _C8
	virtual void insert(JUTTexture*, unsigned char, float);              // _CC
	virtual void remove(unsigned char);                                  // _D0
	virtual void remove();                                               // _D4
	virtual void remove(JUTTexture*);                                    // _D8
	virtual void draw(float, float, bool, bool, bool);                   // _DC
	virtual void draw(float, float, unsigned char, bool, bool, bool);    // _E0
	virtual void draw(float, float, float, float, bool, bool, bool);     // _E4
	virtual void drawOut(float, float, float, float, float, float);      // _E8
	virtual void drawOut(float, float, float, float, float, float, float,
	                     float); // _EC
	virtual void drawOut(const JGeometry::TBox2<float>&,
	                     const JGeometry::TBox2<float>&); // _F0
	virtual void load(_GXTexMapID, unsigned char);        // _F4
	virtual void load(unsigned char);                     // _F8
	virtual void _FC() = 0;                               // _FC
	virtual void setBlendColorRatio(float, float, float, float, float, float,
	                                float, float); // _100
	virtual void setBlendAlphaRatio(float, float, float, float, float, float,
	                                float, float);             // _104
	virtual void changeTexture(const ResTIMG*, unsigned char); // _108
	virtual void changeTexture(const char*, unsigned char);    // _10C
	virtual void changeTexture(const ResTIMG*, unsigned char,
	                           JUTPalette*);                             // _110
	virtual void changeTexture(const char*, unsigned char, JUTPalette*); // _114
	virtual void getTexture(unsigned char) const;                        // _118
	virtual void getTextureCount() const;                                // _11C
	virtual void setBlack(JUtility::TColor);                             // _120
	virtual void setWhite(JUtility::TColor);                             // _124
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);      // _128
	virtual void getBlack() const;                                       // _12C
	virtual void getWhite() const;                                       // _130
	virtual void getMaterial() const;                                    // _134
	virtual void drawFullSet(float, float, float, float,
	                         float (*)[3][4]); // _138
	virtual void drawTexCoord(float, float, float, float, short, short, short,
	                          short, short, short, short, short,
	                          float (*)[3][4]); // _13C
	virtual void getUsableTlut(unsigned char);  // _140

	// _00 VTBL
};

namespace Morimura {
struct TGXSetPane : public J2DPicture, public J2DPane, public J2DPictureEx {
	virtual ~TGXSetPane();                                     // _00
	virtual void getTypeID() const;                            // _04
	virtual void move(float, float);                           // _08
	virtual void add(float, float);                            // _0C
	virtual void resize(float, float);                         // _10
	virtual void setCullBack(bool);                            // _14
	virtual void setCullBack(_GXCullMode);                     // _18
	virtual void setAlpha(unsigned char);                      // _1C
	virtual void setConnectParent(bool);                       // _20
	virtual void calcMtx();                                    // _24
	virtual void update();                                     // _28
	virtual void drawSelf(float, float);                       // _2C
	virtual void drawSelf(float, float, float (*)[3][4]);      // _30
	virtual void search(unsigned long long);                   // _34
	virtual void searchUserInfo(unsigned long long);           // _38
	virtual void makeMatrix(float, float);                     // _3C
	virtual void makeMatrix(float, float, float, float);       // _40
	virtual void isUsed(const ResTIMG*);                       // _44
	virtual void isUsed(const ResFONT*);                       // _48
	virtual void clearAnmTransform();                          // _4C
	virtual void rewriteAlpha();                               // _50
	virtual void setAnimation(J2DAnmBase*);                    // _54
	virtual void setAnimation(J2DAnmTransform*);               // _58
	virtual void setAnimation(J2DAnmColor*);                   // _5C
	virtual void setAnimation(J2DAnmTexPattern*);              // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);           // _64
	virtual void setAnimation(J2DAnmTevRegKey*);               // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);          // _6C
	virtual void setAnimation(J2DAnmVtxColor*);                // _70
	virtual void animationTransform(const J2DAnmTransform*);   // _74
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*);  // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);        // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);        // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);              // _84
	virtual void animationPane(const J2DAnmTransform*);        // _88
	virtual void initiate(const ResTIMG*, const ResTLUT*);     // _8C
	virtual void prepareTexture(unsigned char);                // _90
	virtual void append(const ResTIMG*, float);                // _94
	virtual void append(const ResTIMG*, JUTPalette*, float);   // _98
	virtual void append(const char*, float);                   // _9C
	virtual void append(const char*, JUTPalette*, float);      // _A0
	virtual void append(JUTTexture*, float);                   // _A4
	virtual void prepend(const ResTIMG*, float);               // _A8
	virtual void prepend(const ResTIMG*, JUTPalette*, float);  // _AC
	virtual void prepend(const char*, float);                  // _B0
	virtual void prepend(const char*, JUTPalette*, float);     // _B4
	virtual void prepend(JUTTexture*, float);                  // _B8
	virtual void insert(const ResTIMG*, unsigned char, float); // _BC
	virtual void insert(const ResTIMG*, JUTPalette*, unsigned char,
	                    float);                                          // _C0
	virtual void insert(const char*, unsigned char, float);              // _C4
	virtual void insert(const char*, JUTPalette*, unsigned char, float); // _C8
	virtual void insert(JUTTexture*, unsigned char, float);              // _CC
	virtual void remove(unsigned char);                                  // _D0
	virtual void remove();                                               // _D4
	virtual void remove(JUTTexture*);                                    // _D8
	virtual void draw(float, float, bool, bool, bool);                   // _DC
	virtual void draw(float, float, unsigned char, bool, bool, bool);    // _E0
	virtual void draw(float, float, float, float, bool, bool, bool);     // _E4
	virtual void drawOut(float, float, float, float, float, float);      // _E8
	virtual void drawOut(float, float, float, float, float, float, float,
	                     float); // _EC
	virtual void drawOut(const JGeometry::TBox2<float>&,
	                     const JGeometry::TBox2<float>&); // _F0
	virtual void load(_GXTexMapID, unsigned char);        // _F4
	virtual void load(unsigned char);                     // _F8
	virtual void setBlendRatio(float, float, float, float, float, float, float,
	                           float); // _FC
	virtual void setBlendColorRatio(float, float, float, float, float, float,
	                                float, float); // _100
	virtual void setBlendAlphaRatio(float, float, float, float, float, float,
	                                float, float);             // _104
	virtual void changeTexture(const ResTIMG*, unsigned char); // _108
	virtual void changeTexture(const char*, unsigned char);    // _10C
	virtual void changeTexture(const ResTIMG*, unsigned char,
	                           JUTPalette*);                             // _110
	virtual void changeTexture(const char*, unsigned char, JUTPalette*); // _114
	virtual void getTexture(unsigned char) const;                        // _118
	virtual void getTextureCount() const;                                // _11C
	virtual void setBlack(JUtility::TColor);                             // _120
	virtual void setWhite(JUtility::TColor);                             // _124
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);      // _128
	virtual void getBlack() const;                                       // _12C
	virtual void getWhite() const;                                       // _130
	virtual void getMaterial() const;                                    // _134
	virtual void drawFullSet(float, float, float, float,
	                         float (*)[3][4]); // _138
	virtual void drawTexCoord(float, float, float, float, short, short, short,
	                          short, short, short, short, short,
	                          float (*)[3][4]); // _13C
	virtual void getUsableTlut(unsigned char);  // _140

	// _00 VTBL
};
} // namespace Morimura

#endif
