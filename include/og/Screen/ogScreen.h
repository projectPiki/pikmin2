#ifndef _OG_SCREEN_OGSCREEN_H
#define _OG_SCREEN_OGSCREEN_H

#include "JSystem/J2D/J2DScreen.h"
#include "types.h"

struct J2DPane;
struct ResTIMG;
struct J2DGrafContext;
struct JKRArchive;
namespace JUtility {
struct TColor;
}

namespace og {
namespace Screen {
	void kakomiPane(J2DPane*);
	void centeringPane(J2DPane*, bool, bool);
	void maskTag(ulonglong, ushort, ushort);
	void maskTag2(ulonglong, ushort);
	void CalcKeta(ulong);
	void MojiToNum(ulonglong, int);
	void TagToName(ulonglong, char*);
	ulonglong NameToTag(char*);
	ulonglong CharCodeToTag(char*);
	void TagToHex(ulonglong, char*);
	void TagSearch(J2DScreen*, ulonglong);
	void setP2DScreen(char*, ulong, JKRArchive*);
	void dumpInfoResTIMG(ResTIMG const*);
	void drawPaneFrame(J2DGrafContext&, J2DPane*, JUtility::TColor&);

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
