#include "types.h"
#include "Graphics.h"

namespace og {
namespace Space {
	struct SceneBase {
		bool isUseBackupSceneInfo();
		bool isDrawInDemo() const;
		void setPort(Graphics& gfx);
	};

	/*
	 * --INFO--
	 * Address:	8030D790
	 * Size:	000008
	 */
	bool SceneBase::isUseBackupSceneInfo(void) { return false; }

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
		gfx->_190._14();
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  addi      r3, r4, 0x190
		  stw       r0, 0x14(r1)
		  lwz       r12, 0x190(r4)
		  lwz       r12, 0x14(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	// /*
	//  * --INFO--
	//  * Address:	8030D7D0
	//  * Size:	000008
	//  */
	// void SceneBase::doConfirmSetScene((SetSceneArg&))
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  li        r3, 0x1
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D7D8
	//  * Size:	000008
	//  */
	// void SceneBase::doConfirmStartScene((StartSceneArg*))
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  li        r3, 0x1
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D7E0
	//  * Size:	000008
	//  */
	// void SceneBase::doConfirmEndScene((EndSceneArg*&))
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  li        r3, 0x1
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D7E8
	//  * Size:	000050
	//  */
	// void SceneBase::setDefaultDispMember(void)
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  stwu      r1, -0x10(r1)
	// 	  mflr      r0
	// 	  lis       r5, 0x804B
	// 	  lis       r4, 0x804E
	// 	  stw       r0, 0x14(r1)
	// 	  addi      r0, r5, 0x1148
	// 	  li        r5, 0
	// 	  stw       r0, 0x8(r1)
	// 	  subi      r0, r4, 0x7DD8
	// 	  addi      r4, r1, 0x8
	// 	  stw       r5, 0xC(r1)
	// 	  li        r5, 0x8
	// 	  stw       r0, 0x8(r1)
	// 	  lwz       r3, 0x21C(r3)
	// 	  bl        -0x308684
	// 	  lwz       r0, 0x14(r1)
	// 	  li        r3, 0x1
	// 	  mtlr      r0
	// 	  addi      r1, r1, 0x10
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D838
	//  * Size:	000004
	//  */
	// void SceneBase::doSetBackupScene((SetSceneArg&))
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D83C
	//  * Size:	000008
	//  */
	// void SceneBase::doGetFinishState(void)
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  li        r3, -0x3
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D844
	//  * Size:	000008
	//  */
	// void DispMemberDummy::getSize(void)
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  li        r3, 0x8
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D84C
	//  * Size:	00000C
	//  */
	// void DispMemberDummy::getOwnerID(void)
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  lis       r3, 0x4F
	// 	  addi      r3, r3, 0x4741
	// 	  blr
	// 	*/
	// }

	// /*
	//  * --INFO--
	//  * Address:	8030D858
	//  * Size:	000010
	//  */
	// void DispMemberDummy::getMemberID(void)
	// {
	// 	/*
	// 	.loc_0x0:
	// 	  lis       r4, 0x554D
	// 	  li        r3, 0x44
	// 	  addi      r4, r4, 0x4D59
	// 	  blr
	// 	*/
	// }

} // namespace Space
} // namespace og

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00003C
//  */
// void newTestScene::__ct(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000064
//  */
// void SceneBase::__dt(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000074
//  */
// void newTestScene::__dt(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void newTestScene::doUserCallBackFunc((Resource::MgrCommand*))
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000060
//  */
// void newTestScene::doCreateObj((JKRArchive*))
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void newTestScene::getResName( const
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000008
//  */
// void newTestScene::getSceneType(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void newTestScene::getOwnerID(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000010
//  */
// void newTestScene::getMemberID(void)
// {
// 	// UNUSED FUNCTION
// }
