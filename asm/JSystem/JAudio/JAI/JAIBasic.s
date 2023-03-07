.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__8JAIBasic, global
	.4byte 0
	.4byte 0
	.4byte makeSequence__8JAIBasicFv
	.4byte makeSe__8JAIBasicFv
	.4byte makeStream__8JAIBasicFv
	.4byte getMapInfoFxline__8JAIBasicFUl
	.4byte getMapInfoGround__8JAIBasicFUl
	.4byte getMapInfoFxParameter__8JAIBasicFUl
	.4byte setSeExtParameter__8JAIBasicFP8JAISound
	.4byte setRegisterTrackCallback__8JAIBasicFv
.endobj __vt__8JAIBasic

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj msStopStatus__8JAIBasic, global
	.byte 3
.endobj msStopStatus__8JAIBasic

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj msBasic__8JAIBasic, global
	.skip 0x4
.endobj msBasic__8JAIBasic
.obj msCurrentHeap__8JAIBasic, global
	.skip 0x4
.endobj msCurrentHeap__8JAIBasic
.obj msStopMode__8JAIBasic, global
	.skip 0x1
.endobj msStopMode__8JAIBasic
.balign 4
.obj msAudioStopTime__8JAIBasic, global
	.skip 0x4
.endobj msAudioStopTime__8JAIBasic
.obj msDspLevel__8JAIBasic, global
	.skip 0x4
.endobj msDspLevel__8JAIBasic
.obj msAutoLevel__8JAIBasic, global
	.skip 0x4
.endobj msAutoLevel__8JAIBasic
.obj msAutoDif__8JAIBasic, global
	.skip 0x4
.endobj msAutoDif__8JAIBasic
.obj msDspDif__8JAIBasic, global
	.skip 0x4
.endobj msDspDif__8JAIBasic

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516F08, local
	.asciz "%s%s%c"
.endobj lbl_80516F08
.balign 4
.obj lbl_80516F10, local
	.float 0.0
.endobj lbl_80516F10
.obj lbl_80516F14, local
	.float -50.0
.endobj lbl_80516F14
.obj lbl_80516F18, local
	.float 1.0
.endobj lbl_80516F18
.obj lbl_80516F1C, local
	.float 127.0
.endobj lbl_80516F1C
.balign 8
.obj lbl_80516F20, local
	.8byte 0x4330000000000000
.endobj lbl_80516F20

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__8JAIBasicFv, global
/* 800AC158 000A9098  3C 80 80 4A */	lis r4, __vt__8JAIBasic@ha
/* 800AC15C 000A909C  38 A0 00 00 */	li r5, 0
/* 800AC160 000A90A0  38 84 62 48 */	addi r4, r4, __vt__8JAIBasic@l
/* 800AC164 000A90A4  38 00 00 02 */	li r0, 2
/* 800AC168 000A90A8  90 83 00 00 */	stw r4, 0(r3)
/* 800AC16C 000A90AC  90 6D 8B 68 */	stw r3, msBasic__8JAIBasic@sda21(r13)
/* 800AC170 000A90B0  88 83 00 0E */	lbz r4, 0xe(r3)
/* 800AC174 000A90B4  50 A4 3E 30 */	rlwimi r4, r5, 7, 0x18, 0x18
/* 800AC178 000A90B8  98 83 00 0E */	stb r4, 0xe(r3)
/* 800AC17C 000A90BC  88 83 00 0E */	lbz r4, 0xe(r3)
/* 800AC180 000A90C0  50 A4 36 72 */	rlwimi r4, r5, 6, 0x19, 0x19
/* 800AC184 000A90C4  98 83 00 0E */	stb r4, 0xe(r3)
/* 800AC188 000A90C8  88 83 00 0E */	lbz r4, 0xe(r3)
/* 800AC18C 000A90CC  50 A4 2E B4 */	rlwimi r4, r5, 5, 0x1a, 0x1a
/* 800AC190 000A90D0  98 83 00 0E */	stb r4, 0xe(r3)
/* 800AC194 000A90D4  88 83 00 0E */	lbz r4, 0xe(r3)
/* 800AC198 000A90D8  50 A4 26 F6 */	rlwimi r4, r5, 4, 0x1b, 0x1b
/* 800AC19C 000A90DC  98 83 00 0E */	stb r4, 0xe(r3)
/* 800AC1A0 000A90E0  88 83 00 0E */	lbz r4, 0xe(r3)
/* 800AC1A4 000A90E4  50 A4 1F 38 */	rlwimi r4, r5, 3, 0x1c, 0x1c
/* 800AC1A8 000A90E8  98 83 00 0E */	stb r4, 0xe(r3)
/* 800AC1AC 000A90EC  90 A3 00 14 */	stw r5, 0x14(r3)
/* 800AC1B0 000A90F0  90 A3 00 04 */	stw r5, 4(r3)
/* 800AC1B4 000A90F4  90 A3 00 10 */	stw r5, 0x10(r3)
/* 800AC1B8 000A90F8  98 03 00 0C */	stb r0, 0xc(r3)
/* 800AC1BC 000A90FC  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 800AC1C0 000A9100  90 A3 00 08 */	stw r5, 8(r3)
/* 800AC1C4 000A9104  90 A3 00 18 */	stw r5, 0x18(r3)
/* 800AC1C8 000A9108  80 0D 8A B8 */	lwz r0, JASDram@sda21(r13)
/* 800AC1CC 000A910C  90 0D 8B 6C */	stw r0, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AC1D0 000A9110  4E 80 00 20 */	blr 
.endfn __ct__8JAIBasicFv

.fn initDriver__8JAIBasicFP12JKRSolidHeapUlUc, global
/* 800AC1D4 000A9114  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC1D8 000A9118  7C 08 02 A6 */	mflr r0
/* 800AC1DC 000A911C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC1E0 000A9120  48 00 02 C1 */	bl initAudioThread__8JAIBasicFP12JKRSolidHeapUlUc
/* 800AC1E4 000A9124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC1E8 000A9128  7C 08 03 A6 */	mtlr r0
/* 800AC1EC 000A912C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC1F0 000A9130  4E 80 00 20 */	blr 
.endfn initDriver__8JAIBasicFP12JKRSolidHeapUlUc

.fn initInterface__8JAIBasicFUc, global
/* 800AC1F4 000A9134  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC1F8 000A9138  7C 08 02 A6 */	mflr r0
/* 800AC1FC 000A913C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC200 000A9140  48 00 00 15 */	bl initInterfaceMain__8JAIBasicFv
/* 800AC204 000A9144  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC208 000A9148  7C 08 03 A6 */	mtlr r0
/* 800AC20C 000A914C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC210 000A9150  4E 80 00 20 */	blr 
.endfn initInterface__8JAIBasicFUc

.fn initInterfaceMain__8JAIBasicFv, global
/* 800AC214 000A9154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC218 000A9158  7C 08 02 A6 */	mflr r0
/* 800AC21C 000A915C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC220 000A9160  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC224 000A9164  7C 7F 1B 78 */	mr r31, r3
/* 800AC228 000A9168  48 00 00 AD */	bl initHeap__8JAIBasicFv
/* 800AC22C 000A916C  7F E3 FB 78 */	mr r3, r31
/* 800AC230 000A9170  48 00 01 4D */	bl initResourcePath__8JAIBasicFv
/* 800AC234 000A9174  7F E3 FB 78 */	mr r3, r31
/* 800AC238 000A9178  48 00 00 F9 */	bl initArchive__8JAIBasicFv
/* 800AC23C 000A917C  7F E3 FB 78 */	mr r3, r31
/* 800AC240 000A9180  48 00 04 6D */	bl initReadFile__8JAIBasicFv
/* 800AC244 000A9184  2C 03 00 00 */	cmpwi r3, 0
/* 800AC248 000A9188  41 82 00 78 */	beq .L_800AC2C0
/* 800AC24C 000A918C  88 1F 00 0E */	lbz r0, 0xe(r31)
/* 800AC250 000A9190  54 00 CF FF */	rlwinm. r0, r0, 0x19, 0x1f, 0x1f
/* 800AC254 000A9194  40 82 00 18 */	bne .L_800AC26C
/* 800AC258 000A9198  81 8D 81 4C */	lwz r12, firstLoadCallback__Q27JAInter8BankWave@sda21(r13)
/* 800AC25C 000A919C  28 0C 00 00 */	cmplwi r12, 0
/* 800AC260 000A91A0  41 82 00 0C */	beq .L_800AC26C
/* 800AC264 000A91A4  7D 89 03 A6 */	mtctr r12
/* 800AC268 000A91A8  4E 80 04 21 */	bctrl 
.L_800AC26C:
/* 800AC26C 000A91AC  48 00 12 25 */	bl init__Q27JAInter14DummyObjectMgrFv
/* 800AC270 000A91B0  48 00 14 5D */	bl init__Q27JAInter2FxFv
/* 800AC274 000A91B4  48 00 46 D1 */	bl init__Q27JAInter11SequenceMgrFv
/* 800AC278 000A91B8  48 00 1E 29 */	bl init__Q27JAInter5SeMgrFv
/* 800AC27C 000A91BC  48 00 B3 D1 */	bl init__Q27JAInter9StreamMgrFv
/* 800AC280 000A91C0  80 6D 81 84 */	lwz r3, stayHeapMax__18JAIGlobalParameter@sda21(r13)
/* 800AC284 000A91C4  80 0D 81 80 */	lwz r0, autoHeapMax__18JAIGlobalParameter@sda21(r13)
/* 800AC288 000A91C8  80 8D 81 8C */	lwz r4, stayHeapSize__18JAIGlobalParameter@sda21(r13)
/* 800AC28C 000A91CC  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 800AC290 000A91D0  80 CD 81 88 */	lwz r6, autoHeapRoomSize__18JAIGlobalParameter@sda21(r13)
/* 800AC294 000A91D4  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 800AC298 000A91D8  48 00 40 A9 */	bl init__Q27JAInter7HeapMgrFUcUlUcUl
/* 800AC29C 000A91DC  7F E3 FB 78 */	mr r3, r31
/* 800AC2A0 000A91E0  48 00 02 99 */	bl initCamera__8JAIBasicFv
/* 800AC2A4 000A91E4  81 8D 82 08 */	lwz r12, seStartCallback__Q27JAInter5SeMgr@sda21(r13)
/* 800AC2A8 000A91E8  7D 89 03 A6 */	mtctr r12
/* 800AC2AC 000A91EC  4E 80 04 21 */	bctrl 
/* 800AC2B0 000A91F0  88 1F 00 0E */	lbz r0, 0xe(r31)
/* 800AC2B4 000A91F4  54 00 CF FF */	rlwinm. r0, r0, 0x19, 0x1f, 0x1f
/* 800AC2B8 000A91F8  40 82 00 08 */	bne .L_800AC2C0
/* 800AC2BC 000A91FC  48 00 4E 29 */	bl checkEntriedSeq__Q27JAInter11SequenceMgrFv
.L_800AC2C0:
/* 800AC2C0 000A9200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC2C4 000A9204  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC2C8 000A9208  7C 08 03 A6 */	mtlr r0
/* 800AC2CC 000A920C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC2D0 000A9210  4E 80 00 20 */	blr 
.endfn initInterfaceMain__8JAIBasicFv

.fn initHeap__8JAIBasicFv, global
/* 800AC2D4 000A9214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC2D8 000A9218  7C 08 02 A6 */	mflr r0
/* 800AC2DC 000A921C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC2E0 000A9220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC2E4 000A9224  7C 7F 1B 78 */	mr r31, r3
/* 800AC2E8 000A9228  80 0D 8B BC */	lwz r0, interfaceHeapSize__18JAIGlobalParameter@sda21(r13)
/* 800AC2EC 000A922C  28 00 00 00 */	cmplwi r0, 0
/* 800AC2F0 000A9230  41 82 00 24 */	beq .L_800AC314
/* 800AC2F4 000A9234  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800AC2F8 000A9238  7C 03 03 78 */	mr r3, r0
/* 800AC2FC 000A923C  38 A0 00 00 */	li r5, 0
/* 800AC300 000A9240  4B F7 8A 71 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 800AC304 000A9244  90 7F 00 08 */	stw r3, 8(r31)
/* 800AC308 000A9248  80 1F 00 08 */	lwz r0, 8(r31)
/* 800AC30C 000A924C  90 0D 8B 6C */	stw r0, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AC310 000A9250  48 00 00 0C */	b .L_800AC31C
.L_800AC314:
/* 800AC314 000A9254  80 0D 8A B8 */	lwz r0, JASDram@sda21(r13)
/* 800AC318 000A9258  90 0D 8B 6C */	stw r0, msCurrentHeap__8JAIBasic@sda21(r13)
.L_800AC31C:
/* 800AC31C 000A925C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC320 000A9260  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC324 000A9264  7C 08 03 A6 */	mtlr r0
/* 800AC328 000A9268  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC32C 000A926C  4E 80 00 20 */	blr 
.endfn initHeap__8JAIBasicFv

.fn initArchive__8JAIBasicFv, global
/* 800AC330 000A9270  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 800AC334 000A9274  7C 08 02 A6 */	mflr r0
/* 800AC338 000A9278  90 01 00 74 */	stw r0, 0x74(r1)
/* 800AC33C 000A927C  48 00 4D 61 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
/* 800AC340 000A9280  28 03 00 00 */	cmplwi r3, 0
/* 800AC344 000A9284  40 82 00 28 */	bne .L_800AC36C
/* 800AC348 000A9288  38 61 00 08 */	addi r3, r1, 8
/* 800AC34C 000A928C  48 00 4C DD */	bl getArchiveName__Q27JAInter11SequenceMgrFPc
/* 800AC350 000A9290  80 AD 8B 6C */	lwz r5, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AC354 000A9294  38 61 00 08 */	addi r3, r1, 8
/* 800AC358 000A9298  38 80 00 03 */	li r4, 3
/* 800AC35C 000A929C  38 C0 00 01 */	li r6, 1
/* 800AC360 000A92A0  4B F6 ED D1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 800AC364 000A92A4  48 00 4D 31 */	bl setArchivePointer__Q27JAInter11SequenceMgrFP10JKRArchive
/* 800AC368 000A92A8  48 00 4D 35 */	bl getArchivePointer__Q27JAInter11SequenceMgrFv
.L_800AC36C:
/* 800AC36C 000A92AC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 800AC370 000A92B0  7C 08 03 A6 */	mtlr r0
/* 800AC374 000A92B4  38 21 00 70 */	addi r1, r1, 0x70
/* 800AC378 000A92B8  4E 80 00 20 */	blr 
.endfn initArchive__8JAIBasicFv

.fn initResourcePath__8JAIBasicFv, global
/* 800AC37C 000A92BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC380 000A92C0  7C 08 02 A6 */	mflr r0
/* 800AC384 000A92C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC388 000A92C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC38C 000A92CC  80 0D 81 A0 */	lwz r0, audioResPath__18JAIGlobalParameter@sda21(r13)
/* 800AC390 000A92D0  28 00 00 00 */	cmplwi r0, 0
/* 800AC394 000A92D4  41 82 00 9C */	beq .L_800AC430
/* 800AC398 000A92D8  80 6D 81 94 */	lwz r3, wavePath__18JAIGlobalParameter@sda21(r13)
/* 800AC39C 000A92DC  48 01 E5 75 */	bl strlen
/* 800AC3A0 000A92E0  7C 7F 1B 78 */	mr r31, r3
/* 800AC3A4 000A92E4  80 6D 81 A0 */	lwz r3, audioResPath__18JAIGlobalParameter@sda21(r13)
/* 800AC3A8 000A92E8  48 01 E5 69 */	bl strlen
/* 800AC3AC 000A92EC  7C 64 1B 78 */	mr r4, r3
/* 800AC3B0 000A92F0  38 1F 00 01 */	addi r0, r31, 1
/* 800AC3B4 000A92F4  80 6D 8A B8 */	lwz r3, JASDram@sda21(r13)
/* 800AC3B8 000A92F8  7C 84 02 14 */	add r4, r4, r0
/* 800AC3BC 000A92FC  38 A0 00 00 */	li r5, 0
/* 800AC3C0 000A9300  4B F7 72 81 */	bl alloc__7JKRHeapFUli
/* 800AC3C4 000A9304  80 AD 81 A0 */	lwz r5, audioResPath__18JAIGlobalParameter@sda21(r13)
/* 800AC3C8 000A9308  7C 7F 1B 78 */	mr r31, r3
/* 800AC3CC 000A930C  80 CD 81 94 */	lwz r6, wavePath__18JAIGlobalParameter@sda21(r13)
/* 800AC3D0 000A9310  38 82 8B A8 */	addi r4, r2, lbl_80516F08@sda21
/* 800AC3D4 000A9314  38 E0 00 00 */	li r7, 0
/* 800AC3D8 000A9318  4C C6 31 82 */	crclr 6
/* 800AC3DC 000A931C  48 01 B0 5D */	bl sprintf
/* 800AC3E0 000A9320  93 ED 81 94 */	stw r31, wavePath__18JAIGlobalParameter@sda21(r13)
/* 800AC3E4 000A9324  80 6D 81 9C */	lwz r3, streamPath__18JAIGlobalParameter@sda21(r13)
/* 800AC3E8 000A9328  48 01 E5 29 */	bl strlen
/* 800AC3EC 000A932C  7C 7F 1B 78 */	mr r31, r3
/* 800AC3F0 000A9330  80 6D 81 A0 */	lwz r3, audioResPath__18JAIGlobalParameter@sda21(r13)
/* 800AC3F4 000A9334  48 01 E5 1D */	bl strlen
/* 800AC3F8 000A9338  7C 64 1B 78 */	mr r4, r3
/* 800AC3FC 000A933C  38 1F 00 01 */	addi r0, r31, 1
/* 800AC400 000A9340  80 6D 8A B8 */	lwz r3, JASDram@sda21(r13)
/* 800AC404 000A9344  7C 84 02 14 */	add r4, r4, r0
/* 800AC408 000A9348  38 A0 00 00 */	li r5, 0
/* 800AC40C 000A934C  4B F7 72 35 */	bl alloc__7JKRHeapFUli
/* 800AC410 000A9350  80 AD 81 A0 */	lwz r5, audioResPath__18JAIGlobalParameter@sda21(r13)
/* 800AC414 000A9354  7C 7F 1B 78 */	mr r31, r3
/* 800AC418 000A9358  80 CD 81 9C */	lwz r6, streamPath__18JAIGlobalParameter@sda21(r13)
/* 800AC41C 000A935C  38 82 8B A8 */	addi r4, r2, lbl_80516F08@sda21
/* 800AC420 000A9360  38 E0 00 00 */	li r7, 0
/* 800AC424 000A9364  4C C6 31 82 */	crclr 6
/* 800AC428 000A9368  48 01 B0 11 */	bl sprintf
/* 800AC42C 000A936C  93 ED 81 9C */	stw r31, streamPath__18JAIGlobalParameter@sda21(r13)
.L_800AC430:
/* 800AC430 000A9370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC434 000A9374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC438 000A9378  7C 08 03 A6 */	mtlr r0
/* 800AC43C 000A937C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC440 000A9380  4E 80 00 20 */	blr 
.endfn initResourcePath__8JAIBasicFv

.fn setCameraInfo__8JAIBasicFP3VecP3VecPA4_fUl, global
/* 800AC444 000A9384  80 0D 81 D4 */	lwz r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
/* 800AC448 000A9388  7C 00 38 40 */	cmplw r0, r7
/* 800AC44C 000A938C  4C 81 00 20 */	blelr 
/* 800AC450 000A9390  1D 07 00 0C */	mulli r8, r7, 0xc
/* 800AC454 000A9394  80 E3 00 04 */	lwz r7, 4(r3)
/* 800AC458 000A9398  7C 87 41 2E */	stwx r4, r7, r8
/* 800AC45C 000A939C  80 03 00 04 */	lwz r0, 4(r3)
/* 800AC460 000A93A0  7C 80 42 14 */	add r4, r0, r8
/* 800AC464 000A93A4  90 A4 00 04 */	stw r5, 4(r4)
/* 800AC468 000A93A8  80 03 00 04 */	lwz r0, 4(r3)
/* 800AC46C 000A93AC  7C 60 42 14 */	add r3, r0, r8
/* 800AC470 000A93B0  90 C3 00 08 */	stw r6, 8(r3)
/* 800AC474 000A93B4  4E 80 00 20 */	blr 
.endfn setCameraInfo__8JAIBasicFP3VecP3VecPA4_fUl

.fn setRegisterTrackCallback__8JAIBasicFv, global
/* 800AC478 000A93B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC47C 000A93BC  7C 08 02 A6 */	mflr r0
/* 800AC480 000A93C0  3C 60 80 0B */	lis r3, setParameterSeqSync__8JAIBasicFP8JASTrackUs@ha
/* 800AC484 000A93C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC488 000A93C8  38 63 CB 1C */	addi r3, r3, setParameterSeqSync__8JAIBasicFP8JASTrackUs@l
/* 800AC48C 000A93CC  4B FF 62 C1 */	bl registerSeqCallback__8JASTrackFPFP8JASTrackUs_Us
/* 800AC490 000A93D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC494 000A93D4  7C 08 03 A6 */	mtlr r0
/* 800AC498 000A93D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC49C 000A93DC  4E 80 00 20 */	blr 
.endfn setRegisterTrackCallback__8JAIBasicFv

.fn initAudioThread__8JAIBasicFP12JKRSolidHeapUlUc, global
/* 800AC4A0 000A93E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC4A4 000A93E4  7C 08 02 A6 */	mflr r0
/* 800AC4A8 000A93E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC4AC 000A93EC  7C 80 23 78 */	mr r0, r4
/* 800AC4B0 000A93F0  38 80 20 00 */	li r4, 0x2000
/* 800AC4B4 000A93F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC4B8 000A93F8  7C BF 2B 78 */	mr r31, r5
/* 800AC4BC 000A93FC  93 C1 00 08 */	stw r30, 8(r1)
/* 800AC4C0 000A9400  7C 7E 1B 78 */	mr r30, r3
/* 800AC4C4 000A9404  7C 03 03 78 */	mr r3, r0
/* 800AC4C8 000A9408  4B FF AD DD */	bl setupRootHeap__9JASKernelFP12JKRSolidHeapUl
/* 800AC4CC 000A940C  48 02 64 45 */	bl ARGetBaseAddress
/* 800AC4D0 000A9410  7F E4 FB 78 */	mr r4, r31
/* 800AC4D4 000A9414  4B FF AE F9 */	bl setupAramHeap__9JASKernelFUlUl
/* 800AC4D8 000A9418  80 6D 81 D8 */	lwz r3, systemTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800AC4DC 000A941C  4B FF 62 79 */	bl newMemPool__8JASTrackFi
/* 800AC4E0 000A9420  88 6D 81 62 */	lbz r3, audioDvdThreadPriority__18JAIGlobalParameter@sda21(r13)
/* 800AC4E4 000A9424  38 80 00 80 */	li r4, 0x80
/* 800AC4E8 000A9428  38 A0 10 00 */	li r5, 0x1000
/* 800AC4EC 000A942C  4B FF A4 A9 */	bl createThread__6JASDvdFliUl
/* 800AC4F0 000A9430  88 6D 81 61 */	lbz r3, audioSystemThreadPriority__18JAIGlobalParameter@sda21(r13)
/* 800AC4F4 000A9434  4B FF 96 95 */	bl create__14JASAudioThreadFl
/* 800AC4F8 000A9438  7F C3 F3 78 */	mr r3, r30
/* 800AC4FC 000A943C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800AC500 000A9440  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 800AC504 000A9444  7D 89 03 A6 */	mtctr r12
/* 800AC508 000A9448  4E 80 04 21 */	bctrl 
/* 800AC50C 000A944C  C0 2D 81 A8 */	lfs f1, inputGainDown__18JAIGlobalParameter@sda21(r13)
/* 800AC510 000A9450  C0 4D 81 AC */	lfs f2, outputGainUp__18JAIGlobalParameter@sda21(r13)
/* 800AC514 000A9454  4B FF 83 45 */	bl setMixerLevel__9JASDriverFff
/* 800AC518 000A9458  38 00 00 00 */	li r0, 0
/* 800AC51C 000A945C  98 0D 81 58 */	stb r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800AC520 000A9460  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC524 000A9464  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC528 000A9468  83 C1 00 08 */	lwz r30, 8(r1)
/* 800AC52C 000A946C  7C 08 03 A6 */	mtlr r0
/* 800AC530 000A9470  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC534 000A9474  4E 80 00 20 */	blr 
.endfn initAudioThread__8JAIBasicFP12JKRSolidHeapUlUc

.fn initCamera__8JAIBasicFv, global
/* 800AC538 000A9478  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800AC53C 000A947C  7C 08 02 A6 */	mflr r0
/* 800AC540 000A9480  38 A0 00 20 */	li r5, 0x20
/* 800AC544 000A9484  90 01 00 34 */	stw r0, 0x34(r1)
/* 800AC548 000A9488  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800AC54C 000A948C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800AC550 000A9490  7C 7E 1B 78 */	mr r30, r3
/* 800AC554 000A9494  83 ED 81 D4 */	lwz r31, audioCameraMax__18JAIGlobalParameter@sda21(r13)
/* 800AC558 000A9498  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AC55C 000A949C  1C 7F 00 0C */	mulli r3, r31, 0xc
/* 800AC560 000A94A0  38 63 00 10 */	addi r3, r3, 0x10
/* 800AC564 000A94A4  4B F7 7A E5 */	bl __nwa__FUlP7JKRHeapi
/* 800AC568 000A94A8  3C 80 80 0B */	lis r4, __defctor__Q27JAInter6CameraFv@ha
/* 800AC56C 000A94AC  7F E7 FB 78 */	mr r7, r31
/* 800AC570 000A94B0  38 84 C6 90 */	addi r4, r4, __defctor__Q27JAInter6CameraFv@l
/* 800AC574 000A94B4  38 A0 00 00 */	li r5, 0
/* 800AC578 000A94B8  38 C0 00 0C */	li r6, 0xc
/* 800AC57C 000A94BC  48 01 54 75 */	bl __construct_new_array
/* 800AC580 000A94C0  90 7E 00 04 */	stw r3, 4(r30)
/* 800AC584 000A94C4  80 7E 00 04 */	lwz r3, 4(r30)
/* 800AC588 000A94C8  80 03 00 00 */	lwz r0, 0(r3)
/* 800AC58C 000A94CC  28 00 00 00 */	cmplwi r0, 0
/* 800AC590 000A94D0  40 82 00 E8 */	bne .L_800AC678
/* 800AC594 000A94D4  3C 60 80 51 */	lis r3, nullCamera__Q27JAInter5Const@ha
/* 800AC598 000A94D8  C0 82 8B B0 */	lfs f4, lbl_80516F10@sda21(r2)
/* 800AC59C 000A94DC  3B E3 21 B0 */	addi r31, r3, nullCamera__Q27JAInter5Const@l
/* 800AC5A0 000A94E0  C0 02 8B B4 */	lfs f0, lbl_80516F14@sda21(r2)
/* 800AC5A4 000A94E4  80 BF 00 00 */	lwz r5, 0(r31)
/* 800AC5A8 000A94E8  3C 60 80 51 */	lis r3, camMtx__Q27JAInter5Const@ha
/* 800AC5AC 000A94EC  3C 80 80 4A */	lis r4, dummyZeroVec__Q27JAInter5Const@ha
/* 800AC5B0 000A94F0  C0 62 8B B8 */	lfs f3, lbl_80516F18@sda21(r2)
/* 800AC5B4 000A94F4  D0 85 00 00 */	stfs f4, 0(r5)
/* 800AC5B8 000A94F8  38 63 22 2C */	addi r3, r3, camMtx__Q27JAInter5Const@l
/* 800AC5BC 000A94FC  38 A1 00 14 */	addi r5, r1, 0x14
/* 800AC5C0 000A9500  38 C1 00 08 */	addi r6, r1, 8
/* 800AC5C4 000A9504  80 FF 00 00 */	lwz r7, 0(r31)
/* 800AC5C8 000A9508  D0 87 00 04 */	stfs f4, 4(r7)
/* 800AC5CC 000A950C  80 FF 00 00 */	lwz r7, 0(r31)
/* 800AC5D0 000A9510  D0 07 00 08 */	stfs f0, 8(r7)
/* 800AC5D4 000A9514  80 FF 00 04 */	lwz r7, 4(r31)
/* 800AC5D8 000A9518  D0 87 00 00 */	stfs f4, 0(r7)
/* 800AC5DC 000A951C  80 FF 00 04 */	lwz r7, 4(r31)
/* 800AC5E0 000A9520  D0 87 00 04 */	stfs f4, 4(r7)
/* 800AC5E4 000A9524  80 FF 00 04 */	lwz r7, 4(r31)
/* 800AC5E8 000A9528  D0 07 00 08 */	stfs f0, 8(r7)
/* 800AC5EC 000A952C  C4 44 62 70 */	lfsu f2, dummyZeroVec__Q27JAInter5Const@l(r4)
/* 800AC5F0 000A9530  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 800AC5F4 000A9534  C0 24 00 04 */	lfs f1, 4(r4)
/* 800AC5F8 000A9538  C0 04 00 08 */	lfs f0, 8(r4)
/* 800AC5FC 000A953C  80 9F 00 00 */	lwz r4, 0(r31)
/* 800AC600 000A9540  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 800AC604 000A9544  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 800AC608 000A9548  D0 41 00 08 */	stfs f2, 8(r1)
/* 800AC60C 000A954C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 800AC610 000A9550  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 800AC614 000A9554  48 03 E2 E5 */	bl C_MTXLookAt
/* 800AC618 000A9558  3C 80 80 51 */	lis r4, nullCamera__Q27JAInter5Const@ha
/* 800AC61C 000A955C  3C 60 80 51 */	lis r3, camMtx__Q27JAInter5Const@ha
/* 800AC620 000A9560  38 C4 21 B0 */	addi r6, r4, nullCamera__Q27JAInter5Const@l
/* 800AC624 000A9564  39 40 00 00 */	li r10, 0
/* 800AC628 000A9568  38 83 22 2C */	addi r4, r3, camMtx__Q27JAInter5Const@l
/* 800AC62C 000A956C  39 20 00 00 */	li r9, 0
/* 800AC630 000A9570  48 00 00 3C */	b .L_800AC66C
.L_800AC634:
/* 800AC634 000A9574  7C 00 50 40 */	cmplw r0, r10
/* 800AC638 000A9578  81 1F 00 04 */	lwz r8, 4(r31)
/* 800AC63C 000A957C  80 E6 00 00 */	lwz r7, 0(r6)
/* 800AC640 000A9580  40 81 00 24 */	ble .L_800AC664
/* 800AC644 000A9584  80 BE 00 04 */	lwz r5, 4(r30)
/* 800AC648 000A9588  38 69 00 04 */	addi r3, r9, 4
/* 800AC64C 000A958C  38 09 00 08 */	addi r0, r9, 8
/* 800AC650 000A9590  7C E5 49 2E */	stwx r7, r5, r9
/* 800AC654 000A9594  80 BE 00 04 */	lwz r5, 4(r30)
/* 800AC658 000A9598  7D 05 19 2E */	stwx r8, r5, r3
/* 800AC65C 000A959C  80 7E 00 04 */	lwz r3, 4(r30)
/* 800AC660 000A95A0  7C 83 01 2E */	stwx r4, r3, r0
.L_800AC664:
/* 800AC664 000A95A4  39 29 00 0C */	addi r9, r9, 0xc
/* 800AC668 000A95A8  39 4A 00 01 */	addi r10, r10, 1
.L_800AC66C:
/* 800AC66C 000A95AC  80 0D 81 D4 */	lwz r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
/* 800AC670 000A95B0  7C 0A 00 40 */	cmplw r10, r0
/* 800AC674 000A95B4  41 80 FF C0 */	blt .L_800AC634
.L_800AC678:
/* 800AC678 000A95B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800AC67C 000A95BC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800AC680 000A95C0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800AC684 000A95C4  7C 08 03 A6 */	mtlr r0
/* 800AC688 000A95C8  38 21 00 30 */	addi r1, r1, 0x30
/* 800AC68C 000A95CC  4E 80 00 20 */	blr 
.endfn initCamera__8JAIBasicFv

.fn __defctor__Q27JAInter6CameraFv, weak
/* 800AC690 000A95D0  38 00 00 00 */	li r0, 0
/* 800AC694 000A95D4  90 03 00 00 */	stw r0, 0(r3)
/* 800AC698 000A95D8  90 03 00 04 */	stw r0, 4(r3)
/* 800AC69C 000A95DC  90 03 00 08 */	stw r0, 8(r3)
/* 800AC6A0 000A95E0  4E 80 00 20 */	blr 
.endfn __defctor__Q27JAInter6CameraFv

.fn setInitFileLoadSwitch__8JAIBasicFUc, global
/* 800AC6A4 000A95E4  98 83 00 0C */	stb r4, 0xc(r3)
/* 800AC6A8 000A95E8  4E 80 00 20 */	blr 
.endfn setInitFileLoadSwitch__8JAIBasicFUc

.fn initReadFile__8JAIBasicFv, global
/* 800AC6AC 000A95EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC6B0 000A95F0  7C 08 02 A6 */	mflr r0
/* 800AC6B4 000A95F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC6B8 000A95F8  88 03 00 0C */	lbz r0, 0xc(r3)
/* 800AC6BC 000A95FC  2C 00 00 03 */	cmpwi r0, 3
/* 800AC6C0 000A9600  41 82 00 44 */	beq .L_800AC704
/* 800AC6C4 000A9604  40 80 00 10 */	bge .L_800AC6D4
/* 800AC6C8 000A9608  2C 00 00 02 */	cmpwi r0, 2
/* 800AC6CC 000A960C  40 80 00 14 */	bge .L_800AC6E0
/* 800AC6D0 000A9610  48 00 00 34 */	b .L_800AC704
.L_800AC6D4:
/* 800AC6D4 000A9614  2C 00 00 05 */	cmpwi r0, 5
/* 800AC6D8 000A9618  40 80 00 2C */	bge .L_800AC704
/* 800AC6DC 000A961C  48 00 00 18 */	b .L_800AC6F4
.L_800AC6E0:
/* 800AC6E0 000A9620  48 00 14 D5 */	bl checkInitDataFile__Q27JAInter8InitDataFv
/* 800AC6E4 000A9624  2C 03 00 00 */	cmpwi r3, 0
/* 800AC6E8 000A9628  40 82 00 1C */	bne .L_800AC704
/* 800AC6EC 000A962C  38 60 00 00 */	li r3, 0
/* 800AC6F0 000A9630  48 00 00 18 */	b .L_800AC708
.L_800AC6F4:
/* 800AC6F4 000A9634  80 0D 8B C8 */	lwz r0, aafPointer__Q27JAInter8InitData@sda21(r13)
/* 800AC6F8 000A9638  28 00 00 00 */	cmplwi r0, 0
/* 800AC6FC 000A963C  41 82 00 08 */	beq .L_800AC704
/* 800AC700 000A9640  48 00 15 99 */	bl checkInitDataOnMemory__Q27JAInter8InitDataFv
.L_800AC704:
/* 800AC704 000A9644  38 60 00 01 */	li r3, 1
.L_800AC708:
/* 800AC708 000A9648  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC70C 000A964C  7C 08 03 A6 */	mtlr r0
/* 800AC710 000A9650  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC714 000A9654  4E 80 00 20 */	blr 
.endfn initReadFile__8JAIBasicFv

.fn processFrameWork__8JAIBasicFv, global
/* 800AC718 000A9658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC71C 000A965C  7C 08 02 A6 */	mflr r0
/* 800AC720 000A9660  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC724 000A9664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC728 000A9668  7C 7F 1B 78 */	mr r31, r3
/* 800AC72C 000A966C  88 0D 81 58 */	lbz r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800AC730 000A9670  28 00 00 02 */	cmplwi r0, 2
/* 800AC734 000A9674  40 80 00 28 */	bge .L_800AC75C
/* 800AC738 000A9678  48 00 0E 9D */	bl check__Q27JAInter14DummyObjectMgrFv
/* 800AC73C 000A967C  81 8D 81 50 */	lwz r12, secondLoadCallback__Q27JAInter8BankWave@sda21(r13)
/* 800AC740 000A9680  28 0C 00 00 */	cmplwi r12, 0
/* 800AC744 000A9684  41 82 00 0C */	beq .L_800AC750
/* 800AC748 000A9688  7D 89 03 A6 */	mtctr r12
/* 800AC74C 000A968C  4E 80 04 21 */	bctrl 
.L_800AC750:
/* 800AC750 000A9690  48 00 1E 7D */	bl processGFrameSe__Q27JAInter5SeMgrFv
/* 800AC754 000A9694  48 00 49 59 */	bl processGFrameSequence__Q27JAInter11SequenceMgrFv
/* 800AC758 000A9698  48 00 C2 45 */	bl processGFrameStream__Q27JAInter9StreamMgrFv
.L_800AC75C:
/* 800AC75C 000A969C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 800AC760 000A96A0  38 03 00 01 */	addi r0, r3, 1
/* 800AC764 000A96A4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 800AC768 000A96A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC76C 000A96AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC770 000A96B0  7C 08 03 A6 */	mtlr r0
/* 800AC774 000A96B4  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC778 000A96B8  4E 80 00 20 */	blr 
.endfn processFrameWork__8JAIBasicFv

.fn startSoundBasic__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo, global
/* 800AC77C 000A96BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC780 000A96C0  7C 08 02 A6 */	mflr r0
/* 800AC784 000A96C4  54 8B 00 02 */	rlwinm r11, r4, 0, 0, 1
/* 800AC788 000A96C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC78C 000A96CC  3C 00 C0 00 */	lis r0, 0xc000
/* 800AC790 000A96D0  7C 0B 00 00 */	cmpw r11, r0
/* 800AC794 000A96D4  41 82 00 38 */	beq .L_800AC7CC
/* 800AC798 000A96D8  40 80 00 18 */	bge .L_800AC7B0
/* 800AC79C 000A96DC  3D 40 80 00 */	lis r10, 0x80000001@ha
/* 800AC7A0 000A96E0  38 0A 00 01 */	addi r0, r10, 0x80000001@l
/* 800AC7A4 000A96E4  7C 0B 00 00 */	cmpw r11, r0
/* 800AC7A8 000A96E8  40 80 00 28 */	bge .L_800AC7D0
/* 800AC7AC 000A96EC  48 00 00 10 */	b .L_800AC7BC
.L_800AC7B0:
/* 800AC7B0 000A96F0  2C 0B 00 00 */	cmpwi r11, 0
/* 800AC7B4 000A96F4  41 82 00 10 */	beq .L_800AC7C4
/* 800AC7B8 000A96F8  48 00 00 18 */	b .L_800AC7D0
.L_800AC7BC:
/* 800AC7BC 000A96FC  48 00 00 25 */	bl startSoundBasic__8JAIBasicFUlPP11JAISequencePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
/* 800AC7C0 000A9700  48 00 00 10 */	b .L_800AC7D0
.L_800AC7C4:
/* 800AC7C4 000A9704  48 00 00 A1 */	bl startSoundBasic__8JAIBasicFUlPP5JAISePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
/* 800AC7C8 000A9708  48 00 00 08 */	b .L_800AC7D0
.L_800AC7CC:
/* 800AC7CC 000A970C  48 00 00 FD */	bl startSoundBasic__8JAIBasicFUlPP9JAIStreamPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
.L_800AC7D0:
/* 800AC7D0 000A9710  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC7D4 000A9714  7C 08 03 A6 */	mtlr r0
/* 800AC7D8 000A9718  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC7DC 000A971C  4E 80 00 20 */	blr 
.endfn startSoundBasic__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo

.fn startSoundBasic__8JAIBasicFUlPP11JAISequencePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo, global
/* 800AC7E0 000A9720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC7E4 000A9724  7C 08 02 A6 */	mflr r0
/* 800AC7E8 000A9728  7C 8A 23 78 */	mr r10, r4
/* 800AC7EC 000A972C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC7F0 000A9730  88 03 00 0E */	lbz r0, 0xe(r3)
/* 800AC7F4 000A9734  54 00 D7 FE */	rlwinm r0, r0, 0x1a, 0x1f, 0x1f
/* 800AC7F8 000A9738  28 00 00 01 */	cmplwi r0, 1
/* 800AC7FC 000A973C  41 82 00 58 */	beq .L_800AC854
/* 800AC800 000A9740  80 6D 8B E0 */	lwz r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
/* 800AC804 000A9744  28 03 00 00 */	cmplwi r3, 0
/* 800AC808 000A9748  41 82 00 18 */	beq .L_800AC820
/* 800AC80C 000A974C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 800AC810 000A9750  55 40 05 BE */	clrlwi r0, r10, 0x16
/* 800AC814 000A9754  54 63 05 BE */	clrlwi r3, r3, 0x16
/* 800AC818 000A9758  7C 03 00 40 */	cmplw r3, r0
/* 800AC81C 000A975C  41 82 00 38 */	beq .L_800AC854
.L_800AC820:
/* 800AC820 000A9760  28 05 00 00 */	cmplwi r5, 0
/* 800AC824 000A9764  40 82 00 14 */	bne .L_800AC838
/* 800AC828 000A9768  88 09 00 05 */	lbz r0, 5(r9)
/* 800AC82C 000A976C  80 6D 8C 0C */	lwz r3, FixSeqBufPointer__Q27JAInter11SequenceMgr@sda21(r13)
/* 800AC830 000A9770  54 00 10 3A */	slwi r0, r0, 2
/* 800AC834 000A9774  7C A3 02 14 */	add r5, r3, r0
.L_800AC838:
/* 800AC838 000A9778  7C A3 2B 78 */	mr r3, r5
/* 800AC83C 000A977C  7C C4 33 78 */	mr r4, r6
/* 800AC840 000A9780  7D 45 53 78 */	mr r5, r10
/* 800AC844 000A9784  7C E6 3B 78 */	mr r6, r7
/* 800AC848 000A9788  7D 07 43 78 */	mr r7, r8
/* 800AC84C 000A978C  7D 28 4B 78 */	mr r8, r9
/* 800AC850 000A9790  48 00 66 49 */	bl storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
.L_800AC854:
/* 800AC854 000A9794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC858 000A9798  7C 08 03 A6 */	mtlr r0
/* 800AC85C 000A979C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC860 000A97A0  4E 80 00 20 */	blr 
.endfn startSoundBasic__8JAIBasicFUlPP11JAISequencePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo

.fn startSoundBasic__8JAIBasicFUlPP5JAISePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo, global
/* 800AC864 000A97A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC868 000A97A8  7C 08 02 A6 */	mflr r0
/* 800AC86C 000A97AC  7C 8A 23 78 */	mr r10, r4
/* 800AC870 000A97B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC874 000A97B4  54 80 A3 3E */	srwi r0, r4, 0xc
/* 800AC878 000A97B8  80 6D 8B F0 */	lwz r3, seEntryCancel__Q27JAInter5SeMgr@sda21(r13)
/* 800AC87C 000A97BC  7C 03 00 AE */	lbzx r0, r3, r0
/* 800AC880 000A97C0  28 00 00 00 */	cmplwi r0, 0
/* 800AC884 000A97C4  40 82 00 24 */	bne .L_800AC8A8
/* 800AC888 000A97C8  7C A3 2B 78 */	mr r3, r5
/* 800AC88C 000A97CC  7C C4 33 78 */	mr r4, r6
/* 800AC890 000A97D0  7D 45 53 78 */	mr r5, r10
/* 800AC894 000A97D4  7C E6 3B 78 */	mr r6, r7
/* 800AC898 000A97D8  7D 07 43 78 */	mr r7, r8
/* 800AC89C 000A97DC  7D 28 4B 78 */	mr r8, r9
/* 800AC8A0 000A97E0  48 00 31 85 */	bl storeSeBuffer__Q27JAInter5SeMgrFPP5JAISePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
/* 800AC8A4 000A97E4  48 00 00 14 */	b .L_800AC8B8
.L_800AC8A8:
/* 800AC8A8 000A97E8  28 05 00 00 */	cmplwi r5, 0
/* 800AC8AC 000A97EC  41 82 00 0C */	beq .L_800AC8B8
/* 800AC8B0 000A97F0  38 00 00 00 */	li r0, 0
/* 800AC8B4 000A97F4  90 05 00 00 */	stw r0, 0(r5)
.L_800AC8B8:
/* 800AC8B8 000A97F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC8BC 000A97FC  7C 08 03 A6 */	mtlr r0
/* 800AC8C0 000A9800  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC8C4 000A9804  4E 80 00 20 */	blr 
.endfn startSoundBasic__8JAIBasicFUlPP5JAISePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo

.fn startSoundBasic__8JAIBasicFUlPP9JAIStreamPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo, global
/* 800AC8C8 000A9808  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC8CC 000A980C  7C 08 02 A6 */	mflr r0
/* 800AC8D0 000A9810  7C 8A 23 78 */	mr r10, r4
/* 800AC8D4 000A9814  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC8D8 000A9818  88 03 00 0E */	lbz r0, 0xe(r3)
/* 800AC8DC 000A981C  54 00 DF FE */	rlwinm r0, r0, 0x1b, 0x1f, 0x1f
/* 800AC8E0 000A9820  28 00 00 01 */	cmplwi r0, 1
/* 800AC8E4 000A9824  41 82 00 2C */	beq .L_800AC910
/* 800AC8E8 000A9828  88 0D 8C 40 */	lbz r0, flags__Q27JAInter9StreamMgr@sda21(r13)
/* 800AC8EC 000A982C  54 00 D7 FF */	rlwinm. r0, r0, 0x1a, 0x1f, 0x1f
/* 800AC8F0 000A9830  40 82 00 20 */	bne .L_800AC910
/* 800AC8F4 000A9834  7C A3 2B 78 */	mr r3, r5
/* 800AC8F8 000A9838  7C C4 33 78 */	mr r4, r6
/* 800AC8FC 000A983C  7D 45 53 78 */	mr r5, r10
/* 800AC900 000A9840  7C E6 3B 78 */	mr r6, r7
/* 800AC904 000A9844  7D 07 43 78 */	mr r7, r8
/* 800AC908 000A9848  7D 28 4B 78 */	mr r8, r9
/* 800AC90C 000A984C  48 00 B0 5D */	bl storeStreamBuffer__Q27JAInter9StreamMgrFPP9JAIStreamPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
.L_800AC910:
/* 800AC910 000A9850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC914 000A9854  7C 08 03 A6 */	mtlr r0
/* 800AC918 000A9858  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC91C 000A985C  4E 80 00 20 */	blr 
.endfn startSoundBasic__8JAIBasicFUlPP9JAIStreamPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo

.fn stopSoundHandle__8JAIBasicFP8JAISoundUl, global
/* 800AC920 000A9860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC924 000A9864  7C 08 02 A6 */	mflr r0
/* 800AC928 000A9868  28 04 00 00 */	cmplwi r4, 0
/* 800AC92C 000A986C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC930 000A9870  41 82 00 68 */	beq .L_800AC998
/* 800AC934 000A9874  80 64 00 20 */	lwz r3, 0x20(r4)
/* 800AC938 000A9878  3C 00 C0 00 */	lis r0, 0xc000
/* 800AC93C 000A987C  54 66 00 02 */	rlwinm r6, r3, 0, 0, 1
/* 800AC940 000A9880  7C 06 00 00 */	cmpw r6, r0
/* 800AC944 000A9884  41 82 00 48 */	beq .L_800AC98C
/* 800AC948 000A9888  40 80 00 18 */	bge .L_800AC960
/* 800AC94C 000A988C  3C 60 80 00 */	lis r3, 0x80000001@ha
/* 800AC950 000A9890  38 03 00 01 */	addi r0, r3, 0x80000001@l
/* 800AC954 000A9894  7C 06 00 00 */	cmpw r6, r0
/* 800AC958 000A9898  40 80 00 40 */	bge .L_800AC998
/* 800AC95C 000A989C  48 00 00 10 */	b .L_800AC96C
.L_800AC960:
/* 800AC960 000A98A0  2C 06 00 00 */	cmpwi r6, 0
/* 800AC964 000A98A4  41 82 00 18 */	beq .L_800AC97C
/* 800AC968 000A98A8  48 00 00 30 */	b .L_800AC998
.L_800AC96C:
/* 800AC96C 000A98AC  7C 83 23 78 */	mr r3, r4
/* 800AC970 000A98B0  7C A4 2B 78 */	mr r4, r5
/* 800AC974 000A98B4  48 00 6C DD */	bl releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
/* 800AC978 000A98B8  48 00 00 20 */	b .L_800AC998
.L_800AC97C:
/* 800AC97C 000A98BC  7C 83 23 78 */	mr r3, r4
/* 800AC980 000A98C0  7C A4 2B 78 */	mr r4, r5
/* 800AC984 000A98C4  48 00 37 AD */	bl releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
/* 800AC988 000A98C8  48 00 00 10 */	b .L_800AC998
.L_800AC98C:
/* 800AC98C 000A98CC  7C 83 23 78 */	mr r3, r4
/* 800AC990 000A98D0  7C A4 2B 78 */	mr r4, r5
/* 800AC994 000A98D4  48 00 B3 2D */	bl releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl
.L_800AC998:
/* 800AC998 000A98D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC99C 000A98DC  7C 08 03 A6 */	mtlr r0
/* 800AC9A0 000A98E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC9A4 000A98E4  4E 80 00 20 */	blr 
.endfn stopSoundHandle__8JAIBasicFP8JAISoundUl

.fn stopAllSe__8JAIBasicFUc, global
/* 800AC9A8 000A98E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC9AC 000A98EC  7C 08 02 A6 */	mflr r0
/* 800AC9B0 000A98F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC9B4 000A98F4  54 80 1D 78 */	rlwinm r0, r4, 3, 0x15, 0x1c
/* 800AC9B8 000A98F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC9BC 000A98FC  80 6D 8B DC */	lwz r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
/* 800AC9C0 000A9900  7C 63 02 14 */	add r3, r3, r0
/* 800AC9C4 000A9904  80 63 00 04 */	lwz r3, 4(r3)
/* 800AC9C8 000A9908  83 E3 00 00 */	lwz r31, 0(r3)
/* 800AC9CC 000A990C  48 00 00 6C */	b .L_800ACA38
.L_800AC9D0:
/* 800AC9D0 000A9910  80 7F 00 00 */	lwz r3, 0(r31)
/* 800AC9D4 000A9914  83 FF 00 0C */	lwz r31, 0xc(r31)
/* 800AC9D8 000A9918  28 03 00 00 */	cmplwi r3, 0
/* 800AC9DC 000A991C  41 82 00 5C */	beq .L_800ACA38
/* 800AC9E0 000A9920  80 83 00 20 */	lwz r4, 0x20(r3)
/* 800AC9E4 000A9924  3C 00 C0 00 */	lis r0, 0xc000
/* 800AC9E8 000A9928  54 85 00 02 */	rlwinm r5, r4, 0, 0, 1
/* 800AC9EC 000A992C  7C 05 00 00 */	cmpw r5, r0
/* 800AC9F0 000A9930  41 82 00 40 */	beq .L_800ACA30
/* 800AC9F4 000A9934  40 80 00 18 */	bge .L_800ACA0C
/* 800AC9F8 000A9938  3C 80 80 00 */	lis r4, 0x80000001@ha
/* 800AC9FC 000A993C  38 04 00 01 */	addi r0, r4, 0x80000001@l
/* 800ACA00 000A9940  7C 05 00 00 */	cmpw r5, r0
/* 800ACA04 000A9944  40 80 00 34 */	bge .L_800ACA38
/* 800ACA08 000A9948  48 00 00 10 */	b .L_800ACA18
.L_800ACA0C:
/* 800ACA0C 000A994C  2C 05 00 00 */	cmpwi r5, 0
/* 800ACA10 000A9950  41 82 00 14 */	beq .L_800ACA24
/* 800ACA14 000A9954  48 00 00 24 */	b .L_800ACA38
.L_800ACA18:
/* 800ACA18 000A9958  38 80 00 00 */	li r4, 0
/* 800ACA1C 000A995C  48 00 6C 35 */	bl releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
/* 800ACA20 000A9960  48 00 00 18 */	b .L_800ACA38
.L_800ACA24:
/* 800ACA24 000A9964  38 80 00 00 */	li r4, 0
/* 800ACA28 000A9968  48 00 37 09 */	bl releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
/* 800ACA2C 000A996C  48 00 00 0C */	b .L_800ACA38
.L_800ACA30:
/* 800ACA30 000A9970  38 80 00 00 */	li r4, 0
/* 800ACA34 000A9974  48 00 B2 8D */	bl releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl
.L_800ACA38:
/* 800ACA38 000A9978  28 1F 00 00 */	cmplwi r31, 0
/* 800ACA3C 000A997C  40 82 FF 94 */	bne .L_800AC9D0
/* 800ACA40 000A9980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACA44 000A9984  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ACA48 000A9988  7C 08 03 A6 */	mtlr r0
/* 800ACA4C 000A998C  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACA50 000A9990  4E 80 00 20 */	blr 
.endfn stopAllSe__8JAIBasicFUc

.fn stop__9JAIStreamFUl, weak
/* 800ACA54 000A9994  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACA58 000A9998  7C 08 02 A6 */	mflr r0
/* 800ACA5C 000A999C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACA60 000A99A0  48 00 B2 61 */	bl releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl
/* 800ACA64 000A99A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACA68 000A99A8  7C 08 03 A6 */	mtlr r0
/* 800ACA6C 000A99AC  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACA70 000A99B0  4E 80 00 20 */	blr 
.endfn stop__9JAIStreamFUl

.fn stop__11JAISequenceFUl, weak
/* 800ACA74 000A99B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACA78 000A99B8  7C 08 02 A6 */	mflr r0
/* 800ACA7C 000A99BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACA80 000A99C0  48 00 6B D1 */	bl releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
/* 800ACA84 000A99C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACA88 000A99C8  7C 08 03 A6 */	mtlr r0
/* 800ACA8C 000A99CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACA90 000A99D0  4E 80 00 20 */	blr 
.endfn stop__11JAISequenceFUl

.fn getMapInfoFxline__8JAIBasicFUl, global
/* 800ACA94 000A99D4  7C 04 00 D0 */	neg r0, r4
/* 800ACA98 000A99D8  7C 00 23 78 */	or r0, r0, r4
/* 800ACA9C 000A99DC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 800ACAA0 000A99E0  4E 80 00 20 */	blr 
.endfn getMapInfoFxline__8JAIBasicFUl

.fn getMapInfoGround__8JAIBasicFUl, global
/* 800ACAA4 000A99E4  7C 04 00 D0 */	neg r0, r4
/* 800ACAA8 000A99E8  7C 00 23 78 */	or r0, r0, r4
/* 800ACAAC 000A99EC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 800ACAB0 000A99F0  4E 80 00 20 */	blr 
.endfn getMapInfoGround__8JAIBasicFUl

.fn getMapInfoFxParameter__8JAIBasicFUl, global
/* 800ACAB4 000A99F4  28 04 00 00 */	cmplwi r4, 0
/* 800ACAB8 000A99F8  40 82 00 0C */	bne .L_800ACAC4
/* 800ACABC 000A99FC  C0 22 8B B0 */	lfs f1, lbl_80516F10@sda21(r2)
/* 800ACAC0 000A9A00  4E 80 00 20 */	blr 
.L_800ACAC4:
/* 800ACAC4 000A9A04  C0 22 8B B8 */	lfs f1, lbl_80516F18@sda21(r2)
/* 800ACAC8 000A9A08  4E 80 00 20 */	blr 
.endfn getMapInfoFxParameter__8JAIBasicFUl

.fn getSoundOffsetNumberFromID__8JAIBasicFUl, global
/* 800ACACC 000A9A0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACAD0 000A9A10  7C 08 02 A6 */	mflr r0
/* 800ACAD4 000A9A14  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACAD8 000A9A18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ACADC 000A9A1C  7C 9F 23 78 */	mr r31, r4
/* 800ACAE0 000A9A20  7F E3 FB 78 */	mr r3, r31
/* 800ACAE4 000A9A24  48 00 AA F9 */	bl getInfoFormat__Q27JAInter10SoundTableFUl
/* 800ACAE8 000A9A28  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 800ACAEC 000A9A2C  41 82 00 14 */	beq .L_800ACB00
/* 800ACAF0 000A9A30  7F E3 FB 78 */	mr r3, r31
/* 800ACAF4 000A9A34  48 00 AA 25 */	bl getInfoPointer__Q27JAInter10SoundTableFUl
/* 800ACAF8 000A9A38  A0 63 00 06 */	lhz r3, 6(r3)
/* 800ACAFC 000A9A3C  48 00 00 0C */	b .L_800ACB08
.L_800ACB00:
/* 800ACB00 000A9A40  57 E0 05 BE */	clrlwi r0, r31, 0x16
/* 800ACB04 000A9A44  7C 03 03 78 */	mr r3, r0
.L_800ACB08:
/* 800ACB08 000A9A48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACB0C 000A9A4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ACB10 000A9A50  7C 08 03 A6 */	mtlr r0
/* 800ACB14 000A9A54  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACB18 000A9A58  4E 80 00 20 */	blr 
.endfn getSoundOffsetNumberFromID__8JAIBasicFUl

.fn setParameterSeqSync__8JAIBasicFP8JASTrackUs, global
/* 800ACB1C 000A9A5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800ACB20 000A9A60  7C 08 02 A6 */	mflr r0
/* 800ACB24 000A9A64  90 01 00 24 */	stw r0, 0x24(r1)
/* 800ACB28 000A9A68  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 800ACB2C 000A9A6C  2C 00 00 01 */	cmpwi r0, 1
/* 800ACB30 000A9A70  BF 41 00 08 */	stmw r26, 8(r1)
/* 800ACB34 000A9A74  7C 7D 1B 78 */	mr r29, r3
/* 800ACB38 000A9A78  3B C0 00 00 */	li r30, 0
/* 800ACB3C 000A9A7C  41 82 01 04 */	beq .L_800ACC40
/* 800ACB40 000A9A80  40 80 00 10 */	bge .L_800ACB50
/* 800ACB44 000A9A84  2C 00 00 00 */	cmpwi r0, 0
/* 800ACB48 000A9A88  40 80 00 14 */	bge .L_800ACB5C
/* 800ACB4C 000A9A8C  48 00 01 94 */	b .L_800ACCE0
.L_800ACB50:
/* 800ACB50 000A9A90  2C 00 00 7F */	cmpwi r0, 0x7f
/* 800ACB54 000A9A94  41 82 01 80 */	beq .L_800ACCD4
/* 800ACB58 000A9A98  48 00 01 88 */	b .L_800ACCE0
.L_800ACB5C:
/* 800ACB5C 000A9A9C  54 1F 07 FE */	clrlwi r31, r0, 0x1f
/* 800ACB60 000A9AA0  3B 40 00 00 */	li r26, 0
/* 800ACB64 000A9AA4  48 00 00 CC */	b .L_800ACC30
.L_800ACB68:
/* 800ACB68 000A9AA8  7F 43 D3 78 */	mr r3, r26
/* 800ACB6C 000A9AAC  48 00 6C BD */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800ACB70 000A9AB0  80 03 00 48 */	lwz r0, 0x48(r3)
/* 800ACB74 000A9AB4  28 00 00 00 */	cmplwi r0, 0
/* 800ACB78 000A9AB8  41 82 00 B4 */	beq .L_800ACC2C
/* 800ACB7C 000A9ABC  7F 43 D3 78 */	mr r3, r26
/* 800ACB80 000A9AC0  48 00 6C A9 */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800ACB84 000A9AC4  80 83 00 48 */	lwz r4, 0x48(r3)
/* 800ACB88 000A9AC8  7F 43 D3 78 */	mr r3, r26
/* 800ACB8C 000A9ACC  3B 84 03 0C */	addi r28, r4, 0x30c
/* 800ACB90 000A9AD0  48 00 6C 99 */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800ACB94 000A9AD4  80 63 00 48 */	lwz r3, 0x48(r3)
/* 800ACB98 000A9AD8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 800ACB9C 000A9ADC  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 800ACBA0 000A9AE0  41 82 00 10 */	beq .L_800ACBB0
/* 800ACBA4 000A9AE4  80 7D 02 F8 */	lwz r3, 0x2f8(r29)
/* 800ACBA8 000A9AE8  83 63 02 F8 */	lwz r27, 0x2f8(r3)
/* 800ACBAC 000A9AEC  48 00 00 08 */	b .L_800ACBB4
.L_800ACBB0:
/* 800ACBB0 000A9AF0  83 7D 02 F8 */	lwz r27, 0x2f8(r29)
.L_800ACBB4:
/* 800ACBB4 000A9AF4  7C 1C D8 40 */	cmplw r28, r27
/* 800ACBB8 000A9AF8  40 82 00 74 */	bne .L_800ACC2C
/* 800ACBBC 000A9AFC  80 7D 03 48 */	lwz r3, 0x348(r29)
/* 800ACBC0 000A9B00  48 00 08 0D */	bl routeToTrack__7JAInterFUl
/* 800ACBC4 000A9B04  7C 60 1B 78 */	mr r0, r3
/* 800ACBC8 000A9B08  7F 43 D3 78 */	mr r3, r26
/* 800ACBCC 000A9B0C  7C 1C 03 78 */	mr r28, r0
/* 800ACBD0 000A9B10  48 00 6C 59 */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800ACBD4 000A9B14  80 63 00 48 */	lwz r3, 0x48(r3)
/* 800ACBD8 000A9B18  80 63 00 20 */	lwz r3, 0x20(r3)
/* 800ACBDC 000A9B1C  48 00 A9 3D */	bl getInfoPointer__Q27JAInter10SoundTableFUl
/* 800ACBE0 000A9B20  80 03 00 00 */	lwz r0, 0(r3)
/* 800ACBE4 000A9B24  7F 43 D3 78 */	mr r3, r26
/* 800ACBE8 000A9B28  54 00 C4 3E */	rlwinm r0, r0, 0x18, 0x10, 0x1f
/* 800ACBEC 000A9B2C  7C 1E 03 78 */	mr r30, r0
/* 800ACBF0 000A9B30  48 00 6C 39 */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800ACBF4 000A9B34  7F 64 DB 78 */	mr r4, r27
/* 800ACBF8 000A9B38  7F 85 E3 78 */	mr r5, r28
/* 800ACBFC 000A9B3C  7F C6 F3 78 */	mr r6, r30
/* 800ACC00 000A9B40  7F E7 FB 78 */	mr r7, r31
/* 800ACC04 000A9B44  48 00 C5 61 */	bl outerInit__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataP8JASTrackUlUsUc
/* 800ACC08 000A9B48  7F 43 D3 78 */	mr r3, r26
/* 800ACC0C 000A9B4C  48 00 6C 1D */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800ACC10 000A9B50  38 00 00 01 */	li r0, 1
/* 800ACC14 000A9B54  80 83 00 04 */	lwz r4, 4(r3)
/* 800ACC18 000A9B58  7C 00 E0 30 */	slw r0, r0, r28
/* 800ACC1C 000A9B5C  3B C0 00 00 */	li r30, 0
/* 800ACC20 000A9B60  7C 80 03 78 */	or r0, r4, r0
/* 800ACC24 000A9B64  90 03 00 04 */	stw r0, 4(r3)
/* 800ACC28 000A9B68  83 4D 81 78 */	lwz r26, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
.L_800ACC2C:
/* 800ACC2C 000A9B6C  3B 5A 00 01 */	addi r26, r26, 1
.L_800ACC30:
/* 800ACC30 000A9B70  80 0D 81 78 */	lwz r0, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800ACC34 000A9B74  7C 1A 00 40 */	cmplw r26, r0
/* 800ACC38 000A9B78  41 80 FF 30 */	blt .L_800ACB68
/* 800ACC3C 000A9B7C  48 00 00 A4 */	b .L_800ACCE0
.L_800ACC40:
/* 800ACC40 000A9B80  80 1D 03 48 */	lwz r0, 0x348(r29)
/* 800ACC44 000A9B84  38 80 00 01 */	li r4, 1
/* 800ACC48 000A9B88  83 9D 03 3C */	lwz r28, 0x33c(r29)
/* 800ACC4C 000A9B8C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 800ACC50 000A9B90  83 AD 8B D0 */	lwz r29, seTrackUpdate__Q27JAInter5SeMgr@sda21(r13)
/* 800ACC54 000A9B94  1F E0 00 18 */	mulli r31, r0, 0x18
/* 800ACC58 000A9B98  7F 83 E3 78 */	mr r3, r28
/* 800ACC5C 000A9B9C  7C BD FA 14 */	add r5, r29, r31
/* 800ACC60 000A9BA0  C0 25 00 04 */	lfs f1, 4(r5)
/* 800ACC64 000A9BA4  4B FE F8 3D */	bl setParam__13JASOuterParamFUcf
/* 800ACC68 000A9BA8  7C 9D FA 14 */	add r4, r29, r31
/* 800ACC6C 000A9BAC  7F 83 E3 78 */	mr r3, r28
/* 800ACC70 000A9BB0  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 800ACC74 000A9BB4  38 80 00 08 */	li r4, 8
/* 800ACC78 000A9BB8  4B FE F8 29 */	bl setParam__13JASOuterParamFUcf
/* 800ACC7C 000A9BBC  7C 9D FA 14 */	add r4, r29, r31
/* 800ACC80 000A9BC0  7F 83 E3 78 */	mr r3, r28
/* 800ACC84 000A9BC4  C0 24 00 08 */	lfs f1, 8(r4)
/* 800ACC88 000A9BC8  38 80 00 02 */	li r4, 2
/* 800ACC8C 000A9BCC  4B FE F8 15 */	bl setParam__13JASOuterParamFUcf
/* 800ACC90 000A9BD0  7C 9D FA 14 */	add r4, r29, r31
/* 800ACC94 000A9BD4  7F 83 E3 78 */	mr r3, r28
/* 800ACC98 000A9BD8  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 800ACC9C 000A9BDC  38 80 00 04 */	li r4, 4
/* 800ACCA0 000A9BE0  4B FE F8 01 */	bl setParam__13JASOuterParamFUcf
/* 800ACCA4 000A9BE4  80 AD 8B 68 */	lwz r5, msBasic__8JAIBasic@sda21(r13)
/* 800ACCA8 000A9BE8  7F 83 E3 78 */	mr r3, r28
/* 800ACCAC 000A9BEC  38 80 00 10 */	li r4, 0x10
/* 800ACCB0 000A9BF0  88 05 00 0D */	lbz r0, 0xd(r5)
/* 800ACCB4 000A9BF4  28 00 00 02 */	cmplwi r0, 2
/* 800ACCB8 000A9BF8  41 82 00 0C */	beq .L_800ACCC4
/* 800ACCBC 000A9BFC  C0 22 8B B0 */	lfs f1, lbl_80516F10@sda21(r2)
/* 800ACCC0 000A9C00  48 00 00 0C */	b .L_800ACCCC
.L_800ACCC4:
/* 800ACCC4 000A9C04  7C BD FA 14 */	add r5, r29, r31
/* 800ACCC8 000A9C08  C0 25 00 14 */	lfs f1, 0x14(r5)
.L_800ACCCC:
/* 800ACCCC 000A9C0C  4B FE F7 D5 */	bl setParam__13JASOuterParamFUcf
/* 800ACCD0 000A9C10  48 00 00 10 */	b .L_800ACCE0
.L_800ACCD4:
/* 800ACCD4 000A9C14  88 AD 8B E4 */	lbz r5, seScene__Q27JAInter5SeMgr@sda21(r13)
/* 800ACCD8 000A9C18  38 80 00 00 */	li r4, 0
/* 800ACCDC 000A9C1C  4B FF 54 B1 */	bl writePortApp__8JASTrackFUlUs
.L_800ACCE0:
/* 800ACCE0 000A9C20  7F C3 F3 78 */	mr r3, r30
/* 800ACCE4 000A9C24  BB 41 00 08 */	lmw r26, 8(r1)
/* 800ACCE8 000A9C28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800ACCEC 000A9C2C  7C 08 03 A6 */	mtlr r0
/* 800ACCF0 000A9C30  38 21 00 20 */	addi r1, r1, 0x20
/* 800ACCF4 000A9C34  4E 80 00 20 */	blr 
.endfn setParameterSeqSync__8JAIBasicFP8JASTrackUs

.fn setSeExtParameter__8JAIBasicFP8JAISound, global
/* 800ACCF8 000A9C38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800ACCFC 000A9C3C  7C 08 02 A6 */	mflr r0
/* 800ACD00 000A9C40  90 01 00 24 */	stw r0, 0x24(r1)
/* 800ACD04 000A9C44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800ACD08 000A9C48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800ACD0C 000A9C4C  7C 9E 23 79 */	or. r30, r4, r4
/* 800ACD10 000A9C50  41 82 00 D4 */	beq .L_800ACDE4
/* 800ACD14 000A9C54  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 800ACD18 000A9C58  48 00 A8 C5 */	bl getInfoFormat__Q27JAInter10SoundTableFUl
/* 800ACD1C 000A9C5C  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 800ACD20 000A9C60  54 7F 06 3E */	clrlwi r31, r3, 0x18
/* 800ACD24 000A9C64  41 82 00 48 */	beq .L_800ACD6C
/* 800ACD28 000A9C68  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 800ACD2C 000A9C6C  3C 00 43 30 */	lis r0, 0x4330
/* 800ACD30 000A9C70  7F C3 F3 78 */	mr r3, r30
/* 800ACD34 000A9C74  90 01 00 08 */	stw r0, 8(r1)
/* 800ACD38 000A9C78  88 04 00 0C */	lbz r0, 0xc(r4)
/* 800ACD3C 000A9C7C  38 80 00 00 */	li r4, 0
/* 800ACD40 000A9C80  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 800ACD44 000A9C84  38 A0 00 01 */	li r5, 1
/* 800ACD48 000A9C88  90 01 00 0C */	stw r0, 0xc(r1)
/* 800ACD4C 000A9C8C  C8 42 8B C0 */	lfd f2, lbl_80516F20@sda21(r2)
/* 800ACD50 000A9C90  C8 21 00 08 */	lfd f1, 8(r1)
/* 800ACD54 000A9C94  C0 02 8B BC */	lfs f0, lbl_80516F1C@sda21(r2)
/* 800ACD58 000A9C98  EC 21 10 28 */	fsubs f1, f1, f2
/* 800ACD5C 000A9C9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800ACD60 000A9CA0  EC 21 00 24 */	fdivs f1, f1, f0
/* 800ACD64 000A9CA4  7D 89 03 A6 */	mtctr r12
/* 800ACD68 000A9CA8  4E 80 04 21 */	bctrl 
.L_800ACD6C:
/* 800ACD6C 000A9CAC  57 E0 07 39 */	rlwinm. r0, r31, 0, 0x1c, 0x1c
/* 800ACD70 000A9CB0  41 82 00 48 */	beq .L_800ACDB8
/* 800ACD74 000A9CB4  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 800ACD78 000A9CB8  3C 00 43 30 */	lis r0, 0x4330
/* 800ACD7C 000A9CBC  7F C3 F3 78 */	mr r3, r30
/* 800ACD80 000A9CC0  90 01 00 08 */	stw r0, 8(r1)
/* 800ACD84 000A9CC4  88 04 00 0D */	lbz r0, 0xd(r4)
/* 800ACD88 000A9CC8  38 80 00 00 */	li r4, 0
/* 800ACD8C 000A9CCC  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 800ACD90 000A9CD0  38 A0 00 01 */	li r5, 1
/* 800ACD94 000A9CD4  90 01 00 0C */	stw r0, 0xc(r1)
/* 800ACD98 000A9CD8  C8 42 8B C0 */	lfd f2, lbl_80516F20@sda21(r2)
/* 800ACD9C 000A9CDC  C8 21 00 08 */	lfd f1, 8(r1)
/* 800ACDA0 000A9CE0  C0 02 8B BC */	lfs f0, lbl_80516F1C@sda21(r2)
/* 800ACDA4 000A9CE4  EC 21 10 28 */	fsubs f1, f1, f2
/* 800ACDA8 000A9CE8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 800ACDAC 000A9CEC  EC 21 00 24 */	fdivs f1, f1, f0
/* 800ACDB0 000A9CF0  7D 89 03 A6 */	mtctr r12
/* 800ACDB4 000A9CF4  4E 80 04 21 */	bctrl 
.L_800ACDB8:
/* 800ACDB8 000A9CF8  57 E0 07 BD */	rlwinm. r0, r31, 0, 0x1e, 0x1e
/* 800ACDBC 000A9CFC  41 82 00 28 */	beq .L_800ACDE4
/* 800ACDC0 000A9D00  7F C3 F3 78 */	mr r3, r30
/* 800ACDC4 000A9D04  80 BE 00 44 */	lwz r5, 0x44(r30)
/* 800ACDC8 000A9D08  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 800ACDCC 000A9D0C  38 80 00 00 */	li r4, 0
/* 800ACDD0 000A9D10  C0 25 00 08 */	lfs f1, 8(r5)
/* 800ACDD4 000A9D14  38 A0 00 01 */	li r5, 1
/* 800ACDD8 000A9D18  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 800ACDDC 000A9D1C  7D 89 03 A6 */	mtctr r12
/* 800ACDE0 000A9D20  4E 80 04 21 */	bctrl 
.L_800ACDE4:
/* 800ACDE4 000A9D24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800ACDE8 000A9D28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800ACDEC 000A9D2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800ACDF0 000A9D30  7C 08 03 A6 */	mtlr r0
/* 800ACDF4 000A9D34  38 21 00 20 */	addi r1, r1, 0x20
/* 800ACDF8 000A9D38  4E 80 00 20 */	blr 
.endfn setSeExtParameter__8JAIBasicFP8JAISound

.fn makeSequence__8JAIBasicFv, global
/* 800ACDFC 000A9D3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACE00 000A9D40  7C 08 02 A6 */	mflr r0
/* 800ACE04 000A9D44  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACE08 000A9D48  80 83 00 08 */	lwz r4, 8(r3)
/* 800ACE0C 000A9D4C  28 04 00 00 */	cmplwi r4, 0
/* 800ACE10 000A9D50  41 82 00 28 */	beq .L_800ACE38
/* 800ACE14 000A9D54  38 60 06 A0 */	li r3, 0x6a0
/* 800ACE18 000A9D58  38 A0 00 00 */	li r5, 0
/* 800ACE1C 000A9D5C  4B F7 71 25 */	bl __nw__FUlP7JKRHeapi
/* 800ACE20 000A9D60  7C 60 1B 79 */	or. r0, r3, r3
/* 800ACE24 000A9D64  41 82 00 0C */	beq .L_800ACE30
/* 800ACE28 000A9D68  48 00 6A 11 */	bl __ct__11JAISequenceFv
/* 800ACE2C 000A9D6C  7C 60 1B 78 */	mr r0, r3
.L_800ACE30:
/* 800ACE30 000A9D70  7C 03 03 78 */	mr r3, r0
/* 800ACE34 000A9D74  48 00 00 28 */	b .L_800ACE5C
.L_800ACE38:
/* 800ACE38 000A9D78  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800ACE3C 000A9D7C  38 60 06 A0 */	li r3, 0x6a0
/* 800ACE40 000A9D80  38 A0 00 00 */	li r5, 0
/* 800ACE44 000A9D84  4B F7 70 FD */	bl __nw__FUlP7JKRHeapi
/* 800ACE48 000A9D88  7C 60 1B 79 */	or. r0, r3, r3
/* 800ACE4C 000A9D8C  41 82 00 0C */	beq .L_800ACE58
/* 800ACE50 000A9D90  48 00 69 E9 */	bl __ct__11JAISequenceFv
/* 800ACE54 000A9D94  7C 60 1B 78 */	mr r0, r3
.L_800ACE58:
/* 800ACE58 000A9D98  7C 03 03 78 */	mr r3, r0
.L_800ACE5C:
/* 800ACE5C 000A9D9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACE60 000A9DA0  7C 08 03 A6 */	mtlr r0
/* 800ACE64 000A9DA4  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACE68 000A9DA8  4E 80 00 20 */	blr 
.endfn makeSequence__8JAIBasicFv

.fn makeSe__8JAIBasicFv, global
/* 800ACE6C 000A9DAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACE70 000A9DB0  7C 08 02 A6 */	mflr r0
/* 800ACE74 000A9DB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACE78 000A9DB8  80 83 00 08 */	lwz r4, 8(r3)
/* 800ACE7C 000A9DBC  28 04 00 00 */	cmplwi r4, 0
/* 800ACE80 000A9DC0  41 82 00 28 */	beq .L_800ACEA8
/* 800ACE84 000A9DC4  38 60 04 84 */	li r3, 0x484
/* 800ACE88 000A9DC8  38 A0 00 00 */	li r5, 0
/* 800ACE8C 000A9DCC  4B F7 70 B5 */	bl __nw__FUlP7JKRHeapi
/* 800ACE90 000A9DD0  7C 60 1B 79 */	or. r0, r3, r3
/* 800ACE94 000A9DD4  41 82 00 0C */	beq .L_800ACEA0
/* 800ACE98 000A9DD8  48 00 6A 8D */	bl __ct__5JAISeFv
/* 800ACE9C 000A9DDC  7C 60 1B 78 */	mr r0, r3
.L_800ACEA0:
/* 800ACEA0 000A9DE0  7C 03 03 78 */	mr r3, r0
/* 800ACEA4 000A9DE4  48 00 00 28 */	b .L_800ACECC
.L_800ACEA8:
/* 800ACEA8 000A9DE8  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800ACEAC 000A9DEC  38 60 04 84 */	li r3, 0x484
/* 800ACEB0 000A9DF0  38 A0 00 00 */	li r5, 0
/* 800ACEB4 000A9DF4  4B F7 70 8D */	bl __nw__FUlP7JKRHeapi
/* 800ACEB8 000A9DF8  7C 60 1B 79 */	or. r0, r3, r3
/* 800ACEBC 000A9DFC  41 82 00 0C */	beq .L_800ACEC8
/* 800ACEC0 000A9E00  48 00 6A 65 */	bl __ct__5JAISeFv
/* 800ACEC4 000A9E04  7C 60 1B 78 */	mr r0, r3
.L_800ACEC8:
/* 800ACEC8 000A9E08  7C 03 03 78 */	mr r3, r0
.L_800ACECC:
/* 800ACECC 000A9E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACED0 000A9E10  7C 08 03 A6 */	mtlr r0
/* 800ACED4 000A9E14  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACED8 000A9E18  4E 80 00 20 */	blr 
.endfn makeSe__8JAIBasicFv

.fn makeStream__8JAIBasicFv, global
/* 800ACEDC 000A9E1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ACEE0 000A9E20  7C 08 02 A6 */	mflr r0
/* 800ACEE4 000A9E24  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ACEE8 000A9E28  80 83 00 08 */	lwz r4, 8(r3)
/* 800ACEEC 000A9E2C  28 04 00 00 */	cmplwi r4, 0
/* 800ACEF0 000A9E30  41 82 00 28 */	beq .L_800ACF18
/* 800ACEF4 000A9E34  38 60 01 D8 */	li r3, 0x1d8
/* 800ACEF8 000A9E38  38 A0 00 00 */	li r5, 0
/* 800ACEFC 000A9E3C  4B F7 70 45 */	bl __nw__FUlP7JKRHeapi
/* 800ACF00 000A9E40  7C 60 1B 79 */	or. r0, r3, r3
/* 800ACF04 000A9E44  41 82 00 0C */	beq .L_800ACF10
/* 800ACF08 000A9E48  48 00 6B 71 */	bl __ct__9JAIStreamFv
/* 800ACF0C 000A9E4C  7C 60 1B 78 */	mr r0, r3
.L_800ACF10:
/* 800ACF10 000A9E50  7C 03 03 78 */	mr r3, r0
/* 800ACF14 000A9E54  48 00 00 28 */	b .L_800ACF3C
.L_800ACF18:
/* 800ACF18 000A9E58  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 800ACF1C 000A9E5C  38 60 01 D8 */	li r3, 0x1d8
/* 800ACF20 000A9E60  38 A0 00 00 */	li r5, 0
/* 800ACF24 000A9E64  4B F7 70 1D */	bl __nw__FUlP7JKRHeapi
/* 800ACF28 000A9E68  7C 60 1B 79 */	or. r0, r3, r3
/* 800ACF2C 000A9E6C  41 82 00 0C */	beq .L_800ACF38
/* 800ACF30 000A9E70  48 00 6B 49 */	bl __ct__9JAIStreamFv
/* 800ACF34 000A9E74  7C 60 1B 78 */	mr r0, r3
.L_800ACF38:
/* 800ACF38 000A9E78  7C 03 03 78 */	mr r3, r0
.L_800ACF3C:
/* 800ACF3C 000A9E7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ACF40 000A9E80  7C 08 03 A6 */	mtlr r0
/* 800ACF44 000A9E84  38 21 00 10 */	addi r1, r1, 0x10
/* 800ACF48 000A9E88  4E 80 00 20 */	blr 
.endfn makeStream__8JAIBasicFv

.fn stopAudio__8JAIBasicFUlb, global
/* 800ACF4C 000A9E8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800ACF50 000A9E90  7C 08 02 A6 */	mflr r0
/* 800ACF54 000A9E94  90 01 00 24 */	stw r0, 0x24(r1)
/* 800ACF58 000A9E98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800ACF5C 000A9E9C  7C 7F 1B 78 */	mr r31, r3
/* 800ACF60 000A9EA0  88 0D 81 58 */	lbz r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800ACF64 000A9EA4  28 00 00 00 */	cmplwi r0, 0
/* 800ACF68 000A9EA8  40 82 00 AC */	bne .L_800AD014
/* 800ACF6C 000A9EAC  28 1F 00 05 */	cmplwi r31, 5
/* 800ACF70 000A9EB0  40 80 00 08 */	bge .L_800ACF78
/* 800ACF74 000A9EB4  3B E0 00 05 */	li r31, 5
.L_800ACF78:
/* 800ACF78 000A9EB8  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 800ACF7C 000A9EBC  38 00 00 01 */	li r0, 1
/* 800ACF80 000A9EC0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 800ACF84 000A9EC4  7C 63 FA 14 */	add r3, r3, r31
/* 800ACF88 000A9EC8  98 8D 8B 70 */	stb r4, msStopMode__8JAIBasic@sda21(r13)
/* 800ACF8C 000A9ECC  90 6D 8B 74 */	stw r3, msAudioStopTime__8JAIBasic@sda21(r13)
/* 800ACF90 000A9ED0  98 0D 81 58 */	stb r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800ACF94 000A9ED4  4B FF 79 85 */	bl getDSPLevel_f32__9JASDriverFv
/* 800ACF98 000A9ED8  D0 2D 8B 78 */	stfs f1, msDspLevel__8JAIBasic@sda21(r13)
/* 800ACF9C 000A9EDC  4B FF 79 4D */	bl getAutoLevel_f32__9JASDriverFv
/* 800ACFA0 000A9EE0  D0 2D 8B 7C */	stfs f1, msAutoLevel__8JAIBasic@sda21(r13)
/* 800ACFA4 000A9EE4  4B FF B2 55 */	bl getSubFrames__9JASDriverFv
/* 800ACFA8 000A9EE8  38 9F FF F8 */	addi r4, r31, -8
/* 800ACFAC 000A9EEC  3C 00 43 30 */	lis r0, 0x4330
/* 800ACFB0 000A9EF0  7C 64 19 D6 */	mullw r3, r4, r3
/* 800ACFB4 000A9EF4  90 01 00 08 */	stw r0, 8(r1)
/* 800ACFB8 000A9EF8  C8 42 8B C0 */	lfd f2, lbl_80516F20@sda21(r2)
/* 800ACFBC 000A9EFC  C0 0D 8B 78 */	lfs f0, msDspLevel__8JAIBasic@sda21(r13)
/* 800ACFC0 000A9F00  90 61 00 0C */	stw r3, 0xc(r1)
/* 800ACFC4 000A9F04  C8 21 00 08 */	lfd f1, 8(r1)
/* 800ACFC8 000A9F08  EC 21 10 28 */	fsubs f1, f1, f2
/* 800ACFCC 000A9F0C  EC 00 08 24 */	fdivs f0, f0, f1
/* 800ACFD0 000A9F10  D0 0D 8B 84 */	stfs f0, msDspDif__8JAIBasic@sda21(r13)
/* 800ACFD4 000A9F14  4B FF B2 25 */	bl getSubFrames__9JASDriverFv
/* 800ACFD8 000A9F18  38 9F FF F8 */	addi r4, r31, -8
/* 800ACFDC 000A9F1C  3C 00 43 30 */	lis r0, 0x4330
/* 800ACFE0 000A9F20  7C A4 19 D6 */	mullw r5, r4, r3
/* 800ACFE4 000A9F24  3C 60 80 0B */	lis r3, stopCallBack__8JAIBasicFPv@ha
/* 800ACFE8 000A9F28  90 01 00 10 */	stw r0, 0x10(r1)
/* 800ACFEC 000A9F2C  38 80 00 00 */	li r4, 0
/* 800ACFF0 000A9F30  C8 42 8B C0 */	lfd f2, lbl_80516F20@sda21(r2)
/* 800ACFF4 000A9F34  38 63 D0 5C */	addi r3, r3, stopCallBack__8JAIBasicFPv@l
/* 800ACFF8 000A9F38  90 A1 00 14 */	stw r5, 0x14(r1)
/* 800ACFFC 000A9F3C  C0 0D 8B 7C */	lfs f0, msAutoLevel__8JAIBasic@sda21(r13)
/* 800AD000 000A9F40  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 800AD004 000A9F44  EC 21 10 28 */	fsubs f1, f1, f2
/* 800AD008 000A9F48  EC 00 08 24 */	fdivs f0, f0, f1
/* 800AD00C 000A9F4C  D0 0D 8B 80 */	stfs f0, msAutoDif__8JAIBasic@sda21(r13)
/* 800AD010 000A9F50  4B FF 79 C9 */	bl registerDspSyncCallback__9JASDriverFPFPv_lPv
.L_800AD014:
/* 800AD014 000A9F54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800AD018 000A9F58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800AD01C 000A9F5C  7C 08 03 A6 */	mtlr r0
/* 800AD020 000A9F60  38 21 00 20 */	addi r1, r1, 0x20
/* 800AD024 000A9F64  4E 80 00 20 */	blr 
.endfn stopAudio__8JAIBasicFUlb

.fn checkAudioStopStatus__8JAIBasicFv, global
/* 800AD028 000A9F68  88 0D 81 58 */	lbz r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800AD02C 000A9F6C  2C 00 00 03 */	cmpwi r0, 3
/* 800AD030 000A9F70  41 82 00 1C */	beq .L_800AD04C
/* 800AD034 000A9F74  40 80 00 20 */	bge .L_800AD054
/* 800AD038 000A9F78  2C 00 00 01 */	cmpwi r0, 1
/* 800AD03C 000A9F7C  40 80 00 08 */	bge .L_800AD044
/* 800AD040 000A9F80  48 00 00 14 */	b .L_800AD054
.L_800AD044:
/* 800AD044 000A9F84  38 60 00 01 */	li r3, 1
/* 800AD048 000A9F88  4E 80 00 20 */	blr 
.L_800AD04C:
/* 800AD04C 000A9F8C  38 60 00 02 */	li r3, 2
/* 800AD050 000A9F90  4E 80 00 20 */	blr 
.L_800AD054:
/* 800AD054 000A9F94  38 60 00 00 */	li r3, 0
/* 800AD058 000A9F98  4E 80 00 20 */	blr 
.endfn checkAudioStopStatus__8JAIBasicFv

.fn stopCallBack__8JAIBasicFPv, global
/* 800AD05C 000A9F9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD060 000A9FA0  7C 08 02 A6 */	mflr r0
/* 800AD064 000A9FA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD068 000A9FA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AD06C 000A9FAC  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 800AD070 000A9FB0  80 8D 8B 74 */	lwz r4, msAudioStopTime__8JAIBasic@sda21(r13)
/* 800AD074 000A9FB4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 800AD078 000A9FB8  7C 04 18 40 */	cmplw r4, r3
/* 800AD07C 000A9FBC  40 82 00 24 */	bne .L_800AD0A0
/* 800AD080 000A9FC0  88 0D 8B 70 */	lbz r0, msStopMode__8JAIBasic@sda21(r13)
/* 800AD084 000A9FC4  38 60 00 03 */	li r3, 3
/* 800AD088 000A9FC8  98 6D 81 58 */	stb r3, msStopStatus__8JAIBasic@sda21(r13)
/* 800AD08C 000A9FCC  28 00 00 00 */	cmplwi r0, 0
/* 800AD090 000A9FD0  41 82 00 08 */	beq .L_800AD098
/* 800AD094 000A9FD4  4B FF 8B 69 */	bl stop__14JASAudioThreadFv
.L_800AD098:
/* 800AD098 000A9FD8  38 60 FF FF */	li r3, -1
/* 800AD09C 000A9FDC  48 00 01 14 */	b .L_800AD1B0
.L_800AD0A0:
/* 800AD0A0 000A9FE0  38 04 FF FC */	addi r0, r4, -4
/* 800AD0A4 000A9FE4  7C 00 18 40 */	cmplw r0, r3
/* 800AD0A8 000A9FE8  40 82 00 B8 */	bne .L_800AD160
/* 800AD0AC 000A9FEC  88 0D 81 58 */	lbz r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800AD0B0 000A9FF0  28 00 00 01 */	cmplwi r0, 1
/* 800AD0B4 000A9FF4  40 82 00 F8 */	bne .L_800AD1AC
/* 800AD0B8 000A9FF8  3B E0 00 00 */	li r31, 0
.L_800AD0BC:
/* 800AD0BC 000A9FFC  7F E3 FB 78 */	mr r3, r31
/* 800AD0C0 000AA000  4B FF 82 41 */	bl getHandle__13JASDSPChannelFUl
/* 800AD0C4 000AA004  80 03 00 00 */	lwz r0, 0(r3)
/* 800AD0C8 000AA008  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 800AD0CC 000AA00C  40 82 00 08 */	bne .L_800AD0D4
/* 800AD0D0 000AA010  4B FF 7A C5 */	bl drop__13JASDSPChannelFv
.L_800AD0D4:
/* 800AD0D4 000AA014  3B FF 00 01 */	addi r31, r31, 1
/* 800AD0D8 000AA018  28 1F 00 40 */	cmplwi r31, 0x40
/* 800AD0DC 000AA01C  41 80 FF E0 */	blt .L_800AD0BC
/* 800AD0E0 000AA020  48 00 07 D1 */	bl clearAllBuffer__Q27JAInter2FxFv
/* 800AD0E4 000AA024  3B E0 00 00 */	li r31, 0
/* 800AD0E8 000AA028  48 00 00 3C */	b .L_800AD124
.L_800AD0EC:
/* 800AD0EC 000AA02C  7F E3 FB 78 */	mr r3, r31
/* 800AD0F0 000AA030  48 00 67 39 */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800AD0F4 000AA034  80 03 00 48 */	lwz r0, 0x48(r3)
/* 800AD0F8 000AA038  28 00 00 00 */	cmplwi r0, 0
/* 800AD0FC 000AA03C  41 82 00 24 */	beq .L_800AD120
/* 800AD100 000AA040  7F E3 FB 78 */	mr r3, r31
/* 800AD104 000AA044  48 00 67 25 */	bl getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
/* 800AD108 000AA048  80 63 00 48 */	lwz r3, 0x48(r3)
/* 800AD10C 000AA04C  38 80 00 00 */	li r4, 0
/* 800AD110 000AA050  81 83 00 10 */	lwz r12, 0x10(r3)
/* 800AD114 000AA054  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800AD118 000AA058  7D 89 03 A6 */	mtctr r12
/* 800AD11C 000AA05C  4E 80 04 21 */	bctrl 
.L_800AD120:
/* 800AD120 000AA060  3B FF 00 01 */	addi r31, r31, 1
.L_800AD124:
/* 800AD124 000AA064  48 00 09 A9 */	bl getParamSeqPlayTrackMax__18JAIGlobalParameterFv
/* 800AD128 000AA068  7C 1F 18 40 */	cmplw r31, r3
/* 800AD12C 000AA06C  41 80 FF C0 */	blt .L_800AD0EC
/* 800AD130 000AA070  80 6D 8C 48 */	lwz r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
/* 800AD134 000AA074  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 800AD138 000AA078  28 03 00 00 */	cmplwi r3, 0
/* 800AD13C 000AA07C  41 82 00 18 */	beq .L_800AD154
/* 800AD140 000AA080  81 83 00 10 */	lwz r12, 0x10(r3)
/* 800AD144 000AA084  38 80 00 00 */	li r4, 0
/* 800AD148 000AA088  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800AD14C 000AA08C  7D 89 03 A6 */	mtctr r12
/* 800AD150 000AA090  4E 80 04 21 */	bctrl 
.L_800AD154:
/* 800AD154 000AA094  38 00 00 02 */	li r0, 2
/* 800AD158 000AA098  98 0D 81 58 */	stb r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800AD15C 000AA09C  48 00 00 50 */	b .L_800AD1AC
.L_800AD160:
/* 800AD160 000AA0A0  88 0D 81 58 */	lbz r0, msStopStatus__8JAIBasic@sda21(r13)
/* 800AD164 000AA0A4  28 00 00 01 */	cmplwi r0, 1
/* 800AD168 000AA0A8  40 82 00 44 */	bne .L_800AD1AC
/* 800AD16C 000AA0AC  4B FF 77 AD */	bl getDSPLevel_f32__9JASDriverFv
/* 800AD170 000AA0B0  C0 4D 8B 84 */	lfs f2, msDspDif__8JAIBasic@sda21(r13)
/* 800AD174 000AA0B4  C0 02 8B B0 */	lfs f0, lbl_80516F10@sda21(r2)
/* 800AD178 000AA0B8  EC 21 10 28 */	fsubs f1, f1, f2
/* 800AD17C 000AA0BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800AD180 000AA0C0  40 80 00 08 */	bge .L_800AD188
/* 800AD184 000AA0C4  FC 20 00 90 */	fmr f1, f0
.L_800AD188:
/* 800AD188 000AA0C8  4B FF 77 31 */	bl setDSPLevel__9JASDriverFf
/* 800AD18C 000AA0CC  4B FF 77 5D */	bl getAutoLevel_f32__9JASDriverFv
/* 800AD190 000AA0D0  C0 4D 8B 80 */	lfs f2, msAutoDif__8JAIBasic@sda21(r13)
/* 800AD194 000AA0D4  C0 02 8B B0 */	lfs f0, lbl_80516F10@sda21(r2)
/* 800AD198 000AA0D8  EC 21 10 28 */	fsubs f1, f1, f2
/* 800AD19C 000AA0DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800AD1A0 000AA0E0  40 80 00 08 */	bge .L_800AD1A8
/* 800AD1A4 000AA0E4  FC 20 00 90 */	fmr f1, f0
.L_800AD1A8:
/* 800AD1A8 000AA0E8  4B FF 76 ED */	bl setAutoLevel__9JASDriverFf
.L_800AD1AC:
/* 800AD1AC 000AA0EC  38 60 00 00 */	li r3, 0
.L_800AD1B0:
/* 800AD1B0 000AA0F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD1B4 000AA0F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AD1B8 000AA0F8  7C 08 03 A6 */	mtlr r0
/* 800AD1BC 000AA0FC  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD1C0 000AA100  4E 80 00 20 */	blr 
.endfn stopCallBack__8JAIBasicFPv
