#include "Dolphin/stl.h"
#include "Game/pelletConfig.h"
#include "Game/GameConfig.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"
#include "stream.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10PelletList3Mgr
    __vt__Q34Game10PelletList3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game10PelletList3MgrFv
        .4byte 0

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483320
    lbl_80483320:
        .asciz "gamePelletList"
        .skip 1
    .global lbl_80483330
    lbl_80483330:
        .asciz "gamePelletList.cpp"
        .skip 1
    .global lbl_80483344
    lbl_80483344:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483350
    lbl_80483350:
        .asciz "numberpellet_config.txt"
    .global lbl_80483368
    lbl_80483368:
        .asciz "carcass_config.txt"
        .skip 1
    .global lbl_8048337C
    lbl_8048337C:
        .asciz "fruit_config.txt"
        .skip 3
    .global lbl_80483390
    lbl_80483390:
        .asciz "otakara_config.txt"
        .skip 1
    .global lbl_804833A4
    lbl_804833A4:
        .asciz "item_config.txt"
        .4byte lbl_80483350
        .4byte lbl_80483368
        .4byte lbl_8048337C
        .4byte lbl_80483390
        .4byte lbl_804833A4
        .asciz "/user/Abe/Pellet/%s/pelletlist_%s.szs"
        .skip 2
        .asciz "don't use this !\n"
        .skip 2
        .asciz "/user/Kando/pelletlist.szs"
        .skip 1
        .asciz "no pelletlist.szs\n"
        .skip 1
        .asciz "no config file [%s]\n"
        .skip 3
    .global lbl_8048344C
    lbl_8048344C:
        .asciz "dictNo:%d \n"

    .section .sbss # 0x80514D80 - 0x80516360
    .global mInstance__Q34Game10PelletList3Mgr
    mInstance__Q34Game10PelletList3Mgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A248
    lbl_8051A248:
        .asciz "jpn"
    .global lbl_8051A24C
    lbl_8051A24C:
        .asciz "us"
        .skip 1
*/

namespace Game {
struct PelletList {
	enum cKind {
		NUMBER_PELLET = 0,
		CARCASS,
		FRUIT,
		OTAKARA,
		ITEM,
		SIZE,

		// Force the compiler to use an int to represent the enum
		DONT_USE_1 = -1,
		DONT_USE_2 = 0xFFFFFFFF,
	};

	struct Mgr {
		static PelletConfigList* getConfigList(cKind);
		static s32 getCount(cKind);

		static PelletConfig* getConfigAndKind(char* config, cKind& kind);
		static void globalInstance();
		void loadResource();
		int getDictionaryNum();
		PelletConfig* getConfigFromDictionaryNo(int);
		int getOffsetFromDictionaryNo(int);

		inline Mgr()
		{
			m_configList = new PelletConfigList[5];
			loadResource();
		}
		virtual ~Mgr();

		PelletConfigList* m_configList; // _04

		static Mgr* mInstance;
	};
};

#define DICT_OTAKARA mInstance->m_configList[ITEM].m_configCnt + mInstance->m_configList[OTAKARA].m_configCnt

PelletList::Mgr* PelletList::Mgr::mInstance;

inline void checkKindValidity(PelletList::cKind kind)
{
	bool isValid = ((s32)kind) >= 0 && ((s32)kind) < 5;
	P2ASSERTLINE(16, isValid);
}

/*
 * --INFO--
 * Address:	80227D5C
 * Size:	000070
 */
PelletConfigList* PelletList::Mgr::getConfigList(PelletList::cKind kind)
{
	checkKindValidity(kind);
	return &PelletList::Mgr::mInstance->m_configList[kind];
}

/*
 * --INFO--
 * Address:	80227DCC
 * Size:	000074
 */
s32 PelletList::Mgr::getCount(PelletList::cKind kind)
{
	checkKindValidity(kind);

	PelletConfigList& list = PelletList::Mgr::mInstance->m_configList[kind];
	return list.m_configCnt;
}

/*
 * --INFO--
 * Address:	80227E40
 * Size:	0000C0
 */
PelletConfig* PelletList::Mgr::getConfigAndKind(char* config, PelletList::cKind& kind)
{
	// Need to pre-define these variables due to register ordering issues
	bool isValid;
	PelletList::cKind kindCopy;

	for (s32 i = 0; i < 5; i++) {
		kind     = (PelletList::cKind)i;
		kindCopy = kind;
		isValid  = kind >= 0 && kindCopy < 5;
		P2ASSERTLINE(16, isValid);

		PelletConfig* list = PelletList::Mgr::mInstance->m_configList[kindCopy].getPelletConfig(config);
		if (list) {
			return list;
		}
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80227F00
 * Size:	000070
 */
PelletList::Mgr::~Mgr() { delete[] m_configList; }

// /*
//  * --INFO--
//  * Address:	80227F70
//  * Size:	0001D8
//  */
static int gLoadedPelletData;
void PelletList::Mgr::loadResource()
{
	JKRArchive* archive;
	if (Game::gGameConfig.m_parms.m_pelletMultiLang.m_data != 0) {
		char pathBuffer[0x200];
		switch ((uint)sys->m_region) {
		case System::LANG_FRENCH:
		case System::LANG_GERMAN:
		case System::LANG_ITALIAN:
			break;
		case System::LANG_JAPANESE:
			sprintf(pathBuffer, "/user/Abe/Pellet/%s/pelletlist_%s.szs", "jpn", "jpn");
			break;
		case System::LANG_ENGLISH:
			sprintf(pathBuffer, "/user/Abe/Pellet/%s/pelletlist_%s.szs", "us", "us");
			break;
		// case System::LANG_ENGLISH:
		// 	sprintf(pathBuffer, "/user/Abe/Pellet/%s/pelletlist_%s.szs", "us", "us");
		// 	break;
		// 	break;
		// case System::LANG_JAPANESE:
		// 	sprintf(pathBuffer, "/user/Abe/Pellet/%s/pelletlist_%s.szs", "jpn", "jpn");
		// 	break;
		case System::LANG_SPANISH:
			// // default:
			break;
		}
		archive = JKRArchive::mount(pathBuffer, JKRArchive::EMM_Mem, JKRHeap::sCurrentHeap, JKRArchive::EMD_Unk2);
	} else {
		JUT_PANICLINE(145, "don\'t use this !\n");
		archive = JKRArchive::mount("/user/Kando/pelletlist.szs", JKRArchive::EMM_Mem, JKRHeap::sCurrentHeap, JKRArchive::EMD_Unk2);
	}
	JUT_ASSERTLINE(154, archive != nullptr, "no pelletlist.szs\n");

	const char* configs[]
	    = { "numberpellet_config.txt", "carcass_config.txt", "fruit_config.txt", "otakara_config.txt", "item_config.txt" };
	for (int i = 0; i < 5; i++) {
		void* data = archive->getResource(configs[i]);
		JUT_ASSERTLINE(168, data != nullptr, "no config file [%s]\n", configs[i]);
		RamStream stream(data, -1);
		stream.m_mode = STREAM_MODE_TEXT;
		if (stream.m_mode == STREAM_MODE_TEXT) {
			stream.m_tabCount = 0;
		}
		m_configList[i].read(stream);
	}
	archive->unmount();
	// 	/*
	// 	.loc_0x0:
	// 	  stwu      r1, -0x660(r1)
	// 	  mflr      r0
	// 	  lis       r4, 0x8051
	// 	  lis       r5, 0x8048
	// 	  stw       r0, 0x664(r1)
	// 	  addi      r4, r4, 0x41FC
	// 	  stmw      r25, 0x644(r1)
	// 	  mr        r30, r3
	// 	  addi      r31, r5, 0x3320
	// 	  lwz       r0, 0x158(r4)
	// 	  cmpwi     r0, 0
	// 	  beq-      .loc_0xB0
	// 	  lwz       r3, -0x6514(r13)
	// 	  lwz       r0, 0xD4(r3)
	// 	  cmpwi     r0, 0x4
	// 	  beq-      .loc_0x94
	// 	  bge-      .loc_0x54
	// 	  cmpwi     r0, 0
	// 	  beq-      .loc_0x7C
	// 	  blt-      .loc_0x94
	// 	  b         .loc_0x94

	// 	.loc_0x54:
	// 	  cmpwi     r0, 0x6
	// 	  beq-      .loc_0x94
	// 	  bge-      .loc_0x94
	// 	  addi      r3, r1, 0x1C
	// 	  addi      r4, r31, 0xA8
	// 	  subi      r5, r2, 0x4118
	// 	  subi      r6, r2, 0x4118
	// 	  crclr     6, 0x6
	// 	  bl        -0x160BAC
	// 	  b         .loc_0x94

	// 	.loc_0x7C:
	// 	  addi      r3, r1, 0x1C
	// 	  addi      r4, r31, 0xA8
	// 	  subi      r5, r2, 0x4114
	// 	  subi      r6, r2, 0x4114
	// 	  crclr     6, 0x6
	// 	  bl        -0x160BC8

	// 	.loc_0x94:
	// 	  lwz       r5, -0x77D4(r13)
	// 	  addi      r3, r1, 0x1C
	// 	  li        r4, 0x1
	// 	  li        r6, 0x2
	// 	  bl        -0x20CEE4
	// 	  mr        r27, r3
	// 	  b         .loc_0xDC

	// 	.loc_0xB0:
	// 	  addi      r3, r31, 0x10
	// 	  addi      r5, r31, 0xD0
	// 	  li        r4, 0x91
	// 	  crclr     6, 0x6
	// 	  bl        -0x1FD9F0
	// 	  lwz       r5, -0x77D4(r13)
	// 	  addi      r3, r31, 0xE4
	// 	  li        r4, 0x1
	// 	  li        r6, 0x2
	// 	  bl        -0x20CF14
	// 	  mr        r27, r3

	// 	.loc_0xDC:
	// 	  cmplwi    r27, 0
	// 	  bne-      .loc_0xF8
	// 	  addi      r3, r31, 0x10
	// 	  addi      r5, r31, 0x100
	// 	  li        r4, 0x9A
	// 	  crclr     6, 0x6
	// 	  bl        -0x1FDA24

	// 	.loc_0xF8:
	// 	  lwz       r6, 0x94(r31)
	// 	  addi      r29, r1, 0x8
	// 	  lwz       r5, 0x98(r31)
	// 	  li        r26, 0
	// 	  lwz       r4, 0x9C(r31)
	// 	  li        r28, 0
	// 	  lwz       r3, 0xA0(r31)
	// 	  lwz       r0, 0xA4(r31)
	// 	  stw       r6, 0x8(r1)
	// 	  stw       r5, 0xC(r1)
	// 	  stw       r4, 0x10(r1)
	// 	  stw       r3, 0x14(r1)
	// 	  stw       r0, 0x18(r1)

	// 	.loc_0x12C:
	// 	  mr        r3, r27
	// 	  lwz       r4, 0x0(r29)
	// 	  lwz       r12, 0x0(r27)
	// 	  lwz       r12, 0x14(r12)
	// 	  mtctr     r12
	// 	  bctrl
	// 	  mr.       r25, r3
	// 	  bne-      .loc_0x164
	// 	  lwz       r6, 0x0(r29)
	// 	  addi      r3, r31, 0x10
	// 	  addi      r5, r31, 0x114
	// 	  li        r4, 0xA8
	// 	  crclr     6, 0x6
	// 	  bl        -0x1FDA90

	// 	.loc_0x164:
	// 	  mr        r4, r25
	// 	  addi      r3, r1, 0x21C
	// 	  li        r5, -0x1
	// 	  bl        0x1ED818
	// 	  li        r0, 0x1
	// 	  cmpwi     r0, 0x1
	// 	  stw       r0, 0x228(r1)
	// 	  bne-      .loc_0x18C
	// 	  li        r0, 0
	// 	  stw       r0, 0x630(r1)

	// 	.loc_0x18C:
	// 	  lwz       r0, 0x4(r30)
	// 	  addi      r4, r1, 0x21C
	// 	  add       r3, r0, r28
	// 	  bl        -0x73BA0
	// 	  addi      r26, r26, 0x1
	// 	  addi      r28, r28, 0x20
	// 	  cmpwi     r26, 0x5
	// 	  addi      r29, r29, 0x4
	// 	  blt+      .loc_0x12C
	// 	  mr        r3, r27
	// 	  lwz       r12, 0x0(r27)
	// 	  lwz       r12, 0xC(r12)
	// 	  mtctr     r12
	// 	  bctrl
	// 	  lmw       r25, 0x644(r1)
	// 	  lwz       r0, 0x664(r1)
	// 	  mtlr      r0
	// 	  addi      r1, r1, 0x660
	// 	  blr
	// 	*/
}

/*
 * This relies on a fabricated function (PelletConfigList::getConfigCount) to preserve ordering.
 *
 * --INFO--
 * Address:	80228148
 * Size:	000018
 */
int PelletList::Mgr::getDictionaryNum()
{
	int itemCount    = mInstance->m_configList[ITEM].getConfigCount();
	int otakaraCount = mInstance->m_configList[OTAKARA].getConfigCount();
	return otakaraCount + itemCount;
}

/*
 * --INFO--
 * Address:	80228160
 * Size:	0000A4
 */
PelletConfig* PelletList::Mgr::getConfigFromDictionaryNo(int dictNo)
{
	bool isValid = dictNo >= 0 && dictNo < DICT_OTAKARA;
	P2ASSERTLINE(188, isValid);
	PelletConfig* result = mInstance->m_configList[OTAKARA].getPelletConfig_ByDictionaryNo(dictNo);
	if (!result) {
		result = mInstance->m_configList[ITEM].getPelletConfig_ByDictionaryNo(dictNo);
	}
	return result;
}

/*
 * --INFO--
 * Address:	80228204
 * Size:	0000A4
 */
int Game::PelletList::Mgr::getOffsetFromDictionaryNo(int dictNo)
{
	int offset           = 0;
	PelletConfig* config = mInstance->m_configList[OTAKARA].getPelletConfig_ByDictionaryNo(dictNo);
	if (config == nullptr) {
		offset = mInstance->m_configList[OTAKARA].getConfigCount();
		config = mInstance->m_configList[ITEM].getPelletConfig_ByDictionaryNo(dictNo);
	}
	JUT_ASSERTLINE(210, config != nullptr, "dictNo:%d \n", dictNo);
	return offset + config->m_params.m_index;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r4, r29
	  lwz       r5, -0x6A28(r13)
	  lwz       r3, 0x4(r5)
	  addi      r3, r3, 0x60
	  bl        -0x73D10
	  mr.       r30, r3
	  bne-      .loc_0x58
	  lwz       r3, -0x6A28(r13)
	  mr        r4, r29
	  lwz       r3, 0x4(r3)
	  lwz       r31, 0x78(r3)
	  addi      r3, r3, 0x80
	  bl        -0x73D30
	  mr        r30, r3

	.loc_0x58:
	  cmplwi    r30, 0
	  bne-      .loc_0x80
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x344C
	  mr        r6, r29
	  addi      r3, r3, 0x3330
	  li        r4, 0xD2
	  crclr     6, 0x6
	  bl        -0x1FDC40

	.loc_0x80:
	  lha       r0, 0x258(r30)
	  add       r3, r31, r0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802282A8
 * Size:	000080
 */
void PelletList::Mgr::globalInstance()
{
	if (!PelletList::Mgr::mInstance) {
		PelletList::Mgr::mInstance = new PelletList::Mgr();
	}
}

} // namespace Game
