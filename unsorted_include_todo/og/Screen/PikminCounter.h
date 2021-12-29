#ifndef _OG_SCREEN_PIKMINCOUNTER_H
#define _OG_SCREEN_PIKMINCOUNTER_H

/*
    __vt__Q32og6Screen13PikminCounter:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen13PikminCounterFv
    .4byte getTypeID__9J2DScreenCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__7J2DPaneFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__9J2DScreenFv
    .4byte update__Q32og6Screen13PikminCounterFv
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
    .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
    .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
    .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
    .4byte setCallBack__Q32og6Screen13PikminCounterFP10JKRArchive
    .4byte 0
*/

struct J2DScreen {
	virtual void _00() = 0;                               // _00
	virtual void getTypeID() const;                       // _04
	virtual void _08() = 0;                               // _08
	virtual void _0C() = 0;                               // _0C
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void _18() = 0;                               // _18
	virtual void _1C() = 0;                               // _1C
	virtual void _20() = 0;                               // _20
	virtual void calcMtx();                               // _24
	virtual void _28() = 0;                               // _28
	virtual void _2C() = 0;                               // _2C
	virtual void drawSelf(float, float, float (*)[3][4]); // _30
	virtual void search(unsigned long long);              // _34
	virtual void searchUserInfo(unsigned long long);      // _38
	virtual void _3C() = 0;                               // _3C
	virtual void _40() = 0;                               // _40
	virtual void isUsed(const ResTIMG*);                  // _44
	virtual void isUsed(const ResFONT*);                  // _48
	virtual void clearAnmTransform();                     // _4C
	virtual void _50() = 0;                               // _50
	virtual void setAnimation(J2DAnmBase*);               // _54
	virtual void setAnimation(J2DAnmTransform*);          // _58
	virtual void setAnimation(J2DAnmColor*);              // _5C
	virtual void setAnimation(J2DAnmTexPattern*);         // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);      // _64
	virtual void setAnimation(J2DAnmTevRegKey*);          // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);     // _6C
	virtual void setAnimation(J2DAnmVtxColor*);           // _70
	virtual void _74() = 0;                               // _74
	virtual void _78() = 0;                               // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);   // _7C
	virtual void _80() = 0;                               // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);         // _84
	virtual void _88() = 0;                               // _88
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*,
	                        J2DPane*, unsigned long); // _8C
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*,
	                        J2DPane*, unsigned long, JKRArchive*); // _90

	// _00 VTBL
};

struct J2DPane {
	virtual void _00() = 0;                                   // _00
	virtual void _04() = 0;                                   // _04
	virtual void move(float, float);                          // _08
	virtual void add(float, float);                           // _0C
	virtual void resize(float, float);                        // _10
	virtual void setCullBack(bool);                           // _14
	virtual void setCullBack(_GXCullMode);                    // _18
	virtual void setAlpha(unsigned char);                     // _1C
	virtual void setConnectParent(bool);                      // _20
	virtual void _24() = 0;                                   // _24
	virtual void _28() = 0;                                   // _28
	virtual void drawSelf(float, float);                      // _2C
	virtual void _30() = 0;                                   // _30
	virtual void _34() = 0;                                   // _34
	virtual void _38() = 0;                                   // _38
	virtual void makeMatrix(float, float);                    // _3C
	virtual void makeMatrix(float, float, float, float);      // _40
	virtual void _44() = 0;                                   // _44
	virtual void _48() = 0;                                   // _48
	virtual void _4C() = 0;                                   // _4C
	virtual void rewriteAlpha();                              // _50
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
	virtual void _7C() = 0;                                   // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _80
	virtual void _84() = 0;                                   // _84
	virtual void animationPane(const J2DAnmTransform*);       // _88

	// _00 VTBL
};

namespace P2DScreen {
struct Mgr_tuning {
	virtual void _00() = 0;                        // _00
	virtual void _04() = 0;                        // _04
	virtual void _08() = 0;                        // _08
	virtual void _0C() = 0;                        // _0C
	virtual void _10() = 0;                        // _10
	virtual void _14() = 0;                        // _14
	virtual void _18() = 0;                        // _18
	virtual void _1C() = 0;                        // _1C
	virtual void _20() = 0;                        // _20
	virtual void _24() = 0;                        // _24
	virtual void _28() = 0;                        // _28
	virtual void _2C() = 0;                        // _2C
	virtual void _30() = 0;                        // _30
	virtual void _34() = 0;                        // _34
	virtual void _38() = 0;                        // _38
	virtual void _3C() = 0;                        // _3C
	virtual void _40() = 0;                        // _40
	virtual void _44() = 0;                        // _44
	virtual void _48() = 0;                        // _48
	virtual void _4C() = 0;                        // _4C
	virtual void _50() = 0;                        // _50
	virtual void _54() = 0;                        // _54
	virtual void _58() = 0;                        // _58
	virtual void _5C() = 0;                        // _5C
	virtual void _60() = 0;                        // _60
	virtual void _64() = 0;                        // _64
	virtual void _68() = 0;                        // _68
	virtual void _6C() = 0;                        // _6C
	virtual void _70() = 0;                        // _70
	virtual void _74() = 0;                        // _74
	virtual void _78() = 0;                        // _78
	virtual void _7C() = 0;                        // _7C
	virtual void _80() = 0;                        // _80
	virtual void _84() = 0;                        // _84
	virtual void _88() = 0;                        // _88
	virtual void _8C() = 0;                        // _8C
	virtual void _90() = 0;                        // _90
	virtual void draw(Graphics&, J2DGrafContext&); // _94

	// _00 VTBL
};
} // namespace P2DScreen

namespace og {
namespace Screen {
	struct PikminCounter : public J2DScreen, public J2DPane, public Mgr_tuning {
		virtual ~PikminCounter();                                 // _00
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
		virtual void createPane(const J2DScrnBlockHeader&,
		                        JSURandomInputStream*, J2DPane*,
		                        unsigned long); // _8C
		virtual void createPane(const J2DScrnBlockHeader&,
		                        JSURandomInputStream*, J2DPane*, unsigned long,
		                        JKRArchive*);          // _90
		virtual void draw(Graphics&, J2DGrafContext&); // _94
		virtual void setCallBack(JKRArchive*);         // _98
		virtual void _9C() = 0;                        // _9C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
