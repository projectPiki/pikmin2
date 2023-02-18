.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_gameLightMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047B2C0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047B2C0
.balign 4
.obj lbl_8047B2CC, local
	.asciz "gameLightMgr"
.endobj lbl_8047B2CC
.balign 4
.obj lbl_8047B2DC, local
	.asciz "ColorParms"
.endobj lbl_8047B2DC
.balign 4
.obj lbl_8047B2E8, local # Shift-JIS
	.4byte 0x8341838B
	.4byte 0x83748340
	.byte 0
.endobj lbl_8047B2E8
.balign 4
.obj lbl_8047B2F4, local
	.asciz "GameFogParms"
.endobj lbl_8047B2F4
.balign 4
.obj lbl_8047B304, local
	.asciz "MoveParms"
.endobj lbl_8047B304
.balign 4
.obj lbl_8047B310, local # Shift-JIS
	.4byte 0x8CF58CB9
	.4byte 0x82DC82C5
	.4byte 0x82CC8B97
	.4byte 0x97A30000
.endobj lbl_8047B310
.balign 4
.obj lbl_8047B320, local # Shift-JIS
	.4byte 0x93FA82CC
	.4byte 0x8F6F8A70
	.4byte 0x93780000
.endobj lbl_8047B320
.balign 4
.obj lbl_8047B32C, local # Shift-JIS
	.4byte 0x93FA82CC
	.4byte 0x93FC8A70
	.4byte 0x93780000
.endobj lbl_8047B32C
.balign 4
.obj lbl_8047B338, local
	.asciz "SpotParms"
.endobj lbl_8047B338
.balign 4
.obj lbl_8047B344, local # Shift-JIS
	.4byte 0x834A8362
	.4byte 0x83678349
	.4byte 0x83740000
.endobj lbl_8047B344
.balign 4
.obj lbl_8047B350, local # Shift-JIS
	.4byte 0x91BE977A
	.4byte 0x835E8343
	.4byte 0x837690DD
	.4byte 0x92E80000
.endobj lbl_8047B350
.balign 4
.obj lbl_8047B360, local # Shift-JIS
	.4byte 0x89F99286
	.4byte 0x93649394
	.4byte 0x8341838A
	.byte 0
.endobj lbl_8047B360
.balign 4
.obj lbl_8047B370, local # Shift-JIS
	.4byte 0x89F99286
	.4byte 0x93649394
	.4byte 0x83698356
	.byte 0
.endobj lbl_8047B370
.balign 4
.obj lbl_8047B380, local
	.asciz "gameLightMgr.cpp"
.endobj lbl_8047B380
.balign 4
.obj lbl_8047B394, local
	.asciz "Unknown version [%08x]"
.endobj lbl_8047B394
.balign 4
.obj lbl_8047B3AC, local # Shift-JIS
	.4byte 0x83818343
	.4byte 0x83938389
	.4byte 0x83438367
	.byte 0
.endobj lbl_8047B3AC
.balign 4
.obj lbl_8047B3BC, local # Shift-JIS
	.4byte 0x83548375
	.4byte 0x83898343
	.4byte 0x83670000
.endobj lbl_8047B3BC
.balign 4
.obj lbl_8047B3C8, local # Shift-JIS
	.4byte 0x83588379
	.4byte 0x834C8385
	.4byte 0x83892D83
	.4byte 0x89834383
	.2byte 0x6700
.endobj lbl_8047B3C8
.balign 4
.obj lbl_8047B3DC, local
	.asciz "/user/Yamashita/testResource/light/light.ini"
.endobj lbl_8047B3DC
.balign 4
.obj lbl_8047B40C, local
	.asciz "illegal vp-id (%d)\n"
.endobj lbl_8047B40C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj "GameLightMgrSettinglabel__Q24Game26@unnamed@gameLightMgr_cpp@", local
	.4byte lbl_80517C00
	.4byte lbl_80517C04
	.4byte lbl_80517C08
	.4byte lbl_80517C0C
	.4byte lbl_80517C10
.endobj "GameLightMgrSettinglabel__Q24Game26@unnamed@gameLightMgr_cpp@"
.obj __vt__Q24Game12GameLightMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game12GameLightMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q24Game12GameLightMgrFv
	.4byte set__Q24Game12GameLightMgrFR8Graphics
	.4byte set__8LightMgrFR7Matrixf
	.4byte drawDebugInfo__8LightMgrFR8Graphics
.endobj __vt__Q24Game12GameLightMgr
.obj __vt__15AmbientLightObj, weak
	.4byte 0
	.4byte 0
	.4byte __dt__15AmbientLightObjFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__15AmbientLightObj
.obj __vt__Q24Game18GameLightEventNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game18GameLightEventNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game18GameLightEventNode
.obj __vt__Q24Game19GameLightMgrSetting, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game19GameLightMgrSettingFv
	.4byte getChildCount__5CNodeFv
	.4byte read__Q24Game19GameLightMgrSettingFR6Stream
.endobj __vt__Q24Game19GameLightMgrSetting
.obj __vt__Q24Game20GameSpotLightSetting, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game20GameSpotLightSettingFR6Stream
.endobj __vt__Q24Game20GameSpotLightSetting
.obj __vt__Q24Game20GameLightSpotSetting, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game20GameLightSpotSettingFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game20GameLightSpotSetting
.obj __vt__Q24Game19GameLightSunSetting, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game19GameLightSunSettingFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game19GameLightSunSetting
.obj __vt__Q24Game14GameFogSetting, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game14GameFogSettingFR6Stream
.endobj __vt__Q24Game14GameFogSetting
.obj __vt__Q24Game17GameShadowSetting, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game17GameShadowSettingFR6Stream
.endobj __vt__Q24Game17GameShadowSetting
.obj __vt__Q24Game23GameLightAmbientSetting, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game20GameLightSettingBaseFR6Stream
.endobj __vt__Q24Game23GameLightAmbientSetting
.obj __vt__Q24Game20GameSpecLightSetting, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game20GameLightSettingBaseFR6Stream
.endobj __vt__Q24Game20GameSpecLightSetting
.obj __vt__Q24Game23GameDiffuseLightSetting, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game20GameLightSettingBaseFR6Stream
.endobj __vt__Q24Game23GameDiffuseLightSetting
.obj __vt__Q24Game20GameLightSettingBase, weak
	.4byte 0
	.4byte 0
	.4byte read__Q24Game20GameLightSettingBaseFR6Stream
.endobj __vt__Q24Game20GameLightSettingBase
.obj __vt__Q24Game20GameLightTimeSetting, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game20GameLightTimeSettingFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game20GameLightTimeSetting

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80517BF0, local
	.float 0.5
.endobj lbl_80517BF0
.obj lbl_80517BF4, local
	.float 0.0
.endobj lbl_80517BF4
.balign 8
.obj lbl_80517BF8, local
	.8byte 0x4330000000000000
.endobj lbl_80517BF8
.balign 4
.obj lbl_80517C00, local # Shift-JIS
	.4byte 0x96E90000
.endobj lbl_80517C00
.balign 4
.obj lbl_80517C04, local # Shift-JIS
	.4byte 0x92A90000
.endobj lbl_80517C04
.balign 4
.obj lbl_80517C08, local # Shift-JIS
	.4byte 0x928B0000
.endobj lbl_80517C08
.balign 4
.obj lbl_80517C0C, local # Shift-JIS
	.4byte 0x975B0000
.endobj lbl_80517C0C
.balign 4
.obj lbl_80517C10, local # Shift-JIS
	.4byte 0x83668382
	.4byte 0x92860000
.endobj lbl_80517C10
.balign 4
.obj lbl_80517C18, local
	.asciz ""
.endobj lbl_80517C18
.balign 4
.obj lbl_80517C1C, local # Shift-JIS
	.4byte 0x90D40000
.endobj lbl_80517C1C
.balign 4
.obj lbl_80517C20, local # Shift-JIS
	.4byte 0x97CE0000
.endobj lbl_80517C20
.balign 4
.obj lbl_80517C24, local # Shift-JIS
	.4byte 0x90C20000
.endobj lbl_80517C24
.balign 4
.obj lbl_80517C28, local # Shift-JIS
	.4byte 0x8A4A8E6E
	.4byte 0x7A926C00
.endobj lbl_80517C28
.balign 4
.obj lbl_80517C30, local
	.float 1000.0
.endobj lbl_80517C30
.balign 4
.obj lbl_80517C34, local
	.float 15000.0
.endobj lbl_80517C34
.balign 4
.obj lbl_80517C38, local # Shift-JIS
	.4byte 0x8F4997B9
	.4byte 0x7A926C00
.endobj lbl_80517C38
.balign 4
.obj lbl_80517C40, local
	.float 20000.0
.endobj lbl_80517C40
.obj lbl_80517C44, local
	.float 30000.0
.endobj lbl_80517C44
.obj lbl_80517C48, local
	.float 20.0
.endobj lbl_80517C48
.obj lbl_80517C4C, local
	.float 360.0
.endobj lbl_80517C4C
.obj lbl_80517C50, local
	.float 160.0
.endobj lbl_80517C50
.obj lbl_80517C54, local
	.float 60.0
.endobj lbl_80517C54
.obj lbl_80517C58, local
	.float 90.0
.endobj lbl_80517C58
.balign 4
.obj lbl_80517C5C, local # Shift-JIS
	.4byte 0x90DD92E8
	.byte 0
.endobj lbl_80517C5C
.balign 4
.obj lbl_80517C64, local
	.float 1.0
.endobj lbl_80517C64
.obj lbl_80517C68, local
	.float 4.0
.endobj lbl_80517C68
.obj lbl_80517C6C, local
	.float 0.9
.endobj lbl_80517C6C
.obj lbl_80517C70, local
	.float 0.1
.endobj lbl_80517C70
.obj lbl_80517C74, local # tau
	.float 6.2831855
.endobj lbl_80517C74
.obj lbl_80517C78, local
	.float 0.25
.endobj lbl_80517C78
.obj lbl_80517C7C, local
	.float -1.0
.endobj lbl_80517C7C
.obj lbl_80517C80, local # pi
	.float 3.1415927
.endobj lbl_80517C80
.obj lbl_80517C84, local
	.float 255.0
.endobj lbl_80517C84
.obj lbl_80517C88, local
	.float 40.0
.endobj lbl_80517C88
.balign 4
.obj lbl_80517C8C, local
	.asciz "no_name"
.endobj lbl_80517C8C
.balign 4
.obj lbl_80517C94, local
	.float 1.5
.endobj lbl_80517C94
.obj lbl_80517C98, local
	.float 2.0
.endobj lbl_80517C98
.obj lbl_80517C9C, local
	.float 1024.0
.endobj lbl_80517C9C
.obj lbl_80517CA0, local
	.float 500.0
.endobj lbl_80517CA0
.obj lbl_80517CA4, local
	.float 13.0
.endobj lbl_80517CA4
.obj lbl_80517CA8, local
	.float 3.0
.endobj lbl_80517CA8
.obj lbl_80517CAC, local
	.float 1.25
.endobj lbl_80517CAC
.obj lbl_80517CB0, local
	.float 0.01
.endobj lbl_80517CB0
.obj lbl_80517CB4, local
	.float 180.0
.endobj lbl_80517CB4
.obj lbl_80517CB8, local
	.float 0.0055555557
.endobj lbl_80517CB8
.obj lbl_80517CBC, local
	.float 0.87266463
.endobj lbl_80517CBC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q24Game20GameLightTimeSettingFv, global
/* 8011CCE0 00119C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011CCE4 00119C24  7C 08 02 A6 */	mflr r0
/* 8011CCE8 00119C28  3C E0 80 4B */	lis r7, __vt__Q24Game20GameLightTimeSetting@ha
/* 8011CCEC 00119C2C  3C C0 80 4B */	lis r6, __vt__Q24Game20GameLightSettingBase@ha
/* 8011CCF0 00119C30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011CCF4 00119C34  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 8011CCF8 00119C38  39 06 C4 FC */	addi r8, r6, __vt__Q24Game20GameLightSettingBase@l
/* 8011CCFC 00119C3C  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011CD00 00119C40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011CD04 00119C44  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 8011CD08 00119C48  7C 7F 1B 78 */	mr r31, r3
/* 8011CD0C 00119C4C  39 27 C5 08 */	addi r9, r7, __vt__Q24Game20GameLightTimeSetting@l
/* 8011CD10 00119C50  90 03 00 00 */	stw r0, 0(r3)
/* 8011CD14 00119C54  39 60 00 00 */	li r11, 0
/* 8011CD18 00119C58  39 42 98 B8 */	addi r10, r2, lbl_80517C18@sda21
/* 8011CD1C 00119C5C  38 FF 00 C4 */	addi r7, r31, 0xc4
/* 8011CD20 00119C60  91 63 00 10 */	stw r11, 0x10(r3)
/* 8011CD24 00119C64  3C 60 80 48 */	lis r3, lbl_8047B2DC@ha
/* 8011CD28 00119C68  38 03 B2 DC */	addi r0, r3, lbl_8047B2DC@l
/* 8011CD2C 00119C6C  38 9F 00 18 */	addi r4, r31, 0x18
/* 8011CD30 00119C70  91 7F 00 0C */	stw r11, 0xc(r31)
/* 8011CD34 00119C74  38 64 00 0C */	addi r3, r4, 0xc
/* 8011CD38 00119C78  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011CD3C 00119C7C  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011CD40 00119C80  91 7F 00 08 */	stw r11, 8(r31)
/* 8011CD44 00119C84  91 7F 00 04 */	stw r11, 4(r31)
/* 8011CD48 00119C88  91 5F 00 14 */	stw r10, 0x14(r31)
/* 8011CD4C 00119C8C  91 3F 00 00 */	stw r9, 0(r31)
/* 8011CD50 00119C90  91 1F 00 C8 */	stw r8, 0xc8(r31)
/* 8011CD54 00119C94  90 FF 00 18 */	stw r7, 0x18(r31)
/* 8011CD58 00119C98  91 7F 00 1C */	stw r11, 0x1c(r31)
/* 8011CD5C 00119C9C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8011CD60 00119CA0  48 2F 68 F9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CD64 00119CA4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CD68 00119CA8  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011CD6C 00119CAC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CD70 00119CB0  38 C0 00 00 */	li r6, 0
/* 8011CD74 00119CB4  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8011CD78 00119CB8  38 60 00 7F */	li r3, 0x7f
/* 8011CD7C 00119CBC  38 00 00 FF */	li r0, 0xff
/* 8011CD80 00119CC0  38 9F 00 18 */	addi r4, r31, 0x18
/* 8011CD84 00119CC4  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 8011CD88 00119CC8  38 64 00 34 */	addi r3, r4, 0x34
/* 8011CD8C 00119CCC  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011CD90 00119CD0  90 DF 00 44 */	stw r6, 0x44(r31)
/* 8011CD94 00119CD4  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011CD98 00119CD8  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8011CD9C 00119CDC  48 2F 68 BD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CDA0 00119CE0  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CDA4 00119CE4  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011CDA8 00119CE8  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CDAC 00119CEC  38 C0 00 00 */	li r6, 0
/* 8011CDB0 00119CF0  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8011CDB4 00119CF4  38 60 00 7F */	li r3, 0x7f
/* 8011CDB8 00119CF8  38 00 00 FF */	li r0, 0xff
/* 8011CDBC 00119CFC  38 9F 00 18 */	addi r4, r31, 0x18
/* 8011CDC0 00119D00  90 7F 00 64 */	stw r3, 0x64(r31)
/* 8011CDC4 00119D04  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011CDC8 00119D08  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011CDCC 00119D0C  90 DF 00 6C */	stw r6, 0x6c(r31)
/* 8011CDD0 00119D10  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011CDD4 00119D14  90 1F 00 70 */	stw r0, 0x70(r31)
/* 8011CDD8 00119D18  48 2F 68 81 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CDDC 00119D1C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CDE0 00119D20  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011CDE4 00119D24  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CDE8 00119D28  38 9F 00 18 */	addi r4, r31, 0x18
/* 8011CDEC 00119D2C  90 1F 00 74 */	stw r0, 0x74(r31)
/* 8011CDF0 00119D30  38 00 00 7F */	li r0, 0x7f
/* 8011CDF4 00119D34  3C 60 80 48 */	lis r3, lbl_8047B2E8@ha
/* 8011CDF8 00119D38  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011CDFC 00119D3C  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8011CE00 00119D40  38 C3 B2 E8 */	addi r6, r3, lbl_8047B2E8@l
/* 8011CE04 00119D44  38 60 00 00 */	li r3, 0
/* 8011CE08 00119D48  38 00 00 FF */	li r0, 0xff
/* 8011CE0C 00119D4C  90 7F 00 94 */	stw r3, 0x94(r31)
/* 8011CE10 00119D50  38 64 00 84 */	addi r3, r4, 0x84
/* 8011CE14 00119D54  90 1F 00 98 */	stw r0, 0x98(r31)
/* 8011CE18 00119D58  48 2F 68 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CE1C 00119D5C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CE20 00119D60  3C E0 80 4B */	lis r7, __vt__Q24Game23GameDiffuseLightSetting@ha
/* 8011CE24 00119D64  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CE28 00119D68  3C C0 80 4B */	lis r6, __vt__Q24Game20GameLightSettingBase@ha
/* 8011CE2C 00119D6C  90 1F 00 9C */	stw r0, 0x9c(r31)
/* 8011CE30 00119D70  38 00 00 FF */	li r0, 0xff
/* 8011CE34 00119D74  39 47 C4 F0 */	addi r10, r7, __vt__Q24Game23GameDiffuseLightSetting@l
/* 8011CE38 00119D78  39 06 C4 FC */	addi r8, r6, __vt__Q24Game20GameLightSettingBase@l
/* 8011CE3C 00119D7C  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 8011CE40 00119D80  39 60 00 00 */	li r11, 0
/* 8011CE44 00119D84  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011CE48 00119D88  39 20 00 C8 */	li r9, 0xc8
/* 8011CE4C 00119D8C  91 7F 00 BC */	stw r11, 0xbc(r31)
/* 8011CE50 00119D90  38 FF 01 78 */	addi r7, r31, 0x178
/* 8011CE54 00119D94  3C 60 80 48 */	lis r3, lbl_8047B2DC@ha
/* 8011CE58 00119D98  38 9F 00 CC */	addi r4, r31, 0xcc
/* 8011CE5C 00119D9C  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8011CE60 00119DA0  38 03 B2 DC */	addi r0, r3, lbl_8047B2DC@l
/* 8011CE64 00119DA4  38 64 00 0C */	addi r3, r4, 0xc
/* 8011CE68 00119DA8  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011CE6C 00119DAC  91 5F 00 C8 */	stw r10, 0xc8(r31)
/* 8011CE70 00119DB0  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011CE74 00119DB4  91 3F 00 3C */	stw r9, 0x3c(r31)
/* 8011CE78 00119DB8  91 3F 00 64 */	stw r9, 0x64(r31)
/* 8011CE7C 00119DBC  91 3F 00 8C */	stw r9, 0x8c(r31)
/* 8011CE80 00119DC0  91 1F 01 7C */	stw r8, 0x17c(r31)
/* 8011CE84 00119DC4  90 FF 00 CC */	stw r7, 0xcc(r31)
/* 8011CE88 00119DC8  91 7F 00 D0 */	stw r11, 0xd0(r31)
/* 8011CE8C 00119DCC  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 8011CE90 00119DD0  48 2F 67 C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CE94 00119DD4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CE98 00119DD8  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011CE9C 00119DDC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CEA0 00119DE0  38 C0 00 00 */	li r6, 0
/* 8011CEA4 00119DE4  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 8011CEA8 00119DE8  38 60 00 7F */	li r3, 0x7f
/* 8011CEAC 00119DEC  38 00 00 FF */	li r0, 0xff
/* 8011CEB0 00119DF0  38 9F 00 CC */	addi r4, r31, 0xcc
/* 8011CEB4 00119DF4  90 7F 00 F0 */	stw r3, 0xf0(r31)
/* 8011CEB8 00119DF8  38 64 00 34 */	addi r3, r4, 0x34
/* 8011CEBC 00119DFC  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011CEC0 00119E00  90 DF 00 F8 */	stw r6, 0xf8(r31)
/* 8011CEC4 00119E04  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011CEC8 00119E08  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 8011CECC 00119E0C  48 2F 67 8D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CED0 00119E10  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CED4 00119E14  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011CED8 00119E18  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CEDC 00119E1C  38 C0 00 00 */	li r6, 0
/* 8011CEE0 00119E20  90 1F 01 00 */	stw r0, 0x100(r31)
/* 8011CEE4 00119E24  38 60 00 7F */	li r3, 0x7f
/* 8011CEE8 00119E28  38 00 00 FF */	li r0, 0xff
/* 8011CEEC 00119E2C  38 9F 00 CC */	addi r4, r31, 0xcc
/* 8011CEF0 00119E30  90 7F 01 18 */	stw r3, 0x118(r31)
/* 8011CEF4 00119E34  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011CEF8 00119E38  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011CEFC 00119E3C  90 DF 01 20 */	stw r6, 0x120(r31)
/* 8011CF00 00119E40  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011CF04 00119E44  90 1F 01 24 */	stw r0, 0x124(r31)
/* 8011CF08 00119E48  48 2F 67 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CF0C 00119E4C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CF10 00119E50  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011CF14 00119E54  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CF18 00119E58  38 9F 00 CC */	addi r4, r31, 0xcc
/* 8011CF1C 00119E5C  90 1F 01 28 */	stw r0, 0x128(r31)
/* 8011CF20 00119E60  38 00 00 7F */	li r0, 0x7f
/* 8011CF24 00119E64  3C 60 80 48 */	lis r3, lbl_8047B2E8@ha
/* 8011CF28 00119E68  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011CF2C 00119E6C  90 1F 01 40 */	stw r0, 0x140(r31)
/* 8011CF30 00119E70  38 C3 B2 E8 */	addi r6, r3, lbl_8047B2E8@l
/* 8011CF34 00119E74  38 60 00 00 */	li r3, 0
/* 8011CF38 00119E78  38 00 00 FF */	li r0, 0xff
/* 8011CF3C 00119E7C  90 7F 01 48 */	stw r3, 0x148(r31)
/* 8011CF40 00119E80  38 64 00 84 */	addi r3, r4, 0x84
/* 8011CF44 00119E84  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 8011CF48 00119E88  48 2F 67 11 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CF4C 00119E8C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CF50 00119E90  3C E0 80 4B */	lis r7, __vt__Q24Game23GameDiffuseLightSetting@ha
/* 8011CF54 00119E94  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CF58 00119E98  3C C0 80 4B */	lis r6, __vt__Q24Game20GameLightSettingBase@ha
/* 8011CF5C 00119E9C  90 1F 01 50 */	stw r0, 0x150(r31)
/* 8011CF60 00119EA0  38 00 00 FF */	li r0, 0xff
/* 8011CF64 00119EA4  39 47 C4 F0 */	addi r10, r7, __vt__Q24Game23GameDiffuseLightSetting@l
/* 8011CF68 00119EA8  39 06 C4 FC */	addi r8, r6, __vt__Q24Game20GameLightSettingBase@l
/* 8011CF6C 00119EAC  90 1F 01 68 */	stw r0, 0x168(r31)
/* 8011CF70 00119EB0  39 60 00 00 */	li r11, 0
/* 8011CF74 00119EB4  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011CF78 00119EB8  39 20 00 C8 */	li r9, 0xc8
/* 8011CF7C 00119EBC  91 7F 01 70 */	stw r11, 0x170(r31)
/* 8011CF80 00119EC0  38 FF 02 2C */	addi r7, r31, 0x22c
/* 8011CF84 00119EC4  3C 60 80 48 */	lis r3, lbl_8047B2DC@ha
/* 8011CF88 00119EC8  38 9F 01 80 */	addi r4, r31, 0x180
/* 8011CF8C 00119ECC  90 1F 01 74 */	stw r0, 0x174(r31)
/* 8011CF90 00119ED0  38 03 B2 DC */	addi r0, r3, lbl_8047B2DC@l
/* 8011CF94 00119ED4  38 64 00 0C */	addi r3, r4, 0xc
/* 8011CF98 00119ED8  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011CF9C 00119EDC  91 5F 01 7C */	stw r10, 0x17c(r31)
/* 8011CFA0 00119EE0  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011CFA4 00119EE4  91 3F 00 F0 */	stw r9, 0xf0(r31)
/* 8011CFA8 00119EE8  91 3F 01 18 */	stw r9, 0x118(r31)
/* 8011CFAC 00119EEC  91 3F 01 40 */	stw r9, 0x140(r31)
/* 8011CFB0 00119EF0  91 1F 02 30 */	stw r8, 0x230(r31)
/* 8011CFB4 00119EF4  90 FF 01 80 */	stw r7, 0x180(r31)
/* 8011CFB8 00119EF8  91 7F 01 84 */	stw r11, 0x184(r31)
/* 8011CFBC 00119EFC  90 1F 01 88 */	stw r0, 0x188(r31)
/* 8011CFC0 00119F00  48 2F 66 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011CFC4 00119F04  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011CFC8 00119F08  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011CFCC 00119F0C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011CFD0 00119F10  38 C0 00 00 */	li r6, 0
/* 8011CFD4 00119F14  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 8011CFD8 00119F18  38 60 00 7F */	li r3, 0x7f
/* 8011CFDC 00119F1C  38 00 00 FF */	li r0, 0xff
/* 8011CFE0 00119F20  38 9F 01 80 */	addi r4, r31, 0x180
/* 8011CFE4 00119F24  90 7F 01 A4 */	stw r3, 0x1a4(r31)
/* 8011CFE8 00119F28  38 64 00 34 */	addi r3, r4, 0x34
/* 8011CFEC 00119F2C  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011CFF0 00119F30  90 DF 01 AC */	stw r6, 0x1ac(r31)
/* 8011CFF4 00119F34  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011CFF8 00119F38  90 1F 01 B0 */	stw r0, 0x1b0(r31)
/* 8011CFFC 00119F3C  48 2F 66 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D000 00119F40  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D004 00119F44  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011D008 00119F48  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D00C 00119F4C  38 C0 00 00 */	li r6, 0
/* 8011D010 00119F50  90 1F 01 B4 */	stw r0, 0x1b4(r31)
/* 8011D014 00119F54  38 60 00 7F */	li r3, 0x7f
/* 8011D018 00119F58  38 00 00 FF */	li r0, 0xff
/* 8011D01C 00119F5C  38 9F 01 80 */	addi r4, r31, 0x180
/* 8011D020 00119F60  90 7F 01 CC */	stw r3, 0x1cc(r31)
/* 8011D024 00119F64  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011D028 00119F68  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011D02C 00119F6C  90 DF 01 D4 */	stw r6, 0x1d4(r31)
/* 8011D030 00119F70  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011D034 00119F74  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 8011D038 00119F78  48 2F 66 21 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D03C 00119F7C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D040 00119F80  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011D044 00119F84  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D048 00119F88  38 9F 01 80 */	addi r4, r31, 0x180
/* 8011D04C 00119F8C  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 8011D050 00119F90  38 00 00 7F */	li r0, 0x7f
/* 8011D054 00119F94  3C 60 80 48 */	lis r3, lbl_8047B2E8@ha
/* 8011D058 00119F98  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011D05C 00119F9C  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 8011D060 00119FA0  38 C3 B2 E8 */	addi r6, r3, lbl_8047B2E8@l
/* 8011D064 00119FA4  38 60 00 00 */	li r3, 0
/* 8011D068 00119FA8  38 00 00 FF */	li r0, 0xff
/* 8011D06C 00119FAC  90 7F 01 FC */	stw r3, 0x1fc(r31)
/* 8011D070 00119FB0  38 64 00 84 */	addi r3, r4, 0x84
/* 8011D074 00119FB4  90 1F 02 00 */	stw r0, 0x200(r31)
/* 8011D078 00119FB8  48 2F 65 E1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D07C 00119FBC  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D080 00119FC0  3C E0 80 4B */	lis r7, __vt__Q24Game20GameSpecLightSetting@ha
/* 8011D084 00119FC4  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D088 00119FC8  3C C0 80 4B */	lis r6, __vt__Q24Game20GameLightSettingBase@ha
/* 8011D08C 00119FCC  90 1F 02 04 */	stw r0, 0x204(r31)
/* 8011D090 00119FD0  39 60 00 FF */	li r11, 0xff
/* 8011D094 00119FD4  39 27 C4 E4 */	addi r9, r7, __vt__Q24Game20GameSpecLightSetting@l
/* 8011D098 00119FD8  39 06 C4 FC */	addi r8, r6, __vt__Q24Game20GameLightSettingBase@l
/* 8011D09C 00119FDC  91 7F 02 1C */	stw r11, 0x21c(r31)
/* 8011D0A0 00119FE0  39 40 00 00 */	li r10, 0
/* 8011D0A4 00119FE4  3C 60 80 48 */	lis r3, lbl_8047B2DC@ha
/* 8011D0A8 00119FE8  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011D0AC 00119FEC  91 5F 02 24 */	stw r10, 0x224(r31)
/* 8011D0B0 00119FF0  38 FF 02 E0 */	addi r7, r31, 0x2e0
/* 8011D0B4 00119FF4  38 03 B2 DC */	addi r0, r3, lbl_8047B2DC@l
/* 8011D0B8 00119FF8  38 9F 02 34 */	addi r4, r31, 0x234
/* 8011D0BC 00119FFC  91 7F 02 28 */	stw r11, 0x228(r31)
/* 8011D0C0 0011A000  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D0C4 0011A004  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011D0C8 0011A008  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011D0CC 0011A00C  91 3F 02 30 */	stw r9, 0x230(r31)
/* 8011D0D0 0011A010  91 7F 01 A4 */	stw r11, 0x1a4(r31)
/* 8011D0D4 0011A014  91 7F 01 CC */	stw r11, 0x1cc(r31)
/* 8011D0D8 0011A018  91 7F 01 F4 */	stw r11, 0x1f4(r31)
/* 8011D0DC 0011A01C  91 1F 02 E4 */	stw r8, 0x2e4(r31)
/* 8011D0E0 0011A020  90 FF 02 34 */	stw r7, 0x234(r31)
/* 8011D0E4 0011A024  91 5F 02 38 */	stw r10, 0x238(r31)
/* 8011D0E8 0011A028  90 1F 02 3C */	stw r0, 0x23c(r31)
/* 8011D0EC 0011A02C  48 2F 65 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D0F0 0011A030  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D0F4 0011A034  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011D0F8 0011A038  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D0FC 0011A03C  38 C0 00 00 */	li r6, 0
/* 8011D100 0011A040  90 1F 02 40 */	stw r0, 0x240(r31)
/* 8011D104 0011A044  38 60 00 7F */	li r3, 0x7f
/* 8011D108 0011A048  38 00 00 FF */	li r0, 0xff
/* 8011D10C 0011A04C  38 9F 02 34 */	addi r4, r31, 0x234
/* 8011D110 0011A050  90 7F 02 58 */	stw r3, 0x258(r31)
/* 8011D114 0011A054  38 64 00 34 */	addi r3, r4, 0x34
/* 8011D118 0011A058  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011D11C 0011A05C  90 DF 02 60 */	stw r6, 0x260(r31)
/* 8011D120 0011A060  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011D124 0011A064  90 1F 02 64 */	stw r0, 0x264(r31)
/* 8011D128 0011A068  48 2F 65 31 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D12C 0011A06C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D130 0011A070  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011D134 0011A074  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D138 0011A078  38 C0 00 00 */	li r6, 0
/* 8011D13C 0011A07C  90 1F 02 68 */	stw r0, 0x268(r31)
/* 8011D140 0011A080  38 60 00 7F */	li r3, 0x7f
/* 8011D144 0011A084  38 00 00 FF */	li r0, 0xff
/* 8011D148 0011A088  38 9F 02 34 */	addi r4, r31, 0x234
/* 8011D14C 0011A08C  90 7F 02 80 */	stw r3, 0x280(r31)
/* 8011D150 0011A090  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011D154 0011A094  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011D158 0011A098  90 DF 02 88 */	stw r6, 0x288(r31)
/* 8011D15C 0011A09C  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011D160 0011A0A0  90 1F 02 8C */	stw r0, 0x28c(r31)
/* 8011D164 0011A0A4  48 2F 64 F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D168 0011A0A8  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D16C 0011A0AC  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011D170 0011A0B0  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D174 0011A0B4  38 9F 02 34 */	addi r4, r31, 0x234
/* 8011D178 0011A0B8  90 1F 02 90 */	stw r0, 0x290(r31)
/* 8011D17C 0011A0BC  38 00 00 7F */	li r0, 0x7f
/* 8011D180 0011A0C0  3C 60 80 48 */	lis r3, lbl_8047B2E8@ha
/* 8011D184 0011A0C4  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011D188 0011A0C8  90 1F 02 A8 */	stw r0, 0x2a8(r31)
/* 8011D18C 0011A0CC  38 C3 B2 E8 */	addi r6, r3, lbl_8047B2E8@l
/* 8011D190 0011A0D0  38 60 00 00 */	li r3, 0
/* 8011D194 0011A0D4  38 00 00 FF */	li r0, 0xff
/* 8011D198 0011A0D8  90 7F 02 B0 */	stw r3, 0x2b0(r31)
/* 8011D19C 0011A0DC  38 64 00 84 */	addi r3, r4, 0x84
/* 8011D1A0 0011A0E0  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8011D1A4 0011A0E4  48 2F 64 B5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D1A8 0011A0E8  3C 80 80 4B */	lis r4, "__vt__7Parm<i>"@ha
/* 8011D1AC 0011A0EC  3C 60 80 4B */	lis r3, __vt__Q24Game23GameLightAmbientSetting@ha
/* 8011D1B0 0011A0F0  38 04 AC 90 */	addi r0, r4, "__vt__7Parm<i>"@l
/* 8011D1B4 0011A0F4  38 C0 00 FF */	li r6, 0xff
/* 8011D1B8 0011A0F8  90 1F 02 B8 */	stw r0, 0x2b8(r31)
/* 8011D1BC 0011A0FC  38 A0 00 00 */	li r5, 0
/* 8011D1C0 0011A100  38 83 C4 D8 */	addi r4, r3, __vt__Q24Game23GameLightAmbientSetting@l
/* 8011D1C4 0011A104  38 00 00 20 */	li r0, 0x20
/* 8011D1C8 0011A108  90 DF 02 D0 */	stw r6, 0x2d0(r31)
/* 8011D1CC 0011A10C  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8011D1D0 0011A110  90 BF 02 D8 */	stw r5, 0x2d8(r31)
/* 8011D1D4 0011A114  90 DF 02 DC */	stw r6, 0x2dc(r31)
/* 8011D1D8 0011A118  90 9F 02 E4 */	stw r4, 0x2e4(r31)
/* 8011D1DC 0011A11C  90 1F 02 58 */	stw r0, 0x258(r31)
/* 8011D1E0 0011A120  90 1F 02 80 */	stw r0, 0x280(r31)
/* 8011D1E4 0011A124  90 1F 02 A8 */	stw r0, 0x2a8(r31)
/* 8011D1E8 0011A128  48 00 01 4D */	bl __ct__Q24Game14GameFogSettingFv
/* 8011D1EC 0011A12C  3C 60 80 4B */	lis r3, __vt__Q24Game17GameShadowSetting@ha
/* 8011D1F0 0011A130  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011D1F4 0011A134  38 03 C4 CC */	addi r0, r3, __vt__Q24Game17GameShadowSetting@l
/* 8011D1F8 0011A138  38 C0 00 00 */	li r6, 0
/* 8011D1FC 0011A13C  90 1F 04 AC */	stw r0, 0x4ac(r31)
/* 8011D200 0011A140  38 1F 04 A8 */	addi r0, r31, 0x4a8
/* 8011D204 0011A144  3C 60 80 48 */	lis r3, lbl_8047B2DC@ha
/* 8011D208 0011A148  38 9F 03 FC */	addi r4, r31, 0x3fc
/* 8011D20C 0011A14C  90 1F 03 FC */	stw r0, 0x3fc(r31)
/* 8011D210 0011A150  38 03 B2 DC */	addi r0, r3, lbl_8047B2DC@l
/* 8011D214 0011A154  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D218 0011A158  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011D21C 0011A15C  90 DF 04 00 */	stw r6, 0x400(r31)
/* 8011D220 0011A160  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011D224 0011A164  90 1F 04 04 */	stw r0, 0x404(r31)
/* 8011D228 0011A168  48 2F 64 31 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D22C 0011A16C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D230 0011A170  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011D234 0011A174  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D238 0011A178  38 C0 00 00 */	li r6, 0
/* 8011D23C 0011A17C  90 1F 04 08 */	stw r0, 0x408(r31)
/* 8011D240 0011A180  38 60 00 7F */	li r3, 0x7f
/* 8011D244 0011A184  38 00 00 FF */	li r0, 0xff
/* 8011D248 0011A188  38 9F 03 FC */	addi r4, r31, 0x3fc
/* 8011D24C 0011A18C  90 7F 04 20 */	stw r3, 0x420(r31)
/* 8011D250 0011A190  38 64 00 34 */	addi r3, r4, 0x34
/* 8011D254 0011A194  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011D258 0011A198  90 DF 04 28 */	stw r6, 0x428(r31)
/* 8011D25C 0011A19C  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011D260 0011A1A0  90 1F 04 2C */	stw r0, 0x42c(r31)
/* 8011D264 0011A1A4  48 2F 63 F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D268 0011A1A8  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D26C 0011A1AC  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011D270 0011A1B0  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D274 0011A1B4  38 C0 00 00 */	li r6, 0
/* 8011D278 0011A1B8  90 1F 04 30 */	stw r0, 0x430(r31)
/* 8011D27C 0011A1BC  38 60 00 7F */	li r3, 0x7f
/* 8011D280 0011A1C0  38 00 00 FF */	li r0, 0xff
/* 8011D284 0011A1C4  38 9F 03 FC */	addi r4, r31, 0x3fc
/* 8011D288 0011A1C8  90 7F 04 48 */	stw r3, 0x448(r31)
/* 8011D28C 0011A1CC  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011D290 0011A1D0  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011D294 0011A1D4  90 DF 04 50 */	stw r6, 0x450(r31)
/* 8011D298 0011A1D8  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011D29C 0011A1DC  90 1F 04 54 */	stw r0, 0x454(r31)
/* 8011D2A0 0011A1E0  48 2F 63 B9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D2A4 0011A1E4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D2A8 0011A1E8  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011D2AC 0011A1EC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D2B0 0011A1F0  38 9F 03 FC */	addi r4, r31, 0x3fc
/* 8011D2B4 0011A1F4  90 1F 04 58 */	stw r0, 0x458(r31)
/* 8011D2B8 0011A1F8  38 00 00 7F */	li r0, 0x7f
/* 8011D2BC 0011A1FC  3C 60 80 48 */	lis r3, lbl_8047B2E8@ha
/* 8011D2C0 0011A200  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011D2C4 0011A204  90 1F 04 70 */	stw r0, 0x470(r31)
/* 8011D2C8 0011A208  38 C3 B2 E8 */	addi r6, r3, lbl_8047B2E8@l
/* 8011D2CC 0011A20C  38 60 00 00 */	li r3, 0
/* 8011D2D0 0011A210  38 00 00 FF */	li r0, 0xff
/* 8011D2D4 0011A214  90 7F 04 78 */	stw r3, 0x478(r31)
/* 8011D2D8 0011A218  38 64 00 84 */	addi r3, r4, 0x84
/* 8011D2DC 0011A21C  90 1F 04 7C */	stw r0, 0x47c(r31)
/* 8011D2E0 0011A220  48 2F 63 79 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D2E4 0011A224  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D2E8 0011A228  38 C0 00 FF */	li r6, 0xff
/* 8011D2EC 0011A22C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D2F0 0011A230  38 A0 00 00 */	li r5, 0
/* 8011D2F4 0011A234  90 1F 04 80 */	stw r0, 0x480(r31)
/* 8011D2F8 0011A238  38 80 00 20 */	li r4, 0x20
/* 8011D2FC 0011A23C  38 00 00 80 */	li r0, 0x80
/* 8011D300 0011A240  7F E3 FB 78 */	mr r3, r31
/* 8011D304 0011A244  90 DF 04 98 */	stw r6, 0x498(r31)
/* 8011D308 0011A248  90 BF 04 A0 */	stw r5, 0x4a0(r31)
/* 8011D30C 0011A24C  90 DF 04 A4 */	stw r6, 0x4a4(r31)
/* 8011D310 0011A250  90 9F 04 20 */	stw r4, 0x420(r31)
/* 8011D314 0011A254  90 9F 04 48 */	stw r4, 0x448(r31)
/* 8011D318 0011A258  90 9F 04 70 */	stw r4, 0x470(r31)
/* 8011D31C 0011A25C  90 1F 04 98 */	stw r0, 0x498(r31)
/* 8011D320 0011A260  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011D324 0011A264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D328 0011A268  7C 08 03 A6 */	mtlr r0
/* 8011D32C 0011A26C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D330 0011A270  4E 80 00 20 */	blr 
.endfn __ct__Q24Game20GameLightTimeSettingFv

.fn __ct__Q24Game14GameFogSettingFv, weak
/* 8011D334 0011A274  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D338 0011A278  7C 08 02 A6 */	mflr r0
/* 8011D33C 0011A27C  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011D340 0011A280  3C 80 80 4B */	lis r4, __vt__Q24Game14GameFogSetting@ha
/* 8011D344 0011A284  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D348 0011A288  38 04 C4 C0 */	addi r0, r4, __vt__Q24Game14GameFogSetting@l
/* 8011D34C 0011A28C  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011D350 0011A290  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011D354 0011A294  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011D358 0011A298  93 C1 00 08 */	stw r30, 8(r1)
/* 8011D35C 0011A29C  7C 7E 1B 78 */	mr r30, r3
/* 8011D360 0011A2A0  3C 60 80 48 */	lis r3, lbl_8047B2C0@ha
/* 8011D364 0011A2A4  90 1E 01 10 */	stw r0, 0x110(r30)
/* 8011D368 0011A2A8  38 1E 00 AC */	addi r0, r30, 0xac
/* 8011D36C 0011A2AC  3B E3 B2 C0 */	addi r31, r3, lbl_8047B2C0@l
/* 8011D370 0011A2B0  38 60 00 00 */	li r3, 0
/* 8011D374 0011A2B4  90 1E 00 00 */	stw r0, 0(r30)
/* 8011D378 0011A2B8  38 1F 00 1C */	addi r0, r31, 0x1c
/* 8011D37C 0011A2BC  7F C4 F3 78 */	mr r4, r30
/* 8011D380 0011A2C0  90 7E 00 04 */	stw r3, 4(r30)
/* 8011D384 0011A2C4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8011D388 0011A2C8  90 1E 00 08 */	stw r0, 8(r30)
/* 8011D38C 0011A2CC  48 2F 62 CD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D390 0011A2D0  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D394 0011A2D4  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011D398 0011A2D8  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D39C 0011A2DC  38 60 00 7F */	li r3, 0x7f
/* 8011D3A0 0011A2E0  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8011D3A4 0011A2E4  38 E0 00 00 */	li r7, 0
/* 8011D3A8 0011A2E8  38 00 00 FF */	li r0, 0xff
/* 8011D3AC 0011A2EC  7F C4 F3 78 */	mr r4, r30
/* 8011D3B0 0011A2F0  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8011D3B4 0011A2F4  38 7E 00 34 */	addi r3, r30, 0x34
/* 8011D3B8 0011A2F8  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011D3BC 0011A2FC  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011D3C0 0011A300  90 FE 00 2C */	stw r7, 0x2c(r30)
/* 8011D3C4 0011A304  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8011D3C8 0011A308  48 2F 62 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D3CC 0011A30C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D3D0 0011A310  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011D3D4 0011A314  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D3D8 0011A318  38 60 00 7F */	li r3, 0x7f
/* 8011D3DC 0011A31C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 8011D3E0 0011A320  38 E0 00 00 */	li r7, 0
/* 8011D3E4 0011A324  38 00 00 FF */	li r0, 0xff
/* 8011D3E8 0011A328  7F C4 F3 78 */	mr r4, r30
/* 8011D3EC 0011A32C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8011D3F0 0011A330  38 7E 00 5C */	addi r3, r30, 0x5c
/* 8011D3F4 0011A334  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011D3F8 0011A338  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011D3FC 0011A33C  90 FE 00 54 */	stw r7, 0x54(r30)
/* 8011D400 0011A340  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8011D404 0011A344  48 2F 62 55 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D408 0011A348  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D40C 0011A34C  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011D410 0011A350  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D414 0011A354  38 60 00 7F */	li r3, 0x7f
/* 8011D418 0011A358  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 8011D41C 0011A35C  38 E0 00 00 */	li r7, 0
/* 8011D420 0011A360  38 00 00 FF */	li r0, 0xff
/* 8011D424 0011A364  7F C4 F3 78 */	mr r4, r30
/* 8011D428 0011A368  90 7E 00 74 */	stw r3, 0x74(r30)
/* 8011D42C 0011A36C  38 7E 00 84 */	addi r3, r30, 0x84
/* 8011D430 0011A370  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011D434 0011A374  38 DF 00 28 */	addi r6, r31, 0x28
/* 8011D438 0011A378  90 FE 00 7C */	stw r7, 0x7c(r30)
/* 8011D43C 0011A37C  90 1E 00 80 */	stw r0, 0x80(r30)
/* 8011D440 0011A380  48 2F 62 19 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D444 0011A384  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D448 0011A388  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 8011D44C 0011A38C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D450 0011A390  39 20 00 FF */	li r9, 0xff
/* 8011D454 0011A394  90 1E 00 84 */	stw r0, 0x84(r30)
/* 8011D458 0011A398  39 00 00 00 */	li r8, 0
/* 8011D45C 0011A39C  38 FE 01 0C */	addi r7, r30, 0x10c
/* 8011D460 0011A3A0  38 1F 00 34 */	addi r0, r31, 0x34
/* 8011D464 0011A3A4  91 3E 00 9C */	stw r9, 0x9c(r30)
/* 8011D468 0011A3A8  38 7E 00 BC */	addi r3, r30, 0xbc
/* 8011D46C 0011A3AC  38 9E 00 B0 */	addi r4, r30, 0xb0
/* 8011D470 0011A3B0  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 8011D474 0011A3B4  91 1E 00 A4 */	stw r8, 0xa4(r30)
/* 8011D478 0011A3B8  38 C2 98 C8 */	addi r6, r2, lbl_80517C28@sda21
/* 8011D47C 0011A3BC  91 3E 00 A8 */	stw r9, 0xa8(r30)
/* 8011D480 0011A3C0  90 FE 00 B0 */	stw r7, 0xb0(r30)
/* 8011D484 0011A3C4  91 1E 00 B4 */	stw r8, 0xb4(r30)
/* 8011D488 0011A3C8  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 8011D48C 0011A3CC  48 2F 61 CD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D490 0011A3D0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011D494 0011A3D4  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 8011D498 0011A3D8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011D49C 0011A3DC  C0 02 98 D0 */	lfs f0, lbl_80517C30@sda21(r2)
/* 8011D4A0 0011A3E0  90 1E 00 BC */	stw r0, 0xbc(r30)
/* 8011D4A4 0011A3E4  38 7E 00 E4 */	addi r3, r30, 0xe4
/* 8011D4A8 0011A3E8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011D4AC 0011A3EC  38 9E 00 B0 */	addi r4, r30, 0xb0
/* 8011D4B0 0011A3F0  D0 1E 00 D4 */	stfs f0, 0xd4(r30)
/* 8011D4B4 0011A3F4  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 8011D4B8 0011A3F8  C0 02 98 D4 */	lfs f0, lbl_80517C34@sda21(r2)
/* 8011D4BC 0011A3FC  38 C2 98 D8 */	addi r6, r2, lbl_80517C38@sda21
/* 8011D4C0 0011A400  D0 3E 00 DC */	stfs f1, 0xdc(r30)
/* 8011D4C4 0011A404  D0 1E 00 E0 */	stfs f0, 0xe0(r30)
/* 8011D4C8 0011A408  48 2F 61 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D4CC 0011A40C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011D4D0 0011A410  C0 22 98 D4 */	lfs f1, lbl_80517C34@sda21(r2)
/* 8011D4D4 0011A414  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011D4D8 0011A418  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011D4DC 0011A41C  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 8011D4E0 0011A420  7F C3 F3 78 */	mr r3, r30
/* 8011D4E4 0011A424  D0 3E 00 FC */	stfs f1, 0xfc(r30)
/* 8011D4E8 0011A428  D0 1E 01 04 */	stfs f0, 0x104(r30)
/* 8011D4EC 0011A42C  D0 3E 01 08 */	stfs f1, 0x108(r30)
/* 8011D4F0 0011A430  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011D4F4 0011A434  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011D4F8 0011A438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D4FC 0011A43C  7C 08 03 A6 */	mtlr r0
/* 8011D500 0011A440  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D504 0011A444  4E 80 00 20 */	blr 
.endfn __ct__Q24Game14GameFogSettingFv

.fn read__Q24Game17GameShadowSettingFR6Stream, weak
/* 8011D508 0011A448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D50C 0011A44C  7C 08 02 A6 */	mflr r0
/* 8011D510 0011A450  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D514 0011A454  48 2F 62 E1 */	bl read__10ParametersFR6Stream
/* 8011D518 0011A458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D51C 0011A45C  7C 08 03 A6 */	mtlr r0
/* 8011D520 0011A460  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D524 0011A464  4E 80 00 20 */	blr 
.endfn read__Q24Game17GameShadowSettingFR6Stream

.fn read__Q24Game14GameFogSettingFR6Stream, weak
/* 8011D528 0011A468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D52C 0011A46C  7C 08 02 A6 */	mflr r0
/* 8011D530 0011A470  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D534 0011A474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011D538 0011A478  7C 9F 23 78 */	mr r31, r4
/* 8011D53C 0011A47C  93 C1 00 08 */	stw r30, 8(r1)
/* 8011D540 0011A480  7C 7E 1B 78 */	mr r30, r3
/* 8011D544 0011A484  48 2F 62 B1 */	bl read__10ParametersFR6Stream
/* 8011D548 0011A488  7F E4 FB 78 */	mr r4, r31
/* 8011D54C 0011A48C  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 8011D550 0011A490  48 2F 62 A5 */	bl read__10ParametersFR6Stream
/* 8011D554 0011A494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D558 0011A498  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011D55C 0011A49C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011D560 0011A4A0  7C 08 03 A6 */	mtlr r0
/* 8011D564 0011A4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D568 0011A4A8  4E 80 00 20 */	blr 
.endfn read__Q24Game14GameFogSettingFR6Stream

.fn read__Q24Game20GameLightSettingBaseFR6Stream, weak
/* 8011D56C 0011A4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D570 0011A4B0  7C 08 02 A6 */	mflr r0
/* 8011D574 0011A4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D578 0011A4B8  48 2F 62 7D */	bl read__10ParametersFR6Stream
/* 8011D57C 0011A4BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D580 0011A4C0  7C 08 03 A6 */	mtlr r0
/* 8011D584 0011A4C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D588 0011A4C8  4E 80 00 20 */	blr 
.endfn read__Q24Game20GameLightSettingBaseFR6Stream

.fn __dt__Q24Game20GameLightTimeSettingFv, weak
/* 8011D58C 0011A4CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D590 0011A4D0  7C 08 02 A6 */	mflr r0
/* 8011D594 0011A4D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D598 0011A4D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011D59C 0011A4DC  7C 9F 23 78 */	mr r31, r4
/* 8011D5A0 0011A4E0  93 C1 00 08 */	stw r30, 8(r1)
/* 8011D5A4 0011A4E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8011D5A8 0011A4E8  41 82 00 28 */	beq .L_8011D5D0
/* 8011D5AC 0011A4EC  3C A0 80 4B */	lis r5, __vt__Q24Game20GameLightTimeSetting@ha
/* 8011D5B0 0011A4F0  38 80 00 00 */	li r4, 0
/* 8011D5B4 0011A4F4  38 05 C5 08 */	addi r0, r5, __vt__Q24Game20GameLightTimeSetting@l
/* 8011D5B8 0011A4F8  90 1E 00 00 */	stw r0, 0(r30)
/* 8011D5BC 0011A4FC  48 2F 3F CD */	bl __dt__5CNodeFv
/* 8011D5C0 0011A500  7F E0 07 35 */	extsh. r0, r31
/* 8011D5C4 0011A504  40 81 00 0C */	ble .L_8011D5D0
/* 8011D5C8 0011A508  7F C3 F3 78 */	mr r3, r30
/* 8011D5CC 0011A50C  4B F0 6A E9 */	bl __dl__FPv
.L_8011D5D0:
/* 8011D5D0 0011A510  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D5D4 0011A514  7F C3 F3 78 */	mr r3, r30
/* 8011D5D8 0011A518  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011D5DC 0011A51C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011D5E0 0011A520  7C 08 03 A6 */	mtlr r0
/* 8011D5E4 0011A524  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D5E8 0011A528  4E 80 00 20 */	blr 
.endfn __dt__Q24Game20GameLightTimeSettingFv

.fn __ct__Q24Game20GameLightSpotSettingFPc, global
/* 8011D5EC 0011A52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D5F0 0011A530  7C 08 02 A6 */	mflr r0
/* 8011D5F4 0011A534  3C A0 80 4F */	lis r5, __vt__5CNode@ha
/* 8011D5F8 0011A538  39 20 00 00 */	li r9, 0
/* 8011D5FC 0011A53C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D600 0011A540  38 05 B5 28 */	addi r0, r5, __vt__5CNode@l
/* 8011D604 0011A544  3C A0 80 48 */	lis r5, lbl_8047B2C0@ha
/* 8011D608 0011A548  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011D60C 0011A54C  7C 7F 1B 78 */	mr r31, r3
/* 8011D610 0011A550  3C 60 80 4B */	lis r3, __vt__Q24Game20GameLightSpotSetting@ha
/* 8011D614 0011A554  93 C1 00 08 */	stw r30, 8(r1)
/* 8011D618 0011A558  3B C5 B2 C0 */	addi r30, r5, lbl_8047B2C0@l
/* 8011D61C 0011A55C  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 8011D620 0011A560  39 03 C4 A0 */	addi r8, r3, __vt__Q24Game20GameLightSpotSetting@l
/* 8011D624 0011A564  90 1F 00 00 */	stw r0, 0(r31)
/* 8011D628 0011A568  39 5F 00 18 */	addi r10, r31, 0x18
/* 8011D62C 0011A56C  38 FF 00 4C */	addi r7, r31, 0x4c
/* 8011D630 0011A570  38 1E 00 44 */	addi r0, r30, 0x44
/* 8011D634 0011A574  91 3F 00 10 */	stw r9, 0x10(r31)
/* 8011D638 0011A578  38 6A 00 0C */	addi r3, r10, 0xc
/* 8011D63C 0011A57C  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 8011D640 0011A580  38 DE 00 50 */	addi r6, r30, 0x50
/* 8011D644 0011A584  91 3F 00 0C */	stw r9, 0xc(r31)
/* 8011D648 0011A588  91 3F 00 08 */	stw r9, 8(r31)
/* 8011D64C 0011A58C  91 3F 00 04 */	stw r9, 4(r31)
/* 8011D650 0011A590  90 9F 00 14 */	stw r4, 0x14(r31)
/* 8011D654 0011A594  7D 44 53 78 */	mr r4, r10
/* 8011D658 0011A598  91 1F 00 00 */	stw r8, 0(r31)
/* 8011D65C 0011A59C  90 FF 00 18 */	stw r7, 0x18(r31)
/* 8011D660 0011A5A0  91 3F 00 1C */	stw r9, 0x1c(r31)
/* 8011D664 0011A5A4  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8011D668 0011A5A8  48 2F 5F F1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D66C 0011A5AC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011D670 0011A5B0  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011D674 0011A5B4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011D678 0011A5B8  C0 02 98 D0 */	lfs f0, lbl_80517C30@sda21(r2)
/* 8011D67C 0011A5BC  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8011D680 0011A5C0  3C 60 80 4B */	lis r3, __vt__Q24Game20GameLightSettingBase@ha
/* 8011D684 0011A5C4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011D688 0011A5C8  39 23 C4 FC */	addi r9, r3, __vt__Q24Game20GameLightSettingBase@l
/* 8011D68C 0011A5CC  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8011D690 0011A5D0  38 9F 00 50 */	addi r4, r31, 0x50
/* 8011D694 0011A5D4  C0 02 98 E4 */	lfs f0, lbl_80517C44@sda21(r2)
/* 8011D698 0011A5D8  39 1F 00 FC */	addi r8, r31, 0xfc
/* 8011D69C 0011A5DC  D0 3F 00 44 */	stfs f1, 0x44(r31)
/* 8011D6A0 0011A5E0  38 E0 00 00 */	li r7, 0
/* 8011D6A4 0011A5E4  38 1E 00 1C */	addi r0, r30, 0x1c
/* 8011D6A8 0011A5E8  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D6AC 0011A5EC  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8011D6B0 0011A5F0  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011D6B4 0011A5F4  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011D6B8 0011A5F8  91 3F 01 00 */	stw r9, 0x100(r31)
/* 8011D6BC 0011A5FC  91 1F 00 50 */	stw r8, 0x50(r31)
/* 8011D6C0 0011A600  90 FF 00 54 */	stw r7, 0x54(r31)
/* 8011D6C4 0011A604  90 1F 00 58 */	stw r0, 0x58(r31)
/* 8011D6C8 0011A608  48 2F 5F 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D6CC 0011A60C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D6D0 0011A610  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011D6D4 0011A614  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D6D8 0011A618  38 C0 00 00 */	li r6, 0
/* 8011D6DC 0011A61C  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 8011D6E0 0011A620  38 60 00 7F */	li r3, 0x7f
/* 8011D6E4 0011A624  38 00 00 FF */	li r0, 0xff
/* 8011D6E8 0011A628  38 9F 00 50 */	addi r4, r31, 0x50
/* 8011D6EC 0011A62C  90 7F 00 74 */	stw r3, 0x74(r31)
/* 8011D6F0 0011A630  38 64 00 34 */	addi r3, r4, 0x34
/* 8011D6F4 0011A634  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011D6F8 0011A638  90 DF 00 7C */	stw r6, 0x7c(r31)
/* 8011D6FC 0011A63C  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011D700 0011A640  90 1F 00 80 */	stw r0, 0x80(r31)
/* 8011D704 0011A644  48 2F 5F 55 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D708 0011A648  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D70C 0011A64C  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011D710 0011A650  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D714 0011A654  38 C0 00 00 */	li r6, 0
/* 8011D718 0011A658  90 1F 00 84 */	stw r0, 0x84(r31)
/* 8011D71C 0011A65C  38 60 00 7F */	li r3, 0x7f
/* 8011D720 0011A660  38 00 00 FF */	li r0, 0xff
/* 8011D724 0011A664  38 9F 00 50 */	addi r4, r31, 0x50
/* 8011D728 0011A668  90 7F 00 9C */	stw r3, 0x9c(r31)
/* 8011D72C 0011A66C  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011D730 0011A670  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011D734 0011A674  90 DF 00 A4 */	stw r6, 0xa4(r31)
/* 8011D738 0011A678  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011D73C 0011A67C  90 1F 00 A8 */	stw r0, 0xa8(r31)
/* 8011D740 0011A680  48 2F 5F 19 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D744 0011A684  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D748 0011A688  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011D74C 0011A68C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D750 0011A690  38 C0 00 00 */	li r6, 0
/* 8011D754 0011A694  90 1F 00 AC */	stw r0, 0xac(r31)
/* 8011D758 0011A698  38 60 00 7F */	li r3, 0x7f
/* 8011D75C 0011A69C  38 00 00 FF */	li r0, 0xff
/* 8011D760 0011A6A0  38 9F 00 50 */	addi r4, r31, 0x50
/* 8011D764 0011A6A4  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 8011D768 0011A6A8  38 64 00 84 */	addi r3, r4, 0x84
/* 8011D76C 0011A6AC  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011D770 0011A6B0  90 DF 00 CC */	stw r6, 0xcc(r31)
/* 8011D774 0011A6B4  38 DE 00 28 */	addi r6, r30, 0x28
/* 8011D778 0011A6B8  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 8011D77C 0011A6BC  48 2F 5E DD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D780 0011A6C0  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D784 0011A6C4  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 8011D788 0011A6C8  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D78C 0011A6CC  38 C0 00 FF */	li r6, 0xff
/* 8011D790 0011A6D0  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 8011D794 0011A6D4  3C 60 80 4B */	lis r3, __vt__Q24Game20GameSpotLightSetting@ha
/* 8011D798 0011A6D8  39 20 00 00 */	li r9, 0
/* 8011D79C 0011A6DC  38 FF 01 38 */	addi r7, r31, 0x138
/* 8011D7A0 0011A6E0  90 DF 00 EC */	stw r6, 0xec(r31)
/* 8011D7A4 0011A6E4  39 03 C4 94 */	addi r8, r3, __vt__Q24Game20GameSpotLightSetting@l
/* 8011D7A8 0011A6E8  38 9F 01 04 */	addi r4, r31, 0x104
/* 8011D7AC 0011A6EC  38 1E 00 78 */	addi r0, r30, 0x78
/* 8011D7B0 0011A6F0  91 3F 00 F4 */	stw r9, 0xf4(r31)
/* 8011D7B4 0011A6F4  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D7B8 0011A6F8  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 8011D7BC 0011A6FC  90 DF 00 F8 */	stw r6, 0xf8(r31)
/* 8011D7C0 0011A700  38 DE 00 84 */	addi r6, r30, 0x84
/* 8011D7C4 0011A704  91 1F 01 00 */	stw r8, 0x100(r31)
/* 8011D7C8 0011A708  90 FF 01 04 */	stw r7, 0x104(r31)
/* 8011D7CC 0011A70C  91 3F 01 08 */	stw r9, 0x108(r31)
/* 8011D7D0 0011A710  90 1F 01 0C */	stw r0, 0x10c(r31)
/* 8011D7D4 0011A714  48 2F 5E 85 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D7D8 0011A718  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011D7DC 0011A71C  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011D7E0 0011A720  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011D7E4 0011A724  C0 02 98 F4 */	lfs f0, lbl_80517C54@sda21(r2)
/* 8011D7E8 0011A728  90 1F 01 10 */	stw r0, 0x110(r31)
/* 8011D7EC 0011A72C  3C 60 80 4B */	lis r3, __vt__Q24Game20GameLightSettingBase@ha
/* 8011D7F0 0011A730  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011D7F4 0011A734  39 40 00 9B */	li r10, 0x9b
/* 8011D7F8 0011A738  D0 1F 01 28 */	stfs f0, 0x128(r31)
/* 8011D7FC 0011A73C  39 23 C4 FC */	addi r9, r3, __vt__Q24Game20GameLightSettingBase@l
/* 8011D800 0011A740  38 9F 01 3C */	addi r4, r31, 0x13c
/* 8011D804 0011A744  C0 02 98 F8 */	lfs f0, lbl_80517C58@sda21(r2)
/* 8011D808 0011A748  D0 3F 01 30 */	stfs f1, 0x130(r31)
/* 8011D80C 0011A74C  39 1F 01 E8 */	addi r8, r31, 0x1e8
/* 8011D810 0011A750  38 E0 00 00 */	li r7, 0
/* 8011D814 0011A754  38 1E 00 1C */	addi r0, r30, 0x1c
/* 8011D818 0011A758  D0 1F 01 34 */	stfs f0, 0x134(r31)
/* 8011D81C 0011A75C  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D820 0011A760  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011D824 0011A764  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011D828 0011A768  91 5F 00 74 */	stw r10, 0x74(r31)
/* 8011D82C 0011A76C  91 5F 00 9C */	stw r10, 0x9c(r31)
/* 8011D830 0011A770  91 5F 00 C4 */	stw r10, 0xc4(r31)
/* 8011D834 0011A774  91 3F 01 EC */	stw r9, 0x1ec(r31)
/* 8011D838 0011A778  91 1F 01 3C */	stw r8, 0x13c(r31)
/* 8011D83C 0011A77C  90 FF 01 40 */	stw r7, 0x140(r31)
/* 8011D840 0011A780  90 1F 01 44 */	stw r0, 0x144(r31)
/* 8011D844 0011A784  48 2F 5E 15 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D848 0011A788  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D84C 0011A78C  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011D850 0011A790  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D854 0011A794  38 C0 00 00 */	li r6, 0
/* 8011D858 0011A798  90 1F 01 48 */	stw r0, 0x148(r31)
/* 8011D85C 0011A79C  38 60 00 7F */	li r3, 0x7f
/* 8011D860 0011A7A0  38 00 00 FF */	li r0, 0xff
/* 8011D864 0011A7A4  38 9F 01 3C */	addi r4, r31, 0x13c
/* 8011D868 0011A7A8  90 7F 01 60 */	stw r3, 0x160(r31)
/* 8011D86C 0011A7AC  38 64 00 34 */	addi r3, r4, 0x34
/* 8011D870 0011A7B0  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011D874 0011A7B4  90 DF 01 68 */	stw r6, 0x168(r31)
/* 8011D878 0011A7B8  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011D87C 0011A7BC  90 1F 01 6C */	stw r0, 0x16c(r31)
/* 8011D880 0011A7C0  48 2F 5D D9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D884 0011A7C4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D888 0011A7C8  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011D88C 0011A7CC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D890 0011A7D0  38 C0 00 00 */	li r6, 0
/* 8011D894 0011A7D4  90 1F 01 70 */	stw r0, 0x170(r31)
/* 8011D898 0011A7D8  38 60 00 7F */	li r3, 0x7f
/* 8011D89C 0011A7DC  38 00 00 FF */	li r0, 0xff
/* 8011D8A0 0011A7E0  38 9F 01 3C */	addi r4, r31, 0x13c
/* 8011D8A4 0011A7E4  90 7F 01 88 */	stw r3, 0x188(r31)
/* 8011D8A8 0011A7E8  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011D8AC 0011A7EC  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011D8B0 0011A7F0  90 DF 01 90 */	stw r6, 0x190(r31)
/* 8011D8B4 0011A7F4  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011D8B8 0011A7F8  90 1F 01 94 */	stw r0, 0x194(r31)
/* 8011D8BC 0011A7FC  48 2F 5D 9D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D8C0 0011A800  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D8C4 0011A804  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011D8C8 0011A808  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D8CC 0011A80C  38 C0 00 00 */	li r6, 0
/* 8011D8D0 0011A810  90 1F 01 98 */	stw r0, 0x198(r31)
/* 8011D8D4 0011A814  38 60 00 7F */	li r3, 0x7f
/* 8011D8D8 0011A818  38 00 00 FF */	li r0, 0xff
/* 8011D8DC 0011A81C  38 9F 01 3C */	addi r4, r31, 0x13c
/* 8011D8E0 0011A820  90 7F 01 B0 */	stw r3, 0x1b0(r31)
/* 8011D8E4 0011A824  38 64 00 84 */	addi r3, r4, 0x84
/* 8011D8E8 0011A828  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011D8EC 0011A82C  90 DF 01 B8 */	stw r6, 0x1b8(r31)
/* 8011D8F0 0011A830  38 DE 00 28 */	addi r6, r30, 0x28
/* 8011D8F4 0011A834  90 1F 01 BC */	stw r0, 0x1bc(r31)
/* 8011D8F8 0011A838  48 2F 5D 61 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D8FC 0011A83C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D900 0011A840  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 8011D904 0011A844  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D908 0011A848  38 C0 00 FF */	li r6, 0xff
/* 8011D90C 0011A84C  90 1F 01 C0 */	stw r0, 0x1c0(r31)
/* 8011D910 0011A850  3C 60 80 4B */	lis r3, __vt__Q24Game20GameSpotLightSetting@ha
/* 8011D914 0011A854  39 20 00 00 */	li r9, 0
/* 8011D918 0011A858  38 FF 02 24 */	addi r7, r31, 0x224
/* 8011D91C 0011A85C  90 DF 01 D8 */	stw r6, 0x1d8(r31)
/* 8011D920 0011A860  39 03 C4 94 */	addi r8, r3, __vt__Q24Game20GameSpotLightSetting@l
/* 8011D924 0011A864  38 9F 01 F0 */	addi r4, r31, 0x1f0
/* 8011D928 0011A868  38 1E 00 78 */	addi r0, r30, 0x78
/* 8011D92C 0011A86C  91 3F 01 E0 */	stw r9, 0x1e0(r31)
/* 8011D930 0011A870  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D934 0011A874  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 8011D938 0011A878  90 DF 01 E4 */	stw r6, 0x1e4(r31)
/* 8011D93C 0011A87C  38 DE 00 84 */	addi r6, r30, 0x84
/* 8011D940 0011A880  91 1F 01 EC */	stw r8, 0x1ec(r31)
/* 8011D944 0011A884  90 FF 01 F0 */	stw r7, 0x1f0(r31)
/* 8011D948 0011A888  91 3F 01 F4 */	stw r9, 0x1f4(r31)
/* 8011D94C 0011A88C  90 1F 01 F8 */	stw r0, 0x1f8(r31)
/* 8011D950 0011A890  48 2F 5D 09 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D954 0011A894  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011D958 0011A898  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011D95C 0011A89C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011D960 0011A8A0  C0 02 98 F4 */	lfs f0, lbl_80517C54@sda21(r2)
/* 8011D964 0011A8A4  90 1F 01 FC */	stw r0, 0x1fc(r31)
/* 8011D968 0011A8A8  3C 60 80 4B */	lis r3, __vt__Q24Game20GameLightSettingBase@ha
/* 8011D96C 0011A8AC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011D970 0011A8B0  39 40 00 9B */	li r10, 0x9b
/* 8011D974 0011A8B4  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 8011D978 0011A8B8  39 23 C4 FC */	addi r9, r3, __vt__Q24Game20GameLightSettingBase@l
/* 8011D97C 0011A8BC  38 9F 02 28 */	addi r4, r31, 0x228
/* 8011D980 0011A8C0  C0 02 98 F8 */	lfs f0, lbl_80517C58@sda21(r2)
/* 8011D984 0011A8C4  D0 3F 02 1C */	stfs f1, 0x21c(r31)
/* 8011D988 0011A8C8  39 1F 02 D4 */	addi r8, r31, 0x2d4
/* 8011D98C 0011A8CC  38 E0 00 00 */	li r7, 0
/* 8011D990 0011A8D0  38 1E 00 1C */	addi r0, r30, 0x1c
/* 8011D994 0011A8D4  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 8011D998 0011A8D8  38 64 00 0C */	addi r3, r4, 0xc
/* 8011D99C 0011A8DC  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011D9A0 0011A8E0  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011D9A4 0011A8E4  91 5F 01 60 */	stw r10, 0x160(r31)
/* 8011D9A8 0011A8E8  91 5F 01 88 */	stw r10, 0x188(r31)
/* 8011D9AC 0011A8EC  91 5F 01 B0 */	stw r10, 0x1b0(r31)
/* 8011D9B0 0011A8F0  91 3F 02 D8 */	stw r9, 0x2d8(r31)
/* 8011D9B4 0011A8F4  91 1F 02 28 */	stw r8, 0x228(r31)
/* 8011D9B8 0011A8F8  90 FF 02 2C */	stw r7, 0x22c(r31)
/* 8011D9BC 0011A8FC  90 1F 02 30 */	stw r0, 0x230(r31)
/* 8011D9C0 0011A900  48 2F 5C 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011D9C4 0011A904  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011D9C8 0011A908  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011D9CC 0011A90C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011D9D0 0011A910  38 C0 00 00 */	li r6, 0
/* 8011D9D4 0011A914  90 1F 02 34 */	stw r0, 0x234(r31)
/* 8011D9D8 0011A918  38 60 00 7F */	li r3, 0x7f
/* 8011D9DC 0011A91C  38 00 00 FF */	li r0, 0xff
/* 8011D9E0 0011A920  38 9F 02 28 */	addi r4, r31, 0x228
/* 8011D9E4 0011A924  90 7F 02 4C */	stw r3, 0x24c(r31)
/* 8011D9E8 0011A928  38 64 00 34 */	addi r3, r4, 0x34
/* 8011D9EC 0011A92C  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011D9F0 0011A930  90 DF 02 54 */	stw r6, 0x254(r31)
/* 8011D9F4 0011A934  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011D9F8 0011A938  90 1F 02 58 */	stw r0, 0x258(r31)
/* 8011D9FC 0011A93C  48 2F 5C 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DA00 0011A940  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DA04 0011A944  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011DA08 0011A948  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DA0C 0011A94C  38 C0 00 00 */	li r6, 0
/* 8011DA10 0011A950  90 1F 02 5C */	stw r0, 0x25c(r31)
/* 8011DA14 0011A954  38 60 00 7F */	li r3, 0x7f
/* 8011DA18 0011A958  38 00 00 FF */	li r0, 0xff
/* 8011DA1C 0011A95C  38 9F 02 28 */	addi r4, r31, 0x228
/* 8011DA20 0011A960  90 7F 02 74 */	stw r3, 0x274(r31)
/* 8011DA24 0011A964  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011DA28 0011A968  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011DA2C 0011A96C  90 DF 02 7C */	stw r6, 0x27c(r31)
/* 8011DA30 0011A970  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011DA34 0011A974  90 1F 02 80 */	stw r0, 0x280(r31)
/* 8011DA38 0011A978  48 2F 5C 21 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DA3C 0011A97C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DA40 0011A980  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011DA44 0011A984  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DA48 0011A988  38 C0 00 00 */	li r6, 0
/* 8011DA4C 0011A98C  90 1F 02 84 */	stw r0, 0x284(r31)
/* 8011DA50 0011A990  38 60 00 7F */	li r3, 0x7f
/* 8011DA54 0011A994  38 00 00 FF */	li r0, 0xff
/* 8011DA58 0011A998  38 9F 02 28 */	addi r4, r31, 0x228
/* 8011DA5C 0011A99C  90 7F 02 9C */	stw r3, 0x29c(r31)
/* 8011DA60 0011A9A0  38 64 00 84 */	addi r3, r4, 0x84
/* 8011DA64 0011A9A4  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011DA68 0011A9A8  90 DF 02 A4 */	stw r6, 0x2a4(r31)
/* 8011DA6C 0011A9AC  38 DE 00 28 */	addi r6, r30, 0x28
/* 8011DA70 0011A9B0  90 1F 02 A8 */	stw r0, 0x2a8(r31)
/* 8011DA74 0011A9B4  48 2F 5B E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DA78 0011A9B8  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DA7C 0011A9BC  3C C0 80 4B */	lis r6, __vt__Q24Game20GameSpecLightSetting@ha
/* 8011DA80 0011A9C0  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DA84 0011A9C4  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011DA88 0011A9C8  90 1F 02 AC */	stw r0, 0x2ac(r31)
/* 8011DA8C 0011A9CC  39 60 00 FF */	li r11, 0xff
/* 8011DA90 0011A9D0  39 26 C4 E4 */	addi r9, r6, __vt__Q24Game20GameSpecLightSetting@l
/* 8011DA94 0011A9D4  3C 60 80 4B */	lis r3, __vt__Q24Game20GameLightSettingBase@ha
/* 8011DA98 0011A9D8  91 7F 02 C4 */	stw r11, 0x2c4(r31)
/* 8011DA9C 0011A9DC  39 40 00 00 */	li r10, 0
/* 8011DAA0 0011A9E0  39 03 C4 FC */	addi r8, r3, __vt__Q24Game20GameLightSettingBase@l
/* 8011DAA4 0011A9E4  38 9F 02 DC */	addi r4, r31, 0x2dc
/* 8011DAA8 0011A9E8  91 5F 02 CC */	stw r10, 0x2cc(r31)
/* 8011DAAC 0011A9EC  38 FF 03 88 */	addi r7, r31, 0x388
/* 8011DAB0 0011A9F0  38 1E 00 1C */	addi r0, r30, 0x1c
/* 8011DAB4 0011A9F4  38 64 00 0C */	addi r3, r4, 0xc
/* 8011DAB8 0011A9F8  91 7F 02 D0 */	stw r11, 0x2d0(r31)
/* 8011DABC 0011A9FC  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011DAC0 0011AA00  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011DAC4 0011AA04  91 3F 02 D8 */	stw r9, 0x2d8(r31)
/* 8011DAC8 0011AA08  91 7F 02 4C */	stw r11, 0x24c(r31)
/* 8011DACC 0011AA0C  91 7F 02 74 */	stw r11, 0x274(r31)
/* 8011DAD0 0011AA10  91 7F 02 9C */	stw r11, 0x29c(r31)
/* 8011DAD4 0011AA14  91 1F 03 8C */	stw r8, 0x38c(r31)
/* 8011DAD8 0011AA18  90 FF 02 DC */	stw r7, 0x2dc(r31)
/* 8011DADC 0011AA1C  91 5F 02 E0 */	stw r10, 0x2e0(r31)
/* 8011DAE0 0011AA20  90 1F 02 E4 */	stw r0, 0x2e4(r31)
/* 8011DAE4 0011AA24  48 2F 5B 75 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DAE8 0011AA28  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DAEC 0011AA2C  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011DAF0 0011AA30  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DAF4 0011AA34  38 C0 00 00 */	li r6, 0
/* 8011DAF8 0011AA38  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8011DAFC 0011AA3C  38 60 00 7F */	li r3, 0x7f
/* 8011DB00 0011AA40  38 00 00 FF */	li r0, 0xff
/* 8011DB04 0011AA44  38 9F 02 DC */	addi r4, r31, 0x2dc
/* 8011DB08 0011AA48  90 7F 03 00 */	stw r3, 0x300(r31)
/* 8011DB0C 0011AA4C  38 64 00 34 */	addi r3, r4, 0x34
/* 8011DB10 0011AA50  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011DB14 0011AA54  90 DF 03 08 */	stw r6, 0x308(r31)
/* 8011DB18 0011AA58  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011DB1C 0011AA5C  90 1F 03 0C */	stw r0, 0x30c(r31)
/* 8011DB20 0011AA60  48 2F 5B 39 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DB24 0011AA64  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DB28 0011AA68  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011DB2C 0011AA6C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DB30 0011AA70  38 C0 00 00 */	li r6, 0
/* 8011DB34 0011AA74  90 1F 03 10 */	stw r0, 0x310(r31)
/* 8011DB38 0011AA78  38 60 00 7F */	li r3, 0x7f
/* 8011DB3C 0011AA7C  38 00 00 FF */	li r0, 0xff
/* 8011DB40 0011AA80  38 9F 02 DC */	addi r4, r31, 0x2dc
/* 8011DB44 0011AA84  90 7F 03 28 */	stw r3, 0x328(r31)
/* 8011DB48 0011AA88  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011DB4C 0011AA8C  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011DB50 0011AA90  90 DF 03 30 */	stw r6, 0x330(r31)
/* 8011DB54 0011AA94  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011DB58 0011AA98  90 1F 03 34 */	stw r0, 0x334(r31)
/* 8011DB5C 0011AA9C  48 2F 5A FD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DB60 0011AAA0  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DB64 0011AAA4  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011DB68 0011AAA8  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DB6C 0011AAAC  38 C0 00 00 */	li r6, 0
/* 8011DB70 0011AAB0  90 1F 03 38 */	stw r0, 0x338(r31)
/* 8011DB74 0011AAB4  38 60 00 7F */	li r3, 0x7f
/* 8011DB78 0011AAB8  38 00 00 FF */	li r0, 0xff
/* 8011DB7C 0011AABC  38 9F 02 DC */	addi r4, r31, 0x2dc
/* 8011DB80 0011AAC0  90 7F 03 50 */	stw r3, 0x350(r31)
/* 8011DB84 0011AAC4  38 64 00 84 */	addi r3, r4, 0x84
/* 8011DB88 0011AAC8  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011DB8C 0011AACC  90 DF 03 58 */	stw r6, 0x358(r31)
/* 8011DB90 0011AAD0  38 DE 00 28 */	addi r6, r30, 0x28
/* 8011DB94 0011AAD4  90 1F 03 5C */	stw r0, 0x35c(r31)
/* 8011DB98 0011AAD8  48 2F 5A C1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DB9C 0011AADC  3C 80 80 4B */	lis r4, "__vt__7Parm<i>"@ha
/* 8011DBA0 0011AAE0  3C 60 80 4B */	lis r3, __vt__Q24Game23GameLightAmbientSetting@ha
/* 8011DBA4 0011AAE4  38 04 AC 90 */	addi r0, r4, "__vt__7Parm<i>"@l
/* 8011DBA8 0011AAE8  38 C0 00 FF */	li r6, 0xff
/* 8011DBAC 0011AAEC  90 1F 03 60 */	stw r0, 0x360(r31)
/* 8011DBB0 0011AAF0  38 A0 00 00 */	li r5, 0
/* 8011DBB4 0011AAF4  38 83 C4 D8 */	addi r4, r3, __vt__Q24Game23GameLightAmbientSetting@l
/* 8011DBB8 0011AAF8  38 00 00 20 */	li r0, 0x20
/* 8011DBBC 0011AAFC  90 DF 03 78 */	stw r6, 0x378(r31)
/* 8011DBC0 0011AB00  38 7F 03 90 */	addi r3, r31, 0x390
/* 8011DBC4 0011AB04  90 BF 03 80 */	stw r5, 0x380(r31)
/* 8011DBC8 0011AB08  90 DF 03 84 */	stw r6, 0x384(r31)
/* 8011DBCC 0011AB0C  90 9F 03 8C */	stw r4, 0x38c(r31)
/* 8011DBD0 0011AB10  90 1F 03 00 */	stw r0, 0x300(r31)
/* 8011DBD4 0011AB14  90 1F 03 28 */	stw r0, 0x328(r31)
/* 8011DBD8 0011AB18  90 1F 03 50 */	stw r0, 0x350(r31)
/* 8011DBDC 0011AB1C  4B FF F7 59 */	bl __ct__Q24Game14GameFogSettingFv
/* 8011DBE0 0011AB20  3C 60 80 4B */	lis r3, __vt__Q24Game17GameShadowSetting@ha
/* 8011DBE4 0011AB24  3C A0 75 38 */	lis r5, 0x75383030@ha
/* 8011DBE8 0011AB28  38 03 C4 CC */	addi r0, r3, __vt__Q24Game17GameShadowSetting@l
/* 8011DBEC 0011AB2C  38 C0 00 00 */	li r6, 0
/* 8011DBF0 0011AB30  90 1F 05 54 */	stw r0, 0x554(r31)
/* 8011DBF4 0011AB34  38 7F 05 50 */	addi r3, r31, 0x550
/* 8011DBF8 0011AB38  38 1E 00 1C */	addi r0, r30, 0x1c
/* 8011DBFC 0011AB3C  38 9F 04 A4 */	addi r4, r31, 0x4a4
/* 8011DC00 0011AB40  90 7F 04 A4 */	stw r3, 0x4a4(r31)
/* 8011DC04 0011AB44  38 64 00 0C */	addi r3, r4, 0xc
/* 8011DC08 0011AB48  38 A5 30 30 */	addi r5, r5, 0x75383030@l
/* 8011DC0C 0011AB4C  90 DF 04 A8 */	stw r6, 0x4a8(r31)
/* 8011DC10 0011AB50  38 C2 98 BC */	addi r6, r2, lbl_80517C1C@sda21
/* 8011DC14 0011AB54  90 1F 04 AC */	stw r0, 0x4ac(r31)
/* 8011DC18 0011AB58  48 2F 5A 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DC1C 0011AB5C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DC20 0011AB60  3C A0 75 38 */	lis r5, 0x75383031@ha
/* 8011DC24 0011AB64  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DC28 0011AB68  38 C0 00 00 */	li r6, 0
/* 8011DC2C 0011AB6C  90 1F 04 B0 */	stw r0, 0x4b0(r31)
/* 8011DC30 0011AB70  38 60 00 7F */	li r3, 0x7f
/* 8011DC34 0011AB74  38 00 00 FF */	li r0, 0xff
/* 8011DC38 0011AB78  38 9F 04 A4 */	addi r4, r31, 0x4a4
/* 8011DC3C 0011AB7C  90 7F 04 C8 */	stw r3, 0x4c8(r31)
/* 8011DC40 0011AB80  38 64 00 34 */	addi r3, r4, 0x34
/* 8011DC44 0011AB84  38 A5 30 31 */	addi r5, r5, 0x75383031@l
/* 8011DC48 0011AB88  90 DF 04 D0 */	stw r6, 0x4d0(r31)
/* 8011DC4C 0011AB8C  38 C2 98 C0 */	addi r6, r2, lbl_80517C20@sda21
/* 8011DC50 0011AB90  90 1F 04 D4 */	stw r0, 0x4d4(r31)
/* 8011DC54 0011AB94  48 2F 5A 05 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DC58 0011AB98  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DC5C 0011AB9C  3C A0 75 38 */	lis r5, 0x75383032@ha
/* 8011DC60 0011ABA0  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DC64 0011ABA4  38 C0 00 00 */	li r6, 0
/* 8011DC68 0011ABA8  90 1F 04 D8 */	stw r0, 0x4d8(r31)
/* 8011DC6C 0011ABAC  38 60 00 7F */	li r3, 0x7f
/* 8011DC70 0011ABB0  38 00 00 FF */	li r0, 0xff
/* 8011DC74 0011ABB4  38 9F 04 A4 */	addi r4, r31, 0x4a4
/* 8011DC78 0011ABB8  90 7F 04 F0 */	stw r3, 0x4f0(r31)
/* 8011DC7C 0011ABBC  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011DC80 0011ABC0  38 A5 30 32 */	addi r5, r5, 0x75383032@l
/* 8011DC84 0011ABC4  90 DF 04 F8 */	stw r6, 0x4f8(r31)
/* 8011DC88 0011ABC8  38 C2 98 C4 */	addi r6, r2, lbl_80517C24@sda21
/* 8011DC8C 0011ABCC  90 1F 04 FC */	stw r0, 0x4fc(r31)
/* 8011DC90 0011ABD0  48 2F 59 C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DC94 0011ABD4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DC98 0011ABD8  3C A0 75 38 */	lis r5, 0x75383033@ha
/* 8011DC9C 0011ABDC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DCA0 0011ABE0  38 C0 00 00 */	li r6, 0
/* 8011DCA4 0011ABE4  90 1F 05 00 */	stw r0, 0x500(r31)
/* 8011DCA8 0011ABE8  38 60 00 7F */	li r3, 0x7f
/* 8011DCAC 0011ABEC  38 00 00 FF */	li r0, 0xff
/* 8011DCB0 0011ABF0  38 9F 04 A4 */	addi r4, r31, 0x4a4
/* 8011DCB4 0011ABF4  90 7F 05 18 */	stw r3, 0x518(r31)
/* 8011DCB8 0011ABF8  38 64 00 84 */	addi r3, r4, 0x84
/* 8011DCBC 0011ABFC  38 A5 30 33 */	addi r5, r5, 0x75383033@l
/* 8011DCC0 0011AC00  90 DF 05 20 */	stw r6, 0x520(r31)
/* 8011DCC4 0011AC04  38 DE 00 28 */	addi r6, r30, 0x28
/* 8011DCC8 0011AC08  90 1F 05 24 */	stw r0, 0x524(r31)
/* 8011DCCC 0011AC0C  48 2F 59 8D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DCD0 0011AC10  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 8011DCD4 0011AC14  38 C0 00 FF */	li r6, 0xff
/* 8011DCD8 0011AC18  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 8011DCDC 0011AC1C  38 A0 00 00 */	li r5, 0
/* 8011DCE0 0011AC20  90 1F 05 28 */	stw r0, 0x528(r31)
/* 8011DCE4 0011AC24  38 80 00 20 */	li r4, 0x20
/* 8011DCE8 0011AC28  38 00 00 80 */	li r0, 0x80
/* 8011DCEC 0011AC2C  7F E3 FB 78 */	mr r3, r31
/* 8011DCF0 0011AC30  90 DF 05 40 */	stw r6, 0x540(r31)
/* 8011DCF4 0011AC34  90 BF 05 48 */	stw r5, 0x548(r31)
/* 8011DCF8 0011AC38  90 DF 05 4C */	stw r6, 0x54c(r31)
/* 8011DCFC 0011AC3C  90 9F 04 C8 */	stw r4, 0x4c8(r31)
/* 8011DD00 0011AC40  90 9F 04 F0 */	stw r4, 0x4f0(r31)
/* 8011DD04 0011AC44  90 9F 05 18 */	stw r4, 0x518(r31)
/* 8011DD08 0011AC48  90 1F 05 40 */	stw r0, 0x540(r31)
/* 8011DD0C 0011AC4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011DD10 0011AC50  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011DD14 0011AC54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011DD18 0011AC58  7C 08 03 A6 */	mtlr r0
/* 8011DD1C 0011AC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011DD20 0011AC60  4E 80 00 20 */	blr 
.endfn __ct__Q24Game20GameLightSpotSettingFPc

.fn read__Q24Game20GameSpotLightSettingFR6Stream, weak
/* 8011DD24 0011AC64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011DD28 0011AC68  7C 08 02 A6 */	mflr r0
/* 8011DD2C 0011AC6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011DD30 0011AC70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011DD34 0011AC74  7C 9F 23 78 */	mr r31, r4
/* 8011DD38 0011AC78  93 C1 00 08 */	stw r30, 8(r1)
/* 8011DD3C 0011AC7C  7C 7E 1B 78 */	mr r30, r3
/* 8011DD40 0011AC80  48 2F 5A B5 */	bl read__10ParametersFR6Stream
/* 8011DD44 0011AC84  7F E4 FB 78 */	mr r4, r31
/* 8011DD48 0011AC88  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 8011DD4C 0011AC8C  48 2F 5A A9 */	bl read__10ParametersFR6Stream
/* 8011DD50 0011AC90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011DD54 0011AC94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011DD58 0011AC98  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011DD5C 0011AC9C  7C 08 03 A6 */	mtlr r0
/* 8011DD60 0011ACA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011DD64 0011ACA4  4E 80 00 20 */	blr 
.endfn read__Q24Game20GameSpotLightSettingFR6Stream

.fn __ct__Q24Game19GameLightMgrSettingFv, global
/* 8011DD68 0011ACA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011DD6C 0011ACAC  7C 08 02 A6 */	mflr r0
/* 8011DD70 0011ACB0  3C C0 80 4B */	lis r6, __vt__Q24Game19GameLightMgrSetting@ha
/* 8011DD74 0011ACB4  3C A0 66 30 */	lis r5, 0x66303030@ha
/* 8011DD78 0011ACB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011DD7C 0011ACBC  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 8011DD80 0011ACC0  39 80 00 00 */	li r12, 0
/* 8011DD84 0011ACC4  39 62 98 FC */	addi r11, r2, lbl_80517C5C@sda21
/* 8011DD88 0011ACC8  BF 41 00 08 */	stmw r26, 8(r1)
/* 8011DD8C 0011ACCC  3B 84 B5 28 */	addi r28, r4, __vt__5CNode@l
/* 8011DD90 0011ACD0  7C 7E 1B 78 */	mr r30, r3
/* 8011DD94 0011ACD4  39 46 C4 80 */	addi r10, r6, __vt__Q24Game19GameLightMgrSetting@l
/* 8011DD98 0011ACD8  3B BE 00 1C */	addi r29, r30, 0x1c
/* 8011DD9C 0011ACDC  38 A5 30 30 */	addi r5, r5, 0x66303030@l
/* 8011DDA0 0011ACE0  38 FD 00 9C */	addi r7, r29, 0x9c
/* 8011DDA4 0011ACE4  38 9D 00 18 */	addi r4, r29, 0x18
/* 8011DDA8 0011ACE8  93 83 00 00 */	stw r28, 0(r3)
/* 8011DDAC 0011ACEC  3C 60 80 48 */	lis r3, lbl_8047B2C0@ha
/* 8011DDB0 0011ACF0  3B E3 B2 C0 */	addi r31, r3, lbl_8047B2C0@l
/* 8011DDB4 0011ACF4  91 9E 00 10 */	stw r12, 0x10(r30)
/* 8011DDB8 0011ACF8  3C 60 80 4B */	lis r3, __vt__Q24Game19GameLightSunSetting@ha
/* 8011DDBC 0011ACFC  39 03 C4 B0 */	addi r8, r3, __vt__Q24Game19GameLightSunSetting@l
/* 8011DDC0 0011AD00  39 3F 00 90 */	addi r9, r31, 0x90
/* 8011DDC4 0011AD04  91 9E 00 0C */	stw r12, 0xc(r30)
/* 8011DDC8 0011AD08  38 1F 00 44 */	addi r0, r31, 0x44
/* 8011DDCC 0011AD0C  38 64 00 0C */	addi r3, r4, 0xc
/* 8011DDD0 0011AD10  38 DF 00 50 */	addi r6, r31, 0x50
/* 8011DDD4 0011AD14  91 9E 00 08 */	stw r12, 8(r30)
/* 8011DDD8 0011AD18  91 9E 00 04 */	stw r12, 4(r30)
/* 8011DDDC 0011AD1C  91 7E 00 14 */	stw r11, 0x14(r30)
/* 8011DDE0 0011AD20  91 5E 00 00 */	stw r10, 0(r30)
/* 8011DDE4 0011AD24  99 9E 00 18 */	stb r12, 0x18(r30)
/* 8011DDE8 0011AD28  93 9E 00 1C */	stw r28, 0x1c(r30)
/* 8011DDEC 0011AD2C  91 9E 00 2C */	stw r12, 0x2c(r30)
/* 8011DDF0 0011AD30  91 9E 00 28 */	stw r12, 0x28(r30)
/* 8011DDF4 0011AD34  91 9E 00 24 */	stw r12, 0x24(r30)
/* 8011DDF8 0011AD38  91 9E 00 20 */	stw r12, 0x20(r30)
/* 8011DDFC 0011AD3C  91 3E 00 30 */	stw r9, 0x30(r30)
/* 8011DE00 0011AD40  91 1E 00 1C */	stw r8, 0x1c(r30)
/* 8011DE04 0011AD44  90 FE 00 34 */	stw r7, 0x34(r30)
/* 8011DE08 0011AD48  91 9E 00 38 */	stw r12, 0x38(r30)
/* 8011DE0C 0011AD4C  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8011DE10 0011AD50  48 2F 58 49 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DE14 0011AD54  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011DE18 0011AD58  3C A0 66 30 */	lis r5, 0x66303031@ha
/* 8011DE1C 0011AD5C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011DE20 0011AD60  38 9D 00 18 */	addi r4, r29, 0x18
/* 8011DE24 0011AD64  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8011DE28 0011AD68  38 64 00 34 */	addi r3, r4, 0x34
/* 8011DE2C 0011AD6C  C0 02 98 E0 */	lfs f0, lbl_80517C40@sda21(r2)
/* 8011DE30 0011AD70  38 A5 30 31 */	addi r5, r5, 0x66303031@l
/* 8011DE34 0011AD74  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011DE38 0011AD78  38 DF 00 60 */	addi r6, r31, 0x60
/* 8011DE3C 0011AD7C  D0 1D 00 3C */	stfs f0, 0x3c(r29)
/* 8011DE40 0011AD80  C0 02 98 E4 */	lfs f0, lbl_80517C44@sda21(r2)
/* 8011DE44 0011AD84  D0 3D 00 44 */	stfs f1, 0x44(r29)
/* 8011DE48 0011AD88  D0 1D 00 48 */	stfs f0, 0x48(r29)
/* 8011DE4C 0011AD8C  48 2F 58 0D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DE50 0011AD90  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011DE54 0011AD94  3C A0 66 30 */	lis r5, 0x66303032@ha
/* 8011DE58 0011AD98  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011DE5C 0011AD9C  38 9D 00 18 */	addi r4, r29, 0x18
/* 8011DE60 0011ADA0  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 8011DE64 0011ADA4  38 64 00 5C */	addi r3, r4, 0x5c
/* 8011DE68 0011ADA8  C0 02 98 E8 */	lfs f0, lbl_80517C48@sda21(r2)
/* 8011DE6C 0011ADAC  38 A5 30 32 */	addi r5, r5, 0x66303032@l
/* 8011DE70 0011ADB0  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011DE74 0011ADB4  38 DF 00 6C */	addi r6, r31, 0x6c
/* 8011DE78 0011ADB8  D0 1D 00 64 */	stfs f0, 0x64(r29)
/* 8011DE7C 0011ADBC  C0 02 98 EC */	lfs f0, lbl_80517C4C@sda21(r2)
/* 8011DE80 0011ADC0  D0 3D 00 6C */	stfs f1, 0x6c(r29)
/* 8011DE84 0011ADC4  D0 1D 00 70 */	stfs f0, 0x70(r29)
/* 8011DE88 0011ADC8  48 2F 57 D1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8011DE8C 0011ADCC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8011DE90 0011ADD0  3C 80 80 12 */	lis r4, __ct__Q24Game20GameLightTimeSettingFv@ha
/* 8011DE94 0011ADD4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 8011DE98 0011ADD8  C0 02 98 F0 */	lfs f0, lbl_80517C50@sda21(r2)
/* 8011DE9C 0011ADDC  90 1D 00 74 */	stw r0, 0x74(r29)
/* 8011DEA0 0011ADE0  3C 60 80 12 */	lis r3, __dt__Q24Game20GameLightTimeSettingFv@ha
/* 8011DEA4 0011ADE4  38 A3 D5 8C */	addi r5, r3, __dt__Q24Game20GameLightTimeSettingFv@l
/* 8011DEA8 0011ADE8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011DEAC 0011ADEC  D0 1D 00 8C */	stfs f0, 0x8c(r29)
/* 8011DEB0 0011ADF0  38 84 CC E0 */	addi r4, r4, __ct__Q24Game20GameLightTimeSettingFv@l
/* 8011DEB4 0011ADF4  C0 02 98 EC */	lfs f0, lbl_80517C4C@sda21(r2)
/* 8011DEB8 0011ADF8  38 7D 00 A0 */	addi r3, r29, 0xa0
/* 8011DEBC 0011ADFC  D0 3D 00 94 */	stfs f1, 0x94(r29)
/* 8011DEC0 0011AE00  38 C0 04 B0 */	li r6, 0x4b0
/* 8011DEC4 0011AE04  38 E0 00 05 */	li r7, 5
/* 8011DEC8 0011AE08  D0 1D 00 98 */	stfs f0, 0x98(r29)
/* 8011DECC 0011AE0C  4B FA 39 71 */	bl __construct_array
/* 8011DED0 0011AE10  3C 60 80 4B */	lis r3, "GameLightMgrSettinglabel__Q24Game26@unnamed@gameLightMgr_cpp@"@ha
/* 8011DED4 0011AE14  3B 80 00 00 */	li r28, 0
/* 8011DED8 0011AE18  3B 63 C4 2C */	addi r27, r3, "GameLightMgrSettinglabel__Q24Game26@unnamed@gameLightMgr_cpp@"@l
/* 8011DEDC 0011AE1C  7F 9A E3 78 */	mr r26, r28
.L_8011DEE0:
/* 8011DEE0 0011AE20  80 BB 00 00 */	lwz r5, 0(r27)
/* 8011DEE4 0011AE24  38 1A 00 B4 */	addi r0, r26, 0xb4
/* 8011DEE8 0011AE28  38 9A 00 A0 */	addi r4, r26, 0xa0
/* 8011DEEC 0011AE2C  7F A3 EB 78 */	mr r3, r29
/* 8011DEF0 0011AE30  7C BD 01 2E */	stwx r5, r29, r0
/* 8011DEF4 0011AE34  7C 9D 22 14 */	add r4, r29, r4
/* 8011DEF8 0011AE38  48 2F 35 11 */	bl add__5CNodeFP5CNode
/* 8011DEFC 0011AE3C  3B 9C 00 01 */	addi r28, r28, 1
/* 8011DF00 0011AE40  3B 5A 04 B0 */	addi r26, r26, 0x4b0
/* 8011DF04 0011AE44  2C 1C 00 05 */	cmpwi r28, 5
/* 8011DF08 0011AE48  3B 7B 00 04 */	addi r27, r27, 4
/* 8011DF0C 0011AE4C  41 80 FF D4 */	blt .L_8011DEE0
/* 8011DF10 0011AE50  38 7E 18 2C */	addi r3, r30, 0x182c
/* 8011DF14 0011AE54  38 9F 00 A0 */	addi r4, r31, 0xa0
/* 8011DF18 0011AE58  4B FF F6 D5 */	bl __ct__Q24Game20GameLightSpotSettingFPc
/* 8011DF1C 0011AE5C  38 7E 1D 84 */	addi r3, r30, 0x1d84
/* 8011DF20 0011AE60  38 9F 00 B0 */	addi r4, r31, 0xb0
/* 8011DF24 0011AE64  4B FF F6 C9 */	bl __ct__Q24Game20GameLightSpotSettingFPc
/* 8011DF28 0011AE68  7F C3 F3 78 */	mr r3, r30
/* 8011DF2C 0011AE6C  48 00 00 F9 */	bl updateNode__Q24Game19GameLightMgrSettingFv
/* 8011DF30 0011AE70  7F C3 F3 78 */	mr r3, r30
/* 8011DF34 0011AE74  BB 41 00 08 */	lmw r26, 8(r1)
/* 8011DF38 0011AE78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011DF3C 0011AE7C  7C 08 03 A6 */	mtlr r0
/* 8011DF40 0011AE80  38 21 00 20 */	addi r1, r1, 0x20
/* 8011DF44 0011AE84  4E 80 00 20 */	blr 
.endfn __ct__Q24Game19GameLightMgrSettingFv

.fn __dt__Q24Game20GameLightSpotSettingFv, weak
/* 8011DF48 0011AE88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011DF4C 0011AE8C  7C 08 02 A6 */	mflr r0
/* 8011DF50 0011AE90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011DF54 0011AE94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011DF58 0011AE98  7C 9F 23 78 */	mr r31, r4
/* 8011DF5C 0011AE9C  93 C1 00 08 */	stw r30, 8(r1)
/* 8011DF60 0011AEA0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8011DF64 0011AEA4  41 82 00 28 */	beq .L_8011DF8C
/* 8011DF68 0011AEA8  3C A0 80 4B */	lis r5, __vt__Q24Game20GameLightSpotSetting@ha
/* 8011DF6C 0011AEAC  38 80 00 00 */	li r4, 0
/* 8011DF70 0011AEB0  38 05 C4 A0 */	addi r0, r5, __vt__Q24Game20GameLightSpotSetting@l
/* 8011DF74 0011AEB4  90 1E 00 00 */	stw r0, 0(r30)
/* 8011DF78 0011AEB8  48 2F 36 11 */	bl __dt__5CNodeFv
/* 8011DF7C 0011AEBC  7F E0 07 35 */	extsh. r0, r31
/* 8011DF80 0011AEC0  40 81 00 0C */	ble .L_8011DF8C
/* 8011DF84 0011AEC4  7F C3 F3 78 */	mr r3, r30
/* 8011DF88 0011AEC8  4B F0 61 2D */	bl __dl__FPv
.L_8011DF8C:
/* 8011DF8C 0011AECC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011DF90 0011AED0  7F C3 F3 78 */	mr r3, r30
/* 8011DF94 0011AED4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011DF98 0011AED8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011DF9C 0011AEDC  7C 08 03 A6 */	mtlr r0
/* 8011DFA0 0011AEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011DFA4 0011AEE4  4E 80 00 20 */	blr 
.endfn __dt__Q24Game20GameLightSpotSettingFv

.fn __dt__Q24Game19GameLightSunSettingFv, weak
/* 8011DFA8 0011AEE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011DFAC 0011AEEC  7C 08 02 A6 */	mflr r0
/* 8011DFB0 0011AEF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011DFB4 0011AEF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011DFB8 0011AEF8  7C 9F 23 78 */	mr r31, r4
/* 8011DFBC 0011AEFC  93 C1 00 08 */	stw r30, 8(r1)
/* 8011DFC0 0011AF00  7C 7E 1B 79 */	or. r30, r3, r3
/* 8011DFC4 0011AF04  41 82 00 44 */	beq .L_8011E008
/* 8011DFC8 0011AF08  3C 60 80 4B */	lis r3, __vt__Q24Game19GameLightSunSetting@ha
/* 8011DFCC 0011AF0C  3C 80 80 12 */	lis r4, __dt__Q24Game20GameLightTimeSettingFv@ha
/* 8011DFD0 0011AF10  38 03 C4 B0 */	addi r0, r3, __vt__Q24Game19GameLightSunSetting@l
/* 8011DFD4 0011AF14  38 A0 04 B0 */	li r5, 0x4b0
/* 8011DFD8 0011AF18  90 1E 00 00 */	stw r0, 0(r30)
/* 8011DFDC 0011AF1C  38 7E 00 A0 */	addi r3, r30, 0xa0
/* 8011DFE0 0011AF20  38 84 D5 8C */	addi r4, r4, __dt__Q24Game20GameLightTimeSettingFv@l
/* 8011DFE4 0011AF24  38 C0 00 05 */	li r6, 5
/* 8011DFE8 0011AF28  4B FA 37 DD */	bl __destroy_arr
/* 8011DFEC 0011AF2C  7F C3 F3 78 */	mr r3, r30
/* 8011DFF0 0011AF30  38 80 00 00 */	li r4, 0
/* 8011DFF4 0011AF34  48 2F 35 95 */	bl __dt__5CNodeFv
/* 8011DFF8 0011AF38  7F E0 07 35 */	extsh. r0, r31
/* 8011DFFC 0011AF3C  40 81 00 0C */	ble .L_8011E008
/* 8011E000 0011AF40  7F C3 F3 78 */	mr r3, r30
/* 8011E004 0011AF44  4B F0 60 B1 */	bl __dl__FPv
.L_8011E008:
/* 8011E008 0011AF48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011E00C 0011AF4C  7F C3 F3 78 */	mr r3, r30
/* 8011E010 0011AF50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011E014 0011AF54  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011E018 0011AF58  7C 08 03 A6 */	mtlr r0
/* 8011E01C 0011AF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011E020 0011AF60  4E 80 00 20 */	blr 
.endfn __dt__Q24Game19GameLightSunSettingFv

.fn updateNode__Q24Game19GameLightMgrSettingFv, global
/* 8011E024 0011AF64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011E028 0011AF68  7C 08 02 A6 */	mflr r0
/* 8011E02C 0011AF6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011E030 0011AF70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011E034 0011AF74  7C 7F 1B 78 */	mr r31, r3
/* 8011E038 0011AF78  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8011E03C 0011AF7C  48 2F 35 95 */	bl del__5CNodeFv
/* 8011E040 0011AF80  38 7F 18 2C */	addi r3, r31, 0x182c
/* 8011E044 0011AF84  48 2F 35 8D */	bl del__5CNodeFv
/* 8011E048 0011AF88  38 7F 1D 84 */	addi r3, r31, 0x1d84
/* 8011E04C 0011AF8C  48 2F 35 85 */	bl del__5CNodeFv
/* 8011E050 0011AF90  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8011E054 0011AF94  28 00 00 00 */	cmplwi r0, 0
/* 8011E058 0011AF98  40 82 00 14 */	bne .L_8011E06C
/* 8011E05C 0011AF9C  7F E3 FB 78 */	mr r3, r31
/* 8011E060 0011AFA0  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8011E064 0011AFA4  48 2F 33 A5 */	bl add__5CNodeFP5CNode
/* 8011E068 0011AFA8  48 00 00 1C */	b .L_8011E084
.L_8011E06C:
/* 8011E06C 0011AFAC  7F E3 FB 78 */	mr r3, r31
/* 8011E070 0011AFB0  38 9F 18 2C */	addi r4, r31, 0x182c
/* 8011E074 0011AFB4  48 2F 33 95 */	bl add__5CNodeFP5CNode
/* 8011E078 0011AFB8  7F E3 FB 78 */	mr r3, r31
/* 8011E07C 0011AFBC  38 9F 1D 84 */	addi r4, r31, 0x1d84
/* 8011E080 0011AFC0  48 2F 33 89 */	bl add__5CNodeFP5CNode
.L_8011E084:
/* 8011E084 0011AFC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011E088 0011AFC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011E08C 0011AFCC  7C 08 03 A6 */	mtlr r0
/* 8011E090 0011AFD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011E094 0011AFD4  4E 80 00 20 */	blr 
.endfn updateNode__Q24Game19GameLightMgrSettingFv

.fn read__Q24Game19GameLightMgrSettingFR6Stream, global
/* 8011E098 0011AFD8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8011E09C 0011AFDC  7C 08 02 A6 */	mflr r0
/* 8011E0A0 0011AFE0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8011E0A4 0011AFE4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8011E0A8 0011AFE8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8011E0AC 0011AFEC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8011E0B0 0011AFF0  7C 9D 23 78 */	mr r29, r4
/* 8011E0B4 0011AFF4  93 81 00 20 */	stw r28, 0x20(r1)
/* 8011E0B8 0011AFF8  7C 7C 1B 78 */	mr r28, r3
/* 8011E0BC 0011AFFC  38 61 00 14 */	addi r3, r1, 0x14
/* 8011E0C0 0011B000  48 2F 51 B1 */	bl __ct__4ID32Fv
/* 8011E0C4 0011B004  7F A4 EB 78 */	mr r4, r29
/* 8011E0C8 0011B008  38 61 00 14 */	addi r3, r1, 0x14
/* 8011E0CC 0011B00C  48 2F 54 25 */	bl read__4ID32FR6Stream
/* 8011E0D0 0011B010  3C 80 30 30 */	lis r4, 0x30303031@ha
/* 8011E0D4 0011B014  38 61 00 14 */	addi r3, r1, 0x14
/* 8011E0D8 0011B018  38 84 30 31 */	addi r4, r4, 0x30303031@l
/* 8011E0DC 0011B01C  48 2F 53 6D */	bl __ne__4ID32FUl
/* 8011E0E0 0011B020  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011E0E4 0011B024  41 82 00 30 */	beq .L_8011E114
/* 8011E0E8 0011B028  80 E1 00 14 */	lwz r7, 0x14(r1)
/* 8011E0EC 0011B02C  7F 83 E3 78 */	mr r3, r28
/* 8011E0F0 0011B030  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 8011E0F4 0011B034  7F A5 EB 78 */	mr r5, r29
/* 8011E0F8 0011B038  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8011E0FC 0011B03C  38 81 00 08 */	addi r4, r1, 8
/* 8011E100 0011B040  90 E1 00 08 */	stw r7, 8(r1)
/* 8011E104 0011B044  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8011E108 0011B048  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011E10C 0011B04C  48 00 02 7D */	bl readOldVersion__Q24Game19GameLightMgrSettingF4ID32R6Stream
/* 8011E110 0011B050  48 00 02 0C */	b .L_8011E31C
.L_8011E114:
/* 8011E114 0011B054  7F A3 EB 78 */	mr r3, r29
/* 8011E118 0011B058  48 2F 63 85 */	bl readByte__6StreamFv
/* 8011E11C 0011B05C  98 7C 00 18 */	stb r3, 0x18(r28)
/* 8011E120 0011B060  88 1C 00 18 */	lbz r0, 0x18(r28)
/* 8011E124 0011B064  28 00 00 00 */	cmplwi r0, 0
/* 8011E128 0011B068  40 82 00 BC */	bne .L_8011E1E4
/* 8011E12C 0011B06C  7F A4 EB 78 */	mr r4, r29
/* 8011E130 0011B070  38 7C 00 34 */	addi r3, r28, 0x34
/* 8011E134 0011B074  48 2F 56 C1 */	bl read__10ParametersFR6Stream
/* 8011E138 0011B078  3B E0 00 00 */	li r31, 0
/* 8011E13C 0011B07C  3B DC 00 1C */	addi r30, r28, 0x1c
.L_8011E140:
/* 8011E140 0011B080  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 8011E144 0011B084  7F A4 EB 78 */	mr r4, r29
/* 8011E148 0011B088  81 9E 01 68 */	lwz r12, 0x168(r30)
/* 8011E14C 0011B08C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E150 0011B090  7D 89 03 A6 */	mtctr r12
/* 8011E154 0011B094  4E 80 04 21 */	bctrl 
/* 8011E158 0011B098  38 7E 01 6C */	addi r3, r30, 0x16c
/* 8011E15C 0011B09C  7F A4 EB 78 */	mr r4, r29
/* 8011E160 0011B0A0  81 9E 02 1C */	lwz r12, 0x21c(r30)
/* 8011E164 0011B0A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E168 0011B0A8  7D 89 03 A6 */	mtctr r12
/* 8011E16C 0011B0AC  4E 80 04 21 */	bctrl 
/* 8011E170 0011B0B0  38 7E 02 20 */	addi r3, r30, 0x220
/* 8011E174 0011B0B4  7F A4 EB 78 */	mr r4, r29
/* 8011E178 0011B0B8  81 9E 02 D0 */	lwz r12, 0x2d0(r30)
/* 8011E17C 0011B0BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E180 0011B0C0  7D 89 03 A6 */	mtctr r12
/* 8011E184 0011B0C4  4E 80 04 21 */	bctrl 
/* 8011E188 0011B0C8  38 7E 02 D4 */	addi r3, r30, 0x2d4
/* 8011E18C 0011B0CC  7F A4 EB 78 */	mr r4, r29
/* 8011E190 0011B0D0  81 9E 03 84 */	lwz r12, 0x384(r30)
/* 8011E194 0011B0D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E198 0011B0D8  7D 89 03 A6 */	mtctr r12
/* 8011E19C 0011B0DC  4E 80 04 21 */	bctrl 
/* 8011E1A0 0011B0E0  38 7E 03 88 */	addi r3, r30, 0x388
/* 8011E1A4 0011B0E4  7F A4 EB 78 */	mr r4, r29
/* 8011E1A8 0011B0E8  81 9E 04 98 */	lwz r12, 0x498(r30)
/* 8011E1AC 0011B0EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E1B0 0011B0F0  7D 89 03 A6 */	mtctr r12
/* 8011E1B4 0011B0F4  4E 80 04 21 */	bctrl 
/* 8011E1B8 0011B0F8  38 7E 04 9C */	addi r3, r30, 0x49c
/* 8011E1BC 0011B0FC  7F A4 EB 78 */	mr r4, r29
/* 8011E1C0 0011B100  81 9E 05 4C */	lwz r12, 0x54c(r30)
/* 8011E1C4 0011B104  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E1C8 0011B108  7D 89 03 A6 */	mtctr r12
/* 8011E1CC 0011B10C  4E 80 04 21 */	bctrl 
/* 8011E1D0 0011B110  3B FF 00 01 */	addi r31, r31, 1
/* 8011E1D4 0011B114  3B DE 04 B0 */	addi r30, r30, 0x4b0
/* 8011E1D8 0011B118  2C 1F 00 05 */	cmpwi r31, 5
/* 8011E1DC 0011B11C  41 80 FF 64 */	blt .L_8011E140
/* 8011E1E0 0011B120  48 00 01 3C */	b .L_8011E31C
.L_8011E1E4:
/* 8011E1E4 0011B124  7F A4 EB 78 */	mr r4, r29
/* 8011E1E8 0011B128  38 7C 18 44 */	addi r3, r28, 0x1844
/* 8011E1EC 0011B12C  48 2F 56 09 */	bl read__10ParametersFR6Stream
/* 8011E1F0 0011B130  38 7C 18 7C */	addi r3, r28, 0x187c
/* 8011E1F4 0011B134  7F A4 EB 78 */	mr r4, r29
/* 8011E1F8 0011B138  81 9C 19 2C */	lwz r12, 0x192c(r28)
/* 8011E1FC 0011B13C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E200 0011B140  7D 89 03 A6 */	mtctr r12
/* 8011E204 0011B144  4E 80 04 21 */	bctrl 
/* 8011E208 0011B148  38 7C 19 68 */	addi r3, r28, 0x1968
/* 8011E20C 0011B14C  7F A4 EB 78 */	mr r4, r29
/* 8011E210 0011B150  81 9C 1A 18 */	lwz r12, 0x1a18(r28)
/* 8011E214 0011B154  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E218 0011B158  7D 89 03 A6 */	mtctr r12
/* 8011E21C 0011B15C  4E 80 04 21 */	bctrl 
/* 8011E220 0011B160  38 7C 1A 54 */	addi r3, r28, 0x1a54
/* 8011E224 0011B164  7F A4 EB 78 */	mr r4, r29
/* 8011E228 0011B168  81 9C 1B 04 */	lwz r12, 0x1b04(r28)
/* 8011E22C 0011B16C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E230 0011B170  7D 89 03 A6 */	mtctr r12
/* 8011E234 0011B174  4E 80 04 21 */	bctrl 
/* 8011E238 0011B178  38 7C 1B 08 */	addi r3, r28, 0x1b08
/* 8011E23C 0011B17C  7F A4 EB 78 */	mr r4, r29
/* 8011E240 0011B180  81 9C 1B B8 */	lwz r12, 0x1bb8(r28)
/* 8011E244 0011B184  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E248 0011B188  7D 89 03 A6 */	mtctr r12
/* 8011E24C 0011B18C  4E 80 04 21 */	bctrl 
/* 8011E250 0011B190  38 7C 1B BC */	addi r3, r28, 0x1bbc
/* 8011E254 0011B194  7F A4 EB 78 */	mr r4, r29
/* 8011E258 0011B198  81 9C 1C CC */	lwz r12, 0x1ccc(r28)
/* 8011E25C 0011B19C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E260 0011B1A0  7D 89 03 A6 */	mtctr r12
/* 8011E264 0011B1A4  4E 80 04 21 */	bctrl 
/* 8011E268 0011B1A8  38 7C 1C D0 */	addi r3, r28, 0x1cd0
/* 8011E26C 0011B1AC  7F A4 EB 78 */	mr r4, r29
/* 8011E270 0011B1B0  81 9C 1D 80 */	lwz r12, 0x1d80(r28)
/* 8011E274 0011B1B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E278 0011B1B8  7D 89 03 A6 */	mtctr r12
/* 8011E27C 0011B1BC  4E 80 04 21 */	bctrl 
/* 8011E280 0011B1C0  7F A4 EB 78 */	mr r4, r29
/* 8011E284 0011B1C4  38 7C 1D 9C */	addi r3, r28, 0x1d9c
/* 8011E288 0011B1C8  48 2F 55 6D */	bl read__10ParametersFR6Stream
/* 8011E28C 0011B1CC  38 7C 1D D4 */	addi r3, r28, 0x1dd4
/* 8011E290 0011B1D0  7F A4 EB 78 */	mr r4, r29
/* 8011E294 0011B1D4  81 9C 1E 84 */	lwz r12, 0x1e84(r28)
/* 8011E298 0011B1D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E29C 0011B1DC  7D 89 03 A6 */	mtctr r12
/* 8011E2A0 0011B1E0  4E 80 04 21 */	bctrl 
/* 8011E2A4 0011B1E4  38 7C 1E C0 */	addi r3, r28, 0x1ec0
/* 8011E2A8 0011B1E8  7F A4 EB 78 */	mr r4, r29
/* 8011E2AC 0011B1EC  81 9C 1F 70 */	lwz r12, 0x1f70(r28)
/* 8011E2B0 0011B1F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E2B4 0011B1F4  7D 89 03 A6 */	mtctr r12
/* 8011E2B8 0011B1F8  4E 80 04 21 */	bctrl 
/* 8011E2BC 0011B1FC  38 7C 1F AC */	addi r3, r28, 0x1fac
/* 8011E2C0 0011B200  7F A4 EB 78 */	mr r4, r29
/* 8011E2C4 0011B204  81 9C 20 5C */	lwz r12, 0x205c(r28)
/* 8011E2C8 0011B208  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E2CC 0011B20C  7D 89 03 A6 */	mtctr r12
/* 8011E2D0 0011B210  4E 80 04 21 */	bctrl 
/* 8011E2D4 0011B214  38 7C 20 60 */	addi r3, r28, 0x2060
/* 8011E2D8 0011B218  7F A4 EB 78 */	mr r4, r29
/* 8011E2DC 0011B21C  81 9C 21 10 */	lwz r12, 0x2110(r28)
/* 8011E2E0 0011B220  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E2E4 0011B224  7D 89 03 A6 */	mtctr r12
/* 8011E2E8 0011B228  4E 80 04 21 */	bctrl 
/* 8011E2EC 0011B22C  38 7C 21 14 */	addi r3, r28, 0x2114
/* 8011E2F0 0011B230  7F A4 EB 78 */	mr r4, r29
/* 8011E2F4 0011B234  81 9C 22 24 */	lwz r12, 0x2224(r28)
/* 8011E2F8 0011B238  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E2FC 0011B23C  7D 89 03 A6 */	mtctr r12
/* 8011E300 0011B240  4E 80 04 21 */	bctrl 
/* 8011E304 0011B244  38 7C 22 28 */	addi r3, r28, 0x2228
/* 8011E308 0011B248  7F A4 EB 78 */	mr r4, r29
/* 8011E30C 0011B24C  81 9C 22 D8 */	lwz r12, 0x22d8(r28)
/* 8011E310 0011B250  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E314 0011B254  7D 89 03 A6 */	mtctr r12
/* 8011E318 0011B258  4E 80 04 21 */	bctrl 
.L_8011E31C:
/* 8011E31C 0011B25C  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8011E320 0011B260  48 2F 32 B1 */	bl del__5CNodeFv
/* 8011E324 0011B264  38 7C 18 2C */	addi r3, r28, 0x182c
/* 8011E328 0011B268  48 2F 32 A9 */	bl del__5CNodeFv
/* 8011E32C 0011B26C  38 7C 1D 84 */	addi r3, r28, 0x1d84
/* 8011E330 0011B270  48 2F 32 A1 */	bl del__5CNodeFv
/* 8011E334 0011B274  88 1C 00 18 */	lbz r0, 0x18(r28)
/* 8011E338 0011B278  28 00 00 00 */	cmplwi r0, 0
/* 8011E33C 0011B27C  40 82 00 14 */	bne .L_8011E350
/* 8011E340 0011B280  7F 83 E3 78 */	mr r3, r28
/* 8011E344 0011B284  38 9C 00 1C */	addi r4, r28, 0x1c
/* 8011E348 0011B288  48 2F 30 C1 */	bl add__5CNodeFP5CNode
/* 8011E34C 0011B28C  48 00 00 1C */	b .L_8011E368
.L_8011E350:
/* 8011E350 0011B290  7F 83 E3 78 */	mr r3, r28
/* 8011E354 0011B294  38 9C 18 2C */	addi r4, r28, 0x182c
/* 8011E358 0011B298  48 2F 30 B1 */	bl add__5CNodeFP5CNode
/* 8011E35C 0011B29C  7F 83 E3 78 */	mr r3, r28
/* 8011E360 0011B2A0  38 9C 1D 84 */	addi r4, r28, 0x1d84
/* 8011E364 0011B2A4  48 2F 30 A5 */	bl add__5CNodeFP5CNode
.L_8011E368:
/* 8011E368 0011B2A8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011E36C 0011B2AC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8011E370 0011B2B0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8011E374 0011B2B4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8011E378 0011B2B8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8011E37C 0011B2BC  7C 08 03 A6 */	mtlr r0
/* 8011E380 0011B2C0  38 21 00 30 */	addi r1, r1, 0x30
/* 8011E384 0011B2C4  4E 80 00 20 */	blr 
.endfn read__Q24Game19GameLightMgrSettingFR6Stream

.fn readOldVersion__Q24Game19GameLightMgrSettingF4ID32R6Stream, global
/* 8011E388 0011B2C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011E38C 0011B2CC  7C 08 02 A6 */	mflr r0
/* 8011E390 0011B2D0  3C E0 30 30 */	lis r7, 0x30303030@ha
/* 8011E394 0011B2D4  80 C4 00 08 */	lwz r6, 8(r4)
/* 8011E398 0011B2D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011E39C 0011B2DC  38 07 30 30 */	addi r0, r7, 0x30303030@l
/* 8011E3A0 0011B2E0  7C 06 00 00 */	cmpw r6, r0
/* 8011E3A4 0011B2E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011E3A8 0011B2E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011E3AC 0011B2EC  7C 7E 1B 78 */	mr r30, r3
/* 8011E3B0 0011B2F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011E3B4 0011B2F4  7C BD 2B 78 */	mr r29, r5
/* 8011E3B8 0011B2F8  41 82 00 08 */	beq .L_8011E3C0
/* 8011E3BC 0011B2FC  48 00 01 74 */	b .L_8011E530
.L_8011E3C0:
/* 8011E3C0 0011B300  7F A3 EB 78 */	mr r3, r29
/* 8011E3C4 0011B304  48 2F 60 D9 */	bl readByte__6StreamFv
/* 8011E3C8 0011B308  98 7E 00 18 */	stb r3, 0x18(r30)
/* 8011E3CC 0011B30C  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8011E3D0 0011B310  28 00 00 00 */	cmplwi r0, 0
/* 8011E3D4 0011B314  40 82 00 BC */	bne .L_8011E490
/* 8011E3D8 0011B318  7F A4 EB 78 */	mr r4, r29
/* 8011E3DC 0011B31C  38 7E 00 34 */	addi r3, r30, 0x34
/* 8011E3E0 0011B320  48 2F 54 15 */	bl read__10ParametersFR6Stream
/* 8011E3E4 0011B324  3B E0 00 00 */	li r31, 0
/* 8011E3E8 0011B328  3B DE 00 1C */	addi r30, r30, 0x1c
.L_8011E3EC:
/* 8011E3EC 0011B32C  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 8011E3F0 0011B330  7F A4 EB 78 */	mr r4, r29
/* 8011E3F4 0011B334  81 9E 01 68 */	lwz r12, 0x168(r30)
/* 8011E3F8 0011B338  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E3FC 0011B33C  7D 89 03 A6 */	mtctr r12
/* 8011E400 0011B340  4E 80 04 21 */	bctrl 
/* 8011E404 0011B344  38 7E 01 6C */	addi r3, r30, 0x16c
/* 8011E408 0011B348  7F A4 EB 78 */	mr r4, r29
/* 8011E40C 0011B34C  81 9E 02 1C */	lwz r12, 0x21c(r30)
/* 8011E410 0011B350  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E414 0011B354  7D 89 03 A6 */	mtctr r12
/* 8011E418 0011B358  4E 80 04 21 */	bctrl 
/* 8011E41C 0011B35C  38 7E 02 20 */	addi r3, r30, 0x220
/* 8011E420 0011B360  7F A4 EB 78 */	mr r4, r29
/* 8011E424 0011B364  81 9E 02 D0 */	lwz r12, 0x2d0(r30)
/* 8011E428 0011B368  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E42C 0011B36C  7D 89 03 A6 */	mtctr r12
/* 8011E430 0011B370  4E 80 04 21 */	bctrl 
/* 8011E434 0011B374  38 7E 02 D4 */	addi r3, r30, 0x2d4
/* 8011E438 0011B378  7F A4 EB 78 */	mr r4, r29
/* 8011E43C 0011B37C  81 9E 03 84 */	lwz r12, 0x384(r30)
/* 8011E440 0011B380  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E444 0011B384  7D 89 03 A6 */	mtctr r12
/* 8011E448 0011B388  4E 80 04 21 */	bctrl 
/* 8011E44C 0011B38C  38 7E 03 88 */	addi r3, r30, 0x388
/* 8011E450 0011B390  7F A4 EB 78 */	mr r4, r29
/* 8011E454 0011B394  81 9E 04 98 */	lwz r12, 0x498(r30)
/* 8011E458 0011B398  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E45C 0011B39C  7D 89 03 A6 */	mtctr r12
/* 8011E460 0011B3A0  4E 80 04 21 */	bctrl 
/* 8011E464 0011B3A4  38 7E 04 9C */	addi r3, r30, 0x49c
/* 8011E468 0011B3A8  7F A4 EB 78 */	mr r4, r29
/* 8011E46C 0011B3AC  81 9E 05 4C */	lwz r12, 0x54c(r30)
/* 8011E470 0011B3B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E474 0011B3B4  7D 89 03 A6 */	mtctr r12
/* 8011E478 0011B3B8  4E 80 04 21 */	bctrl 
/* 8011E47C 0011B3BC  3B FF 00 01 */	addi r31, r31, 1
/* 8011E480 0011B3C0  3B DE 04 B0 */	addi r30, r30, 0x4b0
/* 8011E484 0011B3C4  2C 1F 00 05 */	cmpwi r31, 5
/* 8011E488 0011B3C8  41 80 FF 64 */	blt .L_8011E3EC
/* 8011E48C 0011B3CC  48 00 00 C0 */	b .L_8011E54C
.L_8011E490:
/* 8011E490 0011B3D0  7F A4 EB 78 */	mr r4, r29
/* 8011E494 0011B3D4  38 7E 18 44 */	addi r3, r30, 0x1844
/* 8011E498 0011B3D8  48 2F 53 5D */	bl read__10ParametersFR6Stream
/* 8011E49C 0011B3DC  38 7E 18 7C */	addi r3, r30, 0x187c
/* 8011E4A0 0011B3E0  7F A4 EB 78 */	mr r4, r29
/* 8011E4A4 0011B3E4  81 9E 19 2C */	lwz r12, 0x192c(r30)
/* 8011E4A8 0011B3E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E4AC 0011B3EC  7D 89 03 A6 */	mtctr r12
/* 8011E4B0 0011B3F0  4E 80 04 21 */	bctrl 
/* 8011E4B4 0011B3F4  38 7E 19 68 */	addi r3, r30, 0x1968
/* 8011E4B8 0011B3F8  7F A4 EB 78 */	mr r4, r29
/* 8011E4BC 0011B3FC  81 9E 1A 18 */	lwz r12, 0x1a18(r30)
/* 8011E4C0 0011B400  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E4C4 0011B404  7D 89 03 A6 */	mtctr r12
/* 8011E4C8 0011B408  4E 80 04 21 */	bctrl 
/* 8011E4CC 0011B40C  38 7E 1A 54 */	addi r3, r30, 0x1a54
/* 8011E4D0 0011B410  7F A4 EB 78 */	mr r4, r29
/* 8011E4D4 0011B414  81 9E 1B 04 */	lwz r12, 0x1b04(r30)
/* 8011E4D8 0011B418  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E4DC 0011B41C  7D 89 03 A6 */	mtctr r12
/* 8011E4E0 0011B420  4E 80 04 21 */	bctrl 
/* 8011E4E4 0011B424  38 7E 1B 08 */	addi r3, r30, 0x1b08
/* 8011E4E8 0011B428  7F A4 EB 78 */	mr r4, r29
/* 8011E4EC 0011B42C  81 9E 1B B8 */	lwz r12, 0x1bb8(r30)
/* 8011E4F0 0011B430  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E4F4 0011B434  7D 89 03 A6 */	mtctr r12
/* 8011E4F8 0011B438  4E 80 04 21 */	bctrl 
/* 8011E4FC 0011B43C  38 7E 1B BC */	addi r3, r30, 0x1bbc
/* 8011E500 0011B440  7F A4 EB 78 */	mr r4, r29
/* 8011E504 0011B444  81 9E 1C CC */	lwz r12, 0x1ccc(r30)
/* 8011E508 0011B448  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E50C 0011B44C  7D 89 03 A6 */	mtctr r12
/* 8011E510 0011B450  4E 80 04 21 */	bctrl 
/* 8011E514 0011B454  38 7E 1C D0 */	addi r3, r30, 0x1cd0
/* 8011E518 0011B458  7F A4 EB 78 */	mr r4, r29
/* 8011E51C 0011B45C  81 9E 1D 80 */	lwz r12, 0x1d80(r30)
/* 8011E520 0011B460  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011E524 0011B464  7D 89 03 A6 */	mtctr r12
/* 8011E528 0011B468  4E 80 04 21 */	bctrl 
/* 8011E52C 0011B46C  48 00 00 20 */	b .L_8011E54C
.L_8011E530:
/* 8011E530 0011B470  3C 60 80 48 */	lis r3, lbl_8047B380@ha
/* 8011E534 0011B474  3C 80 80 48 */	lis r4, lbl_8047B394@ha
/* 8011E538 0011B478  38 A4 B3 94 */	addi r5, r4, lbl_8047B394@l
/* 8011E53C 0011B47C  38 63 B3 80 */	addi r3, r3, lbl_8047B380@l
/* 8011E540 0011B480  38 80 01 AB */	li r4, 0x1ab
/* 8011E544 0011B484  4C C6 31 82 */	crclr 6
/* 8011E548 0011B488  4B F0 C0 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8011E54C:
/* 8011E54C 0011B48C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011E550 0011B490  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011E554 0011B494  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011E558 0011B498  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011E55C 0011B49C  7C 08 03 A6 */	mtlr r0
/* 8011E560 0011B4A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8011E564 0011B4A4  4E 80 00 20 */	blr 
.endfn readOldVersion__Q24Game19GameLightMgrSettingF4ID32R6Stream

.fn update__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgr, global
/* 8011E568 0011B4A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011E56C 0011B4AC  7C 08 02 A6 */	mflr r0
/* 8011E570 0011B4B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011E574 0011B4B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011E578 0011B4B8  3B E0 00 00 */	li r31, 0
/* 8011E57C 0011B4BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011E580 0011B4C0  7C 9E 23 78 */	mr r30, r4
/* 8011E584 0011B4C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011E588 0011B4C8  7C 7D 1B 78 */	mr r29, r3
/* 8011E58C 0011B4CC  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8011E590 0011B4D0  2C 00 00 02 */	cmpwi r0, 2
/* 8011E594 0011B4D4  41 82 00 90 */	beq .L_8011E624
/* 8011E598 0011B4D8  40 80 00 10 */	bge .L_8011E5A8
/* 8011E59C 0011B4DC  2C 00 00 01 */	cmpwi r0, 1
/* 8011E5A0 0011B4E0  40 80 00 14 */	bge .L_8011E5B4
/* 8011E5A4 0011B4E4  48 00 01 98 */	b .L_8011E73C
.L_8011E5A8:
/* 8011E5A8 0011B4E8  2C 00 00 04 */	cmpwi r0, 4
/* 8011E5AC 0011B4EC  40 80 01 90 */	bge .L_8011E73C
/* 8011E5B0 0011B4F0  48 00 01 14 */	b .L_8011E6C4
.L_8011E5B4:
/* 8011E5B4 0011B4F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8011E5B8 0011B4F8  C0 3D 00 40 */	lfs f1, 0x40(r29)
/* 8011E5BC 0011B4FC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8011E5C0 0011B500  EC 01 00 2A */	fadds f0, f1, f0
/* 8011E5C4 0011B504  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8011E5C8 0011B508  C0 3D 00 40 */	lfs f1, 0x40(r29)
/* 8011E5CC 0011B50C  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 8011E5D0 0011B510  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011E5D4 0011B514  40 81 00 14 */	ble .L_8011E5E8
/* 8011E5D8 0011B518  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8011E5DC 0011B51C  C0 02 99 04 */	lfs f0, lbl_80517C64@sda21(r2)
/* 8011E5E0 0011B520  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 8011E5E4 0011B524  48 00 00 0C */	b .L_8011E5F0
.L_8011E5E8:
/* 8011E5E8 0011B528  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011E5EC 0011B52C  D0 1D 00 44 */	stfs f0, 0x44(r29)
.L_8011E5F0:
/* 8011E5F0 0011B530  C0 22 99 04 */	lfs f1, lbl_80517C64@sda21(r2)
/* 8011E5F4 0011B534  C0 1D 00 44 */	lfs f0, 0x44(r29)
/* 8011E5F8 0011B538  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8011E5FC 0011B53C  40 82 00 14 */	bne .L_8011E610
/* 8011E600 0011B540  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E604 0011B544  38 00 00 02 */	li r0, 2
/* 8011E608 0011B548  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8011E60C 0011B54C  90 1D 00 4C */	stw r0, 0x4c(r29)
.L_8011E610:
/* 8011E610 0011B550  7F A3 EB 78 */	mr r3, r29
/* 8011E614 0011B554  7F C4 F3 78 */	mr r4, r30
/* 8011E618 0011B558  38 A0 00 01 */	li r5, 1
/* 8011E61C 0011B55C  48 00 01 41 */	bl updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
/* 8011E620 0011B560  48 00 01 1C */	b .L_8011E73C
.L_8011E624:
/* 8011E624 0011B564  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8011E628 0011B568  C0 5D 00 40 */	lfs f2, 0x40(r29)
/* 8011E62C 0011B56C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8011E630 0011B570  C0 02 99 08 */	lfs f0, lbl_80517C68@sda21(r2)
/* 8011E634 0011B574  EC 22 08 2A */	fadds f1, f2, f1
/* 8011E638 0011B578  D0 3D 00 40 */	stfs f1, 0x40(r29)
/* 8011E63C 0011B57C  C0 3D 00 40 */	lfs f1, 0x40(r29)
/* 8011E640 0011B580  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011E644 0011B584  40 81 00 0C */	ble .L_8011E650
/* 8011E648 0011B588  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E64C 0011B58C  D0 1D 00 40 */	stfs f0, 0x40(r29)
.L_8011E650:
/* 8011E650 0011B590  C0 42 99 14 */	lfs f2, lbl_80517C74@sda21(r2)
/* 8011E654 0011B594  C0 3D 00 40 */	lfs f1, 0x40(r29)
/* 8011E658 0011B598  C0 02 99 18 */	lfs f0, lbl_80517C78@sda21(r2)
/* 8011E65C 0011B59C  EC 22 00 72 */	fmuls f1, f2, f1
/* 8011E660 0011B5A0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8011E664 0011B5A4  48 2F 31 35 */	bl pikmin2_cosf__Ff
/* 8011E668 0011B5A8  C0 42 99 10 */	lfs f2, lbl_80517C70@sda21(r2)
/* 8011E66C 0011B5AC  C0 02 99 0C */	lfs f0, lbl_80517C6C@sda21(r2)
/* 8011E670 0011B5B0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8011E674 0011B5B4  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 8011E678 0011B5B8  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 8011E67C 0011B5BC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8011E680 0011B5C0  41 82 00 30 */	beq .L_8011E6B0
/* 8011E684 0011B5C4  7F A3 EB 78 */	mr r3, r29
/* 8011E688 0011B5C8  7F C4 F3 78 */	mr r4, r30
/* 8011E68C 0011B5CC  38 A0 00 01 */	li r5, 1
/* 8011E690 0011B5D0  48 00 00 CD */	bl updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
/* 8011E694 0011B5D4  C0 3D 00 44 */	lfs f1, 0x44(r29)
/* 8011E698 0011B5D8  38 00 00 03 */	li r0, 3
/* 8011E69C 0011B5DC  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E6A0 0011B5E0  D0 3D 00 48 */	stfs f1, 0x48(r29)
/* 8011E6A4 0011B5E4  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8011E6A8 0011B5E8  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 8011E6AC 0011B5EC  48 00 00 90 */	b .L_8011E73C
.L_8011E6B0:
/* 8011E6B0 0011B5F0  7F A3 EB 78 */	mr r3, r29
/* 8011E6B4 0011B5F4  7F C4 F3 78 */	mr r4, r30
/* 8011E6B8 0011B5F8  38 A0 00 01 */	li r5, 1
/* 8011E6BC 0011B5FC  48 00 00 A1 */	bl updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
/* 8011E6C0 0011B600  48 00 00 7C */	b .L_8011E73C
.L_8011E6C4:
/* 8011E6C4 0011B604  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8011E6C8 0011B608  C0 3D 00 40 */	lfs f1, 0x40(r29)
/* 8011E6CC 0011B60C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8011E6D0 0011B610  EC 01 00 2A */	fadds f0, f1, f0
/* 8011E6D4 0011B614  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8011E6D8 0011B618  C0 3D 00 40 */	lfs f1, 0x40(r29)
/* 8011E6DC 0011B61C  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 8011E6E0 0011B620  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011E6E4 0011B624  40 81 00 14 */	ble .L_8011E6F8
/* 8011E6E8 0011B628  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8011E6EC 0011B62C  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E6F0 0011B630  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 8011E6F4 0011B634  48 00 00 1C */	b .L_8011E710
.L_8011E6F8:
/* 8011E6F8 0011B638  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011E6FC 0011B63C  C0 22 99 04 */	lfs f1, lbl_80517C64@sda21(r2)
/* 8011E700 0011B640  C0 5D 00 48 */	lfs f2, 0x48(r29)
/* 8011E704 0011B644  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011E708 0011B648  EC 02 00 32 */	fmuls f0, f2, f0
/* 8011E70C 0011B64C  D0 1D 00 44 */	stfs f0, 0x44(r29)
.L_8011E710:
/* 8011E710 0011B650  7F A3 EB 78 */	mr r3, r29
/* 8011E714 0011B654  7F C4 F3 78 */	mr r4, r30
/* 8011E718 0011B658  38 A0 00 00 */	li r5, 0
/* 8011E71C 0011B65C  48 00 00 41 */	bl updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
/* 8011E720 0011B660  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011E724 0011B664  C0 1D 00 44 */	lfs f0, 0x44(r29)
/* 8011E728 0011B668  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8011E72C 0011B66C  40 82 00 10 */	bne .L_8011E73C
/* 8011E730 0011B670  38 00 00 00 */	li r0, 0
/* 8011E734 0011B674  3B E0 00 01 */	li r31, 1
/* 8011E738 0011B678  90 1D 00 4C */	stw r0, 0x4c(r29)
.L_8011E73C:
/* 8011E73C 0011B67C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011E740 0011B680  7F E3 FB 78 */	mr r3, r31
/* 8011E744 0011B684  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011E748 0011B688  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011E74C 0011B68C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011E750 0011B690  7C 08 03 A6 */	mtlr r0
/* 8011E754 0011B694  38 21 00 20 */	addi r1, r1, 0x20
/* 8011E758 0011B698  4E 80 00 20 */	blr 
.endfn update__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgr

.fn updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb, global
/* 8011E75C 0011B69C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8011E760 0011B6A0  7C 08 02 A6 */	mflr r0
/* 8011E764 0011B6A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8011E768 0011B6A8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8011E76C 0011B6AC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8011E770 0011B6B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011E774 0011B6B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011E778 0011B6B8  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8011E77C 0011B6BC  C3 E2 99 1C */	lfs f31, lbl_80517C7C@sda21(r2)
/* 8011E780 0011B6C0  7C 7E 1B 78 */	mr r30, r3
/* 8011E784 0011B6C4  7C 9F 23 78 */	mr r31, r4
/* 8011E788 0011B6C8  41 82 00 F8 */	beq .L_8011E880
/* 8011E78C 0011B6CC  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8011E790 0011B6D0  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8011E794 0011B6D4  41 82 00 98 */	beq .L_8011E82C
/* 8011E798 0011B6D8  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8011E79C 0011B6DC  28 00 00 00 */	cmplwi r0, 0
/* 8011E7A0 0011B6E0  41 82 00 8C */	beq .L_8011E82C
/* 8011E7A4 0011B6E4  C0 3E 00 3C */	lfs f1, 0x3c(r30)
/* 8011E7A8 0011B6E8  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E7AC 0011B6EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011E7B0 0011B6F0  40 81 00 7C */	ble .L_8011E82C
/* 8011E7B4 0011B6F4  80 9F 23 3C */	lwz r4, 0x233c(r31)
/* 8011E7B8 0011B6F8  28 04 00 00 */	cmplwi r4, 0
/* 8011E7BC 0011B6FC  41 82 00 70 */	beq .L_8011E82C
/* 8011E7C0 0011B700  81 84 00 00 */	lwz r12, 0(r4)
/* 8011E7C4 0011B704  38 61 00 0C */	addi r3, r1, 0xc
/* 8011E7C8 0011B708  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8011E7CC 0011B70C  7D 89 03 A6 */	mtctr r12
/* 8011E7D0 0011B710  4E 80 04 21 */	bctrl 
/* 8011E7D4 0011B714  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8011E7D8 0011B718  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8011E7DC 0011B71C  C0 23 00 04 */	lfs f1, 4(r3)
/* 8011E7E0 0011B720  C0 63 00 00 */	lfs f3, 0(r3)
/* 8011E7E4 0011B724  EC 81 00 28 */	fsubs f4, f1, f0
/* 8011E7E8 0011B728  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8011E7EC 0011B72C  C0 43 00 08 */	lfs f2, 8(r3)
/* 8011E7F0 0011B730  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011E7F4 0011B734  EC 63 00 28 */	fsubs f3, f3, f0
/* 8011E7F8 0011B738  EC 04 01 32 */	fmuls f0, f4, f4
/* 8011E7FC 0011B73C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8011E800 0011B740  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 8011E804 0011B744  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8011E808 0011B748  48 2F 2F FD */	bl pikmin2_sqrtf__Ff
/* 8011E80C 0011B74C  C0 1E 00 3C */	lfs f0, 0x3c(r30)
/* 8011E810 0011B750  C0 42 99 04 */	lfs f2, lbl_80517C64@sda21(r2)
/* 8011E814 0011B754  EC 21 00 24 */	fdivs f1, f1, f0
/* 8011E818 0011B758  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E81C 0011B75C  EF E2 08 28 */	fsubs f31, f2, f1
/* 8011E820 0011B760  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8011E824 0011B764  40 80 00 08 */	bge .L_8011E82C
/* 8011E828 0011B768  FF E0 00 90 */	fmr f31, f0
.L_8011E82C:
/* 8011E82C 0011B76C  C0 22 99 20 */	lfs f1, lbl_80517C80@sda21(r2)
/* 8011E830 0011B770  C0 1E 00 44 */	lfs f0, 0x44(r30)
/* 8011E834 0011B774  EC 21 00 32 */	fmuls f1, f1, f0
/* 8011E838 0011B778  48 2F 2F 61 */	bl pikmin2_cosf__Ff
/* 8011E83C 0011B77C  C0 42 99 04 */	lfs f2, lbl_80517C64@sda21(r2)
/* 8011E840 0011B780  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011E844 0011B784  EC 42 08 28 */	fsubs f2, f2, f1
/* 8011E848 0011B788  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011E84C 0011B78C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8011E850 0011B790  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8011E854 0011B794  D0 3E 00 44 */	stfs f1, 0x44(r30)
/* 8011E858 0011B798  4C 41 13 82 */	cror 2, 1, 2
/* 8011E85C 0011B79C  40 82 00 24 */	bne .L_8011E880
/* 8011E860 0011B7A0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8011E864 0011B7A4  FC 20 00 90 */	fmr f1, f0
/* 8011E868 0011B7A8  4C 41 13 82 */	cror 2, 1, 2
/* 8011E86C 0011B7AC  40 82 00 08 */	bne .L_8011E874
/* 8011E870 0011B7B0  FC 20 F8 90 */	fmr f1, f31
.L_8011E874:
/* 8011E874 0011B7B4  C0 1E 00 44 */	lfs f0, 0x44(r30)
/* 8011E878 0011B7B8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011E87C 0011B7BC  D0 1E 00 44 */	stfs f0, 0x44(r30)
.L_8011E880:
/* 8011E880 0011B7C0  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8011E884 0011B7C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8011E888 0011B7C8  41 82 00 58 */	beq .L_8011E8E0
/* 8011E88C 0011B7CC  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 8011E890 0011B7D0  7F C3 F3 78 */	mr r3, r30
/* 8011E894 0011B7D4  38 81 00 08 */	addi r4, r1, 8
/* 8011E898 0011B7D8  88 05 00 34 */	lbz r0, 0x34(r5)
/* 8011E89C 0011B7DC  98 01 00 08 */	stb r0, 8(r1)
/* 8011E8A0 0011B7E0  88 05 00 35 */	lbz r0, 0x35(r5)
/* 8011E8A4 0011B7E4  98 01 00 09 */	stb r0, 9(r1)
/* 8011E8A8 0011B7E8  88 05 00 36 */	lbz r0, 0x36(r5)
/* 8011E8AC 0011B7EC  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011E8B0 0011B7F0  88 05 00 37 */	lbz r0, 0x37(r5)
/* 8011E8B4 0011B7F4  98 01 00 0B */	stb r0, 0xb(r1)
/* 8011E8B8 0011B7F8  48 00 02 21 */	bl calcColor__Q24Game18GameLightEventNodeFP6Color4
/* 8011E8BC 0011B7FC  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8011E8C0 0011B800  88 C1 00 0B */	lbz r6, 0xb(r1)
/* 8011E8C4 0011B804  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8011E8C8 0011B808  88 81 00 09 */	lbz r4, 9(r1)
/* 8011E8CC 0011B80C  88 01 00 08 */	lbz r0, 8(r1)
/* 8011E8D0 0011B810  98 03 00 34 */	stb r0, 0x34(r3)
/* 8011E8D4 0011B814  98 83 00 35 */	stb r4, 0x35(r3)
/* 8011E8D8 0011B818  98 A3 00 36 */	stb r5, 0x36(r3)
/* 8011E8DC 0011B81C  98 C3 00 37 */	stb r6, 0x37(r3)
.L_8011E8E0:
/* 8011E8E0 0011B820  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8011E8E4 0011B824  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8011E8E8 0011B828  41 82 00 58 */	beq .L_8011E940
/* 8011E8EC 0011B82C  80 BF 00 54 */	lwz r5, 0x54(r31)
/* 8011E8F0 0011B830  7F C3 F3 78 */	mr r3, r30
/* 8011E8F4 0011B834  38 81 00 08 */	addi r4, r1, 8
/* 8011E8F8 0011B838  88 05 00 34 */	lbz r0, 0x34(r5)
/* 8011E8FC 0011B83C  98 01 00 08 */	stb r0, 8(r1)
/* 8011E900 0011B840  88 05 00 35 */	lbz r0, 0x35(r5)
/* 8011E904 0011B844  98 01 00 09 */	stb r0, 9(r1)
/* 8011E908 0011B848  88 05 00 36 */	lbz r0, 0x36(r5)
/* 8011E90C 0011B84C  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011E910 0011B850  88 05 00 37 */	lbz r0, 0x37(r5)
/* 8011E914 0011B854  98 01 00 0B */	stb r0, 0xb(r1)
/* 8011E918 0011B858  48 00 01 C1 */	bl calcColor__Q24Game18GameLightEventNodeFP6Color4
/* 8011E91C 0011B85C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8011E920 0011B860  88 C1 00 0B */	lbz r6, 0xb(r1)
/* 8011E924 0011B864  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8011E928 0011B868  88 81 00 09 */	lbz r4, 9(r1)
/* 8011E92C 0011B86C  88 01 00 08 */	lbz r0, 8(r1)
/* 8011E930 0011B870  98 03 00 34 */	stb r0, 0x34(r3)
/* 8011E934 0011B874  98 83 00 35 */	stb r4, 0x35(r3)
/* 8011E938 0011B878  98 A3 00 36 */	stb r5, 0x36(r3)
/* 8011E93C 0011B87C  98 C3 00 37 */	stb r6, 0x37(r3)
.L_8011E940:
/* 8011E940 0011B880  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8011E944 0011B884  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8011E948 0011B888  41 82 00 58 */	beq .L_8011E9A0
/* 8011E94C 0011B88C  80 BF 00 58 */	lwz r5, 0x58(r31)
/* 8011E950 0011B890  7F C3 F3 78 */	mr r3, r30
/* 8011E954 0011B894  38 81 00 08 */	addi r4, r1, 8
/* 8011E958 0011B898  88 05 00 34 */	lbz r0, 0x34(r5)
/* 8011E95C 0011B89C  98 01 00 08 */	stb r0, 8(r1)
/* 8011E960 0011B8A0  88 05 00 35 */	lbz r0, 0x35(r5)
/* 8011E964 0011B8A4  98 01 00 09 */	stb r0, 9(r1)
/* 8011E968 0011B8A8  88 05 00 36 */	lbz r0, 0x36(r5)
/* 8011E96C 0011B8AC  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011E970 0011B8B0  88 05 00 37 */	lbz r0, 0x37(r5)
/* 8011E974 0011B8B4  98 01 00 0B */	stb r0, 0xb(r1)
/* 8011E978 0011B8B8  48 00 01 61 */	bl calcColor__Q24Game18GameLightEventNodeFP6Color4
/* 8011E97C 0011B8BC  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 8011E980 0011B8C0  88 C1 00 0B */	lbz r6, 0xb(r1)
/* 8011E984 0011B8C4  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8011E988 0011B8C8  88 81 00 09 */	lbz r4, 9(r1)
/* 8011E98C 0011B8CC  88 01 00 08 */	lbz r0, 8(r1)
/* 8011E990 0011B8D0  98 03 00 34 */	stb r0, 0x34(r3)
/* 8011E994 0011B8D4  98 83 00 35 */	stb r4, 0x35(r3)
/* 8011E998 0011B8D8  98 A3 00 36 */	stb r5, 0x36(r3)
/* 8011E99C 0011B8DC  98 C3 00 37 */	stb r6, 0x37(r3)
.L_8011E9A0:
/* 8011E9A0 0011B8E0  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8011E9A4 0011B8E4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8011E9A8 0011B8E8  41 82 00 50 */	beq .L_8011E9F8
/* 8011E9AC 0011B8EC  88 1F 00 30 */	lbz r0, 0x30(r31)
/* 8011E9B0 0011B8F0  7F C3 F3 78 */	mr r3, r30
/* 8011E9B4 0011B8F4  38 81 00 08 */	addi r4, r1, 8
/* 8011E9B8 0011B8F8  98 01 00 08 */	stb r0, 8(r1)
/* 8011E9BC 0011B8FC  88 1F 00 31 */	lbz r0, 0x31(r31)
/* 8011E9C0 0011B900  98 01 00 09 */	stb r0, 9(r1)
/* 8011E9C4 0011B904  88 1F 00 32 */	lbz r0, 0x32(r31)
/* 8011E9C8 0011B908  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011E9CC 0011B90C  88 1F 00 33 */	lbz r0, 0x33(r31)
/* 8011E9D0 0011B910  98 01 00 0B */	stb r0, 0xb(r1)
/* 8011E9D4 0011B914  48 00 01 05 */	bl calcColor__Q24Game18GameLightEventNodeFP6Color4
/* 8011E9D8 0011B918  88 01 00 08 */	lbz r0, 8(r1)
/* 8011E9DC 0011B91C  98 1F 00 30 */	stb r0, 0x30(r31)
/* 8011E9E0 0011B920  88 01 00 09 */	lbz r0, 9(r1)
/* 8011E9E4 0011B924  98 1F 00 31 */	stb r0, 0x31(r31)
/* 8011E9E8 0011B928  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8011E9EC 0011B92C  98 1F 00 32 */	stb r0, 0x32(r31)
/* 8011E9F0 0011B930  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8011E9F4 0011B934  98 1F 00 33 */	stb r0, 0x33(r31)
.L_8011E9F8:
/* 8011E9F8 0011B938  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8011E9FC 0011B93C  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8011EA00 0011B940  41 82 00 60 */	beq .L_8011EA60
/* 8011EA04 0011B944  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 8011EA08 0011B948  38 81 00 08 */	addi r4, r1, 8
/* 8011EA0C 0011B94C  48 31 40 C1 */	bl getColor__6FogMgrFR6Color4
/* 8011EA10 0011B950  7F C3 F3 78 */	mr r3, r30
/* 8011EA14 0011B954  38 81 00 08 */	addi r4, r1, 8
/* 8011EA18 0011B958  48 00 00 C1 */	bl calcColor__Q24Game18GameLightEventNodeFP6Color4
/* 8011EA1C 0011B95C  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 8011EA20 0011B960  38 81 00 08 */	addi r4, r1, 8
/* 8011EA24 0011B964  48 31 40 85 */	bl setColor__6FogMgrFR6Color4
/* 8011EA28 0011B968  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 8011EA2C 0011B96C  C0 5E 00 30 */	lfs f2, 0x30(r30)
/* 8011EA30 0011B970  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8011EA34 0011B974  C0 7E 00 44 */	lfs f3, 0x44(r30)
/* 8011EA38 0011B978  48 00 39 E5 */	bl "complement<f>__4GameFfff"
/* 8011EA3C 0011B97C  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 8011EA40 0011B980  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8011EA44 0011B984  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 8011EA48 0011B988  C0 5E 00 34 */	lfs f2, 0x34(r30)
/* 8011EA4C 0011B98C  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8011EA50 0011B990  C0 7E 00 44 */	lfs f3, 0x44(r30)
/* 8011EA54 0011B994  48 00 39 C9 */	bl "complement<f>__4GameFfff"
/* 8011EA58 0011B998  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 8011EA5C 0011B99C  D0 23 00 20 */	stfs f1, 0x20(r3)
.L_8011EA60:
/* 8011EA60 0011B9A0  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 8011EA64 0011B9A4  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8011EA68 0011B9A8  41 82 00 50 */	beq .L_8011EAB8
/* 8011EA6C 0011B9AC  88 1F 23 48 */	lbz r0, 0x2348(r31)
/* 8011EA70 0011B9B0  7F C3 F3 78 */	mr r3, r30
/* 8011EA74 0011B9B4  38 81 00 08 */	addi r4, r1, 8
/* 8011EA78 0011B9B8  98 01 00 08 */	stb r0, 8(r1)
/* 8011EA7C 0011B9BC  88 1F 23 49 */	lbz r0, 0x2349(r31)
/* 8011EA80 0011B9C0  98 01 00 09 */	stb r0, 9(r1)
/* 8011EA84 0011B9C4  88 1F 23 4A */	lbz r0, 0x234a(r31)
/* 8011EA88 0011B9C8  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011EA8C 0011B9CC  88 1F 23 4B */	lbz r0, 0x234b(r31)
/* 8011EA90 0011B9D0  98 01 00 0B */	stb r0, 0xb(r1)
/* 8011EA94 0011B9D4  48 00 00 45 */	bl calcColor__Q24Game18GameLightEventNodeFP6Color4
/* 8011EA98 0011B9D8  88 01 00 08 */	lbz r0, 8(r1)
/* 8011EA9C 0011B9DC  98 1F 23 48 */	stb r0, 0x2348(r31)
/* 8011EAA0 0011B9E0  88 01 00 09 */	lbz r0, 9(r1)
/* 8011EAA4 0011B9E4  98 1F 23 49 */	stb r0, 0x2349(r31)
/* 8011EAA8 0011B9E8  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8011EAAC 0011B9EC  98 1F 23 4A */	stb r0, 0x234a(r31)
/* 8011EAB0 0011B9F0  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8011EAB4 0011B9F4  98 1F 23 4B */	stb r0, 0x234b(r31)
.L_8011EAB8:
/* 8011EAB8 0011B9F8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8011EABC 0011B9FC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011EAC0 0011BA00  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8011EAC4 0011BA04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011EAC8 0011BA08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011EACC 0011BA0C  7C 08 03 A6 */	mtlr r0
/* 8011EAD0 0011BA10  38 21 00 30 */	addi r1, r1, 0x30
/* 8011EAD4 0011BA14  4E 80 00 20 */	blr 
.endfn updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb

.fn calcColor__Q24Game18GameLightEventNodeFP6Color4, global
/* 8011EAD8 0011BA18  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8011EADC 0011BA1C  88 03 00 18 */	lbz r0, 0x18(r3)
/* 8011EAE0 0011BA20  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8011EAE4 0011BA24  41 82 01 B4 */	beq .L_8011EC98
/* 8011EAE8 0011BA28  88 04 00 00 */	lbz r0, 0(r4)
/* 8011EAEC 0011BA2C  3C C0 43 30 */	lis r6, 0x4330
/* 8011EAF0 0011BA30  88 A4 00 01 */	lbz r5, 1(r4)
/* 8011EAF4 0011BA34  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011EAF8 0011BA38  88 04 00 02 */	lbz r0, 2(r4)
/* 8011EAFC 0011BA3C  90 C1 00 08 */	stw r6, 8(r1)
/* 8011EB00 0011BA40  C8 82 98 98 */	lfd f4, lbl_80517BF8@sda21(r2)
/* 8011EB04 0011BA44  C8 01 00 08 */	lfd f0, 8(r1)
/* 8011EB08 0011BA48  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8011EB0C 0011BA4C  EC 20 20 28 */	fsubs f1, f0, f4
/* 8011EB10 0011BA50  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8011EB14 0011BA54  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8011EB18 0011BA58  C0 63 00 20 */	lfs f3, 0x20(r3)
/* 8011EB1C 0011BA5C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8011EB20 0011BA60  EC A2 00 72 */	fmuls f5, f2, f1
/* 8011EB24 0011BA64  C0 22 99 24 */	lfs f1, lbl_80517C84@sda21(r2)
/* 8011EB28 0011BA68  EC 00 20 28 */	fsubs f0, f0, f4
/* 8011EB2C 0011BA6C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8011EB30 0011BA70  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 8011EB34 0011BA74  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8011EB38 0011BA78  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8011EB3C 0011BA7C  EC 63 00 32 */	fmuls f3, f3, f0
/* 8011EB40 0011BA80  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8011EB44 0011BA84  EC 00 20 28 */	fsubs f0, f0, f4
/* 8011EB48 0011BA88  EC 42 00 32 */	fmuls f2, f2, f0
/* 8011EB4C 0011BA8C  40 81 00 08 */	ble .L_8011EB54
/* 8011EB50 0011BA90  48 00 00 08 */	b .L_8011EB58
.L_8011EB54:
/* 8011EB54 0011BA94  FC 20 28 90 */	fmr f1, f5
.L_8011EB58:
/* 8011EB58 0011BA98  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011EB5C 0011BA9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011EB60 0011BAA0  4C 41 13 82 */	cror 2, 1, 2
/* 8011EB64 0011BAA4  40 82 00 24 */	bne .L_8011EB88
/* 8011EB68 0011BAA8  C0 02 99 24 */	lfs f0, lbl_80517C84@sda21(r2)
/* 8011EB6C 0011BAAC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EB70 0011BAB0  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8011EB74 0011BAB4  40 81 00 08 */	ble .L_8011EB7C
/* 8011EB78 0011BAB8  48 00 00 08 */	b .L_8011EB80
.L_8011EB7C:
/* 8011EB7C 0011BABC  FC 00 28 90 */	fmr f0, f5
.L_8011EB80:
/* 8011EB80 0011BAC0  EC 01 00 2A */	fadds f0, f1, f0
/* 8011EB84 0011BAC4  48 00 00 20 */	b .L_8011EBA4
.L_8011EB88:
/* 8011EB88 0011BAC8  C0 22 99 24 */	lfs f1, lbl_80517C84@sda21(r2)
/* 8011EB8C 0011BACC  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8011EB90 0011BAD0  40 81 00 08 */	ble .L_8011EB98
/* 8011EB94 0011BAD4  48 00 00 08 */	b .L_8011EB9C
.L_8011EB98:
/* 8011EB98 0011BAD8  FC 20 28 90 */	fmr f1, f5
.L_8011EB9C:
/* 8011EB9C 0011BADC  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011EBA0 0011BAE0  EC 01 00 28 */	fsubs f0, f1, f0
.L_8011EBA4:
/* 8011EBA4 0011BAE4  FC 00 00 1E */	fctiwz f0, f0
/* 8011EBA8 0011BAE8  C0 22 99 24 */	lfs f1, lbl_80517C84@sda21(r2)
/* 8011EBAC 0011BAEC  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8011EBB0 0011BAF0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8011EBB4 0011BAF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011EBB8 0011BAF8  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8011EBBC 0011BAFC  40 81 00 08 */	ble .L_8011EBC4
/* 8011EBC0 0011BB00  48 00 00 08 */	b .L_8011EBC8
.L_8011EBC4:
/* 8011EBC4 0011BB04  FC 20 18 90 */	fmr f1, f3
.L_8011EBC8:
/* 8011EBC8 0011BB08  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011EBCC 0011BB0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011EBD0 0011BB10  4C 41 13 82 */	cror 2, 1, 2
/* 8011EBD4 0011BB14  40 82 00 24 */	bne .L_8011EBF8
/* 8011EBD8 0011BB18  C0 02 99 24 */	lfs f0, lbl_80517C84@sda21(r2)
/* 8011EBDC 0011BB1C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EBE0 0011BB20  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8011EBE4 0011BB24  40 81 00 08 */	ble .L_8011EBEC
/* 8011EBE8 0011BB28  48 00 00 08 */	b .L_8011EBF0
.L_8011EBEC:
/* 8011EBEC 0011BB2C  FC 00 18 90 */	fmr f0, f3
.L_8011EBF0:
/* 8011EBF0 0011BB30  EC 01 00 2A */	fadds f0, f1, f0
/* 8011EBF4 0011BB34  48 00 00 20 */	b .L_8011EC14
.L_8011EBF8:
/* 8011EBF8 0011BB38  C0 22 99 24 */	lfs f1, lbl_80517C84@sda21(r2)
/* 8011EBFC 0011BB3C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8011EC00 0011BB40  40 81 00 08 */	ble .L_8011EC08
/* 8011EC04 0011BB44  48 00 00 08 */	b .L_8011EC0C
.L_8011EC08:
/* 8011EC08 0011BB48  FC 20 18 90 */	fmr f1, f3
.L_8011EC0C:
/* 8011EC0C 0011BB4C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011EC10 0011BB50  EC 01 00 28 */	fsubs f0, f1, f0
.L_8011EC14:
/* 8011EC14 0011BB54  FC 00 00 1E */	fctiwz f0, f0
/* 8011EC18 0011BB58  C0 22 99 24 */	lfs f1, lbl_80517C84@sda21(r2)
/* 8011EC1C 0011BB5C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011EC20 0011BB60  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8011EC24 0011BB64  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8011EC28 0011BB68  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8011EC2C 0011BB6C  40 81 00 08 */	ble .L_8011EC34
/* 8011EC30 0011BB70  48 00 00 08 */	b .L_8011EC38
.L_8011EC34:
/* 8011EC34 0011BB74  FC 20 10 90 */	fmr f1, f2
.L_8011EC38:
/* 8011EC38 0011BB78  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011EC3C 0011BB7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011EC40 0011BB80  4C 41 13 82 */	cror 2, 1, 2
/* 8011EC44 0011BB84  40 82 00 24 */	bne .L_8011EC68
/* 8011EC48 0011BB88  C0 02 99 24 */	lfs f0, lbl_80517C84@sda21(r2)
/* 8011EC4C 0011BB8C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EC50 0011BB90  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011EC54 0011BB94  40 81 00 08 */	ble .L_8011EC5C
/* 8011EC58 0011BB98  48 00 00 08 */	b .L_8011EC60
.L_8011EC5C:
/* 8011EC5C 0011BB9C  FC 00 10 90 */	fmr f0, f2
.L_8011EC60:
/* 8011EC60 0011BBA0  EC 01 00 2A */	fadds f0, f1, f0
/* 8011EC64 0011BBA4  48 00 00 20 */	b .L_8011EC84
.L_8011EC68:
/* 8011EC68 0011BBA8  C0 22 99 24 */	lfs f1, lbl_80517C84@sda21(r2)
/* 8011EC6C 0011BBAC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011EC70 0011BBB0  40 81 00 08 */	ble .L_8011EC78
/* 8011EC74 0011BBB4  48 00 00 08 */	b .L_8011EC7C
.L_8011EC78:
/* 8011EC78 0011BBB8  FC 20 10 90 */	fmr f1, f2
.L_8011EC7C:
/* 8011EC7C 0011BBBC  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011EC80 0011BBC0  EC 01 00 28 */	fsubs f0, f1, f0
.L_8011EC84:
/* 8011EC84 0011BBC4  FC 00 00 1E */	fctiwz f0, f0
/* 8011EC88 0011BBC8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8011EC8C 0011BBCC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011EC90 0011BBD0  54 07 06 3E */	clrlwi r7, r0, 0x18
/* 8011EC94 0011BBD4  48 00 00 AC */	b .L_8011ED40
.L_8011EC98:
/* 8011EC98 0011BBD8  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8011EC9C 0011BBDC  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011ECA0 0011BBE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011ECA4 0011BBE4  4C 41 13 82 */	cror 2, 1, 2
/* 8011ECA8 0011BBE8  40 82 00 10 */	bne .L_8011ECB8
/* 8011ECAC 0011BBEC  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011ECB0 0011BBF0  EC 00 08 2A */	fadds f0, f0, f1
/* 8011ECB4 0011BBF4  48 00 00 0C */	b .L_8011ECC0
.L_8011ECB8:
/* 8011ECB8 0011BBF8  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011ECBC 0011BBFC  EC 01 00 28 */	fsubs f0, f1, f0
.L_8011ECC0:
/* 8011ECC0 0011BC00  FC 20 00 1E */	fctiwz f1, f0
/* 8011ECC4 0011BC04  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 8011ECC8 0011BC08  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011ECCC 0011BC0C  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 8011ECD0 0011BC10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011ECD4 0011BC14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011ECD8 0011BC18  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8011ECDC 0011BC1C  4C 41 13 82 */	cror 2, 1, 2
/* 8011ECE0 0011BC20  40 82 00 10 */	bne .L_8011ECF0
/* 8011ECE4 0011BC24  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011ECE8 0011BC28  EC 00 10 2A */	fadds f0, f0, f2
/* 8011ECEC 0011BC2C  48 00 00 0C */	b .L_8011ECF8
.L_8011ECF0:
/* 8011ECF0 0011BC30  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011ECF4 0011BC34  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011ECF8:
/* 8011ECF8 0011BC38  FC 20 00 1E */	fctiwz f1, f0
/* 8011ECFC 0011BC3C  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 8011ED00 0011BC40  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011ED04 0011BC44  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8011ED08 0011BC48  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011ED0C 0011BC4C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8011ED10 0011BC50  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8011ED14 0011BC54  4C 41 13 82 */	cror 2, 1, 2
/* 8011ED18 0011BC58  40 82 00 10 */	bne .L_8011ED28
/* 8011ED1C 0011BC5C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011ED20 0011BC60  EC 00 10 2A */	fadds f0, f0, f2
/* 8011ED24 0011BC64  48 00 00 0C */	b .L_8011ED30
.L_8011ED28:
/* 8011ED28 0011BC68  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011ED2C 0011BC6C  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011ED30:
/* 8011ED30 0011BC70  FC 00 00 1E */	fctiwz f0, f0
/* 8011ED34 0011BC74  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8011ED38 0011BC78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011ED3C 0011BC7C  54 07 06 3E */	clrlwi r7, r0, 0x18
.L_8011ED40:
/* 8011ED40 0011BC80  89 04 00 00 */	lbz r8, 0(r4)
/* 8011ED44 0011BC84  3C 00 43 30 */	lis r0, 0x4330
/* 8011ED48 0011BC88  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 8011ED4C 0011BC8C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8011ED50 0011BC90  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011ED54 0011BC94  90 A1 00 34 */	stw r5, 0x34(r1)
/* 8011ED58 0011BC98  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 8011ED5C 0011BC9C  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 8011ED60 0011BCA0  91 01 00 2C */	stw r8, 0x2c(r1)
/* 8011ED64 0011BCA4  EC 81 28 28 */	fsubs f4, f1, f5
/* 8011ED68 0011BCA8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011ED6C 0011BCAC  90 01 00 28 */	stw r0, 0x28(r1)
/* 8011ED70 0011BCB0  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8011ED74 0011BCB4  91 01 00 24 */	stw r8, 0x24(r1)
/* 8011ED78 0011BCB8  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011ED7C 0011BCBC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8011ED80 0011BCC0  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8011ED84 0011BCC4  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011ED88 0011BCC8  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011ED8C 0011BCCC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011ED90 0011BCD0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011ED94 0011BCD4  4C 41 13 82 */	cror 2, 1, 2
/* 8011ED98 0011BCD8  40 82 00 10 */	bne .L_8011EDA8
/* 8011ED9C 0011BCDC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EDA0 0011BCE0  EC 21 10 2A */	fadds f1, f1, f2
/* 8011EDA4 0011BCE4  48 00 00 0C */	b .L_8011EDB0
.L_8011EDA8:
/* 8011EDA8 0011BCE8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EDAC 0011BCEC  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011EDB0:
/* 8011EDB0 0011BCF0  FC 20 08 1E */	fctiwz f1, f1
/* 8011EDB4 0011BCF4  3C 00 43 30 */	lis r0, 0x4330
/* 8011EDB8 0011BCF8  54 C3 06 3E */	clrlwi r3, r6, 0x18
/* 8011EDBC 0011BCFC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011EDC0 0011BD00  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011EDC4 0011BD04  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 8011EDC8 0011BD08  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011EDCC 0011BD0C  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 8011EDD0 0011BD10  90 61 00 14 */	stw r3, 0x14(r1)
/* 8011EDD4 0011BD14  98 A4 00 00 */	stb r5, 0(r4)
/* 8011EDD8 0011BD18  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8011EDDC 0011BD1C  88 64 00 01 */	lbz r3, 1(r4)
/* 8011EDE0 0011BD20  90 01 00 08 */	stw r0, 8(r1)
/* 8011EDE4 0011BD24  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011EDE8 0011BD28  90 61 00 0C */	stw r3, 0xc(r1)
/* 8011EDEC 0011BD2C  C8 41 00 08 */	lfd f2, 8(r1)
/* 8011EDF0 0011BD30  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8011EDF4 0011BD34  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011EDF8 0011BD38  90 01 00 38 */	stw r0, 0x38(r1)
/* 8011EDFC 0011BD3C  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 8011EE00 0011BD40  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011EE04 0011BD44  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011EE08 0011BD48  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011EE0C 0011BD4C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011EE10 0011BD50  4C 41 13 82 */	cror 2, 1, 2
/* 8011EE14 0011BD54  40 82 00 10 */	bne .L_8011EE24
/* 8011EE18 0011BD58  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EE1C 0011BD5C  EC 21 10 2A */	fadds f1, f1, f2
/* 8011EE20 0011BD60  48 00 00 0C */	b .L_8011EE2C
.L_8011EE24:
/* 8011EE24 0011BD64  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EE28 0011BD68  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011EE2C:
/* 8011EE2C 0011BD6C  FC 20 08 1E */	fctiwz f1, f1
/* 8011EE30 0011BD70  3C 00 43 30 */	lis r0, 0x4330
/* 8011EE34 0011BD74  54 E3 06 3E */	clrlwi r3, r7, 0x18
/* 8011EE38 0011BD78  90 01 00 48 */	stw r0, 0x48(r1)
/* 8011EE3C 0011BD7C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011EE40 0011BD80  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 8011EE44 0011BD84  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011EE48 0011BD88  80 A1 00 44 */	lwz r5, 0x44(r1)
/* 8011EE4C 0011BD8C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8011EE50 0011BD90  98 A4 00 01 */	stb r5, 1(r4)
/* 8011EE54 0011BD94  C8 41 00 48 */	lfd f2, 0x48(r1)
/* 8011EE58 0011BD98  88 64 00 02 */	lbz r3, 2(r4)
/* 8011EE5C 0011BD9C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8011EE60 0011BDA0  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011EE64 0011BDA4  90 61 00 54 */	stw r3, 0x54(r1)
/* 8011EE68 0011BDA8  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 8011EE6C 0011BDAC  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8011EE70 0011BDB0  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011EE74 0011BDB4  90 01 00 58 */	stw r0, 0x58(r1)
/* 8011EE78 0011BDB8  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 8011EE7C 0011BDBC  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011EE80 0011BDC0  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011EE84 0011BDC4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011EE88 0011BDC8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011EE8C 0011BDCC  4C 41 13 82 */	cror 2, 1, 2
/* 8011EE90 0011BDD0  40 82 00 10 */	bne .L_8011EEA0
/* 8011EE94 0011BDD4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EE98 0011BDD8  EC 21 10 2A */	fadds f1, f1, f2
/* 8011EE9C 0011BDDC  48 00 00 0C */	b .L_8011EEA8
.L_8011EEA0:
/* 8011EEA0 0011BDE0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011EEA4 0011BDE4  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011EEA8:
/* 8011EEA8 0011BDE8  FC 20 08 1E */	fctiwz f1, f1
/* 8011EEAC 0011BDEC  3C 00 43 30 */	lis r0, 0x4330
/* 8011EEB0 0011BDF0  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 8011EEB4 0011BDF4  90 01 00 68 */	stw r0, 0x68(r1)
/* 8011EEB8 0011BDF8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011EEBC 0011BDFC  D8 21 00 60 */	stfd f1, 0x60(r1)
/* 8011EEC0 0011BE00  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011EEC4 0011BE04  80 A1 00 64 */	lwz r5, 0x64(r1)
/* 8011EEC8 0011BE08  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8011EECC 0011BE0C  98 A4 00 02 */	stb r5, 2(r4)
/* 8011EED0 0011BE10  C8 41 00 68 */	lfd f2, 0x68(r1)
/* 8011EED4 0011BE14  88 64 00 03 */	lbz r3, 3(r4)
/* 8011EED8 0011BE18  90 01 00 70 */	stw r0, 0x70(r1)
/* 8011EEDC 0011BE1C  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011EEE0 0011BE20  90 61 00 74 */	stw r3, 0x74(r1)
/* 8011EEE4 0011BE24  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 8011EEE8 0011BE28  90 61 00 7C */	stw r3, 0x7c(r1)
/* 8011EEEC 0011BE2C  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011EEF0 0011BE30  90 01 00 78 */	stw r0, 0x78(r1)
/* 8011EEF4 0011BE34  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 8011EEF8 0011BE38  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011EEFC 0011BE3C  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011EF00 0011BE40  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011EF04 0011BE44  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011EF08 0011BE48  4C 41 13 82 */	cror 2, 1, 2
/* 8011EF0C 0011BE4C  40 82 00 10 */	bne .L_8011EF1C
/* 8011EF10 0011BE50  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011EF14 0011BE54  EC 00 10 2A */	fadds f0, f0, f2
/* 8011EF18 0011BE58  48 00 00 0C */	b .L_8011EF24
.L_8011EF1C:
/* 8011EF1C 0011BE5C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011EF20 0011BE60  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011EF24:
/* 8011EF24 0011BE64  FC 00 00 1E */	fctiwz f0, f0
/* 8011EF28 0011BE68  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 8011EF2C 0011BE6C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8011EF30 0011BE70  98 04 00 03 */	stb r0, 3(r4)
/* 8011EF34 0011BE74  38 21 00 90 */	addi r1, r1, 0x90
/* 8011EF38 0011BE78  4E 80 00 20 */	blr 
.endfn calcColor__Q24Game18GameLightEventNodeFP6Color4

.fn __ct__Q24Game12GameLightMgrFPc, global
/* 8011EF3C 0011BE7C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8011EF40 0011BE80  7C 08 02 A6 */	mflr r0
/* 8011EF44 0011BE84  3C A0 80 48 */	lis r5, lbl_8047B2C0@ha
/* 8011EF48 0011BE88  90 01 00 34 */	stw r0, 0x34(r1)
/* 8011EF4C 0011BE8C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8011EF50 0011BE90  3B E5 B2 C0 */	addi r31, r5, lbl_8047B2C0@l
/* 8011EF54 0011BE94  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8011EF58 0011BE98  7C 7E 1B 78 */	mr r30, r3
/* 8011EF5C 0011BE9C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8011EF60 0011BEA0  48 30 CB 2D */	bl __ct__8LightMgrFPc
/* 8011EF64 0011BEA4  3C 80 80 4B */	lis r4, __vt__Q24Game12GameLightMgr@ha
/* 8011EF68 0011BEA8  38 7E 00 5C */	addi r3, r30, 0x5c
/* 8011EF6C 0011BEAC  38 04 C4 40 */	addi r0, r4, __vt__Q24Game12GameLightMgr@l
/* 8011EF70 0011BEB0  90 1E 00 00 */	stw r0, 0(r30)
/* 8011EF74 0011BEB4  4B FF ED F5 */	bl __ct__Q24Game19GameLightMgrSettingFv
/* 8011EF78 0011BEB8  38 80 00 00 */	li r4, 0
/* 8011EF7C 0011BEBC  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011EF80 0011BEC0  90 9E 23 38 */	stw r4, 0x2338(r30)
/* 8011EF84 0011BEC4  38 00 00 A0 */	li r0, 0xa0
/* 8011EF88 0011BEC8  38 7E 23 5C */	addi r3, r30, 0x235c
/* 8011EF8C 0011BECC  90 9E 23 3C */	stw r4, 0x233c(r30)
/* 8011EF90 0011BED0  D0 1E 23 40 */	stfs f0, 0x2340(r30)
/* 8011EF94 0011BED4  98 9E 23 48 */	stb r4, 0x2348(r30)
/* 8011EF98 0011BED8  98 9E 23 49 */	stb r4, 0x2349(r30)
/* 8011EF9C 0011BEDC  98 9E 23 4A */	stb r4, 0x234a(r30)
/* 8011EFA0 0011BEE0  98 1E 23 4B */	stb r0, 0x234b(r30)
/* 8011EFA4 0011BEE4  98 9E 23 4C */	stb r4, 0x234c(r30)
/* 8011EFA8 0011BEE8  98 9E 23 4D */	stb r4, 0x234d(r30)
/* 8011EFAC 0011BEEC  48 2F 23 E5 */	bl __ct__5CNodeFv
/* 8011EFB0 0011BEF0  38 7E 23 74 */	addi r3, r30, 0x2374
/* 8011EFB4 0011BEF4  48 2F 23 DD */	bl __ct__5CNodeFv
/* 8011EFB8 0011BEF8  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 8011EFBC 0011BEFC  38 7E 23 8C */	addi r3, r30, 0x238c
/* 8011EFC0 0011BF00  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8011EFC4 0011BF04  38 A0 00 00 */	li r5, 0
/* 8011EFC8 0011BF08  38 C0 00 0C */	li r6, 0xc
/* 8011EFCC 0011BF0C  38 E0 00 02 */	li r7, 2
/* 8011EFD0 0011BF10  4B FA 28 6D */	bl __construct_array
/* 8011EFD4 0011BF14  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 8011EFD8 0011BF18  C4 04 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r4)
/* 8011EFDC 0011BF1C  7F C3 F3 78 */	mr r3, r30
/* 8011EFE0 0011BF20  D0 1E 23 8C */	stfs f0, 0x238c(r30)
/* 8011EFE4 0011BF24  C0 04 00 04 */	lfs f0, 4(r4)
/* 8011EFE8 0011BF28  D0 1E 23 90 */	stfs f0, 0x2390(r30)
/* 8011EFEC 0011BF2C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8011EFF0 0011BF30  D0 1E 23 94 */	stfs f0, 0x2394(r30)
/* 8011EFF4 0011BF34  C0 04 00 00 */	lfs f0, 0(r4)
/* 8011EFF8 0011BF38  D0 1E 23 98 */	stfs f0, 0x2398(r30)
/* 8011EFFC 0011BF3C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8011F000 0011BF40  D0 1E 23 9C */	stfs f0, 0x239c(r30)
/* 8011F004 0011BF44  C0 04 00 08 */	lfs f0, 8(r4)
/* 8011F008 0011BF48  D0 1E 23 A0 */	stfs f0, 0x23a0(r30)
/* 8011F00C 0011BF4C  48 00 04 AD */	bl start__Q24Game12GameLightMgrFv
/* 8011F010 0011BF50  38 60 00 58 */	li r3, 0x58
/* 8011F014 0011BF54  4B F0 4E 91 */	bl __nw__FUl
/* 8011F018 0011BF58  7C 60 1B 79 */	or. r0, r3, r3
/* 8011F01C 0011BF5C  41 82 00 38 */	beq .L_8011F054
/* 8011F020 0011BF60  38 00 00 FF */	li r0, 0xff
/* 8011F024 0011BF64  38 9F 00 EC */	addi r4, r31, 0xec
/* 8011F028 0011BF68  98 01 00 18 */	stb r0, 0x18(r1)
/* 8011F02C 0011BF6C  38 E1 00 1C */	addi r7, r1, 0x1c
/* 8011F030 0011BF70  38 A0 00 01 */	li r5, 1
/* 8011F034 0011BF74  38 C0 00 02 */	li r6, 2
/* 8011F038 0011BF78  98 01 00 19 */	stb r0, 0x19(r1)
/* 8011F03C 0011BF7C  98 01 00 1A */	stb r0, 0x1a(r1)
/* 8011F040 0011BF80  98 01 00 1B */	stb r0, 0x1b(r1)
/* 8011F044 0011BF84  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8011F048 0011BF88  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8011F04C 0011BF8C  48 30 C4 21 */	bl __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
/* 8011F050 0011BF90  7C 60 1B 78 */	mr r0, r3
.L_8011F054:
/* 8011F054 0011BF94  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8011F058 0011BF98  38 00 00 00 */	li r0, 0
/* 8011F05C 0011BF9C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F060 0011BFA0  7F C3 F3 78 */	mr r3, r30
/* 8011F064 0011BFA4  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8011F068 0011BFA8  C0 02 99 1C */	lfs f0, lbl_80517C7C@sda21(r2)
/* 8011F06C 0011BFAC  98 04 00 49 */	stb r0, 0x49(r4)
/* 8011F070 0011BFB0  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8011F074 0011BFB4  D0 24 00 28 */	stfs f1, 0x28(r4)
/* 8011F078 0011BFB8  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 8011F07C 0011BFBC  D0 24 00 30 */	stfs f1, 0x30(r4)
/* 8011F080 0011BFC0  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8011F084 0011BFC4  48 30 CA E1 */	bl registLightObj__8LightMgrFP8LightObj
/* 8011F088 0011BFC8  38 60 00 58 */	li r3, 0x58
/* 8011F08C 0011BFCC  4B F0 4E 19 */	bl __nw__FUl
/* 8011F090 0011BFD0  7C 60 1B 79 */	or. r0, r3, r3
/* 8011F094 0011BFD4  41 82 00 40 */	beq .L_8011F0D4
/* 8011F098 0011BFD8  39 00 00 40 */	li r8, 0x40
/* 8011F09C 0011BFDC  38 80 00 80 */	li r4, 0x80
/* 8011F0A0 0011BFE0  38 00 00 FF */	li r0, 0xff
/* 8011F0A4 0011BFE4  98 81 00 10 */	stb r4, 0x10(r1)
/* 8011F0A8 0011BFE8  38 9F 00 FC */	addi r4, r31, 0xfc
/* 8011F0AC 0011BFEC  38 E1 00 14 */	addi r7, r1, 0x14
/* 8011F0B0 0011BFF0  99 01 00 11 */	stb r8, 0x11(r1)
/* 8011F0B4 0011BFF4  38 A0 00 02 */	li r5, 2
/* 8011F0B8 0011BFF8  38 C0 00 02 */	li r6, 2
/* 8011F0BC 0011BFFC  99 01 00 12 */	stb r8, 0x12(r1)
/* 8011F0C0 0011C000  98 01 00 13 */	stb r0, 0x13(r1)
/* 8011F0C4 0011C004  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8011F0C8 0011C008  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F0CC 0011C00C  48 30 C3 A1 */	bl __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
/* 8011F0D0 0011C010  7C 60 1B 78 */	mr r0, r3
.L_8011F0D4:
/* 8011F0D4 0011C014  90 1E 00 54 */	stw r0, 0x54(r30)
/* 8011F0D8 0011C018  38 00 00 00 */	li r0, 0
/* 8011F0DC 0011C01C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F0E0 0011C020  7F C3 F3 78 */	mr r3, r30
/* 8011F0E4 0011C024  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 8011F0E8 0011C028  C0 02 99 04 */	lfs f0, lbl_80517C64@sda21(r2)
/* 8011F0EC 0011C02C  98 04 00 49 */	stb r0, 0x49(r4)
/* 8011F0F0 0011C030  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 8011F0F4 0011C034  D0 24 00 28 */	stfs f1, 0x28(r4)
/* 8011F0F8 0011C038  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 8011F0FC 0011C03C  D0 24 00 30 */	stfs f1, 0x30(r4)
/* 8011F100 0011C040  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 8011F104 0011C044  48 30 CA 61 */	bl registLightObj__8LightMgrFP8LightObj
/* 8011F108 0011C048  38 60 00 58 */	li r3, 0x58
/* 8011F10C 0011C04C  4B F0 4D 99 */	bl __nw__FUl
/* 8011F110 0011C050  7C 60 1B 79 */	or. r0, r3, r3
/* 8011F114 0011C054  41 82 00 38 */	beq .L_8011F14C
/* 8011F118 0011C058  38 00 00 FF */	li r0, 0xff
/* 8011F11C 0011C05C  38 9F 01 08 */	addi r4, r31, 0x108
/* 8011F120 0011C060  98 01 00 08 */	stb r0, 8(r1)
/* 8011F124 0011C064  38 E1 00 0C */	addi r7, r1, 0xc
/* 8011F128 0011C068  38 A0 00 80 */	li r5, 0x80
/* 8011F12C 0011C06C  38 C0 00 04 */	li r6, 4
/* 8011F130 0011C070  98 01 00 09 */	stb r0, 9(r1)
/* 8011F134 0011C074  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011F138 0011C078  98 01 00 0B */	stb r0, 0xb(r1)
/* 8011F13C 0011C07C  80 01 00 08 */	lwz r0, 8(r1)
/* 8011F140 0011C080  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011F144 0011C084  48 30 C3 29 */	bl __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
/* 8011F148 0011C088  7C 60 1B 78 */	mr r0, r3
.L_8011F14C:
/* 8011F14C 0011C08C  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8011F150 0011C090  7F C3 F3 78 */	mr r3, r30
/* 8011F154 0011C094  C0 02 99 28 */	lfs f0, lbl_80517C88@sda21(r2)
/* 8011F158 0011C098  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 8011F15C 0011C09C  D0 04 00 4C */	stfs f0, 0x4c(r4)
/* 8011F160 0011C0A0  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 8011F164 0011C0A4  48 30 CA 01 */	bl registLightObj__8LightMgrFP8LightObj
/* 8011F168 0011C0A8  38 60 00 28 */	li r3, 0x28
/* 8011F16C 0011C0AC  4B F0 4D 39 */	bl __nw__FUl
/* 8011F170 0011C0B0  7C 60 1B 79 */	or. r0, r3, r3
/* 8011F174 0011C0B4  41 82 00 0C */	beq .L_8011F180
/* 8011F178 0011C0B8  48 31 37 D1 */	bl __ct__6FogMgrFv
/* 8011F17C 0011C0BC  7C 60 1B 78 */	mr r0, r3
.L_8011F180:
/* 8011F180 0011C0C0  90 1E 23 44 */	stw r0, 0x2344(r30)
/* 8011F184 0011C0C4  38 00 00 02 */	li r0, 2
/* 8011F188 0011C0C8  7F C3 F3 78 */	mr r3, r30
/* 8011F18C 0011C0CC  80 9E 23 44 */	lwz r4, 0x2344(r30)
/* 8011F190 0011C0D0  90 04 00 18 */	stw r0, 0x18(r4)
/* 8011F194 0011C0D4  80 9E 23 44 */	lwz r4, 0x2344(r30)
/* 8011F198 0011C0D8  48 2F 22 71 */	bl add__5CNodeFP5CNode
/* 8011F19C 0011C0DC  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8011F1A0 0011C0E0  28 03 00 00 */	cmplwi r3, 0
/* 8011F1A4 0011C0E4  41 82 00 0C */	beq .L_8011F1B0
/* 8011F1A8 0011C0E8  38 9E 23 48 */	addi r4, r30, 0x2348
/* 8011F1AC 0011C0EC  48 12 24 BD */	bl setShadowColor__Q24Game9ShadowMgrFP6Color4
.L_8011F1B0:
/* 8011F1B0 0011C0F0  7F C3 F3 78 */	mr r3, r30
/* 8011F1B4 0011C0F4  38 9E 00 5C */	addi r4, r30, 0x5c
/* 8011F1B8 0011C0F8  48 2F 22 51 */	bl add__5CNodeFP5CNode
/* 8011F1BC 0011C0FC  38 60 03 30 */	li r3, 0x330
/* 8011F1C0 0011C100  4B F0 4D ED */	bl __nwa__FUl
/* 8011F1C4 0011C104  3C 80 80 12 */	lis r4, __ct__Q24Game18GameLightEventNodeFv@ha
/* 8011F1C8 0011C108  3C A0 80 12 */	lis r5, __dt__Q24Game18GameLightEventNodeFv@ha
/* 8011F1CC 0011C10C  38 84 F2 AC */	addi r4, r4, __ct__Q24Game18GameLightEventNodeFv@l
/* 8011F1D0 0011C110  38 C0 00 50 */	li r6, 0x50
/* 8011F1D4 0011C114  38 A5 F2 4C */	addi r5, r5, __dt__Q24Game18GameLightEventNodeFv@l
/* 8011F1D8 0011C118  38 E0 00 0A */	li r7, 0xa
/* 8011F1DC 0011C11C  4B FA 28 15 */	bl __construct_new_array
/* 8011F1E0 0011C120  90 7E 23 58 */	stw r3, 0x2358(r30)
/* 8011F1E4 0011C124  3B E0 00 00 */	li r31, 0
/* 8011F1E8 0011C128  3B A0 00 00 */	li r29, 0
/* 8011F1EC 0011C12C  93 FE 23 6C */	stw r31, 0x236c(r30)
/* 8011F1F0 0011C130  93 FE 23 68 */	stw r31, 0x2368(r30)
/* 8011F1F4 0011C134  93 FE 23 64 */	stw r31, 0x2364(r30)
/* 8011F1F8 0011C138  93 FE 23 60 */	stw r31, 0x2360(r30)
/* 8011F1FC 0011C13C  93 FE 23 84 */	stw r31, 0x2384(r30)
/* 8011F200 0011C140  93 FE 23 80 */	stw r31, 0x2380(r30)
/* 8011F204 0011C144  93 FE 23 7C */	stw r31, 0x237c(r30)
/* 8011F208 0011C148  93 FE 23 78 */	stw r31, 0x2378(r30)
.L_8011F20C:
/* 8011F20C 0011C14C  80 1E 23 58 */	lwz r0, 0x2358(r30)
/* 8011F210 0011C150  38 7E 23 74 */	addi r3, r30, 0x2374
/* 8011F214 0011C154  7C 80 FA 14 */	add r4, r0, r31
/* 8011F218 0011C158  48 2F 21 F1 */	bl add__5CNodeFP5CNode
/* 8011F21C 0011C15C  3B BD 00 01 */	addi r29, r29, 1
/* 8011F220 0011C160  3B FF 00 50 */	addi r31, r31, 0x50
/* 8011F224 0011C164  28 1D 00 0A */	cmplwi r29, 0xa
/* 8011F228 0011C168  41 80 FF E4 */	blt .L_8011F20C
/* 8011F22C 0011C16C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011F230 0011C170  7F C3 F3 78 */	mr r3, r30
/* 8011F234 0011C174  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8011F238 0011C178  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8011F23C 0011C17C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8011F240 0011C180  7C 08 03 A6 */	mtlr r0
/* 8011F244 0011C184  38 21 00 30 */	addi r1, r1, 0x30
/* 8011F248 0011C188  4E 80 00 20 */	blr 
.endfn __ct__Q24Game12GameLightMgrFPc

.fn __dt__Q24Game18GameLightEventNodeFv, weak
/* 8011F24C 0011C18C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011F250 0011C190  7C 08 02 A6 */	mflr r0
/* 8011F254 0011C194  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F258 0011C198  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011F25C 0011C19C  7C 9F 23 78 */	mr r31, r4
/* 8011F260 0011C1A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8011F264 0011C1A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8011F268 0011C1A8  41 82 00 28 */	beq .L_8011F290
/* 8011F26C 0011C1AC  3C A0 80 4B */	lis r5, __vt__Q24Game18GameLightEventNode@ha
/* 8011F270 0011C1B0  38 80 00 00 */	li r4, 0
/* 8011F274 0011C1B4  38 05 C4 70 */	addi r0, r5, __vt__Q24Game18GameLightEventNode@l
/* 8011F278 0011C1B8  90 1E 00 00 */	stw r0, 0(r30)
/* 8011F27C 0011C1BC  48 2F 23 0D */	bl __dt__5CNodeFv
/* 8011F280 0011C1C0  7F E0 07 35 */	extsh. r0, r31
/* 8011F284 0011C1C4  40 81 00 0C */	ble .L_8011F290
/* 8011F288 0011C1C8  7F C3 F3 78 */	mr r3, r30
/* 8011F28C 0011C1CC  4B F0 4E 29 */	bl __dl__FPv
.L_8011F290:
/* 8011F290 0011C1D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011F294 0011C1D4  7F C3 F3 78 */	mr r3, r30
/* 8011F298 0011C1D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011F29C 0011C1DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011F2A0 0011C1E0  7C 08 03 A6 */	mtlr r0
/* 8011F2A4 0011C1E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011F2A8 0011C1E8  4E 80 00 20 */	blr 
.endfn __dt__Q24Game18GameLightEventNodeFv

.fn __ct__Q24Game18GameLightEventNodeFv, weak
/* 8011F2AC 0011C1EC  3C A0 80 4F */	lis r5, __vt__5CNode@ha
/* 8011F2B0 0011C1F0  38 C0 00 00 */	li r6, 0
/* 8011F2B4 0011C1F4  38 05 B5 28 */	addi r0, r5, __vt__5CNode@l
/* 8011F2B8 0011C1F8  3C 80 80 4B */	lis r4, __vt__Q24Game18GameLightEventNode@ha
/* 8011F2BC 0011C1FC  90 03 00 00 */	stw r0, 0(r3)
/* 8011F2C0 0011C200  38 A2 99 2C */	addi r5, r2, lbl_80517C8C@sda21
/* 8011F2C4 0011C204  38 04 C4 70 */	addi r0, r4, __vt__Q24Game18GameLightEventNode@l
/* 8011F2C8 0011C208  C0 A2 99 34 */	lfs f5, lbl_80517C94@sda21(r2)
/* 8011F2CC 0011C20C  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8011F2D0 0011C210  C0 82 98 90 */	lfs f4, lbl_80517BF0@sda21(r2)
/* 8011F2D4 0011C214  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8011F2D8 0011C218  C0 62 99 38 */	lfs f3, lbl_80517C98@sda21(r2)
/* 8011F2DC 0011C21C  90 C3 00 08 */	stw r6, 8(r3)
/* 8011F2E0 0011C220  C0 42 98 94 */	lfs f2, lbl_80517BF4@sda21(r2)
/* 8011F2E4 0011C224  90 C3 00 04 */	stw r6, 4(r3)
/* 8011F2E8 0011C228  C0 22 99 3C */	lfs f1, lbl_80517C9C@sda21(r2)
/* 8011F2EC 0011C22C  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8011F2F0 0011C230  C0 02 99 40 */	lfs f0, lbl_80517CA0@sda21(r2)
/* 8011F2F4 0011C234  90 03 00 00 */	stw r0, 0(r3)
/* 8011F2F8 0011C238  98 C3 00 18 */	stb r6, 0x18(r3)
/* 8011F2FC 0011C23C  98 C3 00 19 */	stb r6, 0x19(r3)
/* 8011F300 0011C240  98 C3 00 18 */	stb r6, 0x18(r3)
/* 8011F304 0011C244  88 03 00 18 */	lbz r0, 0x18(r3)
/* 8011F308 0011C248  60 00 00 03 */	ori r0, r0, 3
/* 8011F30C 0011C24C  98 03 00 18 */	stb r0, 0x18(r3)
/* 8011F310 0011C250  98 C3 00 19 */	stb r6, 0x19(r3)
/* 8011F314 0011C254  88 03 00 19 */	lbz r0, 0x19(r3)
/* 8011F318 0011C258  60 00 00 01 */	ori r0, r0, 1
/* 8011F31C 0011C25C  98 03 00 19 */	stb r0, 0x19(r3)
/* 8011F320 0011C260  D0 A3 00 1C */	stfs f5, 0x1c(r3)
/* 8011F324 0011C264  D0 A3 00 20 */	stfs f5, 0x20(r3)
/* 8011F328 0011C268  D0 A3 00 24 */	stfs f5, 0x24(r3)
/* 8011F32C 0011C26C  D0 83 00 28 */	stfs f4, 0x28(r3)
/* 8011F330 0011C270  D0 63 00 2C */	stfs f3, 0x2c(r3)
/* 8011F334 0011C274  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 8011F338 0011C278  D0 23 00 34 */	stfs f1, 0x34(r3)
/* 8011F33C 0011C27C  90 C3 00 38 */	stw r6, 0x38(r3)
/* 8011F340 0011C280  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8011F344 0011C284  4E 80 00 20 */	blr 
.endfn __ct__Q24Game18GameLightEventNodeFv

.fn "__ct__10Vector3<f>Fv", weak
/* 8011F348 0011C288  4E 80 00 20 */	blr 
.endfn "__ct__10Vector3<f>Fv"

.fn __dt__Q24Game19GameLightMgrSettingFv, weak
/* 8011F34C 0011C28C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011F350 0011C290  7C 08 02 A6 */	mflr r0
/* 8011F354 0011C294  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F358 0011C298  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011F35C 0011C29C  7C 9F 23 78 */	mr r31, r4
/* 8011F360 0011C2A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8011F364 0011C2A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8011F368 0011C2A8  41 82 00 A4 */	beq .L_8011F40C
/* 8011F36C 0011C2AC  3C 60 80 4B */	lis r3, __vt__Q24Game19GameLightMgrSetting@ha
/* 8011F370 0011C2B0  34 1E 1D 84 */	addic. r0, r30, 0x1d84
/* 8011F374 0011C2B4  38 03 C4 80 */	addi r0, r3, __vt__Q24Game19GameLightMgrSetting@l
/* 8011F378 0011C2B8  90 1E 00 00 */	stw r0, 0(r30)
/* 8011F37C 0011C2BC  41 82 00 1C */	beq .L_8011F398
/* 8011F380 0011C2C0  3C 80 80 4B */	lis r4, __vt__Q24Game20GameLightSpotSetting@ha
/* 8011F384 0011C2C4  38 7E 1D 84 */	addi r3, r30, 0x1d84
/* 8011F388 0011C2C8  38 04 C4 A0 */	addi r0, r4, __vt__Q24Game20GameLightSpotSetting@l
/* 8011F38C 0011C2CC  38 80 00 00 */	li r4, 0
/* 8011F390 0011C2D0  90 1E 1D 84 */	stw r0, 0x1d84(r30)
/* 8011F394 0011C2D4  48 2F 21 F5 */	bl __dt__5CNodeFv
.L_8011F398:
/* 8011F398 0011C2D8  34 1E 18 2C */	addic. r0, r30, 0x182c
/* 8011F39C 0011C2DC  41 82 00 1C */	beq .L_8011F3B8
/* 8011F3A0 0011C2E0  3C 80 80 4B */	lis r4, __vt__Q24Game20GameLightSpotSetting@ha
/* 8011F3A4 0011C2E4  38 7E 18 2C */	addi r3, r30, 0x182c
/* 8011F3A8 0011C2E8  38 04 C4 A0 */	addi r0, r4, __vt__Q24Game20GameLightSpotSetting@l
/* 8011F3AC 0011C2EC  38 80 00 00 */	li r4, 0
/* 8011F3B0 0011C2F0  90 1E 18 2C */	stw r0, 0x182c(r30)
/* 8011F3B4 0011C2F4  48 2F 21 D5 */	bl __dt__5CNodeFv
.L_8011F3B8:
/* 8011F3B8 0011C2F8  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8011F3BC 0011C2FC  41 82 00 34 */	beq .L_8011F3F0
/* 8011F3C0 0011C300  3C 60 80 4B */	lis r3, __vt__Q24Game19GameLightSunSetting@ha
/* 8011F3C4 0011C304  3C 80 80 12 */	lis r4, __dt__Q24Game20GameLightTimeSettingFv@ha
/* 8011F3C8 0011C308  38 03 C4 B0 */	addi r0, r3, __vt__Q24Game19GameLightSunSetting@l
/* 8011F3CC 0011C30C  38 A0 04 B0 */	li r5, 0x4b0
/* 8011F3D0 0011C310  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8011F3D4 0011C314  38 7E 00 BC */	addi r3, r30, 0xbc
/* 8011F3D8 0011C318  38 84 D5 8C */	addi r4, r4, __dt__Q24Game20GameLightTimeSettingFv@l
/* 8011F3DC 0011C31C  38 C0 00 05 */	li r6, 5
/* 8011F3E0 0011C320  4B FA 23 E5 */	bl __destroy_arr
/* 8011F3E4 0011C324  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8011F3E8 0011C328  38 80 00 00 */	li r4, 0
/* 8011F3EC 0011C32C  48 2F 21 9D */	bl __dt__5CNodeFv
.L_8011F3F0:
/* 8011F3F0 0011C330  7F C3 F3 78 */	mr r3, r30
/* 8011F3F4 0011C334  38 80 00 00 */	li r4, 0
/* 8011F3F8 0011C338  48 2F 21 91 */	bl __dt__5CNodeFv
/* 8011F3FC 0011C33C  7F E0 07 35 */	extsh. r0, r31
/* 8011F400 0011C340  40 81 00 0C */	ble .L_8011F40C
/* 8011F404 0011C344  7F C3 F3 78 */	mr r3, r30
/* 8011F408 0011C348  4B F0 4C AD */	bl __dl__FPv
.L_8011F40C:
/* 8011F40C 0011C34C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011F410 0011C350  7F C3 F3 78 */	mr r3, r30
/* 8011F414 0011C354  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011F418 0011C358  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011F41C 0011C35C  7C 08 03 A6 */	mtlr r0
/* 8011F420 0011C360  38 21 00 10 */	addi r1, r1, 0x10
/* 8011F424 0011C364  4E 80 00 20 */	blr 
.endfn __dt__Q24Game19GameLightMgrSettingFv

.fn __dt__8LightMgrFv, weak
/* 8011F428 0011C368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011F42C 0011C36C  7C 08 02 A6 */	mflr r0
/* 8011F430 0011C370  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F434 0011C374  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011F438 0011C378  7C 9F 23 78 */	mr r31, r4
/* 8011F43C 0011C37C  93 C1 00 08 */	stw r30, 8(r1)
/* 8011F440 0011C380  7C 7E 1B 79 */	or. r30, r3, r3
/* 8011F444 0011C384  41 82 00 58 */	beq .L_8011F49C
/* 8011F448 0011C388  3C 80 80 4F */	lis r4, __vt__8LightMgr@ha
/* 8011F44C 0011C38C  38 7E 00 34 */	addi r3, r30, 0x34
/* 8011F450 0011C390  38 04 BE 94 */	addi r0, r4, __vt__8LightMgr@l
/* 8011F454 0011C394  38 80 FF FF */	li r4, -1
/* 8011F458 0011C398  90 1E 00 00 */	stw r0, 0(r30)
/* 8011F45C 0011C39C  48 2F 21 2D */	bl __dt__5CNodeFv
/* 8011F460 0011C3A0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 8011F464 0011C3A4  41 82 00 1C */	beq .L_8011F480
/* 8011F468 0011C3A8  3C 80 80 4B */	lis r4, __vt__15AmbientLightObj@ha
/* 8011F46C 0011C3AC  38 7E 00 18 */	addi r3, r30, 0x18
/* 8011F470 0011C3B0  38 04 C4 60 */	addi r0, r4, __vt__15AmbientLightObj@l
/* 8011F474 0011C3B4  38 80 00 00 */	li r4, 0
/* 8011F478 0011C3B8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8011F47C 0011C3BC  48 2F 21 0D */	bl __dt__5CNodeFv
.L_8011F480:
/* 8011F480 0011C3C0  7F C3 F3 78 */	mr r3, r30
/* 8011F484 0011C3C4  38 80 00 00 */	li r4, 0
/* 8011F488 0011C3C8  48 2F 21 01 */	bl __dt__5CNodeFv
/* 8011F48C 0011C3CC  7F E0 07 35 */	extsh. r0, r31
/* 8011F490 0011C3D0  40 81 00 0C */	ble .L_8011F49C
/* 8011F494 0011C3D4  7F C3 F3 78 */	mr r3, r30
/* 8011F498 0011C3D8  4B F0 4C 1D */	bl __dl__FPv
.L_8011F49C:
/* 8011F49C 0011C3DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011F4A0 0011C3E0  7F C3 F3 78 */	mr r3, r30
/* 8011F4A4 0011C3E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011F4A8 0011C3E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011F4AC 0011C3EC  7C 08 03 A6 */	mtlr r0
/* 8011F4B0 0011C3F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011F4B4 0011C3F4  4E 80 00 20 */	blr 
.endfn __dt__8LightMgrFv

.fn start__Q24Game12GameLightMgrFv, global
/* 8011F4B8 0011C3F8  38 00 00 00 */	li r0, 0
/* 8011F4BC 0011C3FC  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011F4C0 0011C400  98 03 23 4C */	stb r0, 0x234c(r3)
/* 8011F4C4 0011C404  98 03 23 4D */	stb r0, 0x234d(r3)
/* 8011F4C8 0011C408  A0 03 23 4C */	lhz r0, 0x234c(r3)
/* 8011F4CC 0011C40C  60 00 00 01 */	ori r0, r0, 1
/* 8011F4D0 0011C410  B0 03 23 4C */	sth r0, 0x234c(r3)
/* 8011F4D4 0011C414  D0 03 23 40 */	stfs f0, 0x2340(r3)
/* 8011F4D8 0011C418  D0 03 23 50 */	stfs f0, 0x2350(r3)
/* 8011F4DC 0011C41C  D0 03 23 54 */	stfs f0, 0x2354(r3)
/* 8011F4E0 0011C420  4E 80 00 20 */	blr 
.endfn start__Q24Game12GameLightMgrFv

.fn createEventLight__Q24Game12GameLightMgrFRQ24Game17GameLightEventArg, global
/* 8011F4E4 0011C424  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011F4E8 0011C428  7C 08 02 A6 */	mflr r0
/* 8011F4EC 0011C42C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F4F0 0011C430  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011F4F4 0011C434  93 C1 00 08 */	stw r30, 8(r1)
/* 8011F4F8 0011C438  7C 7E 1B 78 */	mr r30, r3
/* 8011F4FC 0011C43C  83 E3 23 84 */	lwz r31, 0x2384(r3)
/* 8011F500 0011C440  28 1F 00 00 */	cmplwi r31, 0
/* 8011F504 0011C444  41 82 00 80 */	beq .L_8011F584
/* 8011F508 0011C448  88 A4 00 00 */	lbz r5, 0(r4)
/* 8011F50C 0011C44C  38 00 00 01 */	li r0, 1
/* 8011F510 0011C450  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8011F514 0011C454  7F E3 FB 78 */	mr r3, r31
/* 8011F518 0011C458  98 BF 00 18 */	stb r5, 0x18(r31)
/* 8011F51C 0011C45C  88 A4 00 01 */	lbz r5, 1(r4)
/* 8011F520 0011C460  98 BF 00 19 */	stb r5, 0x19(r31)
/* 8011F524 0011C464  C0 24 00 04 */	lfs f1, 4(r4)
/* 8011F528 0011C468  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 8011F52C 0011C46C  C0 24 00 08 */	lfs f1, 8(r4)
/* 8011F530 0011C470  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 8011F534 0011C474  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 8011F538 0011C478  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 8011F53C 0011C47C  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8011F540 0011C480  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 8011F544 0011C484  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 8011F548 0011C488  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 8011F54C 0011C48C  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8011F550 0011C490  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 8011F554 0011C494  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8011F558 0011C498  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 8011F55C 0011C49C  80 A4 00 20 */	lwz r5, 0x20(r4)
/* 8011F560 0011C4A0  90 BF 00 38 */	stw r5, 0x38(r31)
/* 8011F564 0011C4A4  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 8011F568 0011C4A8  D0 3F 00 3C */	stfs f1, 0x3c(r31)
/* 8011F56C 0011C4AC  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 8011F570 0011C4B0  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8011F574 0011C4B4  48 2F 20 5D */	bl del__5CNodeFv
/* 8011F578 0011C4B8  7F E4 FB 78 */	mr r4, r31
/* 8011F57C 0011C4BC  38 7E 23 5C */	addi r3, r30, 0x235c
/* 8011F580 0011C4C0  48 2F 1E 89 */	bl add__5CNodeFP5CNode
.L_8011F584:
/* 8011F584 0011C4C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011F588 0011C4C8  7F E3 FB 78 */	mr r3, r31
/* 8011F58C 0011C4CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011F590 0011C4D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011F594 0011C4D4  7C 08 03 A6 */	mtlr r0
/* 8011F598 0011C4D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011F59C 0011C4DC  4E 80 00 20 */	blr 
.endfn createEventLight__Q24Game12GameLightMgrFRQ24Game17GameLightEventArg

.fn loadParm__Q24Game12GameLightMgrFR6Stream, global
/* 8011F5A0 0011C4E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011F5A4 0011C4E4  7C 08 02 A6 */	mflr r0
/* 8011F5A8 0011C4E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F5AC 0011C4EC  38 00 00 01 */	li r0, 1
/* 8011F5B0 0011C4F0  90 04 00 0C */	stw r0, 0xc(r4)
/* 8011F5B4 0011C4F4  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8011F5B8 0011C4F8  2C 00 00 01 */	cmpwi r0, 1
/* 8011F5BC 0011C4FC  40 82 00 0C */	bne .L_8011F5C8
/* 8011F5C0 0011C500  38 00 00 00 */	li r0, 0
/* 8011F5C4 0011C504  90 04 04 14 */	stw r0, 0x414(r4)
.L_8011F5C8:
/* 8011F5C8 0011C508  85 83 00 5C */	lwzu r12, 0x5c(r3)
/* 8011F5CC 0011C50C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8011F5D0 0011C510  7D 89 03 A6 */	mtctr r12
/* 8011F5D4 0011C514  4E 80 04 21 */	bctrl 
/* 8011F5D8 0011C518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011F5DC 0011C51C  7C 08 03 A6 */	mtlr r0
/* 8011F5E0 0011C520  38 21 00 10 */	addi r1, r1, 0x10
/* 8011F5E4 0011C524  4E 80 00 20 */	blr 
.endfn loadParm__Q24Game12GameLightMgrFR6Stream

.fn calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting, global
/* 8011F5E8 0011C528  94 21 FC E0 */	stwu r1, -0x320(r1)
/* 8011F5EC 0011C52C  7C 08 02 A6 */	mflr r0
/* 8011F5F0 0011C530  C0 C2 98 90 */	lfs f6, lbl_80517BF0@sda21(r2)
/* 8011F5F4 0011C534  90 01 03 24 */	stw r0, 0x324(r1)
/* 8011F5F8 0011C538  93 E1 03 1C */	stw r31, 0x31c(r1)
/* 8011F5FC 0011C53C  7C DF 33 78 */	mr r31, r6
/* 8011F600 0011C540  93 C1 03 18 */	stw r30, 0x318(r1)
/* 8011F604 0011C544  7C BE 2B 78 */	mr r30, r5
/* 8011F608 0011C548  93 A1 03 14 */	stw r29, 0x314(r1)
/* 8011F60C 0011C54C  7C 9D 23 78 */	mr r29, r4
/* 8011F610 0011C550  93 81 03 10 */	stw r28, 0x310(r1)
/* 8011F614 0011C554  7C 7C 1B 78 */	mr r28, r3
/* 8011F618 0011C558  80 63 23 38 */	lwz r3, 0x2338(r3)
/* 8011F61C 0011C55C  C0 23 02 14 */	lfs f1, 0x214(r3)
/* 8011F620 0011C560  FC 01 30 40 */	fcmpo cr0, f1, f6
/* 8011F624 0011C564  40 80 0D 48 */	bge .L_8012036C
/* 8011F628 0011C568  C0 02 99 38 */	lfs f0, lbl_80517C98@sda21(r2)
/* 8011F62C 0011C56C  3C 00 43 30 */	lis r0, 0x4330
/* 8011F630 0011C570  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011F634 0011C574  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011F638 0011C578  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F63C 0011C57C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8011F640 0011C580  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F644 0011C584  D0 1C 23 40 */	stfs f0, 0x2340(r28)
/* 8011F648 0011C588  80 9D 00 3C */	lwz r4, 0x3c(r29)
/* 8011F64C 0011C58C  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8011F650 0011C590  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8011F654 0011C594  80 BD 00 64 */	lwz r5, 0x64(r29)
/* 8011F658 0011C598  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011F65C 0011C59C  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 8011F660 0011C5A0  80 9D 00 8C */	lwz r4, 0x8c(r29)
/* 8011F664 0011C5A4  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 8011F668 0011C5A8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8011F66C 0011C5AC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8011F670 0011C5B0  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8011F674 0011C5B4  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8011F678 0011C5B8  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8011F67C 0011C5BC  EC 60 28 28 */	fsubs f3, f0, f5
/* 8011F680 0011C5C0  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F684 0011C5C4  80 7D 00 B4 */	lwz r3, 0xb4(r29)
/* 8011F688 0011C5C8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8011F68C 0011C5CC  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 8011F690 0011C5D0  54 66 06 3E */	clrlwi r6, r3, 0x18
/* 8011F694 0011C5D4  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8011F698 0011C5D8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F69C 0011C5DC  80 9E 00 64 */	lwz r4, 0x64(r30)
/* 8011F6A0 0011C5E0  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F6A4 0011C5E4  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 8011F6A8 0011C5E8  80 1E 00 B4 */	lwz r0, 0xb4(r30)
/* 8011F6AC 0011C5EC  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8011F6B0 0011C5F0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F6B4 0011C5F4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011F6B8 0011C5F8  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 8011F6BC 0011C5FC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F6C0 0011C600  4C 41 13 82 */	cror 2, 1, 2
/* 8011F6C4 0011C604  40 82 00 0C */	bne .L_8011F6D0
/* 8011F6C8 0011C608  EC 26 10 2A */	fadds f1, f6, f2
/* 8011F6CC 0011C60C  48 00 00 08 */	b .L_8011F6D4
.L_8011F6D0:
/* 8011F6D0 0011C610  EC 22 30 28 */	fsubs f1, f2, f6
.L_8011F6D4:
/* 8011F6D4 0011C614  3C 00 43 30 */	lis r0, 0x4330
/* 8011F6D8 0011C618  FC C0 08 1E */	fctiwz f6, f1
/* 8011F6DC 0011C61C  90 81 00 34 */	stw r4, 0x34(r1)
/* 8011F6E0 0011C620  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F6E4 0011C624  90 01 00 30 */	stw r0, 0x30(r1)
/* 8011F6E8 0011C628  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F6EC 0011C62C  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 8011F6F0 0011C630  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8011F6F4 0011C634  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F6F8 0011C638  90 01 00 38 */	stw r0, 0x38(r1)
/* 8011F6FC 0011C63C  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 8011F700 0011C640  90 A1 00 44 */	stw r5, 0x44(r1)
/* 8011F704 0011C644  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011F708 0011C648  90 01 00 40 */	stw r0, 0x40(r1)
/* 8011F70C 0011C64C  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8011F710 0011C650  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F714 0011C654  D8 C1 00 28 */	stfd f6, 0x28(r1)
/* 8011F718 0011C658  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F71C 0011C65C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8011F720 0011C660  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F724 0011C664  98 01 00 08 */	stb r0, 8(r1)
/* 8011F728 0011C668  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F72C 0011C66C  4C 41 13 82 */	cror 2, 1, 2
/* 8011F730 0011C670  40 82 00 10 */	bne .L_8011F740
/* 8011F734 0011C674  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F738 0011C678  EC 21 10 2A */	fadds f1, f1, f2
/* 8011F73C 0011C67C  48 00 00 0C */	b .L_8011F748
.L_8011F740:
/* 8011F740 0011C680  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F744 0011C684  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011F748:
/* 8011F748 0011C688  3C 00 43 30 */	lis r0, 0x4330
/* 8011F74C 0011C68C  FC C0 08 1E */	fctiwz f6, f1
/* 8011F750 0011C690  90 61 00 54 */	stw r3, 0x54(r1)
/* 8011F754 0011C694  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F758 0011C698  90 01 00 50 */	stw r0, 0x50(r1)
/* 8011F75C 0011C69C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F760 0011C6A0  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 8011F764 0011C6A4  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 8011F768 0011C6A8  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F76C 0011C6AC  90 01 00 58 */	stw r0, 0x58(r1)
/* 8011F770 0011C6B0  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 8011F774 0011C6B4  90 E1 00 64 */	stw r7, 0x64(r1)
/* 8011F778 0011C6B8  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011F77C 0011C6BC  90 01 00 60 */	stw r0, 0x60(r1)
/* 8011F780 0011C6C0  C8 41 00 60 */	lfd f2, 0x60(r1)
/* 8011F784 0011C6C4  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F788 0011C6C8  D8 C1 00 48 */	stfd f6, 0x48(r1)
/* 8011F78C 0011C6CC  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F790 0011C6D0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8011F794 0011C6D4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F798 0011C6D8  98 01 00 09 */	stb r0, 9(r1)
/* 8011F79C 0011C6DC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F7A0 0011C6E0  4C 41 13 82 */	cror 2, 1, 2
/* 8011F7A4 0011C6E4  40 82 00 10 */	bne .L_8011F7B4
/* 8011F7A8 0011C6E8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F7AC 0011C6EC  EC 21 10 2A */	fadds f1, f1, f2
/* 8011F7B0 0011C6F0  48 00 00 0C */	b .L_8011F7BC
.L_8011F7B4:
/* 8011F7B4 0011C6F4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F7B8 0011C6F8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011F7BC:
/* 8011F7BC 0011C6FC  3C 00 43 30 */	lis r0, 0x4330
/* 8011F7C0 0011C700  FC C0 08 1E */	fctiwz f6, f1
/* 8011F7C4 0011C704  91 01 00 74 */	stw r8, 0x74(r1)
/* 8011F7C8 0011C708  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F7CC 0011C70C  90 01 00 70 */	stw r0, 0x70(r1)
/* 8011F7D0 0011C710  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F7D4 0011C714  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 8011F7D8 0011C718  90 C1 00 7C */	stw r6, 0x7c(r1)
/* 8011F7DC 0011C71C  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F7E0 0011C720  90 01 00 78 */	stw r0, 0x78(r1)
/* 8011F7E4 0011C724  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 8011F7E8 0011C728  90 C1 00 84 */	stw r6, 0x84(r1)
/* 8011F7EC 0011C72C  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011F7F0 0011C730  90 01 00 80 */	stw r0, 0x80(r1)
/* 8011F7F4 0011C734  C8 41 00 80 */	lfd f2, 0x80(r1)
/* 8011F7F8 0011C738  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F7FC 0011C73C  D8 C1 00 68 */	stfd f6, 0x68(r1)
/* 8011F800 0011C740  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F804 0011C744  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8011F808 0011C748  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F80C 0011C74C  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011F810 0011C750  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F814 0011C754  4C 41 13 82 */	cror 2, 1, 2
/* 8011F818 0011C758  40 82 00 10 */	bne .L_8011F828
/* 8011F81C 0011C75C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011F820 0011C760  EC 00 10 2A */	fadds f0, f0, f2
/* 8011F824 0011C764  48 00 00 0C */	b .L_8011F830
.L_8011F828:
/* 8011F828 0011C768  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011F82C 0011C76C  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011F830:
/* 8011F830 0011C770  FC 00 00 1E */	fctiwz f0, f0
/* 8011F834 0011C774  3C 00 43 30 */	lis r0, 0x4330
/* 8011F838 0011C778  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 8011F83C 0011C77C  88 C1 00 09 */	lbz r6, 9(r1)
/* 8011F840 0011C780  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 8011F844 0011C784  88 61 00 08 */	lbz r3, 8(r1)
/* 8011F848 0011C788  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8011F84C 0011C78C  90 01 00 90 */	stw r0, 0x90(r1)
/* 8011F850 0011C790  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F854 0011C794  98 81 00 0B */	stb r4, 0xb(r1)
/* 8011F858 0011C798  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F85C 0011C79C  80 BC 00 50 */	lwz r5, 0x50(r28)
/* 8011F860 0011C7A0  90 01 00 98 */	stw r0, 0x98(r1)
/* 8011F864 0011C7A4  98 65 00 34 */	stb r3, 0x34(r5)
/* 8011F868 0011C7A8  98 C5 00 35 */	stb r6, 0x35(r5)
/* 8011F86C 0011C7AC  98 E5 00 36 */	stb r7, 0x36(r5)
/* 8011F870 0011C7B0  98 85 00 37 */	stb r4, 0x37(r5)
/* 8011F874 0011C7B4  80 9D 00 F0 */	lwz r4, 0xf0(r29)
/* 8011F878 0011C7B8  80 7E 00 F0 */	lwz r3, 0xf0(r30)
/* 8011F87C 0011C7BC  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8011F880 0011C7C0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8011F884 0011C7C4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011F888 0011C7C8  80 9D 01 40 */	lwz r4, 0x140(r29)
/* 8011F88C 0011C7CC  90 61 00 94 */	stw r3, 0x94(r1)
/* 8011F890 0011C7D0  80 BD 01 18 */	lwz r5, 0x118(r29)
/* 8011F894 0011C7D4  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8011F898 0011C7D8  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 8011F89C 0011C7DC  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 8011F8A0 0011C7E0  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 8011F8A4 0011C7E4  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 8011F8A8 0011C7E8  90 C1 00 A4 */	stw r6, 0xa4(r1)
/* 8011F8AC 0011C7EC  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F8B0 0011C7F0  EC 60 28 28 */	fsubs f3, f0, f5
/* 8011F8B4 0011C7F4  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 8011F8B8 0011C7F8  C8 41 00 A0 */	lfd f2, 0xa0(r1)
/* 8011F8BC 0011C7FC  80 1D 01 68 */	lwz r0, 0x168(r29)
/* 8011F8C0 0011C800  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F8C4 0011C804  80 9E 01 18 */	lwz r4, 0x118(r30)
/* 8011F8C8 0011C808  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F8CC 0011C80C  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8011F8D0 0011C810  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8011F8D4 0011C814  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8011F8D8 0011C818  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F8DC 0011C81C  80 1E 01 68 */	lwz r0, 0x168(r30)
/* 8011F8E0 0011C820  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011F8E4 0011C824  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 8011F8E8 0011C828  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F8EC 0011C82C  4C 41 13 82 */	cror 2, 1, 2
/* 8011F8F0 0011C830  40 82 00 10 */	bne .L_8011F900
/* 8011F8F4 0011C834  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F8F8 0011C838  EC 21 10 2A */	fadds f1, f1, f2
/* 8011F8FC 0011C83C  48 00 00 0C */	b .L_8011F908
.L_8011F900:
/* 8011F900 0011C840  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F904 0011C844  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011F908:
/* 8011F908 0011C848  3C 00 43 30 */	lis r0, 0x4330
/* 8011F90C 0011C84C  FC C0 08 1E */	fctiwz f6, f1
/* 8011F910 0011C850  90 81 00 B4 */	stw r4, 0xb4(r1)
/* 8011F914 0011C854  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F918 0011C858  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 8011F91C 0011C85C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F920 0011C860  C8 41 00 B0 */	lfd f2, 0xb0(r1)
/* 8011F924 0011C864  90 A1 00 BC */	stw r5, 0xbc(r1)
/* 8011F928 0011C868  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F92C 0011C86C  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8011F930 0011C870  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 8011F934 0011C874  90 A1 00 C4 */	stw r5, 0xc4(r1)
/* 8011F938 0011C878  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011F93C 0011C87C  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8011F940 0011C880  C8 41 00 C0 */	lfd f2, 0xc0(r1)
/* 8011F944 0011C884  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F948 0011C888  D8 C1 00 A8 */	stfd f6, 0xa8(r1)
/* 8011F94C 0011C88C  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F950 0011C890  80 01 00 AC */	lwz r0, 0xac(r1)
/* 8011F954 0011C894  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F958 0011C898  98 01 00 08 */	stb r0, 8(r1)
/* 8011F95C 0011C89C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F960 0011C8A0  4C 41 13 82 */	cror 2, 1, 2
/* 8011F964 0011C8A4  40 82 00 10 */	bne .L_8011F974
/* 8011F968 0011C8A8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F96C 0011C8AC  EC 21 10 2A */	fadds f1, f1, f2
/* 8011F970 0011C8B0  48 00 00 0C */	b .L_8011F97C
.L_8011F974:
/* 8011F974 0011C8B4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F978 0011C8B8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011F97C:
/* 8011F97C 0011C8BC  3C 00 43 30 */	lis r0, 0x4330
/* 8011F980 0011C8C0  FC C0 08 1E */	fctiwz f6, f1
/* 8011F984 0011C8C4  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 8011F988 0011C8C8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011F98C 0011C8CC  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8011F990 0011C8D0  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011F994 0011C8D4  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 8011F998 0011C8D8  90 E1 00 DC */	stw r7, 0xdc(r1)
/* 8011F99C 0011C8DC  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011F9A0 0011C8E0  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 8011F9A4 0011C8E4  C8 41 00 D8 */	lfd f2, 0xd8(r1)
/* 8011F9A8 0011C8E8  90 E1 00 E4 */	stw r7, 0xe4(r1)
/* 8011F9AC 0011C8EC  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011F9B0 0011C8F0  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 8011F9B4 0011C8F4  C8 41 00 E0 */	lfd f2, 0xe0(r1)
/* 8011F9B8 0011C8F8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011F9BC 0011C8FC  D8 C1 00 C8 */	stfd f6, 0xc8(r1)
/* 8011F9C0 0011C900  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011F9C4 0011C904  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 8011F9C8 0011C908  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011F9CC 0011C90C  98 01 00 09 */	stb r0, 9(r1)
/* 8011F9D0 0011C910  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011F9D4 0011C914  4C 41 13 82 */	cror 2, 1, 2
/* 8011F9D8 0011C918  40 82 00 10 */	bne .L_8011F9E8
/* 8011F9DC 0011C91C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F9E0 0011C920  EC 21 10 2A */	fadds f1, f1, f2
/* 8011F9E4 0011C924  48 00 00 0C */	b .L_8011F9F0
.L_8011F9E8:
/* 8011F9E8 0011C928  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011F9EC 0011C92C  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011F9F0:
/* 8011F9F0 0011C930  3C 00 43 30 */	lis r0, 0x4330
/* 8011F9F4 0011C934  FC C0 08 1E */	fctiwz f6, f1
/* 8011F9F8 0011C938  91 01 00 F4 */	stw r8, 0xf4(r1)
/* 8011F9FC 0011C93C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FA00 0011C940  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 8011FA04 0011C944  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FA08 0011C948  C8 41 00 F0 */	lfd f2, 0xf0(r1)
/* 8011FA0C 0011C94C  90 C1 00 FC */	stw r6, 0xfc(r1)
/* 8011FA10 0011C950  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FA14 0011C954  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 8011FA18 0011C958  C8 41 00 F8 */	lfd f2, 0xf8(r1)
/* 8011FA1C 0011C95C  90 C1 01 04 */	stw r6, 0x104(r1)
/* 8011FA20 0011C960  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FA24 0011C964  90 01 01 00 */	stw r0, 0x100(r1)
/* 8011FA28 0011C968  C8 41 01 00 */	lfd f2, 0x100(r1)
/* 8011FA2C 0011C96C  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FA30 0011C970  D8 C1 00 E8 */	stfd f6, 0xe8(r1)
/* 8011FA34 0011C974  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FA38 0011C978  80 01 00 EC */	lwz r0, 0xec(r1)
/* 8011FA3C 0011C97C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FA40 0011C980  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011FA44 0011C984  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FA48 0011C988  4C 41 13 82 */	cror 2, 1, 2
/* 8011FA4C 0011C98C  40 82 00 10 */	bne .L_8011FA5C
/* 8011FA50 0011C990  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011FA54 0011C994  EC 00 10 2A */	fadds f0, f0, f2
/* 8011FA58 0011C998  48 00 00 0C */	b .L_8011FA64
.L_8011FA5C:
/* 8011FA5C 0011C99C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011FA60 0011C9A0  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011FA64:
/* 8011FA64 0011C9A4  FC 00 00 1E */	fctiwz f0, f0
/* 8011FA68 0011C9A8  3C 00 43 30 */	lis r0, 0x4330
/* 8011FA6C 0011C9AC  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 8011FA70 0011C9B0  88 C1 00 09 */	lbz r6, 9(r1)
/* 8011FA74 0011C9B4  D8 01 01 08 */	stfd f0, 0x108(r1)
/* 8011FA78 0011C9B8  88 61 00 08 */	lbz r3, 8(r1)
/* 8011FA7C 0011C9BC  80 81 01 0C */	lwz r4, 0x10c(r1)
/* 8011FA80 0011C9C0  90 01 01 10 */	stw r0, 0x110(r1)
/* 8011FA84 0011C9C4  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FA88 0011C9C8  98 81 00 0B */	stb r4, 0xb(r1)
/* 8011FA8C 0011C9CC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FA90 0011C9D0  80 BC 00 54 */	lwz r5, 0x54(r28)
/* 8011FA94 0011C9D4  90 01 01 18 */	stw r0, 0x118(r1)
/* 8011FA98 0011C9D8  98 65 00 34 */	stb r3, 0x34(r5)
/* 8011FA9C 0011C9DC  98 C5 00 35 */	stb r6, 0x35(r5)
/* 8011FAA0 0011C9E0  98 E5 00 36 */	stb r7, 0x36(r5)
/* 8011FAA4 0011C9E4  98 85 00 37 */	stb r4, 0x37(r5)
/* 8011FAA8 0011C9E8  80 9D 01 A4 */	lwz r4, 0x1a4(r29)
/* 8011FAAC 0011C9EC  80 7E 01 A4 */	lwz r3, 0x1a4(r30)
/* 8011FAB0 0011C9F0  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8011FAB4 0011C9F4  90 01 01 20 */	stw r0, 0x120(r1)
/* 8011FAB8 0011C9F8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011FABC 0011C9FC  80 9D 01 F4 */	lwz r4, 0x1f4(r29)
/* 8011FAC0 0011CA00  90 61 01 14 */	stw r3, 0x114(r1)
/* 8011FAC4 0011CA04  80 BD 01 CC */	lwz r5, 0x1cc(r29)
/* 8011FAC8 0011CA08  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8011FACC 0011CA0C  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 8011FAD0 0011CA10  C8 41 01 10 */	lfd f2, 0x110(r1)
/* 8011FAD4 0011CA14  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 8011FAD8 0011CA18  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 8011FADC 0011CA1C  90 C1 01 24 */	stw r6, 0x124(r1)
/* 8011FAE0 0011CA20  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FAE4 0011CA24  EC 60 28 28 */	fsubs f3, f0, f5
/* 8011FAE8 0011CA28  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 8011FAEC 0011CA2C  C8 41 01 20 */	lfd f2, 0x120(r1)
/* 8011FAF0 0011CA30  80 1D 02 1C */	lwz r0, 0x21c(r29)
/* 8011FAF4 0011CA34  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FAF8 0011CA38  80 9E 01 CC */	lwz r4, 0x1cc(r30)
/* 8011FAFC 0011CA3C  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FB00 0011CA40  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8011FB04 0011CA44  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 8011FB08 0011CA48  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8011FB0C 0011CA4C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FB10 0011CA50  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 8011FB14 0011CA54  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011FB18 0011CA58  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 8011FB1C 0011CA5C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FB20 0011CA60  4C 41 13 82 */	cror 2, 1, 2
/* 8011FB24 0011CA64  40 82 00 10 */	bne .L_8011FB34
/* 8011FB28 0011CA68  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FB2C 0011CA6C  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FB30 0011CA70  48 00 00 0C */	b .L_8011FB3C
.L_8011FB34:
/* 8011FB34 0011CA74  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FB38 0011CA78  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FB3C:
/* 8011FB3C 0011CA7C  3C 00 43 30 */	lis r0, 0x4330
/* 8011FB40 0011CA80  FC C0 08 1E */	fctiwz f6, f1
/* 8011FB44 0011CA84  90 81 01 34 */	stw r4, 0x134(r1)
/* 8011FB48 0011CA88  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FB4C 0011CA8C  90 01 01 30 */	stw r0, 0x130(r1)
/* 8011FB50 0011CA90  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FB54 0011CA94  C8 41 01 30 */	lfd f2, 0x130(r1)
/* 8011FB58 0011CA98  90 A1 01 3C */	stw r5, 0x13c(r1)
/* 8011FB5C 0011CA9C  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FB60 0011CAA0  90 01 01 38 */	stw r0, 0x138(r1)
/* 8011FB64 0011CAA4  C8 41 01 38 */	lfd f2, 0x138(r1)
/* 8011FB68 0011CAA8  90 A1 01 44 */	stw r5, 0x144(r1)
/* 8011FB6C 0011CAAC  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FB70 0011CAB0  90 01 01 40 */	stw r0, 0x140(r1)
/* 8011FB74 0011CAB4  C8 41 01 40 */	lfd f2, 0x140(r1)
/* 8011FB78 0011CAB8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FB7C 0011CABC  D8 C1 01 28 */	stfd f6, 0x128(r1)
/* 8011FB80 0011CAC0  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FB84 0011CAC4  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 8011FB88 0011CAC8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FB8C 0011CACC  98 01 00 08 */	stb r0, 8(r1)
/* 8011FB90 0011CAD0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FB94 0011CAD4  4C 41 13 82 */	cror 2, 1, 2
/* 8011FB98 0011CAD8  40 82 00 10 */	bne .L_8011FBA8
/* 8011FB9C 0011CADC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FBA0 0011CAE0  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FBA4 0011CAE4  48 00 00 0C */	b .L_8011FBB0
.L_8011FBA8:
/* 8011FBA8 0011CAE8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FBAC 0011CAEC  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FBB0:
/* 8011FBB0 0011CAF0  3C 00 43 30 */	lis r0, 0x4330
/* 8011FBB4 0011CAF4  FC C0 08 1E */	fctiwz f6, f1
/* 8011FBB8 0011CAF8  90 61 01 54 */	stw r3, 0x154(r1)
/* 8011FBBC 0011CAFC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FBC0 0011CB00  90 01 01 50 */	stw r0, 0x150(r1)
/* 8011FBC4 0011CB04  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FBC8 0011CB08  C8 41 01 50 */	lfd f2, 0x150(r1)
/* 8011FBCC 0011CB0C  90 E1 01 5C */	stw r7, 0x15c(r1)
/* 8011FBD0 0011CB10  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FBD4 0011CB14  90 01 01 58 */	stw r0, 0x158(r1)
/* 8011FBD8 0011CB18  C8 41 01 58 */	lfd f2, 0x158(r1)
/* 8011FBDC 0011CB1C  90 E1 01 64 */	stw r7, 0x164(r1)
/* 8011FBE0 0011CB20  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FBE4 0011CB24  90 01 01 60 */	stw r0, 0x160(r1)
/* 8011FBE8 0011CB28  C8 41 01 60 */	lfd f2, 0x160(r1)
/* 8011FBEC 0011CB2C  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FBF0 0011CB30  D8 C1 01 48 */	stfd f6, 0x148(r1)
/* 8011FBF4 0011CB34  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FBF8 0011CB38  80 01 01 4C */	lwz r0, 0x14c(r1)
/* 8011FBFC 0011CB3C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FC00 0011CB40  98 01 00 09 */	stb r0, 9(r1)
/* 8011FC04 0011CB44  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FC08 0011CB48  4C 41 13 82 */	cror 2, 1, 2
/* 8011FC0C 0011CB4C  40 82 00 10 */	bne .L_8011FC1C
/* 8011FC10 0011CB50  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FC14 0011CB54  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FC18 0011CB58  48 00 00 0C */	b .L_8011FC24
.L_8011FC1C:
/* 8011FC1C 0011CB5C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FC20 0011CB60  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FC24:
/* 8011FC24 0011CB64  3C 00 43 30 */	lis r0, 0x4330
/* 8011FC28 0011CB68  FC C0 08 1E */	fctiwz f6, f1
/* 8011FC2C 0011CB6C  91 01 01 74 */	stw r8, 0x174(r1)
/* 8011FC30 0011CB70  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FC34 0011CB74  90 01 01 70 */	stw r0, 0x170(r1)
/* 8011FC38 0011CB78  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FC3C 0011CB7C  C8 41 01 70 */	lfd f2, 0x170(r1)
/* 8011FC40 0011CB80  90 C1 01 7C */	stw r6, 0x17c(r1)
/* 8011FC44 0011CB84  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FC48 0011CB88  90 01 01 78 */	stw r0, 0x178(r1)
/* 8011FC4C 0011CB8C  C8 41 01 78 */	lfd f2, 0x178(r1)
/* 8011FC50 0011CB90  90 C1 01 84 */	stw r6, 0x184(r1)
/* 8011FC54 0011CB94  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FC58 0011CB98  90 01 01 80 */	stw r0, 0x180(r1)
/* 8011FC5C 0011CB9C  C8 41 01 80 */	lfd f2, 0x180(r1)
/* 8011FC60 0011CBA0  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FC64 0011CBA4  D8 C1 01 68 */	stfd f6, 0x168(r1)
/* 8011FC68 0011CBA8  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FC6C 0011CBAC  80 01 01 6C */	lwz r0, 0x16c(r1)
/* 8011FC70 0011CBB0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FC74 0011CBB4  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011FC78 0011CBB8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FC7C 0011CBBC  4C 41 13 82 */	cror 2, 1, 2
/* 8011FC80 0011CBC0  40 82 00 10 */	bne .L_8011FC90
/* 8011FC84 0011CBC4  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011FC88 0011CBC8  EC 00 10 2A */	fadds f0, f0, f2
/* 8011FC8C 0011CBCC  48 00 00 0C */	b .L_8011FC98
.L_8011FC90:
/* 8011FC90 0011CBD0  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011FC94 0011CBD4  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011FC98:
/* 8011FC98 0011CBD8  FC 00 00 1E */	fctiwz f0, f0
/* 8011FC9C 0011CBDC  3C 00 43 30 */	lis r0, 0x4330
/* 8011FCA0 0011CBE0  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 8011FCA4 0011CBE4  88 C1 00 09 */	lbz r6, 9(r1)
/* 8011FCA8 0011CBE8  D8 01 01 88 */	stfd f0, 0x188(r1)
/* 8011FCAC 0011CBEC  88 61 00 08 */	lbz r3, 8(r1)
/* 8011FCB0 0011CBF0  80 81 01 8C */	lwz r4, 0x18c(r1)
/* 8011FCB4 0011CBF4  90 01 01 90 */	stw r0, 0x190(r1)
/* 8011FCB8 0011CBF8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FCBC 0011CBFC  98 81 00 0B */	stb r4, 0xb(r1)
/* 8011FCC0 0011CC00  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FCC4 0011CC04  80 BC 00 58 */	lwz r5, 0x58(r28)
/* 8011FCC8 0011CC08  90 01 01 98 */	stw r0, 0x198(r1)
/* 8011FCCC 0011CC0C  98 65 00 34 */	stb r3, 0x34(r5)
/* 8011FCD0 0011CC10  98 C5 00 35 */	stb r6, 0x35(r5)
/* 8011FCD4 0011CC14  98 E5 00 36 */	stb r7, 0x36(r5)
/* 8011FCD8 0011CC18  98 85 00 37 */	stb r4, 0x37(r5)
/* 8011FCDC 0011CC1C  80 9D 02 58 */	lwz r4, 0x258(r29)
/* 8011FCE0 0011CC20  80 7E 02 58 */	lwz r3, 0x258(r30)
/* 8011FCE4 0011CC24  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8011FCE8 0011CC28  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 8011FCEC 0011CC2C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011FCF0 0011CC30  80 9D 02 A8 */	lwz r4, 0x2a8(r29)
/* 8011FCF4 0011CC34  90 61 01 94 */	stw r3, 0x194(r1)
/* 8011FCF8 0011CC38  80 BD 02 80 */	lwz r5, 0x280(r29)
/* 8011FCFC 0011CC3C  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8011FD00 0011CC40  90 C1 01 9C */	stw r6, 0x19c(r1)
/* 8011FD04 0011CC44  C8 41 01 90 */	lfd f2, 0x190(r1)
/* 8011FD08 0011CC48  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 8011FD0C 0011CC4C  C8 01 01 98 */	lfd f0, 0x198(r1)
/* 8011FD10 0011CC50  90 C1 01 A4 */	stw r6, 0x1a4(r1)
/* 8011FD14 0011CC54  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FD18 0011CC58  EC 60 28 28 */	fsubs f3, f0, f5
/* 8011FD1C 0011CC5C  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 8011FD20 0011CC60  C8 41 01 A0 */	lfd f2, 0x1a0(r1)
/* 8011FD24 0011CC64  80 1D 02 D0 */	lwz r0, 0x2d0(r29)
/* 8011FD28 0011CC68  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FD2C 0011CC6C  80 9E 02 80 */	lwz r4, 0x280(r30)
/* 8011FD30 0011CC70  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FD34 0011CC74  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8011FD38 0011CC78  80 7E 02 A8 */	lwz r3, 0x2a8(r30)
/* 8011FD3C 0011CC7C  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8011FD40 0011CC80  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FD44 0011CC84  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 8011FD48 0011CC88  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011FD4C 0011CC8C  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 8011FD50 0011CC90  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FD54 0011CC94  4C 41 13 82 */	cror 2, 1, 2
/* 8011FD58 0011CC98  40 82 00 10 */	bne .L_8011FD68
/* 8011FD5C 0011CC9C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FD60 0011CCA0  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FD64 0011CCA4  48 00 00 0C */	b .L_8011FD70
.L_8011FD68:
/* 8011FD68 0011CCA8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FD6C 0011CCAC  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FD70:
/* 8011FD70 0011CCB0  3C 00 43 30 */	lis r0, 0x4330
/* 8011FD74 0011CCB4  FC C0 08 1E */	fctiwz f6, f1
/* 8011FD78 0011CCB8  90 81 01 B4 */	stw r4, 0x1b4(r1)
/* 8011FD7C 0011CCBC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FD80 0011CCC0  90 01 01 B0 */	stw r0, 0x1b0(r1)
/* 8011FD84 0011CCC4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FD88 0011CCC8  C8 41 01 B0 */	lfd f2, 0x1b0(r1)
/* 8011FD8C 0011CCCC  90 A1 01 BC */	stw r5, 0x1bc(r1)
/* 8011FD90 0011CCD0  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FD94 0011CCD4  90 01 01 B8 */	stw r0, 0x1b8(r1)
/* 8011FD98 0011CCD8  C8 41 01 B8 */	lfd f2, 0x1b8(r1)
/* 8011FD9C 0011CCDC  90 A1 01 C4 */	stw r5, 0x1c4(r1)
/* 8011FDA0 0011CCE0  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FDA4 0011CCE4  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 8011FDA8 0011CCE8  C8 41 01 C0 */	lfd f2, 0x1c0(r1)
/* 8011FDAC 0011CCEC  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FDB0 0011CCF0  D8 C1 01 A8 */	stfd f6, 0x1a8(r1)
/* 8011FDB4 0011CCF4  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FDB8 0011CCF8  80 01 01 AC */	lwz r0, 0x1ac(r1)
/* 8011FDBC 0011CCFC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FDC0 0011CD00  98 01 00 08 */	stb r0, 8(r1)
/* 8011FDC4 0011CD04  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FDC8 0011CD08  4C 41 13 82 */	cror 2, 1, 2
/* 8011FDCC 0011CD0C  40 82 00 10 */	bne .L_8011FDDC
/* 8011FDD0 0011CD10  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FDD4 0011CD14  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FDD8 0011CD18  48 00 00 0C */	b .L_8011FDE4
.L_8011FDDC:
/* 8011FDDC 0011CD1C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FDE0 0011CD20  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FDE4:
/* 8011FDE4 0011CD24  3C 00 43 30 */	lis r0, 0x4330
/* 8011FDE8 0011CD28  FC C0 08 1E */	fctiwz f6, f1
/* 8011FDEC 0011CD2C  90 61 01 D4 */	stw r3, 0x1d4(r1)
/* 8011FDF0 0011CD30  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FDF4 0011CD34  90 01 01 D0 */	stw r0, 0x1d0(r1)
/* 8011FDF8 0011CD38  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FDFC 0011CD3C  C8 41 01 D0 */	lfd f2, 0x1d0(r1)
/* 8011FE00 0011CD40  90 E1 01 DC */	stw r7, 0x1dc(r1)
/* 8011FE04 0011CD44  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FE08 0011CD48  90 01 01 D8 */	stw r0, 0x1d8(r1)
/* 8011FE0C 0011CD4C  C8 41 01 D8 */	lfd f2, 0x1d8(r1)
/* 8011FE10 0011CD50  90 E1 01 E4 */	stw r7, 0x1e4(r1)
/* 8011FE14 0011CD54  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FE18 0011CD58  90 01 01 E0 */	stw r0, 0x1e0(r1)
/* 8011FE1C 0011CD5C  C8 41 01 E0 */	lfd f2, 0x1e0(r1)
/* 8011FE20 0011CD60  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FE24 0011CD64  D8 C1 01 C8 */	stfd f6, 0x1c8(r1)
/* 8011FE28 0011CD68  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FE2C 0011CD6C  80 01 01 CC */	lwz r0, 0x1cc(r1)
/* 8011FE30 0011CD70  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FE34 0011CD74  98 01 00 09 */	stb r0, 9(r1)
/* 8011FE38 0011CD78  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FE3C 0011CD7C  4C 41 13 82 */	cror 2, 1, 2
/* 8011FE40 0011CD80  40 82 00 10 */	bne .L_8011FE50
/* 8011FE44 0011CD84  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FE48 0011CD88  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FE4C 0011CD8C  48 00 00 0C */	b .L_8011FE58
.L_8011FE50:
/* 8011FE50 0011CD90  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FE54 0011CD94  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FE58:
/* 8011FE58 0011CD98  3C 00 43 30 */	lis r0, 0x4330
/* 8011FE5C 0011CD9C  FC C0 08 1E */	fctiwz f6, f1
/* 8011FE60 0011CDA0  91 01 01 F4 */	stw r8, 0x1f4(r1)
/* 8011FE64 0011CDA4  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FE68 0011CDA8  90 01 01 F0 */	stw r0, 0x1f0(r1)
/* 8011FE6C 0011CDAC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FE70 0011CDB0  C8 41 01 F0 */	lfd f2, 0x1f0(r1)
/* 8011FE74 0011CDB4  90 C1 01 FC */	stw r6, 0x1fc(r1)
/* 8011FE78 0011CDB8  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FE7C 0011CDBC  90 01 01 F8 */	stw r0, 0x1f8(r1)
/* 8011FE80 0011CDC0  C8 41 01 F8 */	lfd f2, 0x1f8(r1)
/* 8011FE84 0011CDC4  90 C1 02 04 */	stw r6, 0x204(r1)
/* 8011FE88 0011CDC8  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FE8C 0011CDCC  90 01 02 00 */	stw r0, 0x200(r1)
/* 8011FE90 0011CDD0  C8 41 02 00 */	lfd f2, 0x200(r1)
/* 8011FE94 0011CDD4  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FE98 0011CDD8  D8 C1 01 E8 */	stfd f6, 0x1e8(r1)
/* 8011FE9C 0011CDDC  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FEA0 0011CDE0  80 01 01 EC */	lwz r0, 0x1ec(r1)
/* 8011FEA4 0011CDE4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FEA8 0011CDE8  98 01 00 0A */	stb r0, 0xa(r1)
/* 8011FEAC 0011CDEC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FEB0 0011CDF0  4C 41 13 82 */	cror 2, 1, 2
/* 8011FEB4 0011CDF4  40 82 00 10 */	bne .L_8011FEC4
/* 8011FEB8 0011CDF8  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011FEBC 0011CDFC  EC 00 10 2A */	fadds f0, f0, f2
/* 8011FEC0 0011CE00  48 00 00 0C */	b .L_8011FECC
.L_8011FEC4:
/* 8011FEC4 0011CE04  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8011FEC8 0011CE08  EC 02 00 28 */	fsubs f0, f2, f0
.L_8011FECC:
/* 8011FECC 0011CE0C  FC 00 00 1E */	fctiwz f0, f0
/* 8011FED0 0011CE10  3C 00 43 30 */	lis r0, 0x4330
/* 8011FED4 0011CE14  88 61 00 08 */	lbz r3, 8(r1)
/* 8011FED8 0011CE18  90 01 02 10 */	stw r0, 0x210(r1)
/* 8011FEDC 0011CE1C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FEE0 0011CE20  D8 01 02 08 */	stfd f0, 0x208(r1)
/* 8011FEE4 0011CE24  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FEE8 0011CE28  80 81 02 0C */	lwz r4, 0x20c(r1)
/* 8011FEEC 0011CE2C  90 01 02 18 */	stw r0, 0x218(r1)
/* 8011FEF0 0011CE30  98 81 00 0B */	stb r4, 0xb(r1)
/* 8011FEF4 0011CE34  98 7C 00 30 */	stb r3, 0x30(r28)
/* 8011FEF8 0011CE38  88 61 00 09 */	lbz r3, 9(r1)
/* 8011FEFC 0011CE3C  90 01 02 20 */	stw r0, 0x220(r1)
/* 8011FF00 0011CE40  98 7C 00 31 */	stb r3, 0x31(r28)
/* 8011FF04 0011CE44  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8011FF08 0011CE48  98 1C 00 32 */	stb r0, 0x32(r28)
/* 8011FF0C 0011CE4C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8011FF10 0011CE50  98 1C 00 33 */	stb r0, 0x33(r28)
/* 8011FF14 0011CE54  80 7D 03 0C */	lwz r3, 0x30c(r29)
/* 8011FF18 0011CE58  80 1E 03 0C */	lwz r0, 0x30c(r30)
/* 8011FF1C 0011CE5C  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 8011FF20 0011CE60  80 9D 03 34 */	lwz r4, 0x334(r29)
/* 8011FF24 0011CE64  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8011FF28 0011CE68  90 A1 02 1C */	stw r5, 0x21c(r1)
/* 8011FF2C 0011CE6C  80 7D 03 5C */	lwz r3, 0x35c(r29)
/* 8011FF30 0011CE70  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8011FF34 0011CE74  90 01 02 14 */	stw r0, 0x214(r1)
/* 8011FF38 0011CE78  C8 01 02 18 */	lfd f0, 0x218(r1)
/* 8011FF3C 0011CE7C  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 8011FF40 0011CE80  C8 41 02 10 */	lfd f2, 0x210(r1)
/* 8011FF44 0011CE84  90 A1 02 24 */	stw r5, 0x224(r1)
/* 8011FF48 0011CE88  EC 60 28 28 */	fsubs f3, f0, f5
/* 8011FF4C 0011CE8C  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FF50 0011CE90  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 8011FF54 0011CE94  C8 41 02 20 */	lfd f2, 0x220(r1)
/* 8011FF58 0011CE98  80 BD 03 84 */	lwz r5, 0x384(r29)
/* 8011FF5C 0011CE9C  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FF60 0011CEA0  80 9E 03 34 */	lwz r4, 0x334(r30)
/* 8011FF64 0011CEA4  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FF68 0011CEA8  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8011FF6C 0011CEAC  80 1E 03 84 */	lwz r0, 0x384(r30)
/* 8011FF70 0011CEB0  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 8011FF74 0011CEB4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FF78 0011CEB8  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8011FF7C 0011CEBC  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011FF80 0011CEC0  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 8011FF84 0011CEC4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FF88 0011CEC8  4C 41 13 82 */	cror 2, 1, 2
/* 8011FF8C 0011CECC  40 82 00 10 */	bne .L_8011FF9C
/* 8011FF90 0011CED0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FF94 0011CED4  EC 21 10 2A */	fadds f1, f1, f2
/* 8011FF98 0011CED8  48 00 00 0C */	b .L_8011FFA4
.L_8011FF9C:
/* 8011FF9C 0011CEDC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8011FFA0 0011CEE0  EC 22 08 28 */	fsubs f1, f2, f1
.L_8011FFA4:
/* 8011FFA4 0011CEE4  3C 00 43 30 */	lis r0, 0x4330
/* 8011FFA8 0011CEE8  FC C0 08 1E */	fctiwz f6, f1
/* 8011FFAC 0011CEEC  90 81 02 34 */	stw r4, 0x234(r1)
/* 8011FFB0 0011CEF0  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8011FFB4 0011CEF4  90 01 02 30 */	stw r0, 0x230(r1)
/* 8011FFB8 0011CEF8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8011FFBC 0011CEFC  C8 41 02 30 */	lfd f2, 0x230(r1)
/* 8011FFC0 0011CF00  90 C1 02 3C */	stw r6, 0x23c(r1)
/* 8011FFC4 0011CF04  EC 82 28 28 */	fsubs f4, f2, f5
/* 8011FFC8 0011CF08  90 01 02 38 */	stw r0, 0x238(r1)
/* 8011FFCC 0011CF0C  C8 41 02 38 */	lfd f2, 0x238(r1)
/* 8011FFD0 0011CF10  90 C1 02 44 */	stw r6, 0x244(r1)
/* 8011FFD4 0011CF14  EC 62 28 28 */	fsubs f3, f2, f5
/* 8011FFD8 0011CF18  90 01 02 40 */	stw r0, 0x240(r1)
/* 8011FFDC 0011CF1C  C8 41 02 40 */	lfd f2, 0x240(r1)
/* 8011FFE0 0011CF20  EC 64 18 28 */	fsubs f3, f4, f3
/* 8011FFE4 0011CF24  D8 C1 02 28 */	stfd f6, 0x228(r1)
/* 8011FFE8 0011CF28  EC 42 28 28 */	fsubs f2, f2, f5
/* 8011FFEC 0011CF2C  80 01 02 2C */	lwz r0, 0x22c(r1)
/* 8011FFF0 0011CF30  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8011FFF4 0011CF34  98 01 00 08 */	stb r0, 8(r1)
/* 8011FFF8 0011CF38  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8011FFFC 0011CF3C  4C 41 13 82 */	cror 2, 1, 2
/* 80120000 0011CF40  40 82 00 10 */	bne .L_80120010
/* 80120004 0011CF44  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120008 0011CF48  EC 21 10 2A */	fadds f1, f1, f2
/* 8012000C 0011CF4C  48 00 00 0C */	b .L_80120018
.L_80120010:
/* 80120010 0011CF50  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120014 0011CF54  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120018:
/* 80120018 0011CF58  3C 00 43 30 */	lis r0, 0x4330
/* 8012001C 0011CF5C  FC C0 08 1E */	fctiwz f6, f1
/* 80120020 0011CF60  90 61 02 54 */	stw r3, 0x254(r1)
/* 80120024 0011CF64  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120028 0011CF68  90 01 02 50 */	stw r0, 0x250(r1)
/* 8012002C 0011CF6C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120030 0011CF70  C8 41 02 50 */	lfd f2, 0x250(r1)
/* 80120034 0011CF74  90 E1 02 5C */	stw r7, 0x25c(r1)
/* 80120038 0011CF78  EC 82 28 28 */	fsubs f4, f2, f5
/* 8012003C 0011CF7C  90 01 02 58 */	stw r0, 0x258(r1)
/* 80120040 0011CF80  C8 41 02 58 */	lfd f2, 0x258(r1)
/* 80120044 0011CF84  90 E1 02 64 */	stw r7, 0x264(r1)
/* 80120048 0011CF88  EC 62 28 28 */	fsubs f3, f2, f5
/* 8012004C 0011CF8C  90 01 02 60 */	stw r0, 0x260(r1)
/* 80120050 0011CF90  C8 41 02 60 */	lfd f2, 0x260(r1)
/* 80120054 0011CF94  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120058 0011CF98  D8 C1 02 48 */	stfd f6, 0x248(r1)
/* 8012005C 0011CF9C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120060 0011CFA0  80 01 02 4C */	lwz r0, 0x24c(r1)
/* 80120064 0011CFA4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120068 0011CFA8  98 01 00 09 */	stb r0, 9(r1)
/* 8012006C 0011CFAC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120070 0011CFB0  4C 41 13 82 */	cror 2, 1, 2
/* 80120074 0011CFB4  40 82 00 10 */	bne .L_80120084
/* 80120078 0011CFB8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012007C 0011CFBC  EC 21 10 2A */	fadds f1, f1, f2
/* 80120080 0011CFC0  48 00 00 0C */	b .L_8012008C
.L_80120084:
/* 80120084 0011CFC4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120088 0011CFC8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8012008C:
/* 8012008C 0011CFCC  3C 00 43 30 */	lis r0, 0x4330
/* 80120090 0011CFD0  FC C0 08 1E */	fctiwz f6, f1
/* 80120094 0011CFD4  91 01 02 74 */	stw r8, 0x274(r1)
/* 80120098 0011CFD8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012009C 0011CFDC  90 01 02 70 */	stw r0, 0x270(r1)
/* 801200A0 0011CFE0  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801200A4 0011CFE4  C8 41 02 70 */	lfd f2, 0x270(r1)
/* 801200A8 0011CFE8  90 A1 02 7C */	stw r5, 0x27c(r1)
/* 801200AC 0011CFEC  EC 82 28 28 */	fsubs f4, f2, f5
/* 801200B0 0011CFF0  90 01 02 78 */	stw r0, 0x278(r1)
/* 801200B4 0011CFF4  C8 41 02 78 */	lfd f2, 0x278(r1)
/* 801200B8 0011CFF8  90 A1 02 84 */	stw r5, 0x284(r1)
/* 801200BC 0011CFFC  EC 62 28 28 */	fsubs f3, f2, f5
/* 801200C0 0011D000  90 01 02 80 */	stw r0, 0x280(r1)
/* 801200C4 0011D004  C8 41 02 80 */	lfd f2, 0x280(r1)
/* 801200C8 0011D008  EC 64 18 28 */	fsubs f3, f4, f3
/* 801200CC 0011D00C  D8 C1 02 68 */	stfd f6, 0x268(r1)
/* 801200D0 0011D010  EC 42 28 28 */	fsubs f2, f2, f5
/* 801200D4 0011D014  80 01 02 6C */	lwz r0, 0x26c(r1)
/* 801200D8 0011D018  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801200DC 0011D01C  98 01 00 0A */	stb r0, 0xa(r1)
/* 801200E0 0011D020  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801200E4 0011D024  4C 41 13 82 */	cror 2, 1, 2
/* 801200E8 0011D028  40 82 00 10 */	bne .L_801200F8
/* 801200EC 0011D02C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801200F0 0011D030  EC 00 10 2A */	fadds f0, f0, f2
/* 801200F4 0011D034  48 00 00 0C */	b .L_80120100
.L_801200F8:
/* 801200F8 0011D038  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801200FC 0011D03C  EC 02 00 28 */	fsubs f0, f2, f0
.L_80120100:
/* 80120100 0011D040  FC 00 00 1E */	fctiwz f0, f0
/* 80120104 0011D044  38 81 00 08 */	addi r4, r1, 8
/* 80120108 0011D048  D8 01 02 88 */	stfd f0, 0x288(r1)
/* 8012010C 0011D04C  80 01 02 8C */	lwz r0, 0x28c(r1)
/* 80120110 0011D050  98 01 00 0B */	stb r0, 0xb(r1)
/* 80120114 0011D054  80 7C 23 44 */	lwz r3, 0x2344(r28)
/* 80120118 0011D058  48 31 29 91 */	bl setColor__6FogMgrFR6Color4
/* 8012011C 0011D05C  C0 5D 03 BC */	lfs f2, 0x3bc(r29)
/* 80120120 0011D060  3C 00 43 30 */	lis r0, 0x4330
/* 80120124 0011D064  C0 1E 03 BC */	lfs f0, 0x3bc(r30)
/* 80120128 0011D068  C0 3C 23 40 */	lfs f1, 0x2340(r28)
/* 8012012C 0011D06C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80120130 0011D070  80 7C 23 44 */	lwz r3, 0x2344(r28)
/* 80120134 0011D074  90 01 02 90 */	stw r0, 0x290(r1)
/* 80120138 0011D078  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012013C 0011D07C  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80120140 0011D080  90 01 02 98 */	stw r0, 0x298(r1)
/* 80120144 0011D084  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120148 0011D088  90 01 02 A0 */	stw r0, 0x2a0(r1)
/* 8012014C 0011D08C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80120150 0011D090  C0 7D 03 E4 */	lfs f3, 0x3e4(r29)
/* 80120154 0011D094  C0 1E 03 E4 */	lfs f0, 0x3e4(r30)
/* 80120158 0011D098  C0 5C 23 40 */	lfs f2, 0x2340(r28)
/* 8012015C 0011D09C  EC 00 18 28 */	fsubs f0, f0, f3
/* 80120160 0011D0A0  80 7C 23 44 */	lwz r3, 0x2344(r28)
/* 80120164 0011D0A4  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 80120168 0011D0A8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8012016C 0011D0AC  80 7D 04 20 */	lwz r3, 0x420(r29)
/* 80120170 0011D0B0  80 1E 04 20 */	lwz r0, 0x420(r30)
/* 80120174 0011D0B4  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 80120178 0011D0B8  80 9D 04 48 */	lwz r4, 0x448(r29)
/* 8012017C 0011D0BC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80120180 0011D0C0  90 A1 02 9C */	stw r5, 0x29c(r1)
/* 80120184 0011D0C4  80 7D 04 70 */	lwz r3, 0x470(r29)
/* 80120188 0011D0C8  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8012018C 0011D0CC  90 01 02 94 */	stw r0, 0x294(r1)
/* 80120190 0011D0D0  C8 01 02 98 */	lfd f0, 0x298(r1)
/* 80120194 0011D0D4  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 80120198 0011D0D8  C8 41 02 90 */	lfd f2, 0x290(r1)
/* 8012019C 0011D0DC  90 A1 02 A4 */	stw r5, 0x2a4(r1)
/* 801201A0 0011D0E0  EC 60 28 28 */	fsubs f3, f0, f5
/* 801201A4 0011D0E4  EC 82 28 28 */	fsubs f4, f2, f5
/* 801201A8 0011D0E8  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 801201AC 0011D0EC  C8 41 02 A0 */	lfd f2, 0x2a0(r1)
/* 801201B0 0011D0F0  80 BD 04 98 */	lwz r5, 0x498(r29)
/* 801201B4 0011D0F4  EC 64 18 28 */	fsubs f3, f4, f3
/* 801201B8 0011D0F8  80 9E 04 48 */	lwz r4, 0x448(r30)
/* 801201BC 0011D0FC  EC 42 28 28 */	fsubs f2, f2, f5
/* 801201C0 0011D100  80 7E 04 70 */	lwz r3, 0x470(r30)
/* 801201C4 0011D104  80 1E 04 98 */	lwz r0, 0x498(r30)
/* 801201C8 0011D108  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 801201CC 0011D10C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801201D0 0011D110  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 801201D4 0011D114  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 801201D8 0011D118  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 801201DC 0011D11C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801201E0 0011D120  4C 41 13 82 */	cror 2, 1, 2
/* 801201E4 0011D124  40 82 00 10 */	bne .L_801201F4
/* 801201E8 0011D128  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801201EC 0011D12C  EC 21 10 2A */	fadds f1, f1, f2
/* 801201F0 0011D130  48 00 00 0C */	b .L_801201FC
.L_801201F4:
/* 801201F4 0011D134  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801201F8 0011D138  EC 22 08 28 */	fsubs f1, f2, f1
.L_801201FC:
/* 801201FC 0011D13C  3C 00 43 30 */	lis r0, 0x4330
/* 80120200 0011D140  FC C0 08 1E */	fctiwz f6, f1
/* 80120204 0011D144  90 81 02 B4 */	stw r4, 0x2b4(r1)
/* 80120208 0011D148  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012020C 0011D14C  90 01 02 B0 */	stw r0, 0x2b0(r1)
/* 80120210 0011D150  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120214 0011D154  C8 41 02 B0 */	lfd f2, 0x2b0(r1)
/* 80120218 0011D158  90 C1 02 BC */	stw r6, 0x2bc(r1)
/* 8012021C 0011D15C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120220 0011D160  90 01 02 B8 */	stw r0, 0x2b8(r1)
/* 80120224 0011D164  C8 41 02 B8 */	lfd f2, 0x2b8(r1)
/* 80120228 0011D168  90 C1 02 C4 */	stw r6, 0x2c4(r1)
/* 8012022C 0011D16C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120230 0011D170  90 01 02 C0 */	stw r0, 0x2c0(r1)
/* 80120234 0011D174  C8 41 02 C0 */	lfd f2, 0x2c0(r1)
/* 80120238 0011D178  EC 64 18 28 */	fsubs f3, f4, f3
/* 8012023C 0011D17C  D8 C1 02 A8 */	stfd f6, 0x2a8(r1)
/* 80120240 0011D180  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120244 0011D184  80 01 02 AC */	lwz r0, 0x2ac(r1)
/* 80120248 0011D188  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8012024C 0011D18C  98 1C 23 48 */	stb r0, 0x2348(r28)
/* 80120250 0011D190  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120254 0011D194  4C 41 13 82 */	cror 2, 1, 2
/* 80120258 0011D198  40 82 00 10 */	bne .L_80120268
/* 8012025C 0011D19C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120260 0011D1A0  EC 21 10 2A */	fadds f1, f1, f2
/* 80120264 0011D1A4  48 00 00 0C */	b .L_80120270
.L_80120268:
/* 80120268 0011D1A8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012026C 0011D1AC  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120270:
/* 80120270 0011D1B0  3C 00 43 30 */	lis r0, 0x4330
/* 80120274 0011D1B4  FC C0 08 1E */	fctiwz f6, f1
/* 80120278 0011D1B8  90 61 02 D4 */	stw r3, 0x2d4(r1)
/* 8012027C 0011D1BC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120280 0011D1C0  90 01 02 D0 */	stw r0, 0x2d0(r1)
/* 80120284 0011D1C4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120288 0011D1C8  C8 41 02 D0 */	lfd f2, 0x2d0(r1)
/* 8012028C 0011D1CC  90 E1 02 DC */	stw r7, 0x2dc(r1)
/* 80120290 0011D1D0  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120294 0011D1D4  90 01 02 D8 */	stw r0, 0x2d8(r1)
/* 80120298 0011D1D8  C8 41 02 D8 */	lfd f2, 0x2d8(r1)
/* 8012029C 0011D1DC  90 E1 02 E4 */	stw r7, 0x2e4(r1)
/* 801202A0 0011D1E0  EC 62 28 28 */	fsubs f3, f2, f5
/* 801202A4 0011D1E4  90 01 02 E0 */	stw r0, 0x2e0(r1)
/* 801202A8 0011D1E8  C8 41 02 E0 */	lfd f2, 0x2e0(r1)
/* 801202AC 0011D1EC  EC 64 18 28 */	fsubs f3, f4, f3
/* 801202B0 0011D1F0  D8 C1 02 C8 */	stfd f6, 0x2c8(r1)
/* 801202B4 0011D1F4  EC 42 28 28 */	fsubs f2, f2, f5
/* 801202B8 0011D1F8  80 01 02 CC */	lwz r0, 0x2cc(r1)
/* 801202BC 0011D1FC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801202C0 0011D200  98 1C 23 49 */	stb r0, 0x2349(r28)
/* 801202C4 0011D204  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801202C8 0011D208  4C 41 13 82 */	cror 2, 1, 2
/* 801202CC 0011D20C  40 82 00 10 */	bne .L_801202DC
/* 801202D0 0011D210  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801202D4 0011D214  EC 21 10 2A */	fadds f1, f1, f2
/* 801202D8 0011D218  48 00 00 0C */	b .L_801202E4
.L_801202DC:
/* 801202DC 0011D21C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801202E0 0011D220  EC 22 08 28 */	fsubs f1, f2, f1
.L_801202E4:
/* 801202E4 0011D224  3C 00 43 30 */	lis r0, 0x4330
/* 801202E8 0011D228  FC C0 08 1E */	fctiwz f6, f1
/* 801202EC 0011D22C  91 01 02 F4 */	stw r8, 0x2f4(r1)
/* 801202F0 0011D230  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801202F4 0011D234  90 01 02 F0 */	stw r0, 0x2f0(r1)
/* 801202F8 0011D238  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801202FC 0011D23C  C8 41 02 F0 */	lfd f2, 0x2f0(r1)
/* 80120300 0011D240  90 A1 02 FC */	stw r5, 0x2fc(r1)
/* 80120304 0011D244  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120308 0011D248  90 01 02 F8 */	stw r0, 0x2f8(r1)
/* 8012030C 0011D24C  C8 41 02 F8 */	lfd f2, 0x2f8(r1)
/* 80120310 0011D250  90 A1 03 04 */	stw r5, 0x304(r1)
/* 80120314 0011D254  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120318 0011D258  90 01 03 00 */	stw r0, 0x300(r1)
/* 8012031C 0011D25C  C8 41 03 00 */	lfd f2, 0x300(r1)
/* 80120320 0011D260  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120324 0011D264  D8 C1 02 E8 */	stfd f6, 0x2e8(r1)
/* 80120328 0011D268  EC 42 28 28 */	fsubs f2, f2, f5
/* 8012032C 0011D26C  80 01 02 EC */	lwz r0, 0x2ec(r1)
/* 80120330 0011D270  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120334 0011D274  98 1C 23 4A */	stb r0, 0x234a(r28)
/* 80120338 0011D278  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8012033C 0011D27C  4C 41 13 82 */	cror 2, 1, 2
/* 80120340 0011D280  40 82 00 10 */	bne .L_80120350
/* 80120344 0011D284  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120348 0011D288  EC 00 10 2A */	fadds f0, f0, f2
/* 8012034C 0011D28C  48 00 00 0C */	b .L_80120358
.L_80120350:
/* 80120350 0011D290  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120354 0011D294  EC 02 00 28 */	fsubs f0, f2, f0
.L_80120358:
/* 80120358 0011D298  FC 00 00 1E */	fctiwz f0, f0
/* 8012035C 0011D29C  D8 01 03 08 */	stfd f0, 0x308(r1)
/* 80120360 0011D2A0  80 01 03 0C */	lwz r0, 0x30c(r1)
/* 80120364 0011D2A4  98 1C 23 4B */	stb r0, 0x234b(r28)
/* 80120368 0011D2A8  48 00 0D 48 */	b .L_801210B0
.L_8012036C:
/* 8012036C 0011D2AC  EC 01 30 28 */	fsubs f0, f1, f6
/* 80120370 0011D2B0  3C 00 43 30 */	lis r0, 0x4330
/* 80120374 0011D2B4  C0 22 99 38 */	lfs f1, lbl_80517C98@sda21(r2)
/* 80120378 0011D2B8  90 01 03 08 */	stw r0, 0x308(r1)
/* 8012037C 0011D2BC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80120380 0011D2C0  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120384 0011D2C4  90 01 03 00 */	stw r0, 0x300(r1)
/* 80120388 0011D2C8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8012038C 0011D2CC  D0 1C 23 40 */	stfs f0, 0x2340(r28)
/* 80120390 0011D2D0  80 9E 00 3C */	lwz r4, 0x3c(r30)
/* 80120394 0011D2D4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80120398 0011D2D8  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8012039C 0011D2DC  80 BE 00 64 */	lwz r5, 0x64(r30)
/* 801203A0 0011D2E0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 801203A4 0011D2E4  90 C1 03 04 */	stw r6, 0x304(r1)
/* 801203A8 0011D2E8  80 9E 00 8C */	lwz r4, 0x8c(r30)
/* 801203AC 0011D2EC  54 A7 06 3E */	clrlwi r7, r5, 0x18
/* 801203B0 0011D2F0  90 61 03 0C */	stw r3, 0x30c(r1)
/* 801203B4 0011D2F4  C8 01 03 00 */	lfd f0, 0x300(r1)
/* 801203B8 0011D2F8  54 88 06 3E */	clrlwi r8, r4, 0x18
/* 801203BC 0011D2FC  C8 41 03 08 */	lfd f2, 0x308(r1)
/* 801203C0 0011D300  90 C1 02 FC */	stw r6, 0x2fc(r1)
/* 801203C4 0011D304  EC 60 28 28 */	fsubs f3, f0, f5
/* 801203C8 0011D308  EC 82 28 28 */	fsubs f4, f2, f5
/* 801203CC 0011D30C  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 801203D0 0011D310  90 01 02 F8 */	stw r0, 0x2f8(r1)
/* 801203D4 0011D314  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 801203D8 0011D318  54 66 06 3E */	clrlwi r6, r3, 0x18
/* 801203DC 0011D31C  C8 41 02 F8 */	lfd f2, 0x2f8(r1)
/* 801203E0 0011D320  EC 64 18 28 */	fsubs f3, f4, f3
/* 801203E4 0011D324  80 9F 00 64 */	lwz r4, 0x64(r31)
/* 801203E8 0011D328  EC 42 28 28 */	fsubs f2, f2, f5
/* 801203EC 0011D32C  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 801203F0 0011D330  80 1F 00 B4 */	lwz r0, 0xb4(r31)
/* 801203F4 0011D334  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 801203F8 0011D338  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801203FC 0011D33C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120400 0011D340  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 80120404 0011D344  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120408 0011D348  4C 41 13 82 */	cror 2, 1, 2
/* 8012040C 0011D34C  40 82 00 0C */	bne .L_80120418
/* 80120410 0011D350  EC 26 10 2A */	fadds f1, f6, f2
/* 80120414 0011D354  48 00 00 08 */	b .L_8012041C
.L_80120418:
/* 80120418 0011D358  EC 22 30 28 */	fsubs f1, f2, f6
.L_8012041C:
/* 8012041C 0011D35C  3C 00 43 30 */	lis r0, 0x4330
/* 80120420 0011D360  FC C0 08 1E */	fctiwz f6, f1
/* 80120424 0011D364  90 81 02 EC */	stw r4, 0x2ec(r1)
/* 80120428 0011D368  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012042C 0011D36C  90 01 02 E8 */	stw r0, 0x2e8(r1)
/* 80120430 0011D370  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120434 0011D374  C8 41 02 E8 */	lfd f2, 0x2e8(r1)
/* 80120438 0011D378  90 E1 02 E4 */	stw r7, 0x2e4(r1)
/* 8012043C 0011D37C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120440 0011D380  90 01 02 E0 */	stw r0, 0x2e0(r1)
/* 80120444 0011D384  C8 41 02 E0 */	lfd f2, 0x2e0(r1)
/* 80120448 0011D388  90 E1 02 DC */	stw r7, 0x2dc(r1)
/* 8012044C 0011D38C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120450 0011D390  90 01 02 D8 */	stw r0, 0x2d8(r1)
/* 80120454 0011D394  C8 41 02 D8 */	lfd f2, 0x2d8(r1)
/* 80120458 0011D398  EC 64 18 28 */	fsubs f3, f4, f3
/* 8012045C 0011D39C  D8 C1 02 F0 */	stfd f6, 0x2f0(r1)
/* 80120460 0011D3A0  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120464 0011D3A4  80 01 02 F4 */	lwz r0, 0x2f4(r1)
/* 80120468 0011D3A8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8012046C 0011D3AC  98 01 00 08 */	stb r0, 8(r1)
/* 80120470 0011D3B0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120474 0011D3B4  4C 41 13 82 */	cror 2, 1, 2
/* 80120478 0011D3B8  40 82 00 10 */	bne .L_80120488
/* 8012047C 0011D3BC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120480 0011D3C0  EC 21 10 2A */	fadds f1, f1, f2
/* 80120484 0011D3C4  48 00 00 0C */	b .L_80120490
.L_80120488:
/* 80120488 0011D3C8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012048C 0011D3CC  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120490:
/* 80120490 0011D3D0  3C 00 43 30 */	lis r0, 0x4330
/* 80120494 0011D3D4  FC C0 08 1E */	fctiwz f6, f1
/* 80120498 0011D3D8  90 61 02 CC */	stw r3, 0x2cc(r1)
/* 8012049C 0011D3DC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801204A0 0011D3E0  90 01 02 C8 */	stw r0, 0x2c8(r1)
/* 801204A4 0011D3E4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801204A8 0011D3E8  C8 41 02 C8 */	lfd f2, 0x2c8(r1)
/* 801204AC 0011D3EC  91 01 02 C4 */	stw r8, 0x2c4(r1)
/* 801204B0 0011D3F0  EC 82 28 28 */	fsubs f4, f2, f5
/* 801204B4 0011D3F4  90 01 02 C0 */	stw r0, 0x2c0(r1)
/* 801204B8 0011D3F8  C8 41 02 C0 */	lfd f2, 0x2c0(r1)
/* 801204BC 0011D3FC  91 01 02 BC */	stw r8, 0x2bc(r1)
/* 801204C0 0011D400  EC 62 28 28 */	fsubs f3, f2, f5
/* 801204C4 0011D404  90 01 02 B8 */	stw r0, 0x2b8(r1)
/* 801204C8 0011D408  C8 41 02 B8 */	lfd f2, 0x2b8(r1)
/* 801204CC 0011D40C  EC 64 18 28 */	fsubs f3, f4, f3
/* 801204D0 0011D410  D8 C1 02 D0 */	stfd f6, 0x2d0(r1)
/* 801204D4 0011D414  EC 42 28 28 */	fsubs f2, f2, f5
/* 801204D8 0011D418  80 01 02 D4 */	lwz r0, 0x2d4(r1)
/* 801204DC 0011D41C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801204E0 0011D420  98 01 00 09 */	stb r0, 9(r1)
/* 801204E4 0011D424  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801204E8 0011D428  4C 41 13 82 */	cror 2, 1, 2
/* 801204EC 0011D42C  40 82 00 10 */	bne .L_801204FC
/* 801204F0 0011D430  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801204F4 0011D434  EC 21 10 2A */	fadds f1, f1, f2
/* 801204F8 0011D438  48 00 00 0C */	b .L_80120504
.L_801204FC:
/* 801204FC 0011D43C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120500 0011D440  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120504:
/* 80120504 0011D444  3C 00 43 30 */	lis r0, 0x4330
/* 80120508 0011D448  FC C0 08 1E */	fctiwz f6, f1
/* 8012050C 0011D44C  90 A1 02 AC */	stw r5, 0x2ac(r1)
/* 80120510 0011D450  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120514 0011D454  90 01 02 A8 */	stw r0, 0x2a8(r1)
/* 80120518 0011D458  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8012051C 0011D45C  C8 41 02 A8 */	lfd f2, 0x2a8(r1)
/* 80120520 0011D460  90 C1 02 A4 */	stw r6, 0x2a4(r1)
/* 80120524 0011D464  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120528 0011D468  90 01 02 A0 */	stw r0, 0x2a0(r1)
/* 8012052C 0011D46C  C8 41 02 A0 */	lfd f2, 0x2a0(r1)
/* 80120530 0011D470  90 C1 02 9C */	stw r6, 0x29c(r1)
/* 80120534 0011D474  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120538 0011D478  90 01 02 98 */	stw r0, 0x298(r1)
/* 8012053C 0011D47C  C8 41 02 98 */	lfd f2, 0x298(r1)
/* 80120540 0011D480  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120544 0011D484  D8 C1 02 B0 */	stfd f6, 0x2b0(r1)
/* 80120548 0011D488  EC 42 28 28 */	fsubs f2, f2, f5
/* 8012054C 0011D48C  80 01 02 B4 */	lwz r0, 0x2b4(r1)
/* 80120550 0011D490  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120554 0011D494  98 01 00 0A */	stb r0, 0xa(r1)
/* 80120558 0011D498  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8012055C 0011D49C  4C 41 13 82 */	cror 2, 1, 2
/* 80120560 0011D4A0  40 82 00 10 */	bne .L_80120570
/* 80120564 0011D4A4  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120568 0011D4A8  EC 00 10 2A */	fadds f0, f0, f2
/* 8012056C 0011D4AC  48 00 00 0C */	b .L_80120578
.L_80120570:
/* 80120570 0011D4B0  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120574 0011D4B4  EC 02 00 28 */	fsubs f0, f2, f0
.L_80120578:
/* 80120578 0011D4B8  FC 00 00 1E */	fctiwz f0, f0
/* 8012057C 0011D4BC  3C 00 43 30 */	lis r0, 0x4330
/* 80120580 0011D4C0  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 80120584 0011D4C4  88 C1 00 09 */	lbz r6, 9(r1)
/* 80120588 0011D4C8  D8 01 02 90 */	stfd f0, 0x290(r1)
/* 8012058C 0011D4CC  88 61 00 08 */	lbz r3, 8(r1)
/* 80120590 0011D4D0  80 81 02 94 */	lwz r4, 0x294(r1)
/* 80120594 0011D4D4  90 01 02 88 */	stw r0, 0x288(r1)
/* 80120598 0011D4D8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012059C 0011D4DC  98 81 00 0B */	stb r4, 0xb(r1)
/* 801205A0 0011D4E0  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801205A4 0011D4E4  80 BC 00 50 */	lwz r5, 0x50(r28)
/* 801205A8 0011D4E8  90 01 02 80 */	stw r0, 0x280(r1)
/* 801205AC 0011D4EC  98 65 00 34 */	stb r3, 0x34(r5)
/* 801205B0 0011D4F0  98 C5 00 35 */	stb r6, 0x35(r5)
/* 801205B4 0011D4F4  98 E5 00 36 */	stb r7, 0x36(r5)
/* 801205B8 0011D4F8  98 85 00 37 */	stb r4, 0x37(r5)
/* 801205BC 0011D4FC  80 9E 00 F0 */	lwz r4, 0xf0(r30)
/* 801205C0 0011D500  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 801205C4 0011D504  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 801205C8 0011D508  90 01 02 78 */	stw r0, 0x278(r1)
/* 801205CC 0011D50C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 801205D0 0011D510  80 9E 01 40 */	lwz r4, 0x140(r30)
/* 801205D4 0011D514  90 61 02 8C */	stw r3, 0x28c(r1)
/* 801205D8 0011D518  80 BE 01 18 */	lwz r5, 0x118(r30)
/* 801205DC 0011D51C  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 801205E0 0011D520  90 C1 02 84 */	stw r6, 0x284(r1)
/* 801205E4 0011D524  C8 41 02 88 */	lfd f2, 0x288(r1)
/* 801205E8 0011D528  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 801205EC 0011D52C  C8 01 02 80 */	lfd f0, 0x280(r1)
/* 801205F0 0011D530  90 C1 02 7C */	stw r6, 0x27c(r1)
/* 801205F4 0011D534  EC 82 28 28 */	fsubs f4, f2, f5
/* 801205F8 0011D538  EC 60 28 28 */	fsubs f3, f0, f5
/* 801205FC 0011D53C  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 80120600 0011D540  C8 41 02 78 */	lfd f2, 0x278(r1)
/* 80120604 0011D544  80 1E 01 68 */	lwz r0, 0x168(r30)
/* 80120608 0011D548  EC 64 18 28 */	fsubs f3, f4, f3
/* 8012060C 0011D54C  80 9F 01 18 */	lwz r4, 0x118(r31)
/* 80120610 0011D550  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120614 0011D554  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 80120618 0011D558  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 8012061C 0011D55C  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80120620 0011D560  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120624 0011D564  80 1F 01 68 */	lwz r0, 0x168(r31)
/* 80120628 0011D568  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8012062C 0011D56C  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80120630 0011D570  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120634 0011D574  4C 41 13 82 */	cror 2, 1, 2
/* 80120638 0011D578  40 82 00 10 */	bne .L_80120648
/* 8012063C 0011D57C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120640 0011D580  EC 21 10 2A */	fadds f1, f1, f2
/* 80120644 0011D584  48 00 00 0C */	b .L_80120650
.L_80120648:
/* 80120648 0011D588  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012064C 0011D58C  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120650:
/* 80120650 0011D590  3C 00 43 30 */	lis r0, 0x4330
/* 80120654 0011D594  FC C0 08 1E */	fctiwz f6, f1
/* 80120658 0011D598  90 81 02 6C */	stw r4, 0x26c(r1)
/* 8012065C 0011D59C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120660 0011D5A0  90 01 02 68 */	stw r0, 0x268(r1)
/* 80120664 0011D5A4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120668 0011D5A8  C8 41 02 68 */	lfd f2, 0x268(r1)
/* 8012066C 0011D5AC  90 A1 02 64 */	stw r5, 0x264(r1)
/* 80120670 0011D5B0  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120674 0011D5B4  90 01 02 60 */	stw r0, 0x260(r1)
/* 80120678 0011D5B8  C8 41 02 60 */	lfd f2, 0x260(r1)
/* 8012067C 0011D5BC  90 A1 02 5C */	stw r5, 0x25c(r1)
/* 80120680 0011D5C0  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120684 0011D5C4  90 01 02 58 */	stw r0, 0x258(r1)
/* 80120688 0011D5C8  C8 41 02 58 */	lfd f2, 0x258(r1)
/* 8012068C 0011D5CC  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120690 0011D5D0  D8 C1 02 70 */	stfd f6, 0x270(r1)
/* 80120694 0011D5D4  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120698 0011D5D8  80 01 02 74 */	lwz r0, 0x274(r1)
/* 8012069C 0011D5DC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801206A0 0011D5E0  98 01 00 08 */	stb r0, 8(r1)
/* 801206A4 0011D5E4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801206A8 0011D5E8  4C 41 13 82 */	cror 2, 1, 2
/* 801206AC 0011D5EC  40 82 00 10 */	bne .L_801206BC
/* 801206B0 0011D5F0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801206B4 0011D5F4  EC 21 10 2A */	fadds f1, f1, f2
/* 801206B8 0011D5F8  48 00 00 0C */	b .L_801206C4
.L_801206BC:
/* 801206BC 0011D5FC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801206C0 0011D600  EC 22 08 28 */	fsubs f1, f2, f1
.L_801206C4:
/* 801206C4 0011D604  3C 00 43 30 */	lis r0, 0x4330
/* 801206C8 0011D608  FC C0 08 1E */	fctiwz f6, f1
/* 801206CC 0011D60C  90 61 02 4C */	stw r3, 0x24c(r1)
/* 801206D0 0011D610  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801206D4 0011D614  90 01 02 48 */	stw r0, 0x248(r1)
/* 801206D8 0011D618  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801206DC 0011D61C  C8 41 02 48 */	lfd f2, 0x248(r1)
/* 801206E0 0011D620  90 E1 02 44 */	stw r7, 0x244(r1)
/* 801206E4 0011D624  EC 82 28 28 */	fsubs f4, f2, f5
/* 801206E8 0011D628  90 01 02 40 */	stw r0, 0x240(r1)
/* 801206EC 0011D62C  C8 41 02 40 */	lfd f2, 0x240(r1)
/* 801206F0 0011D630  90 E1 02 3C */	stw r7, 0x23c(r1)
/* 801206F4 0011D634  EC 62 28 28 */	fsubs f3, f2, f5
/* 801206F8 0011D638  90 01 02 38 */	stw r0, 0x238(r1)
/* 801206FC 0011D63C  C8 41 02 38 */	lfd f2, 0x238(r1)
/* 80120700 0011D640  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120704 0011D644  D8 C1 02 50 */	stfd f6, 0x250(r1)
/* 80120708 0011D648  EC 42 28 28 */	fsubs f2, f2, f5
/* 8012070C 0011D64C  80 01 02 54 */	lwz r0, 0x254(r1)
/* 80120710 0011D650  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120714 0011D654  98 01 00 09 */	stb r0, 9(r1)
/* 80120718 0011D658  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8012071C 0011D65C  4C 41 13 82 */	cror 2, 1, 2
/* 80120720 0011D660  40 82 00 10 */	bne .L_80120730
/* 80120724 0011D664  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120728 0011D668  EC 21 10 2A */	fadds f1, f1, f2
/* 8012072C 0011D66C  48 00 00 0C */	b .L_80120738
.L_80120730:
/* 80120730 0011D670  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120734 0011D674  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120738:
/* 80120738 0011D678  3C 00 43 30 */	lis r0, 0x4330
/* 8012073C 0011D67C  FC C0 08 1E */	fctiwz f6, f1
/* 80120740 0011D680  91 01 02 2C */	stw r8, 0x22c(r1)
/* 80120744 0011D684  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120748 0011D688  90 01 02 28 */	stw r0, 0x228(r1)
/* 8012074C 0011D68C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120750 0011D690  C8 41 02 28 */	lfd f2, 0x228(r1)
/* 80120754 0011D694  90 C1 02 24 */	stw r6, 0x224(r1)
/* 80120758 0011D698  EC 82 28 28 */	fsubs f4, f2, f5
/* 8012075C 0011D69C  90 01 02 20 */	stw r0, 0x220(r1)
/* 80120760 0011D6A0  C8 41 02 20 */	lfd f2, 0x220(r1)
/* 80120764 0011D6A4  90 C1 02 1C */	stw r6, 0x21c(r1)
/* 80120768 0011D6A8  EC 62 28 28 */	fsubs f3, f2, f5
/* 8012076C 0011D6AC  90 01 02 18 */	stw r0, 0x218(r1)
/* 80120770 0011D6B0  C8 41 02 18 */	lfd f2, 0x218(r1)
/* 80120774 0011D6B4  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120778 0011D6B8  D8 C1 02 30 */	stfd f6, 0x230(r1)
/* 8012077C 0011D6BC  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120780 0011D6C0  80 01 02 34 */	lwz r0, 0x234(r1)
/* 80120784 0011D6C4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120788 0011D6C8  98 01 00 0A */	stb r0, 0xa(r1)
/* 8012078C 0011D6CC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120790 0011D6D0  4C 41 13 82 */	cror 2, 1, 2
/* 80120794 0011D6D4  40 82 00 10 */	bne .L_801207A4
/* 80120798 0011D6D8  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8012079C 0011D6DC  EC 00 10 2A */	fadds f0, f0, f2
/* 801207A0 0011D6E0  48 00 00 0C */	b .L_801207AC
.L_801207A4:
/* 801207A4 0011D6E4  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801207A8 0011D6E8  EC 02 00 28 */	fsubs f0, f2, f0
.L_801207AC:
/* 801207AC 0011D6EC  FC 00 00 1E */	fctiwz f0, f0
/* 801207B0 0011D6F0  3C 00 43 30 */	lis r0, 0x4330
/* 801207B4 0011D6F4  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 801207B8 0011D6F8  88 C1 00 09 */	lbz r6, 9(r1)
/* 801207BC 0011D6FC  D8 01 02 10 */	stfd f0, 0x210(r1)
/* 801207C0 0011D700  88 61 00 08 */	lbz r3, 8(r1)
/* 801207C4 0011D704  80 81 02 14 */	lwz r4, 0x214(r1)
/* 801207C8 0011D708  90 01 02 08 */	stw r0, 0x208(r1)
/* 801207CC 0011D70C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801207D0 0011D710  98 81 00 0B */	stb r4, 0xb(r1)
/* 801207D4 0011D714  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801207D8 0011D718  80 BC 00 54 */	lwz r5, 0x54(r28)
/* 801207DC 0011D71C  90 01 02 00 */	stw r0, 0x200(r1)
/* 801207E0 0011D720  98 65 00 34 */	stb r3, 0x34(r5)
/* 801207E4 0011D724  98 C5 00 35 */	stb r6, 0x35(r5)
/* 801207E8 0011D728  98 E5 00 36 */	stb r7, 0x36(r5)
/* 801207EC 0011D72C  98 85 00 37 */	stb r4, 0x37(r5)
/* 801207F0 0011D730  80 9E 01 A4 */	lwz r4, 0x1a4(r30)
/* 801207F4 0011D734  80 7F 01 A4 */	lwz r3, 0x1a4(r31)
/* 801207F8 0011D738  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 801207FC 0011D73C  90 01 01 F8 */	stw r0, 0x1f8(r1)
/* 80120800 0011D740  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120804 0011D744  80 9E 01 F4 */	lwz r4, 0x1f4(r30)
/* 80120808 0011D748  90 61 02 0C */	stw r3, 0x20c(r1)
/* 8012080C 0011D74C  80 BE 01 CC */	lwz r5, 0x1cc(r30)
/* 80120810 0011D750  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 80120814 0011D754  90 C1 02 04 */	stw r6, 0x204(r1)
/* 80120818 0011D758  C8 41 02 08 */	lfd f2, 0x208(r1)
/* 8012081C 0011D75C  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80120820 0011D760  C8 01 02 00 */	lfd f0, 0x200(r1)
/* 80120824 0011D764  90 C1 01 FC */	stw r6, 0x1fc(r1)
/* 80120828 0011D768  EC 82 28 28 */	fsubs f4, f2, f5
/* 8012082C 0011D76C  EC 60 28 28 */	fsubs f3, f0, f5
/* 80120830 0011D770  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 80120834 0011D774  C8 41 01 F8 */	lfd f2, 0x1f8(r1)
/* 80120838 0011D778  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 8012083C 0011D77C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120840 0011D780  80 9F 01 CC */	lwz r4, 0x1cc(r31)
/* 80120844 0011D784  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120848 0011D788  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8012084C 0011D78C  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 80120850 0011D790  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80120854 0011D794  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120858 0011D798  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 8012085C 0011D79C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120860 0011D7A0  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80120864 0011D7A4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120868 0011D7A8  4C 41 13 82 */	cror 2, 1, 2
/* 8012086C 0011D7AC  40 82 00 10 */	bne .L_8012087C
/* 80120870 0011D7B0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120874 0011D7B4  EC 21 10 2A */	fadds f1, f1, f2
/* 80120878 0011D7B8  48 00 00 0C */	b .L_80120884
.L_8012087C:
/* 8012087C 0011D7BC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120880 0011D7C0  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120884:
/* 80120884 0011D7C4  3C 00 43 30 */	lis r0, 0x4330
/* 80120888 0011D7C8  FC C0 08 1E */	fctiwz f6, f1
/* 8012088C 0011D7CC  90 81 01 EC */	stw r4, 0x1ec(r1)
/* 80120890 0011D7D0  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120894 0011D7D4  90 01 01 E8 */	stw r0, 0x1e8(r1)
/* 80120898 0011D7D8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8012089C 0011D7DC  C8 41 01 E8 */	lfd f2, 0x1e8(r1)
/* 801208A0 0011D7E0  90 A1 01 E4 */	stw r5, 0x1e4(r1)
/* 801208A4 0011D7E4  EC 82 28 28 */	fsubs f4, f2, f5
/* 801208A8 0011D7E8  90 01 01 E0 */	stw r0, 0x1e0(r1)
/* 801208AC 0011D7EC  C8 41 01 E0 */	lfd f2, 0x1e0(r1)
/* 801208B0 0011D7F0  90 A1 01 DC */	stw r5, 0x1dc(r1)
/* 801208B4 0011D7F4  EC 62 28 28 */	fsubs f3, f2, f5
/* 801208B8 0011D7F8  90 01 01 D8 */	stw r0, 0x1d8(r1)
/* 801208BC 0011D7FC  C8 41 01 D8 */	lfd f2, 0x1d8(r1)
/* 801208C0 0011D800  EC 64 18 28 */	fsubs f3, f4, f3
/* 801208C4 0011D804  D8 C1 01 F0 */	stfd f6, 0x1f0(r1)
/* 801208C8 0011D808  EC 42 28 28 */	fsubs f2, f2, f5
/* 801208CC 0011D80C  80 01 01 F4 */	lwz r0, 0x1f4(r1)
/* 801208D0 0011D810  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801208D4 0011D814  98 01 00 08 */	stb r0, 8(r1)
/* 801208D8 0011D818  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801208DC 0011D81C  4C 41 13 82 */	cror 2, 1, 2
/* 801208E0 0011D820  40 82 00 10 */	bne .L_801208F0
/* 801208E4 0011D824  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801208E8 0011D828  EC 21 10 2A */	fadds f1, f1, f2
/* 801208EC 0011D82C  48 00 00 0C */	b .L_801208F8
.L_801208F0:
/* 801208F0 0011D830  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801208F4 0011D834  EC 22 08 28 */	fsubs f1, f2, f1
.L_801208F8:
/* 801208F8 0011D838  3C 00 43 30 */	lis r0, 0x4330
/* 801208FC 0011D83C  FC C0 08 1E */	fctiwz f6, f1
/* 80120900 0011D840  90 61 01 CC */	stw r3, 0x1cc(r1)
/* 80120904 0011D844  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120908 0011D848  90 01 01 C8 */	stw r0, 0x1c8(r1)
/* 8012090C 0011D84C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120910 0011D850  C8 41 01 C8 */	lfd f2, 0x1c8(r1)
/* 80120914 0011D854  90 E1 01 C4 */	stw r7, 0x1c4(r1)
/* 80120918 0011D858  EC 82 28 28 */	fsubs f4, f2, f5
/* 8012091C 0011D85C  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 80120920 0011D860  C8 41 01 C0 */	lfd f2, 0x1c0(r1)
/* 80120924 0011D864  90 E1 01 BC */	stw r7, 0x1bc(r1)
/* 80120928 0011D868  EC 62 28 28 */	fsubs f3, f2, f5
/* 8012092C 0011D86C  90 01 01 B8 */	stw r0, 0x1b8(r1)
/* 80120930 0011D870  C8 41 01 B8 */	lfd f2, 0x1b8(r1)
/* 80120934 0011D874  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120938 0011D878  D8 C1 01 D0 */	stfd f6, 0x1d0(r1)
/* 8012093C 0011D87C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120940 0011D880  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 80120944 0011D884  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120948 0011D888  98 01 00 09 */	stb r0, 9(r1)
/* 8012094C 0011D88C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120950 0011D890  4C 41 13 82 */	cror 2, 1, 2
/* 80120954 0011D894  40 82 00 10 */	bne .L_80120964
/* 80120958 0011D898  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012095C 0011D89C  EC 21 10 2A */	fadds f1, f1, f2
/* 80120960 0011D8A0  48 00 00 0C */	b .L_8012096C
.L_80120964:
/* 80120964 0011D8A4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120968 0011D8A8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8012096C:
/* 8012096C 0011D8AC  3C 00 43 30 */	lis r0, 0x4330
/* 80120970 0011D8B0  FC C0 08 1E */	fctiwz f6, f1
/* 80120974 0011D8B4  91 01 01 AC */	stw r8, 0x1ac(r1)
/* 80120978 0011D8B8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012097C 0011D8BC  90 01 01 A8 */	stw r0, 0x1a8(r1)
/* 80120980 0011D8C0  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120984 0011D8C4  C8 41 01 A8 */	lfd f2, 0x1a8(r1)
/* 80120988 0011D8C8  90 C1 01 A4 */	stw r6, 0x1a4(r1)
/* 8012098C 0011D8CC  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120990 0011D8D0  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 80120994 0011D8D4  C8 41 01 A0 */	lfd f2, 0x1a0(r1)
/* 80120998 0011D8D8  90 C1 01 9C */	stw r6, 0x19c(r1)
/* 8012099C 0011D8DC  EC 62 28 28 */	fsubs f3, f2, f5
/* 801209A0 0011D8E0  90 01 01 98 */	stw r0, 0x198(r1)
/* 801209A4 0011D8E4  C8 41 01 98 */	lfd f2, 0x198(r1)
/* 801209A8 0011D8E8  EC 64 18 28 */	fsubs f3, f4, f3
/* 801209AC 0011D8EC  D8 C1 01 B0 */	stfd f6, 0x1b0(r1)
/* 801209B0 0011D8F0  EC 42 28 28 */	fsubs f2, f2, f5
/* 801209B4 0011D8F4  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 801209B8 0011D8F8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801209BC 0011D8FC  98 01 00 0A */	stb r0, 0xa(r1)
/* 801209C0 0011D900  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801209C4 0011D904  4C 41 13 82 */	cror 2, 1, 2
/* 801209C8 0011D908  40 82 00 10 */	bne .L_801209D8
/* 801209CC 0011D90C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801209D0 0011D910  EC 00 10 2A */	fadds f0, f0, f2
/* 801209D4 0011D914  48 00 00 0C */	b .L_801209E0
.L_801209D8:
/* 801209D8 0011D918  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801209DC 0011D91C  EC 02 00 28 */	fsubs f0, f2, f0
.L_801209E0:
/* 801209E0 0011D920  FC 00 00 1E */	fctiwz f0, f0
/* 801209E4 0011D924  3C 00 43 30 */	lis r0, 0x4330
/* 801209E8 0011D928  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 801209EC 0011D92C  88 C1 00 09 */	lbz r6, 9(r1)
/* 801209F0 0011D930  D8 01 01 90 */	stfd f0, 0x190(r1)
/* 801209F4 0011D934  88 61 00 08 */	lbz r3, 8(r1)
/* 801209F8 0011D938  80 81 01 94 */	lwz r4, 0x194(r1)
/* 801209FC 0011D93C  90 01 01 88 */	stw r0, 0x188(r1)
/* 80120A00 0011D940  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120A04 0011D944  98 81 00 0B */	stb r4, 0xb(r1)
/* 80120A08 0011D948  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120A0C 0011D94C  80 BC 00 58 */	lwz r5, 0x58(r28)
/* 80120A10 0011D950  90 01 01 80 */	stw r0, 0x180(r1)
/* 80120A14 0011D954  98 65 00 34 */	stb r3, 0x34(r5)
/* 80120A18 0011D958  98 C5 00 35 */	stb r6, 0x35(r5)
/* 80120A1C 0011D95C  98 E5 00 36 */	stb r7, 0x36(r5)
/* 80120A20 0011D960  98 85 00 37 */	stb r4, 0x37(r5)
/* 80120A24 0011D964  80 9E 02 58 */	lwz r4, 0x258(r30)
/* 80120A28 0011D968  80 7F 02 58 */	lwz r3, 0x258(r31)
/* 80120A2C 0011D96C  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80120A30 0011D970  90 01 01 78 */	stw r0, 0x178(r1)
/* 80120A34 0011D974  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120A38 0011D978  80 9E 02 A8 */	lwz r4, 0x2a8(r30)
/* 80120A3C 0011D97C  90 61 01 8C */	stw r3, 0x18c(r1)
/* 80120A40 0011D980  80 BE 02 80 */	lwz r5, 0x280(r30)
/* 80120A44 0011D984  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 80120A48 0011D988  90 C1 01 84 */	stw r6, 0x184(r1)
/* 80120A4C 0011D98C  C8 41 01 88 */	lfd f2, 0x188(r1)
/* 80120A50 0011D990  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80120A54 0011D994  C8 01 01 80 */	lfd f0, 0x180(r1)
/* 80120A58 0011D998  90 C1 01 7C */	stw r6, 0x17c(r1)
/* 80120A5C 0011D99C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120A60 0011D9A0  EC 60 28 28 */	fsubs f3, f0, f5
/* 80120A64 0011D9A4  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 80120A68 0011D9A8  C8 41 01 78 */	lfd f2, 0x178(r1)
/* 80120A6C 0011D9AC  80 1E 02 D0 */	lwz r0, 0x2d0(r30)
/* 80120A70 0011D9B0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120A74 0011D9B4  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80120A78 0011D9B8  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120A7C 0011D9BC  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 80120A80 0011D9C0  80 7F 02 A8 */	lwz r3, 0x2a8(r31)
/* 80120A84 0011D9C4  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80120A88 0011D9C8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120A8C 0011D9CC  80 1F 02 D0 */	lwz r0, 0x2d0(r31)
/* 80120A90 0011D9D0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120A94 0011D9D4  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80120A98 0011D9D8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120A9C 0011D9DC  4C 41 13 82 */	cror 2, 1, 2
/* 80120AA0 0011D9E0  40 82 00 10 */	bne .L_80120AB0
/* 80120AA4 0011D9E4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120AA8 0011D9E8  EC 21 10 2A */	fadds f1, f1, f2
/* 80120AAC 0011D9EC  48 00 00 0C */	b .L_80120AB8
.L_80120AB0:
/* 80120AB0 0011D9F0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120AB4 0011D9F4  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120AB8:
/* 80120AB8 0011D9F8  3C 00 43 30 */	lis r0, 0x4330
/* 80120ABC 0011D9FC  FC C0 08 1E */	fctiwz f6, f1
/* 80120AC0 0011DA00  90 81 01 6C */	stw r4, 0x16c(r1)
/* 80120AC4 0011DA04  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120AC8 0011DA08  90 01 01 68 */	stw r0, 0x168(r1)
/* 80120ACC 0011DA0C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120AD0 0011DA10  C8 41 01 68 */	lfd f2, 0x168(r1)
/* 80120AD4 0011DA14  90 A1 01 64 */	stw r5, 0x164(r1)
/* 80120AD8 0011DA18  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120ADC 0011DA1C  90 01 01 60 */	stw r0, 0x160(r1)
/* 80120AE0 0011DA20  C8 41 01 60 */	lfd f2, 0x160(r1)
/* 80120AE4 0011DA24  90 A1 01 5C */	stw r5, 0x15c(r1)
/* 80120AE8 0011DA28  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120AEC 0011DA2C  90 01 01 58 */	stw r0, 0x158(r1)
/* 80120AF0 0011DA30  C8 41 01 58 */	lfd f2, 0x158(r1)
/* 80120AF4 0011DA34  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120AF8 0011DA38  D8 C1 01 70 */	stfd f6, 0x170(r1)
/* 80120AFC 0011DA3C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120B00 0011DA40  80 01 01 74 */	lwz r0, 0x174(r1)
/* 80120B04 0011DA44  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120B08 0011DA48  98 01 00 08 */	stb r0, 8(r1)
/* 80120B0C 0011DA4C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120B10 0011DA50  4C 41 13 82 */	cror 2, 1, 2
/* 80120B14 0011DA54  40 82 00 10 */	bne .L_80120B24
/* 80120B18 0011DA58  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120B1C 0011DA5C  EC 21 10 2A */	fadds f1, f1, f2
/* 80120B20 0011DA60  48 00 00 0C */	b .L_80120B2C
.L_80120B24:
/* 80120B24 0011DA64  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120B28 0011DA68  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120B2C:
/* 80120B2C 0011DA6C  3C 00 43 30 */	lis r0, 0x4330
/* 80120B30 0011DA70  FC C0 08 1E */	fctiwz f6, f1
/* 80120B34 0011DA74  90 61 01 4C */	stw r3, 0x14c(r1)
/* 80120B38 0011DA78  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120B3C 0011DA7C  90 01 01 48 */	stw r0, 0x148(r1)
/* 80120B40 0011DA80  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120B44 0011DA84  C8 41 01 48 */	lfd f2, 0x148(r1)
/* 80120B48 0011DA88  90 E1 01 44 */	stw r7, 0x144(r1)
/* 80120B4C 0011DA8C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120B50 0011DA90  90 01 01 40 */	stw r0, 0x140(r1)
/* 80120B54 0011DA94  C8 41 01 40 */	lfd f2, 0x140(r1)
/* 80120B58 0011DA98  90 E1 01 3C */	stw r7, 0x13c(r1)
/* 80120B5C 0011DA9C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120B60 0011DAA0  90 01 01 38 */	stw r0, 0x138(r1)
/* 80120B64 0011DAA4  C8 41 01 38 */	lfd f2, 0x138(r1)
/* 80120B68 0011DAA8  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120B6C 0011DAAC  D8 C1 01 50 */	stfd f6, 0x150(r1)
/* 80120B70 0011DAB0  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120B74 0011DAB4  80 01 01 54 */	lwz r0, 0x154(r1)
/* 80120B78 0011DAB8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120B7C 0011DABC  98 01 00 09 */	stb r0, 9(r1)
/* 80120B80 0011DAC0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120B84 0011DAC4  4C 41 13 82 */	cror 2, 1, 2
/* 80120B88 0011DAC8  40 82 00 10 */	bne .L_80120B98
/* 80120B8C 0011DACC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120B90 0011DAD0  EC 21 10 2A */	fadds f1, f1, f2
/* 80120B94 0011DAD4  48 00 00 0C */	b .L_80120BA0
.L_80120B98:
/* 80120B98 0011DAD8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120B9C 0011DADC  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120BA0:
/* 80120BA0 0011DAE0  3C 00 43 30 */	lis r0, 0x4330
/* 80120BA4 0011DAE4  FC C0 08 1E */	fctiwz f6, f1
/* 80120BA8 0011DAE8  91 01 01 2C */	stw r8, 0x12c(r1)
/* 80120BAC 0011DAEC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120BB0 0011DAF0  90 01 01 28 */	stw r0, 0x128(r1)
/* 80120BB4 0011DAF4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120BB8 0011DAF8  C8 41 01 28 */	lfd f2, 0x128(r1)
/* 80120BBC 0011DAFC  90 C1 01 24 */	stw r6, 0x124(r1)
/* 80120BC0 0011DB00  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120BC4 0011DB04  90 01 01 20 */	stw r0, 0x120(r1)
/* 80120BC8 0011DB08  C8 41 01 20 */	lfd f2, 0x120(r1)
/* 80120BCC 0011DB0C  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 80120BD0 0011DB10  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120BD4 0011DB14  90 01 01 18 */	stw r0, 0x118(r1)
/* 80120BD8 0011DB18  C8 41 01 18 */	lfd f2, 0x118(r1)
/* 80120BDC 0011DB1C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120BE0 0011DB20  D8 C1 01 30 */	stfd f6, 0x130(r1)
/* 80120BE4 0011DB24  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120BE8 0011DB28  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80120BEC 0011DB2C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120BF0 0011DB30  98 01 00 0A */	stb r0, 0xa(r1)
/* 80120BF4 0011DB34  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120BF8 0011DB38  4C 41 13 82 */	cror 2, 1, 2
/* 80120BFC 0011DB3C  40 82 00 10 */	bne .L_80120C0C
/* 80120C00 0011DB40  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120C04 0011DB44  EC 00 10 2A */	fadds f0, f0, f2
/* 80120C08 0011DB48  48 00 00 0C */	b .L_80120C14
.L_80120C0C:
/* 80120C0C 0011DB4C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120C10 0011DB50  EC 02 00 28 */	fsubs f0, f2, f0
.L_80120C14:
/* 80120C14 0011DB54  FC 00 00 1E */	fctiwz f0, f0
/* 80120C18 0011DB58  3C 00 43 30 */	lis r0, 0x4330
/* 80120C1C 0011DB5C  88 61 00 08 */	lbz r3, 8(r1)
/* 80120C20 0011DB60  90 01 01 08 */	stw r0, 0x108(r1)
/* 80120C24 0011DB64  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120C28 0011DB68  D8 01 01 10 */	stfd f0, 0x110(r1)
/* 80120C2C 0011DB6C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120C30 0011DB70  80 81 01 14 */	lwz r4, 0x114(r1)
/* 80120C34 0011DB74  90 01 01 00 */	stw r0, 0x100(r1)
/* 80120C38 0011DB78  98 81 00 0B */	stb r4, 0xb(r1)
/* 80120C3C 0011DB7C  98 7C 00 30 */	stb r3, 0x30(r28)
/* 80120C40 0011DB80  88 61 00 09 */	lbz r3, 9(r1)
/* 80120C44 0011DB84  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80120C48 0011DB88  98 7C 00 31 */	stb r3, 0x31(r28)
/* 80120C4C 0011DB8C  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80120C50 0011DB90  98 1C 00 32 */	stb r0, 0x32(r28)
/* 80120C54 0011DB94  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80120C58 0011DB98  98 1C 00 33 */	stb r0, 0x33(r28)
/* 80120C5C 0011DB9C  80 7E 03 0C */	lwz r3, 0x30c(r30)
/* 80120C60 0011DBA0  80 1F 03 0C */	lwz r0, 0x30c(r31)
/* 80120C64 0011DBA4  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 80120C68 0011DBA8  80 9E 03 34 */	lwz r4, 0x334(r30)
/* 80120C6C 0011DBAC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80120C70 0011DBB0  90 A1 01 04 */	stw r5, 0x104(r1)
/* 80120C74 0011DBB4  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80120C78 0011DBB8  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80120C7C 0011DBBC  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80120C80 0011DBC0  C8 01 01 00 */	lfd f0, 0x100(r1)
/* 80120C84 0011DBC4  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 80120C88 0011DBC8  C8 41 01 08 */	lfd f2, 0x108(r1)
/* 80120C8C 0011DBCC  90 A1 00 FC */	stw r5, 0xfc(r1)
/* 80120C90 0011DBD0  EC 60 28 28 */	fsubs f3, f0, f5
/* 80120C94 0011DBD4  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120C98 0011DBD8  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 80120C9C 0011DBDC  C8 41 00 F8 */	lfd f2, 0xf8(r1)
/* 80120CA0 0011DBE0  80 BE 03 84 */	lwz r5, 0x384(r30)
/* 80120CA4 0011DBE4  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120CA8 0011DBE8  80 9F 03 34 */	lwz r4, 0x334(r31)
/* 80120CAC 0011DBEC  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120CB0 0011DBF0  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 80120CB4 0011DBF4  80 1F 03 84 */	lwz r0, 0x384(r31)
/* 80120CB8 0011DBF8  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80120CBC 0011DBFC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120CC0 0011DC00  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80120CC4 0011DC04  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120CC8 0011DC08  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80120CCC 0011DC0C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120CD0 0011DC10  4C 41 13 82 */	cror 2, 1, 2
/* 80120CD4 0011DC14  40 82 00 10 */	bne .L_80120CE4
/* 80120CD8 0011DC18  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120CDC 0011DC1C  EC 21 10 2A */	fadds f1, f1, f2
/* 80120CE0 0011DC20  48 00 00 0C */	b .L_80120CEC
.L_80120CE4:
/* 80120CE4 0011DC24  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120CE8 0011DC28  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120CEC:
/* 80120CEC 0011DC2C  3C 00 43 30 */	lis r0, 0x4330
/* 80120CF0 0011DC30  FC C0 08 1E */	fctiwz f6, f1
/* 80120CF4 0011DC34  90 81 00 EC */	stw r4, 0xec(r1)
/* 80120CF8 0011DC38  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120CFC 0011DC3C  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80120D00 0011DC40  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120D04 0011DC44  C8 41 00 E8 */	lfd f2, 0xe8(r1)
/* 80120D08 0011DC48  90 C1 00 E4 */	stw r6, 0xe4(r1)
/* 80120D0C 0011DC4C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120D10 0011DC50  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80120D14 0011DC54  C8 41 00 E0 */	lfd f2, 0xe0(r1)
/* 80120D18 0011DC58  90 C1 00 DC */	stw r6, 0xdc(r1)
/* 80120D1C 0011DC5C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120D20 0011DC60  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 80120D24 0011DC64  C8 41 00 D8 */	lfd f2, 0xd8(r1)
/* 80120D28 0011DC68  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120D2C 0011DC6C  D8 C1 00 F0 */	stfd f6, 0xf0(r1)
/* 80120D30 0011DC70  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120D34 0011DC74  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80120D38 0011DC78  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120D3C 0011DC7C  98 01 00 08 */	stb r0, 8(r1)
/* 80120D40 0011DC80  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120D44 0011DC84  4C 41 13 82 */	cror 2, 1, 2
/* 80120D48 0011DC88  40 82 00 10 */	bne .L_80120D58
/* 80120D4C 0011DC8C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120D50 0011DC90  EC 21 10 2A */	fadds f1, f1, f2
/* 80120D54 0011DC94  48 00 00 0C */	b .L_80120D60
.L_80120D58:
/* 80120D58 0011DC98  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120D5C 0011DC9C  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120D60:
/* 80120D60 0011DCA0  3C 00 43 30 */	lis r0, 0x4330
/* 80120D64 0011DCA4  FC C0 08 1E */	fctiwz f6, f1
/* 80120D68 0011DCA8  90 61 00 CC */	stw r3, 0xcc(r1)
/* 80120D6C 0011DCAC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120D70 0011DCB0  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80120D74 0011DCB4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120D78 0011DCB8  C8 41 00 C8 */	lfd f2, 0xc8(r1)
/* 80120D7C 0011DCBC  90 E1 00 C4 */	stw r7, 0xc4(r1)
/* 80120D80 0011DCC0  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120D84 0011DCC4  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80120D88 0011DCC8  C8 41 00 C0 */	lfd f2, 0xc0(r1)
/* 80120D8C 0011DCCC  90 E1 00 BC */	stw r7, 0xbc(r1)
/* 80120D90 0011DCD0  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120D94 0011DCD4  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80120D98 0011DCD8  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 80120D9C 0011DCDC  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120DA0 0011DCE0  D8 C1 00 D0 */	stfd f6, 0xd0(r1)
/* 80120DA4 0011DCE4  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120DA8 0011DCE8  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80120DAC 0011DCEC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120DB0 0011DCF0  98 01 00 09 */	stb r0, 9(r1)
/* 80120DB4 0011DCF4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120DB8 0011DCF8  4C 41 13 82 */	cror 2, 1, 2
/* 80120DBC 0011DCFC  40 82 00 10 */	bne .L_80120DCC
/* 80120DC0 0011DD00  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120DC4 0011DD04  EC 21 10 2A */	fadds f1, f1, f2
/* 80120DC8 0011DD08  48 00 00 0C */	b .L_80120DD4
.L_80120DCC:
/* 80120DCC 0011DD0C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120DD0 0011DD10  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120DD4:
/* 80120DD4 0011DD14  3C 00 43 30 */	lis r0, 0x4330
/* 80120DD8 0011DD18  FC C0 08 1E */	fctiwz f6, f1
/* 80120DDC 0011DD1C  91 01 00 AC */	stw r8, 0xac(r1)
/* 80120DE0 0011DD20  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120DE4 0011DD24  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80120DE8 0011DD28  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120DEC 0011DD2C  C8 41 00 A8 */	lfd f2, 0xa8(r1)
/* 80120DF0 0011DD30  90 A1 00 A4 */	stw r5, 0xa4(r1)
/* 80120DF4 0011DD34  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120DF8 0011DD38  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80120DFC 0011DD3C  C8 41 00 A0 */	lfd f2, 0xa0(r1)
/* 80120E00 0011DD40  90 A1 00 9C */	stw r5, 0x9c(r1)
/* 80120E04 0011DD44  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120E08 0011DD48  90 01 00 98 */	stw r0, 0x98(r1)
/* 80120E0C 0011DD4C  C8 41 00 98 */	lfd f2, 0x98(r1)
/* 80120E10 0011DD50  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120E14 0011DD54  D8 C1 00 B0 */	stfd f6, 0xb0(r1)
/* 80120E18 0011DD58  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120E1C 0011DD5C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80120E20 0011DD60  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120E24 0011DD64  98 01 00 0A */	stb r0, 0xa(r1)
/* 80120E28 0011DD68  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120E2C 0011DD6C  4C 41 13 82 */	cror 2, 1, 2
/* 80120E30 0011DD70  40 82 00 10 */	bne .L_80120E40
/* 80120E34 0011DD74  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120E38 0011DD78  EC 00 10 2A */	fadds f0, f0, f2
/* 80120E3C 0011DD7C  48 00 00 0C */	b .L_80120E48
.L_80120E40:
/* 80120E40 0011DD80  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80120E44 0011DD84  EC 02 00 28 */	fsubs f0, f2, f0
.L_80120E48:
/* 80120E48 0011DD88  FC 00 00 1E */	fctiwz f0, f0
/* 80120E4C 0011DD8C  38 81 00 08 */	addi r4, r1, 8
/* 80120E50 0011DD90  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 80120E54 0011DD94  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80120E58 0011DD98  98 01 00 0B */	stb r0, 0xb(r1)
/* 80120E5C 0011DD9C  80 7C 23 44 */	lwz r3, 0x2344(r28)
/* 80120E60 0011DDA0  48 31 1C 49 */	bl setColor__6FogMgrFR6Color4
/* 80120E64 0011DDA4  C0 5E 03 BC */	lfs f2, 0x3bc(r30)
/* 80120E68 0011DDA8  3C 00 43 30 */	lis r0, 0x4330
/* 80120E6C 0011DDAC  C0 1F 03 BC */	lfs f0, 0x3bc(r31)
/* 80120E70 0011DDB0  C0 3C 23 40 */	lfs f1, 0x2340(r28)
/* 80120E74 0011DDB4  EC 00 10 28 */	fsubs f0, f0, f2
/* 80120E78 0011DDB8  80 7C 23 44 */	lwz r3, 0x2344(r28)
/* 80120E7C 0011DDBC  90 01 00 88 */	stw r0, 0x88(r1)
/* 80120E80 0011DDC0  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120E84 0011DDC4  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80120E88 0011DDC8  90 01 00 80 */	stw r0, 0x80(r1)
/* 80120E8C 0011DDCC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120E90 0011DDD0  90 01 00 78 */	stw r0, 0x78(r1)
/* 80120E94 0011DDD4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80120E98 0011DDD8  C0 7E 03 E4 */	lfs f3, 0x3e4(r30)
/* 80120E9C 0011DDDC  C0 1F 03 E4 */	lfs f0, 0x3e4(r31)
/* 80120EA0 0011DDE0  C0 5C 23 40 */	lfs f2, 0x2340(r28)
/* 80120EA4 0011DDE4  EC 00 18 28 */	fsubs f0, f0, f3
/* 80120EA8 0011DDE8  80 7C 23 44 */	lwz r3, 0x2344(r28)
/* 80120EAC 0011DDEC  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 80120EB0 0011DDF0  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80120EB4 0011DDF4  80 7E 04 20 */	lwz r3, 0x420(r30)
/* 80120EB8 0011DDF8  80 1F 04 20 */	lwz r0, 0x420(r31)
/* 80120EBC 0011DDFC  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 80120EC0 0011DE00  80 9E 04 48 */	lwz r4, 0x448(r30)
/* 80120EC4 0011DE04  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80120EC8 0011DE08  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80120ECC 0011DE0C  80 7E 04 70 */	lwz r3, 0x470(r30)
/* 80120ED0 0011DE10  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80120ED4 0011DE14  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80120ED8 0011DE18  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80120EDC 0011DE1C  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 80120EE0 0011DE20  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 80120EE4 0011DE24  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80120EE8 0011DE28  EC 60 28 28 */	fsubs f3, f0, f5
/* 80120EEC 0011DE2C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120EF0 0011DE30  C0 1C 23 40 */	lfs f0, 0x2340(r28)
/* 80120EF4 0011DE34  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80120EF8 0011DE38  80 BE 04 98 */	lwz r5, 0x498(r30)
/* 80120EFC 0011DE3C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120F00 0011DE40  80 9F 04 48 */	lwz r4, 0x448(r31)
/* 80120F04 0011DE44  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120F08 0011DE48  80 7F 04 70 */	lwz r3, 0x470(r31)
/* 80120F0C 0011DE4C  80 1F 04 98 */	lwz r0, 0x498(r31)
/* 80120F10 0011DE50  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80120F14 0011DE54  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120F18 0011DE58  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80120F1C 0011DE5C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80120F20 0011DE60  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80120F24 0011DE64  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120F28 0011DE68  4C 41 13 82 */	cror 2, 1, 2
/* 80120F2C 0011DE6C  40 82 00 10 */	bne .L_80120F3C
/* 80120F30 0011DE70  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120F34 0011DE74  EC 21 10 2A */	fadds f1, f1, f2
/* 80120F38 0011DE78  48 00 00 0C */	b .L_80120F44
.L_80120F3C:
/* 80120F3C 0011DE7C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120F40 0011DE80  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120F44:
/* 80120F44 0011DE84  3C 00 43 30 */	lis r0, 0x4330
/* 80120F48 0011DE88  FC C0 08 1E */	fctiwz f6, f1
/* 80120F4C 0011DE8C  90 81 00 6C */	stw r4, 0x6c(r1)
/* 80120F50 0011DE90  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120F54 0011DE94  90 01 00 68 */	stw r0, 0x68(r1)
/* 80120F58 0011DE98  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120F5C 0011DE9C  C8 41 00 68 */	lfd f2, 0x68(r1)
/* 80120F60 0011DEA0  90 C1 00 64 */	stw r6, 0x64(r1)
/* 80120F64 0011DEA4  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120F68 0011DEA8  90 01 00 60 */	stw r0, 0x60(r1)
/* 80120F6C 0011DEAC  C8 41 00 60 */	lfd f2, 0x60(r1)
/* 80120F70 0011DEB0  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80120F74 0011DEB4  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120F78 0011DEB8  90 01 00 58 */	stw r0, 0x58(r1)
/* 80120F7C 0011DEBC  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 80120F80 0011DEC0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120F84 0011DEC4  D8 C1 00 70 */	stfd f6, 0x70(r1)
/* 80120F88 0011DEC8  EC 42 28 28 */	fsubs f2, f2, f5
/* 80120F8C 0011DECC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80120F90 0011DED0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80120F94 0011DED4  98 1C 23 48 */	stb r0, 0x2348(r28)
/* 80120F98 0011DED8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80120F9C 0011DEDC  4C 41 13 82 */	cror 2, 1, 2
/* 80120FA0 0011DEE0  40 82 00 10 */	bne .L_80120FB0
/* 80120FA4 0011DEE4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120FA8 0011DEE8  EC 21 10 2A */	fadds f1, f1, f2
/* 80120FAC 0011DEEC  48 00 00 0C */	b .L_80120FB8
.L_80120FB0:
/* 80120FB0 0011DEF0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80120FB4 0011DEF4  EC 22 08 28 */	fsubs f1, f2, f1
.L_80120FB8:
/* 80120FB8 0011DEF8  3C 00 43 30 */	lis r0, 0x4330
/* 80120FBC 0011DEFC  FC C0 08 1E */	fctiwz f6, f1
/* 80120FC0 0011DF00  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80120FC4 0011DF04  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80120FC8 0011DF08  90 01 00 48 */	stw r0, 0x48(r1)
/* 80120FCC 0011DF0C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80120FD0 0011DF10  C8 41 00 48 */	lfd f2, 0x48(r1)
/* 80120FD4 0011DF14  90 E1 00 44 */	stw r7, 0x44(r1)
/* 80120FD8 0011DF18  EC 82 28 28 */	fsubs f4, f2, f5
/* 80120FDC 0011DF1C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80120FE0 0011DF20  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 80120FE4 0011DF24  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 80120FE8 0011DF28  EC 62 28 28 */	fsubs f3, f2, f5
/* 80120FEC 0011DF2C  90 01 00 38 */	stw r0, 0x38(r1)
/* 80120FF0 0011DF30  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 80120FF4 0011DF34  EC 64 18 28 */	fsubs f3, f4, f3
/* 80120FF8 0011DF38  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80120FFC 0011DF3C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121000 0011DF40  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80121004 0011DF44  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121008 0011DF48  98 1C 23 49 */	stb r0, 0x2349(r28)
/* 8012100C 0011DF4C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121010 0011DF50  4C 41 13 82 */	cror 2, 1, 2
/* 80121014 0011DF54  40 82 00 10 */	bne .L_80121024
/* 80121018 0011DF58  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012101C 0011DF5C  EC 21 10 2A */	fadds f1, f1, f2
/* 80121020 0011DF60  48 00 00 0C */	b .L_8012102C
.L_80121024:
/* 80121024 0011DF64  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121028 0011DF68  EC 22 08 28 */	fsubs f1, f2, f1
.L_8012102C:
/* 8012102C 0011DF6C  3C 00 43 30 */	lis r0, 0x4330
/* 80121030 0011DF70  FC C0 08 1E */	fctiwz f6, f1
/* 80121034 0011DF74  91 01 00 2C */	stw r8, 0x2c(r1)
/* 80121038 0011DF78  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012103C 0011DF7C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80121040 0011DF80  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121044 0011DF84  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 80121048 0011DF88  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8012104C 0011DF8C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121050 0011DF90  90 01 00 20 */	stw r0, 0x20(r1)
/* 80121054 0011DF94  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80121058 0011DF98  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8012105C 0011DF9C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121060 0011DFA0  90 01 00 18 */	stw r0, 0x18(r1)
/* 80121064 0011DFA4  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80121068 0011DFA8  EC 64 18 28 */	fsubs f3, f4, f3
/* 8012106C 0011DFAC  D8 C1 00 30 */	stfd f6, 0x30(r1)
/* 80121070 0011DFB0  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121074 0011DFB4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80121078 0011DFB8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8012107C 0011DFBC  98 1C 23 4A */	stb r0, 0x234a(r28)
/* 80121080 0011DFC0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121084 0011DFC4  4C 41 13 82 */	cror 2, 1, 2
/* 80121088 0011DFC8  40 82 00 10 */	bne .L_80121098
/* 8012108C 0011DFCC  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121090 0011DFD0  EC 00 10 2A */	fadds f0, f0, f2
/* 80121094 0011DFD4  48 00 00 0C */	b .L_801210A0
.L_80121098:
/* 80121098 0011DFD8  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 8012109C 0011DFDC  EC 02 00 28 */	fsubs f0, f2, f0
.L_801210A0:
/* 801210A0 0011DFE0  FC 00 00 1E */	fctiwz f0, f0
/* 801210A4 0011DFE4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801210A8 0011DFE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801210AC 0011DFEC  98 1C 23 4B */	stb r0, 0x234b(r28)
.L_801210B0:
/* 801210B0 0011DFF0  80 01 03 24 */	lwz r0, 0x324(r1)
/* 801210B4 0011DFF4  83 E1 03 1C */	lwz r31, 0x31c(r1)
/* 801210B8 0011DFF8  83 C1 03 18 */	lwz r30, 0x318(r1)
/* 801210BC 0011DFFC  83 A1 03 14 */	lwz r29, 0x314(r1)
/* 801210C0 0011E000  83 81 03 10 */	lwz r28, 0x310(r1)
/* 801210C4 0011E004  7C 08 03 A6 */	mtlr r0
/* 801210C8 0011E008  38 21 03 20 */	addi r1, r1, 0x320
/* 801210CC 0011E00C  4E 80 00 20 */	blr 
.endfn calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting

.fn updateSunType__Q24Game12GameLightMgrFv, global
/* 801210D0 0011E010  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801210D4 0011E014  7C 08 02 A6 */	mflr r0
/* 801210D8 0011E018  90 01 00 44 */	stw r0, 0x44(r1)
/* 801210DC 0011E01C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801210E0 0011E020  7C 7F 1B 78 */	mr r31, r3
/* 801210E4 0011E024  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801210E8 0011E028  80 83 23 38 */	lwz r4, 0x2338(r3)
/* 801210EC 0011E02C  28 04 00 00 */	cmplwi r4, 0
/* 801210F0 0011E030  41 82 01 B8 */	beq .L_801212A8
/* 801210F4 0011E034  80 04 02 10 */	lwz r0, 0x210(r4)
/* 801210F8 0011E038  2C 00 00 02 */	cmpwi r0, 2
/* 801210FC 0011E03C  41 82 00 50 */	beq .L_8012114C
/* 80121100 0011E040  40 80 00 14 */	bge .L_80121114
/* 80121104 0011E044  2C 00 00 00 */	cmpwi r0, 0
/* 80121108 0011E048  41 82 00 1C */	beq .L_80121124
/* 8012110C 0011E04C  40 80 00 2C */	bge .L_80121138
/* 80121110 0011E050  48 00 01 98 */	b .L_801212A8
.L_80121114:
/* 80121114 0011E054  2C 00 00 04 */	cmpwi r0, 4
/* 80121118 0011E058  41 82 01 80 */	beq .L_80121298
/* 8012111C 0011E05C  40 80 01 8C */	bge .L_801212A8
/* 80121120 0011E060  48 00 01 64 */	b .L_80121284
.L_80121124:
/* 80121124 0011E064  38 9F 01 18 */	addi r4, r31, 0x118
/* 80121128 0011E068  7C 85 23 78 */	mr r5, r4
/* 8012112C 0011E06C  7C 86 23 78 */	mr r6, r4
/* 80121130 0011E070  4B FF E4 B9 */	bl calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
/* 80121134 0011E074  48 00 01 74 */	b .L_801212A8
.L_80121138:
/* 80121138 0011E078  38 9F 01 18 */	addi r4, r31, 0x118
/* 8012113C 0011E07C  38 BF 05 C8 */	addi r5, r31, 0x5c8
/* 80121140 0011E080  38 DF 0A 78 */	addi r6, r31, 0xa78
/* 80121144 0011E084  4B FF E4 A5 */	bl calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
/* 80121148 0011E088  48 00 01 60 */	b .L_801212A8
.L_8012114C:
/* 8012114C 0011E08C  C0 24 02 0C */	lfs f1, 0x20c(r4)
/* 80121150 0011E090  C0 02 99 44 */	lfs f0, lbl_80517CA4@sda21(r2)
/* 80121154 0011E094  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80121158 0011E098  40 81 01 14 */	ble .L_8012126C
/* 8012115C 0011E09C  A0 1F 23 4C */	lhz r0, 0x234c(r31)
/* 80121160 0011E0A0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80121164 0011E0A4  40 82 01 08 */	bne .L_8012126C
/* 80121168 0011E0A8  38 E0 00 00 */	li r7, 0
/* 8012116C 0011E0AC  C0 C2 99 34 */	lfs f6, lbl_80517C94@sda21(r2)
/* 80121170 0011E0B0  98 E1 00 08 */	stb r7, 8(r1)
/* 80121174 0011E0B4  60 E6 00 03 */	ori r6, r7, 3
/* 80121178 0011E0B8  54 C0 06 3E */	clrlwi r0, r6, 0x18
/* 8012117C 0011E0BC  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121180 0011E0C0  98 E1 00 09 */	stb r7, 9(r1)
/* 80121184 0011E0C4  60 E5 00 01 */	ori r5, r7, 1
/* 80121188 0011E0C8  C0 A2 99 38 */	lfs f5, lbl_80517C98@sda21(r2)
/* 8012118C 0011E0CC  60 03 00 01 */	ori r3, r0, 1
/* 80121190 0011E0D0  98 E1 00 08 */	stb r7, 8(r1)
/* 80121194 0011E0D4  54 A4 06 3E */	clrlwi r4, r5, 0x18
/* 80121198 0011E0D8  83 DF 23 84 */	lwz r30, 0x2384(r31)
/* 8012119C 0011E0DC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801211A0 0011E0E0  98 C1 00 08 */	stb r6, 8(r1)
/* 801211A4 0011E0E4  60 84 00 01 */	ori r4, r4, 1
/* 801211A8 0011E0E8  C0 82 98 94 */	lfs f4, lbl_80517BF4@sda21(r2)
/* 801211AC 0011E0EC  28 1E 00 00 */	cmplwi r30, 0
/* 801211B0 0011E0F0  98 E1 00 09 */	stb r7, 9(r1)
/* 801211B4 0011E0F4  60 00 00 02 */	ori r0, r0, 2
/* 801211B8 0011E0F8  C0 62 99 3C */	lfs f3, lbl_80517C9C@sda21(r2)
/* 801211BC 0011E0FC  98 A1 00 09 */	stb r5, 9(r1)
/* 801211C0 0011E100  C0 42 99 40 */	lfs f2, lbl_80517CA0@sda21(r2)
/* 801211C4 0011E104  98 61 00 08 */	stb r3, 8(r1)
/* 801211C8 0011E108  C0 22 99 48 */	lfs f1, lbl_80517CA8@sda21(r2)
/* 801211CC 0011E10C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801211D0 0011E110  C0 02 99 4C */	lfs f0, lbl_80517CAC@sda21(r2)
/* 801211D4 0011E114  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 801211D8 0011E118  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 801211DC 0011E11C  D0 C1 00 14 */	stfs f6, 0x14(r1)
/* 801211E0 0011E120  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 801211E4 0011E124  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 801211E8 0011E128  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 801211EC 0011E12C  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801211F0 0011E130  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801211F4 0011E134  98 81 00 09 */	stb r4, 9(r1)
/* 801211F8 0011E138  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801211FC 0011E13C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80121200 0011E140  98 01 00 08 */	stb r0, 8(r1)
/* 80121204 0011E144  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80121208 0011E148  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8012120C 0011E14C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80121210 0011E150  41 82 00 50 */	beq .L_80121260
/* 80121214 0011E154  98 1E 00 18 */	stb r0, 0x18(r30)
/* 80121218 0011E158  38 00 00 01 */	li r0, 1
/* 8012121C 0011E15C  7F C3 F3 78 */	mr r3, r30
/* 80121220 0011E160  98 9E 00 19 */	stb r4, 0x19(r30)
/* 80121224 0011E164  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 80121228 0011E168  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8012122C 0011E16C  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80121230 0011E170  D0 3E 00 28 */	stfs f1, 0x28(r30)
/* 80121234 0011E174  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 80121238 0011E178  D0 9E 00 30 */	stfs f4, 0x30(r30)
/* 8012123C 0011E17C  D0 7E 00 34 */	stfs f3, 0x34(r30)
/* 80121240 0011E180  90 FE 00 38 */	stw r7, 0x38(r30)
/* 80121244 0011E184  D0 5E 00 3C */	stfs f2, 0x3c(r30)
/* 80121248 0011E188  D0 9E 00 40 */	stfs f4, 0x40(r30)
/* 8012124C 0011E18C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80121250 0011E190  48 2F 03 81 */	bl del__5CNodeFv
/* 80121254 0011E194  7F C4 F3 78 */	mr r4, r30
/* 80121258 0011E198  38 7F 23 5C */	addi r3, r31, 0x235c
/* 8012125C 0011E19C  48 2F 01 AD */	bl add__5CNodeFP5CNode
.L_80121260:
/* 80121260 0011E1A0  A0 1F 23 4C */	lhz r0, 0x234c(r31)
/* 80121264 0011E1A4  60 00 00 02 */	ori r0, r0, 2
/* 80121268 0011E1A8  B0 1F 23 4C */	sth r0, 0x234c(r31)
.L_8012126C:
/* 8012126C 0011E1AC  38 9F 0A 78 */	addi r4, r31, 0xa78
/* 80121270 0011E1B0  7F E3 FB 78 */	mr r3, r31
/* 80121274 0011E1B4  7C 85 23 78 */	mr r5, r4
/* 80121278 0011E1B8  7C 86 23 78 */	mr r6, r4
/* 8012127C 0011E1BC  4B FF E3 6D */	bl calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
/* 80121280 0011E1C0  48 00 00 28 */	b .L_801212A8
.L_80121284:
/* 80121284 0011E1C4  38 9F 0A 78 */	addi r4, r31, 0xa78
/* 80121288 0011E1C8  38 BF 0F 28 */	addi r5, r31, 0xf28
/* 8012128C 0011E1CC  38 DF 01 18 */	addi r6, r31, 0x118
/* 80121290 0011E1D0  4B FF E3 59 */	bl calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
/* 80121294 0011E1D4  48 00 00 14 */	b .L_801212A8
.L_80121298:
/* 80121298 0011E1D8  38 9F 13 D8 */	addi r4, r31, 0x13d8
/* 8012129C 0011E1DC  7C 85 23 78 */	mr r5, r4
/* 801212A0 0011E1E0  7C 86 23 78 */	mr r6, r4
/* 801212A4 0011E1E4  4B FF E3 45 */	bl calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
.L_801212A8:
/* 801212A8 0011E1E8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801212AC 0011E1EC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801212B0 0011E1F0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801212B4 0011E1F4  7C 08 03 A6 */	mtlr r0
/* 801212B8 0011E1F8  38 21 00 40 */	addi r1, r1, 0x40
/* 801212BC 0011E1FC  4E 80 00 20 */	blr 
.endfn updateSunType__Q24Game12GameLightMgrFv

.fn updateSpotType__Q24Game12GameLightMgrFv, global
/* 801212C0 0011E200  94 21 FD 60 */	stwu r1, -0x2a0(r1)
/* 801212C4 0011E204  7C 08 02 A6 */	mflr r0
/* 801212C8 0011E208  38 80 00 04 */	li r4, 4
/* 801212CC 0011E20C  90 01 02 A4 */	stw r0, 0x2a4(r1)
/* 801212D0 0011E210  93 E1 02 9C */	stw r31, 0x29c(r1)
/* 801212D4 0011E214  7C 7F 1B 78 */	mr r31, r3
/* 801212D8 0011E218  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 801212DC 0011E21C  38 65 00 48 */	addi r3, r5, 0x48
/* 801212E0 0011E220  48 0C 4C F1 */	bl hasItem__Q24Game10OlimarDataFi
/* 801212E4 0011E224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801212E8 0011E228  41 82 00 2C */	beq .L_80121314
/* 801212EC 0011E22C  C0 5F 23 50 */	lfs f2, 0x2350(r31)
/* 801212F0 0011E230  C0 22 99 50 */	lfs f1, lbl_80517CB0@sda21(r2)
/* 801212F4 0011E234  C0 02 99 04 */	lfs f0, lbl_80517C64@sda21(r2)
/* 801212F8 0011E238  EC 22 08 2A */	fadds f1, f2, f1
/* 801212FC 0011E23C  D0 3F 23 50 */	stfs f1, 0x2350(r31)
/* 80121300 0011E240  C0 3F 23 50 */	lfs f1, 0x2350(r31)
/* 80121304 0011E244  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80121308 0011E248  40 81 00 30 */	ble .L_80121338
/* 8012130C 0011E24C  D0 1F 23 50 */	stfs f0, 0x2350(r31)
/* 80121310 0011E250  48 00 00 28 */	b .L_80121338
.L_80121314:
/* 80121314 0011E254  C0 5F 23 50 */	lfs f2, 0x2350(r31)
/* 80121318 0011E258  C0 22 99 50 */	lfs f1, lbl_80517CB0@sda21(r2)
/* 8012131C 0011E25C  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 80121320 0011E260  EC 22 08 28 */	fsubs f1, f2, f1
/* 80121324 0011E264  D0 3F 23 50 */	stfs f1, 0x2350(r31)
/* 80121328 0011E268  C0 3F 23 50 */	lfs f1, 0x2350(r31)
/* 8012132C 0011E26C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80121330 0011E270  40 80 00 08 */	bge .L_80121338
/* 80121334 0011E274  D0 1F 23 50 */	stfs f0, 0x2350(r31)
.L_80121338:
/* 80121338 0011E278  C0 22 99 20 */	lfs f1, lbl_80517C80@sda21(r2)
/* 8012133C 0011E27C  C0 1F 23 50 */	lfs f0, 0x2350(r31)
/* 80121340 0011E280  EC 21 00 32 */	fmuls f1, f1, f0
/* 80121344 0011E284  48 2F 04 55 */	bl pikmin2_cosf__Ff
/* 80121348 0011E288  C0 02 99 04 */	lfs f0, lbl_80517C64@sda21(r2)
/* 8012134C 0011E28C  3C 00 43 30 */	lis r0, 0x4330
/* 80121350 0011E290  C0 C2 98 90 */	lfs f6, lbl_80517BF0@sda21(r2)
/* 80121354 0011E294  EC 00 08 28 */	fsubs f0, f0, f1
/* 80121358 0011E298  90 01 00 10 */	stw r0, 0x10(r1)
/* 8012135C 0011E29C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121360 0011E2A0  90 01 00 18 */	stw r0, 0x18(r1)
/* 80121364 0011E2A4  EC 06 00 32 */	fmuls f0, f6, f0
/* 80121368 0011E2A8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8012136C 0011E2AC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80121370 0011E2B0  D0 1F 23 54 */	stfs f0, 0x2354(r31)
/* 80121374 0011E2B4  80 7F 1E 54 */	lwz r3, 0x1e54(r31)
/* 80121378 0011E2B8  80 1F 18 FC */	lwz r0, 0x18fc(r31)
/* 8012137C 0011E2BC  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 80121380 0011E2C0  80 9F 1E 7C */	lwz r4, 0x1e7c(r31)
/* 80121384 0011E2C4  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80121388 0011E2C8  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8012138C 0011E2CC  80 7F 1E A4 */	lwz r3, 0x1ea4(r31)
/* 80121390 0011E2D0  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80121394 0011E2D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80121398 0011E2D8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8012139C 0011E2DC  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 801213A0 0011E2E0  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 801213A4 0011E2E4  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801213A8 0011E2E8  EC 60 28 28 */	fsubs f3, f0, f5
/* 801213AC 0011E2EC  EC 82 28 28 */	fsubs f4, f2, f5
/* 801213B0 0011E2F0  80 1F 1E CC */	lwz r0, 0x1ecc(r31)
/* 801213B4 0011E2F4  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 801213B8 0011E2F8  C0 1F 23 54 */	lfs f0, 0x2354(r31)
/* 801213BC 0011E2FC  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 801213C0 0011E300  EC 64 18 28 */	fsubs f3, f4, f3
/* 801213C4 0011E304  EC 42 28 28 */	fsubs f2, f2, f5
/* 801213C8 0011E308  80 9F 19 24 */	lwz r4, 0x1924(r31)
/* 801213CC 0011E30C  80 7F 19 4C */	lwz r3, 0x194c(r31)
/* 801213D0 0011E310  80 1F 19 74 */	lwz r0, 0x1974(r31)
/* 801213D4 0011E314  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 801213D8 0011E318  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801213DC 0011E31C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 801213E0 0011E320  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 801213E4 0011E324  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801213E8 0011E328  4C 41 13 82 */	cror 2, 1, 2
/* 801213EC 0011E32C  40 82 00 0C */	bne .L_801213F8
/* 801213F0 0011E330  EC 26 10 2A */	fadds f1, f6, f2
/* 801213F4 0011E334  48 00 00 08 */	b .L_801213FC
.L_801213F8:
/* 801213F8 0011E338  EC 22 30 28 */	fsubs f1, f2, f6
.L_801213FC:
/* 801213FC 0011E33C  3C 00 43 30 */	lis r0, 0x4330
/* 80121400 0011E340  FC C0 08 1E */	fctiwz f6, f1
/* 80121404 0011E344  90 81 00 34 */	stw r4, 0x34(r1)
/* 80121408 0011E348  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012140C 0011E34C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80121410 0011E350  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121414 0011E354  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80121418 0011E358  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8012141C 0011E35C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121420 0011E360  90 01 00 38 */	stw r0, 0x38(r1)
/* 80121424 0011E364  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 80121428 0011E368  90 C1 00 44 */	stw r6, 0x44(r1)
/* 8012142C 0011E36C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121430 0011E370  90 01 00 40 */	stw r0, 0x40(r1)
/* 80121434 0011E374  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 80121438 0011E378  EC 64 18 28 */	fsubs f3, f4, f3
/* 8012143C 0011E37C  D8 C1 00 28 */	stfd f6, 0x28(r1)
/* 80121440 0011E380  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121444 0011E384  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80121448 0011E388  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8012144C 0011E38C  98 01 00 08 */	stb r0, 8(r1)
/* 80121450 0011E390  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121454 0011E394  4C 41 13 82 */	cror 2, 1, 2
/* 80121458 0011E398  40 82 00 10 */	bne .L_80121468
/* 8012145C 0011E39C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121460 0011E3A0  EC 21 10 2A */	fadds f1, f1, f2
/* 80121464 0011E3A4  48 00 00 0C */	b .L_80121470
.L_80121468:
/* 80121468 0011E3A8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012146C 0011E3AC  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121470:
/* 80121470 0011E3B0  3C 00 43 30 */	lis r0, 0x4330
/* 80121474 0011E3B4  FC C0 08 1E */	fctiwz f6, f1
/* 80121478 0011E3B8  90 61 00 54 */	stw r3, 0x54(r1)
/* 8012147C 0011E3BC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121480 0011E3C0  90 01 00 50 */	stw r0, 0x50(r1)
/* 80121484 0011E3C4  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121488 0011E3C8  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 8012148C 0011E3CC  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80121490 0011E3D0  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121494 0011E3D4  90 01 00 58 */	stw r0, 0x58(r1)
/* 80121498 0011E3D8  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 8012149C 0011E3DC  90 E1 00 64 */	stw r7, 0x64(r1)
/* 801214A0 0011E3E0  EC 62 28 28 */	fsubs f3, f2, f5
/* 801214A4 0011E3E4  90 01 00 60 */	stw r0, 0x60(r1)
/* 801214A8 0011E3E8  C8 41 00 60 */	lfd f2, 0x60(r1)
/* 801214AC 0011E3EC  EC 64 18 28 */	fsubs f3, f4, f3
/* 801214B0 0011E3F0  D8 C1 00 48 */	stfd f6, 0x48(r1)
/* 801214B4 0011E3F4  EC 42 28 28 */	fsubs f2, f2, f5
/* 801214B8 0011E3F8  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 801214BC 0011E3FC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801214C0 0011E400  98 01 00 09 */	stb r0, 9(r1)
/* 801214C4 0011E404  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801214C8 0011E408  4C 41 13 82 */	cror 2, 1, 2
/* 801214CC 0011E40C  40 82 00 10 */	bne .L_801214DC
/* 801214D0 0011E410  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801214D4 0011E414  EC 21 10 2A */	fadds f1, f1, f2
/* 801214D8 0011E418  48 00 00 0C */	b .L_801214E4
.L_801214DC:
/* 801214DC 0011E41C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801214E0 0011E420  EC 22 08 28 */	fsubs f1, f2, f1
.L_801214E4:
/* 801214E4 0011E424  3C 00 43 30 */	lis r0, 0x4330
/* 801214E8 0011E428  FC C0 08 1E */	fctiwz f6, f1
/* 801214EC 0011E42C  91 01 00 74 */	stw r8, 0x74(r1)
/* 801214F0 0011E430  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801214F4 0011E434  90 01 00 70 */	stw r0, 0x70(r1)
/* 801214F8 0011E438  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801214FC 0011E43C  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 80121500 0011E440  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80121504 0011E444  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121508 0011E448  90 01 00 78 */	stw r0, 0x78(r1)
/* 8012150C 0011E44C  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80121510 0011E450  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80121514 0011E454  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121518 0011E458  90 01 00 80 */	stw r0, 0x80(r1)
/* 8012151C 0011E45C  C8 41 00 80 */	lfd f2, 0x80(r1)
/* 80121520 0011E460  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121524 0011E464  D8 C1 00 68 */	stfd f6, 0x68(r1)
/* 80121528 0011E468  EC 42 28 28 */	fsubs f2, f2, f5
/* 8012152C 0011E46C  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80121530 0011E470  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121534 0011E474  98 01 00 0A */	stb r0, 0xa(r1)
/* 80121538 0011E478  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8012153C 0011E47C  4C 41 13 82 */	cror 2, 1, 2
/* 80121540 0011E480  40 82 00 10 */	bne .L_80121550
/* 80121544 0011E484  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121548 0011E488  EC 00 10 2A */	fadds f0, f0, f2
/* 8012154C 0011E48C  48 00 00 0C */	b .L_80121558
.L_80121550:
/* 80121550 0011E490  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121554 0011E494  EC 02 00 28 */	fsubs f0, f2, f0
.L_80121558:
/* 80121558 0011E498  FC 00 00 1E */	fctiwz f0, f0
/* 8012155C 0011E49C  88 C1 00 0A */	lbz r6, 0xa(r1)
/* 80121560 0011E4A0  88 A1 00 09 */	lbz r5, 9(r1)
/* 80121564 0011E4A4  88 01 00 08 */	lbz r0, 8(r1)
/* 80121568 0011E4A8  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 8012156C 0011E4AC  80 61 00 8C */	lwz r3, 0x8c(r1)
/* 80121570 0011E4B0  98 61 00 0B */	stb r3, 0xb(r1)
/* 80121574 0011E4B4  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 80121578 0011E4B8  98 04 00 34 */	stb r0, 0x34(r4)
/* 8012157C 0011E4BC  98 A4 00 35 */	stb r5, 0x35(r4)
/* 80121580 0011E4C0  98 C4 00 36 */	stb r6, 0x36(r4)
/* 80121584 0011E4C4  98 64 00 37 */	stb r3, 0x37(r4)
/* 80121588 0011E4C8  C0 3F 1F 08 */	lfs f1, 0x1f08(r31)
/* 8012158C 0011E4CC  C0 5F 19 B0 */	lfs f2, 0x19b0(r31)
/* 80121590 0011E4D0  C0 7F 23 54 */	lfs f3, 0x2354(r31)
/* 80121594 0011E4D4  48 00 0E 89 */	bl "complement<f>__4GameFfff"
/* 80121598 0011E4D8  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8012159C 0011E4DC  3C 00 43 30 */	lis r0, 0x4330
/* 801215A0 0011E4E0  90 01 00 90 */	stw r0, 0x90(r1)
/* 801215A4 0011E4E4  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801215A8 0011E4E8  D0 23 00 44 */	stfs f1, 0x44(r3)
/* 801215AC 0011E4EC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801215B0 0011E4F0  80 9F 1F 40 */	lwz r4, 0x1f40(r31)
/* 801215B4 0011E4F4  80 7F 19 E8 */	lwz r3, 0x19e8(r31)
/* 801215B8 0011E4F8  54 85 06 3E */	clrlwi r5, r4, 0x18
/* 801215BC 0011E4FC  90 01 00 98 */	stw r0, 0x98(r1)
/* 801215C0 0011E500  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 801215C4 0011E504  80 9F 1F 68 */	lwz r4, 0x1f68(r31)
/* 801215C8 0011E508  90 61 00 94 */	stw r3, 0x94(r1)
/* 801215CC 0011E50C  80 7F 1F 90 */	lwz r3, 0x1f90(r31)
/* 801215D0 0011E510  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 801215D4 0011E514  90 A1 00 9C */	stw r5, 0x9c(r1)
/* 801215D8 0011E518  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 801215DC 0011E51C  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 801215E0 0011E520  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 801215E4 0011E524  90 A1 00 A4 */	stw r5, 0xa4(r1)
/* 801215E8 0011E528  EC 82 28 28 */	fsubs f4, f2, f5
/* 801215EC 0011E52C  EC 60 28 28 */	fsubs f3, f0, f5
/* 801215F0 0011E530  C0 1F 23 54 */	lfs f0, 0x2354(r31)
/* 801215F4 0011E534  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 801215F8 0011E538  80 1F 1F B8 */	lwz r0, 0x1fb8(r31)
/* 801215FC 0011E53C  C8 41 00 A0 */	lfd f2, 0xa0(r1)
/* 80121600 0011E540  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121604 0011E544  80 9F 1A 10 */	lwz r4, 0x1a10(r31)
/* 80121608 0011E548  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8012160C 0011E54C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121610 0011E550  80 7F 1A 38 */	lwz r3, 0x1a38(r31)
/* 80121614 0011E554  80 1F 1A 60 */	lwz r0, 0x1a60(r31)
/* 80121618 0011E558  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8012161C 0011E55C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80121620 0011E560  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121624 0011E564  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80121628 0011E568  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8012162C 0011E56C  4C 41 13 82 */	cror 2, 1, 2
/* 80121630 0011E570  40 82 00 10 */	bne .L_80121640
/* 80121634 0011E574  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121638 0011E578  EC 21 10 2A */	fadds f1, f1, f2
/* 8012163C 0011E57C  48 00 00 0C */	b .L_80121648
.L_80121640:
/* 80121640 0011E580  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121644 0011E584  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121648:
/* 80121648 0011E588  3C 00 43 30 */	lis r0, 0x4330
/* 8012164C 0011E58C  FC C0 08 1E */	fctiwz f6, f1
/* 80121650 0011E590  90 81 00 B4 */	stw r4, 0xb4(r1)
/* 80121654 0011E594  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121658 0011E598  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 8012165C 0011E59C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121660 0011E5A0  C8 41 00 B0 */	lfd f2, 0xb0(r1)
/* 80121664 0011E5A4  90 C1 00 BC */	stw r6, 0xbc(r1)
/* 80121668 0011E5A8  EC 82 28 28 */	fsubs f4, f2, f5
/* 8012166C 0011E5AC  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80121670 0011E5B0  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 80121674 0011E5B4  90 C1 00 C4 */	stw r6, 0xc4(r1)
/* 80121678 0011E5B8  EC 62 28 28 */	fsubs f3, f2, f5
/* 8012167C 0011E5BC  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80121680 0011E5C0  C8 41 00 C0 */	lfd f2, 0xc0(r1)
/* 80121684 0011E5C4  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121688 0011E5C8  D8 C1 00 A8 */	stfd f6, 0xa8(r1)
/* 8012168C 0011E5CC  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121690 0011E5D0  80 01 00 AC */	lwz r0, 0xac(r1)
/* 80121694 0011E5D4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121698 0011E5D8  98 01 00 08 */	stb r0, 8(r1)
/* 8012169C 0011E5DC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801216A0 0011E5E0  4C 41 13 82 */	cror 2, 1, 2
/* 801216A4 0011E5E4  40 82 00 10 */	bne .L_801216B4
/* 801216A8 0011E5E8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801216AC 0011E5EC  EC 21 10 2A */	fadds f1, f1, f2
/* 801216B0 0011E5F0  48 00 00 0C */	b .L_801216BC
.L_801216B4:
/* 801216B4 0011E5F4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801216B8 0011E5F8  EC 22 08 28 */	fsubs f1, f2, f1
.L_801216BC:
/* 801216BC 0011E5FC  3C 00 43 30 */	lis r0, 0x4330
/* 801216C0 0011E600  FC C0 08 1E */	fctiwz f6, f1
/* 801216C4 0011E604  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 801216C8 0011E608  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801216CC 0011E60C  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 801216D0 0011E610  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801216D4 0011E614  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 801216D8 0011E618  90 E1 00 DC */	stw r7, 0xdc(r1)
/* 801216DC 0011E61C  EC 82 28 28 */	fsubs f4, f2, f5
/* 801216E0 0011E620  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 801216E4 0011E624  C8 41 00 D8 */	lfd f2, 0xd8(r1)
/* 801216E8 0011E628  90 E1 00 E4 */	stw r7, 0xe4(r1)
/* 801216EC 0011E62C  EC 62 28 28 */	fsubs f3, f2, f5
/* 801216F0 0011E630  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 801216F4 0011E634  C8 41 00 E0 */	lfd f2, 0xe0(r1)
/* 801216F8 0011E638  EC 64 18 28 */	fsubs f3, f4, f3
/* 801216FC 0011E63C  D8 C1 00 C8 */	stfd f6, 0xc8(r1)
/* 80121700 0011E640  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121704 0011E644  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 80121708 0011E648  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 8012170C 0011E64C  98 01 00 09 */	stb r0, 9(r1)
/* 80121710 0011E650  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121714 0011E654  4C 41 13 82 */	cror 2, 1, 2
/* 80121718 0011E658  40 82 00 10 */	bne .L_80121728
/* 8012171C 0011E65C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121720 0011E660  EC 21 10 2A */	fadds f1, f1, f2
/* 80121724 0011E664  48 00 00 0C */	b .L_80121730
.L_80121728:
/* 80121728 0011E668  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012172C 0011E66C  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121730:
/* 80121730 0011E670  3C 00 43 30 */	lis r0, 0x4330
/* 80121734 0011E674  FC C0 08 1E */	fctiwz f6, f1
/* 80121738 0011E678  91 01 00 F4 */	stw r8, 0xf4(r1)
/* 8012173C 0011E67C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121740 0011E680  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80121744 0011E684  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121748 0011E688  C8 41 00 F0 */	lfd f2, 0xf0(r1)
/* 8012174C 0011E68C  90 A1 00 FC */	stw r5, 0xfc(r1)
/* 80121750 0011E690  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121754 0011E694  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80121758 0011E698  C8 41 00 F8 */	lfd f2, 0xf8(r1)
/* 8012175C 0011E69C  90 A1 01 04 */	stw r5, 0x104(r1)
/* 80121760 0011E6A0  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121764 0011E6A4  90 01 01 00 */	stw r0, 0x100(r1)
/* 80121768 0011E6A8  C8 41 01 00 */	lfd f2, 0x100(r1)
/* 8012176C 0011E6AC  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121770 0011E6B0  D8 C1 00 E8 */	stfd f6, 0xe8(r1)
/* 80121774 0011E6B4  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121778 0011E6B8  80 01 00 EC */	lwz r0, 0xec(r1)
/* 8012177C 0011E6BC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121780 0011E6C0  98 01 00 0A */	stb r0, 0xa(r1)
/* 80121784 0011E6C4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121788 0011E6C8  4C 41 13 82 */	cror 2, 1, 2
/* 8012178C 0011E6CC  40 82 00 10 */	bne .L_8012179C
/* 80121790 0011E6D0  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121794 0011E6D4  EC 00 10 2A */	fadds f0, f0, f2
/* 80121798 0011E6D8  48 00 00 0C */	b .L_801217A4
.L_8012179C:
/* 8012179C 0011E6DC  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801217A0 0011E6E0  EC 02 00 28 */	fsubs f0, f2, f0
.L_801217A4:
/* 801217A4 0011E6E4  FC 00 00 1E */	fctiwz f0, f0
/* 801217A8 0011E6E8  3C 00 43 30 */	lis r0, 0x4330
/* 801217AC 0011E6EC  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 801217B0 0011E6F0  88 C1 00 09 */	lbz r6, 9(r1)
/* 801217B4 0011E6F4  D8 01 01 08 */	stfd f0, 0x108(r1)
/* 801217B8 0011E6F8  88 61 00 08 */	lbz r3, 8(r1)
/* 801217BC 0011E6FC  80 81 01 0C */	lwz r4, 0x10c(r1)
/* 801217C0 0011E700  90 01 01 10 */	stw r0, 0x110(r1)
/* 801217C4 0011E704  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801217C8 0011E708  98 81 00 0B */	stb r4, 0xb(r1)
/* 801217CC 0011E70C  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 801217D0 0011E710  80 BF 00 54 */	lwz r5, 0x54(r31)
/* 801217D4 0011E714  90 01 01 18 */	stw r0, 0x118(r1)
/* 801217D8 0011E718  98 65 00 34 */	stb r3, 0x34(r5)
/* 801217DC 0011E71C  98 C5 00 35 */	stb r6, 0x35(r5)
/* 801217E0 0011E720  98 E5 00 36 */	stb r7, 0x36(r5)
/* 801217E4 0011E724  98 85 00 37 */	stb r4, 0x37(r5)
/* 801217E8 0011E728  80 9F 20 2C */	lwz r4, 0x202c(r31)
/* 801217EC 0011E72C  80 7F 1A D4 */	lwz r3, 0x1ad4(r31)
/* 801217F0 0011E730  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 801217F4 0011E734  90 01 01 20 */	stw r0, 0x120(r1)
/* 801217F8 0011E738  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 801217FC 0011E73C  80 9F 20 7C */	lwz r4, 0x207c(r31)
/* 80121800 0011E740  90 61 01 14 */	stw r3, 0x114(r1)
/* 80121804 0011E744  80 BF 20 54 */	lwz r5, 0x2054(r31)
/* 80121808 0011E748  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8012180C 0011E74C  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 80121810 0011E750  C8 41 01 10 */	lfd f2, 0x110(r1)
/* 80121814 0011E754  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80121818 0011E758  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 8012181C 0011E75C  90 C1 01 24 */	stw r6, 0x124(r1)
/* 80121820 0011E760  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121824 0011E764  EC 60 28 28 */	fsubs f3, f0, f5
/* 80121828 0011E768  C0 1F 23 54 */	lfs f0, 0x2354(r31)
/* 8012182C 0011E76C  C8 41 01 20 */	lfd f2, 0x120(r1)
/* 80121830 0011E770  80 1F 20 A4 */	lwz r0, 0x20a4(r31)
/* 80121834 0011E774  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121838 0011E778  80 9F 1A FC */	lwz r4, 0x1afc(r31)
/* 8012183C 0011E77C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121840 0011E780  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 80121844 0011E784  80 7F 1B 24 */	lwz r3, 0x1b24(r31)
/* 80121848 0011E788  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8012184C 0011E78C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121850 0011E790  80 1F 1B 4C */	lwz r0, 0x1b4c(r31)
/* 80121854 0011E794  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80121858 0011E798  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 8012185C 0011E79C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121860 0011E7A0  4C 41 13 82 */	cror 2, 1, 2
/* 80121864 0011E7A4  40 82 00 10 */	bne .L_80121874
/* 80121868 0011E7A8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 8012186C 0011E7AC  EC 21 10 2A */	fadds f1, f1, f2
/* 80121870 0011E7B0  48 00 00 0C */	b .L_8012187C
.L_80121874:
/* 80121874 0011E7B4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121878 0011E7B8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8012187C:
/* 8012187C 0011E7BC  3C 00 43 30 */	lis r0, 0x4330
/* 80121880 0011E7C0  FC C0 08 1E */	fctiwz f6, f1
/* 80121884 0011E7C4  90 81 01 34 */	stw r4, 0x134(r1)
/* 80121888 0011E7C8  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 8012188C 0011E7CC  90 01 01 30 */	stw r0, 0x130(r1)
/* 80121890 0011E7D0  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121894 0011E7D4  C8 41 01 30 */	lfd f2, 0x130(r1)
/* 80121898 0011E7D8  90 A1 01 3C */	stw r5, 0x13c(r1)
/* 8012189C 0011E7DC  EC 82 28 28 */	fsubs f4, f2, f5
/* 801218A0 0011E7E0  90 01 01 38 */	stw r0, 0x138(r1)
/* 801218A4 0011E7E4  C8 41 01 38 */	lfd f2, 0x138(r1)
/* 801218A8 0011E7E8  90 A1 01 44 */	stw r5, 0x144(r1)
/* 801218AC 0011E7EC  EC 62 28 28 */	fsubs f3, f2, f5
/* 801218B0 0011E7F0  90 01 01 40 */	stw r0, 0x140(r1)
/* 801218B4 0011E7F4  C8 41 01 40 */	lfd f2, 0x140(r1)
/* 801218B8 0011E7F8  EC 64 18 28 */	fsubs f3, f4, f3
/* 801218BC 0011E7FC  D8 C1 01 28 */	stfd f6, 0x128(r1)
/* 801218C0 0011E800  EC 42 28 28 */	fsubs f2, f2, f5
/* 801218C4 0011E804  80 01 01 2C */	lwz r0, 0x12c(r1)
/* 801218C8 0011E808  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801218CC 0011E80C  98 01 00 08 */	stb r0, 8(r1)
/* 801218D0 0011E810  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801218D4 0011E814  4C 41 13 82 */	cror 2, 1, 2
/* 801218D8 0011E818  40 82 00 10 */	bne .L_801218E8
/* 801218DC 0011E81C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801218E0 0011E820  EC 21 10 2A */	fadds f1, f1, f2
/* 801218E4 0011E824  48 00 00 0C */	b .L_801218F0
.L_801218E8:
/* 801218E8 0011E828  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 801218EC 0011E82C  EC 22 08 28 */	fsubs f1, f2, f1
.L_801218F0:
/* 801218F0 0011E830  3C 00 43 30 */	lis r0, 0x4330
/* 801218F4 0011E834  FC C0 08 1E */	fctiwz f6, f1
/* 801218F8 0011E838  90 61 01 54 */	stw r3, 0x154(r1)
/* 801218FC 0011E83C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121900 0011E840  90 01 01 50 */	stw r0, 0x150(r1)
/* 80121904 0011E844  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121908 0011E848  C8 41 01 50 */	lfd f2, 0x150(r1)
/* 8012190C 0011E84C  90 E1 01 5C */	stw r7, 0x15c(r1)
/* 80121910 0011E850  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121914 0011E854  90 01 01 58 */	stw r0, 0x158(r1)
/* 80121918 0011E858  C8 41 01 58 */	lfd f2, 0x158(r1)
/* 8012191C 0011E85C  90 E1 01 64 */	stw r7, 0x164(r1)
/* 80121920 0011E860  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121924 0011E864  90 01 01 60 */	stw r0, 0x160(r1)
/* 80121928 0011E868  C8 41 01 60 */	lfd f2, 0x160(r1)
/* 8012192C 0011E86C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121930 0011E870  D8 C1 01 48 */	stfd f6, 0x148(r1)
/* 80121934 0011E874  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121938 0011E878  80 01 01 4C */	lwz r0, 0x14c(r1)
/* 8012193C 0011E87C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121940 0011E880  98 01 00 09 */	stb r0, 9(r1)
/* 80121944 0011E884  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121948 0011E888  4C 41 13 82 */	cror 2, 1, 2
/* 8012194C 0011E88C  40 82 00 10 */	bne .L_8012195C
/* 80121950 0011E890  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121954 0011E894  EC 21 10 2A */	fadds f1, f1, f2
/* 80121958 0011E898  48 00 00 0C */	b .L_80121964
.L_8012195C:
/* 8012195C 0011E89C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121960 0011E8A0  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121964:
/* 80121964 0011E8A4  3C 00 43 30 */	lis r0, 0x4330
/* 80121968 0011E8A8  FC C0 08 1E */	fctiwz f6, f1
/* 8012196C 0011E8AC  91 01 01 74 */	stw r8, 0x174(r1)
/* 80121970 0011E8B0  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121974 0011E8B4  90 01 01 70 */	stw r0, 0x170(r1)
/* 80121978 0011E8B8  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 8012197C 0011E8BC  C8 41 01 70 */	lfd f2, 0x170(r1)
/* 80121980 0011E8C0  90 C1 01 7C */	stw r6, 0x17c(r1)
/* 80121984 0011E8C4  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121988 0011E8C8  90 01 01 78 */	stw r0, 0x178(r1)
/* 8012198C 0011E8CC  C8 41 01 78 */	lfd f2, 0x178(r1)
/* 80121990 0011E8D0  90 C1 01 84 */	stw r6, 0x184(r1)
/* 80121994 0011E8D4  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121998 0011E8D8  90 01 01 80 */	stw r0, 0x180(r1)
/* 8012199C 0011E8DC  C8 41 01 80 */	lfd f2, 0x180(r1)
/* 801219A0 0011E8E0  EC 64 18 28 */	fsubs f3, f4, f3
/* 801219A4 0011E8E4  D8 C1 01 68 */	stfd f6, 0x168(r1)
/* 801219A8 0011E8E8  EC 42 28 28 */	fsubs f2, f2, f5
/* 801219AC 0011E8EC  80 01 01 6C */	lwz r0, 0x16c(r1)
/* 801219B0 0011E8F0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 801219B4 0011E8F4  98 01 00 0A */	stb r0, 0xa(r1)
/* 801219B8 0011E8F8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801219BC 0011E8FC  4C 41 13 82 */	cror 2, 1, 2
/* 801219C0 0011E900  40 82 00 10 */	bne .L_801219D0
/* 801219C4 0011E904  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801219C8 0011E908  EC 00 10 2A */	fadds f0, f0, f2
/* 801219CC 0011E90C  48 00 00 0C */	b .L_801219D8
.L_801219D0:
/* 801219D0 0011E910  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 801219D4 0011E914  EC 02 00 28 */	fsubs f0, f2, f0
.L_801219D8:
/* 801219D8 0011E918  FC 00 00 1E */	fctiwz f0, f0
/* 801219DC 0011E91C  3C 00 43 30 */	lis r0, 0x4330
/* 801219E0 0011E920  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 801219E4 0011E924  88 C1 00 09 */	lbz r6, 9(r1)
/* 801219E8 0011E928  D8 01 01 88 */	stfd f0, 0x188(r1)
/* 801219EC 0011E92C  88 61 00 08 */	lbz r3, 8(r1)
/* 801219F0 0011E930  80 81 01 8C */	lwz r4, 0x18c(r1)
/* 801219F4 0011E934  90 01 01 90 */	stw r0, 0x190(r1)
/* 801219F8 0011E938  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 801219FC 0011E93C  98 81 00 0B */	stb r4, 0xb(r1)
/* 80121A00 0011E940  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121A04 0011E944  80 BF 00 58 */	lwz r5, 0x58(r31)
/* 80121A08 0011E948  90 01 01 98 */	stw r0, 0x198(r1)
/* 80121A0C 0011E94C  98 65 00 34 */	stb r3, 0x34(r5)
/* 80121A10 0011E950  98 C5 00 35 */	stb r6, 0x35(r5)
/* 80121A14 0011E954  98 E5 00 36 */	stb r7, 0x36(r5)
/* 80121A18 0011E958  98 85 00 37 */	stb r4, 0x37(r5)
/* 80121A1C 0011E95C  80 9F 20 E0 */	lwz r4, 0x20e0(r31)
/* 80121A20 0011E960  80 7F 1B 88 */	lwz r3, 0x1b88(r31)
/* 80121A24 0011E964  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80121A28 0011E968  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 80121A2C 0011E96C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80121A30 0011E970  80 9F 21 30 */	lwz r4, 0x2130(r31)
/* 80121A34 0011E974  90 61 01 94 */	stw r3, 0x194(r1)
/* 80121A38 0011E978  80 BF 21 08 */	lwz r5, 0x2108(r31)
/* 80121A3C 0011E97C  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 80121A40 0011E980  90 C1 01 9C */	stw r6, 0x19c(r1)
/* 80121A44 0011E984  C8 41 01 90 */	lfd f2, 0x190(r1)
/* 80121A48 0011E988  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80121A4C 0011E98C  C8 01 01 98 */	lfd f0, 0x198(r1)
/* 80121A50 0011E990  90 C1 01 A4 */	stw r6, 0x1a4(r1)
/* 80121A54 0011E994  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121A58 0011E998  EC 60 28 28 */	fsubs f3, f0, f5
/* 80121A5C 0011E99C  C0 1F 23 54 */	lfs f0, 0x2354(r31)
/* 80121A60 0011E9A0  C8 41 01 A0 */	lfd f2, 0x1a0(r1)
/* 80121A64 0011E9A4  80 1F 21 58 */	lwz r0, 0x2158(r31)
/* 80121A68 0011E9A8  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121A6C 0011E9AC  80 9F 1B B0 */	lwz r4, 0x1bb0(r31)
/* 80121A70 0011E9B0  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121A74 0011E9B4  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 80121A78 0011E9B8  80 7F 1B D8 */	lwz r3, 0x1bd8(r31)
/* 80121A7C 0011E9BC  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80121A80 0011E9C0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121A84 0011E9C4  80 1F 1C 00 */	lwz r0, 0x1c00(r31)
/* 80121A88 0011E9C8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80121A8C 0011E9CC  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80121A90 0011E9D0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121A94 0011E9D4  4C 41 13 82 */	cror 2, 1, 2
/* 80121A98 0011E9D8  40 82 00 10 */	bne .L_80121AA8
/* 80121A9C 0011E9DC  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121AA0 0011E9E0  EC 21 10 2A */	fadds f1, f1, f2
/* 80121AA4 0011E9E4  48 00 00 0C */	b .L_80121AB0
.L_80121AA8:
/* 80121AA8 0011E9E8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121AAC 0011E9EC  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121AB0:
/* 80121AB0 0011E9F0  3C 00 43 30 */	lis r0, 0x4330
/* 80121AB4 0011E9F4  FC C0 08 1E */	fctiwz f6, f1
/* 80121AB8 0011E9F8  90 81 01 B4 */	stw r4, 0x1b4(r1)
/* 80121ABC 0011E9FC  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121AC0 0011EA00  90 01 01 B0 */	stw r0, 0x1b0(r1)
/* 80121AC4 0011EA04  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121AC8 0011EA08  C8 41 01 B0 */	lfd f2, 0x1b0(r1)
/* 80121ACC 0011EA0C  90 A1 01 BC */	stw r5, 0x1bc(r1)
/* 80121AD0 0011EA10  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121AD4 0011EA14  90 01 01 B8 */	stw r0, 0x1b8(r1)
/* 80121AD8 0011EA18  C8 41 01 B8 */	lfd f2, 0x1b8(r1)
/* 80121ADC 0011EA1C  90 A1 01 C4 */	stw r5, 0x1c4(r1)
/* 80121AE0 0011EA20  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121AE4 0011EA24  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 80121AE8 0011EA28  C8 41 01 C0 */	lfd f2, 0x1c0(r1)
/* 80121AEC 0011EA2C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121AF0 0011EA30  D8 C1 01 A8 */	stfd f6, 0x1a8(r1)
/* 80121AF4 0011EA34  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121AF8 0011EA38  80 01 01 AC */	lwz r0, 0x1ac(r1)
/* 80121AFC 0011EA3C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121B00 0011EA40  98 01 00 08 */	stb r0, 8(r1)
/* 80121B04 0011EA44  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121B08 0011EA48  4C 41 13 82 */	cror 2, 1, 2
/* 80121B0C 0011EA4C  40 82 00 10 */	bne .L_80121B1C
/* 80121B10 0011EA50  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121B14 0011EA54  EC 21 10 2A */	fadds f1, f1, f2
/* 80121B18 0011EA58  48 00 00 0C */	b .L_80121B24
.L_80121B1C:
/* 80121B1C 0011EA5C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121B20 0011EA60  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121B24:
/* 80121B24 0011EA64  3C 00 43 30 */	lis r0, 0x4330
/* 80121B28 0011EA68  FC C0 08 1E */	fctiwz f6, f1
/* 80121B2C 0011EA6C  90 61 01 D4 */	stw r3, 0x1d4(r1)
/* 80121B30 0011EA70  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121B34 0011EA74  90 01 01 D0 */	stw r0, 0x1d0(r1)
/* 80121B38 0011EA78  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121B3C 0011EA7C  C8 41 01 D0 */	lfd f2, 0x1d0(r1)
/* 80121B40 0011EA80  90 E1 01 DC */	stw r7, 0x1dc(r1)
/* 80121B44 0011EA84  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121B48 0011EA88  90 01 01 D8 */	stw r0, 0x1d8(r1)
/* 80121B4C 0011EA8C  C8 41 01 D8 */	lfd f2, 0x1d8(r1)
/* 80121B50 0011EA90  90 E1 01 E4 */	stw r7, 0x1e4(r1)
/* 80121B54 0011EA94  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121B58 0011EA98  90 01 01 E0 */	stw r0, 0x1e0(r1)
/* 80121B5C 0011EA9C  C8 41 01 E0 */	lfd f2, 0x1e0(r1)
/* 80121B60 0011EAA0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121B64 0011EAA4  D8 C1 01 C8 */	stfd f6, 0x1c8(r1)
/* 80121B68 0011EAA8  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121B6C 0011EAAC  80 01 01 CC */	lwz r0, 0x1cc(r1)
/* 80121B70 0011EAB0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121B74 0011EAB4  98 01 00 09 */	stb r0, 9(r1)
/* 80121B78 0011EAB8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121B7C 0011EABC  4C 41 13 82 */	cror 2, 1, 2
/* 80121B80 0011EAC0  40 82 00 10 */	bne .L_80121B90
/* 80121B84 0011EAC4  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121B88 0011EAC8  EC 21 10 2A */	fadds f1, f1, f2
/* 80121B8C 0011EACC  48 00 00 0C */	b .L_80121B98
.L_80121B90:
/* 80121B90 0011EAD0  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121B94 0011EAD4  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121B98:
/* 80121B98 0011EAD8  3C 00 43 30 */	lis r0, 0x4330
/* 80121B9C 0011EADC  FC C0 08 1E */	fctiwz f6, f1
/* 80121BA0 0011EAE0  91 01 01 F4 */	stw r8, 0x1f4(r1)
/* 80121BA4 0011EAE4  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121BA8 0011EAE8  90 01 01 F0 */	stw r0, 0x1f0(r1)
/* 80121BAC 0011EAEC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121BB0 0011EAF0  C8 41 01 F0 */	lfd f2, 0x1f0(r1)
/* 80121BB4 0011EAF4  90 C1 01 FC */	stw r6, 0x1fc(r1)
/* 80121BB8 0011EAF8  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121BBC 0011EAFC  90 01 01 F8 */	stw r0, 0x1f8(r1)
/* 80121BC0 0011EB00  C8 41 01 F8 */	lfd f2, 0x1f8(r1)
/* 80121BC4 0011EB04  90 C1 02 04 */	stw r6, 0x204(r1)
/* 80121BC8 0011EB08  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121BCC 0011EB0C  90 01 02 00 */	stw r0, 0x200(r1)
/* 80121BD0 0011EB10  C8 41 02 00 */	lfd f2, 0x200(r1)
/* 80121BD4 0011EB14  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121BD8 0011EB18  D8 C1 01 E8 */	stfd f6, 0x1e8(r1)
/* 80121BDC 0011EB1C  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121BE0 0011EB20  80 01 01 EC */	lwz r0, 0x1ec(r1)
/* 80121BE4 0011EB24  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121BE8 0011EB28  98 01 00 0A */	stb r0, 0xa(r1)
/* 80121BEC 0011EB2C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121BF0 0011EB30  4C 41 13 82 */	cror 2, 1, 2
/* 80121BF4 0011EB34  40 82 00 10 */	bne .L_80121C04
/* 80121BF8 0011EB38  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121BFC 0011EB3C  EC 00 10 2A */	fadds f0, f0, f2
/* 80121C00 0011EB40  48 00 00 0C */	b .L_80121C0C
.L_80121C04:
/* 80121C04 0011EB44  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121C08 0011EB48  EC 02 00 28 */	fsubs f0, f2, f0
.L_80121C0C:
/* 80121C0C 0011EB4C  FC 00 00 1E */	fctiwz f0, f0
/* 80121C10 0011EB50  3C 00 43 30 */	lis r0, 0x4330
/* 80121C14 0011EB54  88 61 00 08 */	lbz r3, 8(r1)
/* 80121C18 0011EB58  90 01 02 10 */	stw r0, 0x210(r1)
/* 80121C1C 0011EB5C  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121C20 0011EB60  D8 01 02 08 */	stfd f0, 0x208(r1)
/* 80121C24 0011EB64  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121C28 0011EB68  80 81 02 0C */	lwz r4, 0x20c(r1)
/* 80121C2C 0011EB6C  90 01 02 18 */	stw r0, 0x218(r1)
/* 80121C30 0011EB70  98 81 00 0B */	stb r4, 0xb(r1)
/* 80121C34 0011EB74  98 7F 00 30 */	stb r3, 0x30(r31)
/* 80121C38 0011EB78  88 61 00 09 */	lbz r3, 9(r1)
/* 80121C3C 0011EB7C  90 01 02 20 */	stw r0, 0x220(r1)
/* 80121C40 0011EB80  98 7F 00 31 */	stb r3, 0x31(r31)
/* 80121C44 0011EB84  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80121C48 0011EB88  98 1F 00 32 */	stb r0, 0x32(r31)
/* 80121C4C 0011EB8C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80121C50 0011EB90  98 1F 00 33 */	stb r0, 0x33(r31)
/* 80121C54 0011EB94  80 7F 21 94 */	lwz r3, 0x2194(r31)
/* 80121C58 0011EB98  80 1F 1C 3C */	lwz r0, 0x1c3c(r31)
/* 80121C5C 0011EB9C  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 80121C60 0011EBA0  80 9F 21 BC */	lwz r4, 0x21bc(r31)
/* 80121C64 0011EBA4  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80121C68 0011EBA8  90 A1 02 1C */	stw r5, 0x21c(r1)
/* 80121C6C 0011EBAC  80 7F 21 E4 */	lwz r3, 0x21e4(r31)
/* 80121C70 0011EBB0  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80121C74 0011EBB4  90 01 02 14 */	stw r0, 0x214(r1)
/* 80121C78 0011EBB8  C8 01 02 18 */	lfd f0, 0x218(r1)
/* 80121C7C 0011EBBC  54 67 06 3E */	clrlwi r7, r3, 0x18
/* 80121C80 0011EBC0  C8 41 02 10 */	lfd f2, 0x210(r1)
/* 80121C84 0011EBC4  90 A1 02 24 */	stw r5, 0x224(r1)
/* 80121C88 0011EBC8  EC 60 28 28 */	fsubs f3, f0, f5
/* 80121C8C 0011EBCC  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121C90 0011EBD0  C0 1F 23 54 */	lfs f0, 0x2354(r31)
/* 80121C94 0011EBD4  C8 41 02 20 */	lfd f2, 0x220(r1)
/* 80121C98 0011EBD8  80 BF 22 0C */	lwz r5, 0x220c(r31)
/* 80121C9C 0011EBDC  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121CA0 0011EBE0  80 9F 1C 64 */	lwz r4, 0x1c64(r31)
/* 80121CA4 0011EBE4  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121CA8 0011EBE8  80 7F 1C 8C */	lwz r3, 0x1c8c(r31)
/* 80121CAC 0011EBEC  80 1F 1C B4 */	lwz r0, 0x1cb4(r31)
/* 80121CB0 0011EBF0  54 A5 06 3E */	clrlwi r5, r5, 0x18
/* 80121CB4 0011EBF4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121CB8 0011EBF8  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80121CBC 0011EBFC  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80121CC0 0011EC00  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80121CC4 0011EC04  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121CC8 0011EC08  4C 41 13 82 */	cror 2, 1, 2
/* 80121CCC 0011EC0C  40 82 00 10 */	bne .L_80121CDC
/* 80121CD0 0011EC10  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121CD4 0011EC14  EC 21 10 2A */	fadds f1, f1, f2
/* 80121CD8 0011EC18  48 00 00 0C */	b .L_80121CE4
.L_80121CDC:
/* 80121CDC 0011EC1C  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121CE0 0011EC20  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121CE4:
/* 80121CE4 0011EC24  3C 00 43 30 */	lis r0, 0x4330
/* 80121CE8 0011EC28  FC C0 08 1E */	fctiwz f6, f1
/* 80121CEC 0011EC2C  90 81 02 34 */	stw r4, 0x234(r1)
/* 80121CF0 0011EC30  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121CF4 0011EC34  90 01 02 30 */	stw r0, 0x230(r1)
/* 80121CF8 0011EC38  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121CFC 0011EC3C  C8 41 02 30 */	lfd f2, 0x230(r1)
/* 80121D00 0011EC40  90 C1 02 3C */	stw r6, 0x23c(r1)
/* 80121D04 0011EC44  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121D08 0011EC48  90 01 02 38 */	stw r0, 0x238(r1)
/* 80121D0C 0011EC4C  C8 41 02 38 */	lfd f2, 0x238(r1)
/* 80121D10 0011EC50  90 C1 02 44 */	stw r6, 0x244(r1)
/* 80121D14 0011EC54  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121D18 0011EC58  90 01 02 40 */	stw r0, 0x240(r1)
/* 80121D1C 0011EC5C  C8 41 02 40 */	lfd f2, 0x240(r1)
/* 80121D20 0011EC60  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121D24 0011EC64  D8 C1 02 28 */	stfd f6, 0x228(r1)
/* 80121D28 0011EC68  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121D2C 0011EC6C  80 01 02 2C */	lwz r0, 0x22c(r1)
/* 80121D30 0011EC70  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121D34 0011EC74  98 01 00 08 */	stb r0, 8(r1)
/* 80121D38 0011EC78  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121D3C 0011EC7C  4C 41 13 82 */	cror 2, 1, 2
/* 80121D40 0011EC80  40 82 00 10 */	bne .L_80121D50
/* 80121D44 0011EC84  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121D48 0011EC88  EC 21 10 2A */	fadds f1, f1, f2
/* 80121D4C 0011EC8C  48 00 00 0C */	b .L_80121D58
.L_80121D50:
/* 80121D50 0011EC90  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121D54 0011EC94  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121D58:
/* 80121D58 0011EC98  3C 00 43 30 */	lis r0, 0x4330
/* 80121D5C 0011EC9C  FC C0 08 1E */	fctiwz f6, f1
/* 80121D60 0011ECA0  90 61 02 54 */	stw r3, 0x254(r1)
/* 80121D64 0011ECA4  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121D68 0011ECA8  90 01 02 50 */	stw r0, 0x250(r1)
/* 80121D6C 0011ECAC  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121D70 0011ECB0  C8 41 02 50 */	lfd f2, 0x250(r1)
/* 80121D74 0011ECB4  90 E1 02 5C */	stw r7, 0x25c(r1)
/* 80121D78 0011ECB8  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121D7C 0011ECBC  90 01 02 58 */	stw r0, 0x258(r1)
/* 80121D80 0011ECC0  C8 41 02 58 */	lfd f2, 0x258(r1)
/* 80121D84 0011ECC4  90 E1 02 64 */	stw r7, 0x264(r1)
/* 80121D88 0011ECC8  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121D8C 0011ECCC  90 01 02 60 */	stw r0, 0x260(r1)
/* 80121D90 0011ECD0  C8 41 02 60 */	lfd f2, 0x260(r1)
/* 80121D94 0011ECD4  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121D98 0011ECD8  D8 C1 02 48 */	stfd f6, 0x248(r1)
/* 80121D9C 0011ECDC  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121DA0 0011ECE0  80 01 02 4C */	lwz r0, 0x24c(r1)
/* 80121DA4 0011ECE4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121DA8 0011ECE8  98 01 00 09 */	stb r0, 9(r1)
/* 80121DAC 0011ECEC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121DB0 0011ECF0  4C 41 13 82 */	cror 2, 1, 2
/* 80121DB4 0011ECF4  40 82 00 10 */	bne .L_80121DC4
/* 80121DB8 0011ECF8  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121DBC 0011ECFC  EC 21 10 2A */	fadds f1, f1, f2
/* 80121DC0 0011ED00  48 00 00 0C */	b .L_80121DCC
.L_80121DC4:
/* 80121DC4 0011ED04  C0 22 98 90 */	lfs f1, lbl_80517BF0@sda21(r2)
/* 80121DC8 0011ED08  EC 22 08 28 */	fsubs f1, f2, f1
.L_80121DCC:
/* 80121DCC 0011ED0C  3C 00 43 30 */	lis r0, 0x4330
/* 80121DD0 0011ED10  FC C0 08 1E */	fctiwz f6, f1
/* 80121DD4 0011ED14  91 01 02 74 */	stw r8, 0x274(r1)
/* 80121DD8 0011ED18  C8 A2 98 98 */	lfd f5, lbl_80517BF8@sda21(r2)
/* 80121DDC 0011ED1C  90 01 02 70 */	stw r0, 0x270(r1)
/* 80121DE0 0011ED20  C0 22 98 94 */	lfs f1, lbl_80517BF4@sda21(r2)
/* 80121DE4 0011ED24  C8 41 02 70 */	lfd f2, 0x270(r1)
/* 80121DE8 0011ED28  90 A1 02 7C */	stw r5, 0x27c(r1)
/* 80121DEC 0011ED2C  EC 82 28 28 */	fsubs f4, f2, f5
/* 80121DF0 0011ED30  90 01 02 78 */	stw r0, 0x278(r1)
/* 80121DF4 0011ED34  C8 41 02 78 */	lfd f2, 0x278(r1)
/* 80121DF8 0011ED38  90 A1 02 84 */	stw r5, 0x284(r1)
/* 80121DFC 0011ED3C  EC 62 28 28 */	fsubs f3, f2, f5
/* 80121E00 0011ED40  90 01 02 80 */	stw r0, 0x280(r1)
/* 80121E04 0011ED44  C8 41 02 80 */	lfd f2, 0x280(r1)
/* 80121E08 0011ED48  EC 64 18 28 */	fsubs f3, f4, f3
/* 80121E0C 0011ED4C  D8 C1 02 68 */	stfd f6, 0x268(r1)
/* 80121E10 0011ED50  EC 42 28 28 */	fsubs f2, f2, f5
/* 80121E14 0011ED54  80 01 02 6C */	lwz r0, 0x26c(r1)
/* 80121E18 0011ED58  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80121E1C 0011ED5C  98 01 00 0A */	stb r0, 0xa(r1)
/* 80121E20 0011ED60  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80121E24 0011ED64  4C 41 13 82 */	cror 2, 1, 2
/* 80121E28 0011ED68  40 82 00 10 */	bne .L_80121E38
/* 80121E2C 0011ED6C  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121E30 0011ED70  EC 00 10 2A */	fadds f0, f0, f2
/* 80121E34 0011ED74  48 00 00 0C */	b .L_80121E40
.L_80121E38:
/* 80121E38 0011ED78  C0 02 98 90 */	lfs f0, lbl_80517BF0@sda21(r2)
/* 80121E3C 0011ED7C  EC 02 00 28 */	fsubs f0, f2, f0
.L_80121E40:
/* 80121E40 0011ED80  FC 00 00 1E */	fctiwz f0, f0
/* 80121E44 0011ED84  38 81 00 08 */	addi r4, r1, 8
/* 80121E48 0011ED88  D8 01 02 88 */	stfd f0, 0x288(r1)
/* 80121E4C 0011ED8C  80 01 02 8C */	lwz r0, 0x28c(r1)
/* 80121E50 0011ED90  98 01 00 0B */	stb r0, 0xb(r1)
/* 80121E54 0011ED94  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 80121E58 0011ED98  48 31 0C 51 */	bl setColor__6FogMgrFR6Color4
/* 80121E5C 0011ED9C  C0 3F 22 44 */	lfs f1, 0x2244(r31)
/* 80121E60 0011EDA0  C0 5F 1C EC */	lfs f2, 0x1cec(r31)
/* 80121E64 0011EDA4  C0 7F 23 54 */	lfs f3, 0x2354(r31)
/* 80121E68 0011EDA8  48 00 05 B5 */	bl "complement<f>__4GameFfff"
/* 80121E6C 0011EDAC  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 80121E70 0011EDB0  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80121E74 0011EDB4  C0 3F 22 6C */	lfs f1, 0x226c(r31)
/* 80121E78 0011EDB8  C0 5F 1D 14 */	lfs f2, 0x1d14(r31)
/* 80121E7C 0011EDBC  C0 7F 23 54 */	lfs f3, 0x2354(r31)
/* 80121E80 0011EDC0  48 00 05 9D */	bl "complement<f>__4GameFfff"
/* 80121E84 0011EDC4  80 7F 23 44 */	lwz r3, 0x2344(r31)
/* 80121E88 0011EDC8  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80121E8C 0011EDCC  80 1F 1D 50 */	lwz r0, 0x1d50(r31)
/* 80121E90 0011EDD0  98 1F 23 48 */	stb r0, 0x2348(r31)
/* 80121E94 0011EDD4  80 1F 1D 78 */	lwz r0, 0x1d78(r31)
/* 80121E98 0011EDD8  98 1F 23 49 */	stb r0, 0x2349(r31)
/* 80121E9C 0011EDDC  80 1F 1D A0 */	lwz r0, 0x1da0(r31)
/* 80121EA0 0011EDE0  98 1F 23 4A */	stb r0, 0x234a(r31)
/* 80121EA4 0011EDE4  80 1F 1D C8 */	lwz r0, 0x1dc8(r31)
/* 80121EA8 0011EDE8  98 1F 23 4B */	stb r0, 0x234b(r31)
/* 80121EAC 0011EDEC  80 01 02 A4 */	lwz r0, 0x2a4(r1)
/* 80121EB0 0011EDF0  83 E1 02 9C */	lwz r31, 0x29c(r1)
/* 80121EB4 0011EDF4  7C 08 03 A6 */	mtlr r0
/* 80121EB8 0011EDF8  38 21 02 A0 */	addi r1, r1, 0x2a0
/* 80121EBC 0011EDFC  4E 80 00 20 */	blr 
.endfn updateSpotType__Q24Game12GameLightMgrFv

.fn update__Q24Game12GameLightMgrFv, global
/* 80121EC0 0011EE00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80121EC4 0011EE04  7C 08 02 A6 */	mflr r0
/* 80121EC8 0011EE08  90 01 00 24 */	stw r0, 0x24(r1)
/* 80121ECC 0011EE0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80121ED0 0011EE10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80121ED4 0011EE14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80121ED8 0011EE18  7C 7D 1B 78 */	mr r29, r3
/* 80121EDC 0011EE1C  88 03 00 74 */	lbz r0, 0x74(r3)
/* 80121EE0 0011EE20  28 00 00 00 */	cmplwi r0, 0
/* 80121EE4 0011EE24  40 82 00 0C */	bne .L_80121EF0
/* 80121EE8 0011EE28  4B FF F1 E9 */	bl updateSunType__Q24Game12GameLightMgrFv
/* 80121EEC 0011EE2C  48 00 00 08 */	b .L_80121EF4
.L_80121EF0:
/* 80121EF0 0011EE30  4B FF F3 D1 */	bl updateSpotType__Q24Game12GameLightMgrFv
.L_80121EF4:
/* 80121EF4 0011EE34  83 FD 23 6C */	lwz r31, 0x236c(r29)
/* 80121EF8 0011EE38  48 00 00 38 */	b .L_80121F30
.L_80121EFC:
/* 80121EFC 0011EE3C  83 DF 00 04 */	lwz r30, 4(r31)
/* 80121F00 0011EE40  7F E3 FB 78 */	mr r3, r31
/* 80121F04 0011EE44  7F A4 EB 78 */	mr r4, r29
/* 80121F08 0011EE48  4B FF C6 61 */	bl update__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgr
/* 80121F0C 0011EE4C  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 80121F10 0011EE50  2C 00 00 00 */	cmpwi r0, 0
/* 80121F14 0011EE54  40 82 00 18 */	bne .L_80121F2C
/* 80121F18 0011EE58  7F E3 FB 78 */	mr r3, r31
/* 80121F1C 0011EE5C  48 2E F6 B5 */	bl del__5CNodeFv
/* 80121F20 0011EE60  7F E4 FB 78 */	mr r4, r31
/* 80121F24 0011EE64  38 7D 23 74 */	addi r3, r29, 0x2374
/* 80121F28 0011EE68  48 2E F4 E1 */	bl add__5CNodeFP5CNode
.L_80121F2C:
/* 80121F2C 0011EE6C  7F DF F3 78 */	mr r31, r30
.L_80121F30:
/* 80121F30 0011EE70  28 1F 00 00 */	cmplwi r31, 0
/* 80121F34 0011EE74  40 82 FF C8 */	bne .L_80121EFC
/* 80121F38 0011EE78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80121F3C 0011EE7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80121F40 0011EE80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80121F44 0011EE84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80121F48 0011EE88  7C 08 03 A6 */	mtlr r0
/* 80121F4C 0011EE8C  38 21 00 20 */	addi r1, r1, 0x20
/* 80121F50 0011EE90  4E 80 00 20 */	blr 
.endfn update__Q24Game12GameLightMgrFv

.fn set__Q24Game12GameLightMgrFR8Graphics, global
/* 80121F54 0011EE94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80121F58 0011EE98  7C 08 02 A6 */	mflr r0
/* 80121F5C 0011EE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80121F60 0011EEA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80121F64 0011EEA4  7C 9F 23 78 */	mr r31, r4
/* 80121F68 0011EEA8  93 C1 00 08 */	stw r30, 8(r1)
/* 80121F6C 0011EEAC  7C 7E 1B 78 */	mr r30, r3
/* 80121F70 0011EEB0  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 80121F74 0011EEB4  48 00 00 35 */	bl updatePosition__Q24Game12GameLightMgrFP8Viewport
/* 80121F78 0011EEB8  7F C3 F3 78 */	mr r3, r30
/* 80121F7C 0011EEBC  7F E4 FB 78 */	mr r4, r31
/* 80121F80 0011EEC0  48 30 9C 21 */	bl set__8LightMgrFR8Graphics
/* 80121F84 0011EEC4  80 7E 23 44 */	lwz r3, 0x2344(r30)
/* 80121F88 0011EEC8  7F E4 FB 78 */	mr r4, r31
/* 80121F8C 0011EECC  48 31 0A 71 */	bl set__6FogMgrFR8Graphics
/* 80121F90 0011EED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80121F94 0011EED4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80121F98 0011EED8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80121F9C 0011EEDC  7C 08 03 A6 */	mtlr r0
/* 80121FA0 0011EEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80121FA4 0011EEE4  4E 80 00 20 */	blr 
.endfn set__Q24Game12GameLightMgrFR8Graphics

.fn updatePosition__Q24Game12GameLightMgrFP8Viewport, global
/* 80121FA8 0011EEE8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80121FAC 0011EEEC  7C 08 02 A6 */	mflr r0
/* 80121FB0 0011EEF0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80121FB4 0011EEF4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80121FB8 0011EEF8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80121FBC 0011EEFC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80121FC0 0011EF00  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80121FC4 0011EF04  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80121FC8 0011EF08  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80121FCC 0011EF0C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80121FD0 0011EF10  7C 7E 1B 78 */	mr r30, r3
/* 80121FD4 0011EF14  7C 9F 23 78 */	mr r31, r4
/* 80121FD8 0011EF18  88 03 00 74 */	lbz r0, 0x74(r3)
/* 80121FDC 0011EF1C  28 00 00 00 */	cmplwi r0, 0
/* 80121FE0 0011EF20  40 82 01 24 */	bne .L_80122104
/* 80121FE4 0011EF24  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 80121FE8 0011EF28  38 00 00 00 */	li r0, 0
/* 80121FEC 0011EF2C  98 03 00 49 */	stb r0, 0x49(r3)
/* 80121FF0 0011EF30  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 80121FF4 0011EF34  98 03 00 49 */	stb r0, 0x49(r3)
/* 80121FF8 0011EF38  C0 1E 01 04 */	lfs f0, 0x104(r30)
/* 80121FFC 0011EF3C  C3 FE 00 DC */	lfs f31, 0xdc(r30)
/* 80122000 0011EF40  80 7E 23 38 */	lwz r3, 0x2338(r30)
/* 80122004 0011EF44  EF C0 F8 28 */	fsubs f30, f0, f31
/* 80122008 0011EF48  48 00 52 BD */	bl getSunGaugeRatio__Q24Game7TimeMgrFv
/* 8012200C 0011EF4C  EC 7E F8 7A */	fmadds f3, f30, f1, f31
/* 80122010 0011EF50  C0 42 99 54 */	lfs f2, lbl_80517CB4@sda21(r2)
/* 80122014 0011EF54  C0 02 99 58 */	lfs f0, lbl_80517CB8@sda21(r2)
/* 80122018 0011EF58  C0 22 99 20 */	lfs f1, lbl_80517C80@sda21(r2)
/* 8012201C 0011EF5C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80122020 0011EF60  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80122024 0011EF64  EF E1 00 32 */	fmuls f31, f1, f0
/* 80122028 0011EF68  FC 20 F8 90 */	fmr f1, f31
/* 8012202C 0011EF6C  48 2E F7 6D */	bl pikmin2_cosf__Ff
/* 80122030 0011EF70  C0 1E 00 B4 */	lfs f0, 0xb4(r30)
/* 80122034 0011EF74  EC 01 00 32 */	fmuls f0, f1, f0
/* 80122038 0011EF78  FC 20 F8 90 */	fmr f1, f31
/* 8012203C 0011EF7C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80122040 0011EF80  48 2E F6 F1 */	bl pikmin2_sinf__Ff
/* 80122044 0011EF84  C0 5E 00 B4 */	lfs f2, 0xb4(r30)
/* 80122048 0011EF88  C0 02 98 94 */	lfs f0, lbl_80517BF4@sda21(r2)
/* 8012204C 0011EF8C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80122050 0011EF90  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80122054 0011EF94  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80122058 0011EF98  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8012205C 0011EF9C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80122060 0011EFA0  2C 00 00 04 */	cmpwi r0, 4
/* 80122064 0011EFA4  40 82 00 24 */	bne .L_80122088
/* 80122068 0011EFA8  C0 22 99 5C */	lfs f1, lbl_80517CBC@sda21(r2)
/* 8012206C 0011EFAC  38 61 00 20 */	addi r3, r1, 0x20
/* 80122070 0011EFB0  38 80 00 78 */	li r4, 0x78
/* 80122074 0011EFB4  4B FC 84 A1 */	bl PSMTXRotRad
/* 80122078 0011EFB8  38 81 00 14 */	addi r4, r1, 0x14
/* 8012207C 0011EFBC  38 61 00 20 */	addi r3, r1, 0x20
/* 80122080 0011EFC0  7C 85 23 78 */	mr r5, r4
/* 80122084 0011EFC4  4B FC 8B 55 */	bl PSMTXMultVec
.L_80122088:
/* 80122088 0011EFC8  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8012208C 0011EFCC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80122090 0011EFD0  C0 62 99 1C */	lfs f3, lbl_80517C7C@sda21(r2)
/* 80122094 0011EFD4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80122098 0011EFD8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8012209C 0011EFDC  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 801220A0 0011EFE0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801220A4 0011EFE4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801220A8 0011EFE8  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 801220AC 0011EFEC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801220B0 0011EFF0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 801220B4 0011EFF4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801220B8 0011EFF8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 801220BC 0011EFFC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801220C0 0011F000  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801220C4 0011F004  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801220C8 0011F008  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801220CC 0011F00C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801220D0 0011F010  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801220D4 0011F014  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801220D8 0011F018  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801220DC 0011F01C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801220E0 0011F020  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801220E4 0011F024  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801220E8 0011F028  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 801220EC 0011F02C  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 801220F0 0011F030  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801220F4 0011F034  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 801220F8 0011F038  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801220FC 0011F03C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80122100 0011F040  48 00 01 3C */	b .L_8012223C
.L_80122104:
/* 80122104 0011F044  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 80122108 0011F048  38 00 00 03 */	li r0, 3
/* 8012210C 0011F04C  98 03 00 49 */	stb r0, 0x49(r3)
/* 80122110 0011F050  C0 3E 1F 08 */	lfs f1, 0x1f08(r30)
/* 80122114 0011F054  C0 5E 19 B0 */	lfs f2, 0x19b0(r30)
/* 80122118 0011F058  C0 7E 23 54 */	lfs f3, 0x2354(r30)
/* 8012211C 0011F05C  48 00 03 01 */	bl "complement<f>__4GameFfff"
/* 80122120 0011F060  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 80122124 0011F064  38 00 00 03 */	li r0, 3
/* 80122128 0011F068  D0 23 00 44 */	stfs f1, 0x44(r3)
/* 8012212C 0011F06C  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 80122130 0011F070  98 03 00 49 */	stb r0, 0x49(r3)
/* 80122134 0011F074  C0 3E 1F F4 */	lfs f1, 0x1ff4(r30)
/* 80122138 0011F078  C0 5E 1A 9C */	lfs f2, 0x1a9c(r30)
/* 8012213C 0011F07C  C0 7E 23 54 */	lfs f3, 0x2354(r30)
/* 80122140 0011F080  48 00 02 DD */	bl "complement<f>__4GameFfff"
/* 80122144 0011F084  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 80122148 0011F088  D0 23 00 44 */	stfs f1, 0x44(r3)
/* 8012214C 0011F08C  A3 BF 00 18 */	lhz r29, 0x18(r31)
/* 80122150 0011F090  2C 1D 00 00 */	cmpwi r29, 0
/* 80122154 0011F094  41 80 00 0C */	blt .L_80122160
/* 80122158 0011F098  2C 1D 00 01 */	cmpwi r29, 1
/* 8012215C 0011F09C  40 81 00 24 */	ble .L_80122180
.L_80122160:
/* 80122160 0011F0A0  3C 60 80 48 */	lis r3, lbl_8047B380@ha
/* 80122164 0011F0A4  3C 80 80 48 */	lis r4, lbl_8047B40C@ha
/* 80122168 0011F0A8  38 A4 B4 0C */	addi r5, r4, lbl_8047B40C@l
/* 8012216C 0011F0AC  7F A6 EB 78 */	mr r6, r29
/* 80122170 0011F0B0  38 63 B3 80 */	addi r3, r3, lbl_8047B380@l
/* 80122174 0011F0B4  38 80 05 07 */	li r4, 0x507
/* 80122178 0011F0B8  4C C6 31 82 */	crclr 6
/* 8012217C 0011F0BC  4B F0 84 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80122180:
/* 80122180 0011F0C0  C0 3E 1E 1C */	lfs f1, 0x1e1c(r30)
/* 80122184 0011F0C4  C0 5E 18 C4 */	lfs f2, 0x18c4(r30)
/* 80122188 0011F0C8  C0 7E 23 54 */	lfs f3, 0x2354(r30)
/* 8012218C 0011F0CC  48 00 02 91 */	bl "complement<f>__4GameFfff"
/* 80122190 0011F0D0  1C 1D 00 0C */	mulli r0, r29, 0xc
/* 80122194 0011F0D4  C0 62 99 38 */	lfs f3, lbl_80517C98@sda21(r2)
/* 80122198 0011F0D8  38 61 00 08 */	addi r3, r1, 8
/* 8012219C 0011F0DC  7F BE 02 14 */	add r29, r30, r0
/* 801221A0 0011F0E0  C0 9D 23 8C */	lfs f4, 0x238c(r29)
/* 801221A4 0011F0E4  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 801221A8 0011F0E8  C0 1D 23 90 */	lfs f0, 0x2390(r29)
/* 801221AC 0011F0EC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801221B0 0011F0F0  EC 00 08 2A */	fadds f0, f0, f1
/* 801221B4 0011F0F4  C0 5D 23 94 */	lfs f2, 0x2394(r29)
/* 801221B8 0011F0F8  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 801221BC 0011F0FC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801221C0 0011F100  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 801221C4 0011F104  D0 84 00 1C */	stfs f4, 0x1c(r4)
/* 801221C8 0011F108  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801221CC 0011F10C  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 801221D0 0011F110  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801221D4 0011F114  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 801221D8 0011F118  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 801221DC 0011F11C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801221E0 0011F120  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 801221E4 0011F124  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801221E8 0011F128  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 801221EC 0011F12C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801221F0 0011F130  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 801221F4 0011F134  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801221F8 0011F138  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801221FC 0011F13C  EC 23 10 7C */	fnmsubs f1, f3, f1, f2
/* 80122200 0011F140  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80122204 0011F144  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 80122208 0011F148  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8012220C 0011F14C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80122210 0011F150  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80122214 0011F154  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80122218 0011F158  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 8012221C 0011F15C  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 80122220 0011F160  48 2F 88 79 */	bl getLookAtPosition__6CameraFv
/* 80122224 0011F164  C0 01 00 08 */	lfs f0, 8(r1)
/* 80122228 0011F168  D0 1D 23 8C */	stfs f0, 0x238c(r29)
/* 8012222C 0011F16C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80122230 0011F170  D0 1D 23 90 */	stfs f0, 0x2390(r29)
/* 80122234 0011F174  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80122238 0011F178  D0 1D 23 94 */	stfs f0, 0x2394(r29)
.L_8012223C:
/* 8012223C 0011F17C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80122240 0011F180  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80122244 0011F184  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80122248 0011F188  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8012224C 0011F18C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80122250 0011F190  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80122254 0011F194  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80122258 0011F198  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8012225C 0011F19C  7C 08 03 A6 */	mtlr r0
/* 80122260 0011F1A0  38 21 00 80 */	addi r1, r1, 0x80
/* 80122264 0011F1A4  4E 80 00 20 */	blr 
.endfn updatePosition__Q24Game12GameLightMgrFP8Viewport

.fn __dt__Q24Game12GameLightMgrFv, weak
/* 80122268 0011F1A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012226C 0011F1AC  7C 08 02 A6 */	mflr r0
/* 80122270 0011F1B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80122274 0011F1B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80122278 0011F1B8  7C 9F 23 78 */	mr r31, r4
/* 8012227C 0011F1BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80122280 0011F1C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80122284 0011F1C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80122288 0011F1C8  41 82 01 14 */	beq .L_8012239C
/* 8012228C 0011F1CC  3C 80 80 4B */	lis r4, __vt__Q24Game12GameLightMgr@ha
/* 80122290 0011F1D0  38 7E 23 74 */	addi r3, r30, 0x2374
/* 80122294 0011F1D4  38 04 C4 40 */	addi r0, r4, __vt__Q24Game12GameLightMgr@l
/* 80122298 0011F1D8  38 80 FF FF */	li r4, -1
/* 8012229C 0011F1DC  90 1E 00 00 */	stw r0, 0(r30)
/* 801222A0 0011F1E0  48 2E F2 E9 */	bl __dt__5CNodeFv
/* 801222A4 0011F1E4  38 7E 23 5C */	addi r3, r30, 0x235c
/* 801222A8 0011F1E8  38 80 FF FF */	li r4, -1
/* 801222AC 0011F1EC  48 2E F2 DD */	bl __dt__5CNodeFv
/* 801222B0 0011F1F0  34 1E 00 5C */	addic. r0, r30, 0x5c
/* 801222B4 0011F1F4  41 82 00 8C */	beq .L_80122340
/* 801222B8 0011F1F8  3C 80 80 4B */	lis r4, __vt__Q24Game19GameLightMgrSetting@ha
/* 801222BC 0011F1FC  34 7E 1D E0 */	addic. r3, r30, 0x1de0
/* 801222C0 0011F200  38 04 C4 80 */	addi r0, r4, __vt__Q24Game19GameLightMgrSetting@l
/* 801222C4 0011F204  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801222C8 0011F208  41 82 00 18 */	beq .L_801222E0
/* 801222CC 0011F20C  3C 80 80 4B */	lis r4, __vt__Q24Game20GameLightSpotSetting@ha
/* 801222D0 0011F210  38 04 C4 A0 */	addi r0, r4, __vt__Q24Game20GameLightSpotSetting@l
/* 801222D4 0011F214  90 1E 1D E0 */	stw r0, 0x1de0(r30)
/* 801222D8 0011F218  38 80 00 00 */	li r4, 0
/* 801222DC 0011F21C  48 2E F2 AD */	bl __dt__5CNodeFv
.L_801222E0:
/* 801222E0 0011F220  34 7E 18 88 */	addic. r3, r30, 0x1888
/* 801222E4 0011F224  41 82 00 18 */	beq .L_801222FC
/* 801222E8 0011F228  3C 80 80 4B */	lis r4, __vt__Q24Game20GameLightSpotSetting@ha
/* 801222EC 0011F22C  38 04 C4 A0 */	addi r0, r4, __vt__Q24Game20GameLightSpotSetting@l
/* 801222F0 0011F230  90 1E 18 88 */	stw r0, 0x1888(r30)
/* 801222F4 0011F234  38 80 00 00 */	li r4, 0
/* 801222F8 0011F238  48 2E F2 91 */	bl __dt__5CNodeFv
.L_801222FC:
/* 801222FC 0011F23C  37 BE 00 78 */	addic. r29, r30, 0x78
/* 80122300 0011F240  41 82 00 34 */	beq .L_80122334
/* 80122304 0011F244  3C 60 80 4B */	lis r3, __vt__Q24Game19GameLightSunSetting@ha
/* 80122308 0011F248  3C 80 80 12 */	lis r4, __dt__Q24Game20GameLightTimeSettingFv@ha
/* 8012230C 0011F24C  38 03 C4 B0 */	addi r0, r3, __vt__Q24Game19GameLightSunSetting@l
/* 80122310 0011F250  38 A0 04 B0 */	li r5, 0x4b0
/* 80122314 0011F254  90 1E 00 78 */	stw r0, 0x78(r30)
/* 80122318 0011F258  38 7E 01 18 */	addi r3, r30, 0x118
/* 8012231C 0011F25C  38 84 D5 8C */	addi r4, r4, __dt__Q24Game20GameLightTimeSettingFv@l
/* 80122320 0011F260  38 C0 00 05 */	li r6, 5
/* 80122324 0011F264  4B F9 F4 A1 */	bl __destroy_arr
/* 80122328 0011F268  7F A3 EB 78 */	mr r3, r29
/* 8012232C 0011F26C  38 80 00 00 */	li r4, 0
/* 80122330 0011F270  48 2E F2 59 */	bl __dt__5CNodeFv
.L_80122334:
/* 80122334 0011F274  38 7E 00 5C */	addi r3, r30, 0x5c
/* 80122338 0011F278  38 80 00 00 */	li r4, 0
/* 8012233C 0011F27C  48 2E F2 4D */	bl __dt__5CNodeFv
.L_80122340:
/* 80122340 0011F280  28 1E 00 00 */	cmplwi r30, 0
/* 80122344 0011F284  41 82 00 48 */	beq .L_8012238C
/* 80122348 0011F288  3C 80 80 4F */	lis r4, __vt__8LightMgr@ha
/* 8012234C 0011F28C  38 7E 00 34 */	addi r3, r30, 0x34
/* 80122350 0011F290  38 04 BE 94 */	addi r0, r4, __vt__8LightMgr@l
/* 80122354 0011F294  38 80 FF FF */	li r4, -1
/* 80122358 0011F298  90 1E 00 00 */	stw r0, 0(r30)
/* 8012235C 0011F29C  48 2E F2 2D */	bl __dt__5CNodeFv
/* 80122360 0011F2A0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80122364 0011F2A4  41 82 00 1C */	beq .L_80122380
/* 80122368 0011F2A8  3C 80 80 4B */	lis r4, __vt__15AmbientLightObj@ha
/* 8012236C 0011F2AC  38 7E 00 18 */	addi r3, r30, 0x18
/* 80122370 0011F2B0  38 04 C4 60 */	addi r0, r4, __vt__15AmbientLightObj@l
/* 80122374 0011F2B4  38 80 00 00 */	li r4, 0
/* 80122378 0011F2B8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8012237C 0011F2BC  48 2E F2 0D */	bl __dt__5CNodeFv
.L_80122380:
/* 80122380 0011F2C0  7F C3 F3 78 */	mr r3, r30
/* 80122384 0011F2C4  38 80 00 00 */	li r4, 0
/* 80122388 0011F2C8  48 2E F2 01 */	bl __dt__5CNodeFv
.L_8012238C:
/* 8012238C 0011F2CC  7F E0 07 35 */	extsh. r0, r31
/* 80122390 0011F2D0  40 81 00 0C */	ble .L_8012239C
/* 80122394 0011F2D4  7F C3 F3 78 */	mr r3, r30
/* 80122398 0011F2D8  4B F0 1D 1D */	bl __dl__FPv
.L_8012239C:
/* 8012239C 0011F2DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801223A0 0011F2E0  7F C3 F3 78 */	mr r3, r30
/* 801223A4 0011F2E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801223A8 0011F2E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801223AC 0011F2EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801223B0 0011F2F0  7C 08 03 A6 */	mtlr r0
/* 801223B4 0011F2F4  38 21 00 20 */	addi r1, r1, 0x20
/* 801223B8 0011F2F8  4E 80 00 20 */	blr 
.endfn __dt__Q24Game12GameLightMgrFv

.fn __dt__15AmbientLightObjFv, weak
/* 801223BC 0011F2FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801223C0 0011F300  7C 08 02 A6 */	mflr r0
/* 801223C4 0011F304  90 01 00 14 */	stw r0, 0x14(r1)
/* 801223C8 0011F308  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801223CC 0011F30C  7C 9F 23 78 */	mr r31, r4
/* 801223D0 0011F310  93 C1 00 08 */	stw r30, 8(r1)
/* 801223D4 0011F314  7C 7E 1B 79 */	or. r30, r3, r3
/* 801223D8 0011F318  41 82 00 28 */	beq .L_80122400
/* 801223DC 0011F31C  3C A0 80 4B */	lis r5, __vt__15AmbientLightObj@ha
/* 801223E0 0011F320  38 80 00 00 */	li r4, 0
/* 801223E4 0011F324  38 05 C4 60 */	addi r0, r5, __vt__15AmbientLightObj@l
/* 801223E8 0011F328  90 1E 00 00 */	stw r0, 0(r30)
/* 801223EC 0011F32C  48 2E F1 9D */	bl __dt__5CNodeFv
/* 801223F0 0011F330  7F E0 07 35 */	extsh. r0, r31
/* 801223F4 0011F334  40 81 00 0C */	ble .L_80122400
/* 801223F8 0011F338  7F C3 F3 78 */	mr r3, r30
/* 801223FC 0011F33C  4B F0 1C B9 */	bl __dl__FPv
.L_80122400:
/* 80122400 0011F340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80122404 0011F344  7F C3 F3 78 */	mr r3, r30
/* 80122408 0011F348  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012240C 0011F34C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80122410 0011F350  7C 08 03 A6 */	mtlr r0
/* 80122414 0011F354  38 21 00 10 */	addi r1, r1, 0x10
/* 80122418 0011F358  4E 80 00 20 */	blr 
.endfn __dt__15AmbientLightObjFv

.fn "complement<f>__4GameFfff", weak
/* 8012241C 0011F35C  EC 02 08 28 */	fsubs f0, f2, f1
/* 80122420 0011F360  EC 23 08 3A */	fmadds f1, f3, f0, f1
/* 80122424 0011F364  4E 80 00 20 */	blr 
.endfn "complement<f>__4GameFfff"

.fn __sinit_gameLightMgr_cpp, local
/* 80122428 0011F368  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8012242C 0011F36C  38 00 FF FF */	li r0, -1
/* 80122430 0011F370  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80122434 0011F374  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80122438 0011F378  90 0D 92 20 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8012243C 0011F37C  D4 03 C4 20 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80122440 0011F380  D0 0D 92 24 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80122444 0011F384  D0 03 00 04 */	stfs f0, 4(r3)
/* 80122448 0011F388  D0 03 00 08 */	stfs f0, 8(r3)
/* 8012244C 0011F38C  4E 80 00 20 */	blr 
.endfn __sinit_gameLightMgr_cpp
