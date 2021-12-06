#include "JSystem/JKR/JKRFileLoader.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRFileLoader_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JKRFileLoader
    __vt__13JKRFileLoader:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRFileLoaderFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sVolumeList__13JKRFileLoader
    sVolumeList__13JKRFileLoader:
        .skip 0xC

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global rootPath$2747
    rootPath$2747:
        .byte 0x2f
        .skip 0x3

    .section .sbss # 0x80514D80 - 0x80516360
    .global sCurrentVolume__13JKRFileLoader
    sCurrentVolume__13JKRFileLoader:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516528
    lbl_80516528:
        .4byte 0x2F000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80022E98
 * Size:	000058
 */
JKRFileLoader::JKRFileLoader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__13JKRFileLoader@ha
	mr       r4, r31
	addi     r0, r3, __vt__13JKRFileLoader@l
	addi     r3, r31, 0x18
	stw      r0, 0(r31)
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x28(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x34(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022EF0
 * Size:	00008C
 */
JKRFileLoader::~JKRFileLoader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80022F60
	lis      r3, __vt__13JKRFileLoader@ha
	addi     r0, r3, __vt__13JKRFileLoader@l
	stw      r0, 0(r30)
	lwz      r0, sCurrentVolume__13JKRFileLoader@sda21(r13)
	cmplw    r0, r30
	bne      lbl_80022F30
	li       r0, 0
	stw      r0, sCurrentVolume__13JKRFileLoader@sda21(r13)

lbl_80022F30:
	addic.   r0, r30, 0x18
	beq      lbl_80022F44
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80022F44:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80022F60
	mr       r3, r30
	bl       __dl__FPv

lbl_80022F60:
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
 * Address:	80022F7C
 * Size:	000050
 */
void JKRFileLoader::unmount()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x34(r3)
	cmplwi   r4, 0
	beq      lbl_80022FBC
	addic.   r0, r4, -1
	stw      r0, 0x34(r3)
	bne      lbl_80022FBC
	cmplwi   r3, 0
	beq      lbl_80022FBC
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80022FBC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022FCC
 * Size:	00004C
 */
void* JKRFileLoader::getGlbResource(const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r3, 8(r1)
	addi     r3, r1, 8
	bl       findVolume__13JKRFileLoaderFPPCc
	cmplwi   r3, 0
	bne      lbl_80022FF4
	li       r3, 0
	b        lbl_80023008

lbl_80022FF4:
	lwz      r12, 0(r3)
	lwz      r4, 8(r1)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80023008:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80023018
 * Size:	000098
 */
void* JKRFileLoader::getGlbResource(const char*, JKRFileLoader*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	beq      lbl_8002305C
	mr       r3, r4
	mr       r5, r30
	lwz      r12, 0(r4)
	li       r4, 0
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	b        lbl_80023098

lbl_8002305C:
	lis      r4, sVolumeList__13JKRFileLoader@ha
	lwz      r31, sVolumeList__13JKRFileLoader@l(r4)
	b        lbl_80023090

lbl_80023068:
	lwz      r3, 0(r31)
	mr       r5, r30
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80023098
	lwz      r31, 0xc(r31)

lbl_80023090:
	cmplwi   r31, 0
	bne      lbl_80023068

lbl_80023098:
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
 * Address:	800230B0
 * Size:	00008C
 */
JKRArchive* JKRFileLoader::findVolume(const char**)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	mr       r31, r3
	lwz      r5, 0(r3)
	lbz      r0, 0(r5)
	cmpwi    r0, 0x2f
	beq      lbl_800230DC
	lwz      r3, sCurrentVolume__13JKRFileLoader@sda21(r13)
	b        lbl_80023128

lbl_800230DC:
	addi     r3, r1, 8
	li       r4, 0x101
	bl       fetchVolumeName__13JKRFileLoaderFPclPCc
	stw      r3, 0(r31)
	lis      r4, sVolumeList__13JKRFileLoader@ha
	lwz      r31, sVolumeList__13JKRFileLoader@l(r4)
	b        lbl_8002311C

lbl_800230F8:
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	lwz      r4, 0x28(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80023118
	lwz      r3, 0(r31)
	b        lbl_80023128

lbl_80023118:
	lwz      r31, 0xc(r31)

lbl_8002311C:
	cmplwi   r31, 0
	bne      lbl_800230F8
	li       r3, 0

lbl_80023128:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002313C
 * Size:	0000E0
 */
void JKRFileLoader::fetchVolumeName(char*, long, const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r2, lbl_80516528@sda21
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80023188
	mr       r3, r29
	addi     r4, r13, rootPath$2747@sda21
	bl       strcpy
	addi     r3, r13, rootPath$2747@sda21
	b        lbl_80023200

lbl_80023188:
	lis      r3, __lower_map@ha
	addi     r31, r31, 1
	addi     r3, r3, __lower_map@l
	b        lbl_800231CC

lbl_80023198:
	cmpwi    r30, 1
	ble      lbl_800231C8
	extsb    r0, r4
	cmpwi    r0, -1
	bne      lbl_800231B4
	li       r0, -1
	b        lbl_800231BC

lbl_800231B4:
	clrlwi   r0, r0, 0x18
	lbzx     r0, r3, r0

lbl_800231BC:
	stb      r0, 0(r29)
	addi     r29, r29, 1
	addi     r30, r30, -1

lbl_800231C8:
	addi     r31, r31, 1

lbl_800231CC:
	lbz      r4, 0(r31)
	extsb.   r0, r4
	beq      lbl_800231E4
	extsb    r0, r4
	cmpwi    r0, 0x2f
	bne      lbl_80023198

lbl_800231E4:
	li       r0, 0
	stb      r0, 0(r29)
	lbz      r0, 0(r31)
	extsb.   r0, r0
	bne      lbl_800231FC
	addi     r31, r13, rootPath$2747@sda21

lbl_800231FC:
	mr       r3, r31

lbl_80023200:
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
 * Address:	8002321C
 * Size:	000044
 */
void __sinit_JKRFileLoader_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sVolumeList__13JKRFileLoader@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sVolumeList__13JKRFileLoader@ha
	lis      r4, "__dt__24JSUList<13JKRFileLoader>Fv"@ha
	lis      r5, lbl_804EFFA0@ha
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	addi     r4, r4, "__dt__24JSUList<13JKRFileLoader>Fv"@l
	addi     r5, r5, lbl_804EFFA0@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80023260
 * Size:	000054
 */
void JSUList<JKRFileLoader>::~JSUList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80023298
	li       r4, 0
	bl       __dt__10JSUPtrListFv
	extsh.   r0, r31
	ble      lbl_80023298
	mr       r3, r30
	bl       __dl__FPv

lbl_80023298:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
