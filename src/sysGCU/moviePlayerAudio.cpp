#include "types.h"
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
	char buf[256];
	const char* str    = &(data.filedata->_0C);
	const char first_c = *(str);
	if (first_c != '#') {
		return false;
	}
	int len = strlen(str);

	if (len > 100) {
		len = 100;
	}
	for (int i = len; i > 0; i--) {
		if (str[i] == '_') {
			len = i;
			break;
		}
	}
	len--; // get the character index before the underscore
	buf[0] = '*';

	for (int i = 0; i < len; i++) {
		buf[i + 1] = str[i + 1];
	}
	char* buf_ptr            = &buf[0];
	buf[len + 1]             = '\0';
	Game::Creature* creature = Game::moviePlayer->mObjectSystem->findCreature(buf_ptr);
	if (creature != nullptr) {
		return TCreateObject::create(newObject, data);
	} else {
		return false;
	}
	// return ret;
}
