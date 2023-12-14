#include "Game/MoviePlayer.h"
#include "Game/P2JST/ObjectSystem.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
/* void @unnamed @moviePlayerAudio_cpp
    @ ::createObject_SOUND_JAI_(const JStudio::stb::data::TParse_TBlock_object&, JAIBasic*, const JStage::TSystem*)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	80454D30
 * Size:	00003C
 */
Pikmin_TCreateObject_JAudio::Pikmin_TCreateObject_JAudio(JAIBasic* jai, const JStage::TSystem* system)
    : JStudio_JAudio::TCreateObject(jai, system)
{
}

/*
 * --INFO--
 * Address:	80454D6C
 * Size:	000194
 */
bool Pikmin_TCreateObject_JAudio::create(JStudio::TObject** newObject, const JStudio::stb::data::TParse_TBlock_object& data)
{
	const char* str = &data.filedata->mObjName;
	if (str[0] != '#') {
		return false;
	}

	// Set the position to a max of 100 characters
	int pos = strlen(str);
	if (pos > 100) {
		pos = 100;
	}

	// Work backwards from the end to find the underscore
	for (int i = pos; i > 0; i--) {
		if (str[i] == '_') {
			pos = i;
			break;
		}
	}

	pos--;

	// Copy the string into a new buffer with a star at the beginning
	char buf[256];
	buf[0] = '*';
	for (int i = 0; i < pos; i++) {
		buf[i + 1] = str[i + 1];
	}
	buf[pos + 1] = '\0';

	// If the string is not a valid creature name, return false
	if (!Game::moviePlayer->mObjectSystem->findCreature(buf)) {
		return false;
	}

	// Create the object
	return TCreateObject::create(newObject, data);
}
