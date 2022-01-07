#include "Screen/Enums.h"
#include "og/Screen/DispMemberSMenuPauseVS.h"
#include "og/newScreen/ObjSMenuPauseVS.h"
#include "og/newScreen/SMenuPauseVS.h"
#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogSceneSMenuPauseVs_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F520
    lbl_8048F520:
        .4byte 0x534D656E
        .4byte 0x75506175
        .4byte 0x73655653
        .4byte 0x20736372
        .4byte 0x65656E00
    .global lbl_8048F534
    lbl_8048F534:
        .4byte 0x7265735F
        .4byte 0x735F6D65
        .4byte 0x6E755F70
        .4byte 0x61757365
        .4byte 0x5F56532E
        .4byte 0x737A7300

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D9CA0
    lbl_804D9CA0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og9newScreen12SMenuPauseVS
    __vt__Q32og9newScreen12SMenuPauseVS:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen12SMenuPauseVSFv
        .4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
        .4byte getMemberID__Q32og9newScreen12SMenuPauseVSFv
        .4byte isUseBackupSceneInfo__Q32og9newScreen12SMenuPauseVSFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen12SMenuPauseVSCFv
        .4byte doCreateObj__Q32og9newScreen12SMenuPauseVSFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
        .4byte
   doConfirmSetScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
        .4byte doGetFinishState__Q32og9newScreen12SMenuPauseVSFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E98
    lbl_80515E98:
        .skip 0x4
    .global lbl_80515E9C
    lbl_80515E9C:
        .skip 0x4
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	80329CFC
 * Size:	00003C
 */
SMenuPauseVS::SMenuPauseVS()
    : SceneBase()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
SMenuPauseVS::~SMenuPauseVS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80329D38
 * Size:	000004
 */
void SMenuPauseVS::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80329D3C
 * Size:	000078
 */
void SMenuPauseVS::doCreateObj(JKRArchive* archive)
{
	ObjSMenuPauseVS* obj = new ObjSMenuPauseVS("SMenuPauseVS screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 0xB4);
}

/*
 * --INFO--
 * Address:	80329DB4
 * Size:	000088
 */
int SMenuPauseVS::doGetFinishState()
{
	Screen::DispMemberBase* dispAll
	    = reinterpret_cast<Screen::DispMemberBase*>(m_dispMemberBuffer);
	int state = 0;
	if (dispAll->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		Screen::DispMemberSMenuPauseVS* dispVs
		    = (Screen::DispMemberSMenuPauseVS*)dispAll->getSubMember(
		        OWNER_OGA, MEMBER_START_MENU_PAUSE_VS);
		if (dispVs != nullptr) {
			state = dispVs->_08;
		}
	}
	return state;
}

/*
 * --INFO--
 * Address:	80329E3C
 * Size:	000004
 */
void SMenuPauseVS::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	80329E40
 * Size:	000068
 */
bool SMenuPauseVS::doConfirmSetScene(::Screen::SetSceneArg& arg)
{
	bool result = false;
	switch (arg.getSceneType()) {
	case SCENE_VS:
	case SCENE_CHALLENGE_2P:
	case SCENE_CHALLENGE_1P:
		result = true;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80329EA8
 * Size:	00000C
 */
void SMenuPauseVS::doSetBackupScene(::Screen::SetSceneArg& arg)
{
	arg._09 = false;
	/*
	li       r0, 0
	stb      r0, 9(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80329EB4
 * Size:	00000C
 */
const char* SMenuPauseVS::getResName() const
{
	return "res_s_menu_pause_VS.szs";
}

/*
 * --INFO--
 * Address:	80329EC0
 * Size:	000008
 */
SceneType SMenuPauseVS::getSceneType(void) { return SCENE_PAUSE_MENU_VS; }

/*
 * --INFO--
 * Address:	80329EC8
 * Size:	00000C
 */
ScreenOwnerID SMenuPauseVS::getOwnerID(void) { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	80329ED4
 * Size:	000014
 */
ScreenMemberID SMenuPauseVS::getMemberID()
{
	return MEMBER_START_MENU_PAUSE_VS;
}

/*
 * --INFO--
 * Address:	80329EE8
 * Size:	000008
 */
bool SMenuPauseVS::isUseBackupSceneInfo(void) { return true; }

} // namespace newScreen

} // namespace og

/*
 * --INFO--
 * Address:	80329EF0
 * Size:	000028
 */
void __sinit_ogSceneSMenuPauseVs_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D9CA0@ha
	stw      r0, lbl_80515E98@sda21(r13)
	stfsu    f0, lbl_804D9CA0@l(r3)
	stfs     f0, lbl_80515E9C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
