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

/**
 * @note Address: 0x80227D5C
 * @note Size: 0x70
 */
PelletConfigList* Mgr::getConfigList(cKind kind)
{
	P2ASSERTBOUNDSLINE(16, 0, kind, CONFIG_COUNT);
	return &mInstance->mConfigList[kind];
}

/**
 * @note Address: 0x80227DCC
 * @note Size: 0x74
 */
int Mgr::getCount(cKind kind) { return getConfigList(kind)->mConfigCnt; }

/**
 * @note Address: 0x80227E40
 * @note Size: 0xC0
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

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
Mgr::Mgr()
{
	mConfigList = new PelletConfigList[CONFIG_COUNT];
	loadResource();
}

/**
 * @note Address: 0x80227F00
 * @note Size: 0x70
 */
Mgr::~Mgr()
{
	delete[] mConfigList;
	mConfigList = nullptr;
}

/**
 * @note Address: 0x80227F70
 * @note Size: 0x1D8
 */
void Mgr::loadResource()
{
	JKRArchive* archive;
	char pathBuffer[512];

	if (gGameConfig.mParms.mPelletMultiLang.mData) {
		switch (sys->mRegion) {
		case System::LANG_French:
		case System::LANG_German:
		case System::LANG_Italian:
			break;
		case System::LANG_Japanese:
			sprintf(pathBuffer, "/user/Abe/Pellet/%s/pelletlist_%s.szs", "jpn", "jpn");
			break;
		case System::LANG_English:
			sprintf(pathBuffer, "/user/Abe/Pellet/%s/pelletlist_%s.szs", "us", "us");
			break;
		case System::LANG_Spanish:
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
		stream.setMode(STREAM_MODE_TEXT, STREAM_MODE_TEXT);
		getConfig(i)->read(stream);
	}
	archive->unmount();
}

/**
 * This relies on a fabricated function (PelletConfigList::getConfigCount) to preserve ordering.
 *
 * @note Address: 0x80228148
 * @note Size: 0x18
 */
int Mgr::getDictionaryNum()
{
	int itemCount    = mInstance->mConfigList[PLK_Item].getConfigCount();
	int otakaraCount = mInstance->mConfigList[PLK_Otakara].getConfigCount();
	return otakaraCount + itemCount;
}

/**
 * @note Address: 0x80228160
 * @note Size: 0xA4
 */
PelletConfig* Mgr::getConfigFromDictionaryNo(int dictNo)
{
	bool isValid = dictNo >= 0 && dictNo < getDictionaryNum();
	P2ASSERTLINE(188, isValid);
	PelletConfig* result = mInstance->mConfigList[PLK_Otakara].getPelletConfig_ByDictionaryNo(dictNo);
	if (!result) {
		result = mInstance->mConfigList[PLK_Item].getPelletConfig_ByDictionaryNo(dictNo);
	}
	return result;
}

/**
 * @note Address: 0x80228204
 * @note Size: 0xA4
 */
int Mgr::getOffsetFromDictionaryNo(int dictNo)
{
	int offset           = 0;
	PelletConfig* config = mInstance->mConfigList[PLK_Otakara].getPelletConfig_ByDictionaryNo(dictNo);
	if (!config) {
		offset = mInstance->mConfigList[PLK_Otakara].getConfigCount();
		config = mInstance->mConfigList[PLK_Item].getPelletConfig_ByDictionaryNo(dictNo);
	}
	JUT_ASSERTLINE(210, config, "dictNo:%d \n", dictNo);
	return offset + config->mParams.mIndex;
}

/**
 * @note Address: 0x802282A8
 * @note Size: 0x80
 */
void Mgr::globalInstance()
{
	if (!mInstance) {
		mInstance = new Mgr;
	}
}

} // namespace PelletList
} // namespace Game
