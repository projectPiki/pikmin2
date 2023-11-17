#include "Game/GameConfig.h"
#include "Game/PelletList.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "P2Macros.h"
#include "System.h"

static const char className[] = "gamePelletList";

namespace Game {
namespace PelletList {

Mgr* Mgr::mInstance;

/*
 * --INFO--
 * Address:	80227D5C
 * Size:	000070
 */
PelletConfigList* Mgr::getConfigList(cKind kind)
{
	P2ASSERTBOUNDSLINE(16, 0, kind, 5);
	return &mInstance->mConfigList[kind];
}

/*
 * --INFO--
 * Address:	80227DCC
 * Size:	000074
 */
int Mgr::getCount(cKind kind) { return getConfigList(kind)->mConfigCnt; }

/*
 * --INFO--
 * Address:	80227E40
 * Size:	0000C0
 */
PelletConfig* Mgr::getConfigAndKind(char* config, cKind& kind)
{
	// Need to pre-define these variables due to register ordering issues
	bool isValid;
	cKind kindCopy;

	for (int i = 0; i < 5; i++) {
		kind               = (cKind)i;
		PelletConfig* list = getConfigList(kind)->getPelletConfig(config);
		if (list) {
			return list;
		}
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
Mgr::Mgr()
{
	mConfigList = new PelletConfigList[5];
	loadResource();
}

/*
 * --INFO--
 * Address:	80227F00
 * Size:	000070
 */
Mgr::~Mgr()
{
	delete[] mConfigList;
	mConfigList = nullptr;
}

/*
 * --INFO--
 * Address:	80227F70
 * Size:	0001D8
 */
void Mgr::loadResource()
{
	JKRArchive* archive;
	char pathBuffer[512];
	const char* path;

	if (gGameConfig.mParms.mPelletMultiLang.mData) {
		switch (sys->mRegion) {
		case System::LANG_FRENCH:
		case System::LANG_GERMAN:
		case System::LANG_ITALIAN:
			break;
		case System::LANG_JAPANESE:
			path = "/user/Abe/Pellet/%s/pelletlist_%s.szs";
			sprintf(pathBuffer, path, "jpn", "jpn");
			break;
		case System::LANG_ENGLISH:
			path = "/user/Abe/Pellet/%s/pelletlist_%s.szs";
			sprintf(pathBuffer, path, "us", "us");
			break;
		case System::LANG_SPANISH:
			break;
		}
		archive = JKRArchive::mount(pathBuffer, JKRArchive::EMM_Mem, JKRHeap::getCurrentHeap(), JKRArchive::EMD_Tail);
	} else {
		JUT_PANICLINE(145, "don\'t use this !\n");
		const char* path = "/user/Kando/pelletlist.szs";
		archive          = JKRArchive::mount(path, JKRArchive::EMM_Mem, JKRHeap::getCurrentHeap(), JKRArchive::EMD_Tail);
	}

	JUT_ASSERTLINE(154, archive, "no pelletlist.szs\n");

	const char* configs[5]
	    = { "numberpellet_config.txt", "carcass_config.txt", "fruit_config.txt", "otakara_config.txt", "item_config.txt" };
	for (int i = 0; i < 5; i++) {
		void* data = archive->getResource(configs[i]);
		JUT_ASSERTLINE(168, data, "no config file [%s]\n", configs[i]);
		RamStream stream(data, -1);
		stream.resetPosition(STREAM_MODE_TEXT, STREAM_MODE_TEXT);
		getConfig(i)->read(stream);
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
int Mgr::getDictionaryNum()
{
	int itemCount    = mInstance->mConfigList[ITEM].getConfigCount();
	int otakaraCount = mInstance->mConfigList[OTAKARA].getConfigCount();
	return otakaraCount + itemCount;
}

/*
 * --INFO--
 * Address:	80228160
 * Size:	0000A4
 */
PelletConfig* Mgr::getConfigFromDictionaryNo(int dictNo)
{
	bool isValid = dictNo >= 0 && dictNo < getDictionaryNum();
	P2ASSERTLINE(188, isValid);
	PelletConfig* result = mInstance->mConfigList[OTAKARA].getPelletConfig_ByDictionaryNo(dictNo);
	if (!result) {
		result = mInstance->mConfigList[ITEM].getPelletConfig_ByDictionaryNo(dictNo);
	}
	return result;
}

/*
 * --INFO--
 * Address:	80228204
 * Size:	0000A4
 */
int Mgr::getOffsetFromDictionaryNo(int dictNo)
{
	int offset           = 0;
	PelletConfig* config = mInstance->mConfigList[OTAKARA].getPelletConfig_ByDictionaryNo(dictNo);
	if (!config) {
		offset = mInstance->mConfigList[OTAKARA].getConfigCount();
		config = mInstance->mConfigList[ITEM].getPelletConfig_ByDictionaryNo(dictNo);
	}
	JUT_ASSERTLINE(210, config, "dictNo:%d \n", dictNo);
	return offset + config->mParams.mIndex;
}

/*
 * --INFO--
 * Address:	802282A8
 * Size:	000080
 */
void Mgr::globalInstance()
{
	if (!mInstance) {
		mInstance = new Mgr;
	}
}

} // namespace PelletList
} // namespace Game
