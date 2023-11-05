.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_PSMainSide_Sound_cpp
	
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049DC30, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049DC30
.obj smACosPrm__Q23PSM7SeSound, global # array of 101 floats
	.float 3.141592
	.float 2.941258
	.float 2.857799
	.float 2.793427
	.float 2.738877
	.float 2.690566
	.float 2.646658
	.float 2.606066
	.float 2.568079
	.float 2.532207
	.float 2.498092
	.float 2.465462
	.float 2.434109
	.float 2.403867
	.float 2.374599
	.float 2.346194
	.float 2.318559
	.float 2.291615
	.float 2.265295
	.float 2.239539
	.float 2.214298
	.float 2.189525
	.float 2.165182
	.float 2.141233
	.float 2.117647
	.float 2.094395
	.float 2.071451
	.float 2.048791
	.float 2.026395
	.float 2.004241
	.float 1.982313
	.float 1.960593
	.float 1.939064
	.float 1.917713
	.float 1.896526
	.float 1.875489
	.float 1.854591
	.float 1.833819
	.float 1.813162
	.float 1.792611
	.float 1.772154
	.float 1.751783
	.float 1.731487
	.float 1.711258
	.float 1.691086
	.float 1.670964
	.float 1.650882
	.float 1.630832
	.float 1.610807
	.float 1.590798
	.float 1.570796
	.float 1.550795
	.float 1.530786
	.float 1.51076
	.float 1.490711
	.float 1.470629
	.float 1.450507
	.float 1.430335
	.float 1.410106
	.float 1.38981
	.float 1.369439
	.float 1.348982
	.float 1.328431
	.float 1.307774
	.float 1.287002
	.float 1.266104
	.float 1.245067
	.float 1.223879
	.float 1.202528
	.float 1.181
	.float 1.15928
	.float 1.137351
	.float 1.115198
	.float 1.092801
	.float 1.070142
	.float 1.047198
	.float 1.023945
	.float 1.000359
	.float 0.976411
	.float 0.952068
	.float 0.927295
	.float 0.902054
	.float 0.876298
	.float 0.849978
	.float 0.823034
	.float 0.795399
	.float 0.766994
	.float 0.737726
	.float 0.707483
	.float 0.676131
	.float 0.643501
	.float 0.609386
	.float 0.573513
	.float 0.535527
	.float 0.494934
	.float 0.451027
	.float 0.402716
	.float 0.348166
	.float 0.283794
	.float 0.200335
	.float 0.0
.endobj smACosPrm__Q23PSM7SeSound
.balign 4
.obj lbl_8049DDD0, local
	.asciz "PSMainSide_Sound.cpp"
.endobj lbl_8049DDD0
.balign 4
.obj lbl_8049DDE8, local
	.asciz "P2Assert"
.endobj lbl_8049DDE8
.balign 4
.obj lbl_8049DDF4, local
	.asciz "PSCommon.h"
.endobj lbl_8049DDF4
.balign 4
.obj lbl_8049DE00, local
	.asciz "PSSystemIF.h"
.endobj lbl_8049DE00
.balign 4
.obj lbl_8049DE10, local
	.asciz "PSGame.h"
.endobj lbl_8049DE10
.balign 4
.obj lbl_8049DE1C, local
	.asciz "PSScene.h"
.endobj lbl_8049DE1C
.balign 4
.obj lbl_8049DE28, local
	.asciz "\nSE called at invalid timming\n(%08x)\n"
.endobj lbl_8049DE28
.balign 4
.obj lbl_8049DE50, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_8049DE50

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q23PSM7SeSound, global
	.4byte 0
	.4byte 0
	.4byte setPortData__5JAISeFUcUs
	.4byte getPortData__5JAISeFUc
	.4byte start__8JAISoundFUl
	.4byte stop__5JAISeFUl
	.4byte release__8JAISoundFv
	.4byte setVolume__5JAISeFfUlUc
	.4byte getVolume__5JAISeFUc
	.4byte setPan__5JAISeFfUlUc
	.4byte getPan__5JAISeFUc
	.4byte setPitch__5JAISeFfUlUc
	.4byte getPitch__5JAISeFUc
	.4byte setFxmix__5JAISeFfUlUc
	.4byte getFxmix__5JAISeFUc
	.4byte setDolby__5JAISeFfUlUc
	.4byte getDolby__5JAISeFUc
	.4byte setTempoProportion__8JAISoundFfUl
	.4byte getTempoProportion__8JAISoundFv
	.4byte setVolumeU7__5JAISeFUcUlUc
	.4byte getVolumeU7__5JAISeFUc
	.4byte setPanU7__5JAISeFUcUlUc
	.4byte getPanU7__5JAISeFUc
	.4byte setFxmixU7__5JAISeFUcUlUc
	.4byte getFxmixU7__5JAISeFUc
	.4byte setDolbyU7__5JAISeFUcUlUc
	.4byte getDolbyU7__5JAISeFUc
	.4byte setDirectVolume__8JAISoundFfUl
	.4byte setDirectPan__8JAISoundFfUl
	.4byte setDirectPitch__8JAISoundFfUl
	.4byte setDirectFxmix__8JAISoundFfUl
	.4byte setDirectDolby__8JAISoundFfUl
	.4byte setDemoVolume__8JAISoundFfUl
	.4byte setDemoPan__8JAISoundFfUl
	.4byte setDemoPitch__8JAISoundFfUl
	.4byte setDemoFxmix__8JAISoundFfUl
	.4byte setDemoDolby__8JAISoundFfUl
	.4byte setDemoVolumeU7__8JAISoundFUcUl
	.4byte setDemoPanU7__8JAISoundFUcUl
	.4byte setDemoFxmixU7__8JAISoundFUcUl
	.4byte setDemoDolbyU7__8JAISoundFUcUl
	.4byte getFadeCounter__5JAISeFv
	.4byte setPrepareFlag__8JAISoundFUc
	.4byte checkReady__8JAISoundFv
	.4byte setDistanceParameterMoveTime__8JAISoundFUc
	.4byte setAdjustPriority__8JAISoundFs
	.4byte setPositionDopplarCommon__8JAISoundFUl
	.4byte setDistanceVolumeCommon__Q23PSM7SeSoundFfUc
	.4byte setDistancePanCommon__8JAISoundFv
	.4byte setDistanceDolbyCommon__8JAISoundFv
	.4byte initParameter__Q23PSM7SeSoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	.4byte onGet__Q23PSM7SeSoundFv
	.4byte onRelease__Q23PSM7SeSoundFv
	.4byte setSeDistanceParameters__5JAISeFv
	.4byte setSeDistanceVolume__5JAISeFUc
	.4byte setSeDistancePan__Q23PSM7SeSoundFUc
	.4byte setSeDistancePitch__5JAISeFUc
	.4byte setSeDistanceFxmix__5JAISeFUc
	.4byte setSeDistanceFir__5JAISeFUc
	.4byte setSeDistanceDolby__Q23PSM7SeSoundFUc
	.4byte setSePositionDopplar__5JAISeFv
.endobj __vt__Q23PSM7SeSound

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj cDol_0Rad__Q23PSM7SeSound, global
	.float 1.0316
.endobj cDol_0Rad__Q23PSM7SeSound
.obj cDol_HalfRad__Q23PSM7SeSound, global
	.float 1.5708
.endobj cDol_HalfRad__Q23PSM7SeSound
.obj cDol_FullRad__Q23PSM7SeSound, global
	.float 2.11
.endobj cDol_FullRad__Q23PSM7SeSound
.obj cPan_MaxAmp__Q23PSM7SeSound, global
	.float 0.98
.endobj cPan_MaxAmp__Q23PSM7SeSound
.obj cCenterRad__Q23PSM7SeSound, global
	.float 1.57
.endobj cCenterRad__Q23PSM7SeSound

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj panRatio$3853, local
	.skip 0x4
.endobj panRatio$3853
.obj init$3854, local
	.skip 0x1
.endobj init$3854

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520D90, local
	.float 1.0
.endobj lbl_80520D90
.obj lbl_80520D94, local
	.float 0.0
.endobj lbl_80520D94
.obj lbl_80520D98, local
	.float 50.0
.endobj lbl_80520D98
.obj lbl_80520D9C, local
	.float 15.0
.endobj lbl_80520D9C
.balign 8
.obj lbl_80520DA0, local
	.8byte 0x4330000000000000
.endobj lbl_80520DA0
.obj lbl_80520DA8, local
	.float 0.5
.endobj lbl_80520DA8
.obj lbl_80520DAC, local
	.float 3.1415
.endobj lbl_80520DAC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn makeSeSound__Q23PSM7SeSoundFv, global
/* 80470F0C 0046DE4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80470F10 0046DE50  7C 08 02 A6 */	mflr r0
/* 80470F14 0046DE54  38 60 04 A4 */	li r3, 0x4a4
/* 80470F18 0046DE58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80470F1C 0046DE5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80470F20 0046DE60  4B BB 2F 85 */	bl __nw__FUl
/* 80470F24 0046DE64  7C 7F 1B 79 */	or. r31, r3, r3
/* 80470F28 0046DE68  41 82 00 44 */	beq .L_80470F6C
/* 80470F2C 0046DE6C  4B C4 29 F9 */	bl __ct__5JAISeFv
/* 80470F30 0046DE70  3C 60 80 4F */	lis r3, __vt__Q23PSM7SeSound@ha
/* 80470F34 0046DE74  C0 22 2A 30 */	lfs f1, lbl_80520D90@sda21(r2)
/* 80470F38 0046DE78  38 03 F9 B4 */	addi r0, r3, __vt__Q23PSM7SeSound@l
/* 80470F3C 0046DE7C  C0 02 2A 34 */	lfs f0, lbl_80520D94@sda21(r2)
/* 80470F40 0046DE80  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80470F44 0046DE84  38 00 00 00 */	li r0, 0
/* 80470F48 0046DE88  D0 3F 04 84 */	stfs f1, 0x484(r31)
/* 80470F4C 0046DE8C  D0 1F 04 88 */	stfs f0, 0x488(r31)
/* 80470F50 0046DE90  D0 1F 04 8C */	stfs f0, 0x48c(r31)
/* 80470F54 0046DE94  D0 1F 04 90 */	stfs f0, 0x490(r31)
/* 80470F58 0046DE98  D0 1F 04 94 */	stfs f0, 0x494(r31)
/* 80470F5C 0046DE9C  98 1F 04 98 */	stb r0, 0x498(r31)
/* 80470F60 0046DEA0  98 1F 04 99 */	stb r0, 0x499(r31)
/* 80470F64 0046DEA4  98 1F 04 9C */	stb r0, 0x49c(r31)
/* 80470F68 0046DEA8  D0 3F 04 A0 */	stfs f1, 0x4a0(r31)
.L_80470F6C:
/* 80470F6C 0046DEAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80470F70 0046DEB0  7F E3 FB 78 */	mr r3, r31
/* 80470F74 0046DEB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80470F78 0046DEB8  7C 08 03 A6 */	mtlr r0
/* 80470F7C 0046DEBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80470F80 0046DEC0  4E 80 00 20 */	blr 
.endfn makeSeSound__Q23PSM7SeSoundFv

.fn onGet__Q23PSM7SeSoundFv, global
/* 80470F84 0046DEC4  4E 80 00 20 */	blr 
.endfn onGet__Q23PSM7SeSoundFv

.fn onRelease__Q23PSM7SeSoundFv, global
/* 80470F88 0046DEC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80470F8C 0046DECC  7C 08 02 A6 */	mflr r0
/* 80470F90 0046DED0  3C 80 80 4A */	lis r4, lbl_8049DC30@ha
/* 80470F94 0046DED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80470F98 0046DED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80470F9C 0046DEDC  3B E4 DC 30 */	addi r31, r4, lbl_8049DC30@l
/* 80470FA0 0046DEE0  93 C1 00 08 */	stw r30, 8(r1)
/* 80470FA4 0046DEE4  88 03 00 1A */	lbz r0, 0x1a(r3)
/* 80470FA8 0046DEE8  28 00 00 00 */	cmplwi r0, 0
/* 80470FAC 0046DEEC  41 82 00 68 */	beq .L_80471014
/* 80470FB0 0046DEF0  80 03 00 38 */	lwz r0, 0x38(r3)
/* 80470FB4 0046DEF4  28 00 00 00 */	cmplwi r0, 0
/* 80470FB8 0046DEF8  41 82 00 5C */	beq .L_80471014
/* 80470FBC 0046DEFC  7C 1E 03 78 */	mr r30, r0
/* 80470FC0 0046DF00  40 82 00 18 */	bne .L_80470FD8
/* 80470FC4 0046DF04  38 7F 01 A0 */	addi r3, r31, 0x1a0
/* 80470FC8 0046DF08  38 BF 01 B8 */	addi r5, r31, 0x1b8
/* 80470FCC 0046DF0C  38 80 00 B8 */	li r4, 0xb8
/* 80470FD0 0046DF10  4C C6 31 82 */	crclr 6
/* 80470FD4 0046DF14  4B BB 96 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80470FD8:
/* 80470FD8 0046DF18  7F C3 F3 78 */	mr r3, r30
/* 80470FDC 0046DF1C  4B FE C2 79 */	bl getPlayingHandleNum__Q23PSM8CreatureFv
/* 80470FE0 0046DF20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80470FE4 0046DF24  40 82 00 30 */	bne .L_80471014
/* 80470FE8 0046DF28  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80470FEC 0046DF2C  28 00 00 00 */	cmplwi r0, 0
/* 80470FF0 0046DF30  40 82 00 18 */	bne .L_80471008
/* 80470FF4 0046DF34  38 7F 01 C4 */	addi r3, r31, 0x1c4
/* 80470FF8 0046DF38  38 BF 01 B8 */	addi r5, r31, 0x1b8
/* 80470FFC 0046DF3C  38 80 00 89 */	li r4, 0x89
/* 80471000 0046DF40  4C C6 31 82 */	crclr 6
/* 80471004 0046DF44  4B BB 96 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471008:
/* 80471008 0046DF48  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8047100C 0046DF4C  7F C4 F3 78 */	mr r4, r30
/* 80471010 0046DF50  4B BB 5C 15 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_80471014:
/* 80471014 0046DF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80471018 0046DF58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8047101C 0046DF5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80471020 0046DF60  7C 08 03 A6 */	mtlr r0
/* 80471024 0046DF64  38 21 00 10 */	addi r1, r1, 0x10
/* 80471028 0046DF68  4E 80 00 20 */	blr 
.endfn onRelease__Q23PSM7SeSoundFv

.fn initParameter__Q23PSM7SeSoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo, global
/* 8047102C 0046DF6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80471030 0046DF70  7C 08 02 A6 */	mflr r0
/* 80471034 0046DF74  3D 40 80 4A */	lis r10, lbl_8049DC30@ha
/* 80471038 0046DF78  90 01 00 24 */	stw r0, 0x24(r1)
/* 8047103C 0046DF7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80471040 0046DF80  3B EA DC 30 */	addi r31, r10, lbl_8049DC30@l
/* 80471044 0046DF84  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80471048 0046DF88  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8047104C 0046DF8C  7D 3D 4B 78 */	mr r29, r9
/* 80471050 0046DF90  93 81 00 10 */	stw r28, 0x10(r1)
/* 80471054 0046DF94  7C 7C 1B 78 */	mr r28, r3
/* 80471058 0046DF98  4B C4 45 BD */	bl initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
/* 8047105C 0046DF9C  38 00 00 00 */	li r0, 0
/* 80471060 0046DFA0  98 1C 04 98 */	stb r0, 0x498(r28)
/* 80471064 0046DFA4  88 1C 00 1A */	lbz r0, 0x1a(r28)
/* 80471068 0046DFA8  28 00 00 00 */	cmplwi r0, 0
/* 8047106C 0046DFAC  41 82 00 68 */	beq .L_804710D4
/* 80471070 0046DFB0  80 1C 00 38 */	lwz r0, 0x38(r28)
/* 80471074 0046DFB4  28 00 00 00 */	cmplwi r0, 0
/* 80471078 0046DFB8  41 82 00 5C */	beq .L_804710D4
/* 8047107C 0046DFBC  7C 1E 03 78 */	mr r30, r0
/* 80471080 0046DFC0  40 82 00 18 */	bne .L_80471098
/* 80471084 0046DFC4  38 7F 01 A0 */	addi r3, r31, 0x1a0
/* 80471088 0046DFC8  38 BF 01 B8 */	addi r5, r31, 0x1b8
/* 8047108C 0046DFCC  38 80 00 D0 */	li r4, 0xd0
/* 80471090 0046DFD0  4C C6 31 82 */	crclr 6
/* 80471094 0046DFD4  4B BB 95 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471098:
/* 80471098 0046DFD8  7F C3 F3 78 */	mr r3, r30
/* 8047109C 0046DFDC  4B FE C1 B9 */	bl getPlayingHandleNum__Q23PSM8CreatureFv
/* 804710A0 0046DFE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804710A4 0046DFE4  40 82 00 30 */	bne .L_804710D4
/* 804710A8 0046DFE8  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 804710AC 0046DFEC  28 00 00 00 */	cmplwi r0, 0
/* 804710B0 0046DFF0  40 82 00 18 */	bne .L_804710C8
/* 804710B4 0046DFF4  38 7F 01 C4 */	addi r3, r31, 0x1c4
/* 804710B8 0046DFF8  38 BF 01 B8 */	addi r5, r31, 0x1b8
/* 804710BC 0046DFFC  38 80 00 89 */	li r4, 0x89
/* 804710C0 0046E000  4C C6 31 82 */	crclr 6
/* 804710C4 0046E004  4B BB 95 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804710C8:
/* 804710C8 0046E008  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 804710CC 0046E00C  7F C4 F3 78 */	mr r4, r30
/* 804710D0 0046E010  4B BB 58 15 */	bl append__10JSUPtrListFP10JSUPtrLink
.L_804710D4:
/* 804710D4 0046E014  28 1D 00 00 */	cmplwi r29, 0
/* 804710D8 0046E018  40 82 00 18 */	bne .L_804710F0
/* 804710DC 0046E01C  38 7F 01 A0 */	addi r3, r31, 0x1a0
/* 804710E0 0046E020  38 BF 01 B8 */	addi r5, r31, 0x1b8
/* 804710E4 0046E024  38 80 00 D7 */	li r4, 0xd7
/* 804710E8 0046E028  4C C6 31 82 */	crclr 6
/* 804710EC 0046E02C  4B BB 95 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804710F0:
/* 804710F0 0046E030  80 1D 00 00 */	lwz r0, 0(r29)
/* 804710F4 0046E034  54 1E 27 3F */	rlwinm. r30, r0, 4, 0x1c, 0x1f
/* 804710F8 0046E038  41 82 00 60 */	beq .L_80471158
/* 804710FC 0046E03C  4B C4 93 F9 */	bl getRandom_0_1__7JALCalcFv
/* 80471100 0046E040  3C 00 43 30 */	lis r0, 0x4330
/* 80471104 0046E044  93 C1 00 0C */	stw r30, 0xc(r1)
/* 80471108 0046E048  C8 62 2A 40 */	lfd f3, lbl_80520DA0@sda21(r2)
/* 8047110C 0046E04C  90 01 00 08 */	stw r0, 8(r1)
/* 80471110 0046E050  C0 02 2A 3C */	lfs f0, lbl_80520D9C@sda21(r2)
/* 80471114 0046E054  C8 41 00 08 */	lfd f2, 8(r1)
/* 80471118 0046E058  C0 82 2A 34 */	lfs f4, lbl_80520D94@sda21(r2)
/* 8047111C 0046E05C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80471120 0046E060  EC 02 00 24 */	fdivs f0, f2, f0
/* 80471124 0046E064  EC 00 00 72 */	fmuls f0, f0, f1
/* 80471128 0046E068  D0 1C 04 A0 */	stfs f0, 0x4a0(r28)
/* 8047112C 0046E06C  C0 1C 04 A0 */	lfs f0, 0x4a0(r28)
/* 80471130 0046E070  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80471134 0046E074  40 80 00 08 */	bge .L_8047113C
/* 80471138 0046E078  48 00 00 18 */	b .L_80471150
.L_8047113C:
/* 8047113C 0046E07C  C0 82 2A 30 */	lfs f4, lbl_80520D90@sda21(r2)
/* 80471140 0046E080  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80471144 0046E084  40 81 00 08 */	ble .L_8047114C
/* 80471148 0046E088  48 00 00 08 */	b .L_80471150
.L_8047114C:
/* 8047114C 0046E08C  FC 80 00 90 */	fmr f4, f0
.L_80471150:
/* 80471150 0046E090  D0 9C 04 A0 */	stfs f4, 0x4a0(r28)
/* 80471154 0046E094  48 00 00 0C */	b .L_80471160
.L_80471158:
/* 80471158 0046E098  C0 02 2A 34 */	lfs f0, lbl_80520D94@sda21(r2)
/* 8047115C 0046E09C  D0 1C 04 A0 */	stfs f0, 0x4a0(r28)
.L_80471160:
/* 80471160 0046E0A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80471164 0046E0A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80471168 0046E0A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8047116C 0046E0AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80471170 0046E0B0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80471174 0046E0B4  7C 08 03 A6 */	mtlr r0
/* 80471178 0046E0B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8047117C 0046E0BC  4E 80 00 20 */	blr 
.endfn initParameter__Q23PSM7SeSoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo

.fn setDistanceVolumeCommon__Q23PSM7SeSoundFfUc, global
/* 80471180 0046E0C0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80471184 0046E0C4  7C 08 02 A6 */	mflr r0
/* 80471188 0046E0C8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8047118C 0046E0CC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80471190 0046E0D0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80471194 0046E0D4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80471198 0046E0D8  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8047119C 0046E0DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804711A0 0046E0E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804711A4 0046E0E4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804711A8 0046E0E8  81 83 00 10 */	lwz r12, 0x10(r3)
/* 804711AC 0046E0EC  3C A0 80 4A */	lis r5, lbl_8049DC30@ha
/* 804711B0 0046E0F0  7C 9D 23 78 */	mr r29, r4
/* 804711B4 0046E0F4  7C 7F 1B 78 */	mr r31, r3
/* 804711B8 0046E0F8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 804711BC 0046E0FC  3B C5 DC 30 */	addi r30, r5, lbl_8049DC30@l
/* 804711C0 0046E100  C0 22 2A BC */	lfs f1, cSeFxMix__Q23PSM11CreaturePrm@sda21(r2)
/* 804711C4 0046E104  38 80 00 00 */	li r4, 0
/* 804711C8 0046E108  38 A0 00 01 */	li r5, 1
/* 804711CC 0046E10C  7D 89 03 A6 */	mtctr r12
/* 804711D0 0046E110  4E 80 04 21 */	bctrl 
/* 804711D4 0046E114  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 804711D8 0046E118  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 804711DC 0046E11C  54 04 17 BF */	rlwinm. r4, r0, 2, 0x1e, 0x1f
/* 804711E0 0046E120  C3 E3 00 18 */	lfs f31, 0x18(r3)
/* 804711E4 0046E124  54 03 A7 3E */	rlwinm r3, r0, 0x14, 0x1c, 0x1f
/* 804711E8 0046E128  40 82 00 08 */	bne .L_804711F0
/* 804711EC 0046E12C  48 00 00 58 */	b .L_80471244
.L_804711F0:
/* 804711F0 0046E130  28 04 00 02 */	cmplwi r4, 2
/* 804711F4 0046E134  40 82 00 1C */	bne .L_80471210
/* 804711F8 0046E138  38 7E 01 D0 */	addi r3, r30, 0x1d0
/* 804711FC 0046E13C  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80471200 0046E140  38 80 00 1F */	li r4, 0x1f
/* 80471204 0046E144  4C C6 31 82 */	crclr 6
/* 80471208 0046E148  4B BB 94 39 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8047120C 0046E14C  48 00 00 20 */	b .L_8047122C
.L_80471210:
/* 80471210 0046E150  28 04 00 03 */	cmplwi r4, 3
/* 80471214 0046E154  40 82 00 18 */	bne .L_8047122C
/* 80471218 0046E158  38 7E 01 D0 */	addi r3, r30, 0x1d0
/* 8047121C 0046E15C  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80471220 0046E160  38 80 00 23 */	li r4, 0x23
/* 80471224 0046E164  4C C6 31 82 */	crclr 6
/* 80471228 0046E168  4B BB 94 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8047122C:
/* 8047122C 0046E16C  38 7E 01 D0 */	addi r3, r30, 0x1d0
/* 80471230 0046E170  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80471234 0046E174  38 80 00 25 */	li r4, 0x25
/* 80471238 0046E178  4C C6 31 82 */	crclr 6
/* 8047123C 0046E17C  4B BB 94 05 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80471240 0046E180  38 60 00 00 */	li r3, 0
.L_80471244:
/* 80471244 0046E184  88 1F 04 98 */	lbz r0, 0x498(r31)
/* 80471248 0046E188  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 8047124C 0046E18C  28 00 00 01 */	cmplwi r0, 1
/* 80471250 0046E190  40 82 00 14 */	bne .L_80471264
/* 80471254 0046E194  FC 20 F8 90 */	fmr f1, f31
/* 80471258 0046E198  7F E3 FB 78 */	mr r3, r31
/* 8047125C 0046E19C  48 00 02 41 */	bl calcVolumeSpecialized__Q23PSM7SeSoundFf
/* 80471260 0046E1A0  48 00 00 10 */	b .L_80471270
.L_80471264:
/* 80471264 0046E1A4  FC 20 F8 90 */	fmr f1, f31
/* 80471268 0046E1A8  7F A3 EB 78 */	mr r3, r29
/* 8047126C 0046E1AC  48 00 02 9D */	bl calcVolume__Q23PSM7SeSoundFfUcUc
.L_80471270:
/* 80471270 0046E1B0  C0 1F 04 A0 */	lfs f0, 0x4a0(r31)
/* 80471274 0046E1B4  88 1F 00 1A */	lbz r0, 0x1a(r31)
/* 80471278 0046E1B8  EF C1 00 28 */	fsubs f30, f1, f0
/* 8047127C 0046E1BC  28 00 00 00 */	cmplwi r0, 0
/* 80471280 0046E1C0  41 82 00 10 */	beq .L_80471290
/* 80471284 0046E1C4  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 80471288 0046E1C8  28 00 00 00 */	cmplwi r0, 0
/* 8047128C 0046E1CC  41 82 01 7C */	beq .L_80471408
.L_80471290:
/* 80471290 0046E1D0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80471294 0046E1D4  28 00 00 00 */	cmplwi r0, 0
/* 80471298 0046E1D8  40 82 00 18 */	bne .L_804712B0
/* 8047129C 0046E1DC  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 804712A0 0046E1E0  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 804712A4 0046E1E4  38 80 01 D3 */	li r4, 0x1d3
/* 804712A8 0046E1E8  4C C6 31 82 */	crclr 6
/* 804712AC 0046E1EC  4B BB 93 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804712B0:
/* 804712B0 0046E1F0  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 804712B4 0046E1F4  28 1D 00 00 */	cmplwi r29, 0
/* 804712B8 0046E1F8  40 82 00 18 */	bne .L_804712D0
/* 804712BC 0046E1FC  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 804712C0 0046E200  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 804712C4 0046E204  38 80 01 DC */	li r4, 0x1dc
/* 804712C8 0046E208  4C C6 31 82 */	crclr 6
/* 804712CC 0046E20C  4B BB 93 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804712D0:
/* 804712D0 0046E210  80 1D 00 08 */	lwz r0, 8(r29)
/* 804712D4 0046E214  28 00 00 00 */	cmplwi r0, 0
/* 804712D8 0046E218  40 82 00 18 */	bne .L_804712F0
/* 804712DC 0046E21C  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 804712E0 0046E220  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 804712E4 0046E224  38 80 00 A1 */	li r4, 0xa1
/* 804712E8 0046E228  4C C6 31 82 */	crclr 6
/* 804712EC 0046E22C  4B BB 93 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804712F0:
/* 804712F0 0046E230  83 BD 00 08 */	lwz r29, 8(r29)
/* 804712F4 0046E234  28 1D 00 00 */	cmplwi r29, 0
/* 804712F8 0046E238  40 82 00 18 */	bne .L_80471310
/* 804712FC 0046E23C  38 7E 01 A0 */	addi r3, r30, 0x1a0
/* 80471300 0046E240  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80471304 0046E244  38 80 01 05 */	li r4, 0x105
/* 80471308 0046E248  4C C6 31 82 */	crclr 6
/* 8047130C 0046E24C  4B BB 93 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471310:
/* 80471310 0046E250  7F A3 EB 78 */	mr r3, r29
/* 80471314 0046E254  88 9F 04 9C */	lbz r4, 0x49c(r31)
/* 80471318 0046E258  81 9D 00 00 */	lwz r12, 0(r29)
/* 8047131C 0046E25C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80471320 0046E260  7D 89 03 A6 */	mtctr r12
/* 80471324 0046E264  4E 80 04 21 */	bctrl 
/* 80471328 0046E268  FF E0 08 90 */	fmr f31, f1
/* 8047132C 0046E26C  C0 02 2A 34 */	lfs f0, lbl_80520D94@sda21(r2)
/* 80471330 0046E270  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 80471334 0046E274  40 82 00 1C */	bne .L_80471350
/* 80471338 0046E278  80 DF 00 20 */	lwz r6, 0x20(r31)
/* 8047133C 0046E27C  38 7E 01 A0 */	addi r3, r30, 0x1a0
/* 80471340 0046E280  38 BE 01 F8 */	addi r5, r30, 0x1f8
/* 80471344 0046E284  38 80 01 0D */	li r4, 0x10d
/* 80471348 0046E288  4C C6 31 82 */	crclr 6
/* 8047134C 0046E28C  4B BB 92 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471350:
/* 80471350 0046E290  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80471354 0046E294  EF DE 07 F2 */	fmuls f30, f30, f31
/* 80471358 0046E298  28 00 00 00 */	cmplwi r0, 0
/* 8047135C 0046E29C  40 82 00 18 */	bne .L_80471374
/* 80471360 0046E2A0  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 80471364 0046E2A4  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80471368 0046E2A8  38 80 01 D3 */	li r4, 0x1d3
/* 8047136C 0046E2AC  4C C6 31 82 */	crclr 6
/* 80471370 0046E2B0  4B BB 92 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471374:
/* 80471374 0046E2B4  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 80471378 0046E2B8  28 1D 00 00 */	cmplwi r29, 0
/* 8047137C 0046E2BC  40 82 00 18 */	bne .L_80471394
/* 80471380 0046E2C0  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 80471384 0046E2C4  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80471388 0046E2C8  38 80 01 DC */	li r4, 0x1dc
/* 8047138C 0046E2CC  4C C6 31 82 */	crclr 6
/* 80471390 0046E2D0  4B BB 92 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471394:
/* 80471394 0046E2D4  80 1D 00 04 */	lwz r0, 4(r29)
/* 80471398 0046E2D8  28 00 00 00 */	cmplwi r0, 0
/* 8047139C 0046E2DC  40 82 00 18 */	bne .L_804713B4
/* 804713A0 0046E2E0  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 804713A4 0046E2E4  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 804713A8 0046E2E8  38 80 00 CF */	li r4, 0xcf
/* 804713AC 0046E2EC  4C C6 31 82 */	crclr 6
/* 804713B0 0046E2F0  4B BB 92 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804713B4:
/* 804713B4 0046E2F4  80 7D 00 04 */	lwz r3, 4(r29)
/* 804713B8 0046E2F8  83 A3 00 04 */	lwz r29, 4(r3)
/* 804713BC 0046E2FC  28 1D 00 00 */	cmplwi r29, 0
/* 804713C0 0046E300  40 82 00 18 */	bne .L_804713D8
/* 804713C4 0046E304  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 804713C8 0046E308  38 BE 02 20 */	addi r5, r30, 0x220
/* 804713CC 0046E30C  38 80 00 D1 */	li r4, 0xd1
/* 804713D0 0046E310  4C C6 31 82 */	crclr 6
/* 804713D4 0046E314  4B BB 92 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804713D8:
/* 804713D8 0046E318  7F A3 EB 78 */	mr r3, r29
/* 804713DC 0046E31C  81 9D 00 00 */	lwz r12, 0(r29)
/* 804713E0 0046E320  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 804713E4 0046E324  7D 89 03 A6 */	mtctr r12
/* 804713E8 0046E328  4E 80 04 21 */	bctrl 
/* 804713EC 0046E32C  7F E3 FB 78 */	mr r3, r31
/* 804713F0 0046E330  38 80 00 00 */	li r4, 0
/* 804713F4 0046E334  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 804713F8 0046E338  38 A0 00 02 */	li r5, 2
/* 804713FC 0046E33C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80471400 0046E340  7D 89 03 A6 */	mtctr r12
/* 80471404 0046E344  4E 80 04 21 */	bctrl 
.L_80471408:
/* 80471408 0046E348  C0 22 2A 34 */	lfs f1, lbl_80520D94@sda21(r2)
/* 8047140C 0046E34C  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 80471410 0046E350  40 80 00 08 */	bge .L_80471418
/* 80471414 0046E354  48 00 00 18 */	b .L_8047142C
.L_80471418:
/* 80471418 0046E358  C0 22 2A 30 */	lfs f1, lbl_80520D90@sda21(r2)
/* 8047141C 0046E35C  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 80471420 0046E360  40 81 00 08 */	ble .L_80471428
/* 80471424 0046E364  48 00 00 08 */	b .L_8047142C
.L_80471428:
/* 80471428 0046E368  FC 20 F0 90 */	fmr f1, f30
.L_8047142C:
/* 8047142C 0046E36C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80471430 0046E370  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80471434 0046E374  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80471438 0046E378  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8047143C 0046E37C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80471440 0046E380  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80471444 0046E384  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80471448 0046E388  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8047144C 0046E38C  7C 08 03 A6 */	mtlr r0
/* 80471450 0046E390  38 21 00 40 */	addi r1, r1, 0x40
/* 80471454 0046E394  4E 80 00 20 */	blr 
.endfn setDistanceVolumeCommon__Q23PSM7SeSoundFfUc

.fn specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo, global
/* 80471458 0046E398  C0 04 00 00 */	lfs f0, 0(r4)
/* 8047145C 0046E39C  38 00 00 01 */	li r0, 1
/* 80471460 0046E3A0  C0 24 00 04 */	lfs f1, 4(r4)
/* 80471464 0046E3A4  D0 03 04 84 */	stfs f0, 0x484(r3)
/* 80471468 0046E3A8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8047146C 0046E3AC  D0 23 04 88 */	stfs f1, 0x488(r3)
/* 80471470 0046E3B0  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80471474 0046E3B4  D0 03 04 8C */	stfs f0, 0x48c(r3)
/* 80471478 0046E3B8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8047147C 0046E3BC  D0 23 04 90 */	stfs f1, 0x490(r3)
/* 80471480 0046E3C0  88 A4 00 14 */	lbz r5, 0x14(r4)
/* 80471484 0046E3C4  D0 03 04 94 */	stfs f0, 0x494(r3)
/* 80471488 0046E3C8  88 84 00 15 */	lbz r4, 0x15(r4)
/* 8047148C 0046E3CC  98 A3 04 98 */	stb r5, 0x498(r3)
/* 80471490 0046E3D0  98 83 04 99 */	stb r4, 0x499(r3)
/* 80471494 0046E3D4  98 03 04 98 */	stb r0, 0x498(r3)
/* 80471498 0046E3D8  4E 80 00 20 */	blr 
.endfn specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

.fn calcVolumeSpecialized__Q23PSM7SeSoundFf, global
/* 8047149C 0046E3DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804714A0 0046E3E0  7C 08 02 A6 */	mflr r0
/* 804714A4 0046E3E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 804714A8 0046E3E8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 804714AC 0046E3EC  FF E0 08 90 */	fmr f31, f1
/* 804714B0 0046E3F0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 804714B4 0046E3F4  7C 7F 1B 78 */	mr r31, r3
/* 804714B8 0046E3F8  88 03 04 98 */	lbz r0, 0x498(r3)
/* 804714BC 0046E3FC  28 00 00 01 */	cmplwi r0, 1
/* 804714C0 0046E400  41 82 00 20 */	beq .L_804714E0
/* 804714C4 0046E404  3C 60 80 4A */	lis r3, lbl_8049DDD0@ha
/* 804714C8 0046E408  3C A0 80 4A */	lis r5, lbl_8049DDE8@ha
/* 804714CC 0046E40C  38 63 DD D0 */	addi r3, r3, lbl_8049DDD0@l
/* 804714D0 0046E410  38 80 01 26 */	li r4, 0x126
/* 804714D4 0046E414  38 A5 DD E8 */	addi r5, r5, lbl_8049DDE8@l
/* 804714D8 0046E418  4C C6 31 82 */	crclr 6
/* 804714DC 0046E41C  4B BB 91 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804714E0:
/* 804714E0 0046E420  FC 20 F8 90 */	fmr f1, f31
/* 804714E4 0046E424  38 7F 04 84 */	addi r3, r31, 0x484
/* 804714E8 0046E428  38 80 00 00 */	li r4, 0
/* 804714EC 0046E42C  4B EC 36 79 */	bl getDistVol__Q36PSGame10SoundTable11SePerspInfoFfUc
/* 804714F0 0046E430  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804714F4 0046E434  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 804714F8 0046E438  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 804714FC 0046E43C  7C 08 03 A6 */	mtlr r0
/* 80471500 0046E440  38 21 00 20 */	addi r1, r1, 0x20
/* 80471504 0046E444  4E 80 00 20 */	blr 
.endfn calcVolumeSpecialized__Q23PSM7SeSoundFf

.fn calcVolume__Q23PSM7SeSoundFfUcUc, global
/* 80471508 0046E448  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8047150C 0046E44C  7C 08 02 A6 */	mflr r0
/* 80471510 0046E450  90 01 00 24 */	stw r0, 0x24(r1)
/* 80471514 0046E454  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80471518 0046E458  FF E0 08 90 */	fmr f31, f1
/* 8047151C 0046E45C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80471520 0046E460  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80471524 0046E464  54 9E 15 BA */	rlwinm r30, r4, 2, 0x16, 0x1d
/* 80471528 0046E468  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8047152C 0046E46C  7C 7D 1B 78 */	mr r29, r3
/* 80471530 0046E470  83 ED 91 C4 */	lwz r31, "sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
/* 80471534 0046E474  7C 7F F2 14 */	add r3, r31, r30
/* 80471538 0046E478  80 03 00 04 */	lwz r0, 4(r3)
/* 8047153C 0046E47C  28 00 00 00 */	cmplwi r0, 0
/* 80471540 0046E480  40 82 00 20 */	bne .L_80471560
/* 80471544 0046E484  3C 60 80 4A */	lis r3, lbl_8049DE10@ha
/* 80471548 0046E488  3C A0 80 4A */	lis r5, lbl_8049DDE8@ha
/* 8047154C 0046E48C  38 63 DE 10 */	addi r3, r3, lbl_8049DE10@l
/* 80471550 0046E490  38 80 00 5D */	li r4, 0x5d
/* 80471554 0046E494  38 A5 DD E8 */	addi r5, r5, lbl_8049DDE8@l
/* 80471558 0046E498  4C C6 31 82 */	crclr 6
/* 8047155C 0046E49C  4B BB 90 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471560:
/* 80471560 0046E4A0  7C 7F F2 14 */	add r3, r31, r30
/* 80471564 0046E4A4  FC 20 F8 90 */	fmr f1, f31
/* 80471568 0046E4A8  80 63 00 04 */	lwz r3, 4(r3)
/* 8047156C 0046E4AC  7F A4 EB 78 */	mr r4, r29
/* 80471570 0046E4B0  4B EC 35 F5 */	bl getDistVol__Q36PSGame10SoundTable11SePerspInfoFfUc
/* 80471574 0046E4B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80471578 0046E4B8  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8047157C 0046E4BC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80471580 0046E4C0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80471584 0046E4C4  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80471588 0046E4C8  7C 08 03 A6 */	mtlr r0
/* 8047158C 0046E4CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80471590 0046E4D0  4E 80 00 20 */	blr 
.endfn calcVolume__Q23PSM7SeSoundFfUcUc

.fn setSeDistancePan__Q23PSM7SeSoundFUc, global
/* 80471594 0046E4D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80471598 0046E4D8  7C 08 02 A6 */	mflr r0
/* 8047159C 0046E4DC  C0 22 2A 48 */	lfs f1, lbl_80520DA8@sda21(r2)
/* 804715A0 0046E4E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 804715A4 0046E4E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804715A8 0046E4E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804715AC 0046E4EC  7C 9E 23 78 */	mr r30, r4
/* 804715B0 0046E4F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804715B4 0046E4F4  7C 7D 1B 78 */	mr r29, r3
/* 804715B8 0046E4F8  88 03 00 1A */	lbz r0, 0x1a(r3)
/* 804715BC 0046E4FC  28 00 00 00 */	cmplwi r0, 0
/* 804715C0 0046E500  40 82 00 14 */	bne .L_804715D4
/* 804715C4 0046E504  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 804715C8 0046E508  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 804715CC 0046E50C  48 00 00 81 */	bl calcPan__Q23PSM7SeSoundFRC3Vecf
/* 804715D0 0046E510  48 00 00 4C */	b .L_8047161C
.L_804715D4:
/* 804715D4 0046E514  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 804715D8 0046E518  28 00 00 00 */	cmplwi r0, 0
/* 804715DC 0046E51C  41 82 00 40 */	beq .L_8047161C
/* 804715E0 0046E520  7C 1F 03 78 */	mr r31, r0
/* 804715E4 0046E524  40 82 00 20 */	bne .L_80471604
/* 804715E8 0046E528  3C 60 80 4A */	lis r3, lbl_8049DDD0@ha
/* 804715EC 0046E52C  3C A0 80 4A */	lis r5, lbl_8049DDE8@ha
/* 804715F0 0046E530  38 63 DD D0 */	addi r3, r3, lbl_8049DDD0@l
/* 804715F4 0046E534  38 80 01 51 */	li r4, 0x151
/* 804715F8 0046E538  38 A5 DD E8 */	addi r5, r5, lbl_8049DDE8@l
/* 804715FC 0046E53C  4C C6 31 82 */	crclr 6
/* 80471600 0046E540  4B BB 90 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80471604:
/* 80471604 0046E544  7F E3 FB 78 */	mr r3, r31
/* 80471608 0046E548  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 8047160C 0046E54C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80471610 0046E550  7D 89 03 A6 */	mtctr r12
/* 80471614 0046E554  4E 80 04 21 */	bctrl 
/* 80471618 0046E558  C0 23 00 38 */	lfs f1, 0x38(r3)
.L_8047161C:
/* 8047161C 0046E55C  7F A3 EB 78 */	mr r3, r29
/* 80471620 0046E560  57 C5 06 3E */	clrlwi r5, r30, 0x18
/* 80471624 0046E564  38 80 00 04 */	li r4, 4
/* 80471628 0046E568  38 C0 00 00 */	li r6, 0
/* 8047162C 0046E56C  4B C4 31 89 */	bl setSeInterPan__5JAISeFUcfUlUc
/* 80471630 0046E570  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80471634 0046E574  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80471638 0046E578  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8047163C 0046E57C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80471640 0046E580  7C 08 03 A6 */	mtlr r0
/* 80471644 0046E584  38 21 00 20 */	addi r1, r1, 0x20
/* 80471648 0046E588  4E 80 00 20 */	blr 
.endfn setSeDistancePan__Q23PSM7SeSoundFUc

.fn calcPan__Q23PSM7SeSoundFRC3Vecf, global
/* 8047164C 0046E58C  C0 02 2A 34 */	lfs f0, lbl_80520D94@sda21(r2)
/* 80471650 0046E590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80471654 0046E594  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80471658 0046E598  4C 40 13 82 */	cror 2, 0, 2
/* 8047165C 0046E59C  40 82 00 0C */	bne .L_80471668
/* 80471660 0046E5A0  C0 4D 86 E8 */	lfs f2, cCenterRad__Q23PSM7SeSound@sda21(r13)
/* 80471664 0046E5A4  48 00 00 68 */	b .L_804716CC
.L_80471668:
/* 80471668 0046E5A8  C0 03 00 00 */	lfs f0, 0(r3)
/* 8047166C 0046E5AC  C0 42 2A 30 */	lfs f2, lbl_80520D90@sda21(r2)
/* 80471670 0046E5B0  FC 00 00 50 */	fneg f0, f0
/* 80471674 0046E5B4  C0 62 2A 38 */	lfs f3, lbl_80520D98@sda21(r2)
/* 80471678 0046E5B8  EC 00 08 24 */	fdivs f0, f0, f1
/* 8047167C 0046E5BC  EC 02 00 2A */	fadds f0, f2, f0
/* 80471680 0046E5C0  EC 03 00 32 */	fmuls f0, f3, f0
/* 80471684 0046E5C4  FC 00 00 1E */	fctiwz f0, f0
/* 80471688 0046E5C8  D8 01 00 08 */	stfd f0, 8(r1)
/* 8047168C 0046E5CC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80471690 0046E5D0  2C 00 00 00 */	cmpwi r0, 0
/* 80471694 0046E5D4  40 80 00 10 */	bge .L_804716A4
/* 80471698 0046E5D8  3C 60 80 4A */	lis r3, smACosPrm__Q23PSM7SeSound@ha
/* 8047169C 0046E5DC  C0 43 DC 3C */	lfs f2, smACosPrm__Q23PSM7SeSound@l(r3)
/* 804716A0 0046E5E0  48 00 00 2C */	b .L_804716CC
.L_804716A4:
/* 804716A4 0046E5E4  2C 00 00 65 */	cmpwi r0, 0x65
/* 804716A8 0046E5E8  41 80 00 14 */	blt .L_804716BC
/* 804716AC 0046E5EC  3C 60 80 4A */	lis r3, smACosPrm__Q23PSM7SeSound@ha
/* 804716B0 0046E5F0  38 63 DC 3C */	addi r3, r3, smACosPrm__Q23PSM7SeSound@l
/* 804716B4 0046E5F4  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 804716B8 0046E5F8  48 00 00 14 */	b .L_804716CC
.L_804716BC:
/* 804716BC 0046E5FC  3C 60 80 4A */	lis r3, smACosPrm__Q23PSM7SeSound@ha
/* 804716C0 0046E600  54 00 10 3A */	slwi r0, r0, 2
/* 804716C4 0046E604  38 63 DC 3C */	addi r3, r3, smACosPrm__Q23PSM7SeSound@l
/* 804716C8 0046E608  7C 43 04 2E */	lfsx f2, r3, r0
.L_804716CC:
/* 804716CC 0046E60C  88 0D 9C BC */	lbz r0, init$3854@sda21(r13)
/* 804716D0 0046E610  7C 00 07 75 */	extsb. r0, r0
/* 804716D4 0046E614  40 82 00 1C */	bne .L_804716F0
/* 804716D8 0046E618  C0 2D 86 E4 */	lfs f1, cPan_MaxAmp__Q23PSM7SeSound@sda21(r13)
/* 804716DC 0046E61C  38 00 00 01 */	li r0, 1
/* 804716E0 0046E620  C0 02 2A 4C */	lfs f0, lbl_80520DAC@sda21(r2)
/* 804716E4 0046E624  98 0D 9C BC */	stb r0, init$3854@sda21(r13)
/* 804716E8 0046E628  EC 01 00 24 */	fdivs f0, f1, f0
/* 804716EC 0046E62C  D0 0D 9C B8 */	stfs f0, panRatio$3853@sda21(r13)
.L_804716F0:
/* 804716F0 0046E630  C0 0D 9C B8 */	lfs f0, panRatio$3853@sda21(r13)
/* 804716F4 0046E634  C0 22 2A 30 */	lfs f1, lbl_80520D90@sda21(r2)
/* 804716F8 0046E638  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804716FC 0046E63C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80471700 0046E640  40 81 00 08 */	ble .L_80471708
/* 80471704 0046E644  48 00 00 08 */	b .L_8047170C
.L_80471708:
/* 80471708 0046E648  FC 20 00 90 */	fmr f1, f0
.L_8047170C:
/* 8047170C 0046E64C  38 21 00 10 */	addi r1, r1, 0x10
/* 80471710 0046E650  4E 80 00 20 */	blr 
.endfn calcPan__Q23PSM7SeSoundFRC3Vecf

.fn setSeDistanceDolby__Q23PSM7SeSoundFUc, global
/* 80471714 0046E654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80471718 0046E658  7C 08 02 A6 */	mflr r0
/* 8047171C 0046E65C  C0 22 2A 34 */	lfs f1, lbl_80520D94@sda21(r2)
/* 80471720 0046E660  90 01 00 14 */	stw r0, 0x14(r1)
/* 80471724 0046E664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80471728 0046E668  7C 9F 23 78 */	mr r31, r4
/* 8047172C 0046E66C  93 C1 00 08 */	stw r30, 8(r1)
/* 80471730 0046E670  7C 7E 1B 78 */	mr r30, r3
/* 80471734 0046E674  88 03 00 1A */	lbz r0, 0x1a(r3)
/* 80471738 0046E678  28 00 00 00 */	cmplwi r0, 0
/* 8047173C 0046E67C  40 82 00 14 */	bne .L_80471750
/* 80471740 0046E680  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 80471744 0046E684  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 80471748 0046E688  48 00 00 55 */	bl calcDolby__Q23PSM7SeSoundFRC3Vecf
/* 8047174C 0046E68C  48 00 00 24 */	b .L_80471770
.L_80471750:
/* 80471750 0046E690  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80471754 0046E694  28 03 00 00 */	cmplwi r3, 0
/* 80471758 0046E698  41 82 00 18 */	beq .L_80471770
/* 8047175C 0046E69C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80471760 0046E6A0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80471764 0046E6A4  7D 89 03 A6 */	mtctr r12
/* 80471768 0046E6A8  4E 80 04 21 */	bctrl 
/* 8047176C 0046E6AC  C0 23 00 3C */	lfs f1, 0x3c(r3)
.L_80471770:
/* 80471770 0046E6B0  7F C3 F3 78 */	mr r3, r30
/* 80471774 0046E6B4  57 E5 06 3E */	clrlwi r5, r31, 0x18
/* 80471778 0046E6B8  38 80 00 04 */	li r4, 4
/* 8047177C 0046E6BC  38 C0 00 00 */	li r6, 0
/* 80471780 0046E6C0  4B C4 31 8D */	bl setSeInterDolby__5JAISeFUcfUlUc
/* 80471784 0046E6C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80471788 0046E6C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8047178C 0046E6CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80471790 0046E6D0  7C 08 03 A6 */	mtlr r0
/* 80471794 0046E6D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80471798 0046E6D8  4E 80 00 20 */	blr 
.endfn setSeDistanceDolby__Q23PSM7SeSoundFUc

.fn calcDolby__Q23PSM7SeSoundFRC3Vecf, global
/* 8047179C 0046E6DC  C0 02 2A 34 */	lfs f0, lbl_80520D94@sda21(r2)
/* 804717A0 0046E6E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804717A4 0046E6E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804717A8 0046E6E8  4C 40 13 82 */	cror 2, 0, 2
/* 804717AC 0046E6EC  40 82 00 0C */	bne .L_804717B8
/* 804717B0 0046E6F0  FC 20 00 90 */	fmr f1, f0
/* 804717B4 0046E6F4  48 00 00 EC */	b .L_804718A0
.L_804717B8:
/* 804717B8 0046E6F8  C0 03 00 08 */	lfs f0, 8(r3)
/* 804717BC 0046E6FC  C0 42 2A 30 */	lfs f2, lbl_80520D90@sda21(r2)
/* 804717C0 0046E700  FC 00 00 50 */	fneg f0, f0
/* 804717C4 0046E704  C0 62 2A 38 */	lfs f3, lbl_80520D98@sda21(r2)
/* 804717C8 0046E708  EC 00 08 24 */	fdivs f0, f0, f1
/* 804717CC 0046E70C  EC 02 00 2A */	fadds f0, f2, f0
/* 804717D0 0046E710  EC 03 00 32 */	fmuls f0, f3, f0
/* 804717D4 0046E714  FC 00 00 1E */	fctiwz f0, f0
/* 804717D8 0046E718  D8 01 00 08 */	stfd f0, 8(r1)
/* 804717DC 0046E71C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 804717E0 0046E720  2C 00 00 00 */	cmpwi r0, 0
/* 804717E4 0046E724  40 80 00 10 */	bge .L_804717F4
/* 804717E8 0046E728  3C 60 80 4A */	lis r3, smACosPrm__Q23PSM7SeSound@ha
/* 804717EC 0046E72C  C0 03 DC 3C */	lfs f0, smACosPrm__Q23PSM7SeSound@l(r3)
/* 804717F0 0046E730  48 00 00 2C */	b .L_8047181C
.L_804717F4:
/* 804717F4 0046E734  2C 00 00 65 */	cmpwi r0, 0x65
/* 804717F8 0046E738  41 80 00 14 */	blt .L_8047180C
/* 804717FC 0046E73C  3C 60 80 4A */	lis r3, smACosPrm__Q23PSM7SeSound@ha
/* 80471800 0046E740  38 63 DC 3C */	addi r3, r3, smACosPrm__Q23PSM7SeSound@l
/* 80471804 0046E744  C0 03 01 90 */	lfs f0, 0x190(r3)
/* 80471808 0046E748  48 00 00 14 */	b .L_8047181C
.L_8047180C:
/* 8047180C 0046E74C  3C 60 80 4A */	lis r3, smACosPrm__Q23PSM7SeSound@ha
/* 80471810 0046E750  54 00 10 3A */	slwi r0, r0, 2
/* 80471814 0046E754  38 63 DC 3C */	addi r3, r3, smACosPrm__Q23PSM7SeSound@l
/* 80471818 0046E758  7C 03 04 2E */	lfsx f0, r3, r0
.L_8047181C:
/* 8047181C 0046E75C  C0 6D 86 D8 */	lfs f3, cDol_0Rad__Q23PSM7SeSound@sda21(r13)
/* 80471820 0046E760  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80471824 0046E764  40 80 00 0C */	bge .L_80471830
/* 80471828 0046E768  C0 02 2A 34 */	lfs f0, lbl_80520D94@sda21(r2)
/* 8047182C 0046E76C  48 00 00 50 */	b .L_8047187C
.L_80471830:
/* 80471830 0046E770  C0 8D 86 DC */	lfs f4, cDol_HalfRad__Q23PSM7SeSound@sda21(r13)
/* 80471834 0046E774  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80471838 0046E778  40 80 00 1C */	bge .L_80471854
/* 8047183C 0046E77C  EC 24 18 28 */	fsubs f1, f4, f3
/* 80471840 0046E780  C0 42 2A 48 */	lfs f2, lbl_80520DA8@sda21(r2)
/* 80471844 0046E784  EC 00 18 28 */	fsubs f0, f0, f3
/* 80471848 0046E788  EC 22 08 24 */	fdivs f1, f2, f1
/* 8047184C 0046E78C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80471850 0046E790  48 00 00 2C */	b .L_8047187C
.L_80471854:
/* 80471854 0046E794  C0 2D 86 E0 */	lfs f1, cDol_FullRad__Q23PSM7SeSound@sda21(r13)
/* 80471858 0046E798  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8047185C 0046E79C  40 80 00 1C */	bge .L_80471878
/* 80471860 0046E7A0  EC 21 20 28 */	fsubs f1, f1, f4
/* 80471864 0046E7A4  C0 42 2A 48 */	lfs f2, lbl_80520DA8@sda21(r2)
/* 80471868 0046E7A8  EC 00 20 28 */	fsubs f0, f0, f4
/* 8047186C 0046E7AC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80471870 0046E7B0  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80471874 0046E7B4  48 00 00 08 */	b .L_8047187C
.L_80471878:
/* 80471878 0046E7B8  C0 02 2A 30 */	lfs f0, lbl_80520D90@sda21(r2)
.L_8047187C:
/* 8047187C 0046E7BC  C0 22 2A 30 */	lfs f1, lbl_80520D90@sda21(r2)
/* 80471880 0046E7C0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80471884 0046E7C4  40 81 00 08 */	ble .L_8047188C
/* 80471888 0046E7C8  48 00 00 18 */	b .L_804718A0
.L_8047188C:
/* 8047188C 0046E7CC  C0 22 2A 34 */	lfs f1, lbl_80520D94@sda21(r2)
/* 80471890 0046E7D0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80471894 0046E7D4  40 80 00 08 */	bge .L_8047189C
/* 80471898 0046E7D8  48 00 00 08 */	b .L_804718A0
.L_8047189C:
/* 8047189C 0046E7DC  FC 20 00 90 */	fmr f1, f0
.L_804718A0:
/* 804718A0 0046E7E0  38 21 00 10 */	addi r1, r1, 0x10
/* 804718A4 0046E7E4  4E 80 00 20 */	blr 
.endfn calcDolby__Q23PSM7SeSoundFRC3Vecf

.section .text, "ax", unique, 1
.fn __sinit_PSMainSide_Sound_cpp, local
/* 804718A8 0046E7E8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 804718AC 0046E7EC  38 00 FF FF */	li r0, -1
/* 804718B0 0046E7F0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 804718B4 0046E7F4  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 804718B8 0046E7F8  90 0D 9C B0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 804718BC 0046E7FC  D4 03 F9 A8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 804718C0 0046E800  D0 0D 9C B4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 804718C4 0046E804  D0 03 00 04 */	stfs f0, 4(r3)
/* 804718C8 0046E808  D0 03 00 08 */	stfs f0, 8(r3)
/* 804718CC 0046E80C  4E 80 00 20 */	blr 
.endfn __sinit_PSMainSide_Sound_cpp
