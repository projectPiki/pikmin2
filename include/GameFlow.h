#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

#include "types.h"
#include "Section.h"

struct ISection;
struct Section;
struct JKRHeap;

struct SectionInfo {
	char* mName; // _00

	union {
		u8 mSectionId, b, c, d;
		u32 abcd;
	} id; // _04
};

struct GameFlow : public ISectionMgr {
	enum SectionNames {
		RootMenu,
		ObjectEditor,
		SingleGame,
		ChallengeGame,
		TestChallenge,
		TekiTest,
		AnimEditor,
		MapPartsEditor,
		TexViewer,
		Ogawa,
		Hikino,
		Yamashita,
		Nishimura,
		Nishimura2,
		Morimura,
		Ebisawa,
		CaveEditor,
		JStudioCameraEditor,
		MovieTest,
		JStudioKandoTest,
		PelletTest,
		Boot,
		MainTitle,
		Demo,
		MessagePreviewer,
		_2DDebug,
		Fujino,
		EbiMainTitle,
		OgawaScreenTest,
		E3ThanksSection,
		VSGame,
		EbimunEffect,
		_2DDebug2,
		EXP_C,
		EXP_S,
		SECTION_COUNT // 35
	};

	GameFlow();
	~GameFlow(); // unused and not virtual

	virtual void run();                    // _08
	virtual ISection* getCurrentSection(); // _0C (weak)

	void setSection();

	static SectionInfo* getSectionInfo(int);
	static ISection* createSection(JKRHeap*);

	static u32 mActiveSectionFlag;

	// _00 VTBL
	Section* mSection; // _04
};

#endif
