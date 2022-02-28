#include "Game/MoviePlayer.h"
#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_moviePlayer_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499F10
    lbl_80499F10:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6D6F7669
        .4byte 0x65506C61
        .4byte 0x79657200
    .global lbl_80499F28
    lbl_80499F28:
        .4byte 0x6D6F7669
        .4byte 0x65506C61
        .4byte 0x7965722E
        .4byte 0x63707000
    .global lbl_80499F38
    lbl_80499F38:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x2A2A2A2A
        .4byte 0x2A2A2A20
        .4byte 0x819A834C
        .4byte 0x8385815B
        .4byte 0x82C982CD
        .4byte 0x82A282E8
        .4byte 0x82AB82E7
        .4byte 0x82F182E6
        .4byte 0x81608149
        .4byte 0x81490A00
        .4byte 0x2F757365
        .4byte 0x722F4D75
        .4byte 0x6B6B692F
        .4byte 0x6D6F7669
        .4byte 0x652F2573
        .4byte 0x2F64656D
        .4byte 0x6F2E7374
        .4byte 0x62000000
        .4byte 0x2F757365
        .4byte 0x722F4D75
        .4byte 0x6B6B692F
        .4byte 0x6D6F7669
        .4byte 0x652F2573
        .4byte 0x2F64656D
        .4byte 0x6F2E737A
        .4byte 0x73000000
        .4byte 0x6D6F7669
        .4byte 0x65506C3A
        .4byte 0x706C6179
        .4byte 0x00000000
        .4byte 0x54686520
        .4byte 0x42696B6B
        .4byte 0x7572690A
        .4byte 0x00000000
        .4byte 0x5B515545
        .4byte 0x5F464149
        .4byte 0x4C45445D
        .4byte 0x2025730A
        .4byte 0x00000000
        .4byte 0x20834C83
        .4byte 0x85815B82
        .4byte 0xC982C882
        .4byte 0xC982E082
        .4byte 0xC882A282
        .4byte 0xBC815B81
        .4byte 0x5B28545E
        .4byte 0x54290A00
        .4byte 0x4F626A65
        .4byte 0x63745379
        .4byte 0x7374656D
        .4byte 0x00000000
        .4byte 0x6D6F7669
        .4byte 0x65526573
        .4byte 0x6F757263
        .4byte 0x65000000
        .4byte 0x64656D6F
        .4byte 0x2E737462
        .4byte 0x00000000
        .4byte 0x82DC82C0
        .4byte 0x82A98297
        .4byte 0x0A000000
        .4byte 0x64656D6F
        .4byte 0x2E737A73
        .4byte 0x2082AA82
        .4byte 0xC882A282
        .4byte 0xC682BE82
        .4byte 0xDF82BE82
        .4byte 0xE682970A
        .4byte 0x00000000
        .4byte 0x7265736F
        .4byte 0x75726365
        .4byte 0x206F7065
        .4byte 0x6E206661
        .4byte 0x696C6564
        .4byte 0x210A0000
        .4byte 0x4A537475
        .4byte 0x64696F3A
        .4byte 0x3A545061
        .4byte 0x72736500
    .global lbl_8049A080
    lbl_8049A080:
        .4byte 0x8366815B
        .4byte 0x835E82F0
        .4byte 0x89F08EDF
        .4byte 0x82C582AB
        .4byte 0x82DC82B5
        .4byte 0x82A582F1
        .4byte 0x0A000000
        .4byte 0x6D6F7669
        .4byte 0x65506C3A
        .4byte 0x6C6F6164
        .4byte 0x646F6E65
        .4byte 0x00000000
        .4byte 0x6D6F7669
        .4byte 0x65506C3A
        .4byte 0x646F6E65
        .4byte 0x63616C6C
        .4byte 0x00000000
    .global lbl_8049A0C4
    lbl_8049A0C4:
        .4byte 0x63757272
        .4byte 0x3D256420
        .4byte 0x696E6974
        .4byte 0x3D256420
        .4byte 0x66726565
        .4byte 0x20696E76
        .4byte 0x616C6964
        .4byte 0x0A000000
        .4byte 0x4D794361
        .4byte 0x6D657261
        .4byte 0x00000000
    .global lbl_8049A0F0
    lbl_8049A0F0:
        .4byte 0x6D6F7669
        .4byte 0x65506C3A
        .4byte 0x756E7375
        .4byte 0x7370656E
        .4byte 0x64000000
    .global lbl_8049A104
    lbl_8049A104:
        .4byte 0x6D6F7669
        .4byte 0x65506C3A
        .4byte 0x6733332F
        .4byte 0x73757370
        .4byte 0x00000000
    .global lbl_8049A118
    lbl_8049A118:
        .4byte 0x6D6F7669
        .4byte 0x65506C3A
        .4byte 0x736B6970
        .4byte 0x00000000
        .4byte 0x3C737573
        .4byte 0x70656E64
        .4byte 0x3E000000
        .4byte 0x6672616D
        .4byte 0x65202534
        .4byte 0x64000000
        .4byte 0x75736520
        .4byte 0x20252E31
        .4byte 0x664B0000
        .4byte 0x68656170
        .4byte 0x20252E31
        .4byte 0x664B0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBFB0
    lbl_804EBFB0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804EBFBC
    lbl_804EBFBC:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadResource__Q24Game11MoviePlayerFv
    .global lbl_804EBFC8
    lbl_804EBFC8:
        .4byte lbl_8042D6B0
        .4byte lbl_8042D6B8
        .4byte lbl_8042D734
        .4byte lbl_8042D894
        .4byte lbl_8042D8A0
        .4byte lbl_8042D8AC
        .4byte lbl_8042D8B8
        .4byte lbl_8042DB64
    .global __vt__Q24Game12MovieContext
    __vt__Q24Game12MovieContext:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game12MovieContextFv
        .4byte getChildCount__5CNodeFv
        .4byte getChild__Q24Game12MovieContextFv
        .4byte getNext__Q24Game12MovieContextFv
    .global "__vt__30Delegate<Q24Game11MoviePlayer>"
    "__vt__30Delegate<Q24Game11MoviePlayer>":
        .4byte 0
        .4byte 0
        .4byte "invoke__30Delegate<Q24Game11MoviePlayer>Fv"
    .global __vt__Q24Game11MoviePlayer
    __vt__Q24Game11MoviePlayer:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11MoviePlayerFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805161C8
    lbl_805161C8:
        .skip 0x4
    .global lbl_805161CC
    lbl_805161CC:
        .skip 0x4
    .global mArchive__Q24Game11MoviePlayer
    mArchive__Q24Game11MoviePlayer:
        .skip 0x4
    .global moviePlayer__4Game
    moviePlayer__4Game:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520610
    lbl_80520610:
        .4byte 0x00000000
    .global lbl_80520614
    lbl_80520614:
        .4byte 0x42652EE0
    .global lbl_80520618
    lbl_80520618:
        .4byte 0x437A0000
    .global lbl_8052061C
    lbl_8052061C:
        .4byte 0x3EDF66F4
    .global lbl_80520620
    lbl_80520620:
        .float 0.5
        .4byte 0x00000000
    .global lbl_80520628
    lbl_80520628:
        .4byte 0x3FA11111
        .4byte 0x20000000
    .global lbl_80520630
    lbl_80520630:
        .4byte 0x61726300
    .global lbl_80520634
    lbl_80520634:
        .4byte 0x6D657373
        .4byte 0x61676500
    .global lbl_8052063C
    lbl_8052063C:
        .4byte 0x6566782E
        .4byte 0x6A706300
    .global lbl_80520644
    lbl_80520644:
        .4byte 0x73746200
    .global lbl_80520648
    lbl_80520648:
        .4byte 0x3F8CCCCD
    .global lbl_8052064C
    lbl_8052064C:
        .float 1.0
    .global lbl_80520650
    lbl_80520650:
        .4byte 0x41200000
    .global lbl_80520654
    lbl_80520654:
        .4byte 0x40000000
    .global lbl_80520658
    lbl_80520658:
        .4byte 0x63616D65
        .4byte 0x72610000
    .global lbl_80520660
    lbl_80520660:
        .4byte 0x76696577
        .4byte 0x6D617400
    .global lbl_80520668
    lbl_80520668:
        .4byte 0x40490FDB
    .global lbl_8052066C
    lbl_8052066C:
        .4byte 0x3BB60B61
    .global lbl_80520670
    lbl_80520670:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8042C700
 * Size:	000150
 */
MoviePlayer::MoviePlayer(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q24Game11MoviePlayer@ha
	addi     r3, r31, 0x1c
	addi     r0, r4, __vt__Q24Game11MoviePlayer@l
	stw      r0, 0(r31)
	bl       __ct__16DvdThreadCommandFv
	addi     r3, r31, 0xcc
	bl       __ct__Q24Game12MovieContextFv
	addi     r3, r31, 0x128
	bl       __ct__Q24Game12MovieContextFv
	li       r0, 0
	lis      r4, 0x00060400@ha
	stw      r0, 0x1e4(r31)
	mr       r3, r31
	lfs      f0, lbl_80520610@sda21(r2)
	addi     r4, r4, 0x00060400@l
	stw      r0, 0x1e8(r31)
	stw      r0, 0x1ec(r31)
	stb      r0, 0x1f0(r31)
	stb      r0, 0x1f1(r31)
	stb      r0, 0x1f2(r31)
	stb      r0, 0x1f3(r31)
	stw      r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
	stfs     f0, 0x1bc(r31)
	stfs     f0, 0x1c0(r31)
	stfs     f0, 0x1c4(r31)
	stw      r0, 0x18c(r31)
	stw      r0, 0x190(r31)
	stw      r0, 0x19c(r31)
	stw      r0, 0x1a0(r31)
	stw      r0, 0x198(r31)
	stw      r0, 0x194(r31)
	stb      r0, 0x1f0(r31)
	stb      r0, 0x1f1(r31)
	stb      r0, 0x1f2(r31)
	stb      r0, 0x1f3(r31)
	stw      r0, 0xb0(r31)
	stw      r0, 0xb4(r31)
	stw      r0, 0xbc(r31)
	stw      r0, 0x1b0(r31)
	stw      r0, 0xb8(r31)
	stw      r0, 0xc0(r31)
	stw      r0, 0xc4(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1cc(r31)
	stw      r0, 0xac(r31)
	stw      r0, 0x1e4(r31)
	bl       allocMovieHeap__Q24Game11MoviePlayerFUl
	mr       r3, r31
	bl       allocContexts__Q24Game11MoviePlayerFv
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8042C834
	lis      r4, lbl_804EBFBC@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804EBFBC@l
	lis      r4, "__vt__30Delegate<Q24Game11MoviePlayer>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__30Delegate<Q24Game11MoviePlayer>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_8042C834:
	stw      r3, 0x1a4(r31)
	mr       r3, r31
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C850
 * Size:	000060
 */
MovieContext::~MovieContext(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8042C894
	lis      r5, __vt__Q24Game12MovieContext@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game12MovieContext@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8042C894
	mr       r3, r30
	bl       __dl__FPv

lbl_8042C894:
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
 * Address:	8042C8B0
 * Size:	00002C
 */
void MoviePlayer::reset(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042C8CC
	bl       stop__Q24Game11MoviePlayerFv

lbl_8042C8CC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C8DC
 * Size:	00001C
 */
void MoviePlayer::getActiveOrima(void)
{
	/*
	lwz      r0, 0x19c(r3)
	cmplwi   r0, 0
	beq      lbl_8042C8F0
	mr       r3, r0
	blr

lbl_8042C8F0:
	lwz      r3, 0x18c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C8F8
 * Size:	00001C
 */
void MoviePlayer::getActiveGameCamera(void)
{
	/*
	lwz      r0, 0x1a0(r3)
	cmplwi   r0, 0
	beq      lbl_8042C90C
	mr       r3, r0
	blr

lbl_8042C90C:
	lwz      r3, 0x190(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void MoviePlayer::setMovieHeap(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C914
 * Size:	0000BC
 */
void MoviePlayer::allocMovieHeap(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x1b0(r3)
	cmplwi   r0, 0
	beq      lbl_8042C95C
	lis      r3, lbl_80499F28@ha
	lis      r5, lbl_80499F38@ha
	addi     r3, r3, lbl_80499F28@l
	li       r4, 0x1ff
	addi     r5, r5, lbl_80499F38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042C95C:
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r31
	li       r5, 1
	mr       r4, r30
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	lwz      r0, 0x1b0(r29)
	mr       r31, r3
	cmplwi   r0, 0
	beq      lbl_8042C99C
	lis      r3, lbl_80499F28@ha
	lis      r5, lbl_80499F38@ha
	addi     r3, r3, lbl_80499F28@l
	li       r4, 0x1f5
	addi     r5, r5, lbl_80499F38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042C99C:
	stw      r31, 0x1b0(r29)
	mr       r3, r31
	bl       getTotalFreeSize__7JKRHeapFv
	stw      r3, 0x1b4(r29)
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
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
 * Address:	........
 * Size:	000038
 */
void MoviePlayer::clearMovieHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C9D0
 * Size:	000060
 */
void MoviePlayer::play(Game::MoviePlayArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0(r4)
	lwz      r5, 4(r31)
	bl       findConfig__Q24Game11MoviePlayerFPcPc
	or.      r4, r3, r3
	beq      lbl_8042CA14
	mr       r3, r30
	mr       r5, r31
	li       r6, 0
	bl play__Q24Game11MoviePlayerFPQ24Game11MovieConfigRQ24Game12MoviePlayArgb
	b        lbl_8042CA18

lbl_8042CA14:
	li       r3, 1

lbl_8042CA18:
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
 * Address:	8042CA30
 * Size:	00033C
 */
void MoviePlayer::play(Game::MovieConfig*, Game::MoviePlayArg&, bool)
{
	/*
	stwu     r1, -0x420(r1)
	mflr     r0
	lis      r7, lbl_80499F10@ha
	stw      r0, 0x424(r1)
	stmw     r27, 0x40c(r1)
	mr       r28, r3
	mr       r27, r4
	mr       r29, r5
	mr       r30, r6
	addi     r31, r7, lbl_80499F10@l
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042CAA4
	bl       getNewContext__Q24Game11MoviePlayerFv
	or.      r4, r3, r3
	bne      lbl_8042CA8C
	addi     r3, r31, 0x18
	addi     r5, r31, 0x34
	li       r4, 0x230
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 3
	b        lbl_8042CD58

lbl_8042CA8C:
	mr       r3, r28
	mr       r5, r27
	mr       r6, r29
	bl
setContext__Q24Game11MoviePlayerFPQ24Game12MovieContextPQ24Game11MovieConfigRQ24Game12MoviePlayArg
	li       r3, 2
	b        lbl_8042CD58

lbl_8042CAA4:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8042CAB4
	bl       stopFinalFloorSound__Q26Screen9Game2DMgrFv

lbl_8042CAB4:
	lwz      r0, 0x18c(r28)
	li       r4, 2
	stw      r0, 0x19c(r28)
	lwz      r0, 0x190(r28)
	stw      r0, 0x1a0(r28)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       controllerLock__Q24Game9CameraMgrFi
	mr       r3, r27
	bl       dump__Q24Game11MovieConfigFv
	stw      r27, 0xb0(r28)
	cmplwi   r27, 0
	lwz      r0, 0x28(r29)
	stw      r0, 0xb8(r28)
	bne      lbl_8042CB00
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0x252
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042CB00:
	addi     r3, r1, 0x208
	addi     r4, r31, 0x5c
	addi     r5, r27, 0x45
	crclr    6
	bl       sprintf
	addi     r3, r1, 8
	addi     r4, r31, 0x7c
	addi     r5, r27, 0x45
	crclr    6
	bl       sprintf
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x9c
	li       r4, 1
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	stb      r3, 0x88(r28)
	li       r3, 0
	stw      r3, 0xa8(r28)
	lwz      r4, 0xb0(r28)
	lbz      r5, 0x24(r4)
	clrlwi.  r0, r5, 0x1f
	bne      lbl_8042CC50
	rlwinm.  r0, r5, 0, 0x1d, 0x1d
	bne      lbl_8042CB68
	rlwinm.  r0, r5, 0, 0x1c, 0x1c
	beq      lbl_8042CB6C

lbl_8042CB68:
	li       r3, 1

lbl_8042CB6C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042CBF0
	lfs      f0, 0x18(r29)
	lfs      f1, lbl_80520614@sda21(r2)
	stfs     f0, 0x8c(r28)
	lfs      f0, 0x1c(r29)
	stfs     f0, 0x90(r28)
	lfs      f0, 0x20(r29)
	stfs     f0, 0x94(r28)
	lfs      f0, 0x24(r29)
	fmuls    f0, f1, f0
	stfs     f0, 0x98(r28)
	lwz      r3, 0xb0(r28)
	lbz      r0, 0x24(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8042CC50
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8042CBCC
	addi     r3, r31, 0x18
	addi     r5, r31, 0xac
	li       r4, 0x261
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042CBCC:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r28, 0x8c
	lfs      f1, lbl_80520618@sda21(r2)
	lfs      f2, lbl_8052061C@sda21(r2)
	bl       "getBestAngle__Q24Game6MapMgrFR10Vector3<f>ff"
	lfs      f0, lbl_80520614@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x98(r28)
	b        lbl_8042CC50

lbl_8042CBF0:
	rlwinm.  r0, r5, 0, 0x1b, 0x1b
	beq      lbl_8042CC2C
	lfs      f0, 0x18(r29)
	lfs      f1, lbl_80520614@sda21(r2)
	stfs     f0, 0x8c(r28)
	lfs      f0, 0x1c(r29)
	stfs     f0, 0x90(r28)
	lfs      f0, 0x20(r29)
	stfs     f0, 0x94(r28)
	lfs      f0, 0x24(r29)
	fmuls    f0, f1, f0
	stfs     f0, 0x98(r28)
	lwz      r0, 0x30(r29)
	stw      r0, 0xa8(r28)
	b        lbl_8042CC50

lbl_8042CC2C:
	lfs      f0, 0xa4(r4)
	stfs     f0, 0x8c(r28)
	lfs      f0, 0xa8(r4)
	stfs     f0, 0x90(r28)
	lfs      f0, 0xac(r4)
	stfs     f0, 0x94(r28)
	lwz      r3, 0xb0(r28)
	lfs      f0, 0xb0(r3)
	stfs     f0, 0x98(r28)

lbl_8042CC50:
	lwz      r3, 0x1f0(r28)
	clrlwi.  r0, r30, 0x18
	li       r0, 1
	rlwinm   r3, r3, 0, 0x1f, 0x1d
	stw      r3, 0x1f0(r28)
	lwz      r3, 0x1f0(r28)
	ori      r3, r3, 1
	stw      r3, 0x1f0(r28)
	lwz      r3, 0x1f0(r28)
	clrlwi   r3, r3, 1
	stw      r3, 0x1f0(r28)
	lwz      r3, 0xc(r29)
	stw      r3, 0xb4(r28)
	lwz      r3, 0x10(r29)
	stw      r3, 0xbc(r28)
	lwz      r3, 8(r29)
	stw      r3, 0xc0(r28)
	lwz      r3, 0x2c(r29)
	stw      r3, 0xc4(r28)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	stb      r0, 0x92(r3)
	bne      lbl_8042CD34
	lwz      r3, 0xb0(r28)
	lhz      r0, 0xc0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042CD34
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_8042CD08
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042CD08
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80520610@sda21(r2)
	stfs     f0, 0xa0(r28)
	b        lbl_8042CD28

lbl_8042CD08:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f1, lbl_80520620@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80520620@sda21(r2)
	stfs     f0, 0xa0(r28)

lbl_8042CD28:
	li       r0, 1
	stw      r0, 0x18(r28)
	b        lbl_8042CD54

lbl_8042CD34:
	lwz      r3, sys@sda21(r13)
	addi     r4, r28, 0x1c
	lwz      r5, 0x1a4(r28)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	li       r0, 2
	lfs      f0, lbl_80520610@sda21(r2)
	stw      r0, 0x18(r28)
	stfs     f0, 0xa0(r28)

lbl_8042CD54:
	li       r3, 0

lbl_8042CD58:
	lmw      r27, 0x40c(r1)
	lwz      r0, 0x424(r1)
	mtlr     r0
	addi     r1, r1, 0x420
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void MoviePlayer::doStartMovie(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042CD6C
 * Size:	000024
 */
void MoviePlayer::findConfig(char*, char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, movieList__4Game@sda21(r13)
	bl       findConfig__Q24Game9MovieListFPcPc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042CD90
 * Size:	0000B0
 */
MovieContext::MovieContext(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game12MovieContext@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game12MovieContext@l
	lfs      f0, lbl_80520610@sda21(r2)
	stw      r3, 0(r31)
	mr       r3, r31
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x24(r31)
	stw      r0, 0x28(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x34(r31)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stw      r0, 0x40(r31)
	stw      r0, 0x20(r31)
	stw      r0, 0x44(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x48(r31)
	stw      r0, 0x4c(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x24(r31)
	stw      r0, 0x28(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x34(r31)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stw      r0, 0x40(r31)
	stw      r0, 0x20(r31)
	stw      r0, 0x44(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x48(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042CE40
 * Size:	00009C
 */
void MoviePlayer::allocContexts(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 8
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r0, 0x188(r3)
	li       r0, 0
	stw      r0, 0x184(r3)
	lwz      r31, 0x188(r3)
	mulli    r3, r31, 0x5c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game12MovieContextFv@ha
	lis      r5, __dt__Q24Game12MovieContextFv@ha
	addi     r4, r4, __ct__Q24Game12MovieContextFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q24Game12MovieContextFv@l
	li       r6, 0x5c
	bl       __construct_new_array
	stw      r3, 0xc8(r30)
	li       r0, 0
	mr       r3, r30
	stw      r0, 0xdc(r30)
	stw      r0, 0xd8(r30)
	stw      r0, 0xd4(r30)
	stw      r0, 0xd0(r30)
	stw      r0, 0x138(r30)
	stw      r0, 0x134(r30)
	stw      r0, 0x130(r30)
	stw      r0, 0x12c(r30)
	bl       clearContexts__Q24Game11MoviePlayerFv
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
 * Address:	8042CEDC
 * Size:	0000AC
 */
void MoviePlayer::clearContexts(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r31
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r31, 0xdc(r3)
	stw      r31, 0xd8(r3)
	stw      r31, 0xd4(r3)
	stw      r31, 0xd0(r3)
	stw      r31, 0x138(r3)
	stw      r31, 0x134(r3)
	stw      r31, 0x130(r3)
	stw      r31, 0x12c(r3)
	b        lbl_8042CF54

lbl_8042CF2C:
	lwz      r0, 0xc8(r28)
	addi     r3, r28, 0x128
	add      r4, r0, r30
	stw      r31, 0x10(r4)
	stw      r31, 0xc(r4)
	stw      r31, 8(r4)
	stw      r31, 4(r4)
	bl       add__5CNodeFP5CNode
	addi     r30, r30, 0x5c
	addi     r29, r29, 1

lbl_8042CF54:
	lwz      r0, 0x188(r28)
	cmpw     r29, r0
	blt      lbl_8042CF2C
	li       r0, 0
	stw      r0, 0x184(r28)
	lwz      r0, 0x24(r1)
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
 * Address:	........
 * Size:	0000F0
 */
void MoviePlayer::playSuspended(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042CF88
 * Size:	0000AC
 */
void MoviePlayer::clearSuspendedDemo(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r31
	stw      r29, 0x14(r1)
	mr       r29, r31
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r31, 0xdc(r3)
	stw      r31, 0xd8(r3)
	stw      r31, 0xd4(r3)
	stw      r31, 0xd0(r3)
	stw      r31, 0x138(r3)
	stw      r31, 0x134(r3)
	stw      r31, 0x130(r3)
	stw      r31, 0x12c(r3)
	b        lbl_8042D000

lbl_8042CFD8:
	lwz      r0, 0xc8(r28)
	addi     r3, r28, 0x128
	add      r4, r0, r29
	stw      r31, 0x10(r4)
	stw      r31, 0xc(r4)
	stw      r31, 8(r4)
	stw      r31, 4(r4)
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 0x5c
	addi     r30, r30, 1

lbl_8042D000:
	lwz      r0, 0x188(r28)
	cmpw     r30, r0
	blt      lbl_8042CFD8
	li       r0, 0
	stw      r0, 0x184(r28)
	lwz      r0, 0x24(r1)
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
 * Address:	........
 * Size:	000020
 */
void MoviePlayer::hasSuspendedDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042D034
 * Size:	00006C
 */
void MoviePlayer::getNewContext(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x128
	lwz      r12, 0x128(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8042D084
	bl       del__5CNodeFv
	mr       r4, r31
	addi     r3, r30, 0xcc
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x184(r30)
	addi     r0, r3, 1
	stw      r0, 0x184(r30)

lbl_8042D084:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042D0A0
 * Size:	000008
 */
void MovieContext::getChild(void)
{
	/*
	lwz      r3, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void MoviePlayer::hasSuspendedContext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void MoviePlayer::getSuspendedContext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042D0A8
 * Size:	000088
 */
void MoviePlayer::setContext(Game::MovieContext*, Game::MovieConfig*, Game::MoviePlayArg&)
{
	/*
	.loc_0x0:
	  stw       r5, 0x4C(r4)
	  lwz       r0, 0x18C(r3)
	  stw       r0, 0x50(r4)
	  lwz       r0, 0x194(r3)
	  stw       r0, 0x54(r4)
	  lwz       r0, 0x190(r3)
	  stw       r0, 0x58(r4)
	  lwz       r0, 0x0(r6)
	  stw       r0, 0x18(r4)
	  lwz       r0, 0x4(r6)
	  stw       r0, 0x1C(r4)
	  lwz       r0, 0x8(r6)
	  stw       r0, 0x20(r4)
	  lwz       r0, 0xC(r6)
	  stw       r0, 0x24(r4)
	  lwz       r0, 0x10(r6)
	  stw       r0, 0x28(r4)
	  lwz       r0, 0x14(r6)
	  stw       r0, 0x2C(r4)
	  lfs       f0, 0x18(r6)
	  stfs      f0, 0x30(r4)
	  lfs       f0, 0x1C(r6)
	  stfs      f0, 0x34(r4)
	  lfs       f0, 0x20(r6)
	  stfs      f0, 0x38(r4)
	  lfs       f0, 0x24(r6)
	  stfs      f0, 0x3C(r4)
	  lwz       r0, 0x28(r6)
	  stw       r0, 0x40(r4)
	  lwz       r0, 0x2C(r6)
	  stw       r0, 0x44(r4)
	  lwz       r0, 0x30(r6)
	  stw       r0, 0x48(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042D130
 * Size:	000478
 */
void MoviePlayer::loadResource(void)
{
	/*
	stwu     r1, -0x250(r1)
	mflr     r0
	stw      r0, 0x254(r1)
	stw      r31, 0x24c(r1)
	mr       r31, r3
	lis      r3, lbl_80499F10@ha
	stw      r30, 0x248(r1)
	addi     r30, r3, lbl_80499F10@l
	addi     r3, r1, 0x138
	stw      r29, 0x244(r1)
	addi     r4, r30, 0x5c
	lwz      r5, 0xb0(r31)
	addi     r5, r5, 0x45
	crclr    6
	bl       sprintf
	lwz      r5, 0xb0(r31)
	addi     r3, r1, 0x38
	addi     r4, r30, 0x7c
	addi     r5, r5, 0x45
	crclr    6
	bl       sprintf
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x1b0(r31)
	bl       startChangeCurrentHeap__6SystemFP7JKRHeap
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042D1A8
	bl       __ct__Q23PSM4DemoFv
	mr       r0, r3

lbl_8042D1A8:
	stw      r0, 0xac(r31)
	li       r3, 0x30
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042D1CC
	mr       r5, r31
	addi     r4, r30, 0xf0
	bl       __ct__Q34Game5P2JST12ObjectSystemFPCcPQ24Game11MoviePlayer
	mr       r0, r3

lbl_8042D1CC:
	stw      r0, 0x1cc(r31)
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042D1E8
	bl       __ct__Q35P2JME5Movie8TControlFv
	mr       r0, r3

lbl_8042D1E8:
	stw      r0, 0x1e4(r31)
	li       r3, 0x10
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8042D234
	lis      r3, __vt__Q27JStudio13TCreateObject@ha
	lwz      r6, 0x1e4(r31)
	addi     r0, r3, __vt__Q27JStudio13TCreateObject@l
	lis      r4, __vt__Q216JStudio_JMessage18TCreateObject_base@ha
	stw      r0, 0(r29)
	li       r5, 0
	lis      r3, __vt__Q216JStudio_JMessage13TCreateObject@ha
	addi     r4, r4, __vt__Q216JStudio_JMessage18TCreateObject_base@l
	stw      r5, 4(r29)
	addi     r0, r3, __vt__Q216JStudio_JMessage13TCreateObject@l
	stw      r5, 8(r29)
	stw      r4, 0(r29)
	stw      r0, 0(r29)
	stw      r6, 0xc(r29)

lbl_8042D234:
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8042D270
	lis      r4, __vt__Q27JStudio13TCreateObject@ha
	lwz      r6, 0x1cc(r31)
	addi     r0, r4, __vt__Q27JStudio13TCreateObject@l
	lis      r4, __vt__Q214JStudio_JStage13TCreateObject@ha
	stw      r0, 0(r3)
	li       r5, 0
	addi     r0, r4, __vt__Q214JStudio_JStage13TCreateObject@l
	stw      r5, 4(r3)
	stw      r5, 8(r3)
	stw      r0, 0(r3)
	stw      r6, 0xc(r3)

lbl_8042D270:
	stw      r3, 0x1d8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8042D2C4
	lis      r4, __vt__Q37JStudio3stb8TFactory@ha
	lis      r5, __vt__Q27JStudio8TFactory@ha
	addi     r0, r4, __vt__Q37JStudio3stb8TFactory@l
	lis      r4, __vt__Q37JStudio3fvb8TFactory@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__Q27JStudio8TFactory@l
	li       r6, 0
	addi     r5, r3, 8
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q37JStudio3fvb8TFactory@l
	stw      r6, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 4(r3)
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	stw      r0, 0x10(r3)

lbl_8042D2C4:
	stw      r3, 0x1d4(r31)
	lwz      r3, 0x1d4(r31)
	lwz      r4, 0x1d8(r31)
	bl       appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
	lwz      r3, 0x1d4(r31)
	mr       r4, r29
	bl       appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8042D328
	lwz      r6, particleMgr@sda21(r13)
	lis      r5, __vt__Q27JStudio13TCreateObject@ha
	lis      r4, __vt__Q217JStudio_JParticle13TCreateObject@ha
	lwz      r8, 0x1cc(r31)
	lwz      r7, 0x98(r6)
	addi     r6, r5, __vt__Q27JStudio13TCreateObject@l
	li       r5, 0
	addi     r0, r4, __vt__Q217JStudio_JParticle13TCreateObject@l
	stw      r6, 0(r3)
	stw      r5, 4(r3)
	stw      r5, 8(r3)
	stw      r0, 0(r3)
	stw      r7, 0xc(r3)
	stw      r8, 0x10(r3)

lbl_8042D328:
	stw      r3, 0x1dc(r31)
	lwz      r3, 0x1d4(r31)
	lwz      r4, 0x1dc(r31)
	bl       appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
	lwz      r29, spSysIF__8PSSystem@sda21(r13)
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042D35C
	lwz      r5, 0x1cc(r31)
	mr       r4, r29
	bl       __ct__27Pikmin_TCreateObject_JAudioFP8JAIBasicPCQ26JStage7TSystem
	mr       r0, r3

lbl_8042D35C:
	stw      r0, 0x1e0(r31)
	lwz      r3, 0x1d4(r31)
	lwz      r4, 0x1e0(r31)
	bl       appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
	li       r3, 0xf8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042D384
	bl       __ct__Q27JStudio8TControlFv
	mr       r0, r3

lbl_8042D384:
	stw      r0, 0x1d0(r31)
	lwz      r4, 0x1d4(r31)
	lwz      r3, 0x1d0(r31)
	cmplwi   r4, 0
	bne      lbl_8042D3A0
	li       r0, 0
	b        lbl_8042D3A4

lbl_8042D3A0:
	addi     r0, r4, 0x10

lbl_8042D3A4:
	stw      r4, 0xc(r3)
	addi     r4, r30, 0x100
	lfd      f0, lbl_80520628@sda21(r2)
	li       r5, 0
	stw      r0, 0x64(r3)
	lwz      r3, 0x1d0(r31)
	stfd     f0, 0x58(r3)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520630@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 8
	addi     r4, r1, 0x38
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 0x20(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8042D408
	lwz      r0, 0x34(r3)
	b        lbl_8042D40C

lbl_8042D408:
	li       r0, 0

lbl_8042D40C:
	stw      r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
	lwz      r3, 0x1b0(r31)
	lwz      r4, 0x1b4(r31)
	bl       DCStoreRange
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520630@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520634@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 0x1e4(r31)
	bl       init__Q25P2JME8TControlFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520634@sda21
	bl       heapStatusEnd__6SystemFPc
	li       r0, 0
	stw      r0, 0x1f4(r31)
	lwz      r3, mArchive__Q24Game11MoviePlayer@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8042D4AC
	lwz      r12, 0(r3)
	addi     r4, r2, lbl_8052063C@sda21
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_8042D4AC
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042D49C
	lwz      r5, 0x1b0(r31)
	mr       r4, r29
	bl       __ct__18JPAResourceManagerFPCvP7JKRHeap
	mr       r0, r3

lbl_8042D49C:
	stw      r0, 0x1f4(r31)
	lwz      r3, particleMgr@sda21(r13)
	lwz      r4, 0x1f4(r31)
	bl       setDemoResourceManager__11ParticleMgrFP18JPAResourceManager

lbl_8042D4AC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520644@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, mArchive__Q24Game11MoviePlayer@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8042D504
	lwz      r12, 0(r3)
	addi     r4, r30, 0x110
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1ec(r31)
	lwz      r0, 0x1ec(r31)
	cmplwi   r0, 0
	bne      lbl_8042D518
	addi     r3, r30, 0x18
	addi     r5, r30, 0x11c
	li       r4, 0x3ba
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8042D518

lbl_8042D504:
	addi     r3, r30, 0x18
	addi     r5, r30, 0x128
	li       r4, 0x3bd
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042D518:
	lwz      r0, 0x1ec(r31)
	cmplwi   r0, 0
	bne      lbl_8042D538
	addi     r3, r30, 0x18
	addi     r5, r30, 0x148
	li       r4, 0x3c0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042D538:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520644@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x160
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	li       r4, 1
	bl       parse__Q24Game11MoviePlayerFb
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x160
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x100
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	bl       endChangeCurrentHeap__6SystemFv
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	bl       heapStatusDump__6SystemFb
	lwz      r0, 0x254(r1)
	lwz      r31, 0x24c(r1)
	lwz      r30, 0x248(r1)
	lwz      r29, 0x244(r1)
	mtlr     r0
	addi     r1, r1, 0x250
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget39TLinkList<JStudio::TCreateObject, -4> Fv(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	8042D5A8
 * Size:	0000C0
 */
void MoviePlayer::parse(bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r4, 0x1d0(r3)
	addi     r3, r1, 0xc
	bl       __ct__Q27JStudio6TParseFPQ27JStudio8TControl
	clrlwi.  r0, r31, 0x18
	li       r5, 0x30
	beq      lbl_8042D5E0
	li       r5, 0x40

lbl_8042D5E0:
	lwz      r0, 0x1ec(r30)
	addi     r3, r1, 0xc
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042D62C
	lis      r3, lbl_80499F28@ha
	lis      r5, lbl_8049A080@ha
	addi     r3, r3, lbl_80499F28@l
	li       r4, 0x3ec
	addi     r5, r5, lbl_8049A080@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	addi     r3, r1, 0xc
	li       r4, -1
	bl       __dt__Q27JStudio6TParseFv
	li       r3, 0
	b        lbl_8042D650

lbl_8042D62C:
	lwz      r3, 0x1cc(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0xc
	li       r4, -1
	bl       __dt__Q27JStudio6TParseFv
	li       r3, 1

lbl_8042D650:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042D668
 * Size:	0007C4
 */
void MoviePlayer::update(Controller*, Controller*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r3
	lis      r3, lbl_80499F10@ha
	mr       r29, r4
	mr       r30, r5
	addi     r31, r3, lbl_80499F10@l
	lwz      r0, 0x18(r28)
	cmplwi   r0, 7
	bgt      lbl_8042DB64
	lis      r3, lbl_804EBFC8@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804EBFC8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_8042D6B0:
	li       r3, 0
	b        lbl_8042DE18

lbl_8042D6B8:
	lfs      f2, 0xa0(r28)
	lfs      f1, lbl_80520610@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8042D700
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xa0(r28)
	lfs      f0, 0xa0(r28)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8042D72C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	b        lbl_8042D72C

lbl_8042D700:
	lwz      r3, sys@sda21(r13)
	addi     r4, r28, 0x1c
	lwz      r5, 0x1a4(r28)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	li       r0, 2
	stw      r0, 0x18(r28)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_8042D72C:
	li       r3, 1
	b        lbl_8042DE18

lbl_8042D734:
	lfs      f1, 0xa0(r28)
	lfs      f0, lbl_80520610@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8042D754
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0xa0(r28)

lbl_8042D754:
	lwz      r0, 0x34(r28)
	cmpwi    r0, 2
	bne      lbl_8042D790
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x1b0(r28)
	bl       startChangeCurrentHeap__6SystemFP7JKRHeap
	lwz      r4, 0x1a0(r28)
	cmplwi   r4, 0
	beq      lbl_8042D77C
	b        lbl_8042D780

lbl_8042D77C:
	lwz      r4, 0x190(r28)

lbl_8042D780:
	mr       r3, r28
	bl       setCamera__Q24Game11MoviePlayerFP6Camera
	lwz      r3, sys@sda21(r13)
	bl       endChangeCurrentHeap__6SystemFv

lbl_8042D790:
	lwz      r0, 0x34(r28)
	cmpwi    r0, 2
	bne      lbl_8042D88C
	lfs      f1, 0xa0(r28)
	lfs      f0, lbl_80520610@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8042D88C
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x18c
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	lwz      r3, 0xbc(r28)
	cmplwi   r3, 0
	beq      lbl_8042D7F4
	lwz      r12, 0(r3)
	li       r5, 0
	lwz      r4, 0xb0(r28)
	lwz      r12, 8(r12)
	lwz      r6, 0xb8(r28)
	mtctr    r12
	bctrl

lbl_8042D7F4:
	lwz      r3, 0xb0(r28)
	lbz      r0, 0x24(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8042D814
	lfs      f1, 0x98(r28)
	mr       r3, r28
	addi     r4, r28, 0x8c
	bl       "setTransform__Q24Game11MoviePlayerFR10Vector3<f>f"

lbl_8042D814:
	mr       r3, r28
	li       r4, 0
	bl       start__Q24Game11MoviePlayerFP6Camera
	lwz      r4, 0xb0(r28)
	mr       r3, r28
	bl       setPauseAndDraw__Q24Game11MoviePlayerFPQ24Game11MovieConfig
	li       r0, 5
	stw      r0, 0x18(r28)
	lwz      r3, 0xb0(r28)
	lhz      r3, 0xc0(r3)
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	bne      lbl_8042D868
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8042D868
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f1, lbl_80520620@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	b        lbl_8042D87C

lbl_8042D868:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl

lbl_8042D87C:
	li       r0, 3
	li       r3, 1
	stw      r0, 0x18(r28)
	b        lbl_8042DE18

lbl_8042D88C:
	li       r3, 1
	b        lbl_8042DE18

lbl_8042D894:
	li       r0, 4
	stw      r0, 0x18(r28)
	b        lbl_8042DB64

lbl_8042D8A0:
	li       r0, 5
	stw      r0, 0x18(r28)
	b        lbl_8042DB64

lbl_8042D8AC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	b        lbl_8042DB64

lbl_8042D8B8:
	lwz      r3, 0x1cc(r28)
	cmplwi   r3, 0
	beq      lbl_8042D8D4
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl

lbl_8042D8D4:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0xa0(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80520648@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xa0(r28)
	lfs      f1, 0xa0(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_8042DB44
	lbz      r0, 0xa4(r28)
	cmplwi   r0, 0
	bne      lbl_8042DB44
	lwz      r0, 0x1f0(r28)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8042D98C
	mr       r3, r28
	bl       resetFrame__Q24Game11MoviePlayerFv
	li       r27, 0
	b        lbl_8042D984

lbl_8042D920:
	lwz      r3, 0x1d0(r28)
	li       r4, 1
	bl       forward__Q37JStudio3stb8TControlFUl
	clrlwi   r0, r3, 0x18
	lwz      r3, 0x1cc(r28)
	cntlzw   r0, r0
	lwz      r12, 0(r3)
	srwi     r0, r0, 5
	mr       r27, r0
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1e4(r28)
	cmplwi   r3, 0
	beq      lbl_8042D974
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8042D974:
	mr       r3, r28
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb

lbl_8042D984:
	clrlwi.  r0, r27, 0x18
	beq      lbl_8042D920

lbl_8042D98C:
	li       r0, 1
	mr       r3, r28
	stb      r0, 0xa4(r28)
	lwz      r27, 0xb0(r28)
	bl       stop__Q24Game11MoviePlayerFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	li       r0, 0
	li       r4, 2
	lwz      r3, 0x18(r3)
	stb      r0, 0x92(r3)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       controllerUnLock__Q24Game9CameraMgrFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1a0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8042D9E0
	bl       restartFinalFloorSound__Q26Screen9Game2DMgrFv

lbl_8042D9E0:
	lwz      r3, 0xb4(r28)
	cmplwi   r3, 0
	beq      lbl_8042DA08
	lwz      r12, 0(r3)
	mr       r4, r27
	li       r5, 0
	lwz      r6, 0xb8(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8042DA08:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f1, lbl_8052064C@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0xcc
	lwz      r12, 0xcc(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8042DB28
	bl       PSMCancelToPauseOffMainBgm__Fv
	addi     r3, r28, 0xcc
	lwz      r12, 0xcc(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_8042DA78
	bl       del__5CNodeFv
	mr       r4, r29
	addi     r3, r28, 0x128
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x184(r28)
	addi     r0, r3, -1
	stw      r0, 0x184(r28)

lbl_8042DA78:
	cmplwi   r29, 0
	beq      lbl_8042DB0C
	lwz      r0, 0x50(r29)
	mr       r3, r28
	addi     r5, r29, 0x18
	li       r6, 1
	stw      r0, 0x18c(r28)
	lwz      r0, 0x58(r29)
	stw      r0, 0x190(r28)
	lwz      r0, 0x54(r29)
	stw      r0, 0x194(r28)
	lwz      r4, 0x4c(r29)
	bl play__Q24Game11MoviePlayerFPQ24Game11MovieConfigRQ24Game12MoviePlayArgb
	cmpwi    r3, 2
	beq      lbl_8042DAE4
	bge      lbl_8042DAC8
	cmpwi    r3, 0
	beq      lbl_8042DAD4
	bge      lbl_8042DADC
	b        lbl_8042DB20

lbl_8042DAC8:
	cmpwi    r3, 4
	bge      lbl_8042DB20
	b        lbl_8042DAEC

lbl_8042DAD4:
	li       r3, 1
	b        lbl_8042DE18

lbl_8042DADC:
	li       r3, 0
	b        lbl_8042DE18

lbl_8042DAE4:
	li       r3, 1
	b        lbl_8042DE18

lbl_8042DAEC:
	lwz      r6, 0x18(r29)
	addi     r3, r31, 0x18
	addi     r5, r31, 0xbc
	li       r4, 0x2ff
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0
	b        lbl_8042DE18

lbl_8042DB0C:
	addi     r3, r31, 0x18
	addi     r5, r31, 0xd0
	li       r4, 0x304
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042DB20:
	li       r3, 0
	b        lbl_8042DE18

lbl_8042DB28:
	lwz      r0, 0x18(r28)
	cmpwi    r0, 2
	beq      lbl_8042DB3C
	cmpwi    r0, 1
	bne      lbl_8042DB5C

lbl_8042DB3C:
	bl       PSMCancelToPauseOffMainBgm__Fv
	b        lbl_8042DB5C

lbl_8042DB44:
	lfs      f0, lbl_80520610@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8042DB5C
	li       r0, 0
	stw      r0, 0x18(r28)

lbl_8042DB5C:
	li       r3, 1
	b        lbl_8042DE18

lbl_8042DB64:
	lwz      r0, 0x1f0(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042DE10
	lwz      r0, 0x18(r29)
	andi.    r0, r0, 0xf70
	bne      lbl_8042DBA0
	cmplwi   r30, 0
	beq      lbl_8042DB94
	beq      lbl_8042DBA0
	lwz      r0, 0x18(r30)
	andi.    r0, r0, 0xf70
	bne      lbl_8042DBA0

lbl_8042DB94:
	lwz      r0, 0x1f0(r28)
	oris     r0, r0, 0x8000
	stw      r0, 0x1f0(r28)

lbl_8042DBA0:
	lwz      r3, 0x1d0(r28)
	lwz      r0, 0x54(r3)
	cmpwi    r0, 0
	bgt      lbl_8042DBBC
	lwz      r3, 0x1e8(r28)
	addi     r0, r3, 1
	stw      r0, 0x1e8(r28)

lbl_8042DBBC:
	lwz      r3, 0xb0(r28)
	lbz      r0, 0x24(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8042DC9C
	lwz      r3, 0xa8(r28)
	cmplwi   r3, 0
	beq      lbl_8042DC9C
	lfs      f4, 4(r3)
	lfs      f0, 0x90(r28)
	lfs      f3, 0(r3)
	fsubs    f6, f0, f4
	lfs      f0, 0x8c(r28)
	lfs      f5, 8(r3)
	lfs      f1, 0x94(r28)
	fsubs    f2, f0, f3
	fmuls    f8, f6, f6
	fsubs    f7, f1, f5
	lfs      f0, lbl_80520610@sda21(r2)
	fmadds   f1, f2, f2, f8
	fmuls    f8, f7, f7
	fadds    f1, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8042DC28
	ble      lbl_8042DC2C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8042DC2C

lbl_8042DC28:
	fmr      f1, f0

lbl_8042DC2C:
	lfs      f0, lbl_80520610@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8042DC50
	lfs      f0, lbl_8052064C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0
	b        lbl_8042DC54

lbl_8042DC50:
	fmr      f1, f0

lbl_8042DC54:
	lfs      f0, lbl_80520650@sda21(r2)
	fmr      f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8042DC68
	fmr      f8, f0

lbl_8042DC68:
	fmuls    f2, f2, f8
	mr       r3, r28
	fmuls    f1, f6, f8
	addi     r4, r28, 0x8c
	fmuls    f0, f7, f8
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	fadds    f0, f5, f0
	stfs     f2, 0x8c(r28)
	stfs     f1, 0x90(r28)
	stfs     f0, 0x94(r28)
	lfs      f1, 0x98(r28)
	bl       "setTransform__Q24Game11MoviePlayerFR10Vector3<f>f"

lbl_8042DC9C:
	lwz      r3, 0x1d0(r28)
	li       r4, 1
	bl       forward__Q37JStudio3stb8TControlFUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042DD28
	lwz      r0, 0x18(r28)
	cmpwi    r0, 6
	beq      lbl_8042DD74
	li       r0, 6
	lfs      f0, lbl_80520654@sda21(r2)
	stw      r0, 0x18(r28)
	li       r0, 0
	li       r4, 1
	li       r5, 0
	stfs     f0, 0xa0(r28)
	li       r6, 3
	stb      r0, 0xa4(r28)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f1, lbl_8052064C@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xac(r28)
	li       r4, 0x1e
	bl       onDemoFadeoutStart__Q23PSM4DemoFUl
	lwz      r3, 0x1cc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8042DE18

lbl_8042DD28:
	lwz      r3, 0x1cc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1cc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1e4(r28)
	cmplwi   r3, 0
	beq      lbl_8042DD74
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8042DD74:
	lwz      r0, 0x18(r28)
	cmpwi    r0, 5
	bne      lbl_8042DE10
	lwz      r0, 0x1f0(r28)
	rlwinm.  r0, r0, 0, 0, 0
	beq      lbl_8042DE10
	lwz      r3, 0x1d0(r28)
	lwz      r0, 0x54(r3)
	cmpwi    r0, 0
	bne      lbl_8042DE10
	lwz      r0, 0x1c(r29)
	andi.    r0, r0, 0xf70
	bne      lbl_8042DDBC
	cmplwi   r30, 0
	beq      lbl_8042DDD8
	lwz      r0, 0x18(r30)
	andi.    r0, r0, 0xf70
	beq      lbl_8042DDD8

lbl_8042DDBC:
	lwz      r3, 0xb0(r28)
	bl       isSkippable__Q24Game11MovieConfigFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042DDD8
	mr       r3, r28
	bl       skip__Q24Game11MoviePlayerFv
	b        lbl_8042DE10

lbl_8042DDD8:
	lwz      r0, 0x1c(r29)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	bne      lbl_8042DDF8
	cmplwi   r30, 0
	beq      lbl_8042DE10
	lwz      r0, 0x1c(r30)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	beq      lbl_8042DE10

lbl_8042DDF8:
	lwz      r3, 0xb0(r28)
	bl       isNeverSkippable__Q24Game11MovieConfigFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042DE10
	mr       r3, r28
	bl       skip__Q24Game11MoviePlayerFv

lbl_8042DE10:
	lwz      r0, 0x1f0(r28)
	clrlwi   r3, r0, 0x1f

lbl_8042DE18:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

namespace P2JME {

/*
 * --INFO--
 * Address:	8042DE2C
 * Size:	00002C
 */
void TControl::update(Controller*, Controller*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8042DE58
 * Size:	000078
 */
void MoviePlayer::draw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042DEB8
	lwz      r0, 0x1e4(r30)
	cmplwi   r0, 0
	beq      lbl_8042DEB8
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1e4(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8042DEB8:
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
 * Address:	8042DED0
 * Size:	000074
 */
void MoviePlayer::start(Camera*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x1b8(r3)
	beq      lbl_8042DEF8
	bl       setCamera__Q24Game11MoviePlayerFP6Camera

lbl_8042DEF8:
	lwz      r0, 0x1ec(r31)
	cmplwi   r0, 0
	beq      lbl_8042DF28
	li       r0, 0
	stw      r0, 0x1e8(r31)
	lwz      r3, 0x1d0(r31)
	stw      r0, 0x40(r3)
	lwz      r3, 0x1cc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl

lbl_8042DF28:
	lwz      r0, 0x1f0(r31)
	lwz      r31, 0xc(r1)
	clrlwi   r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042DF44
 * Size:	000120
 */
void MoviePlayer::stop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042E02C
	bl       clearPauseAndDraw__Q24Game11MoviePlayerFv
	lwz      r0, 0x1f0(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1f0(r31)
	lwz      r0, 0x1f0(r31)
	clrlwi   r0, r0, 1
	stw      r0, 0x1f0(r31)
	lwz      r3, 0x1cc(r31)
	cmplwi   r3, 0
	beq      lbl_8042DFA4
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1cc(r31)
	bl       destroyObjectAll__Q34Game5P2JST12ObjectSystemFv

lbl_8042DFA4:
	li       r0, 0
	stw      r0, 0x1cc(r31)
	stw      r0, 0x1e4(r31)
	lwz      r0, 0x1f4(r31)
	cmplwi   r0, 0
	beq      lbl_8042DFCC
	lwz      r3, particleMgr@sda21(r13)
	bl       clearDemoResourceManager__11ParticleMgrFv
	li       r0, 0
	stw      r0, 0x1f4(r31)

lbl_8042DFCC:
	lwz      r3, 0xac(r31)
	cmplwi   r3, 0
	beq      lbl_8042DFE4
	bl       onDemoEnd__Q23PSM4DemoFv
	li       r0, 0
	stw      r0, 0xac(r31)

lbl_8042DFE4:
	lwz      r3, 0x1b0(r31)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x1b0(r31)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r7, 0x1b4(r31)
	cmpw     r3, r7
	beq      lbl_8042E024
	lis      r5, lbl_80499F28@ha
	lis      r4, lbl_8049A0C4@ha
	addi     r0, r5, lbl_80499F28@l
	mr       r6, r3
	addi     r5, r4, lbl_8049A0C4@l
	li       r4, 0x53b
	mr       r3, r0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042E024:
	li       r0, 0
	stw      r0, 0xb0(r31)

lbl_8042E02C:
	li       r0, 0
	stw      r0, 0x18c(r31)
	stw      r0, 0x194(r31)
	stw      r0, 0x19c(r31)
	stw      r0, 0x1a0(r31)
	lwz      r0, 0x1f0(r31)
	lwz      r31, 0xc(r1)
	clrlwi   r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void MoviePlayer::do_stop(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E064
 * Size:	000324
 */
void MoviePlayer::setCamera(Camera*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r5, 3
	stw      r0, 0x64(r1)
	stmw     r27, 0x4c(r1)
	mr       r31, r3
	lis      r3, lbl_80499F10@ha
	mr       r27, r4
	addi     r29, r3, lbl_80499F10@l
	addi     r4, r29, 0x1d4
	lwz      r3, 0x1cc(r31)
	bl       findObject__Q34Game5P2JST12ObjectSystemCFPCcQ26JStage8TEObject
	or.      r28, r3, r3
	bne      lbl_8042E0B0
	lwz      r3, 0x1cc(r31)
	addi     r4, r2, lbl_80520658@sda21
	li       r5, 3
	bl       findObject__Q34Game5P2JST12ObjectSystemCFPCcQ26JStage8TEObject
	mr       r28, r3

lbl_8042E0B0:
	cmplwi   r28, 0
	bne      lbl_8042E20C
	lwz      r3, 0xb0(r31)
	cmplwi   r3, 0
	beq      lbl_8042E0CC
	lwz      r4, 0xa0(r3)
	b        lbl_8042E0D0

lbl_8042E0CC:
	li       r4, 0

lbl_8042E0D0:
	lwz      r5, 0x1a0(r31)
	li       r3, 0
	lwz      r0, 0xc4(r31)
	stw      r3, 0x38(r1)
	cmplwi   r5, 0
	lwz      r3, 0xc0(r31)
	stw      r4, 0x3c(r1)
	stw      r3, 0x38(r1)
	stw      r0, 0x40(r1)
	beq      lbl_8042E0FC
	b        lbl_8042E100

lbl_8042E0FC:
	lwz      r5, 0x190(r31)

lbl_8042E100:
	cmplwi   r5, 0
	beq      lbl_8042E1C4
	lwz      r4, 0x38(r1)
	lwz      r3, 0x3c(r1)
	lwz      r0, 0x40(r1)
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x28(r1)
	lwz      r3, 0x1a0(r31)
	cmplwi   r3, 0
	beq      lbl_8042E134
	mr       r28, r3
	b        lbl_8042E138

lbl_8042E134:
	lwz      r28, 0x190(r31)

lbl_8042E138:
	cmplwi   r3, 0
	beq      lbl_8042E148
	mr       r29, r3
	b        lbl_8042E14C

lbl_8042E148:
	lwz      r29, 0x190(r31)

lbl_8042E14C:
	cmplwi   r3, 0
	beq      lbl_8042E158
	b        lbl_8042E15C

lbl_8042E158:
	lwz      r3, 0x190(r31)

lbl_8042E15C:
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xac(r31)
	mr       r5, r29
	mr       r6, r30
	lwz      r12, 0(r3)
	addi     r7, r1, 0x20
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_8042E200

lbl_8042E1C4:
	lwz      r6, 0x38(r1)
	addi     r7, r1, 0x14
	lwz      r3, 0x3c(r1)
	li       r4, 0
	lwz      r0, 0x40(r1)
	li       r5, 0
	stw      r6, 0x14(r1)
	li       r6, 0
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r3, 0xac(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8042E200:
	lwz      r3, 0xac(r31)
	bl       onDemoTop__Q23PSM4DemoFv
	b        lbl_8042E374

lbl_8042E20C:
	bne      lbl_8042E224
	addi     r3, r29, 0x18
	addi     r5, r29, 0x28
	li       r4, 0x5ad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042E224:
	lwz      r0, 0x1a0(r31)
	cmplwi   r0, 0
	beq      lbl_8042E234
	b        lbl_8042E238

lbl_8042E234:
	lwz      r0, 0x190(r31)

lbl_8042E238:
	cmplwi   r0, 0
	beq      lbl_8042E244
	lwz      r27, 0x190(r31)

lbl_8042E244:
	mr       r3, r28
	mr       r4, r27
	bl       setCamera__Q34Game5P2JST12ObjectCameraFP6Camera
	lwz      r3, 0xb0(r31)
	cmplwi   r3, 0
	beq      lbl_8042E264
	lwz      r6, 0xa0(r3)
	b        lbl_8042E268

lbl_8042E264:
	li       r6, 0

lbl_8042E268:
	lwz      r0, 0xc4(r31)
	li       r5, 0
	lwz      r4, 0xc0(r31)
	mr       r3, r27
	stw      r5, 0x2c(r1)
	stw      r4, 8(r1)
	stw      r6, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r12, 0(r27)
	stw      r6, 0x30(r1)
	lwz      r12, 0x6c(r12)
	stw      r4, 0x2c(r1)
	stw      r0, 0x34(r1)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xac(r31)
	mr       r5, r30
	mr       r6, r29
	lwz      r12, 0(r3)
	addi     r7, r1, 8
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	addi     r4, r2, lbl_80520660@sda21
	bl       print__7MatrixfFPc
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xac(r31)
	bl       onDemoTop__Q23PSM4DemoFv

lbl_8042E374:
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void MoviePlayer::suspend(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E388
 * Size:	0000D0
 */
void MoviePlayer::unsuspend(long, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r5, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1d0(r3)
	lwz      r0, 0x40(r3)
	subf     r0, r4, r0
	stw      r0, 0x40(r3)
	beq      lbl_8042E444
	lwz      r3, 0xb0(r31)
	lwz      r3, 0xc4(r3)
	cmpwi    r3, 0
	beq      lbl_8042E3D0
	lwz      r0, 0x1b8(r31)
	cmpw     r0, r3
	blt      lbl_8042E414

lbl_8042E3D0:
	lis      r4, lbl_8049A0F0@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8049A0F0@l
	li       r6, 0
	li       r4, 1
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0xc
	li       r3, 0
	mtctr    r0

lbl_8042E3F4:
	addi     r3, r3, 8
	bdnz     lbl_8042E3F4
	subfic   r0, r3, 0x64
	mtctr    r0
	cmpwi    r3, 0x64
	bge      lbl_8042E42C

lbl_8042E40C:
	bdnz     lbl_8042E40C
	b        lbl_8042E42C

lbl_8042E414:
	lis      r4, lbl_8049A104@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8049A104@l
	li       r6, 3
	li       r4, 0
	bl       setPause__Q24Game10GameSystemFbPci

lbl_8042E42C:
	lwz      r3, 0xac(r31)
	lwz      r4, 0x1b8(r31)
	bl       onMessageEnd__Q23PSM4DemoFi
	lwz      r3, 0x1b8(r31)
	addi     r0, r3, 1
	stw      r0, 0x1b8(r31)

lbl_8042E444:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042E458
 * Size:	0000C4
 */
void MoviePlayer::resetFrame(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	li       r3, 0
	bl       setMessageCount__12JUTAssertionFi
	lwz      r4, 0x1d0(r31)
	lwz      r0, 0x10(r4)
	cmplwi   r0, 0
	beq      lbl_8042E508
	addi     r3, r1, 0xc
	bl       __ct__Q27JStudio6TParseFPQ27JStudio8TControl
	lwz      r0, 0x1ec(r31)
	addi     r3, r1, 0xc
	addi     r4, r1, 8
	li       r5, 0x30
	stw      r0, 8(r1)
	bl       parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042E4D8
	lis      r3, lbl_80499F28@ha
	lis      r5, lbl_8049A080@ha
	addi     r3, r3, lbl_80499F28@l
	li       r4, 0x3ec
	addi     r5, r5, lbl_8049A080@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	addi     r3, r1, 0xc
	li       r4, -1
	bl       __dt__Q27JStudio6TParseFv
	b        lbl_8042E4F8

lbl_8042E4D8:
	lwz      r3, 0x1cc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0xc
	li       r4, -1
	bl       __dt__Q27JStudio6TParseFv

lbl_8042E4F8:
	li       r0, 0
	stw      r0, 0x1e8(r31)
	lwz      r3, 0x1d0(r31)
	stw      r0, 0x40(r3)

lbl_8042E508:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace P2JME

/*
 * --INFO--
 * Address:	8042E51C
 * Size:	00009C
 */
void setTransform__Q24Game11MoviePlayerFR10Vector3f f(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	fmr      f31, f1
	lfs      f2, 0(r4)
	li       r0, 1
	lfs      f0, lbl_8052066C@sda21(r2)
	stfs     f2, 0x1bc(r3)
	fmuls    f0, f0, f31
	lfs      f2, lbl_80520668@sda21(r2)
	lfs      f3, 4(r4)
	stfs     f3, 0x1c0(r3)
	fmuls    f0, f2, f0
	lfs      f2, 8(r4)
	stfs     f2, 0x1c4(r3)
	stfs     f0, 0x1c8(r3)
	lwz      r5, 0x1d0(r3)
	stb      r0, 0x75(r5)
	stb      r0, 0x74(r5)
	lwz      r31, 0x1d0(r3)
	mr       r3, r31
	bl       transformOnGet_setOrigin__Q27JStudio8TControlFRC3Vecf
	fmr      f1, f31
	mr       r3, r31
	mr       r4, r30
	bl       transformOnSet_setOrigin__Q27JStudio8TControlFRC3Vecf
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8042E5B8
 * Size:	000034
 */
void MoviePlayer::isPlaying(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xb0(r3)
	cmplwi   r3, 0
	beq      lbl_8042E5D8
	bl       is__Q24Game11MovieConfigFPc
	b        lbl_8042E5DC

lbl_8042E5D8:
	li       r3, 0

lbl_8042E5DC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void MoviePlayer::isLoadingBlack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E5EC
 * Size:	000148
 */
void MoviePlayer::drawLoading(Graphics&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	li       r0, 0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r4
	stw      r29, 0x44(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	cmpwi    r3, 2
	beq      lbl_8042E62C
	cmpwi    r3, 3
	beq      lbl_8042E62C
	cmpwi    r3, 4
	bne      lbl_8042E630

lbl_8042E62C:
	li       r0, 1

lbl_8042E630:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8042E718
	addi     r3, r30, 0xbc
	lwz      r12, 0xbc(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r8, 0
	li       r0, 0xff
	stb      r8, 0x18(r1)
	addi     r31, r30, 0xbc
	mr       r3, r31
	addi     r4, r1, 8
	stb      r8, 0x19(r1)
	addi     r5, r1, 0xc
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stb      r8, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lwz      r3, 0xb0(r29)
	cmplwi   r3, 0
	beq      lbl_8042E6AC
	lhz      r0, 0xc0(r3)
	rlwinm   r0, r0, 0x1e, 0x1f, 0x1f
	b        lbl_8042E6B0

lbl_8042E6AC:
	li       r0, 0

lbl_8042E6B0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8042E718
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_80520610@sda21(r2)
	mr       r3, r31
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_80520670@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_8042E718:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042E734
 * Size:	000108
 */
void MoviePlayer::skip(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_80520654@sda21(r2)
	stw      r0, 0x44(r1)
	li       r0, 0
	lfs      f1, lbl_8052064C@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	li       r3, 6
	lwz      r4, 0x1f0(r31)
	ori      r4, r4, 2
	stw      r4, 0x1f0(r31)
	stw      r3, 0x18(r31)
	stfs     f0, 0xa0(r31)
	stb      r0, 0xa4(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xac(r31)
	li       r4, 0x1e
	bl       onDemoFadeoutStart__Q23PSM4DemoFUl
	lis      r4, lbl_8049A118@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8049A118@l
	li       r6, 0
	li       r4, 1
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r31, 0x1d0(r31)
	lwz      r0, 0x14(r31)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x2c(r1)
	b        lbl_8042E7FC

lbl_8042E7C0:
	lwz      r3, 0x2c(r1)
	lwzu     r4, -0xc(r3)
	lbz      r0, 0(r4)
	cmpwi    r0, 0x23
	bne      lbl_8042E7F0
	cmplwi   r3, 0
	beq      lbl_8042E7F0
	lwz      r12, 8(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8042E7F0:
	lwz      r3, 0x2c(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x2c(r1)

lbl_8042E7FC:
	lwz      r0, 0x2c(r1)
	addi     r3, r31, 0x14
	stw      r3, 0x14(r1)
	cmplw    r0, r3
	stw      r3, 0x10(r1)
	stw      r3, 0x28(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x20(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_8042E7C0
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
void MoviePlayer::draw2d(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E83C
 * Size:	000008
 */
void MovieContext::getNext(void)
{
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042E844
 * Size:	0000C4
 */
MoviePlayer::~MoviePlayer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8042E8EC
	lis      r3, __vt__Q24Game11MoviePlayer@ha
	addic.   r0, r30, 0x128
	addi     r3, r3, __vt__Q24Game11MoviePlayer@l
	li       r0, 0
	stw      r3, 0(r30)
	stw      r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
	beq      lbl_8042E898
	lis      r4, __vt__Q24Game12MovieContext@ha
	addi     r3, r30, 0x128
	addi     r0, r4, __vt__Q24Game12MovieContext@l
	li       r4, 0
	stw      r0, 0x128(r30)
	bl       __dt__5CNodeFv

lbl_8042E898:
	addic.   r0, r30, 0xcc
	beq      lbl_8042E8B8
	lis      r4, __vt__Q24Game12MovieContext@ha
	addi     r3, r30, 0xcc
	addi     r0, r4, __vt__Q24Game12MovieContext@l
	li       r4, 0
	stw      r0, 0xcc(r30)
	bl       __dt__5CNodeFv

lbl_8042E8B8:
	addic.   r0, r30, 0x1c
	beq      lbl_8042E8D0
	addic.   r3, r30, 0x78
	beq      lbl_8042E8D0
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8042E8D0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8042E8EC
	mr       r3, r30
	bl       __dl__FPv

lbl_8042E8EC:
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
 * Address:	8042E908
 * Size:	000030
 */
void Delegate<Game::MoviePlayer>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042E938
 * Size:	000028
 */
void __sinit_moviePlayer_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EBFB0@ha
	stw      r0, lbl_805161C8@sda21(r13)
	stfsu    f0, lbl_804EBFB0@l(r3)
	stfs     f0, lbl_805161CC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
