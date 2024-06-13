#ifndef _OG_SCREEN_OGSCREEN_H
#define _OG_SCREEN_OGSCREEN_H

#include "JSystem/J2D/J2DPicture.h"
#include "types.h"
#include "Screen/Enums.h"
#include "Vector2.h"
#include "JSystem/ResTIMG.h"
#include "og/Screen/DispMember.h"

struct J2DPane;
struct ResTIMG;
struct J2DGrafContext;
struct JKRArchive;
namespace JUtility {
struct TColor;
} // namespace JUtility

namespace P2DScreen {
struct Mgr;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct AnimGroup;
struct AnimText_Screen;
struct CallBack_CounterDay;
struct CallBack_CounterRV;
struct CallBack_CounterSlot;
struct CallBack_DrawAfter;
struct CallBack_Furiko;
struct CallBack_Picture;
struct PictureTreeColorCaptureInfo;

// LERP for colors
void blendColor(JUtility::TColor& c1, JUtility::TColor& c2, f32 t, JUtility::TColor* output);
// LERP for picture trees
void blendPictureTreeColor(PictureTreeColorCaptureInfo* capInfo, JUtility::TColor& c1, JUtility::TColor& c2, f32 t);
// Calculates the global center of a pane
void calcGlbCenter(J2DPane* pane, Vector2f* outputPos);
u16 CalcKeta(u32);
// LERP for floats, but smooth at extents
f32 calcSmooth0to1(f32 a, f32 b);
PictureTreeColorCaptureInfo* capturePictureTreeColor(J2DPane* picture, int count);
u64 CharCodeToTag(char*);
bool checkVisibleGlb(J2DPane*);
J2DPictureEx* CopyPicture(J2DPictureEx*, u64);
J2DPictureEx* CopyPictureToPane(J2DPictureEx*, J2DPane*, f32, f32, u64);
void drawPaneFrame(J2DGrafContext&, J2DPane*, JUtility::TColor&);
void dumpInfoResTIMG(ResTIMG const*);
CallBack_Furiko* getFurikoPtr(P2DScreen::Mgr*, u64);
void kakomiPane(J2DPane*);
ResTIMG** makeSujiFontTable(char**, JKRArchive*);

u64 maskTag(u64 tag, u16 x, u16 mask);
u64 maskTag2(u64 tag, u16 x);

u64 MojiToNum(u64, int);
u64 NameToTag(char*);
void registAnimGroupPane(AnimGroup*, JKRArchive*, J2DScreen*, u64, char*, f32);
void registAnimGroupScreen(AnimGroup*, JKRArchive*, J2DScreen*, char*, f32);
void setAlphaScreen(J2DPane*);
AnimText_Screen* setAnimTextScreen(JKRArchive*, P2DScreen::Mgr*, u64);
CallBack_Picture* setCallBack_3DStick(JKRArchive*, P2DScreen::Mgr*, u64);
CallBack_Picture* setCallBack_3DStickSmall(JKRArchive*, P2DScreen::Mgr*, u64);
void setCallBack_CStick(JKRArchive*, P2DScreen::Mgr*, u64);
void setCallBack_CStickSmall(JKRArchive*, P2DScreen::Mgr*, u64);
CallBack_CounterDay* setCallBack_CounterDay(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, JKRArchive*);
CallBack_CounterDay* setCallBack_CounterDay(char**, P2DScreen::Mgr*, u64, u64, u64, u32*, u16, JKRArchive*);
void setCallBack_CounterMap(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, u16, bool, JKRArchive*);
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag1, u64 tag2, u64 tag3, u32* countPtr, u16 maxDigits, u16 minDigits,
                                          bool isPuyo, JKRArchive* arc);
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32* countPtr, u16 maxDigits, bool isPuyo, bool hasMother,
                                          JKRArchive* arc);
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32 value, u16 maxDigits, bool isPuyo, bool hasMother,
                                          JKRArchive* arc);
void setCallBack_CounterRV2(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*);
CallBack_CounterSlot* setCallBack_CounterSlot(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*);
CallBack_DrawAfter* setCallBack_DrawAfter(P2DScreen::Mgr*, u64);
CallBack_Furiko* setCallBack_Furiko(P2DScreen::Mgr*, u64);
CallBack_Picture* setCallBack_Picture(JKRArchive*, char*, u64, P2DScreen::Mgr*, u64);
void setCallBackMessage(P2DScreen::Mgr*);
void setCallBackMessageSub(P2DScreen::Mgr*, J2DPane*);
void setFurikoScreen(P2DScreen::Mgr*);
AnimText_Screen* setMenuScreen(JKRArchive*, P2DScreen::Mgr*, u64);
AnimText_Screen* setMenuTitleScreen(JKRArchive*, P2DScreen::Mgr*, u64);
void setP2DScreen(char*, u32, JKRArchive*);
J2DPane* TagSearch(J2DScreen*, u64);
void TagToHex(u64, char*);
void TagToName(u64, char*);

// Unused
void setBlendPane(J2DBlendInfo, J2DScreen*, u64*);

extern const char* PikiIconTextureName[19];

extern ResTIMG* PikiIconTextureResTIMG[19];

} // namespace Screen
} // namespace og

#endif
