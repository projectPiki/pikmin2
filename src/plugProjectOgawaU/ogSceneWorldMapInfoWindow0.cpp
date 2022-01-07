#include "og/Screen/DispMemberWorldMapInfoWin0.h"
#include "og/newScreen/ObjWorldMapInfoWindow0.h"
#include "og/newScreen/WorldMapInfoWindow0.h"
#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogSceneWorldMapInfoWindow0_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F5A8
    lbl_8048F5A8:
        .4byte 0x6F674F62
        .4byte 0x6A576F72
        .4byte 0x6C644D61
        .4byte 0x70496E66
        .4byte 0x6F57696E
        .4byte 0x646F7730
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8048F5C8
    lbl_8048F5C8:
        .4byte 0x534D656E
        .4byte 0x75506175
        .4byte 0x73655653
        .4byte 0x20736372
        .4byte 0x65656E00
        .asciz "P2Assert"
        .skip 3
        .4byte 0x696E666F
        .4byte 0x5F77696E
        .4byte 0x646F772E
        .4byte 0x626C6F00
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6800
        .4byte 0x00000000
    .global lbl_8048F608
    lbl_8048F608:
        .4byte 0x576F726C
        .4byte 0x644D6170
        .4byte 0x496E666F
        .4byte 0x57696E64
        .4byte 0x6F773020
        .4byte 0x73637265
        .4byte 0x656E0000
    .global lbl_8048F624
    lbl_8048F624:
        .4byte 0x7265735F
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F696E
        .4byte 0x666F5F77
        .4byte 0x696E646F
        .4byte 0x77302E73
        .4byte 0x7A730000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D9E20
    lbl_804D9E20:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og9newScreen19WorldMapInfoWindow0
    __vt__Q32og9newScreen19WorldMapInfoWindow0:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen19WorldMapInfoWindow0Fv
        .4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
        .4byte getMemberID__Q32og9newScreen19WorldMapInfoWindow0Fv
        .4byte isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow0Fv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen19WorldMapInfoWindow0CFv
        .4byte doCreateObj__Q32og9newScreen19WorldMapInfoWindow0FP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
        .4byte
   doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow0FRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
        .4byte doGetFinishState__Q32og9newScreen19WorldMapInfoWindow0Fv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515EA0
    lbl_80515EA0:
        .skip 0x4
    .global lbl_80515EA4
    lbl_80515EA4:
        .skip 0x4
*/

// // // TODO: Ew.
// #pragma force_active on
// static const char* fakeMatchPrintArg = "ogSceneWorldMapInfoWindow0";
// // static const char* fakeMatchPrintArg = "\0\0\0\0\0";
// #pragma force_active reset

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8032BAA4
 * Size:	00003C
 */
WorldMapInfoWindow0::WorldMapInfoWindow0()
    : SMenuPauseVS()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q32og9newScreen12SMenuPauseVSFv
	lis      r4, __vt__Q32og9newScreen19WorldMapInfoWindow0@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen19WorldMapInfoWindow0@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
WorldMapInfoWindow0::~WorldMapInfoWindow0()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032BAE0
 * Size:	0000A4
 */
void WorldMapInfoWindow0::doCreateObj(JKRArchive* archive)
{
	ObjWorldMapInfoWindow0* obj
	    = new ObjWorldMapInfoWindow0("WorldMapInfoWindow0 screen");
	registObj(obj, archive);
	Screen::DispMemberWorldMapInfoWin0* disp
	    = reinterpret_cast<Screen::DispMemberWorldMapInfoWin0*>(
	        m_dispMemberBuffer);
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		setColorBG(0, 0, 0, disp->_20);
	}
}

/*
 * --INFO--
 * Address:	8032BB84
 * Size:	000008
 */
bool WorldMapInfoWindow0::doConfirmSetScene(::Screen::SetSceneArg&)
{
	return true;
}

/*
 * --INFO--
 * Address:	8032BB8C
 * Size:	000064
 */
int WorldMapInfoWindow0::doGetFinishState()
{
	Screen::DispMemberWorldMapInfoWin0* disp
	    = reinterpret_cast<Screen::DispMemberWorldMapInfoWin0*>(
	        m_dispMemberBuffer);
	int state = 0;
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		state = disp->_08;
	}
	return state;
}

/*
 * --INFO--
 * Address:	8032BBF0
 * Size:	00000C
 */
const char* WorldMapInfoWindow0::getResName() const
{
	return "res_world_map_info_window0.szs";
}

/*
 * --INFO--
 * Address:	8032BBFC
 * Size:	000008
 */
SceneType WorldMapInfoWindow0::getSceneType()
{
	return SCENE_WORLD_MAP_INFO_WINDOW_0;
}

/*
 * --INFO--
 * Address:	8032BC04
 * Size:	000014
 */
ScreenMemberID WorldMapInfoWindow0::getMemberID(void)
{
	return MEMBER_WORLD_MAP_INFO_WINDOW_0;
}

/*
 * --INFO--
 * Address:	8032BC18
 * Size:	000008
 */
bool WorldMapInfoWindow0::isUseBackupSceneInfo(void) { return false; }

} // namespace newScreen

} // namespace og

// /*
//  * sinit
//  * --INFO--
//  * Address:	8032BC20
//  * Size:	000028
//  */
// void __sinit_ogSceneWorldMapInfoWindow0_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804D9E20@ha
// 	stw      r0, lbl_80515EA0@sda21(r13)
// 	stfsu    f0, lbl_804D9E20@l(r3)
// 	stfs     f0, lbl_80515EA4@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }
