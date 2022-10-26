#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E790
    lbl_8048E790:
        .4byte 0x6F675363
        .4byte 0x656E6543
        .4byte 0x6F757273
        .4byte 0x654E616D
        .4byte 0x652E6370
        .4byte 0x70000000
        .4byte 0x44697370
        .4byte 0x4D656D62
        .4byte 0x65722045
        .4byte 0x5252210A
        .4byte 0x00000000
        .4byte 0x61726320
        .4byte 0x6973204E
        .4byte 0x554C4C21
        .4byte 0x210A0000
        .4byte 0x6E6F6465
        .4byte 0x20697320
        .4byte 0x4E554C4C
        .4byte 0x21210A00
    .global lbl_8048E7DC
    lbl_8048E7DC:
        .asciz "course name screen"
        .skip 1
    .global lbl_8048E7F0
    lbl_8048E7F0:
        .asciz "res_course_name00.szs"
        .skip 2
    .global lbl_8048E808
    lbl_8048E808:
        .asciz "res_course_name01.szs"
        .skip 2
    .global lbl_8048E820
    lbl_8048E820:
        .asciz "res_course_name02.szs"
        .skip 2
    .global lbl_8048E838
    lbl_8048E838:
        .asciz "res_course_name03.szs"
        .skip 2
    .global lbl_8048E850
    lbl_8048E850:
        .asciz "course_name00.blo"
        .skip 2
    .global lbl_8048E864
    lbl_8048E864:
        .asciz "course_name01.blo"
        .skip 2
    .global lbl_8048E878
    lbl_8048E878:
        .asciz "course_name02.blo"
        .skip 2
    .global lbl_8048E88C
    lbl_8048E88C:
        .asciz "course_name03.blo"
        .skip 2
    .global lbl_8048E8A0
    lbl_8048E8A0:
        .asciz "course_name00.bck"
        .skip 2
    .global lbl_8048E8B4
    lbl_8048E8B4:
        .asciz "course_name00.btk"
        .skip 2
    .global lbl_8048E8C8
    lbl_8048E8C8:
        .asciz "course_name00.bpk"
        .skip 2
    .global lbl_8048E8DC
    lbl_8048E8DC:
        .asciz "course_name01.bck"
        .skip 2
    .global lbl_8048E8F0
    lbl_8048E8F0:
        .asciz "course_name01.btk"
        .skip 2
    .global lbl_8048E904
    lbl_8048E904:
        .asciz "course_name01.bpk"
        .skip 2
    .global lbl_8048E918
    lbl_8048E918:
        .asciz "course_name02.bck"
        .skip 2
    .global lbl_8048E92C
    lbl_8048E92C:
        .asciz "course_name02.btk"
        .skip 2
    .global lbl_8048E940
    lbl_8048E940:
        .asciz "course_name02.bpk"
        .skip 2
    .global lbl_8048E954
    lbl_8048E954:
        .asciz "course_name03.bck"
        .skip 2
    .global lbl_8048E968
    lbl_8048E968:
        .asciz "course_name03.btk"
        .skip 2
    .global lbl_8048E97C
    lbl_8048E97C:
        .asciz "course_name03.bpk"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global CourseNumToSZS__Q22og9newScreen
    CourseNumToSZS__Q22og9newScreen:
        .4byte lbl_8048E7F0
        .4byte lbl_8048E808
        .4byte lbl_8048E820
        .4byte lbl_8048E838
    .global bloFileNameCourse__Q22og9newScreen
    bloFileNameCourse__Q22og9newScreen:
        .4byte lbl_8048E850
        .4byte lbl_8048E864
        .4byte lbl_8048E878
        .4byte lbl_8048E88C
    .global animFile_Course00__Q22og9newScreen
    animFile_Course00__Q22og9newScreen:
        .4byte lbl_8048E8A0
        .4byte lbl_8048E8B4
        .4byte lbl_8048E8C8
        .4byte 0
    .global animFile_Course01__Q22og9newScreen
    animFile_Course01__Q22og9newScreen:
        .4byte lbl_8048E8DC
        .4byte lbl_8048E8F0
        .4byte lbl_8048E904
        .4byte 0
    .global animFile_Course02__Q22og9newScreen
    animFile_Course02__Q22og9newScreen:
        .4byte lbl_8048E918
        .4byte lbl_8048E92C
        .4byte lbl_8048E940
        .4byte 0
    .global animFile_Course03__Q22og9newScreen
    animFile_Course03__Q22og9newScreen:
        .4byte lbl_8048E954
        .4byte lbl_8048E968
        .4byte lbl_8048E97C
        .4byte 0
    .global animFileTableCourse__Q22og9newScreen
    animFileTableCourse__Q22og9newScreen:
        .4byte animFile_Course00__Q22og9newScreen
        .4byte animFile_Course01__Q22og9newScreen
        .4byte animFile_Course02__Q22og9newScreen
        .4byte animFile_Course03__Q22og9newScreen
    .global __vt__Q32og9newScreen10CourseName
    __vt__Q32og9newScreen10CourseName:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen10CourseNameFv
        .4byte getOwnerID__Q32og9newScreen10CourseNameFv
        .4byte getMemberID__Q32og9newScreen10CourseNameFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen10CourseNameCFv
        .4byte doCreateObj__Q32og9newScreen10CourseNameFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen10CourseNameFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q26Screen9SceneBaseFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D930
    lbl_8051D930:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80318050
 * Size:	00003C
 */
CourseName::CourseName(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen10CourseName@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen10CourseName@l
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
 * Size:	000074
 */
CourseName::~CourseName(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void CourseName::getCourseNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031808C
 * Size:	000128
 */
void CourseName::doUserCallBackFunc(Resource::MgrCommand*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, 0x004F4741@ha
	lis      r5, 0x55525345@ha
	stw      r0, 0x54(r1)
	addi     r6, r5, 0x55525345@l
	addi     r4, r4, 0x004F4741@l
	li       r5, 0x434f
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	lis      r3, lbl_8048E790@ha
	lwz      r30, 0x21c(r29)
	addi     r31, r3, lbl_8048E790@l
	mr       r3, r30
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803180E4
	lwz      r0, 8(r30)
	stw      r0, 0x220(r29)
	b        lbl_803180FC

lbl_803180E4:
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0x3a
	li       r6, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803180FC:
	lwz      r0, 0x220(r29)
	cmpwi    r0, 4
	blt      lbl_80318110
	li       r0, 0
	stw      r0, 0x220(r29)

lbl_80318110:
	lwz      r0, 0x220(r29)
	lis      r3, CourseNumToSZS__Q22og9newScreen@ha
	addi     r4, r3, CourseNumToSZS__Q22og9newScreen@l
	addi     r3, r29, 4
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	addi     r3, r1, 8
	addi     r4, r29, 4
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	li       r30, 0
	beq      lbl_80318178
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_8031818C
	addi     r3, r31, 0
	addi     r5, r31, 0x2c
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8031818C

lbl_80318178:
	addi     r3, r31, 0
	addi     r5, r31, 0x3c
	li       r4, 0x67
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031818C:
	mr       r3, r29
	mr       r4, r30
	bl
doCreateObjUserCallBackFunc__Q32og9newScreen10CourseNameFP10JKRArchive lwz
r0, 0x54(r1) lwz      r31, 0x4c(r1) lwz      r30, 0x48(r1) lwz      r29,
0x44(r1) mtlr     r0 addi     r1, r1, 0x50 blr
	*/
}

/*
 * --INFO--
 * Address:	803181B4
 * Size:	000004
 */
void CourseName::doCreateObj(JKRArchive*) { }

/*
 * --INFO--
 * Address:	803181B8
 * Size:	000060
 */
void CourseName::doCreateObjUserCallBackFunc(JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x60
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803181F4
	lis      r4, lbl_8048E7DC@ha
	addi     r4, r4, lbl_8048E7DC@l
	bl       __ct__Q32og9newScreen13ObjCourseNameFPCc
	mr       r4, r3

lbl_803181F4:
	mr       r3, r30
	mr       r5, r31
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
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
 * Address:	80318218
 * Size:	000008
 */
void CourseName::getResName() const
{
	/*
	addi     r3, r2, lbl_8051D930@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	80318220
 * Size:	000008
 */
u32 CourseName::getSceneType(void) { return 0x271E; }

/*
 * --INFO--
 * Address:	80318228
 * Size:	00000C
 */
void CourseName::getOwnerID(void)
{
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80318234
 * Size:	000010
 */
void CourseName::getMemberID(void)
{
	/*
	lis      r4, 0x55525345@ha
	li       r3, 0x434f
	addi     r4, r4, 0x55525345@l
	blr
	*/
}
} // namespace newScreen
} // namespace og
