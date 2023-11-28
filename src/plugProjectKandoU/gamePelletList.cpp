#include "Game/GameConfig.h"
#include "Game/PelletList.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "P2Macros.h"
#include "System.h"

static const char className[] = "gamePelletList";
#define CONFIG_COUNT 5 // should match mConfigCnt

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
	P2ASSERTBOUNDSLINE(16, 0, kind, CONFIG_COUNT);
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

	for (int i = 0; i < CONFIG_COUNT; i++) {
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
	mConfigList = new PelletConfigList[CONFIG_COUNT];
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

	if (gGameConfig.mParms.mPelletMultiLang.mData) {
		switch (sys->mRegion) {
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
		case System::LANG_SPANISH:
			break;
		}
		archive = JKRMountArchive(pathBuffer, JKRArchive::EMM_Mem, JKRHeap::getCurrentHeap(), JKRArchive::EMD_Tail);
	} else {
		JUT_PANICLINE(145, "don\'t use this !\n");
		archive = JKRMountArchive("/user/Kando/pelletlist.szs", JKRArchive::EMM_Mem, JKRHeap::getCurrentHeap(), JKRArchive::EMD_Tail);
	}

	JUT_ASSERTLINE(154, archive, "no pelletlist.szs\n");

	const char* configs[CONFIG_COUNT]
	    = { "numberpellet_config.txt", "carcass_config.txt", "fruit_config.txt", "otakara_config.txt", "item_config.txt" };
	for (int i = 0; i < CONFIG_COUNT; i++) {
		void* data = archive->getResource(configs[i]);
		JUT_ASSERTLINE(168, data, "no config file [%s]\n", configs[i]);
		RamStream stream(data, -1);
		stream.resetPosition(STREAM_MODE_TEXT, STREAM_MODE_TEXT);
		getConfig(i)->read(stream);
	}
	archive->unmount();
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
