.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game7Catfish3ObjFv
__ct__Q34Game7Catfish3ObjFv:
/* 80277008 00273F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027700C 00273F4C  7C 08 02 A6 */	mflr r0
/* 80277010 00273F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80277014 00273F54  7C 80 07 35 */	extsh. r0, r4
/* 80277018 00273F58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027701C 00273F5C  7C 7F 1B 78 */	mr r31, r3
/* 80277020 00273F60  41 82 00 24 */	beq lbl_80277044
/* 80277024 00273F64  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 80277028 00273F68  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8027702C 00273F6C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80277030 00273F70  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80277034 00273F74  38 00 00 00 */	li r0, 0
/* 80277038 00273F78  90 7F 02 D8 */	stw r3, 0x2d8(r31)
/* 8027703C 00273F7C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 80277040 00273F80  90 1F 02 E0 */	stw r0, 0x2e0(r31)
lbl_80277044:
/* 80277044 00273F84  7F E3 FB 78 */	mr r3, r31
/* 80277048 00273F88  38 80 00 00 */	li r4, 0
/* 8027704C 00273F8C  4B EB 6A 9D */	bl __ct__Q34Game12KochappyBase3ObjFv
/* 80277050 00273F90  3C 60 80 4C */	lis r3, __vt__Q34Game7Catfish3Obj@ha
/* 80277054 00273F94  38 1F 02 D8 */	addi r0, r31, 0x2d8
/* 80277058 00273F98  38 A3 6F 88 */	addi r5, r3, __vt__Q34Game7Catfish3Obj@l
/* 8027705C 00273F9C  7F E3 FB 78 */	mr r3, r31
/* 80277060 00273FA0  90 BF 00 00 */	stw r5, 0(r31)
/* 80277064 00273FA4  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80277068 00273FA8  38 A5 03 08 */	addi r5, r5, 0x308
/* 8027706C 00273FAC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80277070 00273FB0  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80277074 00273FB4  90 A4 00 00 */	stw r5, 0(r4)
/* 80277078 00273FB8  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8027707C 00273FBC  7C 04 00 50 */	subf r0, r4, r0
/* 80277080 00273FC0  90 04 00 0C */	stw r0, 0xc(r4)
/* 80277084 00273FC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80277088 00273FC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027708C 00273FCC  7C 08 03 A6 */	mtlr r0
/* 80277090 00273FD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80277094 00273FD4  4E 80 00 20 */	blr 

.global onInit__Q34Game7Catfish3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7Catfish3ObjFPQ24Game15CreatureInitArg:
/* 80277098 00273FD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027709C 00273FDC  7C 08 02 A6 */	mflr r0
/* 802770A0 00273FE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802770A4 00273FE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802770A8 00273FE8  7C 7F 1B 78 */	mr r31, r3
/* 802770AC 00273FEC  4B EB 6B F1 */	bl onInit__Q34Game12KochappyBase3ObjFPQ24Game15CreatureInitArg
/* 802770B0 00273FF0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802770B4 00273FF4  38 82 CF F8 */	addi r4, r2, lbl_8051B358@sda21
/* 802770B8 00273FF8  48 1C 7F 2D */	bl getJoint__Q28SysShape5ModelFPc
/* 802770BC 00273FFC  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 802770C0 00274000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802770C4 00274004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802770C8 00274008  7C 08 03 A6 */	mtlr r0
/* 802770CC 0027400C  38 21 00 10 */	addi r1, r1, 0x10
/* 802770D0 00274010  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7Catfish3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7Catfish3ObjFRQ24Game11ShadowParam:
/* 802770D4 00274014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802770D8 00274018  7C 08 02 A6 */	mflr r0
/* 802770DC 0027401C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802770E0 00274020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802770E4 00274024  7C 9F 23 78 */	mr r31, r4
/* 802770E8 00274028  93 C1 00 08 */	stw r30, 8(r1)
/* 802770EC 0027402C  7C 7E 1B 78 */	mr r30, r3
/* 802770F0 00274030  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 802770F4 00274034  48 1B 27 AD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802770F8 00274038  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 802770FC 0027403C  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80277100 00274040  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80277104 00274044  C0 42 D0 00 */	lfs f2, lbl_8051B360@sda21(r2)
/* 80277108 00274048  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8027710C 0027404C  C0 22 D0 04 */	lfs f1, lbl_8051B364@sda21(r2)
/* 80277110 00274050  D0 7F 00 04 */	stfs f3, 4(r31)
/* 80277114 00274054  C0 02 D0 08 */	lfs f0, lbl_8051B368@sda21(r2)
/* 80277118 00274058  D0 9F 00 08 */	stfs f4, 8(r31)
/* 8027711C 0027405C  C0 7F 00 04 */	lfs f3, 4(r31)
/* 80277120 00274060  EC 43 10 28 */	fsubs f2, f3, f2
/* 80277124 00274064  D0 5F 00 04 */	stfs f2, 4(r31)
/* 80277128 00274068  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8027712C 0027406C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80277130 00274070  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80277134 00274074  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80277138 00274078  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 8027713C 0027407C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80277140 00274080  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80277144 00274084  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 80277148 00274088  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8027714C 0027408C  41 82 00 18 */	beq lbl_80277164
/* 80277150 00274090  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80277154 00274094  C0 02 D0 0C */	lfs f0, lbl_8051B36C@sda21(r2)
/* 80277158 00274098  EC 01 00 2A */	fadds f0, f1, f0
/* 8027715C 0027409C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80277160 002740A0  48 00 00 14 */	b lbl_80277174
lbl_80277164:
/* 80277164 002740A4  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80277168 002740A8  C0 02 D0 10 */	lfs f0, lbl_8051B370@sda21(r2)
/* 8027716C 002740AC  EC 01 00 2A */	fadds f0, f1, f0
/* 80277170 002740B0  D0 1F 00 18 */	stfs f0, 0x18(r31)
lbl_80277174:
/* 80277174 002740B4  C0 02 D0 10 */	lfs f0, lbl_8051B370@sda21(r2)
/* 80277178 002740B8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8027717C 002740BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80277180 002740C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80277184 002740C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80277188 002740C8  7C 08 03 A6 */	mtlr r0
/* 8027718C 002740CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80277190 002740D0  4E 80 00 20 */	blr 

.global pressCallBack__Q34Game7Catfish3ObjFPQ24Game8CreaturefP8CollPart
pressCallBack__Q34Game7Catfish3ObjFPQ24Game8CreaturefP8CollPart:
/* 80277194 002740D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80277198 002740D8  7C 08 02 A6 */	mflr r0
/* 8027719C 002740DC  C0 42 D0 08 */	lfs f2, lbl_8051B368@sda21(r2)
/* 802771A0 002740E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802771A4 002740E4  4B E8 EE 89 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802771A8 002740E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802771AC 002740EC  38 60 00 00 */	li r3, 0
/* 802771B0 002740F0  7C 08 03 A6 */	mtlr r0
/* 802771B4 002740F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802771B8 002740F8  4E 80 00 20 */	blr 

.global hipdropCallBack__Q34Game7Catfish3ObjFPQ24Game8CreaturefP8CollPart
hipdropCallBack__Q34Game7Catfish3ObjFPQ24Game8CreaturefP8CollPart:
/* 802771BC 002740FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802771C0 00274100  7C 08 02 A6 */	mflr r0
/* 802771C4 00274104  90 01 00 14 */	stw r0, 0x14(r1)
/* 802771C8 00274108  4B E8 EE FD */	bl hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
/* 802771CC 0027410C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802771D0 00274110  7C 08 03 A6 */	mtlr r0
/* 802771D4 00274114  38 21 00 10 */	addi r1, r1, 0x10
/* 802771D8 00274118  4E 80 00 20 */	blr 

.global initMouthSlots__Q34Game7Catfish3ObjFv
initMouthSlots__Q34Game7Catfish3ObjFv:
/* 802771DC 0027411C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802771E0 00274120  7C 08 02 A6 */	mflr r0
/* 802771E4 00274124  90 01 00 24 */	stw r0, 0x24(r1)
/* 802771E8 00274128  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802771EC 0027412C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802771F0 00274130  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802771F4 00274134  93 C1 00 08 */	stw r30, 8(r1)
/* 802771F8 00274138  7C 7E 1B 78 */	mr r30, r3
/* 802771FC 0027413C  38 80 00 02 */	li r4, 2
/* 80277200 00274140  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 80277204 00274144  4B EC 13 55 */	bl alloc__10MouthSlotsFi
/* 80277208 00274148  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 8027720C 0027414C  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 80277210 00274150  38 80 00 00 */	li r4, 0
/* 80277214 00274154  38 C2 D0 14 */	addi r6, r2, lbl_8051B374@sda21
/* 80277218 00274158  4B EC 14 79 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 8027721C 0027415C  80 BE 01 74 */	lwz r5, 0x174(r30)
/* 80277220 00274160  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 80277224 00274164  38 80 00 01 */	li r4, 1
/* 80277228 00274168  38 C2 D0 1C */	addi r6, r2, lbl_8051B37C@sda21
/* 8027722C 0027416C  4B EC 14 65 */	bl setup__10MouthSlotsFiPQ28SysShape5ModelPc
/* 80277230 00274170  C3 E2 D0 24 */	lfs f31, lbl_8051B384@sda21(r2)
/* 80277234 00274174  3B E0 00 00 */	li r31, 0
/* 80277238 00274178  48 00 00 18 */	b lbl_80277250
lbl_8027723C:
/* 8027723C 0027417C  7F E4 FB 78 */	mr r4, r31
/* 80277240 00274180  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 80277244 00274184  4B EC 15 35 */	bl getSlot__10MouthSlotsFi
/* 80277248 00274188  D3 E3 00 1C */	stfs f31, 0x1c(r3)
/* 8027724C 0027418C  3B FF 00 01 */	addi r31, r31, 1
lbl_80277250:
/* 80277250 00274190  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80277254 00274194  7C 1F 00 00 */	cmpw r31, r0
/* 80277258 00274198  41 80 FF E4 */	blt lbl_8027723C
/* 8027725C 0027419C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80277260 002741A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80277264 002741A4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80277268 002741A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027726C 002741AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80277270 002741B0  7C 08 03 A6 */	mtlr r0
/* 80277274 002741B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80277278 002741B8  4E 80 00 20 */	blr 

.global resetEnemyNonStone__Q34Game7Catfish3ObjFv
resetEnemyNonStone__Q34Game7Catfish3ObjFv:
/* 8027727C 002741BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80277280 002741C0  7C 08 02 A6 */	mflr r0
/* 80277284 002741C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80277288 002741C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027728C 002741CC  7C 7F 1B 78 */	mr r31, r3
/* 80277290 002741D0  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80277294 002741D4  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 80277298 002741D8  41 82 00 08 */	beq lbl_802772A0
/* 8027729C 002741DC  48 00 00 25 */	bl createDownEffect__Q34Game7Catfish3ObjFv
lbl_802772A0:
/* 802772A0 002741E0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802772A4 002741E4  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802772A8 002741E8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802772AC 002741EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802772B0 002741F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802772B4 002741F4  7C 08 03 A6 */	mtlr r0
/* 802772B8 002741F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802772BC 002741FC  4E 80 00 20 */	blr 

.global createDownEffect__Q34Game7Catfish3ObjFv
createDownEffect__Q34Game7Catfish3ObjFv:
/* 802772C0 00274200  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802772C4 00274204  7C 08 02 A6 */	mflr r0
/* 802772C8 00274208  C0 22 D0 28 */	lfs f1, lbl_8051B388@sda21(r2)
/* 802772CC 0027420C  38 83 01 8C */	addi r4, r3, 0x18c
/* 802772D0 00274210  90 01 00 14 */	stw r0, 0x14(r1)
/* 802772D4 00274214  4B E8 C8 7D */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 802772D8 00274218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802772DC 0027421C  7C 08 03 A6 */	mtlr r0
/* 802772E0 00274220  38 21 00 10 */	addi r1, r1, 0x10
/* 802772E4 00274224  4E 80 00 20 */	blr 

.global changeMaterial__Q34Game7Catfish3ObjFv
changeMaterial__Q34Game7Catfish3ObjFv:
/* 802772E8 00274228  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game7Catfish3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game7Catfish3ObjFPQ24Game8WaterBox:
/* 802772EC 0027422C  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game7Catfish3ObjFv
outWaterCallback__Q34Game7Catfish3ObjFv:
/* 802772F0 00274230  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7Catfish3ObjFv
getEnemyTypeID__Q34Game7Catfish3ObjFv:
/* 802772F4 00274234  38 60 00 1A */	li r3, 0x1a
/* 802772F8 00274238  4E 80 00 20 */	blr 

.global setEnemyNonStone__Q34Game7Catfish3ObjFv
setEnemyNonStone__Q34Game7Catfish3ObjFv:
/* 802772FC 0027423C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80277300 00274240  64 00 00 20 */	oris r0, r0, 0x20
/* 80277304 00274244  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80277308 00274248  4E 80 00 20 */	blr 
