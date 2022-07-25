#ifndef _OG_SCREEN_MAPCOUNTER_H
#define _OG_SCREEN_MAPCOUNTER_H

/*
    __vt__Q32og6Screen10MapCounter:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen10MapCounterFv
    .4byte getTypeID__9J2DScreenCFv
    .4byte move__7J2DPaneFff
    .4byte add__7J2DPaneFff
    .4byte resize__7J2DPaneFff
    .4byte setCullBack__7J2DPaneFb
    .4byte setCullBack__7J2DPaneF11_GXCullMode
    .4byte setAlpha__7J2DPaneFUc
    .4byte setConnectParent__7J2DPaneFb
    .4byte calcMtx__9J2DScreenFv
    .4byte update__Q29P2DScreen3MgrFv
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
    .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
*/

struct J2DScreen {
	virtual ~J2DScreen();                                                                                            // _08 (inline)
	virtual void getTypeID() const;                                                                                  // _0C (inline)
	virtual void _10() = 0;                                                                                          // _10
	virtual void _14() = 0;                                                                                          // _14
	virtual void _18() = 0;                                                                                          // _18
	virtual void _1C() = 0;                                                                                          // _1C
	virtual void _20() = 0;                                                                                          // _20
	virtual void _24() = 0;                                                                                          // _24
	virtual void _28() = 0;                                                                                          // _28
	virtual void calcMtx();                                                                                          // _2C (inline)
	virtual void _30() = 0;                                                                                          // _30
	virtual void _34() = 0;                                                                                          // _34
	virtual void drawSelf(float, float, float (*)[3][4]);                                                            // _38
	virtual void search(unsigned long long);                                                                         // _3C
	virtual void searchUserInfo(unsigned long long);                                                                 // _40
	virtual void _44() = 0;                                                                                          // _44
	virtual void _48() = 0;                                                                                          // _48
	virtual void isUsed(const ResTIMG*);                                                                             // _4C
	virtual void isUsed(const ResFONT*);                                                                             // _50
	virtual void clearAnmTransform();                                                                                // _54 (inline)
	virtual void _58() = 0;                                                                                          // _58
	virtual void setAnimation(J2DAnmBase*);                                                                          // _5C (inline)
	virtual void setAnimation(J2DAnmTransform*);                                                                     // _60 (inline)
	virtual void setAnimation(J2DAnmColor*);                                                                         // _64
	virtual void setAnimation(J2DAnmTexPattern*);                                                                    // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                                                                 // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                                                                     // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                                                                // _74
	virtual void setAnimation(J2DAnmVtxColor*);                                                                      // _78
	virtual void _7C() = 0;                                                                                          // _7C
	virtual void _80() = 0;                                                                                          // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);                                                              // _84 (inline)
	virtual void _88() = 0;                                                                                          // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);                                                                    // _8C (inline)
	virtual void _90() = 0;                                                                                          // _90
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*, J2DPane*, unsigned long);              // _94 (inline)
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*, J2DPane*, unsigned long, JKRArchive*); // _98
};

struct J2DPane {
	virtual ~J2DPane();                                       // _08 (inline)
	virtual void _0C() = 0;                                   // _0C
	virtual void move(float, float);                          // _10
	virtual void add(float, float);                           // _14
	virtual void resize(float, float);                        // _18
	virtual void setCullBack(bool);                           // _1C (inline)
	virtual void setCullBack(_GXCullMode);                    // _20
	virtual void setAlpha(unsigned char);                     // _24 (inline)
	virtual void setConnectParent(bool);                      // _28 (inline)
	virtual void _2C() = 0;                                   // _2C
	virtual void _30() = 0;                                   // _30
	virtual void drawSelf(float, float);                      // _34 (inline)
	virtual void _38() = 0;                                   // _38
	virtual void _3C() = 0;                                   // _3C
	virtual void _40() = 0;                                   // _40
	virtual void makeMatrix(float, float);                    // _44 (inline)
	virtual void makeMatrix(float, float, float, float);      // _48
	virtual void _4C() = 0;                                   // _4C
	virtual void _50() = 0;                                   // _50
	virtual void _54() = 0;                                   // _54
	virtual void rewriteAlpha();                              // _58 (inline)
	virtual void _5C() = 0;                                   // _5C
	virtual void _60() = 0;                                   // _60
	virtual void _64() = 0;                                   // _64
	virtual void _68() = 0;                                   // _68
	virtual void _6C() = 0;                                   // _6C
	virtual void _70() = 0;                                   // _70
	virtual void _74() = 0;                                   // _74
	virtual void _78() = 0;                                   // _78
	virtual void animationTransform(const J2DAnmTransform*);  // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*); // _80
	virtual void _84() = 0;                                   // _84
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);       // _88
	virtual void _8C() = 0;                                   // _8C
	virtual void animationPane(const J2DAnmTransform*);       // _90
};

namespace P2DScreen {
struct Mgr {
	virtual ~Mgr();         // _08 (inline)
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void update();  // _30
};
} // namespace P2DScreen

namespace P2DScreen {
struct Mgr_tuning {
	virtual ~Mgr_tuning();                         // _08 (inline)
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
	virtual void _94() = 0;                        // _94
	virtual void _98() = 0;                        // _98
	virtual void draw(Graphics&, J2DGrafContext&); // _9C
};
} // namespace P2DScreen

namespace og {
namespace Screen {
struct MapCounter : public J2DScreen, public J2DPane, public Mgr, public Mgr_tuning {
	virtual ~MapCounter(); // _08 (inline)

	MapCounter(og::Screen::DataMap*);
	void dispRed(bool);
	void dispYellow(bool);
	void dispBlue(bool);
	void dispWhite(bool);
	void dispBlack(bool);
	void dispFree(bool);
	void setCallBack(JKRArchive*);
};
} // namespace Screen
} // namespace og

#endif
