#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

#include "types.h"
#include "Section.h"
#include "JSystem/JKernel/JKRHeap.h"

struct ISection;
struct Section;
struct JKRHeap;

struct SectionInfo {
	char* mName; // _00

	union {
		u32 abcd;
		u8 mSectionId, b, c, d;
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
	~GameFlow();          // unused and not virtual
	inline void runGame() // might be a (non-static) member function of GameFlow?
	{
		JKRExpHeap* expHeap;
		JKRHeap* parentHeap;
		JKRHeap::TState state(parentHeap = JKRHeap::sCurrentHeap);
		parentHeap->state_register(&state, -1);
		expHeap = makeExpHeap(parentHeap->getFreeSize(), parentHeap, true);
		setSection();
		mSection->init();
		mSection->run();
		mSection->exit();
		expHeap->destroy();
		parentHeap->becomeCurrentHeap();
	}

	virtual void run();                                                                                    // _08
	virtual ISection* getCurrentSection() { return (mSection) ? mSection->getCurrentSection() : nullptr; } // _0C (weak)

	void setSection();

	static SectionInfo* getSectionInfo(int);
	static ISection* createSection(JKRHeap*);

	static u32 mActiveSectionFlag;

	// _00 VTBL
	Section* mSection; // _04
};

#endif
