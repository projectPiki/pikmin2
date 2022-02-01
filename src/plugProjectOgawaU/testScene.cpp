#include "Dolphin/stl.h"
#include "Graphics.h"
#include "og/Screen/DispMemberDummy.h"
#include "Screen/Bases.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen15DispMemberDummy
    __vt__Q32og6Screen15DispMemberDummy:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen15DispMemberDummyFv
        .4byte getOwnerID__Q32og6Screen15DispMemberDummyFv
        .4byte getMemberID__Q32og6Screen15DispMemberDummyFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00003C
//  */
// void og::newScreen::TestScene::__ct(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000064
//  */
// void Screen::SceneBase::__dt(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000074
//  */
// void og::newScreen::TestScene::__dt(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void og::newScreen::TestScene::doUserCallBackFunc(Resource::MgrCommand*)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000060
//  */
// void og::newScreen::TestScene::doCreateObj(JKRArchive*)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void og::newScreen::TestScene::getResName() const
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000008
//  */
// void og::newScreen::TestScene::getSceneType(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void og::newScreen::TestScene::getOwnerID(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000010
//  */
// void og::newScreen::TestScene::getMemberID(void)
// {
// 	// UNUSED FUNCTION
// }

namespace Screen {

/*
 * --INFO--
 * Address:	8030D790
 * Size:	000008
 */
bool SceneBase::isUseBackupSceneInfo() { return false; }

/*
 * --INFO--
 * Address:	8030D798
 * Size:	000008
 */
bool SceneBase::isDrawInDemo() const { return true; }

/*
 * --INFO--
 * Address:	8030D7A0
 * Size:	000030
 */
void SceneBase::setPort(Graphics& gfx)
{
	// TODO: Figure out why the addi r3, r4, 0x190 isn't happening
	gfx.m_perspGraph.setPort();
}

/*
 * --INFO--
 * Address:	8030D7D0
 * Size:	000008
 */
bool SceneBase::doConfirmSetScene(SetSceneArg&) { return true; }

/*
 * --INFO--
 * Address:	8030D7D8
 * Size:	000008
 */
bool SceneBase::doConfirmStartScene(StartSceneArg*) { return true; }

/*
 * --INFO--
 * Address:	8030D7E0
 * Size:	000008
 */
bool SceneBase::doConfirmEndScene(EndSceneArg*&) { return true; }

/*
 * --INFO--
 * Address:	8030D7E8
 * Size:	000050
 */
bool SceneBase::setDefaultDispMember(void)
{
	og::Screen::DispMemberDummy disp;
	memcpy(m_dispMemberBuffer, (void*)&disp, sizeof(disp));
	return true;
}

/*
 * --INFO--
 * Address:	8030D838
 * Size:	000004
 */
void SceneBase::doSetBackupScene(SetSceneArg&) { }

/*
 * --INFO--
 * Address:	8030D83C
 * Size:	000008
 */
int SceneBase::doGetFinishState() { return -3; }

/*
 * @generated{DispMemberDummy::getSize()}
 * --INFO--
 * Address:	8030D844
 * Size:	000008
 */

/*
 * @generated{DispMemberDummy::getOwnerID()}
 * --INFO--
 * Address:	8030D84C
 * Size:	00000C
 */

/*
 * @generated{DispMemberDummy::getMemberID()}
 * --INFO--
 * Address:	8030D858
 * Size:	000010
 */

} // namespace Screen
