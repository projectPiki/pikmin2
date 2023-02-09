#include "types.h"
#include "Game/MoviePlayer.h"
#include "Game/P2JST/ObjectSystem.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_moviePlayerAudio_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ED8C8
    lbl_804ED8C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__27Pikmin_TCreateObject_JAudio
    __vt__27Pikmin_TCreateObject_JAudio:
        .4byte 0
        .4byte 0
        .4byte __dt__27Pikmin_TCreateObject_JAudioFv
        .4byte
   create__27Pikmin_TCreateObject_JAudioFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805162F8
    lbl_805162F8:
        .skip 0x4
    .global lbl_805162FC
    lbl_805162FC:
        .skip 0x4
*/

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
	char buf[264];
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
