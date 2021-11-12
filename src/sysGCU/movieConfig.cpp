#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_movieConfig_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A3B0
    lbl_8049A3B0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6D6F7669
        .4byte 0x65436F6E
        .4byte 0x66696700
    .global lbl_8049A3C8
    lbl_8049A3C8:
        .4byte 0x4D6F7669
        .4byte 0x65436F6E
        .4byte 0x66696754
        .4byte 0x61670000
    .global lbl_8049A3D8
    lbl_8049A3D8:
        .4byte 0x64656D6F
        .4byte 0x5F6E616D
        .4byte 0x65000000
        .4byte 0x4D6F7669
        .4byte 0x654C6973
        .4byte 0x74000000
        .4byte 0x75736572
        .4byte 0x2F4D756B
        .4byte 0x6B692F6D
        .4byte 0x6F766965
        .4byte 0x2F64656D
        .4byte 0x6F732E74
        .4byte 0x78740000
        .4byte 0x6D6F7669
        .4byte 0x65436F6E
        .4byte 0x6669672E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC368
    lbl_804EC368:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game9MovieList
    __vt__Q24Game9MovieList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9MovieListFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game11MovieConfig6TParms
    __vt__Q34Game11MovieConfig6TParms:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11MovieConfig6TParmsFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game11MovieConfig
    __vt__Q24Game11MovieConfig:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11MovieConfigFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516210
    lbl_80516210:
        .skip 0x4
    .global lbl_80516214
    lbl_80516214:
        .skip 0x4
    .global movieList__4Game
    movieList__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805206F8
    lbl_805206F8:
        .4byte 0x666F6C64
        .4byte 0x65720000
    .global lbl_80520700
    lbl_80520700:
        .4byte 0x00000000
    .global lbl_80520704
    lbl_80520704:
        .4byte 0x6E6F6D61
        .4byte 0x70000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
MovieConfig::MovieConfig(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80431830
 * Size:	000070
 */
MovieConfig::TParms::~TParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80431884
	lis      r4, __vt__Q34Game11MovieConfig6TParms@ha
	addi     r0, r4, __vt__Q34Game11MovieConfig6TParms@l
	stw      r0, 0(r30)
	beq      lbl_80431874
	lis      r5, __vt__13TagParameters@ha
	li       r4, 0
	addi     r0, r5, __vt__13TagParameters@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80431874:
	extsh.   r0, r31
	ble      lbl_80431884
	mr       r3, r30
	bl       __dl__FPv

lbl_80431884:
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
 * Address:	804318A0
 * Size:	000004
 */
void MovieConfig::dump(void) { }

/*
 * --INFO--
 * Address:	804318A4
 * Size:	00001C
 */
void MovieConfig::isSkippable(void)
{
	/*
	lhz      r3, 0xbc(r3)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_804318B8
	li       r3, 0
	blr

lbl_804318B8:
	clrlwi   r3, r3, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	804318C0
 * Size:	00000C
 */
void MovieConfig::isNeverSkippable(void)
{
	/*
	lhz      r0, 0xbc(r3)
	rlwinm   r3, r0, 0x1f, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	804318CC
 * Size:	000054
 */
void MovieConfig::is(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       strlen
	mr       r5, r3
	mr       r4, r31
	addi     r3, r30, 0x45
	bl       strncmp
	cntlzw   r0, r3
	lwz      r31, 0xc(r1)
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80431920
 * Size:	0002D4
 */
void MovieConfig::read(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	addi     r3, r1, 8
	stw      r29, 0x24(r1)
	bl       __ct__4ID32Fv
	mr       r4, r31
	addi     r3, r1, 8
	bl       read__4ID32FR6Stream
	lis      r3, 0x76302E32@ha
	lwz      r4, 0x10(r1)
	addi     r0, r3, 0x76302E32@l
	cmplw    r4, r0
	blt      lbl_80431A6C
	mr       r4, r31
	addi     r3, r30, 0x68
	bl       read__13TagParametersFR6Stream
	li       r0, 4
	li       r4, 0
	mtctr    r0

lbl_80431980:
	lwz      r5, 0x90(r30)
	add      r3, r30, r4
	addi     r12, r4, 1
	addi     r11, r4, 2
	lbzx     r0, r5, r4
	addi     r10, r4, 3
	addi     r9, r4, 4
	addi     r8, r4, 5
	stb      r0, 0x25(r3)
	addi     r7, r4, 6
	addi     r6, r4, 7
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r4
	addi     r4, r4, 8
	stb      r0, 0x45(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r12
	stb      r0, 0x26(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r12
	stb      r0, 0x46(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r11
	stb      r0, 0x27(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r11
	stb      r0, 0x47(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r10
	stb      r0, 0x28(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r10
	stb      r0, 0x48(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r9
	stb      r0, 0x29(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r9
	stb      r0, 0x49(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r8
	stb      r0, 0x2a(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r8
	stb      r0, 0x4a(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r7
	stb      r0, 0x2b(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r7
	stb      r0, 0x4b(r3)
	lwz      r5, 0x90(r30)
	lbzx     r0, r5, r6
	stb      r0, 0x2c(r3)
	lwz      r5, 0xa0(r30)
	lbzx     r0, r5, r6
	stb      r0, 0x4c(r3)
	bdnz     lbl_80431980
	b        lbl_80431AAC

lbl_80431A6C:
	li       r29, 0

lbl_80431A70:
	mr       r3, r31
	bl       readByte__6StreamFv
	addi     r0, r29, 0x25
	addi     r29, r29, 1
	cmpwi    r29, 0x20
	stbx     r3, r30, r0
	blt      lbl_80431A70
	li       r29, 0

lbl_80431A90:
	mr       r3, r31
	bl       readByte__6StreamFv
	addi     r0, r29, 0x45
	addi     r29, r29, 1
	cmpwi    r29, 0x20
	stbx     r3, r30, r0
	blt      lbl_80431A90

lbl_80431AAC:
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0x24(r30)
	mr       r4, r31
	addi     r3, r30, 0xa4
	bl       "read__10Vector3<f>FR6Stream"
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0xb0(r30)
	mr       r3, r31
	bl       readShort__6StreamFv
	sth      r3, 0xbc(r30)
	lis      r4, 0x76302E30@ha
	addi     r0, r4, 0x76302E30@l
	lwz      r3, 0x10(r1)
	cmplw    r3, r0
	ble      lbl_80431B70
	li       r3, 0
	addi     r0, r4, 0x2e34
	stb      r3, 0xbe(r30)
	stb      r3, 0xbf(r30)
	lwz      r3, 0x10(r1)
	cmplw    r3, r0
	bge      lbl_80431B4C
	mr       r3, r31
	bl       readShort__6StreamFv
	mr       r3, r31
	bl       readShort__6StreamFv
	li       r4, 0
	lis      r3, 0x76302E33@ha
	stb      r4, 0xbe(r30)
	addi     r0, r3, 0x76302E33@l
	stb      r4, 0xbf(r30)
	lwz      r3, 0x10(r1)
	cmplw    r3, r0
	blt      lbl_80431B70
	mr       r3, r31
	bl       readShort__6StreamFv
	sth      r3, 0xc0(r30)
	b        lbl_80431B70

lbl_80431B4C:
	mr       r3, r31
	bl       readShort__6StreamFv
	lhz      r0, 0xbe(r30)
	clrlwi   r4, r3, 0x10
	mr       r3, r31
	or       r0, r0, r4
	sth      r0, 0xbe(r30)
	bl       readShort__6StreamFv
	sth      r3, 0xc0(r30)

lbl_80431B70:
	lis      r3, 0x76302E35@ha
	lwz      r4, 0x10(r1)
	addi     r0, r3, 0x76302E35@l
	cmplw    r4, r0
	blt      lbl_80431B90
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0xc4(r30)

lbl_80431B90:
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	stw      r3, 0xb8(r30)
	addi     r4, r2, lbl_80520704@sda21
	lwz      r3, 0xb8(r30)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80431BC4
	li       r0, -1
	stw      r0, 0xb4(r30)
	b        lbl_80431BD8

lbl_80431BC4:
	lwz      r3, stageList__4Game@sda21(r13)
	lwz      r4, 0xb8(r30)
	bl       getCourseInfo__Q24Game6StagesFPc
	lwz      r0, 0x48(r3)
	stw      r0, 0xb4(r30)

lbl_80431BD8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80431BF4
 * Size:	000038
 */
void MovieList::construct(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0xe0
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80431C18
	bl       __ct__Q24Game9MovieListFv
	mr       r0, r3

lbl_80431C18:
	stw      r0, movieList__4Game@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80431C2C
 * Size:	0001BC
 */
MovieList::MovieList(void)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	lis      r4, lbl_8049A3B0@ha
	stw      r0, 0x444(r1)
	stw      r31, 0x43c(r1)
	addi     r31, r4, lbl_8049A3B0@l
	stw      r30, 0x438(r1)
	mr       r30, r3
	stw      r29, 0x434(r1)
	stw      r28, 0x430(r1)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game9MovieList@ha
	addi     r29, r30, 0x18
	addi     r0, r3, __vt__Q24Game9MovieList@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game11MovieConfig@ha
	addi     r3, r29, 0x18
	addi     r0, r4, __vt__Q24Game11MovieConfig@l
	stw      r0, 0(r29)
	bl       __ct__4ID32Fv
	addi     r28, r29, 0x68
	addi     r4, r31, 0x18
	mr       r3, r28
	bl       __ct__13TagParametersFPc
	lis      r3, __vt__Q34Game11MovieConfig6TParms@ha
	mr       r4, r28
	addi     r0, r3, __vt__Q34Game11MovieConfig6TParms@l
	addi     r3, r28, 0x1c
	stw      r0, 0(r28)
	addi     r5, r31, 0x28
	bl       __ct__13StringTagParmFP13TagParametersPc
	mr       r4, r28
	addi     r3, r28, 0x2c
	addi     r5, r2, lbl_805206F8@sda21
	bl       __ct__13StringTagParmFP13TagParametersPc
	li       r9, 0
	lis      r4, 0x76302E35@ha
	stb      r9, 0xbe(r29)
	li       r0, 2
	lfs      f0, lbl_80520700@sda21(r2)
	li       r8, 1
	stb      r9, 0xbf(r29)
	li       r7, 3
	addi     r6, r29, 0x25
	li       r5, -1
	stb      r0, 0x24(r29)
	addi     r0, r2, lbl_80520704@sda21
	addi     r3, r29, 0x18
	addi     r4, r4, 0x76302E35@l
	stb      r9, 0x25(r29)
	stb      r9, 0x45(r29)
	stfs     f0, 0xa4(r29)
	stfs     f0, 0xa8(r29)
	stfs     f0, 0xac(r29)
	stfs     f0, 0xb0(r29)
	stb      r9, 0xbe(r29)
	stb      r9, 0xbf(r29)
	sth      r8, 0xbc(r29)
	stb      r9, 0xbe(r29)
	stb      r9, 0xbf(r29)
	sth      r7, 0xc0(r29)
	stw      r6, 0x14(r29)
	stw      r5, 0xb4(r29)
	stw      r0, 0xb8(r29)
	bl       setID__4ID32FUl
	li       r11, 0
	addi     r0, r31, 0x34
	stw      r11, 0xc4(r29)
	addi     r3, r31, 0x40
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r30)
	li       r6, 0
	li       r7, 0
	li       r8, 2
	stw      r11, 0x28(r30)
	li       r9, 0
	li       r10, 0
	stw      r11, 0x24(r30)
	stw      r11, 0x20(r30)
	stw      r11, 0x1c(r30)
	stw      r11, 8(r1)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r29, r3, r3
	beq      lbl_80431DC4
	mr       r4, r29
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80431DB0
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80431DB0:
	mr       r3, r30
	addi     r4, r1, 0x10
	bl       read__Q24Game9MovieListFR6Stream
	mr       r3, r29
	bl       __dla__FPv

lbl_80431DC4:
	lwz      r0, 0x444(r1)
	mr       r3, r30
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	lwz      r28, 0x430(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80431DE8
 * Size:	000098
 */
MovieConfig::~MovieConfig(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80431E64
	lis      r3, __vt__Q24Game11MovieConfig@ha
	addic.   r0, r30, 0x68
	addi     r0, r3, __vt__Q24Game11MovieConfig@l
	stw      r0, 0(r30)
	beq      lbl_80431E48
	lis      r3, __vt__Q34Game11MovieConfig6TParms@ha
	addic.   r0, r30, 0x68
	addi     r0, r3, __vt__Q34Game11MovieConfig6TParms@l
	stw      r0, 0x68(r30)
	beq      lbl_80431E48
	lis      r4, __vt__13TagParameters@ha
	addi     r3, r30, 0x68
	addi     r0, r4, __vt__13TagParameters@l
	li       r4, 0
	stw      r0, 0x68(r30)
	bl       __dt__5CNodeFv

lbl_80431E48:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80431E64
	mr       r3, r30
	bl       __dl__FPv

lbl_80431E64:
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
 * Address:	80431E80
 * Size:	0000B0
 */
void MovieList::findConfig(char*, char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r4
	mr       r29, r3
	mr       r28, r5
	mr       r3, r27
	bl       strlen
	cmplwi   r28, 0
	mr       r30, r3
	li       r3, 0
	beq      lbl_80431EBC
	mr       r3, r28
	bl       strlen

lbl_80431EBC:
	lwz      r29, 0x28(r29)
	mr       r31, r30
	mr       r30, r3
	b        lbl_80431F10

lbl_80431ECC:
	mr       r3, r27
	mr       r5, r31
	addi     r4, r29, 0x45
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_80431F0C
	cmplwi   r28, 0
	beq      lbl_80431F04
	lwz      r4, 0xb8(r29)
	mr       r3, r28
	mr       r5, r30
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_80431F0C

lbl_80431F04:
	mr       r3, r29
	b        lbl_80431F1C

lbl_80431F0C:
	lwz      r29, 4(r29)

lbl_80431F10:
	cmplwi   r29, 0
	bne      lbl_80431ECC
	li       r3, 0

lbl_80431F1C:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void MovieList::getConfig(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80431F30
 * Size:	000164
 */
void MovieList::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r3, r28
	bl       readInt__6StreamFv
	li       r0, 0
	mr       r31, r3
	stw      r0, 0x28(r27)
	li       r29, 0
	stw      r0, 0x24(r27)
	stw      r0, 0x20(r27)
	stw      r0, 0x1c(r27)
	b        lbl_80432078

lbl_80431F70:
	li       r3, 0xc8
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8043205C
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game11MovieConfig@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q24Game11MovieConfig@l
	stw      r0, 0(r30)
	bl       __ct__4ID32Fv
	lis      r3, lbl_8049A3C8@ha
	addi     r26, r30, 0x68
	addi     r4, r3, lbl_8049A3C8@l
	mr       r3, r26
	bl       __ct__13TagParametersFPc
	lis      r4, __vt__Q34Game11MovieConfig6TParms@ha
	lis      r3, lbl_8049A3D8@ha
	addi     r0, r4, __vt__Q34Game11MovieConfig6TParms@l
	stw      r0, 0(r26)
	addi     r5, r3, lbl_8049A3D8@l
	mr       r4, r26
	addi     r3, r26, 0x1c
	bl       __ct__13StringTagParmFP13TagParametersPc
	mr       r4, r26
	addi     r3, r26, 0x2c
	addi     r5, r2, lbl_805206F8@sda21
	bl       __ct__13StringTagParmFP13TagParametersPc
	li       r9, 0
	lis      r4, 0x76302E35@ha
	stb      r9, 0xbe(r30)
	li       r0, 2
	lfs      f0, lbl_80520700@sda21(r2)
	li       r8, 1
	stb      r9, 0xbf(r30)
	li       r7, 3
	addi     r6, r30, 0x25
	li       r5, -1
	stb      r0, 0x24(r30)
	addi     r0, r2, lbl_80520704@sda21
	addi     r3, r30, 0x18
	addi     r4, r4, 0x76302E35@l
	stb      r9, 0x25(r30)
	stb      r9, 0x45(r30)
	stfs     f0, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	stfs     f0, 0xac(r30)
	stfs     f0, 0xb0(r30)
	stb      r9, 0xbe(r30)
	stb      r9, 0xbf(r30)
	sth      r8, 0xbc(r30)
	stb      r9, 0xbe(r30)
	stb      r9, 0xbf(r30)
	sth      r7, 0xc0(r30)
	stw      r6, 0x14(r30)
	stw      r5, 0xb4(r30)
	stw      r0, 0xb8(r30)
	bl       setID__4ID32FUl
	li       r0, 0
	stw      r0, 0xc4(r30)

lbl_8043205C:
	mr       r3, r30
	mr       r4, r28
	bl       read__Q24Game11MovieConfigFR6Stream
	mr       r4, r30
	addi     r3, r27, 0x18
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1

lbl_80432078:
	cmpw     r29, r31
	blt      lbl_80431F70
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80432094
 * Size:	0000B4
 */
MovieList::~MovieList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8043212C
	lis      r3, __vt__Q24Game9MovieList@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q24Game9MovieList@l
	stw      r0, 0(r30)
	beq      lbl_80432110
	lis      r4, __vt__Q24Game11MovieConfig@ha
	addic.   r3, r30, 0x80
	addi     r0, r4, __vt__Q24Game11MovieConfig@l
	stw      r0, 0x18(r30)
	beq      lbl_80432104
	lis      r4, __vt__Q34Game11MovieConfig6TParms@ha
	cmplwi   r3, 0
	addi     r0, r4, __vt__Q34Game11MovieConfig6TParms@l
	stw      r0, 0x80(r30)
	beq      lbl_80432104
	lis      r4, __vt__13TagParameters@ha
	addi     r0, r4, __vt__13TagParameters@l
	stw      r0, 0x80(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80432104:
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80432110:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8043212C
	mr       r3, r30
	bl       __dl__FPv

lbl_8043212C:
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
 * Address:	80432148
 * Size:	000028
 */
void __sinit_movieConfig_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC368@ha
	stw      r0, lbl_80516210@sda21(r13)
	stfsu    f0, lbl_804EC368@l(r3)
	stfs     f0, lbl_80516214@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
