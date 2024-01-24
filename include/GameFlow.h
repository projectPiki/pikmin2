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
	} mId; // _04
};

struct GameFlow : public ISectionMgr {
	/**
	 * @brief Enumeration of section names in the game flow.
	 */
	enum SectionNames {
		SN_RootMenu,            /** Root menu section */
		SN_ObjectEditor,        /** Object editor section */
		SN_SingleGame,          /** Single game section */
		SN_ChallengeGame,       /** Challenge game section */
		SN_TestChallenge,       /** Test challenge section */
		SN_TekiTest,            /** Teki test section */
		SN_AnimEditor,          /** Animation editor section */
		SN_MapPartsEditor,      /** Map parts editor section */
		SN_TexViewer,           /** Texture viewer section */
		SN_Ogawa,               /** Ogawa's section */
		SN_Hikino,              /** Hikino's section */
		SN_Yamashita,           /** Yamashita's section */
		SN_Nishimura,           /** Nishimura's section */
		SN_Nishimura2,          /** Nishimura's other section */
		SN_Morimura,            /** Morimura's section */
		SN_Ebisawa,             /** Ebisawa's section */
		SN_CaveEditor,          /** Cave editor section */
		SN_JStudioCameraEditor, /** JStudio camera editor section */
		SN_MovieTest,           /** Movie test section */
		SN_JStudioKandoTest,    /** Kando's JStudio test section */
		SN_PelletTest,          /** Pellet test section */
		SN_Boot,                /** Boot section */
		SN_MainTitle,           /** Main title section */
		SN_Demo,                /** Demo section */
		SN_MessagePreviewer,    /** Message previewer section */
		SN_Debug2D,             /** Debug 2D section */
		SN_Fujino,              /** Fujino's section */
		SN_EbiMainTitle,        /** Ebisawa's main title section */
		SN_OgawaScreenTest,     /** Ogawa's screen testing section */
		SN_E3ThanksSection,     /** E3 thanks section */
		SN_VSGame,              /** VS game section */
		SN_EbimunEffect,        /** Ebimun's effect testing section */
		SN_Debug2D_2,           /** The second 2D debugging section */
		SN_ExpC,                /** ExpC section */
		SN_ExpS,                /** ExpS section */
		SN_SECTION_COUNT,       /** Total size of the enum */
	};

	GameFlow();
	~GameFlow();

	inline void runGame()
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
