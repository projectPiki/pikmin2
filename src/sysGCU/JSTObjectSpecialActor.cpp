#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_JSTObjectSpecialActor_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A858
    lbl_8049A858:
        .4byte 0x4A53544F
        .4byte 0x626A6563
        .4byte 0x74537065
        .4byte 0x6369616C
        .4byte 0x4163746F
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8049A874
    lbl_8049A874:
        .4byte 0x636F6D61
        .4byte 0x6E642025
        .4byte 0x64206E6F
        .4byte 0x7420696D
        .4byte 0x706C656D
        .4byte 0x656E7465
        .4byte 0x6420210A
        .4byte 0x00000000
    .global lbl_8049A894
    lbl_8049A894:
        .4byte 0x746F6F20
        .4byte 0x6D616E79
        .4byte 0x20636F6D
        .4byte 0x6D616E64
        .4byte 0x7320210A
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC820
    lbl_804EC820:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game5P2JST18ObjectSpecialActor
    __vt__Q34Game5P2JST18ObjectSpecialActor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game5P2JST18ObjectSpecialActorFv
        .4byte JSGFGetType__Q26JStage6TActorCFv
        .4byte JSGGetName__Q34Game5P2JST11ObjectActorCFv
        .4byte JSGUpdate__Q26JStage7TObjectFv
        .4byte JSGGetFlag__Q34Game5P2JST11ObjectActorCFv
        .4byte JSGSetFlag__Q34Game5P2JST11ObjectActorFUl
        .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
        .4byte JSGSetData__Q34Game5P2JST11ObjectActorFUlPCvUl
        .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
        .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
        .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
        .4byte JSGFindNodeID__Q34Game5P2JST11ObjectActorCFPCc
        .4byte JSGGetNodeTransformation__Q34Game5P2JST11ObjectActorCFUlPA4_f
        .4byte JSGGetTranslation__Q34Game5P2JST11ObjectActorCFP3Vec
        .4byte JSGSetTranslation__Q34Game5P2JST11ObjectActorFRC3Vec
        .4byte JSGGetScaling__Q34Game5P2JST11ObjectActorCFP3Vec
        .4byte JSGSetScaling__Q34Game5P2JST11ObjectActorFRC3Vec
        .4byte JSGGetRotation__Q34Game5P2JST11ObjectActorCFP3Vec
        .4byte JSGSetRotation__Q34Game5P2JST11ObjectActorFRC3Vec
        .4byte JSGGetShape__Q34Game5P2JST11ObjectActorCFv
        .4byte JSGSetShape__Q34Game5P2JST11ObjectActorFUl
        .4byte JSGGetAnimation__Q34Game5P2JST11ObjectActorCFv
        .4byte JSGSetAnimation__Q34Game5P2JST18ObjectSpecialActorFUl
        .4byte JSGGetAnimationFrame__Q34Game5P2JST11ObjectActorCFv
        .4byte JSGSetAnimationFrame__Q34Game5P2JST11ObjectActorFf
        .4byte JSGGetAnimationFrameMax__Q34Game5P2JST11ObjectActorCFv
        .4byte JSGGetAnimationTransition__Q26JStage6TActorCFv
        .4byte JSGSetAnimationTransition__Q26JStage6TActorFf
        .4byte JSGGetTextureAnimation__Q26JStage6TActorCFv
        .4byte JSGSetTextureAnimation__Q26JStage6TActorFUl
        .4byte JSGGetTextureAnimationFrame__Q26JStage6TActorCFv
        .4byte JSGSetTextureAnimationFrame__Q26JStage6TActorFf
        .4byte JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv
        .4byte 0
        .4byte 0
        .4byte "@4@reset__Q34Game5P2JST18ObjectSpecialActorFv"
        .4byte "@4@update__Q34Game5P2JST18ObjectSpecialActorFv"
        .4byte "@4@start__Q34Game5P2JST11ObjectActorFv"
        .4byte "@4@stop__Q34Game5P2JST18ObjectSpecialActorFv"
        .4byte "@4@parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv"
        .4byte reset__Q34Game5P2JST18ObjectSpecialActorFv
        .4byte update__Q34Game5P2JST18ObjectSpecialActorFv
        .4byte entry__Q34Game5P2JST11ObjectActorFv
        .4byte start__Q34Game5P2JST11ObjectActorFv
        .4byte stop__Q34Game5P2JST18ObjectSpecialActorFv
        .4byte setShape__Q34Game5P2JST11ObjectActorFv
        .4byte setAnim__Q34Game5P2JST11ObjectActorFv
        .4byte mountArchive__Q34Game5P2JST11ObjectActorFv
        .4byte parseUserData___Q34Game5P2JST18ObjectSpecialActorFUlPCv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516248
    lbl_80516248:
        .skip 0x4
    .global lbl_8051624C
    lbl_8051624C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520860
    lbl_80520860:
        .4byte 0x00000000
    .global lbl_80520864
    lbl_80520864:
        .float 1.0
*/

namespace Game {

/*
 * --INFO--
 * Address:	80437400
 * Size:	000058
 */
P2JST::ObjectSpecialActor::ObjectSpecialActor(char const*, Game::MoviePlayer*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game5P2JST11ObjectActorFPCcPQ24Game11MoviePlayer
	lis      r4, __vt__Q34Game5P2JST18ObjectSpecialActor@ha
	mr       r3, r31
	addi     r4, r4, __vt__Q34Game5P2JST18ObjectSpecialActor@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x8c
	stw      r0, 4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437458
 * Size:	00005C
 */
void P2JST::ObjectSpecialActor::reset(void)
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0x70(r3)
	lfs      f0, lbl_80520860@sda21(r2)
	stw      r0, 0x74(r3)
	stw      r0, 0x78(r3)
	stw      r0, 0x7c(r3)
	stw      r0, 0x80(r3)
	stw      r0, 0x84(r3)
	stw      r0, 0x88(r3)
	stw      r0, 0x8c(r3)
	stw      r0, 0x90(r3)
	stw      r0, 0x94(r3)
	stw      r0, 0x98(r3)
	stw      r0, 0x9c(r3)
	stw      r0, 0xa0(r3)
	stw      r0, 0xa4(r3)
	stw      r0, 0xa8(r3)
	stw      r0, 0xac(r3)
	stw      r0, 0xb0(r3)
	stb      r4, 0xb4(r3)
	stfs     f0, 0xb8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	804374B4
 * Size:	000004
 */
void P2JST::ObjectSpecialActor::stop(void) { }

/*
 * --INFO--
 * Address:	804374B8
 * Size:	000254
 */
void P2JST::ObjectSpecialActor::update(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_80520860@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lfs      f2, 0xb8(r3)
	fcmpo    cr0, f2, f1
	ble      lbl_8043750C
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xb8(r29)
	lfs      f0, 0xb8(r29)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8043750C
	li       r0, 1
	stb      r0, 0xb4(r29)

lbl_8043750C:
	lbz      r0, 0xb4(r29)
	cmplwi   r0, 0
	beq      lbl_8043752C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_8043752C:
	mr       r31, r29
	li       r30, 0
	b        lbl_80437698

lbl_80437538:
	lwz      r4, 0x74(r31)
	cmpwi    r4, 0x64
	bgt      lbl_80437560
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	b        lbl_80437690

lbl_80437560:
	cmpwi    r4, 0xc8
	bgt      lbl_804375A4
	cmpwi    r4, 0x66
	beq      lbl_80437594
	bge      lbl_80437690
	cmpwi    r4, 0x65
	bge      lbl_80437580
	b        lbl_80437690

lbl_80437580:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	li       r5, 0
	bl       startDemoCamera__Q24Game9CameraMgrFii
	b        lbl_80437690

lbl_80437594:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	bl       finishDemoCamera__Q24Game9CameraMgrFi
	b        lbl_80437690

lbl_804375A4:
	cmpwi    r4, 0x12c
	bgt      lbl_80437608
	cmpwi    r4, 0xcb
	beq      lbl_804375E8
	bge      lbl_80437690
	cmpwi    r4, 0xc9
	beq      lbl_804375C8
	b        lbl_80437690
	b        lbl_80437690

lbl_804375C8:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80437690
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	bl       startKantei2D__Q24Game15BaseGameSectionFv
	b        lbl_80437690

lbl_804375E8:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80437690
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	bl       startKantei2D__Q24Game15BaseGameSectionFv
	b        lbl_80437690

lbl_80437608:
	cmpwi    r4, 0x190
	bgt      lbl_80437670
	cmpwi    r4, 0x12e
	beq      lbl_8043764C
	bge      lbl_80437690
	cmpwi    r4, 0x12d
	bge      lbl_80437628
	b        lbl_80437690

lbl_80437628:
	lfs      f0, lbl_80520864@sda21(r2)
	stfs     f0, 0xb8(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f1, 0xb8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	b        lbl_80437690

lbl_8043764C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f1, lbl_80520864@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xb4(r29)
	b        lbl_80437690

lbl_80437670:
	lis      r3, lbl_8049A858@ha
	lis      r5, lbl_8049A874@ha
	mr       r6, r4
	li       r4, 0xa6
	addi     r3, r3, lbl_8049A858@l
	addi     r5, r5, lbl_8049A874@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80437690:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80437698:
	lwz      r0, 0x70(r29)
	cmpw     r30, r0
	blt      lbl_80437538
	li       r3, 0
	li       r0, -1
	stw      r3, 0x70(r29)
	stw      r0, 0x74(r29)
	stw      r0, 0x78(r29)
	stw      r0, 0x7c(r29)
	stw      r0, 0x80(r29)
	stw      r0, 0x84(r29)
	stw      r0, 0x88(r29)
	stw      r0, 0x8c(r29)
	stw      r0, 0x90(r29)
	stw      r0, 0x94(r29)
	stw      r0, 0x98(r29)
	stw      r0, 0x9c(r29)
	stw      r0, 0xa0(r29)
	stw      r0, 0xa4(r29)
	stw      r0, 0xa8(r29)
	stw      r0, 0xac(r29)
	stw      r0, 0xb0(r29)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043770C
 * Size:	000084
 */
void P2JST::ObjectSpecialActor::JSGSetAnimation(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x70(r30)
	cmpwi    r0, 0x10
	blt      lbl_80437760
	lis      r3, lbl_8049A858@ha
	lis      r5, lbl_8049A894@ha
	addi     r3, r3, lbl_8049A858@l
	li       r4, 0xbb
	addi     r5, r5, lbl_8049A894@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80437760:
	lwz      r4, 0x70(r30)
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0x70(r30)
	add      r3, r30, r0
	stw      r31, 0x74(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437790
 * Size:	000004
 */
void P2JST::ObjectSpecialActor::parseUserData_(unsigned long, void const*) { }

/*
 * --INFO--
 * Address:	80437794
 * Size:	000068
 */
P2JST::ObjectSpecialActor::~ObjectSpecialActor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_804377E0
	lis      r5, __vt__Q34Game5P2JST18ObjectSpecialActor@ha
	li       r4, 0
	addi     r5, r5, __vt__Q34Game5P2JST18ObjectSpecialActor@l
	stw      r5, 0(r30)
	addi     r0, r5, 0x8c
	stw      r0, 4(r30)
	bl       __dt__Q34Game5P2JST11ObjectActorFv
	extsh.   r0, r31
	ble      lbl_804377E0
	mr       r3, r30
	bl       __dl__FPv

lbl_804377E0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	804377FC
 * Size:	000028
 */
void __sinit_JSTObjectSpecialActor_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC820@ha
	stw      r0, lbl_80516248@sda21(r13)
	stfsu    f0, lbl_804EC820@l(r3)
	stfs     f0, lbl_8051624C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437824
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::parseUserData_(unsigned long, void const*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x98
	*/
}

/*
 * --INFO--
 * Address:	8043782C
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::stop(void)
{
	/*
	addi     r3, r3, -4
	b        stop__Q34Game5P2JST18ObjectSpecialActorFv
	*/
}

/*
 * --INFO--
 * Address:	80437834
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::update(void)
{
	/*
	addi     r3, r3, -4
	b        update__Q34Game5P2JST18ObjectSpecialActorFv
	*/
}

/*
 * --INFO--
 * Address:	8043783C
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::reset(void)
{
	/*
	addi     r3, r3, -4
	b        reset__Q34Game5P2JST18ObjectSpecialActorFv
	*/
}
