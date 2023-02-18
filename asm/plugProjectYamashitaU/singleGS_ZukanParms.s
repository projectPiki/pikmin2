.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_singleGS_ZukanParms_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C358, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047C358
.balign 4
.obj lbl_8047C364, local
	.asciz "singleGS_ZukanParms.cpp"
.endobj lbl_8047C364
.balign 4
.obj lbl_8047C37C, local
	.asciz "Illegal slot.\n"
.endobj lbl_8047C37C
.balign 4
.obj lbl_8047C38C, local
	.asciz "PositionParms"
.endobj lbl_8047C38C
.balign 4
.obj lbl_8047C39C, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x88CA9275
	.4byte 0x81408298
	.byte 0
.endobj lbl_8047C39C
.balign 4
.obj lbl_8047C3AC, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x88CA9275
	.4byte 0x81408299
	.byte 0
.endobj lbl_8047C3AC
.balign 4
.obj lbl_8047C3BC, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x88CA9275
	.4byte 0x8140829A
	.byte 0
.endobj lbl_8047C3BC
.balign 4
.obj lbl_8047C3CC, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x8FEA8F8A
	.4byte 0x96BC0000
.endobj lbl_8047C3CC
.balign 4
.obj lbl_8047C3D8, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x88CA9275
	.4byte 0x838A8358
	.4byte 0x83670000
.endobj lbl_8047C3D8
.balign 4
.obj lbl_8047C3E8, local
	.asciz "enemyParms"
.endobj lbl_8047C3E8
.balign 4
.obj lbl_8047C3F4, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x94CD88CD
	.byte 0
.endobj lbl_8047C3F4
.balign 4
.obj lbl_8047C400, local
	.asciz "cameraParms"
.endobj lbl_8047C400
.balign 4
.obj lbl_8047C40C, local # Shift-JIS
	.4byte 0x8D8282B3
	.4byte 0x81408F89
	.4byte 0x8AFA926C
	.byte 0
.endobj lbl_8047C40C
.balign 4
.obj lbl_8047C41C, local # Shift-JIS
	.4byte 0x8D8282B3
	.4byte 0x81408DC5
	.4byte 0x8FAC926C
	.byte 0
.endobj lbl_8047C41C
.balign 4
.obj lbl_8047C42C, local # Shift-JIS
	.4byte 0x8D8282B3
	.4byte 0x81408DC5
	.4byte 0x91E5926C
	.byte 0
.endobj lbl_8047C42C
.balign 4
.obj lbl_8047C43C, local # Shift-JIS
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x83678140
	.4byte 0x82980000
.endobj lbl_8047C43C
.balign 4
.obj lbl_8047C44C, local # Shift-JIS
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x83678140
	.4byte 0x82990000
.endobj lbl_8047C44C
.balign 4
.obj lbl_8047C45C, local # Shift-JIS
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x83678140
	.4byte 0x829A0000
.endobj lbl_8047C45C
.balign 4
.obj lbl_8047C46C, local # Shift-JIS
	.4byte 0x89E68A70
	.4byte 0x81408F89
	.4byte 0x8AFA926C
	.byte 0
.endobj lbl_8047C46C
.balign 4
.obj lbl_8047C47C, local # Shift-JIS
	.4byte 0x89E68A70
	.4byte 0x81408DC5
	.4byte 0x8FAC926C
	.byte 0
.endobj lbl_8047C47C
.balign 4
.obj lbl_8047C48C, local # Shift-JIS
	.4byte 0x89E68A70
	.4byte 0x81408DC5
	.4byte 0x91E5926C
	.byte 0
.endobj lbl_8047C48C
.balign 4
.obj lbl_8047C49C, local # Shift-JIS
	.4byte 0x89F1935D
	.4byte 0x81408F89
	.4byte 0x8AFA926C
	.byte 0
.endobj lbl_8047C49C
.balign 4
.obj lbl_8047C4AC, local # Shift-JIS
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x83678298
	.byte 0
.endobj lbl_8047C4AC
.balign 4
.obj lbl_8047C4BC, local # Shift-JIS
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x83678299
	.byte 0
.endobj lbl_8047C4BC
.balign 4
.obj lbl_8047C4CC, local # Shift-JIS
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x8367829A
	.byte 0
.endobj lbl_8047C4CC
.balign 4
.obj lbl_8047C4DC, local # Shift-JIS
	.4byte 0x82A895F3
	.4byte 0x907D8AD3
	.byte 0
.endobj lbl_8047C4DC
.balign 4
.obj lbl_8047C4E8, local # Shift-JIS
	.4byte 0x907D8AD3
	.4byte 0x90DD92E8
	.byte 0
.endobj lbl_8047C4E8
.balign 4
.obj lbl_8047C4F4, local
	.asciz "P2Assert"
.endobj lbl_8047C4F4
.balign 4
.obj lbl_8047C500, local
	.asciz "setting.ini"
.endobj lbl_8047C500
.balign 4
.obj lbl_8047C50C, local
	.asciz "load error.[%s]\n"
.endobj lbl_8047C50C
.balign 4
.obj lbl_8047C520, local
	.asciz "no fileName"
.endobj lbl_8047C520

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game15IllustratedBook5Parms, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook5ParmsFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook5ParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook5Parms
.obj __vt__Q34Game15IllustratedBook13ItemModeParms, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook13ItemModeParmsFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook13ItemModeParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook13ItemModeParms
.obj __vt__Q34Game15IllustratedBook9ItemParms, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook9ItemParmsFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook9ItemParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook9ItemParms
.obj __vt__Q34Game15IllustratedBook14EnemyModeParms, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook14EnemyModeParmsFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook14EnemyModeParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook14EnemyModeParms
.obj __vt__Q34Game15IllustratedBook10EnemyParms, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook10EnemyParmsFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook10EnemyParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook10EnemyParms
.obj __vt__Q34Game15IllustratedBook11CameraParms, global
	.4byte 0
	.4byte 0
	.4byte read__Q34Game15IllustratedBook11CameraParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook11CameraParms
.obj __vt__Q34Game15IllustratedBook17PositionParmsList, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook17PositionParmsListFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook17PositionParmsListFR6Stream
.endobj __vt__Q34Game15IllustratedBook17PositionParmsList
.obj __vt__Q34Game15IllustratedBook13PositionParms, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook13PositionParmsFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook13PositionParmsFR6Stream
.endobj __vt__Q34Game15IllustratedBook13PositionParms
.obj __vt__Q34Game15IllustratedBook12ColorSetting, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15IllustratedBook12ColorSettingFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q34Game15IllustratedBook12ColorSettingFR6Stream
.endobj __vt__Q34Game15IllustratedBook12ColorSetting

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj sZukanState__Q34Game15IllustratedBook5Parms, global
	.skip 0x4
.endobj sZukanState__Q34Game15IllustratedBook5Parms
.obj sCamera__Q34Game15IllustratedBook5Parms, global
	.skip 0x4
.endobj sCamera__Q34Game15IllustratedBook5Parms

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518150, local # Shift-JIS
	.4byte 0x904690DD
	.4byte 0x92E80000
.endobj lbl_80518150
.balign 4
.obj lbl_80518158, local
	.float 0.5
.endobj lbl_80518158
.obj lbl_8051815C, local
	.float 2.0
.endobj lbl_8051815C
.balign 8
.obj lbl_80518160, local
	.8byte 0x4330000000000000
.endobj lbl_80518160
.obj lbl_80518168, local
	.float 0.0
.endobj lbl_80518168
.obj lbl_8051816C, local
	.float -10000.0
.endobj lbl_8051816C
.obj lbl_80518170, local
	.float 10000.0
.endobj lbl_80518170
.balign 4
.obj lbl_80518174, local
	.asciz ""
.endobj lbl_80518174
.balign 4
.obj lbl_80518178, local # Shift-JIS
	.4byte 0x91E582AB
	.4byte 0x82B30000
.endobj lbl_80518178
.balign 4
.obj lbl_80518180, local
	.float 10.0
.endobj lbl_80518180
.obj lbl_80518184, local
	.float 1000.0
.endobj lbl_80518184
.balign 4
.obj lbl_80518188, local # Shift-JIS
	.4byte 0x8F6F8CBB
	.4byte 0x90940000
.endobj lbl_80518188
.balign 4
.obj lbl_80518190, local # Shift-JIS
	.4byte 0x94BC8C61
	.byte 0
.endobj lbl_80518190
.balign 4
.obj lbl_80518198, local
	.float 350.0
.endobj lbl_80518198
.obj lbl_8051819C, local
	.float 2000.0
.endobj lbl_8051819C
.obj lbl_805181A0, local
	.float 500.0
.endobj lbl_805181A0
.obj lbl_805181A4, local
	.float 700.0
.endobj lbl_805181A4
.obj lbl_805181A8, local
	.float -500.0
.endobj lbl_805181A8
.obj lbl_805181AC, local
	.float 30.0
.endobj lbl_805181AC
.obj lbl_805181B0, local
	.float 90.0
.endobj lbl_805181B0
.obj lbl_805181B4, local
	.float 0.1
.endobj lbl_805181B4
.obj lbl_805181B8, local
	.float 360.0
.endobj lbl_805181B8
.balign 4
.obj lbl_805181BC, local # Shift-JIS
	.4byte 0x9347907D
	.4byte 0x8AD30000
.endobj lbl_805181BC
.balign 4
.obj lbl_805181C4, local # Shift-JIS
	.4byte 0x90DD92E8
	.byte 0
.endobj lbl_805181C4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game15IllustratedBook12ColorSettingFv, global
/* 80130B9C 0012DADC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80130BA0 0012DAE0  7C 08 02 A6 */	mflr r0
/* 80130BA4 0012DAE4  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 80130BA8 0012DAE8  39 20 00 00 */	li r9, 0
/* 80130BAC 0012DAEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80130BB0 0012DAF0  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 80130BB4 0012DAF4  39 02 9D F0 */	addi r8, r2, lbl_80518150@sda21
/* 80130BB8 0012DAF8  3C A0 80 4B */	lis r5, __vt__Q34Game15IllustratedBook12ColorSetting@ha
/* 80130BBC 0012DAFC  BF 41 00 08 */	stmw r26, 8(r1)
/* 80130BC0 0012DB00  7C 7F 1B 78 */	mr r31, r3
/* 80130BC4 0012DB04  38 C0 00 04 */	li r6, 4
/* 80130BC8 0012DB08  38 E0 00 0A */	li r7, 0xa
/* 80130BCC 0012DB0C  90 03 00 00 */	stw r0, 0(r3)
/* 80130BD0 0012DB10  38 05 FA 6C */	addi r0, r5, __vt__Q34Game15IllustratedBook12ColorSetting@l
/* 80130BD4 0012DB14  3C 60 80 13 */	lis r3, __ct__6Color4Fv@ha
/* 80130BD8 0012DB18  38 A0 00 00 */	li r5, 0
/* 80130BDC 0012DB1C  91 3F 00 10 */	stw r9, 0x10(r31)
/* 80130BE0 0012DB20  38 83 0D 6C */	addi r4, r3, __ct__6Color4Fv@l
/* 80130BE4 0012DB24  38 7F 00 18 */	addi r3, r31, 0x18
/* 80130BE8 0012DB28  91 3F 00 0C */	stw r9, 0xc(r31)
/* 80130BEC 0012DB2C  91 3F 00 08 */	stw r9, 8(r31)
/* 80130BF0 0012DB30  91 3F 00 04 */	stw r9, 4(r31)
/* 80130BF4 0012DB34  91 1F 00 14 */	stw r8, 0x14(r31)
/* 80130BF8 0012DB38  90 1F 00 00 */	stw r0, 0(r31)
/* 80130BFC 0012DB3C  4B F9 0C 41 */	bl __construct_array
/* 80130C00 0012DB40  3C 80 80 13 */	lis r4, __ct__6Color4Fv@ha
/* 80130C04 0012DB44  38 7F 00 40 */	addi r3, r31, 0x40
/* 80130C08 0012DB48  38 84 0D 6C */	addi r4, r4, __ct__6Color4Fv@l
/* 80130C0C 0012DB4C  38 A0 00 00 */	li r5, 0
/* 80130C10 0012DB50  38 C0 00 04 */	li r6, 4
/* 80130C14 0012DB54  38 E0 00 05 */	li r7, 5
/* 80130C18 0012DB58  4B F9 0C 25 */	bl __construct_array
/* 80130C1C 0012DB5C  38 00 00 58 */	li r0, 0x58
/* 80130C20 0012DB60  38 60 00 5B */	li r3, 0x5b
/* 80130C24 0012DB64  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80130C28 0012DB68  38 00 00 99 */	li r0, 0x99
/* 80130C2C 0012DB6C  3B 40 00 FF */	li r26, 0xff
/* 80130C30 0012DB70  3B 60 00 40 */	li r27, 0x40
/* 80130C34 0012DB74  98 7F 00 19 */	stb r3, 0x19(r31)
/* 80130C38 0012DB78  3B 80 00 A6 */	li r28, 0xa6
/* 80130C3C 0012DB7C  3B A0 00 E8 */	li r29, 0xe8
/* 80130C40 0012DB80  3B C0 00 FD */	li r30, 0xfd
/* 80130C44 0012DB84  98 1F 00 1A */	stb r0, 0x1a(r31)
/* 80130C48 0012DB88  39 80 00 C0 */	li r12, 0xc0
/* 80130C4C 0012DB8C  39 60 00 80 */	li r11, 0x80
/* 80130C50 0012DB90  39 40 00 8F */	li r10, 0x8f
/* 80130C54 0012DB94  9B 5F 00 1B */	stb r26, 0x1b(r31)
/* 80130C58 0012DB98  39 20 00 49 */	li r9, 0x49
/* 80130C5C 0012DB9C  39 00 00 08 */	li r8, 8
/* 80130C60 0012DBA0  38 E0 00 32 */	li r7, 0x32
/* 80130C64 0012DBA4  9B 7F 00 1C */	stb r27, 0x1c(r31)
/* 80130C68 0012DBA8  38 C0 00 28 */	li r6, 0x28
/* 80130C6C 0012DBAC  38 A0 00 34 */	li r5, 0x34
/* 80130C70 0012DBB0  38 80 00 20 */	li r4, 0x20
/* 80130C74 0012DBB4  9B 7F 00 1D */	stb r27, 0x1d(r31)
/* 80130C78 0012DBB8  38 00 00 0A */	li r0, 0xa
/* 80130C7C 0012DBBC  7F E3 FB 78 */	mr r3, r31
/* 80130C80 0012DBC0  9B 7F 00 1E */	stb r27, 0x1e(r31)
/* 80130C84 0012DBC4  9B 5F 00 1F */	stb r26, 0x1f(r31)
/* 80130C88 0012DBC8  9B 9F 00 20 */	stb r28, 0x20(r31)
/* 80130C8C 0012DBCC  9B BF 00 21 */	stb r29, 0x21(r31)
/* 80130C90 0012DBD0  9B DF 00 22 */	stb r30, 0x22(r31)
/* 80130C94 0012DBD4  9B 5F 00 23 */	stb r26, 0x23(r31)
/* 80130C98 0012DBD8  9B 5F 00 24 */	stb r26, 0x24(r31)
/* 80130C9C 0012DBDC  9B 5F 00 25 */	stb r26, 0x25(r31)
/* 80130CA0 0012DBE0  9B 5F 00 26 */	stb r26, 0x26(r31)
/* 80130CA4 0012DBE4  9B 5F 00 27 */	stb r26, 0x27(r31)
/* 80130CA8 0012DBE8  9B 9F 00 28 */	stb r28, 0x28(r31)
/* 80130CAC 0012DBEC  9B BF 00 29 */	stb r29, 0x29(r31)
/* 80130CB0 0012DBF0  9B DF 00 2A */	stb r30, 0x2a(r31)
/* 80130CB4 0012DBF4  9B 5F 00 2B */	stb r26, 0x2b(r31)
/* 80130CB8 0012DBF8  9B 5F 00 2C */	stb r26, 0x2c(r31)
/* 80130CBC 0012DBFC  9B 5F 00 2D */	stb r26, 0x2d(r31)
/* 80130CC0 0012DC00  9B 5F 00 2E */	stb r26, 0x2e(r31)
/* 80130CC4 0012DC04  9B 5F 00 2F */	stb r26, 0x2f(r31)
/* 80130CC8 0012DC08  9B 5F 00 30 */	stb r26, 0x30(r31)
/* 80130CCC 0012DC0C  99 9F 00 31 */	stb r12, 0x31(r31)
/* 80130CD0 0012DC10  99 7F 00 32 */	stb r11, 0x32(r31)
/* 80130CD4 0012DC14  9B 5F 00 33 */	stb r26, 0x33(r31)
/* 80130CD8 0012DC18  9B 5F 00 34 */	stb r26, 0x34(r31)
/* 80130CDC 0012DC1C  9B 5F 00 35 */	stb r26, 0x35(r31)
/* 80130CE0 0012DC20  99 5F 00 36 */	stb r10, 0x36(r31)
/* 80130CE4 0012DC24  9B 5F 00 37 */	stb r26, 0x37(r31)
/* 80130CE8 0012DC28  9B 5F 00 38 */	stb r26, 0x38(r31)
/* 80130CEC 0012DC2C  9B 5F 00 39 */	stb r26, 0x39(r31)
/* 80130CF0 0012DC30  9B 5F 00 3A */	stb r26, 0x3a(r31)
/* 80130CF4 0012DC34  9B 5F 00 3B */	stb r26, 0x3b(r31)
/* 80130CF8 0012DC38  9B 5F 00 3C */	stb r26, 0x3c(r31)
/* 80130CFC 0012DC3C  9B 5F 00 3D */	stb r26, 0x3d(r31)
/* 80130D00 0012DC40  9B 5F 00 3E */	stb r26, 0x3e(r31)
/* 80130D04 0012DC44  9B 5F 00 3F */	stb r26, 0x3f(r31)
/* 80130D08 0012DC48  99 3F 00 40 */	stb r9, 0x40(r31)
/* 80130D0C 0012DC4C  99 3F 00 41 */	stb r9, 0x41(r31)
/* 80130D10 0012DC50  99 3F 00 42 */	stb r9, 0x42(r31)
/* 80130D14 0012DC54  9B 5F 00 43 */	stb r26, 0x43(r31)
/* 80130D18 0012DC58  99 1F 00 44 */	stb r8, 0x44(r31)
/* 80130D1C 0012DC5C  99 1F 00 45 */	stb r8, 0x45(r31)
/* 80130D20 0012DC60  99 1F 00 46 */	stb r8, 0x46(r31)
/* 80130D24 0012DC64  9B 5F 00 47 */	stb r26, 0x47(r31)
/* 80130D28 0012DC68  98 FF 00 48 */	stb r7, 0x48(r31)
/* 80130D2C 0012DC6C  98 FF 00 49 */	stb r7, 0x49(r31)
/* 80130D30 0012DC70  98 DF 00 4A */	stb r6, 0x4a(r31)
/* 80130D34 0012DC74  9B 5F 00 4B */	stb r26, 0x4b(r31)
/* 80130D38 0012DC78  98 BF 00 4C */	stb r5, 0x4c(r31)
/* 80130D3C 0012DC7C  98 9F 00 4D */	stb r4, 0x4d(r31)
/* 80130D40 0012DC80  98 1F 00 4E */	stb r0, 0x4e(r31)
/* 80130D44 0012DC84  9B 5F 00 4F */	stb r26, 0x4f(r31)
/* 80130D48 0012DC88  98 9F 00 50 */	stb r4, 0x50(r31)
/* 80130D4C 0012DC8C  98 9F 00 51 */	stb r4, 0x51(r31)
/* 80130D50 0012DC90  98 1F 00 52 */	stb r0, 0x52(r31)
/* 80130D54 0012DC94  9B 5F 00 53 */	stb r26, 0x53(r31)
/* 80130D58 0012DC98  BB 41 00 08 */	lmw r26, 8(r1)
/* 80130D5C 0012DC9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80130D60 0012DCA0  7C 08 03 A6 */	mtlr r0
/* 80130D64 0012DCA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80130D68 0012DCA8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15IllustratedBook12ColorSettingFv

.fn __ct__6Color4Fv, weak
/* 80130D6C 0012DCAC  4E 80 00 20 */	blr 
.endfn __ct__6Color4Fv

.fn read__Q34Game15IllustratedBook12ColorSettingFR6Stream, global
/* 80130D70 0012DCB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80130D74 0012DCB4  7C 08 02 A6 */	mflr r0
/* 80130D78 0012DCB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80130D7C 0012DCBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80130D80 0012DCC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80130D84 0012DCC4  3B C0 00 00 */	li r30, 0
/* 80130D88 0012DCC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80130D8C 0012DCCC  7C 9D 23 78 */	mr r29, r4
/* 80130D90 0012DCD0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80130D94 0012DCD4  7C 7C 1B 78 */	mr r28, r3
/* 80130D98 0012DCD8  7F 9F E3 78 */	mr r31, r28
.L_80130D9C:
/* 80130D9C 0012DCDC  7F A4 EB 78 */	mr r4, r29
/* 80130DA0 0012DCE0  38 7F 00 18 */	addi r3, r31, 0x18
/* 80130DA4 0012DCE4  48 2E 0D C9 */	bl read__6Color4FR6Stream
/* 80130DA8 0012DCE8  7F A4 EB 78 */	mr r4, r29
/* 80130DAC 0012DCEC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80130DB0 0012DCF0  48 2E 0D BD */	bl read__6Color4FR6Stream
/* 80130DB4 0012DCF4  3B DE 00 01 */	addi r30, r30, 1
/* 80130DB8 0012DCF8  3B FF 00 08 */	addi r31, r31, 8
/* 80130DBC 0012DCFC  2C 1E 00 04 */	cmpwi r30, 4
/* 80130DC0 0012DD00  41 80 FF DC */	blt .L_80130D9C
/* 80130DC4 0012DD04  3B C0 00 00 */	li r30, 0
/* 80130DC8 0012DD08  7F 9F E3 78 */	mr r31, r28
.L_80130DCC:
/* 80130DCC 0012DD0C  7F A4 EB 78 */	mr r4, r29
/* 80130DD0 0012DD10  38 7F 00 40 */	addi r3, r31, 0x40
/* 80130DD4 0012DD14  48 2E 0D 99 */	bl read__6Color4FR6Stream
/* 80130DD8 0012DD18  3B DE 00 01 */	addi r30, r30, 1
/* 80130DDC 0012DD1C  3B FF 00 04 */	addi r31, r31, 4
/* 80130DE0 0012DD20  2C 1E 00 04 */	cmpwi r30, 4
/* 80130DE4 0012DD24  41 80 FF E8 */	blt .L_80130DCC
/* 80130DE8 0012DD28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80130DEC 0012DD2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80130DF0 0012DD30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80130DF4 0012DD34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80130DF8 0012DD38  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80130DFC 0012DD3C  7C 08 03 A6 */	mtlr r0
/* 80130E00 0012DD40  38 21 00 20 */	addi r1, r1, 0x20
/* 80130E04 0012DD44  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook12ColorSettingFR6Stream

.fn update__Q34Game15IllustratedBook12ColorSettingFv, global
/* 80130E08 0012DD48  94 21 FE 60 */	stwu r1, -0x1a0(r1)
/* 80130E0C 0012DD4C  7C 08 02 A6 */	mflr r0
/* 80130E10 0012DD50  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 80130E14 0012DD54  93 E1 01 9C */	stw r31, 0x19c(r1)
/* 80130E18 0012DD58  93 C1 01 98 */	stw r30, 0x198(r1)
/* 80130E1C 0012DD5C  7C 7E 1B 78 */	mr r30, r3
/* 80130E20 0012DD60  93 A1 01 94 */	stw r29, 0x194(r1)
/* 80130E24 0012DD64  93 81 01 90 */	stw r28, 0x190(r1)
/* 80130E28 0012DD68  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80130E2C 0012DD6C  80 64 00 40 */	lwz r3, 0x40(r4)
/* 80130E30 0012DD70  80 03 02 10 */	lwz r0, 0x210(r3)
/* 80130E34 0012DD74  2C 00 00 02 */	cmpwi r0, 2
/* 80130E38 0012DD78  41 82 00 44 */	beq .L_80130E7C
/* 80130E3C 0012DD7C  40 80 00 14 */	bge .L_80130E50
/* 80130E40 0012DD80  2C 00 00 00 */	cmpwi r0, 0
/* 80130E44 0012DD84  41 82 00 18 */	beq .L_80130E5C
/* 80130E48 0012DD88  40 80 00 24 */	bge .L_80130E6C
/* 80130E4C 0012DD8C  48 00 00 50 */	b .L_80130E9C
.L_80130E50:
/* 80130E50 0012DD90  2C 00 00 04 */	cmpwi r0, 4
/* 80130E54 0012DD94  40 80 00 48 */	bge .L_80130E9C
/* 80130E58 0012DD98  48 00 00 34 */	b .L_80130E8C
.L_80130E5C:
/* 80130E5C 0012DD9C  3B A0 00 00 */	li r29, 0
/* 80130E60 0012DDA0  3B 80 00 00 */	li r28, 0
/* 80130E64 0012DDA4  3B E0 00 00 */	li r31, 0
/* 80130E68 0012DDA8  48 00 00 50 */	b .L_80130EB8
.L_80130E6C:
/* 80130E6C 0012DDAC  3B A0 00 00 */	li r29, 0
/* 80130E70 0012DDB0  3B 80 00 01 */	li r28, 1
/* 80130E74 0012DDB4  3B E0 00 02 */	li r31, 2
/* 80130E78 0012DDB8  48 00 00 40 */	b .L_80130EB8
.L_80130E7C:
/* 80130E7C 0012DDBC  3B A0 00 02 */	li r29, 2
/* 80130E80 0012DDC0  3B 80 00 02 */	li r28, 2
/* 80130E84 0012DDC4  3B E0 00 02 */	li r31, 2
/* 80130E88 0012DDC8  48 00 00 30 */	b .L_80130EB8
.L_80130E8C:
/* 80130E8C 0012DDCC  3B A0 00 02 */	li r29, 2
/* 80130E90 0012DDD0  3B 80 00 03 */	li r28, 3
/* 80130E94 0012DDD4  3B E0 00 00 */	li r31, 0
/* 80130E98 0012DDD8  48 00 00 20 */	b .L_80130EB8
.L_80130E9C:
/* 80130E9C 0012DDDC  3C 60 80 48 */	lis r3, lbl_8047C364@ha
/* 80130EA0 0012DDE0  3C A0 80 48 */	lis r5, lbl_8047C37C@ha
/* 80130EA4 0012DDE4  38 63 C3 64 */	addi r3, r3, lbl_8047C364@l
/* 80130EA8 0012DDE8  38 80 00 CD */	li r4, 0xcd
/* 80130EAC 0012DDEC  38 A5 C3 7C */	addi r5, r5, lbl_8047C37C@l
/* 80130EB0 0012DDF0  4C C6 31 82 */	crclr 6
/* 80130EB4 0012DDF4  4B EF 97 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80130EB8:
/* 80130EB8 0012DDF8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80130EBC 0012DDFC  57 A6 10 3A */	slwi r6, r29, 2
/* 80130EC0 0012DE00  57 84 10 3A */	slwi r4, r28, 2
/* 80130EC4 0012DE04  57 E5 10 3A */	slwi r5, r31, 2
/* 80130EC8 0012DE08  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80130ECC 0012DE0C  57 A8 18 38 */	slwi r8, r29, 3
/* 80130ED0 0012DE10  57 87 18 38 */	slwi r7, r28, 3
/* 80130ED4 0012DE14  57 E0 18 38 */	slwi r0, r31, 3
/* 80130ED8 0012DE18  C0 43 02 14 */	lfs f2, 0x214(r3)
/* 80130EDC 0012DE1C  38 66 00 40 */	addi r3, r6, 0x40
/* 80130EE0 0012DE20  C0 02 9D F8 */	lfs f0, lbl_80518158@sda21(r2)
/* 80130EE4 0012DE24  38 84 00 40 */	addi r4, r4, 0x40
/* 80130EE8 0012DE28  38 A5 00 40 */	addi r5, r5, 0x40
/* 80130EEC 0012DE2C  7D 1E 42 14 */	add r8, r30, r8
/* 80130EF0 0012DE30  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80130EF4 0012DE34  7C DE 3A 14 */	add r6, r30, r7
/* 80130EF8 0012DE38  7C FE 02 14 */	add r7, r30, r0
/* 80130EFC 0012DE3C  7C 7E 1A 14 */	add r3, r30, r3
/* 80130F00 0012DE40  7C 9E 22 14 */	add r4, r30, r4
/* 80130F04 0012DE44  7C BE 2A 14 */	add r5, r30, r5
/* 80130F08 0012DE48  40 80 03 D8 */	bge .L_801312E0
/* 80130F0C 0012DE4C  88 E8 00 18 */	lbz r7, 0x18(r8)
/* 80130F10 0012DE50  3C A0 43 30 */	lis r5, 0x4330
/* 80130F14 0012DE54  88 06 00 18 */	lbz r0, 0x18(r6)
/* 80130F18 0012DE58  90 A1 00 08 */	stw r5, 8(r1)
/* 80130F1C 0012DE5C  C0 22 9D FC */	lfs f1, lbl_8051815C@sda21(r2)
/* 80130F20 0012DE60  90 01 00 0C */	stw r0, 0xc(r1)
/* 80130F24 0012DE64  C8 02 9E 00 */	lfd f0, lbl_80518160@sda21(r2)
/* 80130F28 0012DE68  EC 22 00 72 */	fmuls f1, f2, f1
/* 80130F2C 0012DE6C  C8 41 00 08 */	lfd f2, 8(r1)
/* 80130F30 0012DE70  90 E1 00 14 */	stw r7, 0x14(r1)
/* 80130F34 0012DE74  EC 82 00 28 */	fsubs f4, f2, f0
/* 80130F38 0012DE78  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80130F3C 0012DE7C  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80130F40 0012DE80  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80130F44 0012DE84  EC 62 00 28 */	fsubs f3, f2, f0
/* 80130F48 0012DE88  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80130F4C 0012DE8C  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80130F50 0012DE90  EC 64 18 28 */	fsubs f3, f4, f3
/* 80130F54 0012DE94  90 A1 00 28 */	stw r5, 0x28(r1)
/* 80130F58 0012DE98  EC 42 00 28 */	fsubs f2, f2, f0
/* 80130F5C 0012DE9C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80130F60 0012DEA0  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80130F64 0012DEA4  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80130F68 0012DEA8  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80130F6C 0012DEAC  FC 40 10 1E */	fctiwz f2, f2
/* 80130F70 0012DEB0  90 A1 00 50 */	stw r5, 0x50(r1)
/* 80130F74 0012DEB4  D8 41 00 20 */	stfd f2, 0x20(r1)
/* 80130F78 0012DEB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80130F7C 0012DEBC  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80130F80 0012DEC0  98 1E 00 54 */	stb r0, 0x54(r30)
/* 80130F84 0012DEC4  88 E8 00 19 */	lbz r7, 0x19(r8)
/* 80130F88 0012DEC8  88 06 00 19 */	lbz r0, 0x19(r6)
/* 80130F8C 0012DECC  90 E1 00 34 */	stw r7, 0x34(r1)
/* 80130F90 0012DED0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80130F94 0012DED4  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80130F98 0012DED8  C8 81 00 28 */	lfd f4, 0x28(r1)
/* 80130F9C 0012DEDC  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 80130FA0 0012DEE0  EC 62 00 28 */	fsubs f3, f2, f0
/* 80130FA4 0012DEE4  EC 84 00 28 */	fsubs f4, f4, f0
/* 80130FA8 0012DEE8  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 80130FAC 0012DEEC  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80130FB0 0012DEF0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80130FB4 0012DEF4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80130FB8 0012DEF8  90 A1 00 70 */	stw r5, 0x70(r1)
/* 80130FBC 0012DEFC  90 A1 00 78 */	stw r5, 0x78(r1)
/* 80130FC0 0012DF00  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80130FC4 0012DF04  FC 40 10 1E */	fctiwz f2, f2
/* 80130FC8 0012DF08  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 80130FCC 0012DF0C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80130FD0 0012DF10  98 1E 00 55 */	stb r0, 0x55(r30)
/* 80130FD4 0012DF14  88 E8 00 1A */	lbz r7, 0x1a(r8)
/* 80130FD8 0012DF18  88 06 00 1A */	lbz r0, 0x1a(r6)
/* 80130FDC 0012DF1C  90 E1 00 54 */	stw r7, 0x54(r1)
/* 80130FE0 0012DF20  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80130FE4 0012DF24  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 80130FE8 0012DF28  C8 81 00 48 */	lfd f4, 0x48(r1)
/* 80130FEC 0012DF2C  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80130FF0 0012DF30  EC 62 00 28 */	fsubs f3, f2, f0
/* 80130FF4 0012DF34  EC 84 00 28 */	fsubs f4, f4, f0
/* 80130FF8 0012DF38  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 80130FFC 0012DF3C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131000 0012DF40  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131004 0012DF44  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131008 0012DF48  FC 40 10 1E */	fctiwz f2, f2
/* 8013100C 0012DF4C  D8 41 00 60 */	stfd f2, 0x60(r1)
/* 80131010 0012DF50  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80131014 0012DF54  98 1E 00 56 */	stb r0, 0x56(r30)
/* 80131018 0012DF58  88 E8 00 1B */	lbz r7, 0x1b(r8)
/* 8013101C 0012DF5C  88 06 00 1B */	lbz r0, 0x1b(r6)
/* 80131020 0012DF60  90 E1 00 74 */	stw r7, 0x74(r1)
/* 80131024 0012DF64  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80131028 0012DF68  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 8013102C 0012DF6C  C8 81 00 68 */	lfd f4, 0x68(r1)
/* 80131030 0012DF70  90 E1 00 7C */	stw r7, 0x7c(r1)
/* 80131034 0012DF74  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131038 0012DF78  EC 84 00 28 */	fsubs f4, f4, f0
/* 8013103C 0012DF7C  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80131040 0012DF80  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131044 0012DF84  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131048 0012DF88  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 8013104C 0012DF8C  FC 40 10 1E */	fctiwz f2, f2
/* 80131050 0012DF90  D8 41 00 80 */	stfd f2, 0x80(r1)
/* 80131054 0012DF94  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80131058 0012DF98  98 1E 00 57 */	stb r0, 0x57(r30)
/* 8013105C 0012DF9C  88 E8 00 1C */	lbz r7, 0x1c(r8)
/* 80131060 0012DFA0  88 06 00 1C */	lbz r0, 0x1c(r6)
/* 80131064 0012DFA4  90 A1 00 88 */	stw r5, 0x88(r1)
/* 80131068 0012DFA8  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8013106C 0012DFAC  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 80131070 0012DFB0  90 E1 00 94 */	stw r7, 0x94(r1)
/* 80131074 0012DFB4  EC 82 00 28 */	fsubs f4, f2, f0
/* 80131078 0012DFB8  90 A1 00 90 */	stw r5, 0x90(r1)
/* 8013107C 0012DFBC  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 80131080 0012DFC0  90 E1 00 9C */	stw r7, 0x9c(r1)
/* 80131084 0012DFC4  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131088 0012DFC8  90 A1 00 98 */	stw r5, 0x98(r1)
/* 8013108C 0012DFCC  C8 41 00 98 */	lfd f2, 0x98(r1)
/* 80131090 0012DFD0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131094 0012DFD4  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 80131098 0012DFD8  EC 42 00 28 */	fsubs f2, f2, f0
/* 8013109C 0012DFDC  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 801310A0 0012DFE0  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 801310A4 0012DFE4  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 801310A8 0012DFE8  90 A1 00 C8 */	stw r5, 0xc8(r1)
/* 801310AC 0012DFEC  FC 40 10 1E */	fctiwz f2, f2
/* 801310B0 0012DFF0  90 A1 00 D0 */	stw r5, 0xd0(r1)
/* 801310B4 0012DFF4  D8 41 00 A0 */	stfd f2, 0xa0(r1)
/* 801310B8 0012DFF8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801310BC 0012DFFC  90 A1 00 D8 */	stw r5, 0xd8(r1)
/* 801310C0 0012E000  98 1E 00 58 */	stb r0, 0x58(r30)
/* 801310C4 0012E004  88 E8 00 1D */	lbz r7, 0x1d(r8)
/* 801310C8 0012E008  88 06 00 1D */	lbz r0, 0x1d(r6)
/* 801310CC 0012E00C  90 E1 00 B4 */	stw r7, 0xb4(r1)
/* 801310D0 0012E010  90 01 00 AC */	stw r0, 0xac(r1)
/* 801310D4 0012E014  C8 41 00 B0 */	lfd f2, 0xb0(r1)
/* 801310D8 0012E018  C8 81 00 A8 */	lfd f4, 0xa8(r1)
/* 801310DC 0012E01C  90 E1 00 BC */	stw r7, 0xbc(r1)
/* 801310E0 0012E020  EC 62 00 28 */	fsubs f3, f2, f0
/* 801310E4 0012E024  EC 84 00 28 */	fsubs f4, f4, f0
/* 801310E8 0012E028  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 801310EC 0012E02C  90 A1 00 E8 */	stw r5, 0xe8(r1)
/* 801310F0 0012E030  EC 64 18 28 */	fsubs f3, f4, f3
/* 801310F4 0012E034  EC 42 00 28 */	fsubs f2, f2, f0
/* 801310F8 0012E038  90 A1 00 F0 */	stw r5, 0xf0(r1)
/* 801310FC 0012E03C  90 A1 00 F8 */	stw r5, 0xf8(r1)
/* 80131100 0012E040  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131104 0012E044  FC 40 10 1E */	fctiwz f2, f2
/* 80131108 0012E048  D8 41 00 C0 */	stfd f2, 0xc0(r1)
/* 8013110C 0012E04C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80131110 0012E050  98 1E 00 59 */	stb r0, 0x59(r30)
/* 80131114 0012E054  88 E8 00 1E */	lbz r7, 0x1e(r8)
/* 80131118 0012E058  88 06 00 1E */	lbz r0, 0x1e(r6)
/* 8013111C 0012E05C  90 E1 00 D4 */	stw r7, 0xd4(r1)
/* 80131120 0012E060  90 01 00 CC */	stw r0, 0xcc(r1)
/* 80131124 0012E064  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 80131128 0012E068  C8 81 00 C8 */	lfd f4, 0xc8(r1)
/* 8013112C 0012E06C  90 E1 00 DC */	stw r7, 0xdc(r1)
/* 80131130 0012E070  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131134 0012E074  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131138 0012E078  C8 41 00 D8 */	lfd f2, 0xd8(r1)
/* 8013113C 0012E07C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131140 0012E080  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131144 0012E084  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131148 0012E088  FC 40 10 1E */	fctiwz f2, f2
/* 8013114C 0012E08C  D8 41 00 E0 */	stfd f2, 0xe0(r1)
/* 80131150 0012E090  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80131154 0012E094  98 1E 00 5A */	stb r0, 0x5a(r30)
/* 80131158 0012E098  88 E8 00 1F */	lbz r7, 0x1f(r8)
/* 8013115C 0012E09C  88 06 00 1F */	lbz r0, 0x1f(r6)
/* 80131160 0012E0A0  90 E1 00 F4 */	stw r7, 0xf4(r1)
/* 80131164 0012E0A4  90 01 00 EC */	stw r0, 0xec(r1)
/* 80131168 0012E0A8  C8 41 00 F0 */	lfd f2, 0xf0(r1)
/* 8013116C 0012E0AC  C8 81 00 E8 */	lfd f4, 0xe8(r1)
/* 80131170 0012E0B0  90 E1 00 FC */	stw r7, 0xfc(r1)
/* 80131174 0012E0B4  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131178 0012E0B8  EC 84 00 28 */	fsubs f4, f4, f0
/* 8013117C 0012E0BC  C8 41 00 F8 */	lfd f2, 0xf8(r1)
/* 80131180 0012E0C0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131184 0012E0C4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131188 0012E0C8  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 8013118C 0012E0CC  FC 40 10 1E */	fctiwz f2, f2
/* 80131190 0012E0D0  D8 41 01 00 */	stfd f2, 0x100(r1)
/* 80131194 0012E0D4  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80131198 0012E0D8  98 1E 00 5B */	stb r0, 0x5b(r30)
/* 8013119C 0012E0DC  88 C3 00 00 */	lbz r6, 0(r3)
/* 801311A0 0012E0E0  88 04 00 00 */	lbz r0, 0(r4)
/* 801311A4 0012E0E4  90 A1 01 08 */	stw r5, 0x108(r1)
/* 801311A8 0012E0E8  90 01 01 0C */	stw r0, 0x10c(r1)
/* 801311AC 0012E0EC  C8 41 01 08 */	lfd f2, 0x108(r1)
/* 801311B0 0012E0F0  90 C1 01 14 */	stw r6, 0x114(r1)
/* 801311B4 0012E0F4  EC 82 00 28 */	fsubs f4, f2, f0
/* 801311B8 0012E0F8  90 A1 01 10 */	stw r5, 0x110(r1)
/* 801311BC 0012E0FC  C8 41 01 10 */	lfd f2, 0x110(r1)
/* 801311C0 0012E100  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 801311C4 0012E104  EC 62 00 28 */	fsubs f3, f2, f0
/* 801311C8 0012E108  90 A1 01 18 */	stw r5, 0x118(r1)
/* 801311CC 0012E10C  C8 41 01 18 */	lfd f2, 0x118(r1)
/* 801311D0 0012E110  EC 64 18 28 */	fsubs f3, f4, f3
/* 801311D4 0012E114  90 A1 01 28 */	stw r5, 0x128(r1)
/* 801311D8 0012E118  EC 42 00 28 */	fsubs f2, f2, f0
/* 801311DC 0012E11C  90 A1 01 30 */	stw r5, 0x130(r1)
/* 801311E0 0012E120  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 801311E4 0012E124  90 A1 01 38 */	stw r5, 0x138(r1)
/* 801311E8 0012E128  90 A1 01 48 */	stw r5, 0x148(r1)
/* 801311EC 0012E12C  FC 40 10 1E */	fctiwz f2, f2
/* 801311F0 0012E130  90 A1 01 50 */	stw r5, 0x150(r1)
/* 801311F4 0012E134  D8 41 01 20 */	stfd f2, 0x120(r1)
/* 801311F8 0012E138  80 01 01 24 */	lwz r0, 0x124(r1)
/* 801311FC 0012E13C  90 A1 01 58 */	stw r5, 0x158(r1)
/* 80131200 0012E140  98 1E 00 5C */	stb r0, 0x5c(r30)
/* 80131204 0012E144  88 C3 00 01 */	lbz r6, 1(r3)
/* 80131208 0012E148  88 04 00 01 */	lbz r0, 1(r4)
/* 8013120C 0012E14C  90 C1 01 34 */	stw r6, 0x134(r1)
/* 80131210 0012E150  90 01 01 2C */	stw r0, 0x12c(r1)
/* 80131214 0012E154  C8 41 01 30 */	lfd f2, 0x130(r1)
/* 80131218 0012E158  C8 81 01 28 */	lfd f4, 0x128(r1)
/* 8013121C 0012E15C  90 C1 01 3C */	stw r6, 0x13c(r1)
/* 80131220 0012E160  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131224 0012E164  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131228 0012E168  C8 41 01 38 */	lfd f2, 0x138(r1)
/* 8013122C 0012E16C  90 A1 01 68 */	stw r5, 0x168(r1)
/* 80131230 0012E170  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131234 0012E174  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131238 0012E178  90 A1 01 70 */	stw r5, 0x170(r1)
/* 8013123C 0012E17C  90 A1 01 78 */	stw r5, 0x178(r1)
/* 80131240 0012E180  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131244 0012E184  FC 40 10 1E */	fctiwz f2, f2
/* 80131248 0012E188  D8 41 01 40 */	stfd f2, 0x140(r1)
/* 8013124C 0012E18C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 80131250 0012E190  98 1E 00 5D */	stb r0, 0x5d(r30)
/* 80131254 0012E194  88 A3 00 02 */	lbz r5, 2(r3)
/* 80131258 0012E198  88 04 00 02 */	lbz r0, 2(r4)
/* 8013125C 0012E19C  90 A1 01 54 */	stw r5, 0x154(r1)
/* 80131260 0012E1A0  90 01 01 4C */	stw r0, 0x14c(r1)
/* 80131264 0012E1A4  C8 41 01 50 */	lfd f2, 0x150(r1)
/* 80131268 0012E1A8  C8 81 01 48 */	lfd f4, 0x148(r1)
/* 8013126C 0012E1AC  90 A1 01 5C */	stw r5, 0x15c(r1)
/* 80131270 0012E1B0  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131274 0012E1B4  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131278 0012E1B8  C8 41 01 58 */	lfd f2, 0x158(r1)
/* 8013127C 0012E1BC  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131280 0012E1C0  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131284 0012E1C4  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131288 0012E1C8  FC 40 10 1E */	fctiwz f2, f2
/* 8013128C 0012E1CC  D8 41 01 60 */	stfd f2, 0x160(r1)
/* 80131290 0012E1D0  80 01 01 64 */	lwz r0, 0x164(r1)
/* 80131294 0012E1D4  98 1E 00 5E */	stb r0, 0x5e(r30)
/* 80131298 0012E1D8  88 63 00 03 */	lbz r3, 3(r3)
/* 8013129C 0012E1DC  88 04 00 03 */	lbz r0, 3(r4)
/* 801312A0 0012E1E0  90 61 01 74 */	stw r3, 0x174(r1)
/* 801312A4 0012E1E4  90 01 01 6C */	stw r0, 0x16c(r1)
/* 801312A8 0012E1E8  C8 41 01 70 */	lfd f2, 0x170(r1)
/* 801312AC 0012E1EC  C8 81 01 68 */	lfd f4, 0x168(r1)
/* 801312B0 0012E1F0  90 61 01 7C */	stw r3, 0x17c(r1)
/* 801312B4 0012E1F4  EC 62 00 28 */	fsubs f3, f2, f0
/* 801312B8 0012E1F8  EC 84 00 28 */	fsubs f4, f4, f0
/* 801312BC 0012E1FC  C8 41 01 78 */	lfd f2, 0x178(r1)
/* 801312C0 0012E200  EC 64 18 28 */	fsubs f3, f4, f3
/* 801312C4 0012E204  EC 02 00 28 */	fsubs f0, f2, f0
/* 801312C8 0012E208  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 801312CC 0012E20C  FC 00 00 1E */	fctiwz f0, f0
/* 801312D0 0012E210  D8 01 01 80 */	stfd f0, 0x180(r1)
/* 801312D4 0012E214  80 01 01 84 */	lwz r0, 0x184(r1)
/* 801312D8 0012E218  98 1E 00 5F */	stb r0, 0x5f(r30)
/* 801312DC 0012E21C  48 00 03 D8 */	b .L_801316B4
.L_801312E0:
/* 801312E0 0012E220  89 06 00 18 */	lbz r8, 0x18(r6)
/* 801312E4 0012E224  3C 60 43 30 */	lis r3, 0x4330
/* 801312E8 0012E228  88 07 00 18 */	lbz r0, 0x18(r7)
/* 801312EC 0012E22C  EC 22 00 28 */	fsubs f1, f2, f0
/* 801312F0 0012E230  90 61 01 80 */	stw r3, 0x180(r1)
/* 801312F4 0012E234  C0 42 9D FC */	lfs f2, lbl_8051815C@sda21(r2)
/* 801312F8 0012E238  90 01 01 84 */	stw r0, 0x184(r1)
/* 801312FC 0012E23C  C8 02 9E 00 */	lfd f0, lbl_80518160@sda21(r2)
/* 80131300 0012E240  EC 22 00 72 */	fmuls f1, f2, f1
/* 80131304 0012E244  C8 41 01 80 */	lfd f2, 0x180(r1)
/* 80131308 0012E248  91 01 01 7C */	stw r8, 0x17c(r1)
/* 8013130C 0012E24C  EC 82 00 28 */	fsubs f4, f2, f0
/* 80131310 0012E250  90 61 01 78 */	stw r3, 0x178(r1)
/* 80131314 0012E254  C8 41 01 78 */	lfd f2, 0x178(r1)
/* 80131318 0012E258  91 01 01 74 */	stw r8, 0x174(r1)
/* 8013131C 0012E25C  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131320 0012E260  90 61 01 70 */	stw r3, 0x170(r1)
/* 80131324 0012E264  C8 41 01 70 */	lfd f2, 0x170(r1)
/* 80131328 0012E268  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013132C 0012E26C  90 61 01 60 */	stw r3, 0x160(r1)
/* 80131330 0012E270  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131334 0012E274  90 61 01 58 */	stw r3, 0x158(r1)
/* 80131338 0012E278  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 8013133C 0012E27C  90 61 01 50 */	stw r3, 0x150(r1)
/* 80131340 0012E280  90 61 01 40 */	stw r3, 0x140(r1)
/* 80131344 0012E284  FC 40 10 1E */	fctiwz f2, f2
/* 80131348 0012E288  90 61 01 38 */	stw r3, 0x138(r1)
/* 8013134C 0012E28C  D8 41 01 68 */	stfd f2, 0x168(r1)
/* 80131350 0012E290  80 01 01 6C */	lwz r0, 0x16c(r1)
/* 80131354 0012E294  90 61 01 30 */	stw r3, 0x130(r1)
/* 80131358 0012E298  98 1E 00 54 */	stb r0, 0x54(r30)
/* 8013135C 0012E29C  89 06 00 19 */	lbz r8, 0x19(r6)
/* 80131360 0012E2A0  88 07 00 19 */	lbz r0, 0x19(r7)
/* 80131364 0012E2A4  91 01 01 5C */	stw r8, 0x15c(r1)
/* 80131368 0012E2A8  90 01 01 64 */	stw r0, 0x164(r1)
/* 8013136C 0012E2AC  C8 41 01 58 */	lfd f2, 0x158(r1)
/* 80131370 0012E2B0  C8 81 01 60 */	lfd f4, 0x160(r1)
/* 80131374 0012E2B4  91 01 01 54 */	stw r8, 0x154(r1)
/* 80131378 0012E2B8  EC 62 00 28 */	fsubs f3, f2, f0
/* 8013137C 0012E2BC  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131380 0012E2C0  C8 41 01 50 */	lfd f2, 0x150(r1)
/* 80131384 0012E2C4  90 61 01 20 */	stw r3, 0x120(r1)
/* 80131388 0012E2C8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013138C 0012E2CC  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131390 0012E2D0  90 61 01 18 */	stw r3, 0x118(r1)
/* 80131394 0012E2D4  90 61 01 10 */	stw r3, 0x110(r1)
/* 80131398 0012E2D8  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 8013139C 0012E2DC  FC 40 10 1E */	fctiwz f2, f2
/* 801313A0 0012E2E0  D8 41 01 48 */	stfd f2, 0x148(r1)
/* 801313A4 0012E2E4  80 01 01 4C */	lwz r0, 0x14c(r1)
/* 801313A8 0012E2E8  98 1E 00 55 */	stb r0, 0x55(r30)
/* 801313AC 0012E2EC  89 06 00 1A */	lbz r8, 0x1a(r6)
/* 801313B0 0012E2F0  88 07 00 1A */	lbz r0, 0x1a(r7)
/* 801313B4 0012E2F4  91 01 01 3C */	stw r8, 0x13c(r1)
/* 801313B8 0012E2F8  90 01 01 44 */	stw r0, 0x144(r1)
/* 801313BC 0012E2FC  C8 41 01 38 */	lfd f2, 0x138(r1)
/* 801313C0 0012E300  C8 81 01 40 */	lfd f4, 0x140(r1)
/* 801313C4 0012E304  91 01 01 34 */	stw r8, 0x134(r1)
/* 801313C8 0012E308  EC 62 00 28 */	fsubs f3, f2, f0
/* 801313CC 0012E30C  EC 84 00 28 */	fsubs f4, f4, f0
/* 801313D0 0012E310  C8 41 01 30 */	lfd f2, 0x130(r1)
/* 801313D4 0012E314  EC 64 18 28 */	fsubs f3, f4, f3
/* 801313D8 0012E318  EC 42 00 28 */	fsubs f2, f2, f0
/* 801313DC 0012E31C  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 801313E0 0012E320  FC 40 10 1E */	fctiwz f2, f2
/* 801313E4 0012E324  D8 41 01 28 */	stfd f2, 0x128(r1)
/* 801313E8 0012E328  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 801313EC 0012E32C  98 1E 00 56 */	stb r0, 0x56(r30)
/* 801313F0 0012E330  89 06 00 1B */	lbz r8, 0x1b(r6)
/* 801313F4 0012E334  88 07 00 1B */	lbz r0, 0x1b(r7)
/* 801313F8 0012E338  91 01 01 1C */	stw r8, 0x11c(r1)
/* 801313FC 0012E33C  90 01 01 24 */	stw r0, 0x124(r1)
/* 80131400 0012E340  C8 41 01 18 */	lfd f2, 0x118(r1)
/* 80131404 0012E344  C8 81 01 20 */	lfd f4, 0x120(r1)
/* 80131408 0012E348  91 01 01 14 */	stw r8, 0x114(r1)
/* 8013140C 0012E34C  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131410 0012E350  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131414 0012E354  C8 41 01 10 */	lfd f2, 0x110(r1)
/* 80131418 0012E358  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013141C 0012E35C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131420 0012E360  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131424 0012E364  FC 40 10 1E */	fctiwz f2, f2
/* 80131428 0012E368  D8 41 01 08 */	stfd f2, 0x108(r1)
/* 8013142C 0012E36C  80 01 01 0C */	lwz r0, 0x10c(r1)
/* 80131430 0012E370  98 1E 00 57 */	stb r0, 0x57(r30)
/* 80131434 0012E374  89 06 00 1C */	lbz r8, 0x1c(r6)
/* 80131438 0012E378  88 07 00 1C */	lbz r0, 0x1c(r7)
/* 8013143C 0012E37C  90 61 01 00 */	stw r3, 0x100(r1)
/* 80131440 0012E380  90 01 01 04 */	stw r0, 0x104(r1)
/* 80131444 0012E384  C8 41 01 00 */	lfd f2, 0x100(r1)
/* 80131448 0012E388  91 01 00 FC */	stw r8, 0xfc(r1)
/* 8013144C 0012E38C  EC 82 00 28 */	fsubs f4, f2, f0
/* 80131450 0012E390  90 61 00 F8 */	stw r3, 0xf8(r1)
/* 80131454 0012E394  C8 41 00 F8 */	lfd f2, 0xf8(r1)
/* 80131458 0012E398  91 01 00 F4 */	stw r8, 0xf4(r1)
/* 8013145C 0012E39C  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131460 0012E3A0  90 61 00 F0 */	stw r3, 0xf0(r1)
/* 80131464 0012E3A4  C8 41 00 F0 */	lfd f2, 0xf0(r1)
/* 80131468 0012E3A8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013146C 0012E3AC  90 61 00 E0 */	stw r3, 0xe0(r1)
/* 80131470 0012E3B0  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131474 0012E3B4  90 61 00 D8 */	stw r3, 0xd8(r1)
/* 80131478 0012E3B8  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 8013147C 0012E3BC  90 61 00 D0 */	stw r3, 0xd0(r1)
/* 80131480 0012E3C0  90 61 00 C0 */	stw r3, 0xc0(r1)
/* 80131484 0012E3C4  FC 40 10 1E */	fctiwz f2, f2
/* 80131488 0012E3C8  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 8013148C 0012E3CC  D8 41 00 E8 */	stfd f2, 0xe8(r1)
/* 80131490 0012E3D0  80 01 00 EC */	lwz r0, 0xec(r1)
/* 80131494 0012E3D4  90 61 00 B0 */	stw r3, 0xb0(r1)
/* 80131498 0012E3D8  98 1E 00 58 */	stb r0, 0x58(r30)
/* 8013149C 0012E3DC  89 06 00 1D */	lbz r8, 0x1d(r6)
/* 801314A0 0012E3E0  88 07 00 1D */	lbz r0, 0x1d(r7)
/* 801314A4 0012E3E4  91 01 00 DC */	stw r8, 0xdc(r1)
/* 801314A8 0012E3E8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801314AC 0012E3EC  C8 41 00 D8 */	lfd f2, 0xd8(r1)
/* 801314B0 0012E3F0  C8 81 00 E0 */	lfd f4, 0xe0(r1)
/* 801314B4 0012E3F4  91 01 00 D4 */	stw r8, 0xd4(r1)
/* 801314B8 0012E3F8  EC 62 00 28 */	fsubs f3, f2, f0
/* 801314BC 0012E3FC  EC 84 00 28 */	fsubs f4, f4, f0
/* 801314C0 0012E400  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 801314C4 0012E404  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 801314C8 0012E408  EC 64 18 28 */	fsubs f3, f4, f3
/* 801314CC 0012E40C  EC 42 00 28 */	fsubs f2, f2, f0
/* 801314D0 0012E410  90 61 00 98 */	stw r3, 0x98(r1)
/* 801314D4 0012E414  90 61 00 90 */	stw r3, 0x90(r1)
/* 801314D8 0012E418  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 801314DC 0012E41C  FC 40 10 1E */	fctiwz f2, f2
/* 801314E0 0012E420  D8 41 00 C8 */	stfd f2, 0xc8(r1)
/* 801314E4 0012E424  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 801314E8 0012E428  98 1E 00 59 */	stb r0, 0x59(r30)
/* 801314EC 0012E42C  89 06 00 1E */	lbz r8, 0x1e(r6)
/* 801314F0 0012E430  88 07 00 1E */	lbz r0, 0x1e(r7)
/* 801314F4 0012E434  91 01 00 BC */	stw r8, 0xbc(r1)
/* 801314F8 0012E438  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801314FC 0012E43C  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 80131500 0012E440  C8 81 00 C0 */	lfd f4, 0xc0(r1)
/* 80131504 0012E444  91 01 00 B4 */	stw r8, 0xb4(r1)
/* 80131508 0012E448  EC 62 00 28 */	fsubs f3, f2, f0
/* 8013150C 0012E44C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131510 0012E450  C8 41 00 B0 */	lfd f2, 0xb0(r1)
/* 80131514 0012E454  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131518 0012E458  EC 42 00 28 */	fsubs f2, f2, f0
/* 8013151C 0012E45C  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131520 0012E460  FC 40 10 1E */	fctiwz f2, f2
/* 80131524 0012E464  D8 41 00 A8 */	stfd f2, 0xa8(r1)
/* 80131528 0012E468  80 01 00 AC */	lwz r0, 0xac(r1)
/* 8013152C 0012E46C  98 1E 00 5A */	stb r0, 0x5a(r30)
/* 80131530 0012E470  88 C6 00 1F */	lbz r6, 0x1f(r6)
/* 80131534 0012E474  88 07 00 1F */	lbz r0, 0x1f(r7)
/* 80131538 0012E478  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 8013153C 0012E47C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80131540 0012E480  C8 41 00 98 */	lfd f2, 0x98(r1)
/* 80131544 0012E484  C8 81 00 A0 */	lfd f4, 0xa0(r1)
/* 80131548 0012E488  90 C1 00 94 */	stw r6, 0x94(r1)
/* 8013154C 0012E48C  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131550 0012E490  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131554 0012E494  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 80131558 0012E498  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013155C 0012E49C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131560 0012E4A0  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131564 0012E4A4  FC 40 10 1E */	fctiwz f2, f2
/* 80131568 0012E4A8  D8 41 00 88 */	stfd f2, 0x88(r1)
/* 8013156C 0012E4AC  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 80131570 0012E4B0  98 1E 00 5B */	stb r0, 0x5b(r30)
/* 80131574 0012E4B4  88 C4 00 00 */	lbz r6, 0(r4)
/* 80131578 0012E4B8  88 05 00 00 */	lbz r0, 0(r5)
/* 8013157C 0012E4BC  90 61 00 80 */	stw r3, 0x80(r1)
/* 80131580 0012E4C0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80131584 0012E4C4  C8 41 00 80 */	lfd f2, 0x80(r1)
/* 80131588 0012E4C8  90 C1 00 7C */	stw r6, 0x7c(r1)
/* 8013158C 0012E4CC  EC 82 00 28 */	fsubs f4, f2, f0
/* 80131590 0012E4D0  90 61 00 78 */	stw r3, 0x78(r1)
/* 80131594 0012E4D4  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80131598 0012E4D8  90 C1 00 74 */	stw r6, 0x74(r1)
/* 8013159C 0012E4DC  EC 62 00 28 */	fsubs f3, f2, f0
/* 801315A0 0012E4E0  90 61 00 70 */	stw r3, 0x70(r1)
/* 801315A4 0012E4E4  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 801315A8 0012E4E8  EC 64 18 28 */	fsubs f3, f4, f3
/* 801315AC 0012E4EC  90 61 00 60 */	stw r3, 0x60(r1)
/* 801315B0 0012E4F0  EC 42 00 28 */	fsubs f2, f2, f0
/* 801315B4 0012E4F4  90 61 00 58 */	stw r3, 0x58(r1)
/* 801315B8 0012E4F8  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 801315BC 0012E4FC  90 61 00 50 */	stw r3, 0x50(r1)
/* 801315C0 0012E500  90 61 00 40 */	stw r3, 0x40(r1)
/* 801315C4 0012E504  FC 40 10 1E */	fctiwz f2, f2
/* 801315C8 0012E508  90 61 00 38 */	stw r3, 0x38(r1)
/* 801315CC 0012E50C  D8 41 00 68 */	stfd f2, 0x68(r1)
/* 801315D0 0012E510  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 801315D4 0012E514  90 61 00 30 */	stw r3, 0x30(r1)
/* 801315D8 0012E518  98 1E 00 5C */	stb r0, 0x5c(r30)
/* 801315DC 0012E51C  88 C4 00 01 */	lbz r6, 1(r4)
/* 801315E0 0012E520  88 05 00 01 */	lbz r0, 1(r5)
/* 801315E4 0012E524  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 801315E8 0012E528  90 01 00 64 */	stw r0, 0x64(r1)
/* 801315EC 0012E52C  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 801315F0 0012E530  C8 81 00 60 */	lfd f4, 0x60(r1)
/* 801315F4 0012E534  90 C1 00 54 */	stw r6, 0x54(r1)
/* 801315F8 0012E538  EC 62 00 28 */	fsubs f3, f2, f0
/* 801315FC 0012E53C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131600 0012E540  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 80131604 0012E544  90 61 00 20 */	stw r3, 0x20(r1)
/* 80131608 0012E548  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013160C 0012E54C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80131610 0012E550  90 61 00 18 */	stw r3, 0x18(r1)
/* 80131614 0012E554  90 61 00 10 */	stw r3, 0x10(r1)
/* 80131618 0012E558  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 8013161C 0012E55C  FC 40 10 1E */	fctiwz f2, f2
/* 80131620 0012E560  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 80131624 0012E564  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80131628 0012E568  98 1E 00 5D */	stb r0, 0x5d(r30)
/* 8013162C 0012E56C  88 64 00 02 */	lbz r3, 2(r4)
/* 80131630 0012E570  88 05 00 02 */	lbz r0, 2(r5)
/* 80131634 0012E574  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80131638 0012E578  90 01 00 44 */	stw r0, 0x44(r1)
/* 8013163C 0012E57C  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 80131640 0012E580  C8 81 00 40 */	lfd f4, 0x40(r1)
/* 80131644 0012E584  90 61 00 34 */	stw r3, 0x34(r1)
/* 80131648 0012E588  EC 62 00 28 */	fsubs f3, f2, f0
/* 8013164C 0012E58C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131650 0012E590  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80131654 0012E594  EC 64 18 28 */	fsubs f3, f4, f3
/* 80131658 0012E598  EC 42 00 28 */	fsubs f2, f2, f0
/* 8013165C 0012E59C  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 80131660 0012E5A0  FC 40 10 1E */	fctiwz f2, f2
/* 80131664 0012E5A4  D8 41 00 28 */	stfd f2, 0x28(r1)
/* 80131668 0012E5A8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8013166C 0012E5AC  98 1E 00 5E */	stb r0, 0x5e(r30)
/* 80131670 0012E5B0  88 64 00 03 */	lbz r3, 3(r4)
/* 80131674 0012E5B4  88 05 00 03 */	lbz r0, 3(r5)
/* 80131678 0012E5B8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8013167C 0012E5BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80131680 0012E5C0  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80131684 0012E5C4  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 80131688 0012E5C8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8013168C 0012E5CC  EC 62 00 28 */	fsubs f3, f2, f0
/* 80131690 0012E5D0  EC 84 00 28 */	fsubs f4, f4, f0
/* 80131694 0012E5D4  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80131698 0012E5D8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013169C 0012E5DC  EC 02 00 28 */	fsubs f0, f2, f0
/* 801316A0 0012E5E0  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 801316A4 0012E5E4  FC 00 00 1E */	fctiwz f0, f0
/* 801316A8 0012E5E8  D8 01 00 08 */	stfd f0, 8(r1)
/* 801316AC 0012E5EC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801316B0 0012E5F0  98 1E 00 5F */	stb r0, 0x5f(r30)
.L_801316B4:
/* 801316B4 0012E5F4  80 01 01 A4 */	lwz r0, 0x1a4(r1)
/* 801316B8 0012E5F8  83 E1 01 9C */	lwz r31, 0x19c(r1)
/* 801316BC 0012E5FC  83 C1 01 98 */	lwz r30, 0x198(r1)
/* 801316C0 0012E600  83 A1 01 94 */	lwz r29, 0x194(r1)
/* 801316C4 0012E604  83 81 01 90 */	lwz r28, 0x190(r1)
/* 801316C8 0012E608  7C 08 03 A6 */	mtlr r0
/* 801316CC 0012E60C  38 21 01 A0 */	addi r1, r1, 0x1a0
/* 801316D0 0012E610  4E 80 00 20 */	blr 
.endfn update__Q34Game15IllustratedBook12ColorSettingFv

.fn __ct__Q34Game15IllustratedBook13PositionParmsFv, global
/* 801316D4 0012E614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801316D8 0012E618  7C 08 02 A6 */	mflr r0
/* 801316DC 0012E61C  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 801316E0 0012E620  39 40 00 00 */	li r10, 0
/* 801316E4 0012E624  90 01 00 14 */	stw r0, 0x14(r1)
/* 801316E8 0012E628  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 801316EC 0012E62C  3C A0 80 48 */	lis r5, lbl_8047C358@ha
/* 801316F0 0012E630  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801316F4 0012E634  3B E5 C3 58 */	addi r31, r5, lbl_8047C358@l
/* 801316F8 0012E638  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 801316FC 0012E63C  93 C1 00 08 */	stw r30, 8(r1)
/* 80131700 0012E640  7C 7E 1B 78 */	mr r30, r3
/* 80131704 0012E644  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook13PositionParms@ha
/* 80131708 0012E648  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 8013170C 0012E64C  90 1E 00 00 */	stw r0, 0(r30)
/* 80131710 0012E650  39 3E 00 A0 */	addi r9, r30, 0xa0
/* 80131714 0012E654  39 03 FA 58 */	addi r8, r3, __vt__Q34Game15IllustratedBook13PositionParms@l
/* 80131718 0012E658  38 9E 00 18 */	addi r4, r30, 0x18
/* 8013171C 0012E65C  91 5E 00 10 */	stw r10, 0x10(r30)
/* 80131720 0012E660  38 FE 00 9C */	addi r7, r30, 0x9c
/* 80131724 0012E664  38 1F 00 34 */	addi r0, r31, 0x34
/* 80131728 0012E668  38 64 00 0C */	addi r3, r4, 0xc
/* 8013172C 0012E66C  91 5E 00 0C */	stw r10, 0xc(r30)
/* 80131730 0012E670  38 DF 00 44 */	addi r6, r31, 0x44
/* 80131734 0012E674  91 5E 00 08 */	stw r10, 8(r30)
/* 80131738 0012E678  91 5E 00 04 */	stw r10, 4(r30)
/* 8013173C 0012E67C  91 3E 00 14 */	stw r9, 0x14(r30)
/* 80131740 0012E680  91 1E 00 00 */	stw r8, 0(r30)
/* 80131744 0012E684  90 FE 00 18 */	stw r7, 0x18(r30)
/* 80131748 0012E688  91 5E 00 1C */	stw r10, 0x1c(r30)
/* 8013174C 0012E68C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80131750 0012E690  48 2E 1F 09 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131754 0012E694  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131758 0012E698  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 8013175C 0012E69C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131760 0012E6A0  38 9E 00 18 */	addi r4, r30, 0x18
/* 80131764 0012E6A4  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80131768 0012E6A8  38 64 00 34 */	addi r3, r4, 0x34
/* 8013176C 0012E6AC  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131770 0012E6B0  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 80131774 0012E6B4  C0 22 9E 0C */	lfs f1, lbl_8051816C@sda21(r2)
/* 80131778 0012E6B8  38 DF 00 54 */	addi r6, r31, 0x54
/* 8013177C 0012E6BC  D0 1E 00 3C */	stfs f0, 0x3c(r30)
/* 80131780 0012E6C0  C0 02 9E 10 */	lfs f0, lbl_80518170@sda21(r2)
/* 80131784 0012E6C4  D0 3E 00 44 */	stfs f1, 0x44(r30)
/* 80131788 0012E6C8  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 8013178C 0012E6CC  48 2E 1E CD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131790 0012E6D0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131794 0012E6D4  3C A0 66 30 */	lis r5, 0x66303032@ha
/* 80131798 0012E6D8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8013179C 0012E6DC  38 9E 00 18 */	addi r4, r30, 0x18
/* 801317A0 0012E6E0  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801317A4 0012E6E4  38 64 00 5C */	addi r3, r4, 0x5c
/* 801317A8 0012E6E8  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 801317AC 0012E6EC  38 A5 30 32 */	addi r5, r5, 0x66303032@l
/* 801317B0 0012E6F0  C0 22 9E 0C */	lfs f1, lbl_8051816C@sda21(r2)
/* 801317B4 0012E6F4  38 DF 00 64 */	addi r6, r31, 0x64
/* 801317B8 0012E6F8  D0 1E 00 64 */	stfs f0, 0x64(r30)
/* 801317BC 0012E6FC  C0 02 9E 10 */	lfs f0, lbl_80518170@sda21(r2)
/* 801317C0 0012E700  D0 3E 00 6C */	stfs f1, 0x6c(r30)
/* 801317C4 0012E704  D0 1E 00 70 */	stfs f0, 0x70(r30)
/* 801317C8 0012E708  48 2E 1E 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801317CC 0012E70C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801317D0 0012E710  C0 42 9E 08 */	lfs f2, lbl_80518168@sda21(r2)
/* 801317D4 0012E714  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801317D8 0012E718  C0 22 9E 0C */	lfs f1, lbl_8051816C@sda21(r2)
/* 801317DC 0012E71C  90 1E 00 74 */	stw r0, 0x74(r30)
/* 801317E0 0012E720  38 7E 00 A0 */	addi r3, r30, 0xa0
/* 801317E4 0012E724  C0 02 9E 10 */	lfs f0, lbl_80518170@sda21(r2)
/* 801317E8 0012E728  38 9F 00 74 */	addi r4, r31, 0x74
/* 801317EC 0012E72C  D0 5E 00 8C */	stfs f2, 0x8c(r30)
/* 801317F0 0012E730  D0 3E 00 94 */	stfs f1, 0x94(r30)
/* 801317F4 0012E734  D0 1E 00 98 */	stfs f0, 0x98(r30)
/* 801317F8 0012E738  4C C6 31 82 */	crclr 6
/* 801317FC 0012E73C  4B F9 5C 3D */	bl sprintf
/* 80131800 0012E740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131804 0012E744  7F C3 F3 78 */	mr r3, r30
/* 80131808 0012E748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013180C 0012E74C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80131810 0012E750  7C 08 03 A6 */	mtlr r0
/* 80131814 0012E754  38 21 00 10 */	addi r1, r1, 0x10
/* 80131818 0012E758  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15IllustratedBook13PositionParmsFv

.fn read__Q34Game15IllustratedBook13PositionParmsFR6Stream, global
/* 8013181C 0012E75C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131820 0012E760  7C 08 02 A6 */	mflr r0
/* 80131824 0012E764  38 A0 00 20 */	li r5, 0x20
/* 80131828 0012E768  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013182C 0012E76C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131830 0012E770  7C 9F 23 78 */	mr r31, r4
/* 80131834 0012E774  93 C1 00 08 */	stw r30, 8(r1)
/* 80131838 0012E778  7C 7E 1B 78 */	mr r30, r3
/* 8013183C 0012E77C  7F E3 FB 78 */	mr r3, r31
/* 80131840 0012E780  38 9E 00 A0 */	addi r4, r30, 0xa0
/* 80131844 0012E784  48 2E 38 91 */	bl readString__6StreamFPci
/* 80131848 0012E788  7F E4 FB 78 */	mr r4, r31
/* 8013184C 0012E78C  38 7E 00 18 */	addi r3, r30, 0x18
/* 80131850 0012E790  48 2E 1F A5 */	bl read__10ParametersFR6Stream
/* 80131854 0012E794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131858 0012E798  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013185C 0012E79C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80131860 0012E7A0  7C 08 03 A6 */	mtlr r0
/* 80131864 0012E7A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80131868 0012E7A8  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook13PositionParmsFR6Stream

.fn __dt__Q34Game15IllustratedBook13PositionParmsFv, weak
/* 8013186C 0012E7AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131870 0012E7B0  7C 08 02 A6 */	mflr r0
/* 80131874 0012E7B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131878 0012E7B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013187C 0012E7BC  7C 9F 23 78 */	mr r31, r4
/* 80131880 0012E7C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80131884 0012E7C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80131888 0012E7C8  41 82 00 28 */	beq .L_801318B0
/* 8013188C 0012E7CC  3C A0 80 4B */	lis r5, __vt__Q34Game15IllustratedBook13PositionParms@ha
/* 80131890 0012E7D0  38 80 00 00 */	li r4, 0
/* 80131894 0012E7D4  38 05 FA 58 */	addi r0, r5, __vt__Q34Game15IllustratedBook13PositionParms@l
/* 80131898 0012E7D8  90 1E 00 00 */	stw r0, 0(r30)
/* 8013189C 0012E7DC  48 2D FC ED */	bl __dt__5CNodeFv
/* 801318A0 0012E7E0  7F E0 07 35 */	extsh. r0, r31
/* 801318A4 0012E7E4  40 81 00 0C */	ble .L_801318B0
/* 801318A8 0012E7E8  7F C3 F3 78 */	mr r3, r30
/* 801318AC 0012E7EC  4B EF 28 09 */	bl __dl__FPv
.L_801318B0:
/* 801318B0 0012E7F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801318B4 0012E7F4  7F C3 F3 78 */	mr r3, r30
/* 801318B8 0012E7F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801318BC 0012E7FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801318C0 0012E800  7C 08 03 A6 */	mtlr r0
/* 801318C4 0012E804  38 21 00 10 */	addi r1, r1, 0x10
/* 801318C8 0012E808  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook13PositionParmsFv

.fn read__Q34Game15IllustratedBook17PositionParmsListFR6Stream, global
/* 801318CC 0012E80C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801318D0 0012E810  7C 08 02 A6 */	mflr r0
/* 801318D4 0012E814  90 01 00 24 */	stw r0, 0x24(r1)
/* 801318D8 0012E818  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801318DC 0012E81C  7C 7F 1B 78 */	mr r31, r3
/* 801318E0 0012E820  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801318E4 0012E824  3B C0 00 00 */	li r30, 0
/* 801318E8 0012E828  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801318EC 0012E82C  7C 9D 23 78 */	mr r29, r4
.L_801318F0:
/* 801318F0 0012E830  38 7F 00 18 */	addi r3, r31, 0x18
/* 801318F4 0012E834  7F A4 EB 78 */	mr r4, r29
/* 801318F8 0012E838  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 801318FC 0012E83C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80131900 0012E840  7D 89 03 A6 */	mtctr r12
/* 80131904 0012E844  4E 80 04 21 */	bctrl 
/* 80131908 0012E848  3B DE 00 01 */	addi r30, r30, 1
/* 8013190C 0012E84C  3B FF 00 C0 */	addi r31, r31, 0xc0
/* 80131910 0012E850  28 1E 00 0A */	cmplwi r30, 0xa
/* 80131914 0012E854  41 80 FF DC */	blt .L_801318F0
/* 80131918 0012E858  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013191C 0012E85C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80131920 0012E860  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80131924 0012E864  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80131928 0012E868  7C 08 03 A6 */	mtlr r0
/* 8013192C 0012E86C  38 21 00 20 */	addi r1, r1, 0x20
/* 80131930 0012E870  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook17PositionParmsListFR6Stream

.fn read__Q34Game15IllustratedBook11CameraParmsFR6Stream, global
/* 80131934 0012E874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131938 0012E878  7C 08 02 A6 */	mflr r0
/* 8013193C 0012E87C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131940 0012E880  48 2E 1E B5 */	bl read__10ParametersFR6Stream
/* 80131944 0012E884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131948 0012E888  7C 08 03 A6 */	mtlr r0
/* 8013194C 0012E88C  38 21 00 10 */	addi r1, r1, 0x10
/* 80131950 0012E890  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook11CameraParmsFR6Stream

.fn __ct__Q34Game15IllustratedBook10EnemyParmsFv, global
/* 80131954 0012E894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131958 0012E898  7C 08 02 A6 */	mflr r0
/* 8013195C 0012E89C  3C C0 80 4B */	lis r6, __vt__Q34Game15IllustratedBook10EnemyParms@ha
/* 80131960 0012E8A0  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 80131964 0012E8A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131968 0012E8A8  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 8013196C 0012E8AC  39 06 FA 24 */	addi r8, r6, __vt__Q34Game15IllustratedBook10EnemyParms@l
/* 80131970 0012E8B0  39 40 00 00 */	li r10, 0
/* 80131974 0012E8B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131978 0012E8B8  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 8013197C 0012E8BC  7C 7F 1B 78 */	mr r31, r3
/* 80131980 0012E8C0  39 22 9E 14 */	addi r9, r2, lbl_80518174@sda21
/* 80131984 0012E8C4  90 03 00 00 */	stw r0, 0(r3)
/* 80131988 0012E8C8  3C 60 80 48 */	lis r3, lbl_8047C3E8@ha
/* 8013198C 0012E8CC  38 FF 00 9C */	addi r7, r31, 0x9c
/* 80131990 0012E8D0  38 9F 00 18 */	addi r4, r31, 0x18
/* 80131994 0012E8D4  91 5F 00 10 */	stw r10, 0x10(r31)
/* 80131998 0012E8D8  38 03 C3 E8 */	addi r0, r3, lbl_8047C3E8@l
/* 8013199C 0012E8DC  38 64 00 0C */	addi r3, r4, 0xc
/* 801319A0 0012E8E0  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 801319A4 0012E8E4  91 5F 00 0C */	stw r10, 0xc(r31)
/* 801319A8 0012E8E8  38 C2 9E 18 */	addi r6, r2, lbl_80518178@sda21
/* 801319AC 0012E8EC  91 5F 00 08 */	stw r10, 8(r31)
/* 801319B0 0012E8F0  91 5F 00 04 */	stw r10, 4(r31)
/* 801319B4 0012E8F4  91 3F 00 14 */	stw r9, 0x14(r31)
/* 801319B8 0012E8F8  91 1F 00 00 */	stw r8, 0(r31)
/* 801319BC 0012E8FC  90 FF 00 18 */	stw r7, 0x18(r31)
/* 801319C0 0012E900  91 5F 00 1C */	stw r10, 0x1c(r31)
/* 801319C4 0012E904  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801319C8 0012E908  48 2E 1C 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801319CC 0012E90C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801319D0 0012E910  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 801319D4 0012E914  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801319D8 0012E918  C0 02 9E 20 */	lfs f0, lbl_80518180@sda21(r2)
/* 801319DC 0012E91C  90 1F 00 24 */	stw r0, 0x24(r31)
/* 801319E0 0012E920  3C 60 80 48 */	lis r3, lbl_8047C3F4@ha
/* 801319E4 0012E924  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 801319E8 0012E928  38 9F 00 18 */	addi r4, r31, 0x18
/* 801319EC 0012E92C  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 801319F0 0012E930  38 C3 C3 F4 */	addi r6, r3, lbl_8047C3F4@l
/* 801319F4 0012E934  C0 02 9E 24 */	lfs f0, lbl_80518184@sda21(r2)
/* 801319F8 0012E938  38 64 00 34 */	addi r3, r4, 0x34
/* 801319FC 0012E93C  D0 3F 00 44 */	stfs f1, 0x44(r31)
/* 80131A00 0012E940  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 80131A04 0012E944  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 80131A08 0012E948  48 2E 1C 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131A0C 0012E94C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131A10 0012E950  3C A0 69 30 */	lis r5, 0x69303030@ha
/* 80131A14 0012E954  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131A18 0012E958  38 9F 00 18 */	addi r4, r31, 0x18
/* 80131A1C 0012E95C  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80131A20 0012E960  38 64 00 5C */	addi r3, r4, 0x5c
/* 80131A24 0012E964  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131A28 0012E968  38 A5 30 30 */	addi r5, r5, 0x69303030@l
/* 80131A2C 0012E96C  C0 02 9E 24 */	lfs f0, lbl_80518184@sda21(r2)
/* 80131A30 0012E970  38 C2 9E 28 */	addi r6, r2, lbl_80518188@sda21
/* 80131A34 0012E974  D0 3F 00 64 */	stfs f1, 0x64(r31)
/* 80131A38 0012E978  D0 3F 00 6C */	stfs f1, 0x6c(r31)
/* 80131A3C 0012E97C  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80131A40 0012E980  48 2E 1C 19 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131A44 0012E984  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 80131A48 0012E988  38 80 00 01 */	li r4, 1
/* 80131A4C 0012E98C  38 63 AC 90 */	addi r3, r3, "__vt__7Parm<i>"@l
/* 80131A50 0012E990  38 00 00 63 */	li r0, 0x63
/* 80131A54 0012E994  90 7F 00 74 */	stw r3, 0x74(r31)
/* 80131A58 0012E998  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 80131A5C 0012E99C  90 9F 00 8C */	stw r4, 0x8c(r31)
/* 80131A60 0012E9A0  90 9F 00 94 */	stw r4, 0x94(r31)
/* 80131A64 0012E9A4  90 1F 00 98 */	stw r0, 0x98(r31)
/* 80131A68 0012E9A8  48 00 00 1D */	bl __ct__Q34Game15IllustratedBook11CameraParmsFv
/* 80131A6C 0012E9AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131A70 0012E9B0  7F E3 FB 78 */	mr r3, r31
/* 80131A74 0012E9B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131A78 0012E9B8  7C 08 03 A6 */	mtlr r0
/* 80131A7C 0012E9BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80131A80 0012E9C0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15IllustratedBook10EnemyParmsFv

.fn __ct__Q34Game15IllustratedBook11CameraParmsFv, weak
/* 80131A84 0012E9C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131A88 0012E9C8  7C 08 02 A6 */	mflr r0
/* 80131A8C 0012E9CC  3C 80 80 4B */	lis r4, __vt__Q34Game15IllustratedBook11CameraParms@ha
/* 80131A90 0012E9D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131A94 0012E9D4  38 04 FA 38 */	addi r0, r4, __vt__Q34Game15IllustratedBook11CameraParms@l
/* 80131A98 0012E9D8  38 80 00 01 */	li r4, 1
/* 80131A9C 0012E9DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131AA0 0012E9E0  7C 7F 1B 78 */	mr r31, r3
/* 80131AA4 0012E9E4  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 80131AA8 0012E9E8  48 00 00 1D */	bl __ct__Q44Game15IllustratedBook11CameraParms5ParmsFv
/* 80131AAC 0012E9EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131AB0 0012E9F0  7F E3 FB 78 */	mr r3, r31
/* 80131AB4 0012E9F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131AB8 0012E9F8  7C 08 03 A6 */	mtlr r0
/* 80131ABC 0012E9FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80131AC0 0012EA00  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15IllustratedBook11CameraParmsFv

.fn __ct__Q44Game15IllustratedBook11CameraParms5ParmsFv, weak
/* 80131AC4 0012EA04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131AC8 0012EA08  7C 08 02 A6 */	mflr r0
/* 80131ACC 0012EA0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131AD0 0012EA10  7C 80 07 35 */	extsh. r0, r4
/* 80131AD4 0012EA14  3C 80 80 48 */	lis r4, lbl_8047C358@ha
/* 80131AD8 0012EA18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131ADC 0012EA1C  3B E4 C3 58 */	addi r31, r4, lbl_8047C358@l
/* 80131AE0 0012EA20  93 C1 00 08 */	stw r30, 8(r1)
/* 80131AE4 0012EA24  7C 7E 1B 78 */	mr r30, r3
/* 80131AE8 0012EA28  41 82 00 0C */	beq .L_80131AF4
/* 80131AEC 0012EA2C  38 1E 01 C4 */	addi r0, r30, 0x1c4
/* 80131AF0 0012EA30  90 1E 00 00 */	stw r0, 0(r30)
.L_80131AF4:
/* 80131AF4 0012EA34  38 00 00 00 */	li r0, 0
/* 80131AF8 0012EA38  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 80131AFC 0012EA3C  90 1E 00 04 */	stw r0, 4(r30)
/* 80131B00 0012EA40  38 1F 00 A8 */	addi r0, r31, 0xa8
/* 80131B04 0012EA44  7F C4 F3 78 */	mr r4, r30
/* 80131B08 0012EA48  38 7E 00 0C */	addi r3, r30, 0xc
/* 80131B0C 0012EA4C  90 1E 00 08 */	stw r0, 8(r30)
/* 80131B10 0012EA50  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 80131B14 0012EA54  38 C2 9E 30 */	addi r6, r2, lbl_80518190@sda21
/* 80131B18 0012EA58  48 2E 1B 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131B1C 0012EA5C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131B20 0012EA60  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 80131B24 0012EA64  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131B28 0012EA68  C0 02 9E 38 */	lfs f0, lbl_80518198@sda21(r2)
/* 80131B2C 0012EA6C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80131B30 0012EA70  7F C4 F3 78 */	mr r4, r30
/* 80131B34 0012EA74  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131B38 0012EA78  38 7E 00 34 */	addi r3, r30, 0x34
/* 80131B3C 0012EA7C  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80131B40 0012EA80  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 80131B44 0012EA84  C0 02 9E 3C */	lfs f0, lbl_8051819C@sda21(r2)
/* 80131B48 0012EA88  38 DF 00 B4 */	addi r6, r31, 0xb4
/* 80131B4C 0012EA8C  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 80131B50 0012EA90  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 80131B54 0012EA94  48 2E 1B 05 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131B58 0012EA98  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131B5C 0012EA9C  3C A0 66 30 */	lis r5, 0x66303032@ha
/* 80131B60 0012EAA0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131B64 0012EAA4  C0 02 9E 40 */	lfs f0, lbl_805181A0@sda21(r2)
/* 80131B68 0012EAA8  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80131B6C 0012EAAC  7F C4 F3 78 */	mr r4, r30
/* 80131B70 0012EAB0  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131B74 0012EAB4  38 7E 00 5C */	addi r3, r30, 0x5c
/* 80131B78 0012EAB8  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80131B7C 0012EABC  38 A5 30 32 */	addi r5, r5, 0x66303032@l
/* 80131B80 0012EAC0  C0 02 9E 24 */	lfs f0, lbl_80518184@sda21(r2)
/* 80131B84 0012EAC4  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 80131B88 0012EAC8  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 80131B8C 0012EACC  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 80131B90 0012EAD0  48 2E 1A C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131B94 0012EAD4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131B98 0012EAD8  3C A0 66 30 */	lis r5, 0x66303033@ha
/* 80131B9C 0012EADC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131BA0 0012EAE0  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131BA4 0012EAE4  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 80131BA8 0012EAE8  7F C4 F3 78 */	mr r4, r30
/* 80131BAC 0012EAEC  C0 02 9E 24 */	lfs f0, lbl_80518184@sda21(r2)
/* 80131BB0 0012EAF0  38 7E 00 84 */	addi r3, r30, 0x84
/* 80131BB4 0012EAF4  D0 3E 00 74 */	stfs f1, 0x74(r30)
/* 80131BB8 0012EAF8  38 A5 30 33 */	addi r5, r5, 0x66303033@l
/* 80131BBC 0012EAFC  38 DF 00 D4 */	addi r6, r31, 0xd4
/* 80131BC0 0012EB00  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 80131BC4 0012EB04  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 80131BC8 0012EB08  48 2E 1A 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131BCC 0012EB0C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131BD0 0012EB10  3C A0 66 30 */	lis r5, 0x66303034@ha
/* 80131BD4 0012EB14  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131BD8 0012EB18  C0 02 9E 44 */	lfs f0, lbl_805181A4@sda21(r2)
/* 80131BDC 0012EB1C  90 1E 00 84 */	stw r0, 0x84(r30)
/* 80131BE0 0012EB20  7F C4 F3 78 */	mr r4, r30
/* 80131BE4 0012EB24  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131BE8 0012EB28  38 7E 00 AC */	addi r3, r30, 0xac
/* 80131BEC 0012EB2C  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 80131BF0 0012EB30  38 A5 30 34 */	addi r5, r5, 0x66303034@l
/* 80131BF4 0012EB34  C0 02 9E 24 */	lfs f0, lbl_80518184@sda21(r2)
/* 80131BF8 0012EB38  38 DF 00 E4 */	addi r6, r31, 0xe4
/* 80131BFC 0012EB3C  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 80131C00 0012EB40  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 80131C04 0012EB44  48 2E 1A 55 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131C08 0012EB48  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131C0C 0012EB4C  3C A0 66 30 */	lis r5, 0x66303035@ha
/* 80131C10 0012EB50  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131C14 0012EB54  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131C18 0012EB58  90 1E 00 AC */	stw r0, 0xac(r30)
/* 80131C1C 0012EB5C  7F C4 F3 78 */	mr r4, r30
/* 80131C20 0012EB60  C0 22 9E 48 */	lfs f1, lbl_805181A8@sda21(r2)
/* 80131C24 0012EB64  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 80131C28 0012EB68  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 80131C2C 0012EB6C  38 A5 30 35 */	addi r5, r5, 0x66303035@l
/* 80131C30 0012EB70  C0 02 9E 40 */	lfs f0, lbl_805181A0@sda21(r2)
/* 80131C34 0012EB74  38 DF 00 F4 */	addi r6, r31, 0xf4
/* 80131C38 0012EB78  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80131C3C 0012EB7C  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80131C40 0012EB80  48 2E 1A 19 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131C44 0012EB84  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131C48 0012EB88  3C A0 66 30 */	lis r5, 0x66303036@ha
/* 80131C4C 0012EB8C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131C50 0012EB90  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131C54 0012EB94  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 80131C58 0012EB98  7F C4 F3 78 */	mr r4, r30
/* 80131C5C 0012EB9C  C0 22 9E 48 */	lfs f1, lbl_805181A8@sda21(r2)
/* 80131C60 0012EBA0  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80131C64 0012EBA4  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 80131C68 0012EBA8  38 A5 30 36 */	addi r5, r5, 0x66303036@l
/* 80131C6C 0012EBAC  C0 02 9E 40 */	lfs f0, lbl_805181A0@sda21(r2)
/* 80131C70 0012EBB0  38 DF 01 04 */	addi r6, r31, 0x104
/* 80131C74 0012EBB4  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 80131C78 0012EBB8  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 80131C7C 0012EBBC  48 2E 19 DD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131C80 0012EBC0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131C84 0012EBC4  3C A0 66 30 */	lis r5, 0x66303039@ha
/* 80131C88 0012EBC8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131C8C 0012EBCC  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131C90 0012EBD0  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 80131C94 0012EBD4  7F C4 F3 78 */	mr r4, r30
/* 80131C98 0012EBD8  C0 22 9E 48 */	lfs f1, lbl_805181A8@sda21(r2)
/* 80131C9C 0012EBDC  38 7E 01 24 */	addi r3, r30, 0x124
/* 80131CA0 0012EBE0  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 80131CA4 0012EBE4  38 A5 30 39 */	addi r5, r5, 0x66303039@l
/* 80131CA8 0012EBE8  C0 02 9E 40 */	lfs f0, lbl_805181A0@sda21(r2)
/* 80131CAC 0012EBEC  38 DF 01 14 */	addi r6, r31, 0x114
/* 80131CB0 0012EBF0  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 80131CB4 0012EBF4  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80131CB8 0012EBF8  48 2E 19 A1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131CBC 0012EBFC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131CC0 0012EC00  3C A0 66 30 */	lis r5, 0x66303037@ha
/* 80131CC4 0012EC04  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131CC8 0012EC08  C0 02 9E 4C */	lfs f0, lbl_805181AC@sda21(r2)
/* 80131CCC 0012EC0C  90 1E 01 24 */	stw r0, 0x124(r30)
/* 80131CD0 0012EC10  7F C4 F3 78 */	mr r4, r30
/* 80131CD4 0012EC14  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131CD8 0012EC18  38 7E 01 4C */	addi r3, r30, 0x14c
/* 80131CDC 0012EC1C  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 80131CE0 0012EC20  38 A5 30 37 */	addi r5, r5, 0x66303037@l
/* 80131CE4 0012EC24  C0 02 9E 50 */	lfs f0, lbl_805181B0@sda21(r2)
/* 80131CE8 0012EC28  38 DF 01 24 */	addi r6, r31, 0x124
/* 80131CEC 0012EC2C  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 80131CF0 0012EC30  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 80131CF4 0012EC34  48 2E 19 65 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131CF8 0012EC38  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131CFC 0012EC3C  3C A0 66 30 */	lis r5, 0x66303038@ha
/* 80131D00 0012EC40  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131D04 0012EC44  C0 02 9E 54 */	lfs f0, lbl_805181B4@sda21(r2)
/* 80131D08 0012EC48  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 80131D0C 0012EC4C  7F C4 F3 78 */	mr r4, r30
/* 80131D10 0012EC50  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131D14 0012EC54  38 7E 01 74 */	addi r3, r30, 0x174
/* 80131D18 0012EC58  D0 1E 01 64 */	stfs f0, 0x164(r30)
/* 80131D1C 0012EC5C  38 A5 30 38 */	addi r5, r5, 0x66303038@l
/* 80131D20 0012EC60  C0 02 9E 50 */	lfs f0, lbl_805181B0@sda21(r2)
/* 80131D24 0012EC64  38 DF 01 34 */	addi r6, r31, 0x134
/* 80131D28 0012EC68  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 80131D2C 0012EC6C  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 80131D30 0012EC70  48 2E 19 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131D34 0012EC74  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131D38 0012EC78  3C A0 66 30 */	lis r5, 0x66303130@ha
/* 80131D3C 0012EC7C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131D40 0012EC80  C0 22 9E 50 */	lfs f1, lbl_805181B0@sda21(r2)
/* 80131D44 0012EC84  90 1E 01 74 */	stw r0, 0x174(r30)
/* 80131D48 0012EC88  7F C4 F3 78 */	mr r4, r30
/* 80131D4C 0012EC8C  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131D50 0012EC90  38 7E 01 9C */	addi r3, r30, 0x19c
/* 80131D54 0012EC94  D0 3E 01 8C */	stfs f1, 0x18c(r30)
/* 80131D58 0012EC98  38 A5 31 30 */	addi r5, r5, 0x66303130@l
/* 80131D5C 0012EC9C  38 DF 01 44 */	addi r6, r31, 0x144
/* 80131D60 0012ECA0  D0 1E 01 94 */	stfs f0, 0x194(r30)
/* 80131D64 0012ECA4  D0 3E 01 98 */	stfs f1, 0x198(r30)
/* 80131D68 0012ECA8  48 2E 18 F1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131D6C 0012ECAC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131D70 0012ECB0  C0 22 9E 08 */	lfs f1, lbl_80518168@sda21(r2)
/* 80131D74 0012ECB4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131D78 0012ECB8  C0 02 9E 58 */	lfs f0, lbl_805181B8@sda21(r2)
/* 80131D7C 0012ECBC  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 80131D80 0012ECC0  7F C3 F3 78 */	mr r3, r30
/* 80131D84 0012ECC4  D0 3E 01 B4 */	stfs f1, 0x1b4(r30)
/* 80131D88 0012ECC8  D0 3E 01 BC */	stfs f1, 0x1bc(r30)
/* 80131D8C 0012ECCC  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 80131D90 0012ECD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131D94 0012ECD4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80131D98 0012ECD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131D9C 0012ECDC  7C 08 03 A6 */	mtlr r0
/* 80131DA0 0012ECE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80131DA4 0012ECE4  4E 80 00 20 */	blr 
.endfn __ct__Q44Game15IllustratedBook11CameraParms5ParmsFv

.fn read__Q34Game15IllustratedBook10EnemyParmsFR6Stream, global
/* 80131DA8 0012ECE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131DAC 0012ECEC  7C 08 02 A6 */	mflr r0
/* 80131DB0 0012ECF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131DB4 0012ECF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131DB8 0012ECF8  7C 9F 23 78 */	mr r31, r4
/* 80131DBC 0012ECFC  93 C1 00 08 */	stw r30, 8(r1)
/* 80131DC0 0012ED00  7C 7E 1B 78 */	mr r30, r3
/* 80131DC4 0012ED04  7F E3 FB 78 */	mr r3, r31
/* 80131DC8 0012ED08  48 2E 26 D5 */	bl readByte__6StreamFv
/* 80131DCC 0012ED0C  98 7E 00 A0 */	stb r3, 0xa0(r30)
/* 80131DD0 0012ED10  7F E4 FB 78 */	mr r4, r31
/* 80131DD4 0012ED14  38 7E 00 18 */	addi r3, r30, 0x18
/* 80131DD8 0012ED18  48 2E 1A 1D */	bl read__10ParametersFR6Stream
/* 80131DDC 0012ED1C  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 80131DE0 0012ED20  7F E4 FB 78 */	mr r4, r31
/* 80131DE4 0012ED24  81 9E 02 6C */	lwz r12, 0x26c(r30)
/* 80131DE8 0012ED28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80131DEC 0012ED2C  7D 89 03 A6 */	mtctr r12
/* 80131DF0 0012ED30  4E 80 04 21 */	bctrl 
/* 80131DF4 0012ED34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131DF8 0012ED38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131DFC 0012ED3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80131E00 0012ED40  7C 08 03 A6 */	mtlr r0
/* 80131E04 0012ED44  38 21 00 10 */	addi r1, r1, 0x10
/* 80131E08 0012ED48  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook10EnemyParmsFR6Stream

.fn __dt__Q34Game15IllustratedBook10EnemyParmsFv, weak
/* 80131E0C 0012ED4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131E10 0012ED50  7C 08 02 A6 */	mflr r0
/* 80131E14 0012ED54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131E18 0012ED58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131E1C 0012ED5C  7C 9F 23 78 */	mr r31, r4
/* 80131E20 0012ED60  93 C1 00 08 */	stw r30, 8(r1)
/* 80131E24 0012ED64  7C 7E 1B 79 */	or. r30, r3, r3
/* 80131E28 0012ED68  41 82 00 28 */	beq .L_80131E50
/* 80131E2C 0012ED6C  3C A0 80 4B */	lis r5, __vt__Q34Game15IllustratedBook10EnemyParms@ha
/* 80131E30 0012ED70  38 80 00 00 */	li r4, 0
/* 80131E34 0012ED74  38 05 FA 24 */	addi r0, r5, __vt__Q34Game15IllustratedBook10EnemyParms@l
/* 80131E38 0012ED78  90 1E 00 00 */	stw r0, 0(r30)
/* 80131E3C 0012ED7C  48 2D F7 4D */	bl __dt__5CNodeFv
/* 80131E40 0012ED80  7F E0 07 35 */	extsh. r0, r31
/* 80131E44 0012ED84  40 81 00 0C */	ble .L_80131E50
/* 80131E48 0012ED88  7F C3 F3 78 */	mr r3, r30
/* 80131E4C 0012ED8C  4B EF 22 69 */	bl __dl__FPv
.L_80131E50:
/* 80131E50 0012ED90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80131E54 0012ED94  7F C3 F3 78 */	mr r3, r30
/* 80131E58 0012ED98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80131E5C 0012ED9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80131E60 0012EDA0  7C 08 03 A6 */	mtlr r0
/* 80131E64 0012EDA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80131E68 0012EDA8  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook10EnemyParmsFv

.fn read__Q34Game15IllustratedBook14EnemyModeParmsFR6Stream, global
/* 80131E6C 0012EDAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80131E70 0012EDB0  7C 08 02 A6 */	mflr r0
/* 80131E74 0012EDB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80131E78 0012EDB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80131E7C 0012EDBC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80131E80 0012EDC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80131E84 0012EDC4  7C 7D 1B 78 */	mr r29, r3
/* 80131E88 0012EDC8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80131E8C 0012EDCC  7C 9C 23 78 */	mr r28, r4
/* 80131E90 0012EDD0  7F 83 E3 78 */	mr r3, r28
/* 80131E94 0012EDD4  48 2E 2B FD */	bl readInt__6StreamFv
/* 80131E98 0012EDD8  7C 7F 1B 78 */	mr r31, r3
/* 80131E9C 0012EDDC  7F BE EB 78 */	mr r30, r29
/* 80131EA0 0012EDE0  3B A0 00 00 */	li r29, 0
/* 80131EA4 0012EDE4  48 00 00 24 */	b .L_80131EC8
.L_80131EA8:
/* 80131EA8 0012EDE8  38 7E 00 18 */	addi r3, r30, 0x18
/* 80131EAC 0012EDEC  7F 84 E3 78 */	mr r4, r28
/* 80131EB0 0012EDF0  81 9E 00 18 */	lwz r12, 0x18(r30)
/* 80131EB4 0012EDF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80131EB8 0012EDF8  7D 89 03 A6 */	mtctr r12
/* 80131EBC 0012EDFC  4E 80 04 21 */	bctrl 
/* 80131EC0 0012EE00  3B DE 02 74 */	addi r30, r30, 0x274
/* 80131EC4 0012EE04  3B BD 00 01 */	addi r29, r29, 1
.L_80131EC8:
/* 80131EC8 0012EE08  7C 1D F8 40 */	cmplw r29, r31
/* 80131ECC 0012EE0C  41 80 FF DC */	blt .L_80131EA8
/* 80131ED0 0012EE10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80131ED4 0012EE14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80131ED8 0012EE18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80131EDC 0012EE1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80131EE0 0012EE20  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80131EE4 0012EE24  7C 08 03 A6 */	mtlr r0
/* 80131EE8 0012EE28  38 21 00 20 */	addi r1, r1, 0x20
/* 80131EEC 0012EE2C  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook14EnemyModeParmsFR6Stream

.fn __ct__Q34Game15IllustratedBook9ItemParmsFv, global
/* 80131EF0 0012EE30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80131EF4 0012EE34  7C 08 02 A6 */	mflr r0
/* 80131EF8 0012EE38  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 80131EFC 0012EE3C  39 40 00 00 */	li r10, 0
/* 80131F00 0012EE40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80131F04 0012EE44  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 80131F08 0012EE48  39 22 9E 64 */	addi r9, r2, lbl_805181C4@sda21
/* 80131F0C 0012EE4C  3C A0 80 48 */	lis r5, lbl_8047C358@ha
/* 80131F10 0012EE50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80131F14 0012EE54  7C 7F 1B 78 */	mr r31, r3
/* 80131F18 0012EE58  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook9ItemParms@ha
/* 80131F1C 0012EE5C  93 C1 00 08 */	stw r30, 8(r1)
/* 80131F20 0012EE60  3B C5 C3 58 */	addi r30, r5, lbl_8047C358@l
/* 80131F24 0012EE64  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 80131F28 0012EE68  39 03 F9 FC */	addi r8, r3, __vt__Q34Game15IllustratedBook9ItemParms@l
/* 80131F2C 0012EE6C  90 1F 00 00 */	stw r0, 0(r31)
/* 80131F30 0012EE70  38 9F 00 18 */	addi r4, r31, 0x18
/* 80131F34 0012EE74  38 FF 00 9C */	addi r7, r31, 0x9c
/* 80131F38 0012EE78  38 1E 00 90 */	addi r0, r30, 0x90
/* 80131F3C 0012EE7C  91 5F 00 10 */	stw r10, 0x10(r31)
/* 80131F40 0012EE80  38 64 00 0C */	addi r3, r4, 0xc
/* 80131F44 0012EE84  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 80131F48 0012EE88  38 DE 01 54 */	addi r6, r30, 0x154
/* 80131F4C 0012EE8C  91 5F 00 0C */	stw r10, 0xc(r31)
/* 80131F50 0012EE90  91 5F 00 08 */	stw r10, 8(r31)
/* 80131F54 0012EE94  91 5F 00 04 */	stw r10, 4(r31)
/* 80131F58 0012EE98  91 3F 00 14 */	stw r9, 0x14(r31)
/* 80131F5C 0012EE9C  91 1F 00 00 */	stw r8, 0(r31)
/* 80131F60 0012EEA0  90 FF 00 18 */	stw r7, 0x18(r31)
/* 80131F64 0012EEA4  91 5F 00 1C */	stw r10, 0x1c(r31)
/* 80131F68 0012EEA8  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80131F6C 0012EEAC  48 2E 16 ED */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131F70 0012EEB0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131F74 0012EEB4  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 80131F78 0012EEB8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131F7C 0012EEBC  38 9F 00 18 */	addi r4, r31, 0x18
/* 80131F80 0012EEC0  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80131F84 0012EEC4  38 64 00 34 */	addi r3, r4, 0x34
/* 80131F88 0012EEC8  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131F8C 0012EECC  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 80131F90 0012EED0  C0 22 9E 0C */	lfs f1, lbl_8051816C@sda21(r2)
/* 80131F94 0012EED4  38 DE 01 64 */	addi r6, r30, 0x164
/* 80131F98 0012EED8  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80131F9C 0012EEDC  C0 02 9E 10 */	lfs f0, lbl_80518170@sda21(r2)
/* 80131FA0 0012EEE0  D0 3F 00 44 */	stfs f1, 0x44(r31)
/* 80131FA4 0012EEE4  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 80131FA8 0012EEE8  48 2E 16 B1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131FAC 0012EEEC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131FB0 0012EEF0  3C A0 66 30 */	lis r5, 0x66303032@ha
/* 80131FB4 0012EEF4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131FB8 0012EEF8  38 9F 00 18 */	addi r4, r31, 0x18
/* 80131FBC 0012EEFC  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80131FC0 0012EF00  38 64 00 5C */	addi r3, r4, 0x5c
/* 80131FC4 0012EF04  C0 02 9E 08 */	lfs f0, lbl_80518168@sda21(r2)
/* 80131FC8 0012EF08  38 A5 30 32 */	addi r5, r5, 0x66303032@l
/* 80131FCC 0012EF0C  C0 22 9E 0C */	lfs f1, lbl_8051816C@sda21(r2)
/* 80131FD0 0012EF10  38 DE 01 74 */	addi r6, r30, 0x174
/* 80131FD4 0012EF14  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 80131FD8 0012EF18  C0 02 9E 10 */	lfs f0, lbl_80518170@sda21(r2)
/* 80131FDC 0012EF1C  D0 3F 00 6C */	stfs f1, 0x6c(r31)
/* 80131FE0 0012EF20  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80131FE4 0012EF24  48 2E 16 75 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80131FE8 0012EF28  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80131FEC 0012EF2C  C0 42 9E 08 */	lfs f2, lbl_80518168@sda21(r2)
/* 80131FF0 0012EF30  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80131FF4 0012EF34  C0 22 9E 0C */	lfs f1, lbl_8051816C@sda21(r2)
/* 80131FF8 0012EF38  90 1F 00 74 */	stw r0, 0x74(r31)
/* 80131FFC 0012EF3C  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 80132000 0012EF40  C0 02 9E 10 */	lfs f0, lbl_80518170@sda21(r2)
/* 80132004 0012EF44  D0 5F 00 8C */	stfs f2, 0x8c(r31)
/* 80132008 0012EF48  D0 3F 00 94 */	stfs f1, 0x94(r31)
/* 8013200C 0012EF4C  D0 1F 00 98 */	stfs f0, 0x98(r31)
/* 80132010 0012EF50  4B FF FA 75 */	bl __ct__Q34Game15IllustratedBook11CameraParmsFv
/* 80132014 0012EF54  38 00 FF FF */	li r0, -1
/* 80132018 0012EF58  7F E3 FB 78 */	mr r3, r31
/* 8013201C 0012EF5C  90 1F 02 74 */	stw r0, 0x274(r31)
/* 80132020 0012EF60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132024 0012EF64  83 C1 00 08 */	lwz r30, 8(r1)
/* 80132028 0012EF68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013202C 0012EF6C  7C 08 03 A6 */	mtlr r0
/* 80132030 0012EF70  38 21 00 10 */	addi r1, r1, 0x10
/* 80132034 0012EF74  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15IllustratedBook9ItemParmsFv

.fn read__Q34Game15IllustratedBook9ItemParmsFR6Stream, global
/* 80132038 0012EF78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013203C 0012EF7C  7C 08 02 A6 */	mflr r0
/* 80132040 0012EF80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132044 0012EF84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132048 0012EF88  7C 9F 23 78 */	mr r31, r4
/* 8013204C 0012EF8C  93 C1 00 08 */	stw r30, 8(r1)
/* 80132050 0012EF90  7C 7E 1B 78 */	mr r30, r3
/* 80132054 0012EF94  7F E3 FB 78 */	mr r3, r31
/* 80132058 0012EF98  48 2E 24 45 */	bl readByte__6StreamFv
/* 8013205C 0012EF9C  98 7E 00 A0 */	stb r3, 0xa0(r30)
/* 80132060 0012EFA0  7F E4 FB 78 */	mr r4, r31
/* 80132064 0012EFA4  38 7E 00 18 */	addi r3, r30, 0x18
/* 80132068 0012EFA8  48 2E 17 8D */	bl read__10ParametersFR6Stream
/* 8013206C 0012EFAC  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 80132070 0012EFB0  7F E4 FB 78 */	mr r4, r31
/* 80132074 0012EFB4  81 9E 02 6C */	lwz r12, 0x26c(r30)
/* 80132078 0012EFB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013207C 0012EFBC  7D 89 03 A6 */	mtctr r12
/* 80132080 0012EFC0  4E 80 04 21 */	bctrl 
/* 80132084 0012EFC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132088 0012EFC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013208C 0012EFCC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80132090 0012EFD0  7C 08 03 A6 */	mtlr r0
/* 80132094 0012EFD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80132098 0012EFD8  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook9ItemParmsFR6Stream

.fn __dt__Q34Game15IllustratedBook9ItemParmsFv, weak
/* 8013209C 0012EFDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801320A0 0012EFE0  7C 08 02 A6 */	mflr r0
/* 801320A4 0012EFE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801320A8 0012EFE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801320AC 0012EFEC  7C 9F 23 78 */	mr r31, r4
/* 801320B0 0012EFF0  93 C1 00 08 */	stw r30, 8(r1)
/* 801320B4 0012EFF4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801320B8 0012EFF8  41 82 00 28 */	beq .L_801320E0
/* 801320BC 0012EFFC  3C A0 80 4B */	lis r5, __vt__Q34Game15IllustratedBook9ItemParms@ha
/* 801320C0 0012F000  38 80 00 00 */	li r4, 0
/* 801320C4 0012F004  38 05 F9 FC */	addi r0, r5, __vt__Q34Game15IllustratedBook9ItemParms@l
/* 801320C8 0012F008  90 1E 00 00 */	stw r0, 0(r30)
/* 801320CC 0012F00C  48 2D F4 BD */	bl __dt__5CNodeFv
/* 801320D0 0012F010  7F E0 07 35 */	extsh. r0, r31
/* 801320D4 0012F014  40 81 00 0C */	ble .L_801320E0
/* 801320D8 0012F018  7F C3 F3 78 */	mr r3, r30
/* 801320DC 0012F01C  4B EF 1F D9 */	bl __dl__FPv
.L_801320E0:
/* 801320E0 0012F020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801320E4 0012F024  7F C3 F3 78 */	mr r3, r30
/* 801320E8 0012F028  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801320EC 0012F02C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801320F0 0012F030  7C 08 03 A6 */	mtlr r0
/* 801320F4 0012F034  38 21 00 10 */	addi r1, r1, 0x10
/* 801320F8 0012F038  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook9ItemParmsFv

.fn read__Q34Game15IllustratedBook13ItemModeParmsFR6Stream, global
/* 801320FC 0012F03C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80132100 0012F040  7C 08 02 A6 */	mflr r0
/* 80132104 0012F044  90 01 00 24 */	stw r0, 0x24(r1)
/* 80132108 0012F048  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013210C 0012F04C  3B E0 00 00 */	li r31, 0
/* 80132110 0012F050  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80132114 0012F054  3B C0 00 00 */	li r30, 0
/* 80132118 0012F058  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013211C 0012F05C  7C 9D 23 78 */	mr r29, r4
/* 80132120 0012F060  93 81 00 10 */	stw r28, 0x10(r1)
/* 80132124 0012F064  7C 7C 1B 78 */	mr r28, r3
/* 80132128 0012F068  48 00 00 28 */	b .L_80132150
.L_8013212C:
/* 8013212C 0012F06C  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80132130 0012F070  7F A4 EB 78 */	mr r4, r29
/* 80132134 0012F074  7C 60 FA 14 */	add r3, r0, r31
/* 80132138 0012F078  81 83 00 00 */	lwz r12, 0(r3)
/* 8013213C 0012F07C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80132140 0012F080  7D 89 03 A6 */	mtctr r12
/* 80132144 0012F084  4E 80 04 21 */	bctrl 
/* 80132148 0012F088  3B FF 02 78 */	addi r31, r31, 0x278
/* 8013214C 0012F08C  3B DE 00 01 */	addi r30, r30, 1
.L_80132150:
/* 80132150 0012F090  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 80132154 0012F094  7C 1E 00 40 */	cmplw r30, r0
/* 80132158 0012F098  41 80 FF D4 */	blt .L_8013212C
/* 8013215C 0012F09C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80132160 0012F0A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80132164 0012F0A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80132168 0012F0A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013216C 0012F0AC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80132170 0012F0B0  7C 08 03 A6 */	mtlr r0
/* 80132174 0012F0B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80132178 0012F0B8  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook13ItemModeParmsFR6Stream

.fn __ct__Q34Game15IllustratedBook5ParmsFv, global
/* 8013217C 0012F0BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80132180 0012F0C0  7C 08 02 A6 */	mflr r0
/* 80132184 0012F0C4  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 80132188 0012F0C8  38 A0 00 00 */	li r5, 0
/* 8013218C 0012F0CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80132190 0012F0D0  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 80132194 0012F0D4  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 80132198 0012F0D8  7C 7E 1B 78 */	mr r30, r3
/* 8013219C 0012F0DC  3C 60 80 48 */	lis r3, lbl_8047C358@ha
/* 801321A0 0012F0E0  3B E3 C3 58 */	addi r31, r3, lbl_8047C358@l
/* 801321A4 0012F0E4  38 9F 01 90 */	addi r4, r31, 0x190
/* 801321A8 0012F0E8  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook5Parms@ha
/* 801321AC 0012F0EC  90 1E 00 00 */	stw r0, 0(r30)
/* 801321B0 0012F0F0  38 03 F9 D4 */	addi r0, r3, __vt__Q34Game15IllustratedBook5Parms@l
/* 801321B4 0012F0F4  38 7E 00 18 */	addi r3, r30, 0x18
/* 801321B8 0012F0F8  90 BE 00 10 */	stw r5, 0x10(r30)
/* 801321BC 0012F0FC  90 BE 00 0C */	stw r5, 0xc(r30)
/* 801321C0 0012F100  90 BE 00 08 */	stw r5, 8(r30)
/* 801321C4 0012F104  90 BE 00 04 */	stw r5, 4(r30)
/* 801321C8 0012F108  90 9E 00 14 */	stw r4, 0x14(r30)
/* 801321CC 0012F10C  90 1E 00 00 */	stw r0, 0(r30)
/* 801321D0 0012F110  4B FF E9 CD */	bl __ct__Q34Game15IllustratedBook12ColorSettingFv
/* 801321D4 0012F114  3C 60 80 4F */	lis r3, __vt__5CNode@ha
/* 801321D8 0012F118  3C 80 80 13 */	lis r4, __ct__Q34Game15IllustratedBook13PositionParmsFv@ha
/* 801321DC 0012F11C  38 03 B5 28 */	addi r0, r3, __vt__5CNode@l
/* 801321E0 0012F120  39 20 00 00 */	li r9, 0
/* 801321E4 0012F124  90 1E 00 78 */	stw r0, 0x78(r30)
/* 801321E8 0012F128  3C C0 80 4B */	lis r6, __vt__Q34Game15IllustratedBook17PositionParmsList@ha
/* 801321EC 0012F12C  38 06 FA 44 */	addi r0, r6, __vt__Q34Game15IllustratedBook17PositionParmsList@l
/* 801321F0 0012F130  3C 60 80 13 */	lis r3, __dt__Q34Game15IllustratedBook13PositionParmsFv@ha
/* 801321F4 0012F134  91 3E 00 88 */	stw r9, 0x88(r30)
/* 801321F8 0012F138  39 1F 00 80 */	addi r8, r31, 0x80
/* 801321FC 0012F13C  3B 3E 00 78 */	addi r25, r30, 0x78
/* 80132200 0012F140  38 A3 18 6C */	addi r5, r3, __dt__Q34Game15IllustratedBook13PositionParmsFv@l
/* 80132204 0012F144  91 3E 00 84 */	stw r9, 0x84(r30)
/* 80132208 0012F148  38 84 16 D4 */	addi r4, r4, __ct__Q34Game15IllustratedBook13PositionParmsFv@l
/* 8013220C 0012F14C  38 79 00 18 */	addi r3, r25, 0x18
/* 80132210 0012F150  38 C0 00 C0 */	li r6, 0xc0
/* 80132214 0012F154  91 3E 00 80 */	stw r9, 0x80(r30)
/* 80132218 0012F158  38 E0 00 0A */	li r7, 0xa
/* 8013221C 0012F15C  91 3E 00 7C */	stw r9, 0x7c(r30)
/* 80132220 0012F160  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 80132224 0012F164  90 1E 00 78 */	stw r0, 0x78(r30)
/* 80132228 0012F168  4B F8 F6 15 */	bl __construct_array
/* 8013222C 0012F16C  3B 60 00 00 */	li r27, 0
/* 80132230 0012F170  7F 7A DB 78 */	mr r26, r27
.L_80132234:
/* 80132234 0012F174  38 9A 00 18 */	addi r4, r26, 0x18
/* 80132238 0012F178  7F 23 CB 78 */	mr r3, r25
/* 8013223C 0012F17C  7C 99 22 14 */	add r4, r25, r4
/* 80132240 0012F180  48 2D F1 C9 */	bl add__5CNodeFP5CNode
/* 80132244 0012F184  3B 7B 00 01 */	addi r27, r27, 1
/* 80132248 0012F188  3B 5A 00 C0 */	addi r26, r26, 0xc0
/* 8013224C 0012F18C  28 1B 00 0A */	cmplwi r27, 0xa
/* 80132250 0012F190  41 80 FF E4 */	blt .L_80132234
/* 80132254 0012F194  3C 60 80 4F */	lis r3, __vt__5CNode@ha
/* 80132258 0012F198  3C 80 80 13 */	lis r4, __ct__Q34Game15IllustratedBook10EnemyParmsFv@ha
/* 8013225C 0012F19C  38 03 B5 28 */	addi r0, r3, __vt__5CNode@l
/* 80132260 0012F1A0  39 20 00 00 */	li r9, 0
/* 80132264 0012F1A4  90 1E 08 10 */	stw r0, 0x810(r30)
/* 80132268 0012F1A8  3C C0 80 4B */	lis r6, __vt__Q34Game15IllustratedBook14EnemyModeParms@ha
/* 8013226C 0012F1AC  38 06 FA 10 */	addi r0, r6, __vt__Q34Game15IllustratedBook14EnemyModeParms@l
/* 80132270 0012F1B0  3C 60 80 13 */	lis r3, __dt__Q34Game15IllustratedBook10EnemyParmsFv@ha
/* 80132274 0012F1B4  91 3E 08 20 */	stw r9, 0x820(r30)
/* 80132278 0012F1B8  39 02 9E 5C */	addi r8, r2, lbl_805181BC@sda21
/* 8013227C 0012F1BC  3B BE 08 10 */	addi r29, r30, 0x810
/* 80132280 0012F1C0  38 A3 1E 0C */	addi r5, r3, __dt__Q34Game15IllustratedBook10EnemyParmsFv@l
/* 80132284 0012F1C4  91 3E 08 1C */	stw r9, 0x81c(r30)
/* 80132288 0012F1C8  38 84 19 54 */	addi r4, r4, __ct__Q34Game15IllustratedBook10EnemyParmsFv@l
/* 8013228C 0012F1CC  38 7D 00 18 */	addi r3, r29, 0x18
/* 80132290 0012F1D0  38 C0 02 74 */	li r6, 0x274
/* 80132294 0012F1D4  91 3E 08 18 */	stw r9, 0x818(r30)
/* 80132298 0012F1D8  38 E0 00 66 */	li r7, 0x66
/* 8013229C 0012F1DC  91 3E 08 14 */	stw r9, 0x814(r30)
/* 801322A0 0012F1E0  91 1E 08 24 */	stw r8, 0x824(r30)
/* 801322A4 0012F1E4  90 1E 08 10 */	stw r0, 0x810(r30)
/* 801322A8 0012F1E8  4B F8 F5 95 */	bl __construct_array
/* 801322AC 0012F1EC  3B 40 00 00 */	li r26, 0
/* 801322B0 0012F1F0  3B 9E 00 78 */	addi r28, r30, 0x78
/* 801322B4 0012F1F4  7F 59 D3 78 */	mr r25, r26
/* 801322B8 0012F1F8  3F 60 00 01 */	lis r27, 0x0000FFFF@ha
.L_801322BC:
/* 801322BC 0012F1FC  7F 43 D3 78 */	mr r3, r26
/* 801322C0 0012F200  38 9B FF FF */	addi r4, r27, 0x0000FFFF@l
/* 801322C4 0012F204  4B FF 10 19 */	bl getEnemyName__Q24Game13EnemyInfoFuncFii
/* 801322C8 0012F208  38 19 00 2C */	addi r0, r25, 0x2c
/* 801322CC 0012F20C  38 99 00 18 */	addi r4, r25, 0x18
/* 801322D0 0012F210  7C 7D 01 2E */	stwx r3, r29, r0
/* 801322D4 0012F214  38 19 02 88 */	addi r0, r25, 0x288
/* 801322D8 0012F218  7F A3 EB 78 */	mr r3, r29
/* 801322DC 0012F21C  7C 9D 22 14 */	add r4, r29, r4
/* 801322E0 0012F220  7F 9D 01 2E */	stwx r28, r29, r0
/* 801322E4 0012F224  48 2D F1 25 */	bl add__5CNodeFP5CNode
/* 801322E8 0012F228  3B 5A 00 01 */	addi r26, r26, 1
/* 801322EC 0012F22C  3B 39 02 74 */	addi r25, r25, 0x274
/* 801322F0 0012F230  2C 1A 00 66 */	cmpwi r26, 0x66
/* 801322F4 0012F234  41 80 FF C8 */	blt .L_801322BC
/* 801322F8 0012F238  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 801322FC 0012F23C  3F BE 00 01 */	addis r29, r30, 1
/* 80132300 0012F240  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 80132304 0012F244  38 A0 00 00 */	li r5, 0
/* 80132308 0012F248  90 1D 02 60 */	stw r0, 0x260(r29)
/* 8013230C 0012F24C  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook13ItemModeParms@ha
/* 80132310 0012F250  38 9F 01 84 */	addi r4, r31, 0x184
/* 80132314 0012F254  90 BD 02 70 */	stw r5, 0x270(r29)
/* 80132318 0012F258  38 03 F9 E8 */	addi r0, r3, __vt__Q34Game15IllustratedBook13ItemModeParms@l
/* 8013231C 0012F25C  90 BD 02 6C */	stw r5, 0x26c(r29)
/* 80132320 0012F260  90 BD 02 68 */	stw r5, 0x268(r29)
/* 80132324 0012F264  90 BD 02 64 */	stw r5, 0x264(r29)
/* 80132328 0012F268  90 9D 02 74 */	stw r4, 0x274(r29)
/* 8013232C 0012F26C  94 1D 02 60 */	stwu r0, 0x260(r29)
/* 80132330 0012F270  48 0F 17 39 */	bl getMaxPelletID__Q34Game10SingleGame10ZukanStateFv
/* 80132334 0012F274  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 80132338 0012F278  83 5D 00 1C */	lwz r26, 0x1c(r29)
/* 8013233C 0012F27C  1C 7A 02 78 */	mulli r3, r26, 0x278
/* 80132340 0012F280  38 63 00 10 */	addi r3, r3, 0x10
/* 80132344 0012F284  4B EF 1C 69 */	bl __nwa__FUl
/* 80132348 0012F288  3C 80 80 13 */	lis r4, __ct__Q34Game15IllustratedBook9ItemParmsFv@ha
/* 8013234C 0012F28C  3C A0 80 13 */	lis r5, __dt__Q34Game15IllustratedBook9ItemParmsFv@ha
/* 80132350 0012F290  38 84 1E F0 */	addi r4, r4, __ct__Q34Game15IllustratedBook9ItemParmsFv@l
/* 80132354 0012F294  7F 47 D3 78 */	mr r7, r26
/* 80132358 0012F298  38 A5 20 9C */	addi r5, r5, __dt__Q34Game15IllustratedBook9ItemParmsFv@l
/* 8013235C 0012F29C  38 C0 02 78 */	li r6, 0x278
/* 80132360 0012F2A0  4B F8 F6 91 */	bl __construct_new_array
/* 80132364 0012F2A4  3B 40 00 00 */	li r26, 0
/* 80132368 0012F2A8  90 7D 00 18 */	stw r3, 0x18(r29)
/* 8013236C 0012F2AC  7F 59 D3 78 */	mr r25, r26
/* 80132370 0012F2B0  3B FE 00 78 */	addi r31, r30, 0x78
/* 80132374 0012F2B4  48 00 00 4C */	b .L_801323C0
.L_80132378:
/* 80132378 0012F2B8  7F 43 D3 78 */	mr r3, r26
/* 8013237C 0012F2BC  48 0F 17 29 */	bl getCurrentPelletConfig__Q34Game10SingleGame10ZukanStateFi
/* 80132380 0012F2C0  80 DD 00 18 */	lwz r6, 0x18(r29)
/* 80132384 0012F2C4  38 B9 02 74 */	addi r5, r25, 0x274
/* 80132388 0012F2C8  38 99 00 14 */	addi r4, r25, 0x14
/* 8013238C 0012F2CC  38 19 02 70 */	addi r0, r25, 0x270
/* 80132390 0012F2D0  7F 46 29 2E */	stwx r26, r6, r5
/* 80132394 0012F2D4  80 C3 00 40 */	lwz r6, 0x40(r3)
/* 80132398 0012F2D8  7F A3 EB 78 */	mr r3, r29
/* 8013239C 0012F2DC  80 BD 00 18 */	lwz r5, 0x18(r29)
/* 801323A0 0012F2E0  7C C5 21 2E */	stwx r6, r5, r4
/* 801323A4 0012F2E4  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 801323A8 0012F2E8  7F E4 01 2E */	stwx r31, r4, r0
/* 801323AC 0012F2EC  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 801323B0 0012F2F0  7C 80 CA 14 */	add r4, r0, r25
/* 801323B4 0012F2F4  48 2D F0 55 */	bl add__5CNodeFP5CNode
/* 801323B8 0012F2F8  3B 39 02 78 */	addi r25, r25, 0x278
/* 801323BC 0012F2FC  3B 5A 00 01 */	addi r26, r26, 1
.L_801323C0:
/* 801323C0 0012F300  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 801323C4 0012F304  7C 1A 00 40 */	cmplw r26, r0
/* 801323C8 0012F308  41 80 FF B0 */	blt .L_80132378
/* 801323CC 0012F30C  7F C3 F3 78 */	mr r3, r30
/* 801323D0 0012F310  38 9E 00 18 */	addi r4, r30, 0x18
/* 801323D4 0012F314  48 2D F0 35 */	bl add__5CNodeFP5CNode
/* 801323D8 0012F318  7F C3 F3 78 */	mr r3, r30
/* 801323DC 0012F31C  38 9E 00 78 */	addi r4, r30, 0x78
/* 801323E0 0012F320  48 2D F0 29 */	bl add__5CNodeFP5CNode
/* 801323E4 0012F324  7F C3 F3 78 */	mr r3, r30
/* 801323E8 0012F328  38 9E 08 10 */	addi r4, r30, 0x810
/* 801323EC 0012F32C  48 2D F0 1D */	bl add__5CNodeFP5CNode
/* 801323F0 0012F330  3C 9E 00 01 */	addis r4, r30, 1
/* 801323F4 0012F334  7F C3 F3 78 */	mr r3, r30
/* 801323F8 0012F338  38 84 02 60 */	addi r4, r4, 0x260
/* 801323FC 0012F33C  48 2D F0 0D */	bl add__5CNodeFP5CNode
/* 80132400 0012F340  7F C3 F3 78 */	mr r3, r30
/* 80132404 0012F344  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 80132408 0012F348  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013240C 0012F34C  7C 08 03 A6 */	mtlr r0
/* 80132410 0012F350  38 21 00 30 */	addi r1, r1, 0x30
/* 80132414 0012F354  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15IllustratedBook5ParmsFv

.fn __dt__Q34Game15IllustratedBook13ItemModeParmsFv, weak
/* 80132418 0012F358  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013241C 0012F35C  7C 08 02 A6 */	mflr r0
/* 80132420 0012F360  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132424 0012F364  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132428 0012F368  7C 9F 23 78 */	mr r31, r4
/* 8013242C 0012F36C  93 C1 00 08 */	stw r30, 8(r1)
/* 80132430 0012F370  7C 7E 1B 79 */	or. r30, r3, r3
/* 80132434 0012F374  41 82 00 28 */	beq .L_8013245C
/* 80132438 0012F378  3C A0 80 4B */	lis r5, __vt__Q34Game15IllustratedBook13ItemModeParms@ha
/* 8013243C 0012F37C  38 80 00 00 */	li r4, 0
/* 80132440 0012F380  38 05 F9 E8 */	addi r0, r5, __vt__Q34Game15IllustratedBook13ItemModeParms@l
/* 80132444 0012F384  90 1E 00 00 */	stw r0, 0(r30)
/* 80132448 0012F388  48 2D F1 41 */	bl __dt__5CNodeFv
/* 8013244C 0012F38C  7F E0 07 35 */	extsh. r0, r31
/* 80132450 0012F390  40 81 00 0C */	ble .L_8013245C
/* 80132454 0012F394  7F C3 F3 78 */	mr r3, r30
/* 80132458 0012F398  4B EF 1C 5D */	bl __dl__FPv
.L_8013245C:
/* 8013245C 0012F39C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132460 0012F3A0  7F C3 F3 78 */	mr r3, r30
/* 80132464 0012F3A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132468 0012F3A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013246C 0012F3AC  7C 08 03 A6 */	mtlr r0
/* 80132470 0012F3B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80132474 0012F3B4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook13ItemModeParmsFv

.fn __dt__Q34Game15IllustratedBook14EnemyModeParmsFv, weak
/* 80132478 0012F3B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013247C 0012F3BC  7C 08 02 A6 */	mflr r0
/* 80132480 0012F3C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132484 0012F3C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132488 0012F3C8  7C 9F 23 78 */	mr r31, r4
/* 8013248C 0012F3CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80132490 0012F3D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80132494 0012F3D4  41 82 00 44 */	beq .L_801324D8
/* 80132498 0012F3D8  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@ha
/* 8013249C 0012F3DC  3C 80 80 13 */	lis r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@ha
/* 801324A0 0012F3E0  38 03 FA 10 */	addi r0, r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@l
/* 801324A4 0012F3E4  38 A0 02 74 */	li r5, 0x274
/* 801324A8 0012F3E8  90 1E 00 00 */	stw r0, 0(r30)
/* 801324AC 0012F3EC  38 7E 00 18 */	addi r3, r30, 0x18
/* 801324B0 0012F3F0  38 84 1E 0C */	addi r4, r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@l
/* 801324B4 0012F3F4  38 C0 00 66 */	li r6, 0x66
/* 801324B8 0012F3F8  4B F8 F3 0D */	bl __destroy_arr
/* 801324BC 0012F3FC  7F C3 F3 78 */	mr r3, r30
/* 801324C0 0012F400  38 80 00 00 */	li r4, 0
/* 801324C4 0012F404  48 2D F0 C5 */	bl __dt__5CNodeFv
/* 801324C8 0012F408  7F E0 07 35 */	extsh. r0, r31
/* 801324CC 0012F40C  40 81 00 0C */	ble .L_801324D8
/* 801324D0 0012F410  7F C3 F3 78 */	mr r3, r30
/* 801324D4 0012F414  4B EF 1B E1 */	bl __dl__FPv
.L_801324D8:
/* 801324D8 0012F418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801324DC 0012F41C  7F C3 F3 78 */	mr r3, r30
/* 801324E0 0012F420  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801324E4 0012F424  83 C1 00 08 */	lwz r30, 8(r1)
/* 801324E8 0012F428  7C 08 03 A6 */	mtlr r0
/* 801324EC 0012F42C  38 21 00 10 */	addi r1, r1, 0x10
/* 801324F0 0012F430  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook14EnemyModeParmsFv

.fn __dt__Q34Game15IllustratedBook17PositionParmsListFv, weak
/* 801324F4 0012F434  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801324F8 0012F438  7C 08 02 A6 */	mflr r0
/* 801324FC 0012F43C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80132500 0012F440  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132504 0012F444  7C 9F 23 78 */	mr r31, r4
/* 80132508 0012F448  93 C1 00 08 */	stw r30, 8(r1)
/* 8013250C 0012F44C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80132510 0012F450  41 82 00 44 */	beq .L_80132554
/* 80132514 0012F454  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook17PositionParmsList@ha
/* 80132518 0012F458  3C 80 80 13 */	lis r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@ha
/* 8013251C 0012F45C  38 03 FA 44 */	addi r0, r3, __vt__Q34Game15IllustratedBook17PositionParmsList@l
/* 80132520 0012F460  38 A0 00 C0 */	li r5, 0xc0
/* 80132524 0012F464  90 1E 00 00 */	stw r0, 0(r30)
/* 80132528 0012F468  38 7E 00 18 */	addi r3, r30, 0x18
/* 8013252C 0012F46C  38 84 18 6C */	addi r4, r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@l
/* 80132530 0012F470  38 C0 00 0A */	li r6, 0xa
/* 80132534 0012F474  4B F8 F2 91 */	bl __destroy_arr
/* 80132538 0012F478  7F C3 F3 78 */	mr r3, r30
/* 8013253C 0012F47C  38 80 00 00 */	li r4, 0
/* 80132540 0012F480  48 2D F0 49 */	bl __dt__5CNodeFv
/* 80132544 0012F484  7F E0 07 35 */	extsh. r0, r31
/* 80132548 0012F488  40 81 00 0C */	ble .L_80132554
/* 8013254C 0012F48C  7F C3 F3 78 */	mr r3, r30
/* 80132550 0012F490  4B EF 1B 65 */	bl __dl__FPv
.L_80132554:
/* 80132554 0012F494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80132558 0012F498  7F C3 F3 78 */	mr r3, r30
/* 8013255C 0012F49C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132560 0012F4A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80132564 0012F4A4  7C 08 03 A6 */	mtlr r0
/* 80132568 0012F4A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013256C 0012F4AC  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook17PositionParmsListFv

.fn __dt__Q34Game15IllustratedBook12ColorSettingFv, weak
/* 80132570 0012F4B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132574 0012F4B4  7C 08 02 A6 */	mflr r0
/* 80132578 0012F4B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013257C 0012F4BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132580 0012F4C0  7C 9F 23 78 */	mr r31, r4
/* 80132584 0012F4C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80132588 0012F4C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013258C 0012F4CC  41 82 00 28 */	beq .L_801325B4
/* 80132590 0012F4D0  3C A0 80 4B */	lis r5, __vt__Q34Game15IllustratedBook12ColorSetting@ha
/* 80132594 0012F4D4  38 80 00 00 */	li r4, 0
/* 80132598 0012F4D8  38 05 FA 6C */	addi r0, r5, __vt__Q34Game15IllustratedBook12ColorSetting@l
/* 8013259C 0012F4DC  90 1E 00 00 */	stw r0, 0(r30)
/* 801325A0 0012F4E0  48 2D EF E9 */	bl __dt__5CNodeFv
/* 801325A4 0012F4E4  7F E0 07 35 */	extsh. r0, r31
/* 801325A8 0012F4E8  40 81 00 0C */	ble .L_801325B4
/* 801325AC 0012F4EC  7F C3 F3 78 */	mr r3, r30
/* 801325B0 0012F4F0  4B EF 1B 05 */	bl __dl__FPv
.L_801325B4:
/* 801325B4 0012F4F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801325B8 0012F4F8  7F C3 F3 78 */	mr r3, r30
/* 801325BC 0012F4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801325C0 0012F500  83 C1 00 08 */	lwz r30, 8(r1)
/* 801325C4 0012F504  7C 08 03 A6 */	mtlr r0
/* 801325C8 0012F508  38 21 00 10 */	addi r1, r1, 0x10
/* 801325CC 0012F50C  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook12ColorSettingFv

.fn read__Q34Game15IllustratedBook5ParmsFR6Stream, global
/* 801325D0 0012F510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801325D4 0012F514  7C 08 02 A6 */	mflr r0
/* 801325D8 0012F518  90 01 00 14 */	stw r0, 0x14(r1)
/* 801325DC 0012F51C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801325E0 0012F520  7C 9F 23 78 */	mr r31, r4
/* 801325E4 0012F524  93 C1 00 08 */	stw r30, 8(r1)
/* 801325E8 0012F528  7C 7E 1B 78 */	mr r30, r3
/* 801325EC 0012F52C  38 7E 00 18 */	addi r3, r30, 0x18
/* 801325F0 0012F530  81 9E 00 18 */	lwz r12, 0x18(r30)
/* 801325F4 0012F534  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801325F8 0012F538  7D 89 03 A6 */	mtctr r12
/* 801325FC 0012F53C  4E 80 04 21 */	bctrl 
/* 80132600 0012F540  38 7E 00 78 */	addi r3, r30, 0x78
/* 80132604 0012F544  7F E4 FB 78 */	mr r4, r31
/* 80132608 0012F548  81 9E 00 78 */	lwz r12, 0x78(r30)
/* 8013260C 0012F54C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80132610 0012F550  7D 89 03 A6 */	mtctr r12
/* 80132614 0012F554  4E 80 04 21 */	bctrl 
/* 80132618 0012F558  38 7E 08 10 */	addi r3, r30, 0x810
/* 8013261C 0012F55C  7F E4 FB 78 */	mr r4, r31
/* 80132620 0012F560  81 9E 08 10 */	lwz r12, 0x810(r30)
/* 80132624 0012F564  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80132628 0012F568  7D 89 03 A6 */	mtctr r12
/* 8013262C 0012F56C  4E 80 04 21 */	bctrl 
/* 80132630 0012F570  3C 7E 00 01 */	addis r3, r30, 1
/* 80132634 0012F574  85 83 02 60 */	lwzu r12, 0x260(r3)
/* 80132638 0012F578  7F E4 FB 78 */	mr r4, r31
/* 8013263C 0012F57C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80132640 0012F580  7D 89 03 A6 */	mtctr r12
/* 80132644 0012F584  4E 80 04 21 */	bctrl 
/* 80132648 0012F588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013264C 0012F58C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132650 0012F590  83 C1 00 08 */	lwz r30, 8(r1)
/* 80132654 0012F594  7C 08 03 A6 */	mtlr r0
/* 80132658 0012F598  38 21 00 10 */	addi r1, r1, 0x10
/* 8013265C 0012F59C  4E 80 00 20 */	blr 
.endfn read__Q34Game15IllustratedBook5ParmsFR6Stream

.fn loadFile__Q34Game15IllustratedBook5ParmsFP10JKRArchive, global
/* 80132660 0012F5A0  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 80132664 0012F5A4  7C 08 02 A6 */	mflr r0
/* 80132668 0012F5A8  90 01 04 44 */	stw r0, 0x444(r1)
/* 8013266C 0012F5AC  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 80132670 0012F5B0  93 C1 04 38 */	stw r30, 0x438(r1)
/* 80132674 0012F5B4  7C 9E 23 79 */	or. r30, r4, r4
/* 80132678 0012F5B8  3C 80 80 48 */	lis r4, lbl_8047C358@ha
/* 8013267C 0012F5BC  93 A1 04 34 */	stw r29, 0x434(r1)
/* 80132680 0012F5C0  7C 7D 1B 78 */	mr r29, r3
/* 80132684 0012F5C4  3B E4 C3 58 */	addi r31, r4, lbl_8047C358@l
/* 80132688 0012F5C8  40 82 00 18 */	bne .L_801326A0
/* 8013268C 0012F5CC  38 7F 00 0C */	addi r3, r31, 0xc
/* 80132690 0012F5D0  38 BF 01 9C */	addi r5, r31, 0x19c
/* 80132694 0012F5D4  38 80 02 DE */	li r4, 0x2de
/* 80132698 0012F5D8  4C C6 31 82 */	crclr 6
/* 8013269C 0012F5DC  4B EF 7F A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801326A0:
/* 801326A0 0012F5E0  7F C3 F3 78 */	mr r3, r30
/* 801326A4 0012F5E4  38 9F 01 A8 */	addi r4, r31, 0x1a8
/* 801326A8 0012F5E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801326AC 0012F5EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801326B0 0012F5F0  7D 89 03 A6 */	mtctr r12
/* 801326B4 0012F5F4  4E 80 04 21 */	bctrl 
/* 801326B8 0012F5F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801326BC 0012F5FC  40 82 00 18 */	bne .L_801326D4
/* 801326C0 0012F600  38 7F 00 0C */	addi r3, r31, 0xc
/* 801326C4 0012F604  38 BF 01 9C */	addi r5, r31, 0x19c
/* 801326C8 0012F608  38 80 02 E0 */	li r4, 0x2e0
/* 801326CC 0012F60C  4C C6 31 82 */	crclr 6
/* 801326D0 0012F610  4B EF 7F 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801326D4:
/* 801326D4 0012F614  7F C4 F3 78 */	mr r4, r30
/* 801326D8 0012F618  38 61 00 08 */	addi r3, r1, 8
/* 801326DC 0012F61C  38 A0 FF FF */	li r5, -1
/* 801326E0 0012F620  48 2E 32 19 */	bl __ct__9RamStreamFPvi
/* 801326E4 0012F624  38 00 00 01 */	li r0, 1
/* 801326E8 0012F628  2C 00 00 01 */	cmpwi r0, 1
/* 801326EC 0012F62C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801326F0 0012F630  40 82 00 0C */	bne .L_801326FC
/* 801326F4 0012F634  38 00 00 00 */	li r0, 0
/* 801326F8 0012F638  90 01 04 1C */	stw r0, 0x41c(r1)
.L_801326FC:
/* 801326FC 0012F63C  7F A3 EB 78 */	mr r3, r29
/* 80132700 0012F640  38 81 00 08 */	addi r4, r1, 8
/* 80132704 0012F644  81 9D 00 00 */	lwz r12, 0(r29)
/* 80132708 0012F648  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013270C 0012F64C  7D 89 03 A6 */	mtctr r12
/* 80132710 0012F650  4E 80 04 21 */	bctrl 
/* 80132714 0012F654  80 01 04 44 */	lwz r0, 0x444(r1)
/* 80132718 0012F658  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 8013271C 0012F65C  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 80132720 0012F660  83 A1 04 34 */	lwz r29, 0x434(r1)
/* 80132724 0012F664  7C 08 03 A6 */	mtlr r0
/* 80132728 0012F668  38 21 04 40 */	addi r1, r1, 0x440
/* 8013272C 0012F66C  4E 80 00 20 */	blr 
.endfn loadFile__Q34Game15IllustratedBook5ParmsFP10JKRArchive

.fn __dt__Q34Game15IllustratedBook5ParmsFv, weak
/* 80132730 0012F670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80132734 0012F674  7C 08 02 A6 */	mflr r0
/* 80132738 0012F678  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013273C 0012F67C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80132740 0012F680  7C 9F 23 78 */	mr r31, r4
/* 80132744 0012F684  93 C1 00 08 */	stw r30, 8(r1)
/* 80132748 0012F688  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013274C 0012F68C  41 82 00 DC */	beq .L_80132828
/* 80132750 0012F690  3C 7E 00 01 */	addis r3, r30, 1
/* 80132754 0012F694  3C 80 80 4B */	lis r4, __vt__Q34Game15IllustratedBook5Parms@ha
/* 80132758 0012F698  38 84 F9 D4 */	addi r4, r4, __vt__Q34Game15IllustratedBook5Parms@l
/* 8013275C 0012F69C  34 03 02 60 */	addic. r0, r3, 0x260
/* 80132760 0012F6A0  90 9E 00 00 */	stw r4, 0(r30)
/* 80132764 0012F6A4  41 82 00 18 */	beq .L_8013277C
/* 80132768 0012F6A8  3C 80 80 4B */	lis r4, __vt__Q34Game15IllustratedBook13ItemModeParms@ha
/* 8013276C 0012F6AC  38 04 F9 E8 */	addi r0, r4, __vt__Q34Game15IllustratedBook13ItemModeParms@l
/* 80132770 0012F6B0  94 03 02 60 */	stwu r0, 0x260(r3)
/* 80132774 0012F6B4  38 80 00 00 */	li r4, 0
/* 80132778 0012F6B8  48 2D EE 11 */	bl __dt__5CNodeFv
.L_8013277C:
/* 8013277C 0012F6BC  34 1E 08 10 */	addic. r0, r30, 0x810
/* 80132780 0012F6C0  41 82 00 34 */	beq .L_801327B4
/* 80132784 0012F6C4  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@ha
/* 80132788 0012F6C8  3C 80 80 13 */	lis r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@ha
/* 8013278C 0012F6CC  38 03 FA 10 */	addi r0, r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@l
/* 80132790 0012F6D0  38 A0 02 74 */	li r5, 0x274
/* 80132794 0012F6D4  90 1E 08 10 */	stw r0, 0x810(r30)
/* 80132798 0012F6D8  38 7E 08 28 */	addi r3, r30, 0x828
/* 8013279C 0012F6DC  38 84 1E 0C */	addi r4, r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@l
/* 801327A0 0012F6E0  38 C0 00 66 */	li r6, 0x66
/* 801327A4 0012F6E4  4B F8 F0 21 */	bl __destroy_arr
/* 801327A8 0012F6E8  38 7E 08 10 */	addi r3, r30, 0x810
/* 801327AC 0012F6EC  38 80 00 00 */	li r4, 0
/* 801327B0 0012F6F0  48 2D ED D9 */	bl __dt__5CNodeFv
.L_801327B4:
/* 801327B4 0012F6F4  34 1E 00 78 */	addic. r0, r30, 0x78
/* 801327B8 0012F6F8  41 82 00 34 */	beq .L_801327EC
/* 801327BC 0012F6FC  3C 60 80 4B */	lis r3, __vt__Q34Game15IllustratedBook17PositionParmsList@ha
/* 801327C0 0012F700  3C 80 80 13 */	lis r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@ha
/* 801327C4 0012F704  38 03 FA 44 */	addi r0, r3, __vt__Q34Game15IllustratedBook17PositionParmsList@l
/* 801327C8 0012F708  38 A0 00 C0 */	li r5, 0xc0
/* 801327CC 0012F70C  90 1E 00 78 */	stw r0, 0x78(r30)
/* 801327D0 0012F710  38 7E 00 90 */	addi r3, r30, 0x90
/* 801327D4 0012F714  38 84 18 6C */	addi r4, r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@l
/* 801327D8 0012F718  38 C0 00 0A */	li r6, 0xa
/* 801327DC 0012F71C  4B F8 EF E9 */	bl __destroy_arr
/* 801327E0 0012F720  38 7E 00 78 */	addi r3, r30, 0x78
/* 801327E4 0012F724  38 80 00 00 */	li r4, 0
/* 801327E8 0012F728  48 2D ED A1 */	bl __dt__5CNodeFv
.L_801327EC:
/* 801327EC 0012F72C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 801327F0 0012F730  41 82 00 1C */	beq .L_8013280C
/* 801327F4 0012F734  3C 80 80 4B */	lis r4, __vt__Q34Game15IllustratedBook12ColorSetting@ha
/* 801327F8 0012F738  38 7E 00 18 */	addi r3, r30, 0x18
/* 801327FC 0012F73C  38 04 FA 6C */	addi r0, r4, __vt__Q34Game15IllustratedBook12ColorSetting@l
/* 80132800 0012F740  38 80 00 00 */	li r4, 0
/* 80132804 0012F744  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80132808 0012F748  48 2D ED 81 */	bl __dt__5CNodeFv
.L_8013280C:
/* 8013280C 0012F74C  7F C3 F3 78 */	mr r3, r30
/* 80132810 0012F750  38 80 00 00 */	li r4, 0
/* 80132814 0012F754  48 2D ED 75 */	bl __dt__5CNodeFv
/* 80132818 0012F758  7F E0 07 35 */	extsh. r0, r31
/* 8013281C 0012F75C  40 81 00 0C */	ble .L_80132828
/* 80132820 0012F760  7F C3 F3 78 */	mr r3, r30
/* 80132824 0012F764  4B EF 18 91 */	bl __dl__FPv
.L_80132828:
/* 80132828 0012F768  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013282C 0012F76C  7F C3 F3 78 */	mr r3, r30
/* 80132830 0012F770  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80132834 0012F774  83 C1 00 08 */	lwz r30, 8(r1)
/* 80132838 0012F778  7C 08 03 A6 */	mtlr r0
/* 8013283C 0012F77C  38 21 00 10 */	addi r1, r1, 0x10
/* 80132840 0012F780  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15IllustratedBook5ParmsFv

.fn __sinit_singleGS_ZukanParms_cpp, local
/* 80132844 0012F784  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80132848 0012F788  38 00 FF FF */	li r0, -1
/* 8013284C 0012F78C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80132850 0012F790  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80132854 0012F794  90 0D 92 48 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80132858 0012F798  D4 03 F9 C8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8013285C 0012F79C  D0 0D 92 4C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80132860 0012F7A0  D0 03 00 04 */	stfs f0, 4(r3)
/* 80132864 0012F7A4  D0 03 00 08 */	stfs f0, 8(r3)
/* 80132868 0012F7A8  4E 80 00 20 */	blr 
.endfn __sinit_singleGS_ZukanParms_cpp
