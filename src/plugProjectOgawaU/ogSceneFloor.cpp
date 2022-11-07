#include "Dolphin/stl.h"
#include "JSystem/JUT/JUTException.h"
#include "LoadResource.h"
#include "og/newScreen/Floor.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/ogScreen.h"
#include "Screen/Enums.h"
#include "System.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	8031BE60
 * Size:	00003C
 */
Floor::Floor() { }

/*
 * --INFO--
 * Address:	8031BE9C
 * Size:	00013C
 */
void Floor::doUserCallBackFunc(Resource::MgrCommand*)
{
	if (m_dispMember->isID(OWNER_OGA, MEMBER_FLOOR)) {
		const char* path = (sys->m_region == System::LANG_JAPANESE) ? "res_floor_name_jpn.szs" : "res_floor_name_eng_pal.szs";
		og::newScreen::makeLanguageResName(m_name, path);
		LoadResource::Arg loadArg(m_name);
		LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(loadArg);

		JKRArchive* archive = nullptr;
		if (resourceNode) {
			archive = resourceNode->m_archive;

			if (resourceNode->m_archive == nullptr) {
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

/*
 * --INFO--
 * Address:	8031BFD8
 * Size:	000004
 */
void Floor::doCreateObj(JKRArchive*) { }

} // namespace newScreen
} // namespace og
