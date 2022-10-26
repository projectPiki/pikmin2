#include "types.h"
#include "nans.h"
#include "Game/SingleGame.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_MainGame_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482150
    lbl_80482150:
        .skip 0xC
        .asciz "SingleGS_Game"
        .skip 2
    .global lbl_8048216C
    lbl_8048216C:
        .asciz "x01_gamestart"
        .skip 2
    .global lbl_8048217C
    lbl_8048217C:
        .asciz "x01_coursein_forest"
    .global lbl_80482190
    lbl_80482190:
        .asciz "x01_coursein_yakushima"
        .skip 1
    .global lbl_804821A8
    lbl_804821A8:
        .asciz "x01_coursein_last"
        .skip 2
        .4byte lbl_8048216C
        .4byte lbl_8048217C
        .4byte lbl_80482190
        .4byte lbl_804821A8
        .asciz "singleGS_MainGame.cpp"
        .skip 2
        .asciz "P2Assert"
        .skip 3
        .asciz "BGS::GAME START"
        .4byte 0x7330305F
        .4byte 0x636F7572
        .4byte 0x7365696E
        .4byte 0x00000000
        .4byte 0x7330455F
        .4byte 0x72657475
        .4byte 0x726E5F63
        .4byte 0x61766500
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x73746174
        .4byte 0x65204761
        .4byte 0x6D655374
        .4byte 0x6174653A
        .4byte 0x3A696E69
        .4byte 0x740A0000
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F53
        .4byte 0x63656E65
        .4byte 0x2E680000
        .4byte 0x6732365F
        .4byte 0x696E6F75
        .4byte 0x745F626C
        .4byte 0x61636B00
        .4byte 0x6732395F
        .4byte 0x696E6F75
        .4byte 0x745F7768
        .4byte 0x69746500
        .4byte 0x6732435F
        .4byte 0x696E6F75
        .4byte 0x745F7265
        .4byte 0x64000000
        .4byte 0x6E6F2064
        .4byte 0x6F776E20
        .4byte 0x666C6F6F
        .4byte 0x72203230
        .4byte 0x0A000000
        .4byte 0x7831375F
        .4byte 0x6A6F696E
        .4byte 0x5F677569
        .4byte 0x64650000
        .4byte 0x7831355F
        .4byte 0x6578705F
        .4byte 0x78000000
        .4byte 0x7830325F
        .4byte 0x77617463
        .4byte 0x685F7265
        .4byte 0x645F7069
        .4byte 0x6B6D696E
        .4byte 0x00000000
        .4byte 0x7830345F
        .4byte 0x6578705F
        .4byte 0x79000000
        .4byte 0x6730315F
        .4byte 0x7069636B
        .4byte 0x5F6D6500
        .4byte 0x6733335F
        .4byte 0x63616D65
        .4byte 0x72615F64
        .4byte 0x656D6F00
        .4byte 0x72657061
        .4byte 0x792D646F
        .4byte 0x6E650000
        .4byte 0x736D656E
        .4byte 0x755F6573
        .4byte 0x63617065
        .4byte 0x0A000000
        .4byte 0x7330355F
        .4byte 0x70696B6D
        .4byte 0x696E7A65
        .4byte 0x726F0000
    .global lbl_8048235C
    lbl_8048235C:
        .4byte 0x7330335F
        .4byte 0x6F72696D
        .4byte 0x61646F77
        .4byte 0x6E000000
    .global lbl_8048236C
    lbl_8048236C:
        .4byte 0x7330395F
        .4byte 0x686F6C65
        .4byte 0x696E0000
        .4byte 0x7331305F
        .4byte 0x7375636B
        .4byte 0x5F747265
        .4byte 0x61737572
        .4byte 0x65000000
        .4byte 0x7830375F
        .4byte 0x66697273
        .4byte 0x745F7265
        .4byte 0x636F7665
        .4byte 0x72790000
        .4byte 0x6730385F
        .4byte 0x66697273
        .4byte 0x745F7265
        .4byte 0x7475726E
        .4byte 0x00000000
        .4byte 0x6733325F
        .4byte 0x6765745F
        .4byte 0x6D617000
        .4byte 0x7331335F
        .4byte 0x70696B6D
        .4byte 0x696E5F73
        .4byte 0x7570706C
        .4byte 0x79000000
        .4byte 0x7830335F
        .4byte 0x66696E64
        .4byte 0x5F726564
        .4byte 0x5F6F6E79
        .4byte 0x6F6E0000
        .4byte 0x6733355F
        .4byte 0x70726573
        .4byte 0x6964656E
        .4byte 0x745F6761
        .4byte 0x6D657374
        .4byte 0x61727400
    .global lbl_80482400
    lbl_80482400:
        .4byte 0x73746172
        .4byte 0x742D7265
        .4byte 0x70617900
    .global lbl_8048240C
    lbl_8048240C:
        .4byte 0x63686563
        .4byte 0x6B2D7265
        .4byte 0x70617900
    .global lbl_80482418
    lbl_80482418:
        .4byte 0x67616D65
        .4byte 0x73746174
        .4byte 0x653A3A63
        .4byte 0x6C65616E
        .4byte 0x75700000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C04D8
    lbl_804C04D8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og6Screen14DispMemberSave
    __vt__Q32og6Screen14DispMemberSave:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen14DispMemberSaveFv
        .4byte getOwnerID__Q32og6Screen14DispMemberSaveFv
        .4byte getMemberID__Q32og6Screen14DispMemberSaveFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen19DispMemberSMenuCont
    __vt__Q32og6Screen19DispMemberSMenuCont:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen19DispMemberSMenuContFv
        .4byte getOwnerID__Q32og6Screen19DispMemberSMenuContFv
        .4byte getMemberID__Q32og6Screen19DispMemberSMenuContFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen22DispMemberSMenuPauseVS
    __vt__Q32og6Screen22DispMemberSMenuPauseVS:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen22DispMemberSMenuPauseVSFv
        .4byte getOwnerID__Q32og6Screen22DispMemberSMenuPauseVSFv
        .4byte getMemberID__Q32og6Screen22DispMemberSMenuPauseVSFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen18DispMemberSMenuMap
    __vt__Q32og6Screen18DispMemberSMenuMap:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen18DispMemberSMenuMapFv
        .4byte getOwnerID__Q32og6Screen18DispMemberSMenuMapFv
        .4byte getMemberID__Q32og6Screen18DispMemberSMenuMapFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen19DispMemberSMenuItem
    __vt__Q32og6Screen19DispMemberSMenuItem:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen19DispMemberSMenuItemFv
        .4byte getOwnerID__Q32og6Screen19DispMemberSMenuItemFv
        .4byte getMemberID__Q32og6Screen19DispMemberSMenuItemFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu
    __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
        .4byte getOwnerID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
        .4byte getMemberID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen20DispMemberSMenuPause
    __vt__Q32og6Screen20DispMemberSMenuPause:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen20DispMemberSMenuPauseFv
        .4byte getOwnerID__Q32og6Screen20DispMemberSMenuPauseFv
        .4byte getMemberID__Q32og6Screen20DispMemberSMenuPauseFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen18DispMemberSMenuAll
    __vt__Q32og6Screen18DispMemberSMenuAll:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen18DispMemberSMenuAllFv
        .4byte getOwnerID__Q32og6Screen18DispMemberSMenuAllFv
        .4byte getMemberID__Q32og6Screen18DispMemberSMenuAllFv
        .4byte doSetSubMemberAll__Q32og6Screen18DispMemberSMenuAllFv
    .global __vt__Q34Game10SingleGame9GameState
    __vt__Q34Game10SingleGame9GameState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
        .4byte
   cleanup__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionR8Graphics
        .4byte
   onOrimaDown__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
        .4byte
   onMovieStart__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieCommand__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
        .4byte
   onHoleIn__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
        .4byte
   onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
        .4byte
   onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
        .4byte
   on_section_fadeout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
        .4byte
   on_demo_timer__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionUl
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515BE8
    lbl_80515BE8:
        .skip 0x4
    .global lbl_80515BEC
    lbl_80515BEC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519FA8
    lbl_80519FA8:
        .4byte 0x00000000
    .global lbl_80519FAC
    lbl_80519FAC:
        .4byte 0x40C00000
    .global lbl_80519FB0
    lbl_80519FB0:
        .4byte 0x47FA0000
    .global lbl_80519FB4
    lbl_80519FB4:
        .4byte 0x43340000
    .global lbl_80519FB8
    lbl_80519FB8:
        .4byte 0x736D2D63
        .4byte 0x616E6300
    .global lbl_80519FC0
    lbl_80519FC0:
        .4byte 0x736D2D75
        .4byte 0x676F7400
    .global lbl_80519FC8
    lbl_80519FC8:
        .4byte 0x736D2D7A
        .4byte 0x656E6B00
    .global lbl_80519FD0
    lbl_80519FD0:
        .4byte 0x6F70656E
        .4byte 0x2D736D00
    .global lbl_80519FD8
    lbl_80519FD8:
        .4byte 0x41A00000
    .global lbl_80519FDC
    lbl_80519FDC:
        .float 1.0
    .global lbl_80519FE0
    lbl_80519FE0:
        .4byte 0x3F666666
    .global lbl_80519FE4
    lbl_80519FE4:
        .4byte 0x3F4CCCCD
    .global lbl_80519FE8
    lbl_80519FE8:
        .4byte 0x44610000
    .global lbl_80519FEC
    lbl_80519FEC:
        .4byte 0xC49D8000
    .global lbl_80519FF0
    lbl_80519FF0:
        .4byte 0xC2A00000
    .global lbl_80519FF4
    lbl_80519FF4:
        .4byte 0x4587F000
    .global lbl_80519FF8
    lbl_80519FF8:
        .4byte 0x40F64D06
    .global lbl_80519FFC
    lbl_80519FFC:
        .4byte 0x40A00000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802135AC
 * Size:	0008B0
 */
void SingleGame::GameState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	lis      r6, lbl_80482150@ha
	stw      r0, 0x144(r1)
	li       r0, 0
	stmw     r27, 0x12c(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	addi     r31, r6, lbl_80482150@l
	stw      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       reset__Q24Game11MoviePlayerFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lbz      r3, 0x3c(r4)
	ori      r3, r3, 0x20
	stb      r3, 0x3c(r4)
	stb      r0, 0x10(r27)
	stb      r0, 0x19(r27)
	stb      r0, 0x20(r27)
	lwz      r4, 0x22c(r28)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r30, 0x48(r4)
	mr       r4, r30
	bl       setCurrentCourse__Q24Game8PlayDataFi
	lwz      r5, playData__4Game@sda21(r13)
	lbz      r0, 0x20(r5)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80213650
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r3, 0xc8(r3)
	lfs      f0, 0x9d0(r3)
	stfs     f0, 0x24(r5)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       setLifeMax__Q24Game4NaviFv

lbl_80213650:
	lwz      r5, playData__4Game@sda21(r13)
	lbz      r0, 0x20(r5)
	rlwinm.  r0, r0, 0x1f, 0x1f, 0x1f
	bne      lbl_8021368C
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r3, 0xc8(r3)
	lfs      f0, 0x9d0(r3)
	stfs     f0, 0x28(r5)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       setLifeMax__Q24Game4NaviFv

lbl_8021368C:
	cmplwi   r29, 0
	bne      lbl_802136A8
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x94
	li       r4, 0x270
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802136A8:
	lfs      f1, lbl_80519FA8@sda21(r2)
	mr       r3, r28
	lhz      r29, 2(r29)
	li       r4, 0
	fmr      f2, f1
	bl       setFixNearFar__Q24Game15BaseGameSectionFbff
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	li       r0, 0
	lwz      r3, 0x18(r3)
	stb      r0, 0x91(r3)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	stw      r30, 0x94(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stb      r0, 0x48(r3)
	stw      r0, 0x248(r28)
	stb      r0, 0x194(r28)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x20(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8021370C
	mr       r3, r28
	li       r4, 0
	bl       setPlayerMode__Q24Game15BaseGameSectionFi
	b        lbl_80213718

lbl_8021370C:
	mr       r3, r28
	li       r4, 1
	bl       setPlayerMode__Q24Game15BaseGameSectionFi

lbl_80213718:
	mr       r3, r28
	bl       setCamController__Q24Game15BaseGameSectionFv
	lwz      r3, 0x244(r28)
	cmplwi   r3, 0
	beq      lbl_80213740
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80213740:
	mr       r3, r28
	bl       setupMainMapGames__Q24Game17SingleGameSectionFv
	lwz      r3, pikiMgr__4Game@sda21(r13)
	addi     r4, r31, 0xa0
	bl       debugShapeDL__Q24Game7PikiMgrFPc
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       getActiveGameCamera__Q24Game11MoviePlayerFv
	cmpwi    r29, 2
	beq      lbl_80213788
	bge      lbl_80213778
	cmpwi    r29, 0
	beq      lbl_80213A68
	bge      lbl_80213B94
	b        lbl_80213C54

lbl_80213778:
	cmpwi    r29, 5
	beq      lbl_802137B4
	bge      lbl_80213C54
	b        lbl_80213B94

lbl_80213788:
	li       r0, 2
	mr       r3, r27
	sth      r0, 8(r1)
	mr       r4, r28
	addi     r6, r1, 8
	li       r5, 5
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80213E48

lbl_802137B4:
	lwz      r4, 0x22c(r28)
	addi     r3, r31, 0x1c
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lwz      r6, 0x14(r4)
	li       r4, 0x1f
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r3, 0xe8(r1)
	lwz      r3, playData__4Game@sda21(r13)
	stw      r6, 0xec(r1)
	stw      r5, 0xf4(r1)
	stfs     f0, 0x100(r1)
	stfs     f0, 0x104(r1)
	stfs     f0, 0x108(r1)
	stfs     f0, 0x10c(r1)
	stw      r0, 0x110(r1)
	stw      r0, 0xf8(r1)
	stw      r0, 0xf0(r1)
	stw      r0, 0x114(r1)
	stw      r0, 0xfc(r1)
	stw      r0, 0x118(r1)
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021381C
	addi     r3, r3, 4

lbl_8021381C:
	li       r0, 0
	stw      r3, 0x44(r1)
	addi     r3, r1, 0x3c
	stw      r0, 0x48(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x40(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	b        lbl_80213860

lbl_8021383C:
	lwz      r12, 0(r3)
	lwz      r4, 0x40(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	addi     r3, r1, 0x3c
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_80213860:
	lwz      r3, 0x3c(r1)
	cmplwi   r3, 0
	bne      lbl_8021383C
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x38(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_802138AC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80213A10

lbl_802138AC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80213918

lbl_802138C4:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80213A10
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_80213918:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802138C4
	b        lbl_80213A10

lbl_80213938:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_80213980
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_80213A10

lbl_80213980:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_802139F4

lbl_802139A0:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80213A10
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_802139F4:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802139A0

lbl_80213A10:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_80213938
	lwz      r0, 0xcc(r28)
	addi     r4, r1, 0xe8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0xf8(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	bl       setStartTime__Q24Game7TimeMgrFv
	lwz      r3, 0x244(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80213C68

lbl_80213A68:
	lwz      r4, 0x22c(r28)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0x48(r4)
	addi     r30, r4, 0x1f
	mr       r4, r30
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80213B24
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r30
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r11, 0x22c(r28)
	addi     r5, r1, 0x1c
	lwz      r6, 0x6c(r31)
	li       r0, 0
	lwz      r9, 0x70(r31)
	addi     r4, r1, 0xb4
	lwz      r8, 0x74(r31)
	lwz      r7, 0x78(r31)
	lwz      r3, 0x48(r11)
	stw      r6, 0x1c(r1)
	slwi     r6, r3, 2
	lwz      r10, 0xc8(r28)
	lwz      r11, 0x14(r11)
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r9, 0x20(r1)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r8, 0x24(r1)
	stw      r7, 0x28(r1)
	lwzx     r5, r5, r6
	stw      r11, 0xb8(r1)
	stw      r5, 0xb4(r1)
	stw      r10, 0xc0(r1)
	stfs     f0, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	stfs     f0, 0xd4(r1)
	stfs     f0, 0xd8(r1)
	stw      r0, 0xdc(r1)
	stw      r0, 0xc4(r1)
	stw      r0, 0xbc(r1)
	stw      r0, 0xe0(r1)
	stw      r0, 0xc8(r1)
	stw      r0, 0xe4(r1)
	lwz      r0, 0xcc(r28)
	stw      r0, 0xc4(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	b        lbl_80213B84

lbl_80213B24:
	lwz      r4, 0x22c(r28)
	addi     r3, r31, 0xb0
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lwz      r6, 0x14(r4)
	addi     r4, r1, 0x80
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r3, 0x80(r1)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r6, 0x84(r1)
	stw      r5, 0x8c(r1)
	stfs     f0, 0x98(r1)
	stfs     f0, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	stfs     f0, 0xa4(r1)
	stw      r0, 0xa8(r1)
	stw      r0, 0x90(r1)
	stw      r0, 0x88(r1)
	stw      r0, 0xac(r1)
	stw      r0, 0x94(r1)
	stw      r0, 0xb0(r1)
	lwz      r0, 0xcc(r28)
	stw      r0, 0x90(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_80213B84:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	bl       setStartTime__Q24Game7TimeMgrFv
	b        lbl_80213C68

lbl_80213B94:
	lwz      r4, 0x22c(r28)
	addi     r3, r31, 0xc0
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lwz      r6, 0x14(r4)
	addi     r4, r1, 0x4c
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r3, 0x4c(r1)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r6, 0x50(r1)
	stw      r5, 0x58(r1)
	stfs     f0, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stw      r0, 0x74(r1)
	stw      r0, 0x5c(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x78(r1)
	stw      r0, 0x60(r1)
	stw      r0, 0x7c(r1)
	lwz      r0, 0xcc(r28)
	stw      r0, 0x5c(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r30, 0

lbl_80213BF8:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r30
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80213C28
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	mr       r4, r30
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_80213C28
	li       r4, 3
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState

lbl_80213C28:
	addi     r30, r30, 1
	cmpwi    r30, 3
	blt      lbl_80213BF8
	cmplwi   r29, 1
	bne      lbl_80213C68
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lfs      f1, 0x68(r4)
	bl       setTime__Q24Game7TimeMgrFf
	b        lbl_80213C68

lbl_80213C54:
	addi     r3, r31, 0x7c
	addi     r5, r31, 0xd0
	li       r4, 0x340
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80213C68:
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       heapStatusDump__6SystemFb
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r29, 3
	lwz      r3, 0x40(r3)
	lwz      r0, 0x240(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x240(r3)
	beq      lbl_80213CF4
	li       r29, 0
	li       r30, 0

lbl_80213C98:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r30
	bl       hasContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80213CD4
	mr       r3, r30
	bl       getAllPikmins__Q24Game8GameStatFi
	cmpwi    r3, 0
	bne      lbl_80213CD4
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r30
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	li       r29, 1
	b        lbl_80213CE0

lbl_80213CD4:
	addi     r30, r30, 1
	cmpwi    r30, 2
	ble      lbl_80213C98

lbl_80213CE0:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80213CFC
	li       r0, 1
	stb      r0, 0x10(r27)
	b        lbl_80213CFC

lbl_80213CF4:
	li       r0, 0
	stb      r0, 0x10(r27)

lbl_80213CFC:
	li       r0, 0
	lfs      f0, lbl_80519FAC@sda21(r2)
	stb      r0, 0x11(r27)
	mr       r3, r28
	stfs     f0, 0x14(r27)
	bl       clearCaveMenus__Q24Game17SingleGameSectionFv
	li       r0, 0
	stb      r0, 0x18(r27)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x3c(r3)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       initInCourse__Q26Screen9Game2DMgrFv
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stb      r0, 0x23d(r28)
	addi     r4, r3, "zero__10Vector3<f>"@l
	lfs      f1, lbl_80519FB0@sda21(r2)
	addi     r5, r1, 0x10
	lwz      r3, mgr__5Radar@sda21(r13)
	addi     r6, r1, 0xc
	bl       "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
	cmpwi    r3, 0
	bne      lbl_80213D6C
	li       r0, 1
	stb      r0, 0x23e(r28)
	b        lbl_80213D74

lbl_80213D6C:
	li       r0, 0
	stb      r0, 0x23e(r28)

lbl_80213D74:
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80213E48
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	cmpwi    r3, 0
	bne      lbl_80213E48
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80213DAC
	addi     r3, r31, 0xf0
	addi     r5, r31, 0x94
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80213DAC:
	lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r27, 0
	bne      lbl_80213DCC
	addi     r3, r31, 0xf0
	addi     r5, r31, 0x94
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80213DCC:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80213DEC
	addi     r3, r31, 0xfc
	addi     r5, r31, 0x94
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80213DEC:
	lwz      r3, 4(r27)
	lwz      r27, 4(r3)
	cmplwi   r27, 0
	bne      lbl_80213E10
	addi     r3, r31, 0xfc
	addi     r5, r31, 0x108
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80213E10:
	lwz      r12, 0(r27)
	mr       r3, r27
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80213E40
	addi     r3, r31, 0x12c
	addi     r5, r31, 0x94
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80213E40:
	mr       r3, r27
	bl       setPollutUp__Q23PSM12Scene_GroundFv

lbl_80213E48:
	lmw      r27, 0x12c(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
unknown SingleGame::GameState::gameStart(Game::SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80213E5C
 * Size:	000288
 */
bool SingleGame::GameState::check_DemoInout(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r5, lbl_80482150@ha
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	mr       r31, r4
	li       r4, 0xd
	stw      r30, 0xa8(r1)
	addi     r30, r5, lbl_80482150@l
	lwz      r3, playData__4Game@sda21(r13)
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80213F2C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 3
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_80213F2C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xd
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r4, 0x22c(r31)
	addi     r3, r30, 0x140
	lwz      r5, 0xc8(r31)
	li       r0, 0
	lwz      r4, 0x14(r4)
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r3, 0x70(r1)
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	stw      r4, 0x74(r1)
	stw      r5, 0x7c(r1)
	stfs     f0, 0x88(r1)
	stfs     f0, 0x8c(r1)
	stfs     f0, 0x90(r1)
	stfs     f0, 0x94(r1)
	stw      r0, 0x98(r1)
	stw      r0, 0x80(r1)
	stw      r0, 0x78(r1)
	stw      r0, 0x9c(r1)
	stw      r0, 0x84(r1)
	stw      r0, 0xa0(r1)
	lwz      r3, 0xb0(r3)
	cmplwi   r3, 0
	beq      lbl_80213F18
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_80213F18:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x70
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r3, 1
	b        lbl_802140CC

lbl_80213F2C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80213FEC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xe
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80213FEC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_80213FEC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xe
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r4, 0x22c(r31)
	addi     r3, r30, 0x150
	lwz      r5, 0xc8(r31)
	li       r0, 0
	lwz      r4, 0x14(r4)
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r3, 0x3c(r1)
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	stw      r4, 0x40(r1)
	stw      r5, 0x48(r1)
	stfs     f0, 0x54(r1)
	stfs     f0, 0x58(r1)
	stfs     f0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	stw      r0, 0x64(r1)
	stw      r0, 0x4c(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x68(r1)
	stw      r0, 0x50(r1)
	stw      r0, 0x6c(r1)
	lwz      r3, 0xb0(r3)
	cmplwi   r3, 0
	beq      lbl_80213FD8
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_80213FD8:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x3c
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r3, 1
	b        lbl_802140CC

lbl_80213FEC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_802140C8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xf
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802140C8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_802140C8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xf
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r4, 0x22c(r31)
	addi     r3, r30, 0x160
	lwz      r5, 0xc8(r31)
	li       r0, 0
	lwz      r6, 0x14(r4)
	li       r4, 1
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r3, 8(r1)
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	stw      r6, 0xc(r1)
	stw      r5, 0x14(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x38(r1)
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_8021409C
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8021409C:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r3, 0xb0(r3)
	cmplwi   r3, 0
	beq      lbl_802140B4
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_802140B4:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 8
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r3, 1
	b        lbl_802140CC

lbl_802140C8:
	li       r3, 0

lbl_802140CC:
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802140E4
 * Size:	00000C
 */
void SingleGame::GameState::on_section_fadeout(Game::SingleGameSection*)
{
	// Generated from stb r0, 0x18(r3)
	_18 = 1;
}

/*
 * --INFO--
 * Address:	802140F0
 * Size:	000B28
 */
void SingleGame::GameState::on_demo_timer(Game::SingleGameSection*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x1D4(r1)
	  stw       r31, 0x1CC(r1)
	  addi      r31, r3, 0x2150
	  stw       r30, 0x1C8(r1)
	  mr        r30, r4
	  stw       r29, 0x1C4(r1)
	  mr        r29, r5
	  cmplwi    r29, 0x7
	  stw       r28, 0x1C0(r1)
	  bne-      .loc_0x2E4
	  lwz       r3, -0x6B20(r13)
	  li        r28, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  addi      r3, r3, 0x30

	.loc_0x48:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x7C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x70(r1)
	  stw       r0, 0x74(r1)
	  stw       r3, 0x78(r1)
	  bne-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r1)
	  b         .loc_0x1F0

	.loc_0x84:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r1)
	  b         .loc_0xF0

	.loc_0x9C:
	  lwz       r3, 0x78(r1)
	  lwz       r4, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F0
	  lwz       r3, 0x78(r1)
	  lwz       r4, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r1)

	.loc_0xF0:
	  lwz       r12, 0x70(r1)
	  addi      r3, r1, 0x70
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9C
	  b         .loc_0x1F0

	.loc_0x110:
	  lwz       r3, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E8(r3)
	  cmpwi     r0, 0xF
	  bne-      .loc_0x134
	  mr        r28, r3

	.loc_0x134:
	  lwz       r0, 0x7C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x160
	  lwz       r3, 0x78(r1)
	  lwz       r4, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r1)
	  b         .loc_0x1F0

	.loc_0x160:
	  lwz       r3, 0x78(r1)
	  lwz       r4, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r1)
	  b         .loc_0x1D4

	.loc_0x180:
	  lwz       r3, 0x78(r1)
	  lwz       r4, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F0
	  lwz       r3, 0x78(r1)
	  lwz       r4, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x74(r1)

	.loc_0x1D4:
	  lwz       r12, 0x70(r1)
	  addi      r3, r1, 0x70
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x180

	.loc_0x1F0:
	  lwz       r3, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x74(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x110
	  cmplwi    r28, 0
	  bne-      .loc_0x22C
	  addi      r3, r31, 0x7C
	  addi      r5, r31, 0x170
	  li        r4, 0x401
	  crclr     6, 0x6
	  bl        -0x1E9CD8

	.loc_0x22C:
	  lfs       f0, -0x43B8(r2)
	  li        r0, 0
	  addi      r5, r31, 0x184
	  stw       r0, 0x188(r1)
	  mr        r4, r28
	  addi      r3, r1, 0x44
	  stw       r5, 0x184(r1)
	  stw       r0, 0x190(r1)
	  stfs      f0, 0x19C(r1)
	  stfs      f0, 0x1A0(r1)
	  stfs      f0, 0x1A4(r1)
	  stfs      f0, 0x1A8(r1)
	  stw       r0, 0x1AC(r1)
	  stw       r0, 0x194(r1)
	  stw       r0, 0x18C(r1)
	  stw       r0, 0x1B0(r1)
	  stw       r0, 0x198(r1)
	  stw       r0, 0x1B4(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x44(r1)
	  mr        r3, r28
	  lfs       f1, 0x48(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x19C(r1)
	  stfs      f1, 0x1A0(r1)
	  stfs      f0, 0x1A4(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x1A8(r1)
	  addi      r4, r1, 0x184
	  lwz       r3, -0x64AC(r13)
	  stw       r28, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x21861C
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x7
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2E4:
	  cmplwi    r29, 0x5
	  bne-      .loc_0x3F4
	  lwz       r3, -0x6D20(r13)
	  bl        -0xB97C0
	  mr.       r28, r3
	  bne-      .loc_0x330
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x318
	  li        r4, 0

	.loc_0x318:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3

	.loc_0x330:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2E
	  bl        -0x2D084
	  lfs       f0, -0x43B8(r2)
	  li        r0, 0
	  addi      r5, r31, 0x194
	  stw       r0, 0x154(r1)
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  stw       r5, 0x150(r1)
	  stw       r0, 0x15C(r1)
	  stfs      f0, 0x168(r1)
	  stfs      f0, 0x16C(r1)
	  stfs      f0, 0x170(r1)
	  stfs      f0, 0x174(r1)
	  stw       r0, 0x178(r1)
	  stw       r0, 0x160(r1)
	  stw       r0, 0x158(r1)
	  stw       r0, 0x17C(r1)
	  stw       r0, 0x164(r1)
	  stw       r0, 0x180(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x38(r1)
	  mr        r3, r28
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  stfs      f2, 0x168(r1)
	  stfs      f1, 0x16C(r1)
	  stfs      f0, 0x170(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x174(r1)
	  addi      r4, r1, 0x150
	  lwz       r3, -0x64AC(r13)
	  stw       r28, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x21850C
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x5
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3F4:
	  cmplwi    r29, 0x4
	  bne-      .loc_0x6CC
	  lwz       r3, -0x6D20(r13)
	  bl        -0xB98D0
	  mr.       r28, r3
	  bne-      .loc_0x440
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x428
	  li        r4, 0

	.loc_0x428:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3

	.loc_0x440:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x6C(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x60(r1)
	  stw       r0, 0x64(r1)
	  stw       r3, 0x68(r1)
	  bne-      .loc_0x480
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x5E4

	.loc_0x480:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x4EC

	.loc_0x498:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5E4
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x4EC:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x498
	  b         .loc_0x5E4

	.loc_0x50C:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        -0xD8BC4
	  lwz       r0, 0x6C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x554
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x5E4

	.loc_0x554:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x5C8

	.loc_0x574:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5E4
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x5C8:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x574

	.loc_0x5E4:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x64(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x50C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x23
	  bl        -0x2D358
	  lwz       r5, 0xC8(r30)
	  li        r0, 0
	  lfs       f0, -0x43B8(r2)
	  addi      r3, r31, 0x1A0
	  stw       r3, 0x11C(r1)
	  mr        r4, r28
	  addi      r3, r1, 0x2C
	  stw       r0, 0x120(r1)
	  stw       r5, 0x128(r1)
	  stfs      f0, 0x134(r1)
	  stfs      f0, 0x138(r1)
	  stfs      f0, 0x13C(r1)
	  stfs      f0, 0x140(r1)
	  stw       r0, 0x144(r1)
	  stw       r0, 0x12C(r1)
	  stw       r0, 0x124(r1)
	  stw       r0, 0x148(r1)
	  stw       r0, 0x130(r1)
	  stw       r0, 0x14C(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x2C(r1)
	  mr        r3, r28
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  stfs      f2, 0x134(r1)
	  stfs      f1, 0x138(r1)
	  stfs      f0, 0x13C(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x140(r1)
	  addi      r4, r1, 0x11C
	  lwz       r3, -0x64AC(r13)
	  stw       r28, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x218234
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x4
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6CC:
	  cmplwi    r29, 0x3
	  bne-      .loc_0x7D4
	  lwz       r3, -0x6D20(r13)
	  bl        -0xB9BA8
	  mr.       r28, r3
	  bne-      .loc_0x718
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x700
	  li        r4, 0

	.loc_0x700:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3

	.loc_0x718:
	  lwz       r5, 0xC8(r30)
	  li        r0, 0
	  lfs       f0, -0x43B8(r2)
	  addi      r3, r31, 0x1B8
	  stw       r3, 0xE8(r1)
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  stw       r0, 0xEC(r1)
	  stw       r5, 0xF4(r1)
	  stfs      f0, 0x100(r1)
	  stfs      f0, 0x104(r1)
	  stfs      f0, 0x108(r1)
	  stfs      f0, 0x10C(r1)
	  stw       r0, 0x110(r1)
	  stw       r0, 0xF8(r1)
	  stw       r0, 0xF0(r1)
	  stw       r0, 0x114(r1)
	  stw       r0, 0xFC(r1)
	  stw       r0, 0x118(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  mr        r3, r28
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x100(r1)
	  stfs      f1, 0x104(r1)
	  stfs      f0, 0x108(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x10C(r1)
	  addi      r4, r1, 0xE8
	  lwz       r3, -0x64AC(r13)
	  bl        0x218134
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x25
	  bl        -0x2D504
	  mr        r3, r30
	  li        r4, 0x3
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7D4:
	  cmplwi    r29, 0x1
	  bne-      .loc_0x9E4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x2D4F4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C8
	  lwz       r3, -0x6B90(r13)
	  li        r28, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x804
	  addi      r3, r3, 0x30

	.loc_0x804:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A4
	  stw       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x50(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0x840
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x8E8

	.loc_0x840:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x8AC

	.loc_0x858:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8E8
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x8AC:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x858
	  b         .loc_0x8E8

	.loc_0x8CC:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  b         .loc_0x908

	.loc_0x8E8:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x8CC

	.loc_0x908:
	  cmplwi    r28, 0
	  bne-      .loc_0x924
	  addi      r3, r31, 0x7C
	  addi      r5, r31, 0x94
	  li        r4, 0x472
	  crclr     6, 0x6
	  bl        -0x1EA3D0

	.loc_0x924:
	  lwz       r5, 0xC8(r30)
	  li        r0, 0
	  lfs       f0, -0x43B8(r2)
	  addi      r3, r31, 0x1C4
	  stw       r3, 0xB4(r1)
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  stw       r0, 0xB8(r1)
	  stw       r5, 0xC0(r1)
	  stfs      f0, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  stfs      f0, 0xD4(r1)
	  stfs      f0, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  stw       r0, 0xC4(r1)
	  stw       r0, 0xBC(r1)
	  stw       r0, 0xE0(r1)
	  stw       r0, 0xC8(r1)
	  stw       r0, 0xE4(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r28
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0xCC(r1)
	  stfs      f1, 0xD0(r1)
	  stfs      f0, 0xD4(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0xD8(r1)
	  addi      r4, r1, 0xB4
	  lwz       r3, -0x64AC(r13)
	  bl        0x217F28
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x2D710

	.loc_0x9C8:
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB08

	.loc_0x9E4:
	  cmplwi    r29, 0x2
	  bne-      .loc_0xB08
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x13
	  bl        -0x2D704
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAF0
	  lwz       r3, -0x6D20(r13)
	  bl        -0xB9ED4
	  cmplwi    r3, 0
	  beq-      .loc_0xB08
	  lwz       r4, 0x22C(r30)
	  addi      r3, r31, 0x1D0
	  lwz       r5, 0xC8(r30)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  li        r4, 0
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x80(r1)
	  lwz       r3, -0x6D20(r13)
	  stw       r6, 0x84(r1)
	  stw       r5, 0x8C(r1)
	  stfs      f0, 0x98(r1)
	  stfs      f0, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  stfs      f0, 0xA4(r1)
	  stw       r0, 0xA8(r1)
	  stw       r0, 0x90(r1)
	  stw       r0, 0x88(r1)
	  stw       r0, 0xAC(r1)
	  stw       r0, 0x94(r1)
	  stw       r0, 0xB0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0xA88
	  lwz       r3, -0x6D20(r13)
	  bl        -0xB9F50
	  mr        r28, r3

	.loc_0xA88:
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r28
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x98(r1)
	  stfs      f1, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0xA4(r1)
	  addi      r4, r1, 0x80
	  lwz       r3, -0x64AC(r13)
	  bl        0x217E08
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x13
	  bl        -0x2D830
	  b         .loc_0xAF0
	  b         .loc_0xB08

	.loc_0xAF0:
	  mr        r3, r30
	  li        r4, 0x2
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB08:
	  lwz       r0, 0x1D4(r1)
	  lwz       r31, 0x1CC(r1)
	  lwz       r30, 0x1C8(r1)
	  lwz       r29, 0x1C4(r1)
	  lwz       r28, 0x1C0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80214C18
 * Size:	0006E0
 */
void SingleGame::GameState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stw      r31, 0x13c(r1)
	stw      r30, 0x138(r1)
	mr       r30, r4
	stw      r29, 0x134(r1)
	mr       r29, r3
	lis      r3, lbl_80482150@ha
	lbz      r0, 0x18(r29)
	addi     r31, r3, lbl_80482150@l
	cmplwi   r0, 0
	bne      lbl_802152DC
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80214CB8
	lwz      r3, particle2dMgr@sda21(r13)
	bl       update__14TParticle2dMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_Save__Q26Screen9Game2DMgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802152DC
	li       r7, 0
	li       r3, 1
	li       r0, 0x64
	stb      r3, 0x18(r1)
	mr       r3, r29
	mr       r4, r30
	stb      r7, 0x19(r1)
	addi     r6, r1, 0x18
	li       r5, 2
	stb      r7, 0x1a(r1)
	sth      r0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214CB8:
	mr       r3, r30
	bl       doUpdate__Q24Game15BaseGameSectionFv
	lwz      r3, 0x250(r30)
	lwz      r0, 4(r29)
	lwz      r3, 4(r3)
	cmpw     r3, r0
	bne      lbl_802152DC
	mr       r3, r30
	bl       updateMainMapScreen__Q24Game17SingleGameSectionFv
	li       r3, -1
	bl       getMapPikmins__Q24Game8GameStatFi
	cmpwi    r3, 0xf
	blt      lbl_80214D4C
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80214D4C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x30
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80214D4C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80214D4C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x30
	bl       setDemoFlag__Q24Game8PlayDataFi
	mr       r3, r30
	lfs      f1, lbl_80519FB4@sda21(r2)
	lwz      r12, 0(r30)
	li       r4, 7
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_80214D4C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80214D74
	mr       r3, r29
	bl       needRepayDemo__Q34Game10SingleGame9GameStateFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80214D74
	mr       r3, r29
	bl       startRepayDemo__Q34Game10SingleGame9GameStateFv

lbl_80214D74:
	mr       r3, r29
	bl       updateRepayDemo__Q34Game10SingleGame9GameStateFv
	cmpwi    r3, 3
	beq      lbl_80214DA8
	bge      lbl_80214D98
	cmpwi    r3, 1
	beq      lbl_802152DC
	bge      lbl_80214E68
	b        lbl_80214E84

lbl_80214D98:
	cmpwi    r3, 5
	bge      lbl_80214E84
	b        lbl_80214E08
	b        lbl_802152DC

lbl_80214DA8:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	lwz      r4, 0x22c(r30)
	mr       r3, r30
	bl       saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
	mr       r3, r30
	bl       advanceDayCount__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1e0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	mr       r3, r29
	stb      r0, 0xc(r1)
	mr       r4, r30
	addi     r6, r1, 0xc
	li       r5, 0xb
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214E08:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	lwz      r4, 0x22c(r30)
	mr       r3, r30
	bl       saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
	mr       r3, r30
	bl       advanceDayCount__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1e0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 2
	mr       r3, r29
	stb      r0, 8(r1)
	mr       r4, r30
	addi     r6, r1, 8
	li       r5, 0xb
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214E68:
	bl       PSPause_StartMenuOff__Fv
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1e0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	b        lbl_802152DC

lbl_80214E84:
	lbz      r0, 0x180(r30)
	cmplwi   r0, 0
	beq      lbl_80214EA0
	mr       r3, r30
	bl       updateCaveMenus__Q24Game17SingleGameSectionFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802152DC

lbl_80214EA0:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x10c(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_SMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_80214F08
	bge      lbl_80214ED0
	cmpwi    r3, 0
	beq      lbl_802150B4
	bge      lbl_80214EE0
	b        lbl_8021502C

lbl_80214ED0:
	cmpwi    r3, 4
	beq      lbl_80215014
	bge      lbl_8021502C
	b        lbl_80214F68

lbl_80214EE0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FB8@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FB8@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	b        lbl_802150B4

lbl_80214F08:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC0@sda21
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC0@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	mr       r3, r29
	sth      r0, 0x14(r1)
	mr       r4, r30
	addi     r6, r1, 0x14
	li       r5, 5
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214F68:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_80214FA0
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x94
	li       r4, 0x518
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80214FA0:
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 0
	stb      r0, 0x20(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       clearDeadCount__Q24Game7NaviMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC8@sda21
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC8@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	mr       r3, r30
	bl       clearHeap__Q24Game15BaseGameSectionFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80215014:
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x1ec
	li       r4, 0x526
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_802150B4

lbl_8021502C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_802150B4
	lwz      r4, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r4)
	cmpwi    r0, 0
	bne      lbl_802150B4
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802150B4
	lwz      r3, 0x10c(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	beq      lbl_802150B4
	addi     r3, r1, 0x60
	bl       __ct__Q32og6Screen18DispMemberSMenuAllFv
	mr       r3, r30
	addi     r4, r1, 0x60
	bl
setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x60
	bl       open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
	clrlwi.  r0, r3, 0x18
	beq      lbl_802150B4
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	addi     r5, r2, lbl_80519FD0@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	addi     r5, r2, lbl_80519FD0@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_802150B4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused_soft__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80215134
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_80215134
	lwz      r3, 0x40(r3)
	bl       isDayOver__Q24Game7TimeMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80215134
	lbz      r0, 0x180(r30)
	cmplwi   r0, 0
	bne      lbl_80215134
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r3, 0x3c(r4)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_80215134
	rlwinm   r3, r3, 0, 0x1b, 0x19
	li       r0, 0
	stb      r3, 0x3c(r4)
	mr       r3, r29
	mr       r4, r30
	addi     r6, r1, 0x10
	sth      r0, 0x10(r1)
	li       r5, 5
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80215134:
	lbz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_80215278
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80215278
	li       r3, -1
	bl       getAllPikmins__Q24Game8GameStatFi
	mr       r29, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf.    r0, r3, r29
	bne      lbl_80215278
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80215278
	lwz      r5, gameSystem__4Game@sda21(r13)
	addi     r4, r31, 0x1fc
	lfs      f0, lbl_80519FA8@sda21(r2)
	li       r0, 0
	lbz      r3, 0x3c(r5)
	rlwinm   r3, r3, 0, 0x1b, 0x19
	stb      r3, 0x3c(r5)
	lwz      r5, 0xc8(r30)
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r5, 0x38(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x5c(r1)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r29, r3, r3
	bne      lbl_80215218
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	lwz      r3, 0x58(r3)
	lwz      r0, 0xe4(r3)
	cmpwi    r0, 0
	bne      lbl_80215200
	li       r4, 0

lbl_80215200:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r29, r3

lbl_80215218:
	lwz      r0, 0xcc(r30)
	mr       r4, r29
	addi     r3, r1, 0x20
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r29
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x50(r1)
	addi     r4, r1, 0x2c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	b        lbl_802152DC

lbl_80215278:
	bl       PSMGetPikminNumD__Fv
	mr       r0, r3
	li       r3, -1
	mr       r29, r0
	bl       getMapPikmins_exclude_Me__Q24Game8GameStatFi
	cmpwi    r3, 0xa
	bge      lbl_802152C0
	lwz      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	cmpwi    r0, 0
	ble      lbl_802152C0
	cmplwi   r29, 0
	beq      lbl_802152DC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_802152C0:
	cmplwi   r29, 0
	beq      lbl_802152DC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802152DC:
	lwz      r0, 0x144(r1)
	lwz      r31, 0x13c(r1)
	lwz      r30, 0x138(r1)
	lwz      r29, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	802152F8
 * Size:	0001DC
 */
DispMemberSMenuAll::DispMemberSMenuAll(void)
{
	/*
stwu     r1, -0x30(r1)
lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
addi     r5, r4, __vt__Q32og6Screen14DispMemberBase@l
lis      r9, __vt__Q32og6Screen18DispMemberSMenuAll@ha
stmw     r24, 0x10(r1)
addi     r0, r9, __vt__Q32og6Screen18DispMemberSMenuAll@l
lis      r8, __vt__Q32og6Screen20DispMemberSMenuPause@ha
lis      r7, __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu@ha
addi     r26, r8, __vt__Q32og6Screen20DispMemberSMenuPause@l
lis      r6, __vt__Q32og6Screen19DispMemberSMenuItem@ha
addi     r12, r7, __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu@l
li       r4, 0
addi     r10, r6, __vt__Q32og6Screen19DispMemberSMenuItem@l
li       r25, 0x4d2
li       r24, 0x9a5
li       r11, 0x56
li       r9, 0x6f
li       r8, 0x16
li       r7, 0x14d
li       r6, 0x2c
stw      r5, 0(r3)
stw      r4, 4(r3)
stw      r0, 0(r3)
li       r0, 1
stw      r5, 8(r3)
stw      r4, 0xc(r3)
stw      r26, 8(r3)
stw      r25, 0x10(r3)
stw      r24, 0x14(r3)
stw      r0, 0x18(r3)
stw      r5, 0x1c(r3)
stw      r4, 0x20(r3)
stw      r12, 0x1c(r3)
stw      r0, 0x30(r3)
stw      r11, 0x24(r3)
stw      r24, 0x28(r3)
stb      r0, 0x2c(r3)
stb      r4, 0x2d(r3)
stw      r5, 0x34(r3)
stw      r4, 0x38(r3)
stw      r10, 0x34(r3)
stw      r9, 0x3c(r3)
stw      r8, 0x40(r3)
stw      r7, 0x44(r3)
stw      r6, 0x48(r3)
stb      r4, 0x4c(r3)
stb      r4, 0x4d(r3)
stb      r4, 0x4e(r3)
stb      r4, 0x4f(r3)
stb      r4, 0x50(r3)
stb      r4, 0x51(r3)
stb      r4, 0x52(r3)
stb      r4, 0x53(r3)
stb      r4, 0x54(r3)
stb      r4, 0x55(r3)
stb      r4, 0x56(r3)
stb      r4, 0x57(r3)
stb      r4, 0x58(r3)
lis      r12, __vt__Q32og6Screen18DispMemberSMenuMap@ha
lis      r11, 0x0074CBB1@ha
lis      r10, 0x0009FBF1@ha
stb      r4, 0x59(r3)
lis      r9, 0x0000D431@ha
lis      r8, 0x745F3031@ha
lis      r7, __vt__Q32og6Screen22DispMemberSMenuPauseVS@ha
stw      r5, 0x5c(r3)
lis      r6, __vt__Q32og6Screen19DispMemberSMenuCont@ha
addi     r12, r12, __vt__Q32og6Screen18DispMemberSMenuMap@l
addi     r24, r11, 0x0074CBB1@l
stw      r4, 0x60(r3)
addi     r25, r10, 0x0009FBF1@l
addi     r26, r9, 0x0000D431@l
li       r27, 0x10e1
stw      r12, 0x5c(r3)
li       r28, 0x141
li       r29, 0xa
li       r30, 0x14
stw      r0, 0x64(r3)
li       r31, 0x1e
li       r12, 0x28
li       r11, 0x32
stw      r24, 0x68(r3)
li       r10, 0x3c
li       r9, 0x46
addi     r8, r8, 0x745F3031@l
stw      r25, 0x6c(r3)
addi     r7, r7, __vt__Q32og6Screen22DispMemberSMenuPauseVS@l
addi     r6, r6, __vt__Q32og6Screen19DispMemberSMenuCont@l
stw      r26, 0x70(r3)
stw      r27, 0x74(r3)
stw      r28, 0x78(r3)
stw      r29, 0x7c(r3)
stw      r30, 0x80(r3)
stw      r31, 0x84(r3)
stw      r12, 0x88(r3)
stw      r11, 0x8c(r3)
stw      r10, 0x90(r3)
stw      r9, 0x94(r3)
stb      r4, 0xa5(r3)
stb      r4, 0xa6(r3)
stw      r4, 0x98(r3)
stw      r8, 0x9c(r3)
stb      r0, 0xa0(r3)
stb      r0, 0xa1(r3)
stb      r0, 0xa2(r3)
stb      r0, 0xa3(r3)
stb      r0, 0xa4(r3)
stw      r5, 0xa8(r3)
stw      r4, 0xac(r3)
stw      r7, 0xa8(r3)
stw      r0, 0xb0(r3)
stw      r5, 0xb4(r3)
stw      r4, 0xb8(r3)
stw      r6, 0xb4(r3)
stw      r4, 0xbc(r3)
stb      r4, 0xc0(r3)
lmw      r24, 0x10(r1)
addi     r1, r1, 0x30
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	802154D4
 * Size:	0000D4
 */
void SingleGame::GameState::onOrimaDown(Game::SingleGameSection*, int)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r3, lbl_8048235C@ha
	lfs      f0, lbl_80519FA8@sda21(r2)
	stw      r0, 0x54(r1)
	li       r0, 0
	stw      r31, 0x4c(r1)
	mr       r31, r5
	addi     r5, r3, lbl_8048235C@l
	stw      r30, 0x48(r1)
	mr       r30, r4
	lwz      r6, 0xc8(r4)
	mr       r4, r31
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r0, 0xc(r1)
	stw      r5, 8(r1)
	stw      r6, 0x14(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r31, 0x30(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x38(r1)
	lwz      r0, 0xcc(r30)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, moviePlayer__4Game@sda21(r13)
	cmpwi    r31, 0
	stw      r3, 0x18c(r4)
	bne      lbl_80215578
	lwz      r0, 0x104(r30)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)
	b        lbl_80215584

lbl_80215578:
	lwz      r0, 0x108(r30)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)

lbl_80215584:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 8
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802155A8
 * Size:	0000DC
 */
void SingleGame::GameState::onHoleIn(Game::SingleGameSection*, Game::ItemCave::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  lfs       f0, -0x43B8(r2)
	  stw       r0, 0x54(r1)
	  addi      r6, r3, 0x236C
	  li        r0, 0
	  addi      r3, r1, 0x8
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  lwz       r7, 0xC8(r4)
	  stw       r0, 0x18(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r0, 0xCC(r4)
	  mr        r4, r31
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r0, 0x1F0(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x3C(r1)
	  bl        0x217364
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80215684
 * Size:	000004
 */
void SingleGame::GameState::onMovieCommand(Game::SingleGameSection*, int) { }

/*
 * --INFO--
 * Address:	80215688
 * Size:	000158
 */
void SingleGame::GameState::onMovieStart(Game::SingleGameSection*, Game::MovieConfig*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r7
	  addi      r31, r6, 0x2150
	  lwz       r3, -0x6560(r13)
	  bl        0x1E819C
	  lwz       r3, -0x6560(r13)
	  bl        0x1E824C
	  mr        r3, r28
	  addi      r4, r31, 0xC0
	  bl        0x21C208
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r27
	  bl        -0xC41A0

	.loc_0x50:
	  mr        r3, r28
	  addi      r4, r31, 0x1FC
	  bl        0x21C1EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lwz       r3, -0x6560(r13)
	  li        r4, 0x4
	  bl        0x1E8258

	.loc_0x70:
	  mr        r3, r28
	  addi      r4, r31, 0x20C
	  bl        0x21C1CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  cmplwi    r29, 0
	  bne-      .loc_0xA0
	  mr        r3, r27
	  li        r30, 0x1
	  li        r4, 0
	  bl        -0xC7E08
	  b         .loc_0xC8

	.loc_0xA0:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB8
	  li        r4, 0x3

	.loc_0xB8:
	  mr        r30, r4
	  mr        r3, r27
	  li        r4, 0x1
	  bl        -0xC7E34

	.loc_0xC8:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r30
	  bl        0x1E81F4

	.loc_0xD4:
	  mr        r3, r28
	  addi      r4, r31, 0x21C
	  bl        0x21C168
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  subis     r0, r29, 0x795F
	  li        r4, 0
	  cmplwi    r0, 0x3034
	  bne-      .loc_0xFC
	  li        r4, 0x1

	.loc_0xFC:
	  mr        r3, r27
	  bl        -0xC1AC0
	  lwz       r4, 0x184(r27)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r27
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  li        r5, 0
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0xC7698

	.loc_0x144:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802157E0
 * Size:	001A7C
 */
void SingleGame::GameState::onMovieDone(Game::SingleGameSection*, Game::MovieConfig*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x580(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x584(r1)
	  stmw      r25, 0x564(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r7
	  addi      r30, r6, 0x2150
	  bl        .loc_0x1A7C
	  mr        r31, r3
	  mr        r3, r28
	  addi      r4, r30, 0x228
	  bl        0x21C0B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x2D5CC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x2D5D8
	  cmpwi     r3, 0x1
	  bne-      .loc_0xD4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x2BE8C
	  cmpwi     r3, 0
	  bne-      .loc_0xD4
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x23C
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x1F8
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x1F8(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x1FC(r1)
	  stw       r5, 0x204(r1)
	  stfs      f0, 0x210(r1)
	  stfs      f0, 0x214(r1)
	  stfs      f0, 0x218(r1)
	  stfs      f0, 0x21C(r1)
	  stw       r0, 0x220(r1)
	  stw       r0, 0x208(r1)
	  stw       r0, 0x200(r1)
	  stw       r0, 0x224(r1)
	  stw       r0, 0x20C(r1)
	  stw       r0, 0x228(r1)
	  bl        0x217124
	  b         .loc_0x1A68

	.loc_0xD4:
	  mr        r3, r28
	  addi      r4, r30, 0x23C
	  bl        0x21C010
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x114
	  li        r0, 0
	  mr        r3, r26
	  sth       r0, 0x14(r1)
	  mr        r4, r27
	  addi      r6, r1, 0x14
	  li        r5, 0x5
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A68

	.loc_0x114:
	  mr        r3, r28
	  addi      r4, r30, 0x250
	  bl        0x21BFD0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x39C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x12
	  bl        -0x2E530
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1BC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0xA
	  addi      r3, r3, 0x48
	  bl        -0x2F958
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x12
	  bl        -0x2E598
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x264
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x1C4
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x1C4(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x1C8(r1)
	  stw       r5, 0x1D0(r1)
	  stfs      f0, 0x1DC(r1)
	  stfs      f0, 0x1E0(r1)
	  stfs      f0, 0x1E4(r1)
	  stfs      f0, 0x1E8(r1)
	  stw       r0, 0x1EC(r1)
	  stw       r0, 0x1D4(r1)
	  stw       r0, 0x1CC(r1)
	  stw       r0, 0x1F0(r1)
	  stw       r0, 0x1D8(r1)
	  stw       r0, 0x1F4(r1)
	  bl        0x21703C
	  b         .loc_0x1A68

	.loc_0x1BC:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x1E0
	  lwz       r3, -0x6B70(r13)
	  bl        -0x2CB4C
	  cmpwi     r3, 0x9
	  bne-      .loc_0x1E0
	  mr        r3, r26
	  bl        0x1918
	  b         .loc_0x1A68

	.loc_0x1E0:
	  mr        r3, r26
	  mr        r4, r27
	  bl        -0x1B6C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A68
	  lbz       r0, 0x10(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x25C
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x270
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x190
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x190(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x194(r1)
	  stw       r5, 0x19C(r1)
	  stfs      f0, 0x1A8(r1)
	  stfs      f0, 0x1AC(r1)
	  stfs      f0, 0x1B0(r1)
	  stfs      f0, 0x1B4(r1)
	  stw       r0, 0x1B8(r1)
	  stw       r0, 0x1A0(r1)
	  stw       r0, 0x198(r1)
	  stw       r0, 0x1BC(r1)
	  stw       r0, 0x1A4(r1)
	  stw       r0, 0x1C0(r1)
	  bl        0x216F9C
	  b         .loc_0x1A68

	.loc_0x25C:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2A0
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB43C

	.loc_0x2A0:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C4
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB460

	.loc_0x2C4:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x39C

	.loc_0x2E0:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x300
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB49C

	.loc_0x300:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x324
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB4C0

	.loc_0x324:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x35C
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB4F8

	.loc_0x35C:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x380
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB51C

	.loc_0x380:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12B134

	.loc_0x39C:
	  mr        r3, r28
	  addi      r4, r30, 0x284
	  bl        0x21BD48
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3E0
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x2E7B8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3E0
	  mr        r3, r27
	  lfs       f1, -0x4388(r2)
	  lwz       r12, 0x0(r27)
	  li        r4, 0x1
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3E0:
	  mr        r3, r28
	  addi      r4, r30, 0x264
	  bl        0x21BD04
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x444
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x418
	  lwz       r3, -0x6B70(r13)
	  bl        -0x2CD84
	  cmpwi     r3, 0x9
	  bne-      .loc_0x418
	  mr        r3, r26
	  bl        0x16E0
	  b         .loc_0x1A68

	.loc_0x418:
	  li        r0, 0
	  mr        r3, r26
	  sth       r0, 0x10(r1)
	  mr        r4, r27
	  addi      r6, r1, 0x10
	  li        r5, 0x5
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A68

	.loc_0x444:
	  mr        r3, r28
	  addi      r4, r30, 0x1C
	  bl        0x21BCA0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x46C
	  mr        r3, r28
	  addi      r4, r30, 0x250
	  bl        0x21BC8C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6DC

	.loc_0x46C:
	  mr        r3, r28
	  addi      r4, r30, 0x1C
	  bl        0x21BC78
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x498
	  lwz       r3, 0x244(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x498:
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r31, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x4384(r2)
	  lis       r5, 0x804B
	  li        r6, 0xA
	  lfs       f2, -0x4380(r2)
	  lfs       f1, -0x437C(r2)
	  li        r7, 0x2
	  lfs       f4, -0x43B8(r2)
	  lis       r4, 0x804B
	  lfs       f0, -0x4378(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  stw       r31, 0x4D4(r1)
	  addi      r11, r5, 0x10DC
	  addi      r5, r4, 0x10C4
	  addi      r0, r3, 0x10AC
	  stw       r31, 0x53C(r1)
	  addi      r4, r1, 0x4D4
	  lwz       r3, -0x6560(r13)
	  stw       r31, 0x54C(r1)
	  stw       r12, 0x4D8(r1)
	  stw       r11, 0x4D4(r1)
	  stfs      f4, 0x4DC(r1)
	  stw       r12, 0x4E0(r1)
	  stw       r12, 0x4E8(r1)
	  stw       r10, 0x4E4(r1)
	  stw       r9, 0x4EC(r1)
	  stb       r12, 0x4F0(r1)
	  stw       r12, 0x4F4(r1)
	  stfs      f3, 0x4F8(r1)
	  stw       r8, 0x4FC(r1)
	  stw       r7, 0x500(r1)
	  stw       r6, 0x504(r1)
	  stw       r6, 0x508(r1)
	  stb       r8, 0x50C(r1)
	  stfs      f3, 0x510(r1)
	  stw       r8, 0x514(r1)
	  stw       r7, 0x518(r1)
	  stw       r6, 0x51C(r1)
	  stw       r6, 0x520(r1)
	  stb       r8, 0x524(r1)
	  stw       r12, 0x540(r1)
	  stw       r5, 0x53C(r1)
	  stfs      f2, 0x548(r1)
	  stfs      f2, 0x544(r1)
	  stw       r12, 0x550(r1)
	  stw       r0, 0x54C(r1)
	  stfs      f1, 0x558(r1)
	  stfs      f1, 0x554(r1)
	  stb       r12, 0x532(r1)
	  stfs      f0, 0x528(r1)
	  stb       r12, 0x530(r1)
	  stb       r8, 0x531(r1)
	  stw       r8, 0x52C(r1)
	  stb       r12, 0x533(r1)
	  stb       r12, 0x534(r1)
	  stb       r12, 0x535(r1)
	  stb       r12, 0x536(r1)
	  stb       r12, 0x537(r1)
	  stb       r12, 0x538(r1)
	  bl        0x1E6390
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x620
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x5E0
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB77C

	.loc_0x5E0:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x604
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB7A0

	.loc_0x604:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6DC

	.loc_0x620:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x640
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB7DC

	.loc_0x640:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x664
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB800

	.loc_0x664:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x69C
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB838

	.loc_0x69C:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C0
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB85C

	.loc_0x6C0:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12ADF4

	.loc_0x6DC:
	  mr        r3, r28
	  addi      r4, r30, 0x1C
	  bl        0x21BA08
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x77C
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x4374(r2)
	  mr        r25, r3
	  lfs       f2, -0x4370(r2)
	  lfs       f0, -0x436C(r2)
	  stfs      f1, 0x4C(r1)
	  lfs       f1, -0x4368(r2)
	  stfs      f2, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  bl        0x1FBCC8
	  stfs      f1, 0x1FC(r25)
	  addi      r4, r1, 0x4C
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r1)
	  mr        r3, r25
	  addi      r4, r1, 0x4C
	  li        r5, 0
	  bl        -0xDAD90
	  lwz       r3, 0x270(r25)
	  mr        r4, r25
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x77C:
	  mr        r3, r28
	  addi      r4, r30, 0x298
	  bl        0x21B968
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA54
	  lbz       r0, 0x10(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x7F8
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x270
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x15C
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x15C(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x160(r1)
	  stw       r5, 0x168(r1)
	  stfs      f0, 0x174(r1)
	  stfs      f0, 0x178(r1)
	  stfs      f0, 0x17C(r1)
	  stfs      f0, 0x180(r1)
	  stw       r0, 0x184(r1)
	  stw       r0, 0x16C(r1)
	  stw       r0, 0x164(r1)
	  stw       r0, 0x188(r1)
	  stw       r0, 0x170(r1)
	  stw       r0, 0x18C(r1)
	  bl        0x216A00
	  b         .loc_0x1A68

	.loc_0x7F8:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x87C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x83C
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EB9D8

	.loc_0x83C:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x860
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EB9FC

	.loc_0x860:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x938

	.loc_0x87C:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x89C
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EBA38

	.loc_0x89C:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C0
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EBA5C

	.loc_0x8C0:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x8F8
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EBA94

	.loc_0x8F8:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x91C
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EBAB8

	.loc_0x91C:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12AB98

	.loc_0x938:
	  mr        r3, r26
	  mr        r4, r27
	  bl        -0x22C4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A68
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r26, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x4384(r2)
	  lis       r5, 0x804B
	  li        r6, 0xA
	  lfs       f2, -0x4380(r2)
	  lfs       f1, -0x437C(r2)
	  li        r7, 0x2
	  lfs       f4, -0x43B8(r2)
	  lis       r4, 0x804B
	  lfs       f0, -0x4378(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  stw       r26, 0x44C(r1)
	  addi      r11, r5, 0x10DC
	  addi      r5, r4, 0x10C4
	  addi      r0, r3, 0x10AC
	  stw       r26, 0x4B4(r1)
	  addi      r4, r1, 0x44C
	  lwz       r3, -0x6560(r13)
	  stw       r26, 0x4C4(r1)
	  stw       r12, 0x450(r1)
	  stw       r11, 0x44C(r1)
	  stfs      f4, 0x454(r1)
	  stw       r12, 0x458(r1)
	  stw       r12, 0x460(r1)
	  stw       r10, 0x45C(r1)
	  stw       r9, 0x464(r1)
	  stb       r12, 0x468(r1)
	  stw       r12, 0x46C(r1)
	  stfs      f3, 0x470(r1)
	  stw       r8, 0x474(r1)
	  stw       r7, 0x478(r1)
	  stw       r6, 0x47C(r1)
	  stw       r6, 0x480(r1)
	  stb       r8, 0x484(r1)
	  stfs      f3, 0x488(r1)
	  stw       r8, 0x48C(r1)
	  stw       r7, 0x490(r1)
	  stw       r6, 0x494(r1)
	  stw       r6, 0x498(r1)
	  stb       r8, 0x49C(r1)
	  stw       r12, 0x4B8(r1)
	  stw       r5, 0x4B4(r1)
	  stfs      f2, 0x4C0(r1)
	  stfs      f2, 0x4BC(r1)
	  stw       r12, 0x4C8(r1)
	  stw       r0, 0x4C4(r1)
	  stfs      f1, 0x4D0(r1)
	  stfs      f1, 0x4CC(r1)
	  stb       r12, 0x4AA(r1)
	  stfs      f0, 0x4A0(r1)
	  stb       r12, 0x4A8(r1)
	  stb       r8, 0x4A9(r1)
	  stw       r8, 0x4A4(r1)
	  stb       r12, 0x4AB(r1)
	  stb       r12, 0x4AC(r1)
	  stb       r12, 0x4AD(r1)
	  stb       r12, 0x4AE(r1)
	  stb       r12, 0x4AF(r1)
	  stb       r12, 0x4B0(r1)
	  bl        0x1E5EDC
	  b         .loc_0x1A68

	.loc_0xA54:
	  mr        r3, r28
	  addi      r4, r30, 0xB0
	  bl        0x21B690
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAA4
	  mr        r3, r28
	  addi      r4, r30, 0x2C
	  bl        0x21B67C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAA4
	  mr        r3, r28
	  addi      r4, r30, 0x40
	  bl        0x21B668
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAA4
	  mr        r3, r28
	  addi      r4, r30, 0x58
	  bl        0x21B654
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0C

	.loc_0xAA4:
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB3C
	  li        r4, 0x16
	  bl        -0x2EEB8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB3C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x16
	  bl        -0x2EF08
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x298
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x128
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x128(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x12C(r1)
	  stw       r5, 0x134(r1)
	  stfs      f0, 0x140(r1)
	  stfs      f0, 0x144(r1)
	  stfs      f0, 0x148(r1)
	  stfs      f0, 0x14C(r1)
	  stw       r0, 0x150(r1)
	  stw       r0, 0x138(r1)
	  stw       r0, 0x130(r1)
	  stw       r0, 0x154(r1)
	  stw       r0, 0x13C(r1)
	  stw       r0, 0x158(r1)
	  lwz       r0, 0xCC(r27)
	  stw       r0, 0x138(r1)
	  bl        0x2166C4
	  lwz       r3, -0x6560(r13)
	  bl        0x1E7580
	  b         .loc_0x1A68

	.loc_0xB3C:
	  lbz       r0, 0x10(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0xBA4
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x270
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0xF4
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0xF4(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0xF8(r1)
	  stw       r5, 0x100(r1)
	  stfs      f0, 0x10C(r1)
	  stfs      f0, 0x110(r1)
	  stfs      f0, 0x114(r1)
	  stfs      f0, 0x118(r1)
	  stw       r0, 0x11C(r1)
	  stw       r0, 0x104(r1)
	  stw       r0, 0xFC(r1)
	  stw       r0, 0x120(r1)
	  stw       r0, 0x108(r1)
	  stw       r0, 0x124(r1)
	  bl        0x216654
	  b         .loc_0x1A68

	.loc_0xBA4:
	  mr        r3, r26
	  mr        r4, r27
	  bl        -0x2530
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC4
	  lwz       r3, -0x6560(r13)
	  bl        0x1E74F8
	  b         .loc_0x1A68

	.loc_0xBC4:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC48
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xC08
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EBDA4

	.loc_0xC08:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0xC2C
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EBDC8

	.loc_0xC2C:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD04

	.loc_0xC48:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xC68
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EBE04

	.loc_0xC68:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8C
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EBE28

	.loc_0xC8C:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC4
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EBE60

	.loc_0xCC4:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0xCE8
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EBE84

	.loc_0xCE8:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12A7CC

	.loc_0xD04:
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r26, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x4384(r2)
	  lis       r5, 0x804B
	  li        r6, 0xA
	  lfs       f2, -0x4380(r2)
	  lfs       f1, -0x437C(r2)
	  li        r7, 0x2
	  lfs       f4, -0x43B8(r2)
	  lis       r4, 0x804B
	  lfs       f0, -0x4378(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  stw       r26, 0x3C4(r1)
	  addi      r11, r5, 0x10DC
	  addi      r5, r4, 0x10C4
	  addi      r0, r3, 0x10AC
	  stw       r26, 0x42C(r1)
	  addi      r4, r1, 0x3C4
	  lwz       r3, -0x6560(r13)
	  stw       r26, 0x43C(r1)
	  stw       r12, 0x3C8(r1)
	  stw       r11, 0x3C4(r1)
	  stfs      f4, 0x3CC(r1)
	  stw       r12, 0x3D0(r1)
	  stw       r12, 0x3D8(r1)
	  stw       r10, 0x3D4(r1)
	  stw       r9, 0x3DC(r1)
	  stb       r12, 0x3E0(r1)
	  stw       r12, 0x3E4(r1)
	  stfs      f3, 0x3E8(r1)
	  stw       r8, 0x3EC(r1)
	  stw       r7, 0x3F0(r1)
	  stw       r6, 0x3F4(r1)
	  stw       r6, 0x3F8(r1)
	  stb       r8, 0x3FC(r1)
	  stfs      f3, 0x400(r1)
	  stw       r8, 0x404(r1)
	  stw       r7, 0x408(r1)
	  stw       r6, 0x40C(r1)
	  stw       r6, 0x410(r1)
	  stb       r8, 0x414(r1)
	  stw       r12, 0x430(r1)
	  stw       r5, 0x42C(r1)
	  stfs      f2, 0x438(r1)
	  stfs      f2, 0x434(r1)
	  stw       r12, 0x440(r1)
	  stw       r0, 0x43C(r1)
	  stfs      f1, 0x448(r1)
	  stfs      f1, 0x444(r1)
	  stb       r12, 0x422(r1)
	  stfs      f0, 0x418(r1)
	  stb       r12, 0x420(r1)
	  stb       r8, 0x421(r1)
	  stw       r8, 0x41C(r1)
	  stb       r12, 0x423(r1)
	  stb       r12, 0x424(r1)
	  stb       r12, 0x425(r1)
	  stb       r12, 0x426(r1)
	  stb       r12, 0x427(r1)
	  stb       r12, 0x428(r1)
	  bl        0x1E5B24
	  b         .loc_0x1A68

	.loc_0xE0C:
	  mr        r3, r28
	  addi      r4, r30, 0x21C
	  bl        0x21B2D8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE70
	  lwz       r3, -0x64AC(r13)
	  bl        0x216984
	  lis       r3, 0x804B
	  li        r4, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x40(r1)
	  addi      r3, r3, 0x4E4
	  li        r0, 0x1
	  stb       r4, 0x48(r1)
	  stw       r4, 0x44(r1)
	  stw       r3, 0x40(r1)
	  stb       r0, 0x48(r1)
	  bl        0x250E04
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x40
	  bl        0x1E8064
	  li        r0, 0x1
	  stb       r0, 0x20(r26)
	  b         .loc_0x1A68

	.loc_0xE70:
	  mr        r3, r28
	  addi      r4, r30, 0x270
	  bl        0x21B274
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10D0
	  li        r27, 0
	  lis       r3, 0x804B
	  stb       r27, 0x10(r26)
	  li        r8, 0x1
	  addi      r12, r3, 0x1148
	  li        r6, 0xA
	  lfs       f3, -0x4384(r2)
	  lis       r5, 0x804B
	  lfs       f2, -0x4380(r2)
	  li        r7, 0x2
	  lfs       f1, -0x437C(r2)
	  lis       r4, 0x804B
	  lfs       f4, -0x43B8(r2)
	  lis       r3, 0x804B
	  lfs       f0, -0x4378(r2)
	  li        r10, 0x4D2
	  li        r9, 0x32
	  stw       r12, 0x33C(r1)
	  addi      r11, r5, 0x10DC
	  addi      r5, r4, 0x10C4
	  stw       r12, 0x3A4(r1)
	  addi      r0, r3, 0x10AC
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x33C
	  stw       r12, 0x3B4(r1)
	  stw       r27, 0x340(r1)
	  stw       r11, 0x33C(r1)
	  stfs      f4, 0x344(r1)
	  stw       r27, 0x348(r1)
	  stw       r27, 0x350(r1)
	  stw       r10, 0x34C(r1)
	  stw       r9, 0x354(r1)
	  stb       r27, 0x358(r1)
	  stw       r27, 0x35C(r1)
	  stfs      f3, 0x360(r1)
	  stw       r8, 0x364(r1)
	  stw       r7, 0x368(r1)
	  stw       r6, 0x36C(r1)
	  stw       r6, 0x370(r1)
	  stb       r8, 0x374(r1)
	  stfs      f3, 0x378(r1)
	  stw       r8, 0x37C(r1)
	  stw       r7, 0x380(r1)
	  stw       r6, 0x384(r1)
	  stw       r6, 0x388(r1)
	  stb       r8, 0x38C(r1)
	  stw       r27, 0x3A8(r1)
	  stw       r5, 0x3A4(r1)
	  stfs      f2, 0x3B0(r1)
	  stfs      f2, 0x3AC(r1)
	  stw       r27, 0x3B8(r1)
	  stw       r0, 0x3B4(r1)
	  stfs      f1, 0x3C0(r1)
	  stfs      f1, 0x3BC(r1)
	  stb       r27, 0x39A(r1)
	  stfs      f0, 0x390(r1)
	  stb       r27, 0x398(r1)
	  stb       r8, 0x399(r1)
	  stw       r8, 0x394(r1)
	  stb       r27, 0x39B(r1)
	  stb       r27, 0x39C(r1)
	  stb       r27, 0x39D(r1)
	  stb       r27, 0x39E(r1)
	  stb       r27, 0x39F(r1)
	  stb       r27, 0x3A0(r1)
	  bl        0x1E59A0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1010
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xFD0
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC16C

	.loc_0xFD0:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0xFF4
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC190

	.loc_0xFF4:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A68

	.loc_0x1010:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1030
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC1CC

	.loc_0x1030:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x1054
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC1F0

	.loc_0x1054:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x108C
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC228

	.loc_0x108C:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x10B0
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC24C

	.loc_0x10B0:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x12A404
	  b         .loc_0x1A68

	.loc_0x10D0:
	  mr        r3, r28
	  addi      r4, r30, 0xC0
	  bl        0x21B014
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16DC
	  lbz       r0, 0x10(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x114C
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x270
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0xC0
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0xC0(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0xC4(r1)
	  stw       r5, 0xCC(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f0, 0xDC(r1)
	  stfs      f0, 0xE0(r1)
	  stfs      f0, 0xE4(r1)
	  stw       r0, 0xE8(r1)
	  stw       r0, 0xD0(r1)
	  stw       r0, 0xC8(r1)
	  stw       r0, 0xEC(r1)
	  stw       r0, 0xD4(r1)
	  stw       r0, 0xF0(r1)
	  bl        0x2160AC
	  b         .loc_0x1A68

	.loc_0x114C:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x3C(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x30(r1)
	  stw       r0, 0x34(r1)
	  stw       r3, 0x38(r1)
	  bne-      .loc_0x118C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x1348

	.loc_0x118C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x11F8

	.loc_0x11A4:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1348
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x11F8:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x11A4
	  b         .loc_0x1348

	.loc_0x1218:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  addi      r3, r1, 0x18
	  lwz       r12, 0x0(r25)
	  mr        r4, r25
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x18(r1)
	  addi      r4, r1, 0x24
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x28(r1)
	  mr        r3, r25
	  addi      r4, r1, 0x24
	  li        r5, 0
	  bl        -0xDB8C0
	  lwz       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x12B8
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x1348

	.loc_0x12B8:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x132C

	.loc_0x12D8:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1348
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x132C:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x12D8

	.loc_0x1348:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x34(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1218
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x6
	  bl        -0x2F770
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x13EC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x6
	  bl        -0x2F7C0
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x250
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x8C
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x8C(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x90(r1)
	  stw       r5, 0x98(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0xA8(r1)
	  stfs      f0, 0xAC(r1)
	  stfs      f0, 0xB0(r1)
	  stw       r0, 0xB4(r1)
	  stw       r0, 0x9C(r1)
	  stw       r0, 0x94(r1)
	  stw       r0, 0xB8(r1)
	  stw       r0, 0xA0(r1)
	  stw       r0, 0xBC(r1)
	  lwz       r0, 0xCC(r27)
	  stw       r0, 0x9C(r1)
	  bl        0x215E0C
	  b         .loc_0x1A68

	.loc_0x13EC:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x12
	  bl        -0x2F7F4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1480
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0xA
	  addi      r3, r3, 0x48
	  bl        -0x30C1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1480
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x12
	  bl        -0x2F85C
	  lwz       r4, 0x22C(r27)
	  addi      r3, r30, 0x264
	  lwz       r5, 0xC8(r27)
	  li        r0, 0
	  lwz       r6, 0x14(r4)
	  addi      r4, r1, 0x58
	  lfs       f0, -0x43B8(r2)
	  stw       r3, 0x58(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0x5C(r1)
	  stw       r5, 0x64(r1)
	  stfs      f0, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  stw       r0, 0x80(r1)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x60(r1)
	  stw       r0, 0x84(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x88(r1)
	  bl        0x215D78
	  b         .loc_0x1A68

	.loc_0x1480:
	  mr        r3, r26
	  mr        r4, r27
	  bl        -0x2E0C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A68
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1518
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x14D8
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC674

	.loc_0x14D8:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x14FC
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC698

	.loc_0x14FC:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x15D4

	.loc_0x1518:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1538
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC6D4

	.loc_0x1538:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x155C
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC6F8

	.loc_0x155C:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1594
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC730

	.loc_0x1594:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x15B8
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC754

	.loc_0x15B8:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x129EFC

	.loc_0x15D4:
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r26, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x4384(r2)
	  lis       r5, 0x804B
	  li        r6, 0xA
	  lfs       f2, -0x4380(r2)
	  lfs       f1, -0x437C(r2)
	  li        r7, 0x2
	  lfs       f4, -0x43B8(r2)
	  lis       r4, 0x804B
	  lfs       f0, -0x4378(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  stw       r26, 0x2B4(r1)
	  addi      r11, r5, 0x10DC
	  addi      r5, r4, 0x10C4
	  addi      r0, r3, 0x10AC
	  stw       r26, 0x31C(r1)
	  addi      r4, r1, 0x2B4
	  lwz       r3, -0x6560(r13)
	  stw       r26, 0x32C(r1)
	  stw       r12, 0x2B8(r1)
	  stw       r11, 0x2B4(r1)
	  stfs      f4, 0x2BC(r1)
	  stw       r12, 0x2C0(r1)
	  stw       r12, 0x2C8(r1)
	  stw       r10, 0x2C4(r1)
	  stw       r9, 0x2CC(r1)
	  stb       r12, 0x2D0(r1)
	  stw       r12, 0x2D4(r1)
	  stfs      f3, 0x2D8(r1)
	  stw       r8, 0x2DC(r1)
	  stw       r7, 0x2E0(r1)
	  stw       r6, 0x2E4(r1)
	  stw       r6, 0x2E8(r1)
	  stb       r8, 0x2EC(r1)
	  stfs      f3, 0x2F0(r1)
	  stw       r8, 0x2F4(r1)
	  stw       r7, 0x2F8(r1)
	  stw       r6, 0x2FC(r1)
	  stw       r6, 0x300(r1)
	  stb       r8, 0x304(r1)
	  stw       r12, 0x320(r1)
	  stw       r5, 0x31C(r1)
	  stfs      f2, 0x328(r1)
	  stfs      f2, 0x324(r1)
	  stw       r12, 0x330(r1)
	  stw       r0, 0x32C(r1)
	  stfs      f1, 0x338(r1)
	  stfs      f1, 0x334(r1)
	  stb       r12, 0x312(r1)
	  stfs      f0, 0x308(r1)
	  stb       r12, 0x310(r1)
	  stb       r8, 0x311(r1)
	  stw       r8, 0x30C(r1)
	  stb       r12, 0x313(r1)
	  stb       r12, 0x314(r1)
	  stb       r12, 0x315(r1)
	  stb       r12, 0x316(r1)
	  stb       r12, 0x317(r1)
	  stb       r12, 0x318(r1)
	  bl        0x1E5254
	  b         .loc_0x1A68

	.loc_0x16DC:
	  mr        r3, r28
	  addi      r4, r30, 0x140
	  bl        0x21AA08
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1718
	  mr        r3, r28
	  addi      r4, r30, 0x150
	  bl        0x21A9F4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1718
	  mr        r3, r28
	  addi      r4, r30, 0x160
	  bl        0x21A9E0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1960

	.loc_0x1718:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x179C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x175C
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC8F8

	.loc_0x175C:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x1780
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC91C

	.loc_0x1780:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1858

	.loc_0x179C:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x17BC
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC958

	.loc_0x17BC:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x17E0
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC97C

	.loc_0x17E0:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1818
	  addi      r3, r30, 0xF0
	  addi      r5, r30, 0x94
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1EC9B4

	.loc_0x1818:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x183C
	  addi      r3, r30, 0xFC
	  addi      r5, r30, 0x94
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1EC9D8

	.loc_0x183C:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  bl        0x129C78

	.loc_0x1858:
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r26, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x4384(r2)
	  lis       r5, 0x804B
	  li        r6, 0xA
	  lfs       f2, -0x4380(r2)
	  lfs       f1, -0x437C(r2)
	  li        r7, 0x2
	  lfs       f4, -0x43B8(r2)
	  lis       r4, 0x804B
	  lfs       f0, -0x4378(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  stw       r26, 0x22C(r1)
	  addi      r11, r5, 0x10DC
	  addi      r5, r4, 0x10C4
	  addi      r0, r3, 0x10AC
	  stw       r26, 0x294(r1)
	  addi      r4, r1, 0x22C
	  lwz       r3, -0x6560(r13)
	  stw       r26, 0x2A4(r1)
	  stw       r12, 0x230(r1)
	  stw       r11, 0x22C(r1)
	  stfs      f4, 0x234(r1)
	  stw       r12, 0x238(r1)
	  stw       r12, 0x240(r1)
	  stw       r10, 0x23C(r1)
	  stw       r9, 0x244(r1)
	  stb       r12, 0x248(r1)
	  stw       r12, 0x24C(r1)
	  stfs      f3, 0x250(r1)
	  stw       r8, 0x254(r1)
	  stw       r7, 0x258(r1)
	  stw       r6, 0x25C(r1)
	  stw       r6, 0x260(r1)
	  stb       r8, 0x264(r1)
	  stfs      f3, 0x268(r1)
	  stw       r8, 0x26C(r1)
	  stw       r7, 0x270(r1)
	  stw       r6, 0x274(r1)
	  stw       r6, 0x278(r1)
	  stb       r8, 0x27C(r1)
	  stw       r12, 0x298(r1)
	  stw       r5, 0x294(r1)
	  stfs      f2, 0x2A0(r1)
	  stfs      f2, 0x29C(r1)
	  stw       r12, 0x2A8(r1)
	  stw       r0, 0x2A4(r1)
	  stfs      f1, 0x2B0(r1)
	  stfs      f1, 0x2AC(r1)
	  stb       r12, 0x28A(r1)
	  stfs      f0, 0x280(r1)
	  stb       r12, 0x288(r1)
	  stb       r8, 0x289(r1)
	  stw       r8, 0x284(r1)
	  stb       r12, 0x28B(r1)
	  stb       r12, 0x28C(r1)
	  stb       r12, 0x28D(r1)
	  stb       r12, 0x28E(r1)
	  stb       r12, 0x28F(r1)
	  stb       r12, 0x290(r1)
	  bl        0x1E4FD0
	  b         .loc_0x1A68

	.loc_0x1960:
	  mr        r3, r28
	  addi      r4, r30, 0x20C
	  bl        0x21A784
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A14
	  lwz       r3, -0x6560(r13)
	  bl        0x1E6A4C
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  bl        -0xD4450
	  lwz       r3, -0x6D20(r13)
	  lwz       r0, 0x50(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x19D8
	  cmpwi     r29, 0
	  bne-      .loc_0x19C4
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  bl        -0xC9884
	  b         .loc_0x1A68

	.loc_0x19C4:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  lwz       r3, 0x58(r3)
	  bl        -0xC9898
	  b         .loc_0x1A68

	.loc_0x19D8:
	  lwz       r8, -0x6C18(r13)
	  li        r0, 0x2
	  mr        r3, r26
	  mr        r4, r27
	  lbz       r7, 0x3C(r8)
	  addi      r6, r1, 0xC
	  li        r5, 0x5
	  rlwinm    r7,r7,0,27,25
	  stb       r7, 0x3C(r8)
	  sth       r0, 0xC(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A68

	.loc_0x1A14:
	  mr        r3, r28
	  addi      r4, r30, 0x1FC
	  bl        0x21A6D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A68
	  lwz       r3, -0x6560(r13)
	  bl        0x1E6998
	  lwz       r8, -0x6C18(r13)
	  li        r0, 0x1
	  mr        r3, r26
	  mr        r4, r27
	  lbz       r7, 0x3C(r8)
	  addi      r6, r1, 0x8
	  li        r5, 0x5
	  rlwinm    r7,r7,0,27,25
	  stb       r7, 0x3C(r8)
	  sth       r0, 0x8(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1A68:
	  lmw       r25, 0x564(r1)
	  lwz       r0, 0x584(r1)
	  mtlr      r0
	  addi      r1, r1, 0x580
	  blr

	.loc_0x1A7C:
	*/
}

/*
 * --INFO--
 * Address:	8021725C
 * Size:	000074
 */
void SingleGame::GameState::needRepayDemo(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lbz      r0, 0x19(r3)
	cmplwi   r0, 0
	beq      lbl_80217280
	li       r3, 0
	b        lbl_802172BC

lbl_80217280:
	lwz      r3, playData__4Game@sda21(r13)
	li       r31, 0
	bl       getRepayLevel__Q24Game8PlayDataFv
	lwz      r3, playData__4Game@sda21(r13)
	bl       checkRepayLevelFirstClear__Q24Game8PlayDataFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802172A0
	li       r31, 1

lbl_802172A0:
	lwz      r3, playData__4Game@sda21(r13)
	bl       isCompletePelletTrigger__Q24Game8PlayDataFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802172B8
	li       r3, 1
	b        lbl_802172BC

lbl_802172B8:
	mr       r3, r31

lbl_802172BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802172D0
 * Size:	000140
 */
void SingleGame::GameState::startRepayDemo(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lbz      r0, 0x19(r3)
	cmplwi   r0, 0
	bne      lbl_802173F4
	li       r0, 1
	lis      r3, lbl_80482400@ha
	stb      r0, 0x19(r31)
	addi     r5, r3, lbl_80482400@l
	li       r4, 1
	li       r6, 3
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lis      r4, lbl_80482400@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_80482400@l
	li       r4, 1
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lfs      f0, lbl_80519FFC@sda21(r2)
	stfs     f0, 0x1c(r31)
	lwz      r3, playData__4Game@sda21(r13)
	bl       getRepayLevel__Q24Game8PlayDataFv
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r31, r0
	mr       r4, r31
	bl       getRepayLevelPercent__Q24Game8PlayDataFi
	fmr      f31, f1
	lwz      r3, playData__4Game@sda21(r13)
	bl       isCompletePelletTrigger__Q24Game8PlayDataFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80217394
	addi     r3, r1, 0x28
	li       r4, 2
	li       r5, 0
	bl __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x28
	bl       open_PayDept__Q26Screen9Game2DMgrFRQ32kh6Screen11DispPayDept
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)
	b        lbl_802173F0

lbl_80217394:
	cmpwi    r31, 9
	bge      lbl_802173C4
	fctiwz   f0, f31
	addi     r3, r1, 0x18
	li       r4, 0
	stfd     f0, 0x38(r1)
	lwz      r5, 0x3c(r1)
	bl __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x18
	bl       open_PayDept__Q26Screen9Game2DMgrFRQ32kh6Screen11DispPayDept
	b        lbl_802173F0

lbl_802173C4:
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 0
	bl __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       open_PayDept__Q26Screen9Game2DMgrFRQ32kh6Screen11DispPayDept
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)

lbl_802173F0:
	bl       PSPause_StartMenuOn__Fv

lbl_802173F4:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80217410
 * Size:	0000A8
 */
SingleGame::GameState::RepayDemoState SingleGame::GameState::updateRepayDemo()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x19(r3)
	cmplwi   r0, 0
	beq      lbl_802174A0
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_PayDept__Q26Screen9Game2DMgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80217498
	lis      r4, lbl_8048240C@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8048240C@l
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	li       r0, 0
	stb      r0, 0x19(r31)
	lwz      r3, playData__4Game@sda21(r13)
	bl       isCompletePelletTrigger__Q24Game8PlayDataFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80217474
	li       r3, 4
	b        lbl_802174A4

lbl_80217474:
	lwz      r3, playData__4Game@sda21(r13)
	bl       experienceRepayLevelFirstClear__Q24Game8PlayDataFv
	lwz      r3, playData__4Game@sda21(r13)
	bl       getRepayLevel__Q24Game8PlayDataFv
	cmpwi    r3, 9
	li       r3, 2
	blt      lbl_802174A4
	li       r3, 3
	b        lbl_802174A4

lbl_80217498:
	li       r3, 1
	b        lbl_802174A4

lbl_802174A0:
	li       r3, 0

lbl_802174A4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SingleGame::GameState::drawRepayDemo(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802174B8
 * Size:	000078
 */
void SingleGame::GameState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	bne      lbl_8021751C
	lbz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_80217500
	mr       r3, r31
	mr       r4, r5
	lwz      r12, 0(r31)
	lwz      r12, 0x118(r12)
	mtctr    r12
	bctrl
	b        lbl_8021751C

lbl_80217500:
	mr       r3, r31
	mr       r4, r5
	bl       doDraw__Q24Game15BaseGameSectionFR8Graphics
	mr       r3, r31
	bl       drawMainMapScreen__Q24Game17SingleGameSectionFv
	mr       r3, r31
	bl       test_draw_treasure_detector__Q24Game15BaseGameSectionFv

lbl_8021751C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80217530
 * Size:	000068
 */
void SingleGame::GameState::cleanup(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80482418@ha
	stw      r0, 0x14(r1)
	addi     r5, r3, lbl_80482418@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	lwz      r6, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r6)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x3c(r6)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r0, 0xfc(r31)
	cmplwi   r0, 0
	beq      lbl_80217578
	bl       PSMCancelToPauseOffMainBgm__Fv

lbl_80217578:
	mr       r3, r31
	li       r4, 0
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80217598
 * Size:	000008
 */
u32 DispMemberSave::getSize(void) { return 0xC; }

/*
 * --INFO--
 * Address:	802175A0
 * Size:	00000C
 */
void DispMemberSave::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802175AC
 * Size:	000010
 */
void DispMemberSave::getMemberID(void)
{
	/*
lis      r4, 0x53415645@ha
li       r3, 0
addi     r4, r4, 0x53415645@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802175BC
 * Size:	000008
 */
u32 DispMemberSMenuCont::getSize(void) { return 0x8; }

/*
 * --INFO--
 * Address:	802175C4
 * Size:	00000C
 */
void DispMemberSMenuCont::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802175D0
 * Size:	000014
 */
void DispMemberSMenuCont::getMemberID(void)
{
	/*
lis      r4, 0x434F4E54@ha
lis      r3, 0x00534D5F@ha
addi     r4, r4, 0x434F4E54@l
addi     r3, r3, 0x00534D5F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802175E4
 * Size:	000008
 */
u32 DispMemberSMenuPauseVS::getSize(void) { return 0xC; }

/*
 * --INFO--
 * Address:	802175EC
 * Size:	00000C
 */
void DispMemberSMenuPauseVS::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802175F8
 * Size:	000014
 */
void DispMemberSMenuPauseVS::getMemberID(void)
{
	/*
lis      r4, 0x535F5653@ha
lis      r3, 0x534D5F50@ha
addi     r4, r4, 0x535F5653@l
addi     r3, r3, 0x534D5F50@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8021760C
 * Size:	000008
 */
u32 DispMemberSMenuMap::getSize(void) { return 0x4C; }

/*
 * --INFO--
 * Address:	80217614
 * Size:	00000C
 */
void DispMemberSMenuMap::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80217620
 * Size:	000010
 */
void DispMemberSMenuMap::getMemberID(void)
{
	/*
lis      r4, 0x5F4D4150@ha
li       r3, 0x534d
addi     r4, r4, 0x5F4D4150@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80217630
 * Size:	000008
 */
u32 DispMemberSMenuItem::getSize(void) { return 0x28; }

/*
 * --INFO--
 * Address:	80217638
 * Size:	00000C
 */
void DispMemberSMenuItem::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80217644
 * Size:	000014
 */
void DispMemberSMenuItem::getMemberID(void)
{
	/*
lis      r4, 0x4954454D@ha
lis      r3, 0x00534D5F@ha
addi     r4, r4, 0x4954454D@l
addi     r3, r3, 0x00534D5F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80217658
 * Size:	000008
 */
u32 DispMemberSMenuPauseDoukutu::getSize(void) { return 0x18; }

/*
 * --INFO--
 * Address:	80217660
 * Size:	00000C
 */
void DispMemberSMenuPauseDoukutu::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8021766C
 * Size:	000014
 */
void DispMemberSMenuPauseDoukutu::getMemberID(void)
{
	/*
lis      r4, 0x53455F44@ha
lis      r3, 0x00504155@ha
addi     r4, r4, 0x53455F44@l
addi     r3, r3, 0x00504155@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80217680
 * Size:	000008
 */
u32 DispMemberSMenuPause::getSize(void) { return 0x14; }

/*
 * --INFO--
 * Address:	80217688
 * Size:	00000C
 */
void DispMemberSMenuPause::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80217694
 * Size:	000014
 */
void DispMemberSMenuPause::getMemberID(void)
{
	/*
lis      r4, 0x41555345@ha
lis      r3, 0x534D5F50@ha
addi     r4, r4, 0x41555345@l
addi     r3, r3, 0x534D5F50@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802176A8
 * Size:	000008
 */
u32 DispMemberSMenuAll::getSize(void) { return 0xC4; }

/*
 * --INFO--
 * Address:	802176B0
 * Size:	00000C
 */
void DispMemberSMenuAll::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802176BC
 * Size:	000010
 */
void DispMemberSMenuAll::getMemberID(void)
{
	/*
lis      r4, 0x5F414C4C@ha
li       r3, 0x534d
addi     r4, r4, 0x5F414C4C@l
blr
	*/
}

/*
 * --INFO--
 * Address:	802176CC
 * Size:	00006C
 */
void DispMemberSMenuAll::doSetSubMemberAll(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
addi     r4, r31, 8
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x1c
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x34
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x5c
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0xa8
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0xb4
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	80217738
 * Size:	000028
 */
void __sinit_singleGS_MainGame_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C04D8@ha
	stw      r0, lbl_80515BE8@sda21(r13)
	stfsu    f0, lbl_804C04D8@l(r3)
	stfs     f0, lbl_80515BEC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
