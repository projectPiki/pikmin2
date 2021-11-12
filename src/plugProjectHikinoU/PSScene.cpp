#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490120
    lbl_80490120:
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x63707000
    .global lbl_8049012C
    lbl_8049012C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
    .global lbl_80490144
    lbl_80490144:
        .4byte 0x50535379
        .4byte 0x7374656D
        .4byte 0x49462E68
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28PSSystem5Scene
    __vt__Q28PSSystem5Scene:
        .4byte 0
        .4byte 0
        .4byte init__Q28PSSystem5SceneFv
        .4byte __dt__Q28PSSystem5SceneFv
        .4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
        .4byte scene1stLoadSync__Q28PSSystem5SceneFv
        .4byte exec__Q28PSSystem5SceneFv
        .4byte startMainSeq__Q28PSSystem5SceneFv
        .4byte stopMainSeq__Q28PSSystem5SceneFUl
        .4byte stopAllSound__Q28PSSystem5SceneFUl
    .global __vt__Q28PSSystem10WaveLoader
    __vt__Q28PSSystem10WaveLoader:
        .4byte 0
        .4byte 0
        .4byte
   loadWave__Q28PSSystem10WaveLoaderFPQ28PSSystem11TaskCheckerQ38PSSystem9WaveScene7AreaArg
    .global __vt__Q28PSSystem9WaveScene
    __vt__Q28PSSystem9WaveScene:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem9WaveSceneFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global spSceneMgr__8PSSystem
    spSceneMgr__8PSSystem:
        .skip 0x8
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	8034147C
 * Size:	00007C
 */
WaveScene::~WaveScene()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803414DC
	lis      r3, __vt__Q28PSSystem9WaveScene@ha
	lis      r4, __dt__Q38PSSystem9WaveScene8WaveAreaFv@ha
	addi     r0, r3, __vt__Q28PSSystem9WaveScene@l
	li       r5, 0x14
	stw      r0, 0(r30)
	addi     r3, r30, 0x18
	addi     r4, r4, __dt__Q38PSSystem9WaveScene8WaveAreaFv@l
	li       r6, 2
	bl       __destroy_arr
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_803414DC
	mr       r3, r30
	bl       __dl__FPv

lbl_803414DC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803414F8
 * Size:	000040
 */
void WaveLoader::loadWave(PSSystem::TaskChecker*, PSSystem::WaveScene::AreaArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r5
	stw      r0, 0x14(r1)
	add      r5, r3, r6
	lbz      r5, 4(r5)
	cmplwi   r5, 0xff
	beq      lbl_80341528
	mr       r7, r4
	addi     r3, r3, 8
	li       r4, 0
	bl
load__Q28PSSystem9WaveSceneFUsUsQ38PSSystem9WaveScene7AreaArgPQ28PSSystem11TaskChecker

lbl_80341528:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341538
 * Size:	000118
 */
Scene::Scene(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q28PSSystem5Scene@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r5, __vt__Q28PSSystem5Scene@l
	stw      r30, 0x18(r1)
	addi     r30, r31, 0x10
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	stw      r3, 0(r31)
	mr       r3, r30
	stw      r0, 4(r31)
	stw      r0, 8(r31)
	stw      r0, 0xc(r31)
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q28PSSystem6SeqMgr@ha
	clrlwi   r0, r29, 0x18
	addi     r3, r3, __vt__Q28PSSystem6SeqMgr@l
	stw      r3, 0xc(r30)
	cmplwi   r0, 0xff
	stw      r31, 0x10(r30)
	beq      lbl_8034162C
	li       r3, 0x48
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80341600
	lis      r3, __vt__Q28PSSystem10WaveLoader@ha
	addi     r28, r30, 8
	addi     r0, r3, __vt__Q28PSSystem10WaveLoader@l
	stw      r0, 0(r30)
	mr       r3, r28
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q28PSSystem9WaveScene@ha
	lis      r4, __ct__Q38PSSystem9WaveScene8WaveAreaFv@ha
	addi     r0, r3, __vt__Q28PSSystem9WaveScene@l
	li       r6, 0x14
	lis      r3, __dt__Q38PSSystem9WaveScene8WaveAreaFv@ha
	stw      r0, 0(r28)
	addi     r5, r3, __dt__Q38PSSystem9WaveScene8WaveAreaFv@l
	addi     r4, r4, __ct__Q38PSSystem9WaveScene8WaveAreaFv@l
	addi     r3, r28, 0x18
	li       r7, 2
	bl       __construct_array
	stb      r29, 4(r30)
	li       r0, 0xff
	stb      r0, 5(r30)

lbl_80341600:
	stw      r30, 8(r31)
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_8034162C
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x40
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034162C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341650
 * Size:	0000C4
 */
Scene::~Scene()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	beq      lbl_803416F4
	lis      r3, __vt__Q28PSSystem5Scene@ha
	addi     r0, r3, __vt__Q28PSSystem5Scene@l
	stw      r0, 0(r29)
	lwz      r31, 8(r29)
	cmplwi   r31, 0
	beq      lbl_803416D8
	lis      r3, __vt__Q28PSSystem10WaveLoader@ha
	addic.   r0, r31, 8
	addi     r0, r3, __vt__Q28PSSystem10WaveLoader@l
	stw      r0, 0(r31)
	beq      lbl_803416D0
	lis      r3, __vt__Q28PSSystem9WaveScene@ha
	lis      r4, __dt__Q38PSSystem9WaveScene8WaveAreaFv@ha
	addi     r0, r3, __vt__Q28PSSystem9WaveScene@l
	li       r5, 0x14
	stw      r0, 8(r31)
	addi     r3, r31, 0x20
	addi     r4, r4, __dt__Q38PSSystem9WaveScene8WaveAreaFv@l
	li       r6, 2
	bl       __destroy_arr
	addi     r3, r31, 8
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_803416D0:
	mr       r3, r31
	bl       __dl__FPv

lbl_803416D8:
	addi     r3, r29, 0x10
	li       r4, -1
	bl       __dt__Q28PSSystem6SeqMgrFv
	extsh.   r0, r30
	ble      lbl_803416F4
	mr       r3, r29
	bl       __dl__FPv

lbl_803416F4:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	80341714
 * Size:	0000BC
 */
void Scene::adaptChildScene(PSSystem::Scene*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80341750
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x6d
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341750:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_80341778
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x6e
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341778:
	stw      r31, 4(r30)
	mr       r3, r31
	addi     r4, r30, 4
	bl       adaptTo__Q28PSSystem5SceneFPPQ28PSSystem5Scene
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_803417B0
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x71
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803417B0:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	stw      r31, 8(r3)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803417D0
 * Size:	000070
 */
void Scene::adaptTo(PSSystem::Scene**)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_80341814
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x7f
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341814:
	bl       OSDisableInterrupts
	stw      r31, 0xc(r30)
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	bl       refreshCurEndScene__Q28PSSystem8SceneMgrFv
	bl       OSEnableInterrupts
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341840
 * Size:	000058
 */
void Scene::detach()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r31)
	cmplwi   r3, 0
	beq      lbl_80341878
	lwz      r0, 0(r3)
	cmplw    r0, r31
	bne      lbl_80341878
	li       r0, 0
	stw      r0, 0(r3)

lbl_80341878:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	bl       refreshCurEndScene__Q28PSSystem8SceneMgrFv
	bl       OSEnableInterrupts
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341898
 * Size:	000060
 */
void Scene::appendSeq(PSSystem::SeqBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803418D4
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x92
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803418D4:
	mr       r4, r31
	addi     r3, r30, 0x10
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803418F8
 * Size:	00003C
 */
void Scene::startMainSeq()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80341924
	lwz      r3, 0(r3)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80341924:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341934
 * Size:	00003C
 */
void Scene::stopMainSeq(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80341960
	lwz      r3, 0(r3)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80341960:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341970
 * Size:	000024
 */
void Scene::stopAllSound(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x10
	stw      r0, 0x14(r1)
	bl       stopAllSound__Q28PSSystem6SeqMgrFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341994
 * Size:	000088
 */
void Scene::scene1st(PSSystem::TaskChecker*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 8(r3)
	cmplwi   r31, 0
	beq      lbl_803419F4
	mr       r3, r31
	li       r5, 0
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803419F4:
	mr       r4, r30
	addi     r3, r29, 0x10
	bl       scene1st__Q28PSSystem6SeqMgrFPQ28PSSystem11TaskChecker
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
 * Address:	80341A1C
 * Size:	00005C
 */
void Scene::scene1stLoadSync()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       OSInitMutex
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x20(r1)
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80341A58:
	lbz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_80341A58
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341A78
 * Size:	00004C
 */
void Scene::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x10
	bl       exec__Q28PSSystem6SeqMgrFv
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_80341AB0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80341AB0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341AC4
 * Size:	000034
 */
void SceneMgr::refreshCurEndScene()
{
	/*
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	bne      lbl_80341AE4
	li       r0, 0
	stw      r0, 8(r3)
	blr
	b        lbl_80341AE4

lbl_80341AE0:
	mr       r4, r0

lbl_80341AE4:
	lwz      r0, 4(r4)
	cmplwi   r0, 0
	bne      lbl_80341AE0
	stw      r4, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341AF8
 * Size:	000154
 */
void SceneMgr::findSeq(JASTrack*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_80490120@ha
	lwz      r0, 4(r29)
	addi     r31, r3, lbl_80490120@l
	cmplwi   r0, 0
	bne      lbl_80341B40
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341B40:
	lwz      r3, 4(r29)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80341C00
	cmplwi   r3, 0
	bne      lbl_80341B6C
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341B6C:
	lwz      r3, 4(r29)
	mr       r4, r30
	lwz      r3, 4(r3)
	addi     r3, r3, 0x10
	bl       findSeq__Q28PSSystem6SeqMgrFP8JASTrack
	cmplwi   r3, 0
	beq      lbl_80341B8C
	b        lbl_80341C30

lbl_80341B8C:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80341BAC
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341BAC:
	lwz      r4, 4(r29)
	lwz      r3, 4(r4)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80341C00
	cmplwi   r4, 0
	bne      lbl_80341BDC
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341BDC:
	lwz      r3, 4(r29)
	mr       r4, r30
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	addi     r3, r3, 0x10
	bl       findSeq__Q28PSSystem6SeqMgrFP8JASTrack
	cmplwi   r3, 0
	beq      lbl_80341C00
	b        lbl_80341C30

lbl_80341C00:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80341C20
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x148
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341C20:
	lwz      r3, 4(r29)
	mr       r4, r30
	addi     r3, r3, 0x10
	bl       findSeq__Q28PSSystem6SeqMgrFP8JASTrack

lbl_80341C30:
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
 * Address:	80341C4C
 * Size:	000154
 */
void SceneMgr::getPlayingSeq(JASTrack*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_80490120@ha
	lwz      r0, 4(r29)
	addi     r31, r3, lbl_80490120@l
	cmplwi   r0, 0
	bne      lbl_80341C94
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341C94:
	lwz      r3, 4(r29)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80341D54
	cmplwi   r3, 0
	bne      lbl_80341CC0
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341CC0:
	lwz      r3, 4(r29)
	mr       r4, r30
	lwz      r3, 4(r3)
	addi     r3, r3, 0x10
	bl       getPlayingSeq__Q28PSSystem6SeqMgrFP8JASTrack
	cmplwi   r3, 0
	beq      lbl_80341CE0
	b        lbl_80341D84

lbl_80341CE0:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80341D00
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341D00:
	lwz      r4, 4(r29)
	lwz      r3, 4(r4)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80341D54
	cmplwi   r4, 0
	bne      lbl_80341D30
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341D30:
	lwz      r3, 4(r29)
	mr       r4, r30
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	addi     r3, r3, 0x10
	bl       getPlayingSeq__Q28PSSystem6SeqMgrFP8JASTrack
	cmplwi   r3, 0
	beq      lbl_80341D54
	b        lbl_80341D84

lbl_80341D54:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80341D74
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x15d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341D74:
	lwz      r3, 4(r29)
	mr       r4, r30
	addi     r3, r3, 0x10
	bl       getPlayingSeq__Q28PSSystem6SeqMgrFP8JASTrack

lbl_80341D84:
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
 * Address:	80341DA0
 * Size:	000440
 */
void SceneMgr::deleteScene(PSSystem::Scene*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r29, r4, r4
	lis      r4, lbl_80490120@ha
	mr       r28, r3
	addi     r31, r4, lbl_80490120@l
	bne      lbl_80341DD8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341DD8:
	lwz      r30, 4(r29)
	cmplwi   r30, 0
	beq      lbl_803420CC
	bne      lbl_80341DFC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341DFC:
	lwz      r27, 4(r30)
	cmplwi   r27, 0
	beq      lbl_80341FC0
	bne      lbl_80341E20
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341E20:
	lwz      r26, 4(r27)
	cmplwi   r26, 0
	beq      lbl_80341EEC
	bne      lbl_80341E44
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341E44:
	mr       r3, r26
	bl       getChildScene__Q28PSSystem5SceneFv
	or.      r4, r3, r3
	beq      lbl_80341E5C
	mr       r3, r28
	bl       deleteScene__Q28PSSystem8SceneMgrFPQ28PSSystem5Scene

lbl_80341E5C:
	mr       r3, r26
	li       r4, 0xa
	lwz      r12, 0(r26)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	b        lbl_80341E8C

lbl_80341E7C:
	bl       PSGetSystemIF__Fv
	mr       r4, r28
	bl       stopAllSe__8JAIBasicFUc
	addi     r28, r28, 1

lbl_80341E8C:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r28, 0x18
	cmplw    r0, r3
	blt      lbl_80341E7C
	b        lbl_80341EB0

lbl_80341EA4:
	bl       PSGetSystemIFA__Fv
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80341EB0:
	mr       r3, r26
	bl       getSeqMgr__Q28PSSystem5SceneFv
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80341EA4
	mr       r3, r26
	bl       detach__Q28PSSystem5SceneFv
	cmplwi   r26, 0
	beq      lbl_80341EEC
	mr       r3, r26
	li       r4, 1
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80341EEC:
	mr       r3, r27
	li       r4, 0xa
	lwz      r12, 0(r27)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	b        lbl_80341F1C

lbl_80341F0C:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mr       r4, r28
	bl       stopAllSe__8JAIBasicFUc
	addi     r28, r28, 1

lbl_80341F1C:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r28, 0x18
	cmplw    r0, r3
	blt      lbl_80341F0C
	b        lbl_80341F60

lbl_80341F34:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80341F54
	addi     r3, r31, 0x24
	addi     r5, r31, 0xc
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341F54:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80341F60:
	addi     r3, r27, 0x10
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80341F34
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r27)
	cmplwi   r3, 0
	beq      lbl_80341F94
	lwz      r0, 0(r3)
	cmplw    r0, r27
	bne      lbl_80341F94
	li       r0, 0
	stw      r0, 0(r3)

lbl_80341F94:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	bl       refreshCurEndScene__Q28PSSystem8SceneMgrFv
	bl       OSEnableInterrupts
	cmplwi   r27, 0
	beq      lbl_80341FC0
	mr       r3, r27
	li       r4, 1
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80341FC0:
	mr       r3, r30
	li       r4, 0xa
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	b        lbl_80341FF0

lbl_80341FE0:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mr       r4, r28
	bl       stopAllSe__8JAIBasicFUc
	addi     r28, r28, 1

lbl_80341FF0:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r28, 0x18
	cmplw    r0, r3
	blt      lbl_80341FE0
	b        lbl_80342034

lbl_80342008:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80342028
	addi     r3, r31, 0x24
	addi     r5, r31, 0xc
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342028:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80342034:
	addi     r3, r30, 0x10
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80342008
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r30)
	cmplwi   r3, 0
	beq      lbl_80342068
	lwz      r0, 0(r3)
	cmplw    r0, r30
	bne      lbl_80342068
	li       r0, 0
	stw      r0, 0(r3)

lbl_80342068:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r28, 4(r26)
	cmplwi   r28, 0
	bne      lbl_80342094
	li       r0, 0
	stw      r0, 8(r26)
	b        lbl_803420A8
	b        lbl_80342094

lbl_80342088:
	mr       r3, r28
	bl       getChildScene__Q28PSSystem5SceneFv
	mr       r28, r3

lbl_80342094:
	mr       r3, r28
	bl       getChildScene__Q28PSSystem5SceneFv
	cmplwi   r3, 0
	bne      lbl_80342088
	stw      r28, 8(r26)

lbl_803420A8:
	bl       OSEnableInterrupts
	cmplwi   r30, 0
	beq      lbl_803420CC
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803420CC:
	mr       r3, r29
	li       r4, 0xa
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r26, 0
	b        lbl_803420FC

lbl_803420EC:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mr       r4, r26
	bl       stopAllSe__8JAIBasicFUc
	addi     r26, r26, 1

lbl_803420FC:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r26, 0x18
	cmplw    r0, r3
	blt      lbl_803420EC
	b        lbl_80342140

lbl_80342114:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80342134
	addi     r3, r31, 0x24
	addi     r5, r31, 0xc
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342134:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80342140:
	addi     r3, r29, 0x10
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80342114
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r29)
	cmplwi   r3, 0
	beq      lbl_80342174
	lwz      r0, 0(r3)
	cmplw    r0, r29
	bne      lbl_80342174
	li       r0, 0
	stw      r0, 0(r3)

lbl_80342174:
	lwz      r4, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r3, 4(r4)
	cmplwi   r3, 0
	bne      lbl_80342198
	li       r0, 0
	stw      r0, 8(r4)
	b        lbl_803421A8
	b        lbl_80342198

lbl_80342194:
	mr       r3, r0

lbl_80342198:
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80342194
	stw      r3, 8(r4)

lbl_803421A8:
	bl       OSEnableInterrupts
	cmplwi   r29, 0
	beq      lbl_803421CC
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803421CC:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803421E0
 * Size:	000068
 */
void SceneMgr::deleteCurrentScene()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8034221C
	lis      r3, lbl_80490120@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490120@l
	li       r4, 0x18d
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034221C:
	lwz      r3, 4(r31)
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	beq      lbl_80342234
	mr       r3, r31
	bl       deleteScene__Q28PSSystem8SceneMgrFPQ28PSSystem5Scene

lbl_80342234:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342248
 * Size:	000008
 */
void Scene::getSeqMgr()
{
	/*
	addi     r3, r3, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342250
 * Size:	000008
 */
void Scene::getChildScene()
{
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

} // namespace PSSystem

/*
 * --INFO--
 * Address:	80342258
 * Size:	000048
 */
void PSGetSystemIFA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8034228C
	lis      r3, lbl_80490144@ha
	lis      r5, lbl_8049012C@ha
	addi     r3, r3, lbl_80490144@l
	li       r4, 0x18b
	addi     r5, r5, lbl_8049012C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034228C:
	lwz      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803422A0
 * Size:	000008
 */
void PSGetSystemIF()
{
	/*
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	blr
	*/
}
