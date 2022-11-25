#ifndef _OG_SCREEN_OGSCREEN_H
#define _OG_SCREEN_OGSCREEN_H

#include "JSystem/J2D/J2DPane.h"
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

void blendColor(JUtility::TColor&, JUtility::TColor&, float, JUtility::TColor*);
void blendPictureTreeColor(PictureTreeColorCaptureInfo*, JUtility::TColor&, JUtility::TColor&, float);
void calcGlbCenter(J2DPane*, Vector2f*);
u16 CalcKeta(u32);
float calcSmooth0to1(float, float);
PictureTreeColorCaptureInfo* capturePictureTreeColor(J2DPane*, int);
void centeringPane(J2DPane*, bool, bool);
u64 CharCodeToTag(char*);
bool checkVisibleGlb(J2DPane*);
J2DPictureEx* CopyPicture(J2DPictureEx*, u64);
J2DPictureEx* CopyPictureToPane(J2DPictureEx*, J2DPane*, float, float, u64);
void drawPaneFrame(J2DGrafContext&, J2DPane*, JUtility::TColor&);
void dumpInfoResTIMG(ResTIMG const*);
CallBack_Furiko* getFurikoPtr(P2DScreen::Mgr*, u64);
void kakomiPane(J2DPane*);
ResTIMG** makeSujiFontTable(char**, JKRArchive*);
u64 maskTag(u64, u16, u16);
u64 maskTag2(u64, u16);
u64 MojiToNum(u64, int);
u64 NameToTag(char*);
void registAnimGroupPane(AnimGroup*, JKRArchive*, J2DScreen*, u64, char*, float);
void registAnimGroupScreen(AnimGroup*, JKRArchive*, J2DScreen*, char*, float);
void setAlphaScreen(J2DPane*);
void setAnimTextScreen(JKRArchive*, P2DScreen::Mgr*, u64);
CallBack_Picture* setCallBack_3DStick(JKRArchive*, P2DScreen::Mgr*, u64);
void setCallBack_3DStickSmall(JKRArchive*, P2DScreen::Mgr*, u64);
void setCallBack_CStick(JKRArchive*, P2DScreen::Mgr*, u64);
void setCallBack_CStickSmall(JKRArchive*, P2DScreen::Mgr*, u64);
CallBack_CounterDay* setCallBack_CounterDay(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, JKRArchive*);
CallBack_CounterDay* setCallBack_CounterDay(char**, P2DScreen::Mgr*, u64, u64, u64, u32*, u16, JKRArchive*);
void setCallBack_CounterMap(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, u16, bool, JKRArchive*);
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, u16, bool, JKRArchive*);
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*);
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr*, u64, u32, u16, bool, bool, JKRArchive*);
void setCallBack_CounterRV2(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*);
CallBack_CounterSlot* setCallBack_CounterSlot(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*);
CallBack_DrawAfter* setCallBack_DrawAfter(P2DScreen::Mgr*, u64);
CallBack_Furiko* setCallBack_Furiko(P2DScreen::Mgr*, u64);
CallBack_Picture* setCallBack_Picture(JKRArchive*, char*, u64, P2DScreen::Mgr*, u64);
void setCallBackMessage(P2DScreen::Mgr*);
void setCallBackMessageSub(P2DScreen::Mgr*, J2DPane*);
void setFurikoScreen(P2DScreen::Mgr*);
AnimText_Screen* setMenuScreen(JKRArchive*, P2DScreen::Mgr*, u64);
void setMenuTitleScreen(JKRArchive*, P2DScreen::Mgr*, u64);
void setP2DScreen(char*, u32, JKRArchive*);
J2DPane* TagSearch(J2DScreen*, u64);
void TagToHex(u64, char*);
void TagToName(u64, char*);

extern const char* PikiIconTextureName[19];

extern ResTIMG* PikiIconTextureResTIMG[19];

} // namespace Screen
} // namespace og

#endif
