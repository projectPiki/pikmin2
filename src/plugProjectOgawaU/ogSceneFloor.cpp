#include "JSystem/JUtility/JUTException.h"
#include "LoadResource.h"
#include "og/newScreen/Floor.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/ogScreen.h"
#include "Screen/Enums.h"
#include "System.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* format, ...)
{
	char buffer[512];
	va_list args;
	va_start(args, format);
	sprintf(format, __FILE__, buffer);
	vprintf(buffer, args);
}

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031BE60
 * @note Size: 0x3C
 */
Floor::Floor() { }

/**
 * @note Address: 0x8031BE9C
 * @note Size: 0x13C
 */
void Floor::doUserCallBackFunc(Resource::MgrCommand*)
{
	if (mDispMember->isID(OWNER_OGA, MEMBER_FLOOR)) {
		const char* path = (sys->mRegion == System::LANG_Japanese) ? "res_floor_name_jpn.szs" : "res_floor_name_eng_pal.szs";
		og::newScreen::makeLanguageResName(mName, path);
		LoadResource::Arg loadArg(mName);
		LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(loadArg);

		JKRArchive* archive = nullptr;
		if (resourceNode) {
			archive = resourceNode->mArchive;

			if (resourceNode->mArchive == nullptr) {
				JUT_PANICLINE(91, "arc is NULL!!\n");
			}

		} else {
			JUT_PANICLINE(96, "node is NULL!!\n");
		}

		registObj(new ObjFloor("floor screen"), archive);
		setColorBG(0, 0, 0, 0);

	} else {
		JUT_PANICLINE(111, "DispMember is not \'FLOOR\'!");
	}
}

/**
 * @note Address: 0x8031BFD8
 * @note Size: 0x4
 */
void Floor::doCreateObj(JKRArchive*) { }

} // namespace newScreen
} // namespace og
