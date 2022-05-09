#include "types.h"
#include "Dolphin/stl.h"
#include "Game/MoviePlayer.h"
#include "Graphics.h"
#include "og/newScreen/ogUtil.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80317F28
 * Size:	000024
 */
bool checkMovieActive() { return ((Game::moviePlayer != nullptr) && (Game::moviePlayer->m_flags & Game::MoviePlayer::IS_ACTIVE)); }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void drawObjName(Graphics&, char*)
{
	// UNUSED FUNCTION
}

/*
 * TODO: This is currently slightly too small.
 *
 * --INFO--
 * Address:	........
 * Size:	000084
 * Tells the game which resource folder path to use, based on system language.
 */
void getLanguageDir(char*& path)
{
	// UNUSED FUNCTION
	if (LOCALIZED) {
		switch (sys->m_region) {
		case System::LANG_ENGLISH:
			path = "eng/";
			break;
		case System::LANG_FRENCH:
			path = "fra/";
			break;
		case System::LANG_GERMAN:
			path = "ger/";
			break;
		case System::LANG_ITALIAN:
			path = "ita/";
			break;
		case System::LANG_JAPANESE:
			path = "jpn/";
			break;
		case System::LANG_SPANISH:
			path = "spa/";
			break;
		case System::LANG_HOL_UNUSED:
		default:
			path = "";
			break;
		}
	} else {
		path = "";
	}
}

/*
 * --INFO--
 * Address:	80317F4C
 * Size:	0000DC
 */
void makeLanguageResName(char* languageResName, char const* path)
{
	char* langDir = nullptr;
	char langDirBuffer[16];

	if (*path == '/') {
		// TODO: Perhaps this is inlined from some path normalization func?
		// It's currently putting %s before the subdirs in rodata, when it
		// should be afterwards.

		// nah, it works now. -Epoch
		sprintf(languageResName, "%s", path);
		return;
	}

	getLanguageDir(langDir);
	sprintf(langDirBuffer, "%s", langDir);
	sprintf(languageResName, "/new_screen/%s%s", langDirBuffer, path);
}
} // namespace newScreen
} // namespace og

/*
 * --INFO--
 * Address:	80318028
 * Size:	000028
 * __sinit_ogUtil_cpp
 */
