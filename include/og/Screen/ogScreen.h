#ifndef _OG_SCREEN_OGSCREEN_H
#define _OG_SCREEN_OGSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "types.h"
#include "Screen/Enums.h"
#include "Vector2.h"

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
	struct CallBack_CounterDay;
	struct CallBack_CounterRV;
	struct CallBack_CounterSlot;
	struct CallBack_DrawAfter;
	struct CallBack_Furiko;
	struct CallBack_Picture;
	struct PictureTreeColorCaptureInfo;

	void blendColor(JUtility::TColor&, JUtility::TColor&, float,
	                JUtility::TColor*);
	void blendPictureTreeColor(PictureTreeColorCaptureInfo*, JUtility::TColor&,
	                           JUtility::TColor&, float);
	void calcGlbCenter(J2DPane*, Vector2f*);
	uint CalcKeta(ulong);
	float calcSmooth0to1(float, float);
	u32* capturePictureTreeColor(J2DPane*, int);
	void centeringPane(J2DPane*, bool, bool);
	ulonglong CharCodeToTag(char*);
	bool checkVisibleGlb(J2DPane*);
	J2DPictureEx* CopyPicture(J2DPictureEx*, ulonglong);
	J2DPictureEx* CopyPictureToPane(J2DPictureEx*, J2DPane*, float, float,
	                                ulonglong);
	void drawPaneFrame(J2DGrafContext&, J2DPane*, JUtility::TColor&);
	void dumpInfoResTIMG(ResTIMG const*);
	CallBack_Furiko* getFurikoPtr(P2DScreen::Mgr*, ulonglong);
	void kakomiPane(J2DPane*);
	ResTIMG** makeSujiFontTable(char**, JKRArchive*);
	ulonglong maskTag(ulonglong, ushort, ushort);
	ulonglong maskTag2(ulonglong, ushort);
	ulonglong MojiToNum(ulonglong, int);
	ulonglong NameToTag(char*);
	void registAnimGroupPane(AnimGroup*, JKRArchive*, J2DScreen*, ulonglong,
	                         char*, float);
	void registAnimGroupScreen(AnimGroup*, JKRArchive*, J2DScreen*, char*,
	                           float);
	void setAlphaScreen(J2DPane*);
	void setAnimTextScreen(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	void setCallBack_3DStick(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	void setCallBack_3DStickSmall(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	void setCallBack_CStick(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	void setCallBack_CStickSmall(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	CallBack_CounterDay* setCallBack_CounterDay(P2DScreen::Mgr*, ulonglong,
	                                            ulonglong, ulonglong, ulong*,
	                                            ushort, JKRArchive*);
	CallBack_CounterDay* setCallBack_CounterDay(char**, P2DScreen::Mgr*,
	                                            ulonglong, ulonglong, ulonglong,
	                                            ulong*, ushort, JKRArchive*);
	void setCallBack_CounterMap(P2DScreen::Mgr*, ulonglong, ulonglong,
	                            ulonglong, ulong*, ushort, ushort, bool,
	                            JKRArchive*);
	CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr*, ulonglong,
	                                          ulonglong, ulonglong, ulong*,
	                                          ushort, ushort, bool,
	                                          JKRArchive*);
	CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr*, ulonglong,
	                                          ulong*, ushort, bool, bool,
	                                          JKRArchive*);
	CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr*, ulonglong, ulong,
	                                          ushort, bool, bool, JKRArchive*);
	void setCallBack_CounterRV2(P2DScreen::Mgr*, ulonglong, ulong*, ushort,
	                            bool, bool, JKRArchive*);
	CallBack_CounterSlot* setCallBack_CounterSlot(P2DScreen::Mgr*, ulonglong,
	                                              ulong*, ushort, bool, bool,
	                                              JKRArchive*);
	CallBack_DrawAfter* setCallBack_DrawAfter(P2DScreen::Mgr*, ulonglong);
	CallBack_Furiko* setCallBack_Furiko(P2DScreen::Mgr*, ulonglong);
	CallBack_Picture* setCallBack_Picture(JKRArchive*, char*, ulonglong,
	                                      P2DScreen::Mgr*, ulonglong);
	void setCallBackMessage(P2DScreen::Mgr*);
	void setCallBackMessageSub(P2DScreen::Mgr*, J2DPane*);
	void setFurikoScreen(P2DScreen::Mgr*);
	void setMenuScreen(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	void setMenuTitleScreen(JKRArchive*, P2DScreen::Mgr*, ulonglong);
	void setP2DScreen(char*, ulong, JKRArchive*);
	J2DPane* TagSearch(J2DScreen*, ulonglong);
	void TagToHex(ulonglong, char*);
	void TagToName(ulonglong, char*);

	struct DispMemberBase {
		virtual uint getSize()          = 0; // _00
		virtual ulong getOwnerID()      = 0; // _04
		virtual ulonglong getMemberID() = 0; // _08
		virtual void doSetSubMemberAll();    // _10

		bool isID(ulong, ulonglong);
		void getMemberName(char*);
		bool setSubMember(DispMemberBase*);
		DispMemberBase* getSubMember(ulong, ulonglong);
		void setSubMemberAll();

		// inline void getOwnerName(char* outName) {
		// 	TagToName(getOwnerID(), outName);
		// }
		// inline void dump() {
		// 	char owner[12];
		// 	char member[12];
		// 	getOwnerName(owner);
		// 	getMemberName(member);
		// }

		// _00 VTBL
		DispMemberBase* m_subMember; // _04
	};

} // namespace Screen
} // namespace og

#endif
