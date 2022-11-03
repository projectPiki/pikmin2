.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
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
.balign 8
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
	.4byte doUserCallBackFunc__Q32og9newScreen10CourseNameFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051D930
lbl_8051D930:
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen10CourseNameFv
__ct__Q32og9newScreen10CourseNameFv:
/* 80318050 00314F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80318054 00314F94  7C 08 02 A6 */	mflr r0
/* 80318058 00314F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031805C 00314F9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80318060 00314FA0  7C 7F 1B 78 */	mr r31, r3
/* 80318064 00314FA4  48 13 97 2D */	bl __ct__Q26Screen9SceneBaseFv
/* 80318068 00314FA8  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen10CourseName@ha
/* 8031806C 00314FAC  7F E3 FB 78 */	mr r3, r31
/* 80318070 00314FB0  38 04 8B 98 */	addi r0, r4, __vt__Q32og9newScreen10CourseName@l
/* 80318074 00314FB4  90 1F 00 00 */	stw r0, 0(r31)
/* 80318078 00314FB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031807C 00314FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80318080 00314FC0  7C 08 03 A6 */	mtlr r0
/* 80318084 00314FC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80318088 00314FC8  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen10CourseNameFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen10CourseNameFPQ28Resource10MgrCommand:
/* 8031808C 00314FCC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80318090 00314FD0  7C 08 02 A6 */	mflr r0
/* 80318094 00314FD4  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80318098 00314FD8  3C A0 55 52 */	lis r5, 0x55525345@ha
/* 8031809C 00314FDC  90 01 00 54 */	stw r0, 0x54(r1)
/* 803180A0 00314FE0  38 C5 53 45 */	addi r6, r5, 0x55525345@l
/* 803180A4 00314FE4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 803180A8 00314FE8  38 A0 43 4F */	li r5, 0x434f
/* 803180AC 00314FEC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803180B0 00314FF0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803180B4 00314FF4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803180B8 00314FF8  7C 7D 1B 78 */	mr r29, r3
/* 803180BC 00314FFC  3C 60 80 49 */	lis r3, lbl_8048E790@ha
/* 803180C0 00315000  83 DD 02 1C */	lwz r30, 0x21c(r29)
/* 803180C4 00315004  3B E3 E7 90 */	addi r31, r3, lbl_8048E790@l
/* 803180C8 00315008  7F C3 F3 78 */	mr r3, r30
/* 803180CC 0031500C  4B FF 72 51 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 803180D0 00315010  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803180D4 00315014  41 82 00 10 */	beq .L_803180E4
/* 803180D8 00315018  80 1E 00 08 */	lwz r0, 8(r30)
/* 803180DC 0031501C  90 1D 02 20 */	stw r0, 0x220(r29)
/* 803180E0 00315020  48 00 00 1C */	b .L_803180FC
.L_803180E4:
/* 803180E4 00315024  38 7F 00 00 */	addi r3, r31, 0
/* 803180E8 00315028  38 BF 00 18 */	addi r5, r31, 0x18
/* 803180EC 0031502C  38 80 00 3A */	li r4, 0x3a
/* 803180F0 00315030  38 C0 00 00 */	li r6, 0
/* 803180F4 00315034  4C C6 31 82 */	crclr 6
/* 803180F8 00315038  4B D1 25 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803180FC:
/* 803180FC 0031503C  80 1D 02 20 */	lwz r0, 0x220(r29)
/* 80318100 00315040  2C 00 00 04 */	cmpwi r0, 4
/* 80318104 00315044  41 80 00 0C */	blt .L_80318110
/* 80318108 00315048  38 00 00 00 */	li r0, 0
/* 8031810C 0031504C  90 1D 02 20 */	stw r0, 0x220(r29)
.L_80318110:
/* 80318110 00315050  80 1D 02 20 */	lwz r0, 0x220(r29)
/* 80318114 00315054  3C 60 80 4E */	lis r3, CourseNumToSZS__Q22og9newScreen@ha
/* 80318118 00315058  38 83 8B 28 */	addi r4, r3, CourseNumToSZS__Q22og9newScreen@l
/* 8031811C 0031505C  38 7D 00 04 */	addi r3, r29, 4
/* 80318120 00315060  54 00 10 3A */	slwi r0, r0, 2
/* 80318124 00315064  7C 84 00 2E */	lwzx r4, r4, r0
/* 80318128 00315068  4B FF FE 25 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 8031812C 0031506C  38 61 00 08 */	addi r3, r1, 8
/* 80318130 00315070  38 9D 00 04 */	addi r4, r29, 4
/* 80318134 00315074  48 13 44 A5 */	bl __ct__Q212LoadResource3ArgFPCc
/* 80318138 00315078  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8031813C 0031507C  38 81 00 08 */	addi r4, r1, 8
/* 80318140 00315080  48 13 45 D5 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 80318144 00315084  28 03 00 00 */	cmplwi r3, 0
/* 80318148 00315088  3B C0 00 00 */	li r30, 0
/* 8031814C 0031508C  41 82 00 2C */	beq .L_80318178
/* 80318150 00315090  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80318154 00315094  28 00 00 00 */	cmplwi r0, 0
/* 80318158 00315098  7C 1E 03 78 */	mr r30, r0
/* 8031815C 0031509C  40 82 00 30 */	bne .L_8031818C
/* 80318160 003150A0  38 7F 00 00 */	addi r3, r31, 0
/* 80318164 003150A4  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80318168 003150A8  38 80 00 62 */	li r4, 0x62
/* 8031816C 003150AC  4C C6 31 82 */	crclr 6
/* 80318170 003150B0  4B D1 24 D1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80318174 003150B4  48 00 00 18 */	b .L_8031818C
.L_80318178:
/* 80318178 003150B8  38 7F 00 00 */	addi r3, r31, 0
/* 8031817C 003150BC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80318180 003150C0  38 80 00 67 */	li r4, 0x67
/* 80318184 003150C4  4C C6 31 82 */	crclr 6
/* 80318188 003150C8  4B D1 24 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8031818C:
/* 8031818C 003150CC  7F A3 EB 78 */	mr r3, r29
/* 80318190 003150D0  7F C4 F3 78 */	mr r4, r30
/* 80318194 003150D4  48 00 00 25 */	bl doCreateObjUserCallBackFunc__Q32og9newScreen10CourseNameFP10JKRArchive
/* 80318198 003150D8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8031819C 003150DC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803181A0 003150E0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803181A4 003150E4  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803181A8 003150E8  7C 08 03 A6 */	mtlr r0
/* 803181AC 003150EC  38 21 00 50 */	addi r1, r1, 0x50
/* 803181B0 003150F0  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen10CourseNameFP10JKRArchive
doCreateObj__Q32og9newScreen10CourseNameFP10JKRArchive:
/* 803181B4 003150F4  4E 80 00 20 */	blr 

.global doCreateObjUserCallBackFunc__Q32og9newScreen10CourseNameFP10JKRArchive
doCreateObjUserCallBackFunc__Q32og9newScreen10CourseNameFP10JKRArchive:
/* 803181B8 003150F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803181BC 003150FC  7C 08 02 A6 */	mflr r0
/* 803181C0 00315100  90 01 00 14 */	stw r0, 0x14(r1)
/* 803181C4 00315104  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803181C8 00315108  7C 9F 23 78 */	mr r31, r4
/* 803181CC 0031510C  93 C1 00 08 */	stw r30, 8(r1)
/* 803181D0 00315110  7C 7E 1B 78 */	mr r30, r3
/* 803181D4 00315114  38 60 00 60 */	li r3, 0x60
/* 803181D8 00315118  4B D0 BC CD */	bl __nw__FUl
/* 803181DC 0031511C  7C 64 1B 79 */	or. r4, r3, r3
/* 803181E0 00315120  41 82 00 14 */	beq .L_803181F4
/* 803181E4 00315124  3C 80 80 49 */	lis r4, lbl_8048E7DC@ha
/* 803181E8 00315128  38 84 E7 DC */	addi r4, r4, lbl_8048E7DC@l
/* 803181EC 0031512C  4B FF F2 31 */	bl __ct__Q32og9newScreen13ObjCourseNameFPCc
/* 803181F0 00315130  7C 64 1B 78 */	mr r4, r3
.L_803181F4:
/* 803181F4 00315134  7F C3 F3 78 */	mr r3, r30
/* 803181F8 00315138  7F E5 FB 78 */	mr r5, r31
/* 803181FC 0031513C  48 13 9B 79 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80318200 00315140  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80318204 00315144  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80318208 00315148  83 C1 00 08 */	lwz r30, 8(r1)
/* 8031820C 0031514C  7C 08 03 A6 */	mtlr r0
/* 80318210 00315150  38 21 00 10 */	addi r1, r1, 0x10
/* 80318214 00315154  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen10CourseNameCFv
getResName__Q32og9newScreen10CourseNameCFv:
/* 80318218 00315158  38 62 F5 D0 */	addi r3, r2, lbl_8051D930@sda21
/* 8031821C 0031515C  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen10CourseNameFv
getSceneType__Q32og9newScreen10CourseNameFv:
/* 80318220 00315160  38 60 27 1E */	li r3, 0x271e
/* 80318224 00315164  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen10CourseNameFv
getOwnerID__Q32og9newScreen10CourseNameFv:
/* 80318228 00315168  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8031822C 0031516C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80318230 00315170  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen10CourseNameFv
getMemberID__Q32og9newScreen10CourseNameFv:
/* 80318234 00315174  3C 80 55 52 */	lis r4, 0x55525345@ha
/* 80318238 00315178  38 60 43 4F */	li r3, 0x434f
/* 8031823C 0031517C  38 84 53 45 */	addi r4, r4, 0x55525345@l
/* 80318240 00315180  4E 80 00 20 */	blr 
