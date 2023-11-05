.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049CD98, local
	.asciz "damageD  "
.endobj lbl_8049CD98
.balign 4
.obj lbl_8049CDA4, local
	.asciz "lifeD    "
.endobj lbl_8049CDA4
.balign 4
.obj lbl_8049CDB0, local
	.asciz "pikminD  "
.endobj lbl_8049CDB0
.balign 4
.obj lbl_8049CDBC, local
	.asciz "PSMainSide_Director.cpp"
.endobj lbl_8049CDBC
.balign 4
.obj lbl_8049CDD4, local
	.asciz "P2Assert"
.endobj lbl_8049CDD4
.balign 4
.obj lbl_8049CDE0, local
	.asciz "PSDirector.h"
.endobj lbl_8049CDE0
.balign 4
.obj lbl_8049CDF0, local
	.asciz "PSCommon.h"
.endobj lbl_8049CDF0
.balign 4
.obj lbl_8049CDFC, local
	.asciz "PSGame.h"
.endobj lbl_8049CDFC
.balign 4
.obj lbl_8049CE08, local
	.asciz "PSScene.h"
.endobj lbl_8049CE08
.balign 4
.obj lbl_8049CE14, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_8049CE14
.balign 4
.obj lbl_8049CE38, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_8049CE38
.balign 4
.obj lbl_8049CE50, local
	.asciz "pikatkD  "
.endobj lbl_8049CE50
.balign 4
.obj lbl_8049CE5C, local
	.asciz "tentionD "
.endobj lbl_8049CE5C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23PSM13ExiteDirector, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM13ExiteDirectorFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM13ExiteDirector
.obj __vt__Q23PSM17PikAttackDirector, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM17PikAttackDirectorFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM17PikAttackDirector
.obj __vt__Q23PSM19ActorDirector_Kehai, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM19ActorDirector_KehaiFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q23PSM19ActorDirector_EnemyFv
	.4byte execInner__Q23PSM20ActorDirector_ScaledFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
	.4byte getNearestDistance__Q23PSM20ActorDirector_ScaledFv
	.4byte onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature
	.4byte getVolZeroDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase
	.4byte getVolMaxDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase
.endobj __vt__Q23PSM19ActorDirector_Kehai
.obj __vt__Q23PSM20ActorDirector_Battle, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM20ActorDirector_BattleFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q23PSM19ActorDirector_EnemyFv
	.4byte execInner__Q23PSM20ActorDirector_ScaledFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
	.4byte getNearestDistance__Q23PSM20ActorDirector_ScaledFv
	.4byte onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature
	.4byte getVolZeroDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase
	.4byte getVolMaxDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase
.endobj __vt__Q23PSM20ActorDirector_Battle
.obj __vt__Q23PSM19ActorDirector_Enemy, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM19ActorDirector_EnemyFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q23PSM19ActorDirector_EnemyFv
	.4byte execInner__Q23PSM20ActorDirector_ScaledFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
	.4byte getNearestDistance__Q23PSM20ActorDirector_ScaledFv
	.4byte onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature
	.4byte 0
	.4byte 0
.endobj __vt__Q23PSM19ActorDirector_Enemy
.obj __vt__Q23PSM20ActorDirector_Scaled, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM20ActorDirector_ScaledFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q23PSM22TrackOnDirector_ScaledFv
	.4byte execInner__Q23PSM20ActorDirector_ScaledFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
	.4byte getNearestDistance__Q23PSM20ActorDirector_ScaledFv
	.4byte onSetMinDistObj__Q23PSM20ActorDirector_ScaledFPQ24Game8Creature
.endobj __vt__Q23PSM20ActorDirector_Scaled
.obj __vt__Q23PSM21ActorDirector_TrackOn, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM21ActorDirector_TrackOnFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q23PSM21ActorDirector_TrackOnFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM21ActorDirector_TrackOn
.obj __vt__Q23PSM17ListDirectorActor, global
	.4byte 0
	.4byte 0
	.4byte exec__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBase
	.4byte onUpdateFromMasterD__Q23PSM17ListDirectorActorFv
	.4byte onUpdateFromSlaveD__Q28PSSystem17DirectorCopyActorFv
.endobj __vt__Q23PSM17ListDirectorActor
.obj __vt__Q23PSM22TrackOnDirector_Scaled, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM22TrackOnDirector_ScaledFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q23PSM22TrackOnDirector_ScaledFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
	.4byte 0
.endobj __vt__Q23PSM22TrackOnDirector_Scaled
.obj __vt__Q23PSM22TrackOnDirector_Voting, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM22TrackOnDirector_VotingFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q23PSM22TrackOnDirector_VotingFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM22TrackOnDirector_Voting
.obj __vt__Q23PSM19TrackOnDirectorBase, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM19TrackOnDirectorBaseFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM19TrackOnDirectorBase
.obj __vt__Q23PSM28PikminNumberDirector_AutoBgm, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM28PikminNumberDirector_AutoBgmFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q23PSM20PikminNumberDirectorFv
	.4byte directOnTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM28PikminNumberDirector_AutoBgm
.obj __vt__Q23PSM20PikminNumberDirector, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM20PikminNumberDirectorFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q23PSM20PikminNumberDirectorFv
	.4byte directOnTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM20PikminNumberDirector
.obj __vt__Q23PSM25ActorDirector_TempoChange, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM25ActorDirector_TempoChangeFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q23PSM25ActorDirector_TempoChangeFv
	.4byte directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM25ActorDirector_TempoChange
.obj __vt__Q23PSM23TempoChangeDirectorBase, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM23TempoChangeDirectorBaseFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM23TempoChangeDirectorBase
.obj __vt__Q23PSM16SwitcherDirector, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM16SwitcherDirectorFv
	.4byte exec__Q28PSSystem12DirectorBaseFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte 0
	.4byte 0
	.4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM16SwitcherDirector
.obj __vt__Q23PSM14DamageDirector, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM14DamageDirectorFv
	.4byte exec__Q28PSSystem15OneShotDirectorFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q23PSM14DamageDirectorFv
	.4byte directOnTrack__Q23PSM14DamageDirectorFRQ28PSSystem12SeqTrackBase
	.4byte directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM14DamageDirector
.obj __vt__Q23PSM15OneShotDirector, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM15OneShotDirectorFv
	.4byte exec__Q28PSSystem15OneShotDirectorFv
	.4byte directOn__Q28PSSystem12DirectorBaseFv
	.4byte directOff__Q28PSSystem12DirectorBaseFv
	.4byte underDirection__Q28PSSystem12DirectorBaseFv
	.4byte execInner__Q28PSSystem12DirectorBaseFv
	.4byte 0
	.4byte directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
	.4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
	.4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
	.4byte onDirectOn__Q28PSSystem12DirectorBaseFv
	.4byte onDirectOff__Q28PSSystem12DirectorBaseFv
.endobj __vt__Q23PSM15OneShotDirector

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520C00, local
	.float 0.1
.endobj lbl_80520C00
.obj lbl_80520C04, local
	.float 5.0
.endobj lbl_80520C04
.obj lbl_80520C08, local
	.float 1.0
.endobj lbl_80520C08
.obj lbl_80520C0C, local
	.float 0.7
.endobj lbl_80520C0C
.obj lbl_80520C10, local
	.float 0.0
.endobj lbl_80520C10
.obj lbl_80520C14, local
	.float 100000.0
.endobj lbl_80520C14
.obj lbl_80520C18, local
	.float 1000000.0
.endobj lbl_80520C18

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q23PSM14DamageDirectorFv, global
/* 80456AF8 00453A38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456AFC 00453A3C  7C 08 02 A6 */	mflr r0
/* 80456B00 00453A40  3C 80 80 4A */	lis r4, lbl_8049CD98@ha
/* 80456B04 00453A44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456B08 00453A48  38 A4 CD 98 */	addi r5, r4, lbl_8049CD98@l
/* 80456B0C 00453A4C  38 80 00 01 */	li r4, 1
/* 80456B10 00453A50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456B14 00453A54  7C 7F 1B 78 */	mr r31, r3
/* 80456B18 00453A58  4B EE C3 9D */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 80456B1C 00453A5C  3C 60 80 4E */	lis r3, __vt__Q28PSSystem15OneShotDirector@ha
/* 80456B20 00453A60  3C 80 80 4F */	lis r4, __vt__Q23PSM15OneShotDirector@ha
/* 80456B24 00453A64  38 03 B0 08 */	addi r0, r3, __vt__Q28PSSystem15OneShotDirector@l
/* 80456B28 00453A68  3C 60 80 4F */	lis r3, __vt__Q23PSM14DamageDirector@ha
/* 80456B2C 00453A6C  90 1F 00 00 */	stw r0, 0(r31)
/* 80456B30 00453A70  38 04 E1 20 */	addi r0, r4, __vt__Q23PSM15OneShotDirector@l
/* 80456B34 00453A74  38 A0 00 00 */	li r5, 0
/* 80456B38 00453A78  38 83 E0 E8 */	addi r4, r3, __vt__Q23PSM14DamageDirector@l
/* 80456B3C 00453A7C  90 1F 00 00 */	stw r0, 0(r31)
/* 80456B40 00453A80  38 00 00 E1 */	li r0, 0xe1
/* 80456B44 00453A84  C0 22 28 A0 */	lfs f1, lbl_80520C00@sda21(r2)
/* 80456B48 00453A88  7F E3 FB 78 */	mr r3, r31
/* 80456B4C 00453A8C  90 BF 00 48 */	stw r5, 0x48(r31)
/* 80456B50 00453A90  C0 02 28 A4 */	lfs f0, lbl_80520C04@sda21(r2)
/* 80456B54 00453A94  90 9F 00 00 */	stw r4, 0(r31)
/* 80456B58 00453A98  D0 3F 00 4C */	stfs f1, 0x4c(r31)
/* 80456B5C 00453A9C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80456B60 00453AA0  90 1F 00 54 */	stw r0, 0x54(r31)
/* 80456B64 00453AA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456B68 00453AA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456B6C 00453AAC  7C 08 03 A6 */	mtlr r0
/* 80456B70 00453AB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80456B74 00453AB4  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM14DamageDirectorFv

.fn __dt__Q23PSM15OneShotDirectorFv, weak
/* 80456B78 00453AB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456B7C 00453ABC  7C 08 02 A6 */	mflr r0
/* 80456B80 00453AC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456B84 00453AC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456B88 00453AC8  7C 9F 23 78 */	mr r31, r4
/* 80456B8C 00453ACC  93 C1 00 08 */	stw r30, 8(r1)
/* 80456B90 00453AD0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80456B94 00453AD4  41 82 00 48 */	beq .L_80456BDC
/* 80456B98 00453AD8  3C 80 80 4F */	lis r4, __vt__Q23PSM15OneShotDirector@ha
/* 80456B9C 00453ADC  38 04 E1 20 */	addi r0, r4, __vt__Q23PSM15OneShotDirector@l
/* 80456BA0 00453AE0  90 1E 00 00 */	stw r0, 0(r30)
/* 80456BA4 00453AE4  41 82 00 28 */	beq .L_80456BCC
/* 80456BA8 00453AE8  3C 80 80 4E */	lis r4, __vt__Q28PSSystem15OneShotDirector@ha
/* 80456BAC 00453AEC  38 04 B0 08 */	addi r0, r4, __vt__Q28PSSystem15OneShotDirector@l
/* 80456BB0 00453AF0  90 1E 00 00 */	stw r0, 0(r30)
/* 80456BB4 00453AF4  41 82 00 18 */	beq .L_80456BCC
/* 80456BB8 00453AF8  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80456BBC 00453AFC  38 80 00 00 */	li r4, 0
/* 80456BC0 00453B00  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80456BC4 00453B04  90 1E 00 00 */	stw r0, 0(r30)
/* 80456BC8 00453B08  4B C6 36 35 */	bl __dt__10JADHioNodeFv
.L_80456BCC:
/* 80456BCC 00453B0C  7F E0 07 35 */	extsh. r0, r31
/* 80456BD0 00453B10  40 81 00 0C */	ble .L_80456BDC
/* 80456BD4 00453B14  7F C3 F3 78 */	mr r3, r30
/* 80456BD8 00453B18  4B BC D4 DD */	bl __dl__FPv
.L_80456BDC:
/* 80456BDC 00453B1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456BE0 00453B20  7F C3 F3 78 */	mr r3, r30
/* 80456BE4 00453B24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456BE8 00453B28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80456BEC 00453B2C  7C 08 03 A6 */	mtlr r0
/* 80456BF0 00453B30  38 21 00 10 */	addi r1, r1, 0x10
/* 80456BF4 00453B34  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM15OneShotDirectorFv

.fn directOnTrack__Q23PSM14DamageDirectorFRQ28PSSystem12SeqTrackBase, global
/* 80456BF8 00453B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456BFC 00453B3C  7C 08 02 A6 */	mflr r0
/* 80456C00 00453B40  7C 65 1B 78 */	mr r5, r3
/* 80456C04 00453B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456C08 00453B48  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 80456C0C 00453B4C  7C 83 23 78 */	mr r3, r4
/* 80456C10 00453B50  C0 45 00 50 */	lfs f2, 0x50(r5)
/* 80456C14 00453B54  80 85 00 54 */	lwz r4, 0x54(r5)
/* 80456C18 00453B58  4B EE BB 8D */	bl pitchModulation__Q28PSSystem12SeqTrackRootFffUlPQ28PSSystem12DirectorBase
/* 80456C1C 00453B5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456C20 00453B60  7C 08 03 A6 */	mtlr r0
/* 80456C24 00453B64  38 21 00 10 */	addi r1, r1, 0x10
/* 80456C28 00453B68  4E 80 00 20 */	blr 
.endfn directOnTrack__Q23PSM14DamageDirectorFRQ28PSSystem12SeqTrackBase

.fn execInner__Q23PSM14DamageDirectorFv, global
/* 80456C2C 00453B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456C30 00453B70  7C 08 02 A6 */	mflr r0
/* 80456C34 00453B74  7C 64 1B 78 */	mr r4, r3
/* 80456C38 00453B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456C3C 00453B7C  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80456C40 00453B80  28 03 00 00 */	cmplwi r3, 0
/* 80456C44 00453B84  41 82 00 14 */	beq .L_80456C58
/* 80456C48 00453B88  81 83 00 00 */	lwz r12, 0(r3)
/* 80456C4C 00453B8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80456C50 00453B90  7D 89 03 A6 */	mtctr r12
/* 80456C54 00453B94  4E 80 04 21 */	bctrl 
.L_80456C58:
/* 80456C58 00453B98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456C5C 00453B9C  7C 08 03 A6 */	mtlr r0
/* 80456C60 00453BA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80456C64 00453BA4  4E 80 00 20 */	blr 
.endfn execInner__Q23PSM14DamageDirectorFv

.fn __dt__Q23PSM16SwitcherDirectorFv, weak
/* 80456C68 00453BA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456C6C 00453BAC  7C 08 02 A6 */	mflr r0
/* 80456C70 00453BB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456C74 00453BB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456C78 00453BB8  7C 9F 23 78 */	mr r31, r4
/* 80456C7C 00453BBC  93 C1 00 08 */	stw r30, 8(r1)
/* 80456C80 00453BC0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80456C84 00453BC4  41 82 00 48 */	beq .L_80456CCC
/* 80456C88 00453BC8  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80456C8C 00453BCC  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80456C90 00453BD0  90 1E 00 00 */	stw r0, 0(r30)
/* 80456C94 00453BD4  41 82 00 28 */	beq .L_80456CBC
/* 80456C98 00453BD8  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80456C9C 00453BDC  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80456CA0 00453BE0  90 1E 00 00 */	stw r0, 0(r30)
/* 80456CA4 00453BE4  41 82 00 18 */	beq .L_80456CBC
/* 80456CA8 00453BE8  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80456CAC 00453BEC  38 80 00 00 */	li r4, 0
/* 80456CB0 00453BF0  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80456CB4 00453BF4  90 1E 00 00 */	stw r0, 0(r30)
/* 80456CB8 00453BF8  4B C6 35 45 */	bl __dt__10JADHioNodeFv
.L_80456CBC:
/* 80456CBC 00453BFC  7F E0 07 35 */	extsh. r0, r31
/* 80456CC0 00453C00  40 81 00 0C */	ble .L_80456CCC
/* 80456CC4 00453C04  7F C3 F3 78 */	mr r3, r30
/* 80456CC8 00453C08  4B BC D3 ED */	bl __dl__FPv
.L_80456CCC:
/* 80456CCC 00453C0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456CD0 00453C10  7F C3 F3 78 */	mr r3, r30
/* 80456CD4 00453C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456CD8 00453C18  83 C1 00 08 */	lwz r30, 8(r1)
/* 80456CDC 00453C1C  7C 08 03 A6 */	mtlr r0
/* 80456CE0 00453C20  38 21 00 10 */	addi r1, r1, 0x10
/* 80456CE4 00453C24  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM16SwitcherDirectorFv

.fn directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase, global
/* 80456CE8 00453C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456CEC 00453C2C  7C 08 02 A6 */	mflr r0
/* 80456CF0 00453C30  7C 65 1B 78 */	mr r5, r3
/* 80456CF4 00453C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456CF8 00453C38  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 80456CFC 00453C3C  7C 83 23 78 */	mr r3, r4
/* 80456D00 00453C40  80 85 00 4C */	lwz r4, 0x4c(r5)
/* 80456D04 00453C44  4B EE BB 29 */	bl tempoChange__Q28PSSystem12SeqTrackRootFfUlPQ28PSSystem12DirectorBase
/* 80456D08 00453C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456D0C 00453C4C  7C 08 03 A6 */	mtlr r0
/* 80456D10 00453C50  38 21 00 10 */	addi r1, r1, 0x10
/* 80456D14 00453C54  4E 80 00 20 */	blr 
.endfn directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase

.fn directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase, global
/* 80456D18 00453C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456D1C 00453C5C  7C 08 02 A6 */	mflr r0
/* 80456D20 00453C60  7C 65 1B 78 */	mr r5, r3
/* 80456D24 00453C64  C0 22 28 A8 */	lfs f1, lbl_80520C08@sda21(r2)
/* 80456D28 00453C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456D2C 00453C6C  7C 83 23 78 */	mr r3, r4
/* 80456D30 00453C70  80 85 00 4C */	lwz r4, 0x4c(r5)
/* 80456D34 00453C74  4B EE BA F9 */	bl tempoChange__Q28PSSystem12SeqTrackRootFfUlPQ28PSSystem12DirectorBase
/* 80456D38 00453C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456D3C 00453C7C  7C 08 03 A6 */	mtlr r0
/* 80456D40 00453C80  38 21 00 10 */	addi r1, r1, 0x10
/* 80456D44 00453C84  4E 80 00 20 */	blr 
.endfn directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase

.fn __ct__Q23PSM25ActorDirector_TempoChangeFv, global
/* 80456D48 00453C88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456D4C 00453C8C  7C 08 02 A6 */	mflr r0
/* 80456D50 00453C90  3C 80 80 4A */	lis r4, lbl_8049CDA4@ha
/* 80456D54 00453C94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456D58 00453C98  38 A4 CD A4 */	addi r5, r4, lbl_8049CDA4@l
/* 80456D5C 00453C9C  38 80 00 01 */	li r4, 1
/* 80456D60 00453CA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456D64 00453CA4  7C 7F 1B 78 */	mr r31, r3
/* 80456D68 00453CA8  4B EE C1 4D */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 80456D6C 00453CAC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80456D70 00453CB0  3C 60 80 4F */	lis r3, __vt__Q23PSM16SwitcherDirector@ha
/* 80456D74 00453CB4  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80456D78 00453CB8  3C 80 80 4F */	lis r4, __vt__Q23PSM23TempoChangeDirectorBase@ha
/* 80456D7C 00453CBC  90 1F 00 00 */	stw r0, 0(r31)
/* 80456D80 00453CC0  38 A3 E0 B0 */	addi r5, r3, __vt__Q23PSM16SwitcherDirector@l
/* 80456D84 00453CC4  3C 60 80 4F */	lis r3, __vt__Q23PSM25ActorDirector_TempoChange@ha
/* 80456D88 00453CC8  38 04 E0 78 */	addi r0, r4, __vt__Q23PSM23TempoChangeDirectorBase@l
/* 80456D8C 00453CCC  90 BF 00 00 */	stw r5, 0(r31)
/* 80456D90 00453CD0  38 A0 00 64 */	li r5, 0x64
/* 80456D94 00453CD4  C0 02 28 AC */	lfs f0, lbl_80520C0C@sda21(r2)
/* 80456D98 00453CD8  38 80 00 00 */	li r4, 0
/* 80456D9C 00453CDC  90 1F 00 00 */	stw r0, 0(r31)
/* 80456DA0 00453CE0  38 03 E0 40 */	addi r0, r3, __vt__Q23PSM25ActorDirector_TempoChange@l
/* 80456DA4 00453CE4  7F E3 FB 78 */	mr r3, r31
/* 80456DA8 00453CE8  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 80456DAC 00453CEC  90 BF 00 4C */	stw r5, 0x4c(r31)
/* 80456DB0 00453CF0  90 9F 00 50 */	stw r4, 0x50(r31)
/* 80456DB4 00453CF4  90 1F 00 00 */	stw r0, 0(r31)
/* 80456DB8 00453CF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456DBC 00453CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456DC0 00453D00  7C 08 03 A6 */	mtlr r0
/* 80456DC4 00453D04  38 21 00 10 */	addi r1, r1, 0x10
/* 80456DC8 00453D08  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM25ActorDirector_TempoChangeFv

.fn __dt__Q23PSM23TempoChangeDirectorBaseFv, weak
/* 80456DCC 00453D0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456DD0 00453D10  7C 08 02 A6 */	mflr r0
/* 80456DD4 00453D14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456DD8 00453D18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456DDC 00453D1C  7C 9F 23 78 */	mr r31, r4
/* 80456DE0 00453D20  93 C1 00 08 */	stw r30, 8(r1)
/* 80456DE4 00453D24  7C 7E 1B 79 */	or. r30, r3, r3
/* 80456DE8 00453D28  41 82 00 58 */	beq .L_80456E40
/* 80456DEC 00453D2C  3C 80 80 4F */	lis r4, __vt__Q23PSM23TempoChangeDirectorBase@ha
/* 80456DF0 00453D30  38 04 E0 78 */	addi r0, r4, __vt__Q23PSM23TempoChangeDirectorBase@l
/* 80456DF4 00453D34  90 1E 00 00 */	stw r0, 0(r30)
/* 80456DF8 00453D38  41 82 00 38 */	beq .L_80456E30
/* 80456DFC 00453D3C  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80456E00 00453D40  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80456E04 00453D44  90 1E 00 00 */	stw r0, 0(r30)
/* 80456E08 00453D48  41 82 00 28 */	beq .L_80456E30
/* 80456E0C 00453D4C  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80456E10 00453D50  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80456E14 00453D54  90 1E 00 00 */	stw r0, 0(r30)
/* 80456E18 00453D58  41 82 00 18 */	beq .L_80456E30
/* 80456E1C 00453D5C  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80456E20 00453D60  38 80 00 00 */	li r4, 0
/* 80456E24 00453D64  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80456E28 00453D68  90 1E 00 00 */	stw r0, 0(r30)
/* 80456E2C 00453D6C  4B C6 33 D1 */	bl __dt__10JADHioNodeFv
.L_80456E30:
/* 80456E30 00453D70  7F E0 07 35 */	extsh. r0, r31
/* 80456E34 00453D74  40 81 00 0C */	ble .L_80456E40
/* 80456E38 00453D78  7F C3 F3 78 */	mr r3, r30
/* 80456E3C 00453D7C  4B BC D2 79 */	bl __dl__FPv
.L_80456E40:
/* 80456E40 00453D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456E44 00453D84  7F C3 F3 78 */	mr r3, r30
/* 80456E48 00453D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456E4C 00453D8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80456E50 00453D90  7C 08 03 A6 */	mtlr r0
/* 80456E54 00453D94  38 21 00 10 */	addi r1, r1, 0x10
/* 80456E58 00453D98  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM23TempoChangeDirectorBaseFv

.fn execInner__Q23PSM25ActorDirector_TempoChangeFv, global
/* 80456E5C 00453D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456E60 00453DA0  7C 08 02 A6 */	mflr r0
/* 80456E64 00453DA4  7C 64 1B 78 */	mr r4, r3
/* 80456E68 00453DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456E6C 00453DAC  80 63 00 50 */	lwz r3, 0x50(r3)
/* 80456E70 00453DB0  28 03 00 00 */	cmplwi r3, 0
/* 80456E74 00453DB4  41 82 00 14 */	beq .L_80456E88
/* 80456E78 00453DB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80456E7C 00453DBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80456E80 00453DC0  7D 89 03 A6 */	mtctr r12
/* 80456E84 00453DC4  4E 80 04 21 */	bctrl 
.L_80456E88:
/* 80456E88 00453DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456E8C 00453DCC  7C 08 03 A6 */	mtlr r0
/* 80456E90 00453DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80456E94 00453DD4  4E 80 00 20 */	blr 
.endfn execInner__Q23PSM25ActorDirector_TempoChangeFv

.fn __ct__Q23PSM20PikminNumberDirectorFiUcRQ28PSSystem11DirectedBgm, global
/* 80456E98 00453DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456E9C 00453DDC  7C 08 02 A6 */	mflr r0
/* 80456EA0 00453DE0  3C C0 80 4A */	lis r6, lbl_8049CDB0@ha
/* 80456EA4 00453DE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456EA8 00453DE8  38 06 CD B0 */	addi r0, r6, lbl_8049CDB0@l
/* 80456EAC 00453DEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456EB0 00453DF0  7C BF 2B 78 */	mr r31, r5
/* 80456EB4 00453DF4  7C 05 03 78 */	mr r5, r0
/* 80456EB8 00453DF8  93 C1 00 08 */	stw r30, 8(r1)
/* 80456EBC 00453DFC  7C 7E 1B 78 */	mr r30, r3
/* 80456EC0 00453E00  4B EE BF F5 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 80456EC4 00453E04  3C 60 80 4E */	lis r3, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80456EC8 00453E08  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80456ECC 00453E0C  38 03 AF D0 */	addi r0, r3, __vt__Q28PSSystem16SwitcherDirector@l
/* 80456ED0 00453E10  3C 60 80 4F */	lis r3, __vt__Q23PSM20PikminNumberDirector@ha
/* 80456ED4 00453E14  90 1E 00 00 */	stw r0, 0(r30)
/* 80456ED8 00453E18  38 A4 E0 B0 */	addi r5, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80456EDC 00453E1C  38 80 00 00 */	li r4, 0
/* 80456EE0 00453E20  38 03 E0 08 */	addi r0, r3, __vt__Q23PSM20PikminNumberDirector@l
/* 80456EE4 00453E24  90 BE 00 00 */	stw r5, 0(r30)
/* 80456EE8 00453E28  7F C3 F3 78 */	mr r3, r30
/* 80456EEC 00453E2C  90 9E 00 48 */	stw r4, 0x48(r30)
/* 80456EF0 00453E30  90 1E 00 00 */	stw r0, 0(r30)
/* 80456EF4 00453E34  9B FE 00 4C */	stb r31, 0x4c(r30)
/* 80456EF8 00453E38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456EFC 00453E3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80456F00 00453E40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456F04 00453E44  7C 08 03 A6 */	mtlr r0
/* 80456F08 00453E48  38 21 00 10 */	addi r1, r1, 0x10
/* 80456F0C 00453E4C  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM20PikminNumberDirectorFiUcRQ28PSSystem11DirectedBgm

.fn directOnTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase, global
/* 80456F10 00453E50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456F14 00453E54  7C 08 02 A6 */	mflr r0
/* 80456F18 00453E58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456F1C 00453E5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80456F20 00453E60  7C 9F 23 78 */	mr r31, r4
/* 80456F24 00453E64  93 C1 00 08 */	stw r30, 8(r1)
/* 80456F28 00453E68  7C 7E 1B 78 */	mr r30, r3
/* 80456F2C 00453E6C  7F E3 FB 78 */	mr r3, r31
/* 80456F30 00453E70  4B EE B3 D5 */	bl getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
/* 80456F34 00453E74  88 9E 00 4C */	lbz r4, 0x4c(r30)
/* 80456F38 00453E78  7F E3 FB 78 */	mr r3, r31
/* 80456F3C 00453E7C  7F C5 F3 78 */	mr r5, r30
/* 80456F40 00453E80  4B EE BE 81 */	bl setIdMask__Q28PSSystem13SeqTrackChildFUcPQ28PSSystem12DirectorBase
/* 80456F44 00453E84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456F48 00453E88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80456F4C 00453E8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80456F50 00453E90  7C 08 03 A6 */	mtlr r0
/* 80456F54 00453E94  38 21 00 10 */	addi r1, r1, 0x10
/* 80456F58 00453E98  4E 80 00 20 */	blr 
.endfn directOnTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase

.fn directOffTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase, global
/* 80456F5C 00453E9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456F60 00453EA0  7C 08 02 A6 */	mflr r0
/* 80456F64 00453EA4  7C 65 1B 78 */	mr r5, r3
/* 80456F68 00453EA8  7C 83 23 78 */	mr r3, r4
/* 80456F6C 00453EAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456F70 00453EB0  38 80 00 00 */	li r4, 0
/* 80456F74 00453EB4  4B EE BE 4D */	bl setIdMask__Q28PSSystem13SeqTrackChildFUcPQ28PSSystem12DirectorBase
/* 80456F78 00453EB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456F7C 00453EBC  7C 08 03 A6 */	mtlr r0
/* 80456F80 00453EC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80456F84 00453EC4  4E 80 00 20 */	blr 
.endfn directOffTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase

.fn execInner__Q23PSM20PikminNumberDirectorFv, global
/* 80456F88 00453EC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80456F8C 00453ECC  7C 08 02 A6 */	mflr r0
/* 80456F90 00453ED0  7C 64 1B 78 */	mr r4, r3
/* 80456F94 00453ED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80456F98 00453ED8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80456F9C 00453EDC  28 03 00 00 */	cmplwi r3, 0
/* 80456FA0 00453EE0  41 82 00 14 */	beq .L_80456FB4
/* 80456FA4 00453EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80456FA8 00453EE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80456FAC 00453EEC  7D 89 03 A6 */	mtctr r12
/* 80456FB0 00453EF0  4E 80 04 21 */	bctrl 
.L_80456FB4:
/* 80456FB4 00453EF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80456FB8 00453EF8  7C 08 03 A6 */	mtlr r0
/* 80456FBC 00453EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80456FC0 00453F00  4E 80 00 20 */	blr 
.endfn execInner__Q23PSM20PikminNumberDirectorFv

.fn __ct__Q23PSM28PikminNumberDirector_AutoBgmFiUcRQ28PSSystem11DirectedBgm, global
/* 80456FC4 00453F04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80456FC8 00453F08  7C 08 02 A6 */	mflr r0
/* 80456FCC 00453F0C  3C E0 80 4A */	lis r7, lbl_8049CDB0@ha
/* 80456FD0 00453F10  90 01 00 24 */	stw r0, 0x24(r1)
/* 80456FD4 00453F14  38 07 CD B0 */	addi r0, r7, lbl_8049CDB0@l
/* 80456FD8 00453F18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80456FDC 00453F1C  7C DF 33 78 */	mr r31, r6
/* 80456FE0 00453F20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80456FE4 00453F24  7C BE 2B 78 */	mr r30, r5
/* 80456FE8 00453F28  7C 05 03 78 */	mr r5, r0
/* 80456FEC 00453F2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80456FF0 00453F30  7C 7D 1B 78 */	mr r29, r3
/* 80456FF4 00453F34  4B EE BE C1 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 80456FF8 00453F38  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80456FFC 00453F3C  3C 60 80 4F */	lis r3, __vt__Q23PSM16SwitcherDirector@ha
/* 80457000 00453F40  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80457004 00453F44  3C 80 80 4F */	lis r4, __vt__Q23PSM20PikminNumberDirector@ha
/* 80457008 00453F48  90 1D 00 00 */	stw r0, 0(r29)
/* 8045700C 00453F4C  38 03 E0 B0 */	addi r0, r3, __vt__Q23PSM16SwitcherDirector@l
/* 80457010 00453F50  3C 60 80 4F */	lis r3, __vt__Q23PSM28PikminNumberDirector_AutoBgm@ha
/* 80457014 00453F54  38 A0 00 00 */	li r5, 0
/* 80457018 00453F58  90 1D 00 00 */	stw r0, 0(r29)
/* 8045701C 00453F5C  38 84 E0 08 */	addi r4, r4, __vt__Q23PSM20PikminNumberDirector@l
/* 80457020 00453F60  38 03 DF D0 */	addi r0, r3, __vt__Q23PSM28PikminNumberDirector_AutoBgm@l
/* 80457024 00453F64  7F A3 EB 78 */	mr r3, r29
/* 80457028 00453F68  90 BD 00 48 */	stw r5, 0x48(r29)
/* 8045702C 00453F6C  90 9D 00 00 */	stw r4, 0(r29)
/* 80457030 00453F70  9B DD 00 4C */	stb r30, 0x4c(r29)
/* 80457034 00453F74  90 1D 00 00 */	stw r0, 0(r29)
/* 80457038 00453F78  93 FD 00 50 */	stw r31, 0x50(r29)
/* 8045703C 00453F7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80457040 00453F80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80457044 00453F84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80457048 00453F88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045704C 00453F8C  7C 08 03 A6 */	mtlr r0
/* 80457050 00453F90  38 21 00 20 */	addi r1, r1, 0x20
/* 80457054 00453F94  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM28PikminNumberDirector_AutoBgmFiUcRQ28PSSystem11DirectedBgm

.fn __dt__Q23PSM20PikminNumberDirectorFv, weak
/* 80457058 00453F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045705C 00453F9C  7C 08 02 A6 */	mflr r0
/* 80457060 00453FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457064 00453FA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80457068 00453FA8  7C 9F 23 78 */	mr r31, r4
/* 8045706C 00453FAC  93 C1 00 08 */	stw r30, 8(r1)
/* 80457070 00453FB0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80457074 00453FB4  41 82 00 58 */	beq .L_804570CC
/* 80457078 00453FB8  3C 80 80 4F */	lis r4, __vt__Q23PSM20PikminNumberDirector@ha
/* 8045707C 00453FBC  38 04 E0 08 */	addi r0, r4, __vt__Q23PSM20PikminNumberDirector@l
/* 80457080 00453FC0  90 1E 00 00 */	stw r0, 0(r30)
/* 80457084 00453FC4  41 82 00 38 */	beq .L_804570BC
/* 80457088 00453FC8  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 8045708C 00453FCC  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80457090 00453FD0  90 1E 00 00 */	stw r0, 0(r30)
/* 80457094 00453FD4  41 82 00 28 */	beq .L_804570BC
/* 80457098 00453FD8  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 8045709C 00453FDC  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804570A0 00453FE0  90 1E 00 00 */	stw r0, 0(r30)
/* 804570A4 00453FE4  41 82 00 18 */	beq .L_804570BC
/* 804570A8 00453FE8  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 804570AC 00453FEC  38 80 00 00 */	li r4, 0
/* 804570B0 00453FF0  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 804570B4 00453FF4  90 1E 00 00 */	stw r0, 0(r30)
/* 804570B8 00453FF8  4B C6 31 45 */	bl __dt__10JADHioNodeFv
.L_804570BC:
/* 804570BC 00453FFC  7F E0 07 35 */	extsh. r0, r31
/* 804570C0 00454000  40 81 00 0C */	ble .L_804570CC
/* 804570C4 00454004  7F C3 F3 78 */	mr r3, r30
/* 804570C8 00454008  4B BC CF ED */	bl __dl__FPv
.L_804570CC:
/* 804570CC 0045400C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804570D0 00454010  7F C3 F3 78 */	mr r3, r30
/* 804570D4 00454014  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804570D8 00454018  83 C1 00 08 */	lwz r30, 8(r1)
/* 804570DC 0045401C  7C 08 03 A6 */	mtlr r0
/* 804570E0 00454020  38 21 00 10 */	addi r1, r1, 0x10
/* 804570E4 00454024  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM20PikminNumberDirectorFv

.fn directOnTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase, global
/* 804570E8 00454028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804570EC 0045402C  7C 08 02 A6 */	mflr r0
/* 804570F0 00454030  90 01 00 14 */	stw r0, 0x14(r1)
/* 804570F4 00454034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804570F8 00454038  93 C1 00 08 */	stw r30, 8(r1)
/* 804570FC 0045403C  7C 7E 1B 78 */	mr r30, r3
/* 80457100 00454040  48 00 00 F9 */	bl getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
/* 80457104 00454044  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 80457108 00454048  38 00 00 01 */	li r0, 1
/* 8045710C 0045404C  7C 7E 1B 78 */	mr r30, r3
/* 80457110 00454050  98 04 03 4E */	stb r0, 0x34e(r4)
/* 80457114 00454054  83 E4 03 40 */	lwz r31, 0x340(r4)
/* 80457118 00454058  48 00 00 38 */	b .L_80457150
.L_8045711C:
/* 8045711C 0045405C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80457120 00454060  88 83 00 18 */	lbz r4, 0x18(r3)
/* 80457124 00454064  7C 04 00 D0 */	neg r0, r4
/* 80457128 00454068  7C 00 23 78 */	or r0, r0, r4
/* 8045712C 0045406C  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80457130 00454070  28 00 00 01 */	cmplwi r0, 1
/* 80457134 00454074  40 82 00 18 */	bne .L_8045714C
/* 80457138 00454078  81 83 00 14 */	lwz r12, 0x14(r3)
/* 8045713C 0045407C  7F C4 F3 78 */	mr r4, r30
/* 80457140 00454080  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80457144 00454084  7D 89 03 A6 */	mtctr r12
/* 80457148 00454088  4E 80 04 21 */	bctrl 
.L_8045714C:
/* 8045714C 0045408C  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80457150:
/* 80457150 00454090  28 1F 00 00 */	cmplwi r31, 0
/* 80457154 00454094  40 82 FF C8 */	bne .L_8045711C
/* 80457158 00454098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045715C 0045409C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80457160 004540A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80457164 004540A4  7C 08 03 A6 */	mtlr r0
/* 80457168 004540A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8045716C 004540AC  4E 80 00 20 */	blr 
.endfn directOnTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase

.fn directOffTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase, global
/* 80457170 004540B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80457174 004540B4  7C 08 02 A6 */	mflr r0
/* 80457178 004540B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045717C 004540BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80457180 004540C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80457184 004540C4  7C 7E 1B 78 */	mr r30, r3
/* 80457188 004540C8  48 00 00 71 */	bl getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
/* 8045718C 004540CC  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 80457190 004540D0  38 00 00 00 */	li r0, 0
/* 80457194 004540D4  7C 7E 1B 78 */	mr r30, r3
/* 80457198 004540D8  98 04 03 4E */	stb r0, 0x34e(r4)
/* 8045719C 004540DC  83 E4 03 40 */	lwz r31, 0x340(r4)
/* 804571A0 004540E0  48 00 00 38 */	b .L_804571D8
.L_804571A4:
/* 804571A4 004540E4  80 7F 00 00 */	lwz r3, 0(r31)
/* 804571A8 004540E8  88 83 00 18 */	lbz r4, 0x18(r3)
/* 804571AC 004540EC  7C 04 00 D0 */	neg r0, r4
/* 804571B0 004540F0  7C 00 23 78 */	or r0, r0, r4
/* 804571B4 004540F4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 804571B8 004540F8  28 00 00 01 */	cmplwi r0, 1
/* 804571BC 004540FC  40 82 00 18 */	bne .L_804571D4
/* 804571C0 00454100  81 83 00 14 */	lwz r12, 0x14(r3)
/* 804571C4 00454104  7F C4 F3 78 */	mr r4, r30
/* 804571C8 00454108  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 804571CC 0045410C  7D 89 03 A6 */	mtctr r12
/* 804571D0 00454110  4E 80 04 21 */	bctrl 
.L_804571D4:
/* 804571D4 00454114  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_804571D8:
/* 804571D8 00454118  28 1F 00 00 */	cmplwi r31, 0
/* 804571DC 0045411C  40 82 FF C8 */	bne .L_804571A4
/* 804571E0 00454120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804571E4 00454124  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804571E8 00454128  83 C1 00 08 */	lwz r30, 8(r1)
/* 804571EC 0045412C  7C 08 03 A6 */	mtlr r0
/* 804571F0 00454130  38 21 00 10 */	addi r1, r1, 0x10
/* 804571F4 00454134  4E 80 00 20 */	blr 
.endfn directOffTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase

.fn getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase, global
/* 804571F8 00454138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804571FC 0045413C  7C 08 02 A6 */	mflr r0
/* 80457200 00454140  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457204 00454144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80457208 00454148  93 C1 00 08 */	stw r30, 8(r1)
/* 8045720C 0045414C  7C 7E 1B 78 */	mr r30, r3
/* 80457210 00454150  7C 83 23 78 */	mr r3, r4
/* 80457214 00454154  4B EE B0 F1 */	bl getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
/* 80457218 00454158  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8045721C 0045415C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 80457220 00454160  80 04 03 48 */	lwz r0, 0x348(r4)
/* 80457224 00454164  80 63 03 08 */	lwz r3, 0x308(r3)
/* 80457228 00454168  54 00 07 3E */	clrlwi r0, r0, 0x1c
/* 8045722C 0045416C  7C 1F 03 78 */	mr r31, r0
/* 80457230 00454170  4B EE 58 E5 */	bl "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
/* 80457234 00454174  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80457238 00454178  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8045723C 0045417C  7C 00 18 40 */	cmplw r0, r3
/* 80457240 00454180  41 80 00 20 */	blt .L_80457260
/* 80457244 00454184  3C 60 80 4A */	lis r3, lbl_8049CDBC@ha
/* 80457248 00454188  3C A0 80 4A */	lis r5, lbl_8049CDD4@ha
/* 8045724C 0045418C  38 63 CD BC */	addi r3, r3, lbl_8049CDBC@l
/* 80457250 00454190  38 80 00 C2 */	li r4, 0xc2
/* 80457254 00454194  38 A5 CD D4 */	addi r5, r5, lbl_8049CDD4@l
/* 80457258 00454198  4C C6 31 82 */	crclr 6
/* 8045725C 0045419C  4B BD 33 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80457260:
/* 80457260 004541A0  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 80457264 004541A4  7F E4 FB 78 */	mr r4, r31
/* 80457268 004541A8  80 63 03 08 */	lwz r3, 0x308(r3)
/* 8045726C 004541AC  4B EE 5C 91 */	bl "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
/* 80457270 004541B0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80457274 004541B4  40 82 00 20 */	bne .L_80457294
/* 80457278 004541B8  3C 60 80 4A */	lis r3, lbl_8049CDBC@ha
/* 8045727C 004541BC  3C A0 80 4A */	lis r5, lbl_8049CDD4@ha
/* 80457280 004541C0  38 63 CD BC */	addi r3, r3, lbl_8049CDBC@l
/* 80457284 004541C4  38 80 00 C4 */	li r4, 0xc4
/* 80457288 004541C8  38 A5 CD D4 */	addi r5, r5, lbl_8049CDD4@l
/* 8045728C 004541CC  4C C6 31 82 */	crclr 6
/* 80457290 004541D0  4B BD 33 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80457294:
/* 80457294 004541D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80457298 004541D8  7F E3 FB 78 */	mr r3, r31
/* 8045729C 004541DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804572A0 004541E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 804572A4 004541E4  7C 08 03 A6 */	mtlr r0
/* 804572A8 004541E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804572AC 004541EC  4E 80 00 20 */	blr 
.endfn getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase

.fn __ct__Q23PSM19TrackOnDirectorBaseFiPCcll, global
/* 804572B0 004541F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804572B4 004541F4  7C 08 02 A6 */	mflr r0
/* 804572B8 004541F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 804572BC 004541FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804572C0 00454200  7C FF 3B 78 */	mr r31, r7
/* 804572C4 00454204  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804572C8 00454208  7C DE 33 78 */	mr r30, r6
/* 804572CC 0045420C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804572D0 00454210  7C 7D 1B 78 */	mr r29, r3
/* 804572D4 00454214  4B EE BB E1 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 804572D8 00454218  3C 60 80 4E */	lis r3, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804572DC 0045421C  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 804572E0 00454220  38 03 AF D0 */	addi r0, r3, __vt__Q28PSSystem16SwitcherDirector@l
/* 804572E4 00454224  3C 60 80 4F */	lis r3, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804572E8 00454228  90 1D 00 00 */	stw r0, 0(r29)
/* 804572EC 0045422C  38 A4 E0 B0 */	addi r5, r4, __vt__Q23PSM16SwitcherDirector@l
/* 804572F0 00454230  38 83 DF 98 */	addi r4, r3, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804572F4 00454234  38 00 00 00 */	li r0, 0
/* 804572F8 00454238  90 BD 00 00 */	stw r5, 0(r29)
/* 804572FC 0045423C  7F A3 EB 78 */	mr r3, r29
/* 80457300 00454240  90 9D 00 00 */	stw r4, 0(r29)
/* 80457304 00454244  93 DD 00 48 */	stw r30, 0x48(r29)
/* 80457308 00454248  93 FD 00 4C */	stw r31, 0x4c(r29)
/* 8045730C 0045424C  98 1D 00 50 */	stb r0, 0x50(r29)
/* 80457310 00454250  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80457314 00454254  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80457318 00454258  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8045731C 0045425C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80457320 00454260  7C 08 03 A6 */	mtlr r0
/* 80457324 00454264  38 21 00 20 */	addi r1, r1, 0x20
/* 80457328 00454268  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM19TrackOnDirectorBaseFiPCcll

.fn onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack, global
/* 8045732C 0045426C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80457330 00454270  7C 08 02 A6 */	mflr r0
/* 80457334 00454274  7C 83 23 78 */	mr r3, r4
/* 80457338 00454278  38 80 00 01 */	li r4, 1
/* 8045733C 0045427C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457340 00454280  88 03 03 58 */	lbz r0, 0x358(r3)
/* 80457344 00454284  60 00 00 60 */	ori r0, r0, 0x60
/* 80457348 00454288  98 03 03 58 */	stb r0, 0x358(r3)
/* 8045734C 0045428C  4B C4 9F 99 */	bl muteTrack__8JASTrackFb
/* 80457350 00454290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80457354 00454294  7C 08 03 A6 */	mtlr r0
/* 80457358 00454298  38 21 00 10 */	addi r1, r1, 0x10
/* 8045735C 0045429C  4E 80 00 20 */	blr 
.endfn onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack

.fn directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase, global
/* 80457360 004542A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80457364 004542A4  7C 08 02 A6 */	mflr r0
/* 80457368 004542A8  7C 65 1B 78 */	mr r5, r3
/* 8045736C 004542AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457370 004542B0  88 03 00 50 */	lbz r0, 0x50(r3)
/* 80457374 004542B4  28 00 00 00 */	cmplwi r0, 0
/* 80457378 004542B8  41 82 00 18 */	beq .L_80457390
/* 8045737C 004542BC  C0 22 28 B0 */	lfs f1, lbl_80520C10@sda21(r2)
/* 80457380 004542C0  7C 83 23 78 */	mr r3, r4
/* 80457384 004542C4  38 80 00 00 */	li r4, 0
/* 80457388 004542C8  4B EE B8 C9 */	bl muteOffAndFadeIn__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase
/* 8045738C 004542CC  48 00 00 14 */	b .L_804573A0
.L_80457390:
/* 80457390 004542D0  7C 83 23 78 */	mr r3, r4
/* 80457394 004542D4  C0 22 28 A8 */	lfs f1, lbl_80520C08@sda21(r2)
/* 80457398 004542D8  80 85 00 48 */	lwz r4, 0x48(r5)
/* 8045739C 004542DC  4B EE B8 B5 */	bl muteOffAndFadeIn__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase
.L_804573A0:
/* 804573A0 004542E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804573A4 004542E4  7C 08 03 A6 */	mtlr r0
/* 804573A8 004542E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804573AC 004542EC  4E 80 00 20 */	blr 
.endfn directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase

.fn directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase, global
/* 804573B0 004542F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804573B4 004542F4  7C 08 02 A6 */	mflr r0
/* 804573B8 004542F8  7C 65 1B 78 */	mr r5, r3
/* 804573BC 004542FC  7C 83 23 78 */	mr r3, r4
/* 804573C0 00454300  90 01 00 14 */	stw r0, 0x14(r1)
/* 804573C4 00454304  80 85 00 4C */	lwz r4, 0x4c(r5)
/* 804573C8 00454308  4B EE B9 0D */	bl fadeoutAndMute__Q28PSSystem13SeqTrackChildFUlPQ28PSSystem12DirectorBase
/* 804573CC 0045430C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804573D0 00454310  7C 08 03 A6 */	mtlr r0
/* 804573D4 00454314  38 21 00 10 */	addi r1, r1, 0x10
/* 804573D8 00454318  4E 80 00 20 */	blr 
.endfn directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase

.fn execInner__Q23PSM22TrackOnDirector_VotingFv, global
/* 804573DC 0045431C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804573E0 00454320  7C 08 02 A6 */	mflr r0
/* 804573E4 00454324  90 01 00 14 */	stw r0, 0x14(r1)
/* 804573E8 00454328  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804573EC 0045432C  7C 7F 1B 78 */	mr r31, r3
/* 804573F0 00454330  88 03 00 54 */	lbz r0, 0x54(r3)
/* 804573F4 00454334  28 00 00 00 */	cmplwi r0, 0
/* 804573F8 00454338  40 82 00 28 */	bne .L_80457420
/* 804573FC 0045433C  4B EE BC CD */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 80457400 00454340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80457404 00454344  41 82 00 1C */	beq .L_80457420
/* 80457408 00454348  7F E3 FB 78 */	mr r3, r31
/* 8045740C 0045434C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80457410 00454350  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80457414 00454354  7D 89 03 A6 */	mtctr r12
/* 80457418 00454358  4E 80 04 21 */	bctrl 
/* 8045741C 0045435C  48 00 00 34 */	b .L_80457450
.L_80457420:
/* 80457420 00454360  88 1F 00 54 */	lbz r0, 0x54(r31)
/* 80457424 00454364  28 00 00 00 */	cmplwi r0, 0
/* 80457428 00454368  41 82 00 28 */	beq .L_80457450
/* 8045742C 0045436C  7F E3 FB 78 */	mr r3, r31
/* 80457430 00454370  4B EE BC 99 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 80457434 00454374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80457438 00454378  40 82 00 18 */	bne .L_80457450
/* 8045743C 0045437C  7F E3 FB 78 */	mr r3, r31
/* 80457440 00454380  81 9F 00 00 */	lwz r12, 0(r31)
/* 80457444 00454384  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80457448 00454388  7D 89 03 A6 */	mtctr r12
/* 8045744C 0045438C  4E 80 04 21 */	bctrl 
.L_80457450:
/* 80457450 00454390  38 00 00 00 */	li r0, 0
/* 80457454 00454394  98 1F 00 54 */	stb r0, 0x54(r31)
/* 80457458 00454398  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045745C 0045439C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80457460 004543A0  7C 08 03 A6 */	mtlr r0
/* 80457464 004543A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80457468 004543A8  4E 80 00 20 */	blr 
.endfn execInner__Q23PSM22TrackOnDirector_VotingFv

.fn __dt__Q23PSM19TrackOnDirectorBaseFv, weak
/* 8045746C 004543AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80457470 004543B0  7C 08 02 A6 */	mflr r0
/* 80457474 004543B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457478 004543B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045747C 004543BC  7C 9F 23 78 */	mr r31, r4
/* 80457480 004543C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80457484 004543C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80457488 004543C8  41 82 00 58 */	beq .L_804574E0
/* 8045748C 004543CC  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80457490 004543D0  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 80457494 004543D4  90 1E 00 00 */	stw r0, 0(r30)
/* 80457498 004543D8  41 82 00 38 */	beq .L_804574D0
/* 8045749C 004543DC  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 804574A0 004543E0  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 804574A4 004543E4  90 1E 00 00 */	stw r0, 0(r30)
/* 804574A8 004543E8  41 82 00 28 */	beq .L_804574D0
/* 804574AC 004543EC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804574B0 004543F0  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804574B4 004543F4  90 1E 00 00 */	stw r0, 0(r30)
/* 804574B8 004543F8  41 82 00 18 */	beq .L_804574D0
/* 804574BC 004543FC  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 804574C0 00454400  38 80 00 00 */	li r4, 0
/* 804574C4 00454404  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 804574C8 00454408  90 1E 00 00 */	stw r0, 0(r30)
/* 804574CC 0045440C  4B C6 2D 31 */	bl __dt__10JADHioNodeFv
.L_804574D0:
/* 804574D0 00454410  7F E0 07 35 */	extsh. r0, r31
/* 804574D4 00454414  40 81 00 0C */	ble .L_804574E0
/* 804574D8 00454418  7F C3 F3 78 */	mr r3, r30
/* 804574DC 0045441C  4B BC CB D9 */	bl __dl__FPv
.L_804574E0:
/* 804574E0 00454420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804574E4 00454424  7F C3 F3 78 */	mr r3, r30
/* 804574E8 00454428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804574EC 0045442C  83 C1 00 08 */	lwz r30, 8(r1)
/* 804574F0 00454430  7C 08 03 A6 */	mtlr r0
/* 804574F4 00454434  38 21 00 10 */	addi r1, r1, 0x10
/* 804574F8 00454438  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM19TrackOnDirectorBaseFv

.fn underDirection__Q23PSM22TrackOnDirector_ScaledFv, global
/* 804574FC 0045443C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80457500 00454440  7C 08 02 A6 */	mflr r0
/* 80457504 00454444  90 01 00 34 */	stw r0, 0x34(r1)
/* 80457508 00454448  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8045750C 0045444C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80457510 00454450  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80457514 00454454  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80457518 00454458  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8045751C 0045445C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80457520 00454460  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 80457524 00454464  7C 7C 1B 78 */	mr r28, r3
/* 80457528 00454468  C3 E2 28 A8 */	lfs f31, lbl_80520C08@sda21(r2)
/* 8045752C 0045446C  28 00 00 00 */	cmplwi r0, 0
/* 80457530 00454470  40 82 00 38 */	bne .L_80457568
/* 80457534 00454474  81 83 00 00 */	lwz r12, 0(r3)
/* 80457538 00454478  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8045753C 0045447C  7D 89 03 A6 */	mtctr r12
/* 80457540 00454480  4E 80 04 21 */	bctrl 
/* 80457544 00454484  D0 3C 00 5C */	stfs f1, 0x5c(r28)
/* 80457548 00454488  38 60 00 00 */	li r3, 0
/* 8045754C 0045448C  C0 82 28 B0 */	lfs f4, lbl_80520C10@sda21(r2)
/* 80457550 00454490  C0 3C 00 5C */	lfs f1, 0x5c(r28)
/* 80457554 00454494  C0 5C 00 58 */	lfs f2, 0x58(r28)
/* 80457558 00454498  C0 7C 00 54 */	lfs f3, 0x54(r28)
/* 8045755C 0045449C  C0 A2 28 A8 */	lfs f5, lbl_80520C08@sda21(r2)
/* 80457560 004544A0  4B C6 2C E5 */	bl linearTransform__7JALCalcFfffffb
/* 80457564 004544A4  FF E0 08 90 */	fmr f31, f1
.L_80457568:
/* 80457568 004544A8  3C 80 80 4A */	lis r4, lbl_8049CDE0@ha
/* 8045756C 004544AC  3C 60 80 4A */	lis r3, lbl_8049CDD4@ha
/* 80457570 004544B0  3B C4 CD E0 */	addi r30, r4, lbl_8049CDE0@l
/* 80457574 004544B4  3B A0 00 00 */	li r29, 0
/* 80457578 004544B8  3B E3 CD D4 */	addi r31, r3, lbl_8049CDD4@l
/* 8045757C 004544BC  48 00 00 44 */	b .L_804575C0
.L_80457580:
/* 80457580 004544C0  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 80457584 004544C4  7C 00 18 40 */	cmplw r0, r3
/* 80457588 004544C8  41 80 00 18 */	blt .L_804575A0
/* 8045758C 004544CC  7F C3 F3 78 */	mr r3, r30
/* 80457590 004544D0  7F E5 FB 78 */	mr r5, r31
/* 80457594 004544D4  38 80 00 33 */	li r4, 0x33
/* 80457598 004544D8  4C C6 31 82 */	crclr 6
/* 8045759C 004544DC  4B BD 30 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804575A0:
/* 804575A0 004544E0  80 7C 00 04 */	lwz r3, 4(r28)
/* 804575A4 004544E4  57 A0 15 BA */	rlwinm r0, r29, 2, 0x16, 0x1d
/* 804575A8 004544E8  FC 20 F8 90 */	fmr f1, f31
/* 804575AC 004544EC  80 9C 00 60 */	lwz r4, 0x60(r28)
/* 804575B0 004544F0  7C 63 00 2E */	lwzx r3, r3, r0
/* 804575B4 004544F4  38 A0 00 00 */	li r5, 0
/* 804575B8 004544F8  4B EE B7 91 */	bl fade__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase
/* 804575BC 004544FC  3B BD 00 01 */	addi r29, r29, 1
.L_804575C0:
/* 804575C0 00454500  88 7C 00 41 */	lbz r3, 0x41(r28)
/* 804575C4 00454504  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 804575C8 00454508  7C 00 18 40 */	cmplw r0, r3
/* 804575CC 0045450C  41 80 FF B4 */	blt .L_80457580
/* 804575D0 00454510  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 804575D4 00454514  80 01 00 34 */	lwz r0, 0x34(r1)
/* 804575D8 00454518  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 804575DC 0045451C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804575E0 00454520  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804575E4 00454524  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804575E8 00454528  83 81 00 10 */	lwz r28, 0x10(r1)
/* 804575EC 0045452C  7C 08 03 A6 */	mtlr r0
/* 804575F0 00454530  38 21 00 30 */	addi r1, r1, 0x30
/* 804575F4 00454534  4E 80 00 20 */	blr 
.endfn underDirection__Q23PSM22TrackOnDirector_ScaledFv

.fn onUpdateFromMasterD__Q23PSM17ListDirectorActorFv, global
/* 804575F8 00454538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804575FC 0045453C  7C 08 02 A6 */	mflr r0
/* 80457600 00454540  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457604 00454544  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80457608 00454548  7C 7F 1B 78 */	mr r31, r3
/* 8045760C 0045454C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80457610 00454550  28 00 00 00 */	cmplwi r0, 0
/* 80457614 00454554  40 82 00 2C */	bne .L_80457640
/* 80457618 00454558  80 7F 00 04 */	lwz r3, 4(r31)
/* 8045761C 0045455C  4B EE BA AD */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 80457620 00454560  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80457624 00454564  41 82 00 1C */	beq .L_80457640
/* 80457628 00454568  80 7F 00 04 */	lwz r3, 4(r31)
/* 8045762C 0045456C  81 83 00 00 */	lwz r12, 0(r3)
/* 80457630 00454570  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80457634 00454574  7D 89 03 A6 */	mtctr r12
/* 80457638 00454578  4E 80 04 21 */	bctrl 
/* 8045763C 0045457C  48 00 00 34 */	b .L_80457670
.L_80457640:
/* 80457640 00454580  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80457644 00454584  28 00 00 00 */	cmplwi r0, 0
/* 80457648 00454588  41 82 00 28 */	beq .L_80457670
/* 8045764C 0045458C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80457650 00454590  4B EE BA 79 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 80457654 00454594  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80457658 00454598  40 82 00 18 */	bne .L_80457670
/* 8045765C 0045459C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80457660 004545A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80457664 004545A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80457668 004545A8  7D 89 03 A6 */	mtctr r12
/* 8045766C 004545AC  4E 80 04 21 */	bctrl 
.L_80457670:
/* 80457670 004545B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80457674 004545B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80457678 004545B8  7C 08 03 A6 */	mtlr r0
/* 8045767C 004545BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80457680 004545C0  4E 80 00 20 */	blr 
.endfn onUpdateFromMasterD__Q23PSM17ListDirectorActorFv

.fn __ct__Q23PSM21ActorDirector_TrackOnFPCcill, global
/* 80457684 004545C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80457688 004545C8  7C 08 02 A6 */	mflr r0
/* 8045768C 004545CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80457690 004545D0  7C 80 23 78 */	mr r0, r4
/* 80457694 004545D4  7C A4 2B 78 */	mr r4, r5
/* 80457698 004545D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8045769C 004545DC  7C FF 3B 78 */	mr r31, r7
/* 804576A0 004545E0  7C 05 03 78 */	mr r5, r0
/* 804576A4 004545E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804576A8 004545E8  7C DE 33 78 */	mr r30, r6
/* 804576AC 004545EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804576B0 004545F0  7C 7D 1B 78 */	mr r29, r3
/* 804576B4 004545F4  4B EE B8 01 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 804576B8 004545F8  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804576BC 004545FC  3C 60 80 4F */	lis r3, __vt__Q23PSM16SwitcherDirector@ha
/* 804576C0 00454600  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804576C4 00454604  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804576C8 00454608  90 1D 00 00 */	stw r0, 0(r29)
/* 804576CC 0045460C  38 03 E0 B0 */	addi r0, r3, __vt__Q23PSM16SwitcherDirector@l
/* 804576D0 00454610  3C 60 80 4F */	lis r3, __vt__Q23PSM21ActorDirector_TrackOn@ha
/* 804576D4 00454614  38 A4 DF 98 */	addi r5, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804576D8 00454618  90 1D 00 00 */	stw r0, 0(r29)
/* 804576DC 0045461C  38 80 00 00 */	li r4, 0
/* 804576E0 00454620  38 03 DE D8 */	addi r0, r3, __vt__Q23PSM21ActorDirector_TrackOn@l
/* 804576E4 00454624  7F A3 EB 78 */	mr r3, r29
/* 804576E8 00454628  90 BD 00 00 */	stw r5, 0(r29)
/* 804576EC 0045462C  93 DD 00 48 */	stw r30, 0x48(r29)
/* 804576F0 00454630  93 FD 00 4C */	stw r31, 0x4c(r29)
/* 804576F4 00454634  98 9D 00 50 */	stb r4, 0x50(r29)
/* 804576F8 00454638  90 9D 00 54 */	stw r4, 0x54(r29)
/* 804576FC 0045463C  90 1D 00 00 */	stw r0, 0(r29)
/* 80457700 00454640  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80457704 00454644  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80457708 00454648  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8045770C 0045464C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80457710 00454650  7C 08 03 A6 */	mtlr r0
/* 80457714 00454654  38 21 00 20 */	addi r1, r1, 0x20
/* 80457718 00454658  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM21ActorDirector_TrackOnFPCcill

.fn execInner__Q23PSM21ActorDirector_TrackOnFv, global
/* 8045771C 0045465C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80457720 00454660  7C 08 02 A6 */	mflr r0
/* 80457724 00454664  7C 64 1B 78 */	mr r4, r3
/* 80457728 00454668  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045772C 0045466C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 80457730 00454670  28 03 00 00 */	cmplwi r3, 0
/* 80457734 00454674  41 82 00 14 */	beq .L_80457748
/* 80457738 00454678  81 83 00 00 */	lwz r12, 0(r3)
/* 8045773C 0045467C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457740 00454680  7D 89 03 A6 */	mtctr r12
/* 80457744 00454684  4E 80 04 21 */	bctrl 
.L_80457748:
/* 80457748 00454688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045774C 0045468C  7C 08 03 A6 */	mtlr r0
/* 80457750 00454690  38 21 00 10 */	addi r1, r1, 0x10
/* 80457754 00454694  4E 80 00 20 */	blr 
.endfn execInner__Q23PSM21ActorDirector_TrackOnFv

.fn __ct__Q23PSM20ActorDirector_ScaledFPCciffllUl, global
/* 80457758 00454698  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8045775C 0045469C  7C 08 02 A6 */	mflr r0
/* 80457760 004546A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80457764 004546A4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80457768 004546A8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8045776C 004546AC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80457770 004546B0  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80457774 004546B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80457778 004546B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8045777C 004546BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80457780 004546C0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80457784 004546C4  FF C0 08 90 */	fmr f30, f1
/* 80457788 004546C8  7C 80 23 78 */	mr r0, r4
/* 8045778C 004546CC  FF E0 10 90 */	fmr f31, f2
/* 80457790 004546D0  7C A4 2B 78 */	mr r4, r5
/* 80457794 004546D4  7C 7C 1B 78 */	mr r28, r3
/* 80457798 004546D8  7C DD 33 78 */	mr r29, r6
/* 8045779C 004546DC  7C FE 3B 78 */	mr r30, r7
/* 804577A0 004546E0  7D 1F 43 78 */	mr r31, r8
/* 804577A4 004546E4  7C 05 03 78 */	mr r5, r0
/* 804577A8 004546E8  4B EE B7 0D */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 804577AC 004546EC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804577B0 004546F0  3C 60 80 4F */	lis r3, __vt__Q23PSM16SwitcherDirector@ha
/* 804577B4 004546F4  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804577B8 004546F8  3C A0 80 4F */	lis r5, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804577BC 004546FC  90 1C 00 00 */	stw r0, 0(r28)
/* 804577C0 00454700  38 03 E0 B0 */	addi r0, r3, __vt__Q23PSM16SwitcherDirector@l
/* 804577C4 00454704  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 804577C8 00454708  3C 60 80 4F */	lis r3, __vt__Q23PSM20ActorDirector_Scaled@ha
/* 804577CC 0045470C  90 1C 00 00 */	stw r0, 0(r28)
/* 804577D0 00454710  38 05 DF 98 */	addi r0, r5, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804577D4 00454714  38 C0 00 00 */	li r6, 0
/* 804577D8 00454718  38 A4 DF 24 */	addi r5, r4, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 804577DC 0045471C  90 1C 00 00 */	stw r0, 0(r28)
/* 804577E0 00454720  38 80 00 01 */	li r4, 1
/* 804577E4 00454724  C0 02 28 B4 */	lfs f0, lbl_80520C14@sda21(r2)
/* 804577E8 00454728  38 03 DE 98 */	addi r0, r3, __vt__Q23PSM20ActorDirector_Scaled@l
/* 804577EC 0045472C  93 BC 00 48 */	stw r29, 0x48(r28)
/* 804577F0 00454730  7F 83 E3 78 */	mr r3, r28
/* 804577F4 00454734  93 DC 00 4C */	stw r30, 0x4c(r28)
/* 804577F8 00454738  98 DC 00 50 */	stb r6, 0x50(r28)
/* 804577FC 0045473C  90 BC 00 00 */	stw r5, 0(r28)
/* 80457800 00454740  D3 DC 00 54 */	stfs f30, 0x54(r28)
/* 80457804 00454744  D3 FC 00 58 */	stfs f31, 0x58(r28)
/* 80457808 00454748  D0 1C 00 5C */	stfs f0, 0x5c(r28)
/* 8045780C 0045474C  93 FC 00 60 */	stw r31, 0x60(r28)
/* 80457810 00454750  98 9C 00 50 */	stb r4, 0x50(r28)
/* 80457814 00454754  90 DC 00 64 */	stw r6, 0x64(r28)
/* 80457818 00454758  90 1C 00 00 */	stw r0, 0(r28)
/* 8045781C 0045475C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80457820 00454760  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80457824 00454764  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80457828 00454768  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8045782C 0045476C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80457830 00454770  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80457834 00454774  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80457838 00454778  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8045783C 0045477C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80457840 00454780  7C 08 03 A6 */	mtlr r0
/* 80457844 00454784  38 21 00 40 */	addi r1, r1, 0x40
/* 80457848 00454788  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM20ActorDirector_ScaledFPCciffllUl

.fn __dt__Q23PSM22TrackOnDirector_ScaledFv, weak
/* 8045784C 0045478C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80457850 00454790  7C 08 02 A6 */	mflr r0
/* 80457854 00454794  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457858 00454798  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045785C 0045479C  7C 9F 23 78 */	mr r31, r4
/* 80457860 004547A0  93 C1 00 08 */	stw r30, 8(r1)
/* 80457864 004547A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80457868 004547A8  41 82 00 68 */	beq .L_804578D0
/* 8045786C 004547AC  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 80457870 004547B0  38 04 DF 24 */	addi r0, r4, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 80457874 004547B4  90 1E 00 00 */	stw r0, 0(r30)
/* 80457878 004547B8  41 82 00 48 */	beq .L_804578C0
/* 8045787C 004547BC  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80457880 004547C0  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 80457884 004547C4  90 1E 00 00 */	stw r0, 0(r30)
/* 80457888 004547C8  41 82 00 38 */	beq .L_804578C0
/* 8045788C 004547CC  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80457890 004547D0  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80457894 004547D4  90 1E 00 00 */	stw r0, 0(r30)
/* 80457898 004547D8  41 82 00 28 */	beq .L_804578C0
/* 8045789C 004547DC  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804578A0 004547E0  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804578A4 004547E4  90 1E 00 00 */	stw r0, 0(r30)
/* 804578A8 004547E8  41 82 00 18 */	beq .L_804578C0
/* 804578AC 004547EC  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 804578B0 004547F0  38 80 00 00 */	li r4, 0
/* 804578B4 004547F4  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 804578B8 004547F8  90 1E 00 00 */	stw r0, 0(r30)
/* 804578BC 004547FC  4B C6 29 41 */	bl __dt__10JADHioNodeFv
.L_804578C0:
/* 804578C0 00454800  7F E0 07 35 */	extsh. r0, r31
/* 804578C4 00454804  40 81 00 0C */	ble .L_804578D0
/* 804578C8 00454808  7F C3 F3 78 */	mr r3, r30
/* 804578CC 0045480C  4B BC C7 E9 */	bl __dl__FPv
.L_804578D0:
/* 804578D0 00454810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804578D4 00454814  7F C3 F3 78 */	mr r3, r30
/* 804578D8 00454818  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804578DC 0045481C  83 C1 00 08 */	lwz r30, 8(r1)
/* 804578E0 00454820  7C 08 03 A6 */	mtlr r0
/* 804578E4 00454824  38 21 00 10 */	addi r1, r1, 0x10
/* 804578E8 00454828  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM22TrackOnDirector_ScaledFv

.fn execInner__Q23PSM20ActorDirector_ScaledFv, global
/* 804578EC 0045482C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804578F0 00454830  7C 08 02 A6 */	mflr r0
/* 804578F4 00454834  7C 64 1B 78 */	mr r4, r3
/* 804578F8 00454838  90 01 00 14 */	stw r0, 0x14(r1)
/* 804578FC 0045483C  80 63 00 64 */	lwz r3, 0x64(r3)
/* 80457900 00454840  28 03 00 00 */	cmplwi r3, 0
/* 80457904 00454844  41 82 00 14 */	beq .L_80457918
/* 80457908 00454848  81 83 00 00 */	lwz r12, 0(r3)
/* 8045790C 0045484C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457910 00454850  7D 89 03 A6 */	mtctr r12
/* 80457914 00454854  4E 80 04 21 */	bctrl 
.L_80457918:
/* 80457918 00454858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045791C 0045485C  7C 08 03 A6 */	mtlr r0
/* 80457920 00454860  38 21 00 10 */	addi r1, r1, 0x10
/* 80457924 00454864  4E 80 00 20 */	blr 
.endfn execInner__Q23PSM20ActorDirector_ScaledFv

.fn getNearestDistance__Q23PSM20ActorDirector_ScaledFv, global
/* 80457928 00454868  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 8045792C 0045486C  7C 08 02 A6 */	mflr r0
/* 80457930 00454870  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80457934 00454874  DB E1 01 C0 */	stfd f31, 0x1c0(r1)
/* 80457938 00454878  F3 E1 01 C8 */	psq_st f31, 456(r1), 0, qr0
/* 8045793C 0045487C  DB C1 01 B0 */	stfd f30, 0x1b0(r1)
/* 80457940 00454880  F3 C1 01 B8 */	psq_st f30, 440(r1), 0, qr0
/* 80457944 00454884  DB A1 01 A0 */	stfd f29, 0x1a0(r1)
/* 80457948 00454888  F3 A1 01 A8 */	psq_st f29, 424(r1), 0, qr0
/* 8045794C 0045488C  DB 81 01 90 */	stfd f28, 0x190(r1)
/* 80457950 00454890  F3 81 01 98 */	psq_st f28, 408(r1), 0, qr0
/* 80457954 00454894  DB 61 01 80 */	stfd f27, 0x180(r1)
/* 80457958 00454898  F3 61 01 88 */	psq_st f27, 392(r1), 0, qr0
/* 8045795C 0045489C  DB 41 01 70 */	stfd f26, 0x170(r1)
/* 80457960 004548A0  F3 41 01 78 */	psq_st f26, 376(r1), 0, qr0
/* 80457964 004548A4  DB 21 01 60 */	stfd f25, 0x160(r1)
/* 80457968 004548A8  F3 21 01 68 */	psq_st f25, 360(r1), 0, qr0
/* 8045796C 004548AC  DB 01 01 50 */	stfd f24, 0x150(r1)
/* 80457970 004548B0  F3 01 01 58 */	psq_st f24, 344(r1), 0, qr0
/* 80457974 004548B4  93 E1 01 4C */	stw r31, 0x14c(r1)
/* 80457978 004548B8  93 C1 01 48 */	stw r30, 0x148(r1)
/* 8045797C 004548BC  93 A1 01 44 */	stw r29, 0x144(r1)
/* 80457980 004548C0  93 81 01 40 */	stw r28, 0x140(r1)
/* 80457984 004548C4  80 0D 91 B4 */	lwz r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80457988 004548C8  3C 80 80 4A */	lis r4, lbl_8049CD98@ha
/* 8045798C 004548CC  7C 7E 1B 78 */	mr r30, r3
/* 80457990 004548D0  28 00 00 00 */	cmplwi r0, 0
/* 80457994 004548D4  3B E4 CD 98 */	addi r31, r4, lbl_8049CD98@l
/* 80457998 004548D8  40 82 00 18 */	bne .L_804579B0
/* 8045799C 004548DC  38 7F 00 58 */	addi r3, r31, 0x58
/* 804579A0 004548E0  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804579A4 004548E4  38 80 00 89 */	li r4, 0x89
/* 804579A8 004548E8  4C C6 31 82 */	crclr 6
/* 804579AC 004548EC  4B BD 2C 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804579B0:
/* 804579B0 004548F0  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 804579B4 004548F4  81 83 00 00 */	lwz r12, 0(r3)
/* 804579B8 004548F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 804579BC 004548FC  7D 89 03 A6 */	mtctr r12
/* 804579C0 00454900  4E 80 04 21 */	bctrl 
/* 804579C4 00454904  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804579C8 00454908  C3 02 28 B8 */	lfs f24, lbl_80520C18@sda21(r2)
/* 804579CC 0045490C  40 82 03 48 */	bne .L_80457D14
/* 804579D0 00454910  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 804579D4 00454914  38 80 00 00 */	li r4, 0
/* 804579D8 00454918  81 83 00 00 */	lwz r12, 0(r3)
/* 804579DC 0045491C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 804579E0 00454920  7D 89 03 A6 */	mtctr r12
/* 804579E4 00454924  4E 80 04 21 */	bctrl 
/* 804579E8 00454928  7C 60 1B 78 */	mr r0, r3
/* 804579EC 0045492C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 804579F0 00454930  7C 1D 03 78 */	mr r29, r0
/* 804579F4 00454934  38 80 00 01 */	li r4, 1
/* 804579F8 00454938  81 83 00 00 */	lwz r12, 0(r3)
/* 804579FC 0045493C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80457A00 00454940  7D 89 03 A6 */	mtctr r12
/* 80457A04 00454944  4E 80 04 21 */	bctrl 
/* 80457A08 00454948  28 1D 00 00 */	cmplwi r29, 0
/* 80457A0C 0045494C  7C 7C 1B 78 */	mr r28, r3
/* 80457A10 00454950  38 00 00 00 */	li r0, 0
/* 80457A14 00454954  41 82 00 10 */	beq .L_80457A24
/* 80457A18 00454958  28 1C 00 00 */	cmplwi r28, 0
/* 80457A1C 0045495C  41 82 00 08 */	beq .L_80457A24
/* 80457A20 00454960  38 00 00 01 */	li r0, 1
.L_80457A24:
/* 80457A24 00454964  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80457A28 00454968  40 82 00 18 */	bne .L_80457A40
/* 80457A2C 0045496C  38 7F 00 24 */	addi r3, r31, 0x24
/* 80457A30 00454970  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80457A34 00454974  38 80 01 8A */	li r4, 0x18a
/* 80457A38 00454978  4C C6 31 82 */	crclr 6
/* 80457A3C 0045497C  4B BD 2C 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80457A40:
/* 80457A40 00454980  7F A4 EB 78 */	mr r4, r29
/* 80457A44 00454984  38 61 01 34 */	addi r3, r1, 0x134
/* 80457A48 00454988  81 9D 00 00 */	lwz r12, 0(r29)
/* 80457A4C 0045498C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457A50 00454990  7D 89 03 A6 */	mtctr r12
/* 80457A54 00454994  4E 80 04 21 */	bctrl 
/* 80457A58 00454998  7F 84 E3 78 */	mr r4, r28
/* 80457A5C 0045499C  38 61 01 28 */	addi r3, r1, 0x128
/* 80457A60 004549A0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80457A64 004549A4  C3 C1 01 34 */	lfs f30, 0x134(r1)
/* 80457A68 004549A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457A6C 004549AC  C3 A1 01 38 */	lfs f29, 0x138(r1)
/* 80457A70 004549B0  C3 81 01 3C */	lfs f28, 0x13c(r1)
/* 80457A74 004549B4  7D 89 03 A6 */	mtctr r12
/* 80457A78 004549B8  4E 80 04 21 */	bctrl 
/* 80457A7C 004549BC  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 80457A80 004549C0  C3 61 01 28 */	lfs f27, 0x128(r1)
/* 80457A84 004549C4  28 03 00 00 */	cmplwi r3, 0
/* 80457A88 004549C8  C3 41 01 2C */	lfs f26, 0x12c(r1)
/* 80457A8C 004549CC  C3 21 01 30 */	lfs f25, 0x130(r1)
/* 80457A90 004549D0  41 82 00 08 */	beq .L_80457A98
/* 80457A94 004549D4  38 63 00 0C */	addi r3, r3, 0xc
.L_80457A98:
/* 80457A98 004549D8  83 E3 00 00 */	lwz r31, 0(r3)
/* 80457A9C 004549DC  C3 E2 28 B0 */	lfs f31, lbl_80520C10@sda21(r2)
/* 80457AA0 004549E0  48 00 02 68 */	b .L_80457D08
.L_80457AA4:
/* 80457AA4 004549E4  80 9F 00 00 */	lwz r4, 0(r31)
/* 80457AA8 004549E8  38 61 01 1C */	addi r3, r1, 0x11c
/* 80457AAC 004549EC  81 84 00 00 */	lwz r12, 0(r4)
/* 80457AB0 004549F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457AB4 004549F4  7D 89 03 A6 */	mtctr r12
/* 80457AB8 004549F8  4E 80 04 21 */	bctrl 
/* 80457ABC 004549FC  C0 21 01 20 */	lfs f1, 0x120(r1)
/* 80457AC0 00454A00  C0 01 01 1C */	lfs f0, 0x11c(r1)
/* 80457AC4 00454A04  D3 C1 00 A4 */	stfs f30, 0xa4(r1)
/* 80457AC8 00454A08  C0 41 01 24 */	lfs f2, 0x124(r1)
/* 80457ACC 00454A0C  D3 A1 00 A8 */	stfs f29, 0xa8(r1)
/* 80457AD0 00454A10  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80457AD4 00454A14  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 80457AD8 00454A18  80 C1 00 A8 */	lwz r6, 0xa8(r1)
/* 80457ADC 00454A1C  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 80457AE0 00454A20  80 81 00 B0 */	lwz r4, 0xb0(r1)
/* 80457AE4 00454A24  80 61 00 B4 */	lwz r3, 0xb4(r1)
/* 80457AE8 00454A28  D3 81 00 AC */	stfs f28, 0xac(r1)
/* 80457AEC 00454A2C  C0 01 01 1C */	lfs f0, 0x11c(r1)
/* 80457AF0 00454A30  D0 41 00 B8 */	stfs f2, 0xb8(r1)
/* 80457AF4 00454A34  80 A1 00 AC */	lwz r5, 0xac(r1)
/* 80457AF8 00454A38  90 01 01 04 */	stw r0, 0x104(r1)
/* 80457AFC 00454A3C  80 01 00 B8 */	lwz r0, 0xb8(r1)
/* 80457B00 00454A40  90 C1 01 08 */	stw r6, 0x108(r1)
/* 80457B04 00454A44  C0 A1 01 04 */	lfs f5, 0x104(r1)
/* 80457B08 00454A48  90 81 01 10 */	stw r4, 0x110(r1)
/* 80457B0C 00454A4C  C0 61 01 08 */	lfs f3, 0x108(r1)
/* 80457B10 00454A50  90 61 01 14 */	stw r3, 0x114(r1)
/* 80457B14 00454A54  C0 C1 01 10 */	lfs f6, 0x110(r1)
/* 80457B18 00454A58  C0 81 01 14 */	lfs f4, 0x114(r1)
/* 80457B1C 00454A5C  90 A1 01 0C */	stw r5, 0x10c(r1)
/* 80457B20 00454A60  EC C6 28 28 */	fsubs f6, f6, f5
/* 80457B24 00454A64  EC A4 18 28 */	fsubs f5, f4, f3
/* 80457B28 00454A68  90 01 01 18 */	stw r0, 0x118(r1)
/* 80457B2C 00454A6C  C0 61 01 0C */	lfs f3, 0x10c(r1)
/* 80457B30 00454A70  C0 81 01 18 */	lfs f4, 0x118(r1)
/* 80457B34 00454A74  D0 C1 00 68 */	stfs f6, 0x68(r1)
/* 80457B38 00454A78  EC 64 18 28 */	fsubs f3, f4, f3
/* 80457B3C 00454A7C  D0 A1 00 6C */	stfs f5, 0x6c(r1)
/* 80457B40 00454A80  80 01 00 68 */	lwz r0, 0x68(r1)
/* 80457B44 00454A84  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 80457B48 00454A88  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 80457B4C 00454A8C  90 01 00 50 */	stw r0, 0x50(r1)
/* 80457B50 00454A90  80 01 00 70 */	lwz r0, 0x70(r1)
/* 80457B54 00454A94  90 61 00 54 */	stw r3, 0x54(r1)
/* 80457B58 00454A98  C0 81 00 50 */	lfs f4, 0x50(r1)
/* 80457B5C 00454A9C  C0 61 00 54 */	lfs f3, 0x54(r1)
/* 80457B60 00454AA0  90 01 00 58 */	stw r0, 0x58(r1)
/* 80457B64 00454AA4  EC A4 01 32 */	fmuls f5, f4, f4
/* 80457B68 00454AA8  EC 83 00 F2 */	fmuls f4, f3, f3
/* 80457B6C 00454AAC  C0 61 00 58 */	lfs f3, 0x58(r1)
/* 80457B70 00454AB0  D0 A1 00 50 */	stfs f5, 0x50(r1)
/* 80457B74 00454AB4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80457B78 00454AB8  D0 81 00 54 */	stfs f4, 0x54(r1)
/* 80457B7C 00454ABC  80 01 00 50 */	lwz r0, 0x50(r1)
/* 80457B80 00454AC0  80 61 00 54 */	lwz r3, 0x54(r1)
/* 80457B84 00454AC4  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 80457B88 00454AC8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80457B8C 00454ACC  80 01 00 58 */	lwz r0, 0x58(r1)
/* 80457B90 00454AD0  90 61 00 60 */	stw r3, 0x60(r1)
/* 80457B94 00454AD4  C0 81 00 5C */	lfs f4, 0x5c(r1)
/* 80457B98 00454AD8  C0 61 00 60 */	lfs f3, 0x60(r1)
/* 80457B9C 00454ADC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80457BA0 00454AE0  EC 64 18 2A */	fadds f3, f4, f3
/* 80457BA4 00454AE4  C0 81 00 64 */	lfs f4, 0x64(r1)
/* 80457BA8 00454AE8  EC 84 18 2A */	fadds f4, f4, f3
/* 80457BAC 00454AEC  FC 04 F8 40 */	fcmpo cr0, f4, f31
/* 80457BB0 00454AF0  40 81 00 0C */	ble .L_80457BBC
/* 80457BB4 00454AF4  FC 60 20 34 */	frsqrte f3, f4
/* 80457BB8 00454AF8  EC 83 01 32 */	fmuls f4, f3, f4
.L_80457BBC:
/* 80457BBC 00454AFC  D3 61 00 8C */	stfs f27, 0x8c(r1)
/* 80457BC0 00454B00  D3 41 00 90 */	stfs f26, 0x90(r1)
/* 80457BC4 00454B04  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 80457BC8 00454B08  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80457BCC 00454B0C  80 C1 00 90 */	lwz r6, 0x90(r1)
/* 80457BD0 00454B10  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 80457BD4 00454B14  80 81 00 98 */	lwz r4, 0x98(r1)
/* 80457BD8 00454B18  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 80457BDC 00454B1C  D3 21 00 94 */	stfs f25, 0x94(r1)
/* 80457BE0 00454B20  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 80457BE4 00454B24  80 A1 00 94 */	lwz r5, 0x94(r1)
/* 80457BE8 00454B28  90 01 00 EC */	stw r0, 0xec(r1)
/* 80457BEC 00454B2C  80 01 00 A0 */	lwz r0, 0xa0(r1)
/* 80457BF0 00454B30  90 C1 00 F0 */	stw r6, 0xf0(r1)
/* 80457BF4 00454B34  C0 41 00 EC */	lfs f2, 0xec(r1)
/* 80457BF8 00454B38  90 81 00 F8 */	stw r4, 0xf8(r1)
/* 80457BFC 00454B3C  C0 01 00 F0 */	lfs f0, 0xf0(r1)
/* 80457C00 00454B40  90 61 00 FC */	stw r3, 0xfc(r1)
/* 80457C04 00454B44  C0 61 00 F8 */	lfs f3, 0xf8(r1)
/* 80457C08 00454B48  C0 21 00 FC */	lfs f1, 0xfc(r1)
/* 80457C0C 00454B4C  90 A1 00 F4 */	stw r5, 0xf4(r1)
/* 80457C10 00454B50  EC 63 10 28 */	fsubs f3, f3, f2
/* 80457C14 00454B54  EC 41 00 28 */	fsubs f2, f1, f0
/* 80457C18 00454B58  90 01 01 00 */	stw r0, 0x100(r1)
/* 80457C1C 00454B5C  C0 01 00 F4 */	lfs f0, 0xf4(r1)
/* 80457C20 00454B60  C0 21 01 00 */	lfs f1, 0x100(r1)
/* 80457C24 00454B64  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 80457C28 00454B68  EC 01 00 28 */	fsubs f0, f1, f0
/* 80457C2C 00454B6C  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 80457C30 00454B70  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80457C34 00454B74  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80457C38 00454B78  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80457C3C 00454B7C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80457C40 00454B80  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80457C44 00454B84  90 61 00 30 */	stw r3, 0x30(r1)
/* 80457C48 00454B88  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80457C4C 00454B8C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80457C50 00454B90  90 01 00 34 */	stw r0, 0x34(r1)
/* 80457C54 00454B94  EC 41 00 72 */	fmuls f2, f1, f1
/* 80457C58 00454B98  EC 20 00 32 */	fmuls f1, f0, f0
/* 80457C5C 00454B9C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80457C60 00454BA0  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80457C64 00454BA4  EC 00 00 32 */	fmuls f0, f0, f0
/* 80457C68 00454BA8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80457C6C 00454BAC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80457C70 00454BB0  80 61 00 30 */	lwz r3, 0x30(r1)
/* 80457C74 00454BB4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80457C78 00454BB8  90 01 00 38 */	stw r0, 0x38(r1)
/* 80457C7C 00454BBC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80457C80 00454BC0  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80457C84 00454BC4  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80457C88 00454BC8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80457C8C 00454BCC  90 01 00 40 */	stw r0, 0x40(r1)
/* 80457C90 00454BD0  EC 01 00 2A */	fadds f0, f1, f0
/* 80457C94 00454BD4  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80457C98 00454BD8  EC 01 00 2A */	fadds f0, f1, f0
/* 80457C9C 00454BDC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80457CA0 00454BE0  40 81 00 0C */	ble .L_80457CAC
/* 80457CA4 00454BE4  FC 20 00 34 */	frsqrte f1, f0
/* 80457CA8 00454BE8  EC 01 00 32 */	fmuls f0, f1, f0
.L_80457CAC:
/* 80457CAC 00454BEC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80457CB0 00454BF0  4C 40 13 82 */	cror 2, 0, 2
/* 80457CB4 00454BF4  40 82 00 2C */	bne .L_80457CE0
/* 80457CB8 00454BF8  FC 04 C0 40 */	fcmpo cr0, f4, f24
/* 80457CBC 00454BFC  40 80 00 48 */	bge .L_80457D04
/* 80457CC0 00454C00  7F C3 F3 78 */	mr r3, r30
/* 80457CC4 00454C04  FF 00 20 90 */	fmr f24, f4
/* 80457CC8 00454C08  81 9E 00 00 */	lwz r12, 0(r30)
/* 80457CCC 00454C0C  80 9F 00 00 */	lwz r4, 0(r31)
/* 80457CD0 00454C10  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80457CD4 00454C14  7D 89 03 A6 */	mtctr r12
/* 80457CD8 00454C18  4E 80 04 21 */	bctrl 
/* 80457CDC 00454C1C  48 00 00 28 */	b .L_80457D04
.L_80457CE0:
/* 80457CE0 00454C20  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 80457CE4 00454C24  40 80 00 20 */	bge .L_80457D04
/* 80457CE8 00454C28  7F C3 F3 78 */	mr r3, r30
/* 80457CEC 00454C2C  FF 00 00 90 */	fmr f24, f0
/* 80457CF0 00454C30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80457CF4 00454C34  80 9F 00 00 */	lwz r4, 0(r31)
/* 80457CF8 00454C38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80457CFC 00454C3C  7D 89 03 A6 */	mtctr r12
/* 80457D00 00454C40  4E 80 04 21 */	bctrl 
.L_80457D04:
/* 80457D04 00454C44  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80457D08:
/* 80457D08 00454C48  28 1F 00 00 */	cmplwi r31, 0
/* 80457D0C 00454C4C  40 82 FD 98 */	bne .L_80457AA4
/* 80457D10 00454C50  48 00 01 C8 */	b .L_80457ED8
.L_80457D14:
/* 80457D14 00454C54  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80457D18 00454C58  4B D0 2F 09 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80457D1C 00454C5C  28 03 00 00 */	cmplwi r3, 0
/* 80457D20 00454C60  40 82 00 40 */	bne .L_80457D60
/* 80457D24 00454C64  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80457D28 00454C68  38 80 00 00 */	li r4, 0
/* 80457D2C 00454C6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80457D30 00454C70  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80457D34 00454C74  7D 89 03 A6 */	mtctr r12
/* 80457D38 00454C78  4E 80 04 21 */	bctrl 
/* 80457D3C 00454C7C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80457D40 00454C80  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 80457D44 00454C84  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80457D48 00454C88  80 63 00 04 */	lwz r3, 4(r3)
/* 80457D4C 00454C8C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80457D50 00454C90  C3 23 00 00 */	lfs f25, 0(r3)
/* 80457D54 00454C94  C3 43 00 04 */	lfs f26, 4(r3)
/* 80457D58 00454C98  C3 63 00 08 */	lfs f27, 8(r3)
/* 80457D5C 00454C9C  48 00 00 28 */	b .L_80457D84
.L_80457D60:
/* 80457D60 00454CA0  7C 64 1B 78 */	mr r4, r3
/* 80457D64 00454CA4  38 61 00 E0 */	addi r3, r1, 0xe0
/* 80457D68 00454CA8  81 84 00 00 */	lwz r12, 0(r4)
/* 80457D6C 00454CAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457D70 00454CB0  7D 89 03 A6 */	mtctr r12
/* 80457D74 00454CB4  4E 80 04 21 */	bctrl 
/* 80457D78 00454CB8  C3 21 00 E0 */	lfs f25, 0xe0(r1)
/* 80457D7C 00454CBC  C3 41 00 E4 */	lfs f26, 0xe4(r1)
/* 80457D80 00454CC0  C3 61 00 E8 */	lfs f27, 0xe8(r1)
.L_80457D84:
/* 80457D84 00454CC4  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 80457D88 00454CC8  C3 82 28 B0 */	lfs f28, lbl_80520C10@sda21(r2)
/* 80457D8C 00454CCC  83 E3 00 0C */	lwz r31, 0xc(r3)
/* 80457D90 00454CD0  48 00 01 40 */	b .L_80457ED0
.L_80457D94:
/* 80457D94 00454CD4  80 9F 00 00 */	lwz r4, 0(r31)
/* 80457D98 00454CD8  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80457D9C 00454CDC  81 84 00 00 */	lwz r12, 0(r4)
/* 80457DA0 00454CE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80457DA4 00454CE4  7D 89 03 A6 */	mtctr r12
/* 80457DA8 00454CE8  4E 80 04 21 */	bctrl 
/* 80457DAC 00454CEC  C0 41 00 D4 */	lfs f2, 0xd4(r1)
/* 80457DB0 00454CF0  C0 21 00 D8 */	lfs f1, 0xd8(r1)
/* 80457DB4 00454CF4  D3 21 00 74 */	stfs f25, 0x74(r1)
/* 80457DB8 00454CF8  C0 01 00 DC */	lfs f0, 0xdc(r1)
/* 80457DBC 00454CFC  D3 41 00 78 */	stfs f26, 0x78(r1)
/* 80457DC0 00454D00  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80457DC4 00454D04  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 80457DC8 00454D08  80 C1 00 78 */	lwz r6, 0x78(r1)
/* 80457DCC 00454D0C  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 80457DD0 00454D10  80 81 00 80 */	lwz r4, 0x80(r1)
/* 80457DD4 00454D14  80 61 00 84 */	lwz r3, 0x84(r1)
/* 80457DD8 00454D18  D3 61 00 7C */	stfs f27, 0x7c(r1)
/* 80457DDC 00454D1C  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 80457DE0 00454D20  80 A1 00 7C */	lwz r5, 0x7c(r1)
/* 80457DE4 00454D24  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80457DE8 00454D28  80 01 00 88 */	lwz r0, 0x88(r1)
/* 80457DEC 00454D2C  90 C1 00 C0 */	stw r6, 0xc0(r1)
/* 80457DF0 00454D30  C0 41 00 BC */	lfs f2, 0xbc(r1)
/* 80457DF4 00454D34  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 80457DF8 00454D38  C0 01 00 C0 */	lfs f0, 0xc0(r1)
/* 80457DFC 00454D3C  90 61 00 CC */	stw r3, 0xcc(r1)
/* 80457E00 00454D40  C0 61 00 C8 */	lfs f3, 0xc8(r1)
/* 80457E04 00454D44  C0 21 00 CC */	lfs f1, 0xcc(r1)
/* 80457E08 00454D48  90 A1 00 C4 */	stw r5, 0xc4(r1)
/* 80457E0C 00454D4C  EC 63 10 28 */	fsubs f3, f3, f2
/* 80457E10 00454D50  EC 41 00 28 */	fsubs f2, f1, f0
/* 80457E14 00454D54  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80457E18 00454D58  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 80457E1C 00454D5C  C0 21 00 D0 */	lfs f1, 0xd0(r1)
/* 80457E20 00454D60  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 80457E24 00454D64  EC 01 00 28 */	fsubs f0, f1, f0
/* 80457E28 00454D68  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80457E2C 00454D6C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80457E30 00454D70  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80457E34 00454D74  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80457E38 00454D78  90 01 00 08 */	stw r0, 8(r1)
/* 80457E3C 00454D7C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80457E40 00454D80  90 61 00 0C */	stw r3, 0xc(r1)
/* 80457E44 00454D84  C0 21 00 08 */	lfs f1, 8(r1)
/* 80457E48 00454D88  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80457E4C 00454D8C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80457E50 00454D90  EC 41 00 72 */	fmuls f2, f1, f1
/* 80457E54 00454D94  EC 20 00 32 */	fmuls f1, f0, f0
/* 80457E58 00454D98  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80457E5C 00454D9C  D0 41 00 08 */	stfs f2, 8(r1)
/* 80457E60 00454DA0  EC 00 00 32 */	fmuls f0, f0, f0
/* 80457E64 00454DA4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80457E68 00454DA8  80 01 00 08 */	lwz r0, 8(r1)
/* 80457E6C 00454DAC  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80457E70 00454DB0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80457E74 00454DB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80457E78 00454DB8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80457E7C 00454DBC  90 61 00 18 */	stw r3, 0x18(r1)
/* 80457E80 00454DC0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80457E84 00454DC4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80457E88 00454DC8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80457E8C 00454DCC  EC 01 00 2A */	fadds f0, f1, f0
/* 80457E90 00454DD0  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80457E94 00454DD4  EC 01 00 2A */	fadds f0, f1, f0
/* 80457E98 00454DD8  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80457E9C 00454DDC  40 81 00 0C */	ble .L_80457EA8
/* 80457EA0 00454DE0  FC 20 00 34 */	frsqrte f1, f0
/* 80457EA4 00454DE4  EC 01 00 32 */	fmuls f0, f1, f0
.L_80457EA8:
/* 80457EA8 00454DE8  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 80457EAC 00454DEC  40 80 00 20 */	bge .L_80457ECC
/* 80457EB0 00454DF0  7F C3 F3 78 */	mr r3, r30
/* 80457EB4 00454DF4  FF 00 00 90 */	fmr f24, f0
/* 80457EB8 00454DF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80457EBC 00454DFC  80 9F 00 00 */	lwz r4, 0(r31)
/* 80457EC0 00454E00  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80457EC4 00454E04  7D 89 03 A6 */	mtctr r12
/* 80457EC8 00454E08  4E 80 04 21 */	bctrl 
.L_80457ECC:
/* 80457ECC 00454E0C  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80457ED0:
/* 80457ED0 00454E10  28 1F 00 00 */	cmplwi r31, 0
/* 80457ED4 00454E14  40 82 FE C0 */	bne .L_80457D94
.L_80457ED8:
/* 80457ED8 00454E18  FC 20 C0 90 */	fmr f1, f24
/* 80457EDC 00454E1C  E3 E1 01 C8 */	psq_l f31, 456(r1), 0, qr0
/* 80457EE0 00454E20  CB E1 01 C0 */	lfd f31, 0x1c0(r1)
/* 80457EE4 00454E24  E3 C1 01 B8 */	psq_l f30, 440(r1), 0, qr0
/* 80457EE8 00454E28  CB C1 01 B0 */	lfd f30, 0x1b0(r1)
/* 80457EEC 00454E2C  E3 A1 01 A8 */	psq_l f29, 424(r1), 0, qr0
/* 80457EF0 00454E30  CB A1 01 A0 */	lfd f29, 0x1a0(r1)
/* 80457EF4 00454E34  E3 81 01 98 */	psq_l f28, 408(r1), 0, qr0
/* 80457EF8 00454E38  CB 81 01 90 */	lfd f28, 0x190(r1)
/* 80457EFC 00454E3C  E3 61 01 88 */	psq_l f27, 392(r1), 0, qr0
/* 80457F00 00454E40  CB 61 01 80 */	lfd f27, 0x180(r1)
/* 80457F04 00454E44  E3 41 01 78 */	psq_l f26, 376(r1), 0, qr0
/* 80457F08 00454E48  CB 41 01 70 */	lfd f26, 0x170(r1)
/* 80457F0C 00454E4C  E3 21 01 68 */	psq_l f25, 360(r1), 0, qr0
/* 80457F10 00454E50  CB 21 01 60 */	lfd f25, 0x160(r1)
/* 80457F14 00454E54  E3 01 01 58 */	psq_l f24, 344(r1), 0, qr0
/* 80457F18 00454E58  CB 01 01 50 */	lfd f24, 0x150(r1)
/* 80457F1C 00454E5C  83 E1 01 4C */	lwz r31, 0x14c(r1)
/* 80457F20 00454E60  83 C1 01 48 */	lwz r30, 0x148(r1)
/* 80457F24 00454E64  83 A1 01 44 */	lwz r29, 0x144(r1)
/* 80457F28 00454E68  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 80457F2C 00454E6C  83 81 01 40 */	lwz r28, 0x140(r1)
/* 80457F30 00454E70  7C 08 03 A6 */	mtlr r0
/* 80457F34 00454E74  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80457F38 00454E78  4E 80 00 20 */	blr 
.endfn getNearestDistance__Q23PSM20ActorDirector_ScaledFv

.fn __ct__Q23PSM19ActorDirector_EnemyFPCcillUl, global
/* 80457F3C 00454E7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80457F40 00454E80  7C 08 02 A6 */	mflr r0
/* 80457F44 00454E84  90 01 00 24 */	stw r0, 0x24(r1)
/* 80457F48 00454E88  7C 80 23 78 */	mr r0, r4
/* 80457F4C 00454E8C  7C A4 2B 78 */	mr r4, r5
/* 80457F50 00454E90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80457F54 00454E94  7C 7F 1B 78 */	mr r31, r3
/* 80457F58 00454E98  7C 05 03 78 */	mr r5, r0
/* 80457F5C 00454E9C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80457F60 00454EA0  7D 1E 43 78 */	mr r30, r8
/* 80457F64 00454EA4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80457F68 00454EA8  7C FD 3B 78 */	mr r29, r7
/* 80457F6C 00454EAC  93 81 00 10 */	stw r28, 0x10(r1)
/* 80457F70 00454EB0  7C DC 33 78 */	mr r28, r6
/* 80457F74 00454EB4  4B EE AF 41 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 80457F78 00454EB8  3C 60 80 4E */	lis r3, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80457F7C 00454EBC  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80457F80 00454EC0  38 03 AF D0 */	addi r0, r3, __vt__Q28PSSystem16SwitcherDirector@l
/* 80457F84 00454EC4  3C 60 80 4F */	lis r3, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80457F88 00454EC8  90 1F 00 00 */	stw r0, 0(r31)
/* 80457F8C 00454ECC  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80457F90 00454ED0  3C A0 80 4F */	lis r5, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 80457F94 00454ED4  3C 80 80 4F */	lis r4, __vt__Q23PSM20ActorDirector_Scaled@ha
/* 80457F98 00454ED8  90 1F 00 00 */	stw r0, 0(r31)
/* 80457F9C 00454EDC  38 03 DF 98 */	addi r0, r3, __vt__Q23PSM19TrackOnDirectorBase@l
/* 80457FA0 00454EE0  3C 60 80 4F */	lis r3, __vt__Q23PSM19ActorDirector_Enemy@ha
/* 80457FA4 00454EE4  38 E0 00 00 */	li r7, 0
/* 80457FA8 00454EE8  90 1F 00 00 */	stw r0, 0(r31)
/* 80457FAC 00454EEC  38 C5 DF 24 */	addi r6, r5, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 80457FB0 00454EF0  C0 42 28 A8 */	lfs f2, lbl_80520C08@sda21(r2)
/* 80457FB4 00454EF4  38 A0 00 01 */	li r5, 1
/* 80457FB8 00454EF8  93 9F 00 48 */	stw r28, 0x48(r31)
/* 80457FBC 00454EFC  38 84 DE 98 */	addi r4, r4, __vt__Q23PSM20ActorDirector_Scaled@l
/* 80457FC0 00454F00  C0 22 28 B0 */	lfs f1, lbl_80520C10@sda21(r2)
/* 80457FC4 00454F04  38 03 DE 50 */	addi r0, r3, __vt__Q23PSM19ActorDirector_Enemy@l
/* 80457FC8 00454F08  93 BF 00 4C */	stw r29, 0x4c(r31)
/* 80457FCC 00454F0C  7F E3 FB 78 */	mr r3, r31
/* 80457FD0 00454F10  C0 02 28 B4 */	lfs f0, lbl_80520C14@sda21(r2)
/* 80457FD4 00454F14  98 FF 00 50 */	stb r7, 0x50(r31)
/* 80457FD8 00454F18  90 DF 00 00 */	stw r6, 0(r31)
/* 80457FDC 00454F1C  D0 5F 00 54 */	stfs f2, 0x54(r31)
/* 80457FE0 00454F20  D0 3F 00 58 */	stfs f1, 0x58(r31)
/* 80457FE4 00454F24  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 80457FE8 00454F28  93 DF 00 60 */	stw r30, 0x60(r31)
/* 80457FEC 00454F2C  98 BF 00 50 */	stb r5, 0x50(r31)
/* 80457FF0 00454F30  90 FF 00 64 */	stw r7, 0x64(r31)
/* 80457FF4 00454F34  90 9F 00 00 */	stw r4, 0(r31)
/* 80457FF8 00454F38  90 1F 00 00 */	stw r0, 0(r31)
/* 80457FFC 00454F3C  90 FF 00 68 */	stw r7, 0x68(r31)
/* 80458000 00454F40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80458004 00454F44  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80458008 00454F48  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8045800C 00454F4C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80458010 00454F50  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80458014 00454F54  7C 08 03 A6 */	mtlr r0
/* 80458018 00454F58  38 21 00 20 */	addi r1, r1, 0x20
/* 8045801C 00454F5C  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM19ActorDirector_EnemyFPCcillUl

.fn __dt__Q23PSM20ActorDirector_ScaledFv, weak
/* 80458020 00454F60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458024 00454F64  7C 08 02 A6 */	mflr r0
/* 80458028 00454F68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045802C 00454F6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458030 00454F70  7C 9F 23 78 */	mr r31, r4
/* 80458034 00454F74  93 C1 00 08 */	stw r30, 8(r1)
/* 80458038 00454F78  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045803C 00454F7C  41 82 00 78 */	beq .L_804580B4
/* 80458040 00454F80  3C 80 80 4F */	lis r4, __vt__Q23PSM20ActorDirector_Scaled@ha
/* 80458044 00454F84  38 04 DE 98 */	addi r0, r4, __vt__Q23PSM20ActorDirector_Scaled@l
/* 80458048 00454F88  90 1E 00 00 */	stw r0, 0(r30)
/* 8045804C 00454F8C  41 82 00 58 */	beq .L_804580A4
/* 80458050 00454F90  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 80458054 00454F94  38 04 DF 24 */	addi r0, r4, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 80458058 00454F98  90 1E 00 00 */	stw r0, 0(r30)
/* 8045805C 00454F9C  41 82 00 48 */	beq .L_804580A4
/* 80458060 00454FA0  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80458064 00454FA4  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 80458068 00454FA8  90 1E 00 00 */	stw r0, 0(r30)
/* 8045806C 00454FAC  41 82 00 38 */	beq .L_804580A4
/* 80458070 00454FB0  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80458074 00454FB4  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80458078 00454FB8  90 1E 00 00 */	stw r0, 0(r30)
/* 8045807C 00454FBC  41 82 00 28 */	beq .L_804580A4
/* 80458080 00454FC0  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80458084 00454FC4  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80458088 00454FC8  90 1E 00 00 */	stw r0, 0(r30)
/* 8045808C 00454FCC  41 82 00 18 */	beq .L_804580A4
/* 80458090 00454FD0  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80458094 00454FD4  38 80 00 00 */	li r4, 0
/* 80458098 00454FD8  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 8045809C 00454FDC  90 1E 00 00 */	stw r0, 0(r30)
/* 804580A0 00454FE0  4B C6 21 5D */	bl __dt__10JADHioNodeFv
.L_804580A4:
/* 804580A4 00454FE4  7F E0 07 35 */	extsh. r0, r31
/* 804580A8 00454FE8  40 81 00 0C */	ble .L_804580B4
/* 804580AC 00454FEC  7F C3 F3 78 */	mr r3, r30
/* 804580B0 00454FF0  4B BC C0 05 */	bl __dl__FPv
.L_804580B4:
/* 804580B4 00454FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804580B8 00454FF8  7F C3 F3 78 */	mr r3, r30
/* 804580BC 00454FFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804580C0 00455000  83 C1 00 08 */	lwz r30, 8(r1)
/* 804580C4 00455004  7C 08 03 A6 */	mtlr r0
/* 804580C8 00455008  38 21 00 10 */	addi r1, r1, 0x10
/* 804580CC 0045500C  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM20ActorDirector_ScaledFv

.fn onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature, global
/* 804580D0 00455010  90 83 00 68 */	stw r4, 0x68(r3)
/* 804580D4 00455014  4E 80 00 20 */	blr 
.endfn onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature

.fn underDirection__Q23PSM19ActorDirector_EnemyFv, global
/* 804580D8 00455018  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 804580DC 0045501C  7C 08 02 A6 */	mflr r0
/* 804580E0 00455020  90 01 00 34 */	stw r0, 0x34(r1)
/* 804580E4 00455024  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 804580E8 00455028  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 804580EC 0045502C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804580F0 00455030  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804580F4 00455034  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804580F8 00455038  7C 7D 1B 78 */	mr r29, r3
/* 804580FC 0045503C  38 00 00 00 */	li r0, 0
/* 80458100 00455040  90 03 00 68 */	stw r0, 0x68(r3)
/* 80458104 00455044  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458108 00455048  C3 E2 28 A8 */	lfs f31, lbl_80520C08@sda21(r2)
/* 8045810C 0045504C  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458110 00455050  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 80458114 00455054  28 00 00 00 */	cmplwi r0, 0
/* 80458118 00455058  40 82 01 14 */	bne .L_8045822C
/* 8045811C 0045505C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458120 00455060  28 00 00 00 */	cmplwi r0, 0
/* 80458124 00455064  40 82 00 18 */	bne .L_8045813C
/* 80458128 00455068  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045812C 0045506C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458130 00455070  38 80 01 D3 */	li r4, 0x1d3
/* 80458134 00455074  4C C6 31 82 */	crclr 6
/* 80458138 00455078  4B BD 25 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045813C:
/* 8045813C 0045507C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458140 00455080  28 1E 00 00 */	cmplwi r30, 0
/* 80458144 00455084  40 82 00 18 */	bne .L_8045815C
/* 80458148 00455088  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045814C 0045508C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458150 00455090  38 80 01 DC */	li r4, 0x1dc
/* 80458154 00455094  4C C6 31 82 */	crclr 6
/* 80458158 00455098  4B BD 24 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045815C:
/* 8045815C 0045509C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458160 004550A0  28 00 00 00 */	cmplwi r0, 0
/* 80458164 004550A4  40 82 00 18 */	bne .L_8045817C
/* 80458168 004550A8  38 7F 00 70 */	addi r3, r31, 0x70
/* 8045816C 004550AC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458170 004550B0  38 80 00 CF */	li r4, 0xcf
/* 80458174 004550B4  4C C6 31 82 */	crclr 6
/* 80458178 004550B8  4B BD 24 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045817C:
/* 8045817C 004550BC  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458180 004550C0  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458184 004550C4  28 1E 00 00 */	cmplwi r30, 0
/* 80458188 004550C8  40 82 00 18 */	bne .L_804581A0
/* 8045818C 004550CC  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458190 004550D0  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458194 004550D4  38 80 00 D1 */	li r4, 0xd1
/* 80458198 004550D8  4C C6 31 82 */	crclr 6
/* 8045819C 004550DC  4B BD 24 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804581A0:
/* 804581A0 004550E0  7F C3 F3 78 */	mr r3, r30
/* 804581A4 004550E4  48 00 F5 71 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 804581A8 004550E8  88 03 00 06 */	lbz r0, 6(r3)
/* 804581AC 004550EC  28 00 00 0D */	cmplwi r0, 0xd
/* 804581B0 004550F0  40 82 00 0C */	bne .L_804581BC
/* 804581B4 004550F4  C3 E2 28 A8 */	lfs f31, lbl_80520C08@sda21(r2)
/* 804581B8 004550F8  48 00 00 74 */	b .L_8045822C
.L_804581BC:
/* 804581BC 004550FC  7F A3 EB 78 */	mr r3, r29
/* 804581C0 00455100  81 9D 00 00 */	lwz r12, 0(r29)
/* 804581C4 00455104  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 804581C8 00455108  7D 89 03 A6 */	mtctr r12
/* 804581CC 0045510C  4E 80 04 21 */	bctrl 
/* 804581D0 00455110  D0 3D 00 5C */	stfs f1, 0x5c(r29)
/* 804581D4 00455114  7F A3 EB 78 */	mr r3, r29
/* 804581D8 00455118  81 9D 00 00 */	lwz r12, 0(r29)
/* 804581DC 0045511C  80 9D 00 68 */	lwz r4, 0x68(r29)
/* 804581E0 00455120  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 804581E4 00455124  7D 89 03 A6 */	mtctr r12
/* 804581E8 00455128  4E 80 04 21 */	bctrl 
/* 804581EC 0045512C  81 9D 00 00 */	lwz r12, 0(r29)
/* 804581F0 00455130  FF E0 08 90 */	fmr f31, f1
/* 804581F4 00455134  7F A3 EB 78 */	mr r3, r29
/* 804581F8 00455138  80 9D 00 68 */	lwz r4, 0x68(r29)
/* 804581FC 0045513C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80458200 00455140  7D 89 03 A6 */	mtctr r12
/* 80458204 00455144  4E 80 04 21 */	bctrl 
/* 80458208 00455148  FC 00 08 90 */	fmr f0, f1
/* 8045820C 0045514C  C0 3D 00 5C */	lfs f1, 0x5c(r29)
/* 80458210 00455150  FC 40 F8 90 */	fmr f2, f31
/* 80458214 00455154  C0 82 28 B0 */	lfs f4, lbl_80520C10@sda21(r2)
/* 80458218 00455158  C0 A2 28 A8 */	lfs f5, lbl_80520C08@sda21(r2)
/* 8045821C 0045515C  38 60 00 00 */	li r3, 0
/* 80458220 00455160  FC 60 00 90 */	fmr f3, f0
/* 80458224 00455164  4B C6 20 21 */	bl linearTransform__7JALCalcFfffffb
/* 80458228 00455168  FF E0 08 90 */	fmr f31, f1
.L_8045822C:
/* 8045822C 0045516C  3B C0 00 00 */	li r30, 0
/* 80458230 00455170  48 00 00 44 */	b .L_80458274
.L_80458234:
/* 80458234 00455174  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 80458238 00455178  7C 00 18 40 */	cmplw r0, r3
/* 8045823C 0045517C  41 80 00 18 */	blt .L_80458254
/* 80458240 00455180  38 7F 00 48 */	addi r3, r31, 0x48
/* 80458244 00455184  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458248 00455188  38 80 00 33 */	li r4, 0x33
/* 8045824C 0045518C  4C C6 31 82 */	crclr 6
/* 80458250 00455190  4B BD 23 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458254:
/* 80458254 00455194  80 7D 00 04 */	lwz r3, 4(r29)
/* 80458258 00455198  57 C0 15 BA */	rlwinm r0, r30, 2, 0x16, 0x1d
/* 8045825C 0045519C  FC 20 F8 90 */	fmr f1, f31
/* 80458260 004551A0  80 9D 00 60 */	lwz r4, 0x60(r29)
/* 80458264 004551A4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80458268 004551A8  38 A0 00 00 */	li r5, 0
/* 8045826C 004551AC  4B EE AA DD */	bl fade__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase
/* 80458270 004551B0  3B DE 00 01 */	addi r30, r30, 1
.L_80458274:
/* 80458274 004551B4  88 7D 00 41 */	lbz r3, 0x41(r29)
/* 80458278 004551B8  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8045827C 004551BC  7C 00 18 40 */	cmplw r0, r3
/* 80458280 004551C0  41 80 FF B4 */	blt .L_80458234
/* 80458284 004551C4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80458288 004551C8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8045828C 004551CC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80458290 004551D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80458294 004551D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80458298 004551D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8045829C 004551DC  7C 08 03 A6 */	mtlr r0
/* 804582A0 004551E0  38 21 00 30 */	addi r1, r1, 0x30
/* 804582A4 004551E4  4E 80 00 20 */	blr 
.endfn underDirection__Q23PSM19ActorDirector_EnemyFv

.fn getVolZeroDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase, global
/* 804582A8 004551E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804582AC 004551EC  7C 08 02 A6 */	mflr r0
/* 804582B0 004551F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 804582B4 004551F4  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 804582B8 004551F8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 804582BC 004551FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804582C0 00455200  7D 89 03 A6 */	mtctr r12
/* 804582C4 00455204  4E 80 04 21 */	bctrl 
/* 804582C8 00455208  38 03 FF FE */	addi r0, r3, -2
/* 804582CC 0045520C  3C 60 80 4A */	lis r3, cVolZeroDist_Battle__Q23PSM11CreaturePrm@ha
/* 804582D0 00455210  54 00 10 3A */	slwi r0, r0, 2
/* 804582D4 00455214  38 63 E1 90 */	addi r3, r3, cVolZeroDist_Battle__Q23PSM11CreaturePrm@l
/* 804582D8 00455218  7C 23 04 2E */	lfsx f1, r3, r0
/* 804582DC 0045521C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804582E0 00455220  7C 08 03 A6 */	mtlr r0
/* 804582E4 00455224  38 21 00 10 */	addi r1, r1, 0x10
/* 804582E8 00455228  4E 80 00 20 */	blr 
.endfn getVolZeroDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase

.fn getVolMaxDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase, global
/* 804582EC 0045522C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804582F0 00455230  7C 08 02 A6 */	mflr r0
/* 804582F4 00455234  90 01 00 14 */	stw r0, 0x14(r1)
/* 804582F8 00455238  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 804582FC 0045523C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80458300 00455240  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80458304 00455244  7D 89 03 A6 */	mtctr r12
/* 80458308 00455248  4E 80 04 21 */	bctrl 
/* 8045830C 0045524C  38 03 FF FE */	addi r0, r3, -2
/* 80458310 00455250  3C 60 80 4A */	lis r3, cVolMaxDist_Battle__Q23PSM11CreaturePrm@ha
/* 80458314 00455254  54 00 10 3A */	slwi r0, r0, 2
/* 80458318 00455258  38 63 E1 58 */	addi r3, r3, cVolMaxDist_Battle__Q23PSM11CreaturePrm@l
/* 8045831C 0045525C  7C 23 04 2E */	lfsx f1, r3, r0
/* 80458320 00455260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458324 00455264  7C 08 03 A6 */	mtlr r0
/* 80458328 00455268  38 21 00 10 */	addi r1, r1, 0x10
/* 8045832C 0045526C  4E 80 00 20 */	blr 
.endfn getVolMaxDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase

.fn getVolZeroDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase, global
/* 80458330 00455270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458334 00455274  7C 08 02 A6 */	mflr r0
/* 80458338 00455278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045833C 0045527C  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80458340 00455280  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80458344 00455284  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80458348 00455288  7D 89 03 A6 */	mtctr r12
/* 8045834C 0045528C  4E 80 04 21 */	bctrl 
/* 80458350 00455290  38 03 FF FE */	addi r0, r3, -2
/* 80458354 00455294  3C 60 80 4A */	lis r3, cVolZeroDist_Kehai__Q23PSM11CreaturePrm@ha
/* 80458358 00455298  54 00 10 3A */	slwi r0, r0, 2
/* 8045835C 0045529C  38 63 E1 74 */	addi r3, r3, cVolZeroDist_Kehai__Q23PSM11CreaturePrm@l
/* 80458360 004552A0  7C 23 04 2E */	lfsx f1, r3, r0
/* 80458364 004552A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458368 004552A8  7C 08 03 A6 */	mtlr r0
/* 8045836C 004552AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80458370 004552B0  4E 80 00 20 */	blr 
.endfn getVolZeroDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase

.fn getVolMaxDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase, global
/* 80458374 004552B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458378 004552B8  7C 08 02 A6 */	mflr r0
/* 8045837C 004552BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458380 004552C0  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80458384 004552C4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80458388 004552C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8045838C 004552CC  7D 89 03 A6 */	mtctr r12
/* 80458390 004552D0  4E 80 04 21 */	bctrl 
/* 80458394 004552D4  38 03 FF FE */	addi r0, r3, -2
/* 80458398 004552D8  3C 60 80 4A */	lis r3, cVolMaxDist_Kehai__Q23PSM11CreaturePrm@ha
/* 8045839C 004552DC  54 00 10 3A */	slwi r0, r0, 2
/* 804583A0 004552E0  38 63 E1 3C */	addi r3, r3, cVolMaxDist_Kehai__Q23PSM11CreaturePrm@l
/* 804583A4 004552E4  7C 23 04 2E */	lfsx f1, r3, r0
/* 804583A8 004552E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804583AC 004552EC  7C 08 03 A6 */	mtlr r0
/* 804583B0 004552F0  38 21 00 10 */	addi r1, r1, 0x10
/* 804583B4 004552F4  4E 80 00 20 */	blr 
.endfn getVolMaxDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase

.fn __ct__Q23PSM17PikAttackDirectorFi, global
/* 804583B8 004552F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804583BC 004552FC  7C 08 02 A6 */	mflr r0
/* 804583C0 00455300  3C A0 80 4A */	lis r5, lbl_8049CE50@ha
/* 804583C4 00455304  90 01 00 14 */	stw r0, 0x14(r1)
/* 804583C8 00455308  38 A5 CE 50 */	addi r5, r5, lbl_8049CE50@l
/* 804583CC 0045530C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804583D0 00455310  7C 7F 1B 78 */	mr r31, r3
/* 804583D4 00455314  4B EE AA E1 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 804583D8 00455318  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804583DC 0045531C  3C 60 80 4F */	lis r3, __vt__Q23PSM16SwitcherDirector@ha
/* 804583E0 00455320  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804583E4 00455324  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804583E8 00455328  90 1F 00 00 */	stw r0, 0(r31)
/* 804583EC 0045532C  38 03 E0 B0 */	addi r0, r3, __vt__Q23PSM16SwitcherDirector@l
/* 804583F0 00455330  3C 60 80 4F */	lis r3, __vt__Q23PSM17PikAttackDirector@ha
/* 804583F4 00455334  38 C4 DF 98 */	addi r6, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804583F8 00455338  90 1F 00 00 */	stw r0, 0(r31)
/* 804583FC 0045533C  38 A0 00 64 */	li r5, 0x64
/* 80458400 00455340  38 80 00 00 */	li r4, 0
/* 80458404 00455344  38 03 DD 88 */	addi r0, r3, __vt__Q23PSM17PikAttackDirector@l
/* 80458408 00455348  90 DF 00 00 */	stw r6, 0(r31)
/* 8045840C 0045534C  7F E3 FB 78 */	mr r3, r31
/* 80458410 00455350  90 BF 00 48 */	stw r5, 0x48(r31)
/* 80458414 00455354  90 BF 00 4C */	stw r5, 0x4c(r31)
/* 80458418 00455358  98 9F 00 50 */	stb r4, 0x50(r31)
/* 8045841C 0045535C  90 1F 00 00 */	stw r0, 0(r31)
/* 80458420 00455360  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80458424 00455364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458428 00455368  7C 08 03 A6 */	mtlr r0
/* 8045842C 0045536C  38 21 00 10 */	addi r1, r1, 0x10
/* 80458430 00455370  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM17PikAttackDirectorFi

.fn __ct__Q23PSM13ExiteDirectorFi, global
/* 80458434 00455374  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458438 00455378  7C 08 02 A6 */	mflr r0
/* 8045843C 0045537C  3C A0 80 4A */	lis r5, lbl_8049CE5C@ha
/* 80458440 00455380  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458444 00455384  38 A5 CE 5C */	addi r5, r5, lbl_8049CE5C@l
/* 80458448 00455388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045844C 0045538C  7C 7F 1B 78 */	mr r31, r3
/* 80458450 00455390  4B EE AA 65 */	bl __ct__Q28PSSystem12DirectorBaseFiPCc
/* 80458454 00455394  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80458458 00455398  3C 60 80 4F */	lis r3, __vt__Q23PSM16SwitcherDirector@ha
/* 8045845C 0045539C  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80458460 004553A0  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80458464 004553A4  90 1F 00 00 */	stw r0, 0(r31)
/* 80458468 004553A8  38 03 E0 B0 */	addi r0, r3, __vt__Q23PSM16SwitcherDirector@l
/* 8045846C 004553AC  3C 60 80 4F */	lis r3, __vt__Q23PSM13ExiteDirector@ha
/* 80458470 004553B0  38 C4 DF 98 */	addi r6, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 80458474 004553B4  90 1F 00 00 */	stw r0, 0(r31)
/* 80458478 004553B8  38 A0 00 64 */	li r5, 0x64
/* 8045847C 004553BC  38 80 00 00 */	li r4, 0
/* 80458480 004553C0  38 03 DD 50 */	addi r0, r3, __vt__Q23PSM13ExiteDirector@l
/* 80458484 004553C4  90 DF 00 00 */	stw r6, 0(r31)
/* 80458488 004553C8  7F E3 FB 78 */	mr r3, r31
/* 8045848C 004553CC  90 BF 00 48 */	stw r5, 0x48(r31)
/* 80458490 004553D0  90 BF 00 4C */	stw r5, 0x4c(r31)
/* 80458494 004553D4  98 9F 00 50 */	stb r4, 0x50(r31)
/* 80458498 004553D8  90 1F 00 00 */	stw r0, 0(r31)
/* 8045849C 004553DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804584A0 004553E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804584A4 004553E4  7C 08 03 A6 */	mtlr r0
/* 804584A8 004553E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804584AC 004553EC  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM13ExiteDirectorFi

.fn __ct__Q23PSM15DirectorUpdatorFPQ28PSSystem12DirectorBaseUcQ33PSM15DirectorUpdator4Type, global
/* 804584B0 004553F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804584B4 004553F4  7C 08 02 A6 */	mflr r0
/* 804584B8 004553F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804584BC 004553FC  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 804584C0 00455400  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804584C4 00455404  7C 7F 1B 78 */	mr r31, r3
/* 804584C8 00455408  98 A3 00 00 */	stb r5, 0(r3)
/* 804584CC 0045540C  38 60 00 00 */	li r3, 0
/* 804584D0 00455410  90 DF 00 04 */	stw r6, 4(r31)
/* 804584D4 00455414  98 7F 00 08 */	stb r3, 8(r31)
/* 804584D8 00455418  98 7F 00 09 */	stb r3, 9(r31)
/* 804584DC 0045541C  90 9F 00 0C */	stw r4, 0xc(r31)
/* 804584E0 00455420  40 82 00 20 */	bne .L_80458500
/* 804584E4 00455424  3C 60 80 4A */	lis r3, lbl_8049CDBC@ha
/* 804584E8 00455428  3C A0 80 4A */	lis r5, lbl_8049CDD4@ha
/* 804584EC 0045542C  38 63 CD BC */	addi r3, r3, lbl_8049CDBC@l
/* 804584F0 00455430  38 80 02 BA */	li r4, 0x2ba
/* 804584F4 00455434  38 A5 CD D4 */	addi r5, r5, lbl_8049CDD4@l
/* 804584F8 00455438  4C C6 31 82 */	crclr 6
/* 804584FC 0045543C  4B BD 21 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458500:
/* 80458500 00455440  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458504 00455444  7F E3 FB 78 */	mr r3, r31
/* 80458508 00455448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045850C 0045544C  7C 08 03 A6 */	mtlr r0
/* 80458510 00455450  38 21 00 10 */	addi r1, r1, 0x10
/* 80458514 00455454  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM15DirectorUpdatorFPQ28PSSystem12DirectorBaseUcQ33PSM15DirectorUpdator4Type

.fn directOn__Q23PSM15DirectorUpdatorFUc, global
/* 80458518 00455458  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8045851C 0045545C  38 80 00 01 */	li r4, 1
/* 80458520 00455460  88 A3 00 09 */	lbz r5, 9(r3)
/* 80458524 00455464  7C 84 00 30 */	slw r4, r4, r0
/* 80458528 00455468  7C A0 20 39 */	and. r0, r5, r4
/* 8045852C 0045546C  4C 82 00 20 */	bnelr 
/* 80458530 00455470  88 03 00 08 */	lbz r0, 8(r3)
/* 80458534 00455474  7C 00 23 78 */	or r0, r0, r4
/* 80458538 00455478  98 03 00 08 */	stb r0, 8(r3)
/* 8045853C 0045547C  88 03 00 09 */	lbz r0, 9(r3)
/* 80458540 00455480  7C 00 23 78 */	or r0, r0, r4
/* 80458544 00455484  98 03 00 09 */	stb r0, 9(r3)
/* 80458548 00455488  4E 80 00 20 */	blr 
.endfn directOn__Q23PSM15DirectorUpdatorFUc

.fn directOff__Q23PSM15DirectorUpdatorFUc, global
/* 8045854C 0045548C  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 80458550 00455490  38 80 00 01 */	li r4, 1
/* 80458554 00455494  88 A3 00 09 */	lbz r5, 9(r3)
/* 80458558 00455498  7C 84 00 30 */	slw r4, r4, r0
/* 8045855C 0045549C  7C A0 20 39 */	and. r0, r5, r4
/* 80458560 004554A0  4C 82 00 20 */	bnelr 
/* 80458564 004554A4  88 03 00 08 */	lbz r0, 8(r3)
/* 80458568 004554A8  7C 00 20 78 */	andc r0, r0, r4
/* 8045856C 004554AC  98 03 00 08 */	stb r0, 8(r3)
/* 80458570 004554B0  88 03 00 09 */	lbz r0, 9(r3)
/* 80458574 004554B4  7C 00 23 78 */	or r0, r0, r4
/* 80458578 004554B8  98 03 00 09 */	stb r0, 9(r3)
/* 8045857C 004554BC  4E 80 00 20 */	blr 
.endfn directOff__Q23PSM15DirectorUpdatorFUc

.fn frameEndWork__Q23PSM15DirectorUpdatorFv, global
/* 80458580 004554C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458584 004554C4  7C 08 02 A6 */	mflr r0
/* 80458588 004554C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045858C 004554CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458590 004554D0  7C 7F 1B 78 */	mr r31, r3
/* 80458594 004554D4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80458598 004554D8  28 03 00 00 */	cmplwi r3, 0
/* 8045859C 004554DC  41 82 00 FC */	beq .L_80458698
/* 804585A0 004554E0  80 1F 00 04 */	lwz r0, 4(r31)
/* 804585A4 004554E4  38 E0 00 00 */	li r7, 0
/* 804585A8 004554E8  2C 00 00 01 */	cmpwi r0, 1
/* 804585AC 004554EC  41 82 00 54 */	beq .L_80458600
/* 804585B0 004554F0  40 80 00 90 */	bge .L_80458640
/* 804585B4 004554F4  2C 00 00 00 */	cmpwi r0, 0
/* 804585B8 004554F8  40 80 00 08 */	bge .L_804585C0
/* 804585BC 004554FC  48 00 00 84 */	b .L_80458640
.L_804585C0:
/* 804585C0 00455500  88 DF 00 00 */	lbz r6, 0(r31)
/* 804585C4 00455504  39 00 00 00 */	li r8, 0
/* 804585C8 00455508  38 80 00 01 */	li r4, 1
/* 804585CC 0045550C  48 00 00 24 */	b .L_804585F0
.L_804585D0:
/* 804585D0 00455510  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 804585D4 00455514  88 BF 00 08 */	lbz r5, 8(r31)
/* 804585D8 00455518  7C 80 00 30 */	slw r0, r4, r0
/* 804585DC 0045551C  7C A0 00 39 */	and. r0, r5, r0
/* 804585E0 00455520  41 82 00 0C */	beq .L_804585EC
/* 804585E4 00455524  38 E0 00 01 */	li r7, 1
/* 804585E8 00455528  48 00 00 58 */	b .L_80458640
.L_804585EC:
/* 804585EC 0045552C  39 08 00 01 */	addi r8, r8, 1
.L_804585F0:
/* 804585F0 00455530  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 804585F4 00455534  7C 00 30 40 */	cmplw r0, r6
/* 804585F8 00455538  41 80 FF D8 */	blt .L_804585D0
/* 804585FC 0045553C  48 00 00 44 */	b .L_80458640
.L_80458600:
/* 80458600 00455540  88 DF 00 00 */	lbz r6, 0(r31)
/* 80458604 00455544  38 E0 00 01 */	li r7, 1
/* 80458608 00455548  39 00 00 00 */	li r8, 0
/* 8045860C 0045554C  38 80 00 01 */	li r4, 1
/* 80458610 00455550  48 00 00 24 */	b .L_80458634
.L_80458614:
/* 80458614 00455554  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 80458618 00455558  88 BF 00 08 */	lbz r5, 8(r31)
/* 8045861C 0045555C  7C 80 00 30 */	slw r0, r4, r0
/* 80458620 00455560  7C A0 00 39 */	and. r0, r5, r0
/* 80458624 00455564  40 82 00 0C */	bne .L_80458630
/* 80458628 00455568  38 E0 00 00 */	li r7, 0
/* 8045862C 0045556C  48 00 00 14 */	b .L_80458640
.L_80458630:
/* 80458630 00455570  39 08 00 01 */	addi r8, r8, 1
.L_80458634:
/* 80458634 00455574  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 80458638 00455578  7C 00 30 40 */	cmplw r0, r6
/* 8045863C 0045557C  41 80 FF D8 */	blt .L_80458614
.L_80458640:
/* 80458640 00455580  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 80458644 00455584  41 82 00 28 */	beq .L_8045866C
/* 80458648 00455588  4B EE AA 81 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 8045864C 0045558C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80458650 00455590  40 82 00 3C */	bne .L_8045868C
/* 80458654 00455594  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80458658 00455598  81 83 00 00 */	lwz r12, 0(r3)
/* 8045865C 0045559C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80458660 004555A0  7D 89 03 A6 */	mtctr r12
/* 80458664 004555A4  4E 80 04 21 */	bctrl 
/* 80458668 004555A8  48 00 00 24 */	b .L_8045868C
.L_8045866C:
/* 8045866C 004555AC  4B EE AA 5D */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 80458670 004555B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80458674 004555B4  41 82 00 18 */	beq .L_8045868C
/* 80458678 004555B8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8045867C 004555BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80458680 004555C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80458684 004555C4  7D 89 03 A6 */	mtctr r12
/* 80458688 004555C8  4E 80 04 21 */	bctrl 
.L_8045868C:
/* 8045868C 004555CC  38 00 00 00 */	li r0, 0
/* 80458690 004555D0  98 1F 00 08 */	stb r0, 8(r31)
/* 80458694 004555D4  98 1F 00 09 */	stb r0, 9(r31)
.L_80458698:
/* 80458698 004555D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045869C 004555DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804586A0 004555E0  7C 08 03 A6 */	mtlr r0
/* 804586A4 004555E4  38 21 00 10 */	addi r1, r1, 0x10
/* 804586A8 004555E8  4E 80 00 20 */	blr 
.endfn frameEndWork__Q23PSM15DirectorUpdatorFv

.fn PSMGetBattleDirector__FUc, global
/* 804586AC 004555EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804586B0 004555F0  7C 08 02 A6 */	mflr r0
/* 804586B4 004555F4  3C 80 80 4A */	lis r4, lbl_8049CD98@ha
/* 804586B8 004555F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 804586BC 004555FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804586C0 00455600  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804586C4 00455604  3B C4 CD 98 */	addi r30, r4, lbl_8049CD98@l
/* 804586C8 00455608  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804586CC 0045560C  93 81 00 10 */	stw r28, 0x10(r1)
/* 804586D0 00455610  7C 7C 1B 78 */	mr r28, r3
/* 804586D4 00455614  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804586D8 00455618  28 00 00 00 */	cmplwi r0, 0
/* 804586DC 0045561C  40 82 00 18 */	bne .L_804586F4
/* 804586E0 00455620  38 7E 00 64 */	addi r3, r30, 0x64
/* 804586E4 00455624  38 BE 00 3C */	addi r5, r30, 0x3c
/* 804586E8 00455628  38 80 01 D3 */	li r4, 0x1d3
/* 804586EC 0045562C  4C C6 31 82 */	crclr 6
/* 804586F0 00455630  4B BD 1F 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804586F4:
/* 804586F4 00455634  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 804586F8 00455638  28 1D 00 00 */	cmplwi r29, 0
/* 804586FC 0045563C  40 82 00 18 */	bne .L_80458714
/* 80458700 00455640  38 7E 00 64 */	addi r3, r30, 0x64
/* 80458704 00455644  38 BE 00 3C */	addi r5, r30, 0x3c
/* 80458708 00455648  38 80 01 DC */	li r4, 0x1dc
/* 8045870C 0045564C  4C C6 31 82 */	crclr 6
/* 80458710 00455650  4B BD 1F 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458714:
/* 80458714 00455654  80 1D 00 04 */	lwz r0, 4(r29)
/* 80458718 00455658  28 00 00 00 */	cmplwi r0, 0
/* 8045871C 0045565C  40 82 00 18 */	bne .L_80458734
/* 80458720 00455660  38 7E 00 70 */	addi r3, r30, 0x70
/* 80458724 00455664  38 BE 00 3C */	addi r5, r30, 0x3c
/* 80458728 00455668  38 80 00 C7 */	li r4, 0xc7
/* 8045872C 0045566C  4C C6 31 82 */	crclr 6
/* 80458730 00455670  4B BD 1F 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458734:
/* 80458734 00455674  80 7D 00 04 */	lwz r3, 4(r29)
/* 80458738 00455678  80 63 00 04 */	lwz r3, 4(r3)
/* 8045873C 0045567C  28 03 00 00 */	cmplwi r3, 0
/* 80458740 00455680  40 82 00 0C */	bne .L_8045874C
/* 80458744 00455684  3B A0 00 00 */	li r29, 0
/* 80458748 00455688  48 00 00 0C */	b .L_80458754
.L_8045874C:
/* 8045874C 0045568C  4B ED CF 35 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 80458750 00455690  7C 7D 1B 78 */	mr r29, r3
.L_80458754:
/* 80458754 00455694  28 1D 00 00 */	cmplwi r29, 0
/* 80458758 00455698  40 82 00 0C */	bne .L_80458764
/* 8045875C 0045569C  38 60 00 00 */	li r3, 0
/* 80458760 004556A0  48 00 00 74 */	b .L_804587D4
.L_80458764:
/* 80458764 004556A4  7F A3 EB 78 */	mr r3, r29
/* 80458768 004556A8  3B E0 00 00 */	li r31, 0
/* 8045876C 004556AC  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80458770 004556B0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80458774 004556B4  7D 89 03 A6 */	mtctr r12
/* 80458778 004556B8  4E 80 04 21 */	bctrl 
/* 8045877C 004556BC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80458780 004556C0  28 00 00 02 */	cmplwi r0, 2
/* 80458784 004556C4  41 82 00 24 */	beq .L_804587A8
/* 80458788 004556C8  7F A3 EB 78 */	mr r3, r29
/* 8045878C 004556CC  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 80458790 004556D0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80458794 004556D4  7D 89 03 A6 */	mtctr r12
/* 80458798 004556D8  4E 80 04 21 */	bctrl 
/* 8045879C 004556DC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 804587A0 004556E0  28 00 00 04 */	cmplwi r0, 4
/* 804587A4 004556E4  40 82 00 08 */	bne .L_804587AC
.L_804587A8:
/* 804587A8 004556E8  3B E0 00 01 */	li r31, 1
.L_804587AC:
/* 804587AC 004556EC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 804587B0 004556F0  40 82 00 18 */	bne .L_804587C8
/* 804587B4 004556F4  38 7E 00 24 */	addi r3, r30, 0x24
/* 804587B8 004556F8  38 BE 00 3C */	addi r5, r30, 0x3c
/* 804587BC 004556FC  38 80 03 2A */	li r4, 0x32a
/* 804587C0 00455700  4C C6 31 82 */	crclr 6
/* 804587C4 00455704  4B BD 1E 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804587C8:
/* 804587C8 00455708  7F A3 EB 78 */	mr r3, r29
/* 804587CC 0045570C  7F 84 E3 78 */	mr r4, r28
/* 804587D0 00455710  4B ED A3 AD */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
.L_804587D4:
/* 804587D4 00455714  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804587D8 00455718  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804587DC 0045571C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804587E0 00455720  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804587E4 00455724  83 81 00 10 */	lwz r28, 0x10(r1)
/* 804587E8 00455728  7C 08 03 A6 */	mtlr r0
/* 804587EC 0045572C  38 21 00 20 */	addi r1, r1, 0x20
/* 804587F0 00455730  4E 80 00 20 */	blr 
.endfn PSMGetBattleDirector__FUc

.fn PSMGetKehaiD__Fv, global
/* 804587F4 00455734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804587F8 00455738  7C 08 02 A6 */	mflr r0
/* 804587FC 0045573C  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458800 00455740  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458804 00455744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458808 00455748  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 8045880C 0045574C  93 C1 00 08 */	stw r30, 8(r1)
/* 80458810 00455750  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458814 00455754  28 00 00 00 */	cmplwi r0, 0
/* 80458818 00455758  40 82 00 18 */	bne .L_80458830
/* 8045881C 0045575C  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458820 00455760  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458824 00455764  38 80 01 D3 */	li r4, 0x1d3
/* 80458828 00455768  4C C6 31 82 */	crclr 6
/* 8045882C 0045576C  4B BD 1E 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458830:
/* 80458830 00455770  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458834 00455774  28 1E 00 00 */	cmplwi r30, 0
/* 80458838 00455778  40 82 00 18 */	bne .L_80458850
/* 8045883C 0045577C  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458840 00455780  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458844 00455784  38 80 01 DC */	li r4, 0x1dc
/* 80458848 00455788  4C C6 31 82 */	crclr 6
/* 8045884C 0045578C  4B BD 1D F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458850:
/* 80458850 00455790  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458854 00455794  28 00 00 00 */	cmplwi r0, 0
/* 80458858 00455798  40 82 00 18 */	bne .L_80458870
/* 8045885C 0045579C  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458860 004557A0  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458864 004557A4  38 80 00 CF */	li r4, 0xcf
/* 80458868 004557A8  4C C6 31 82 */	crclr 6
/* 8045886C 004557AC  4B BD 1D D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458870:
/* 80458870 004557B0  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458874 004557B4  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458878 004557B8  28 1E 00 00 */	cmplwi r30, 0
/* 8045887C 004557BC  40 82 00 18 */	bne .L_80458894
/* 80458880 004557C0  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458884 004557C4  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458888 004557C8  38 80 00 D1 */	li r4, 0xd1
/* 8045888C 004557CC  4C C6 31 82 */	crclr 6
/* 80458890 004557D0  4B BD 1D B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458894:
/* 80458894 004557D4  7F C3 F3 78 */	mr r3, r30
/* 80458898 004557D8  48 00 EE 7D */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 8045889C 004557DC  88 03 00 06 */	lbz r0, 6(r3)
/* 804588A0 004557E0  28 00 00 07 */	cmplwi r0, 7
/* 804588A4 004557E4  40 82 00 24 */	bne .L_804588C8
/* 804588A8 004557E8  4B ED F4 01 */	bl PSGetDirectedMainBgm__Fv
/* 804588AC 004557EC  28 03 00 00 */	cmplwi r3, 0
/* 804588B0 004557F0  41 82 00 10 */	beq .L_804588C0
/* 804588B4 004557F4  38 80 00 01 */	li r4, 1
/* 804588B8 004557F8  4B ED A2 C5 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 804588BC 004557FC  48 00 00 28 */	b .L_804588E4
.L_804588C0:
/* 804588C0 00455800  38 60 00 00 */	li r3, 0
/* 804588C4 00455804  48 00 00 20 */	b .L_804588E4
.L_804588C8:
/* 804588C8 00455808  4B ED F3 E1 */	bl PSGetDirectedMainBgm__Fv
/* 804588CC 0045580C  28 03 00 00 */	cmplwi r3, 0
/* 804588D0 00455810  41 82 00 10 */	beq .L_804588E0
/* 804588D4 00455814  38 80 00 02 */	li r4, 2
/* 804588D8 00455818  4B ED A2 A5 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 804588DC 0045581C  48 00 00 08 */	b .L_804588E4
.L_804588E0:
/* 804588E0 00455820  38 60 00 00 */	li r3, 0
.L_804588E4:
/* 804588E4 00455824  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804588E8 00455828  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804588EC 0045582C  83 C1 00 08 */	lwz r30, 8(r1)
/* 804588F0 00455830  7C 08 03 A6 */	mtlr r0
/* 804588F4 00455834  38 21 00 10 */	addi r1, r1, 0x10
/* 804588F8 00455838  4E 80 00 20 */	blr 
.endfn PSMGetKehaiD__Fv

.fn PSMGetBattleD__Fv, global
/* 804588FC 0045583C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458900 00455840  7C 08 02 A6 */	mflr r0
/* 80458904 00455844  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458908 00455848  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045890C 0045584C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458910 00455850  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458914 00455854  93 C1 00 08 */	stw r30, 8(r1)
/* 80458918 00455858  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8045891C 0045585C  28 00 00 00 */	cmplwi r0, 0
/* 80458920 00455860  40 82 00 18 */	bne .L_80458938
/* 80458924 00455864  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458928 00455868  38 BF 00 3C */	addi r5, r31, 0x3c
/* 8045892C 0045586C  38 80 01 D3 */	li r4, 0x1d3
/* 80458930 00455870  4C C6 31 82 */	crclr 6
/* 80458934 00455874  4B BD 1D 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458938:
/* 80458938 00455878  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8045893C 0045587C  28 1E 00 00 */	cmplwi r30, 0
/* 80458940 00455880  40 82 00 18 */	bne .L_80458958
/* 80458944 00455884  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458948 00455888  38 BF 00 3C */	addi r5, r31, 0x3c
/* 8045894C 0045588C  38 80 01 DC */	li r4, 0x1dc
/* 80458950 00455890  4C C6 31 82 */	crclr 6
/* 80458954 00455894  4B BD 1C ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458958:
/* 80458958 00455898  80 1E 00 04 */	lwz r0, 4(r30)
/* 8045895C 0045589C  28 00 00 00 */	cmplwi r0, 0
/* 80458960 004558A0  40 82 00 18 */	bne .L_80458978
/* 80458964 004558A4  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458968 004558A8  38 BF 00 3C */	addi r5, r31, 0x3c
/* 8045896C 004558AC  38 80 00 CF */	li r4, 0xcf
/* 80458970 004558B0  4C C6 31 82 */	crclr 6
/* 80458974 004558B4  4B BD 1C CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458978:
/* 80458978 004558B8  80 7E 00 04 */	lwz r3, 4(r30)
/* 8045897C 004558BC  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458980 004558C0  28 1E 00 00 */	cmplwi r30, 0
/* 80458984 004558C4  40 82 00 18 */	bne .L_8045899C
/* 80458988 004558C8  38 7F 00 70 */	addi r3, r31, 0x70
/* 8045898C 004558CC  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458990 004558D0  38 80 00 D1 */	li r4, 0xd1
/* 80458994 004558D4  4C C6 31 82 */	crclr 6
/* 80458998 004558D8  4B BD 1C A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045899C:
/* 8045899C 004558DC  7F C3 F3 78 */	mr r3, r30
/* 804589A0 004558E0  48 00 ED 75 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 804589A4 004558E4  88 03 00 06 */	lbz r0, 6(r3)
/* 804589A8 004558E8  28 00 00 07 */	cmplwi r0, 7
/* 804589AC 004558EC  40 82 00 24 */	bne .L_804589D0
/* 804589B0 004558F0  4B ED F2 F9 */	bl PSGetDirectedMainBgm__Fv
/* 804589B4 004558F4  28 03 00 00 */	cmplwi r3, 0
/* 804589B8 004558F8  41 82 00 10 */	beq .L_804589C8
/* 804589BC 004558FC  38 80 00 02 */	li r4, 2
/* 804589C0 00455900  4B ED A1 BD */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 804589C4 00455904  48 00 00 28 */	b .L_804589EC
.L_804589C8:
/* 804589C8 00455908  38 60 00 00 */	li r3, 0
/* 804589CC 0045590C  48 00 00 20 */	b .L_804589EC
.L_804589D0:
/* 804589D0 00455910  4B ED F2 D9 */	bl PSGetDirectedMainBgm__Fv
/* 804589D4 00455914  28 03 00 00 */	cmplwi r3, 0
/* 804589D8 00455918  41 82 00 10 */	beq .L_804589E8
/* 804589DC 0045591C  38 80 00 03 */	li r4, 3
/* 804589E0 00455920  4B ED A1 9D */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 804589E4 00455924  48 00 00 08 */	b .L_804589EC
.L_804589E8:
/* 804589E8 00455928  38 60 00 00 */	li r3, 0
.L_804589EC:
/* 804589EC 0045592C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804589F0 00455930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804589F4 00455934  83 C1 00 08 */	lwz r30, 8(r1)
/* 804589F8 00455938  7C 08 03 A6 */	mtlr r0
/* 804589FC 0045593C  38 21 00 10 */	addi r1, r1, 0x10
/* 80458A00 00455940  4E 80 00 20 */	blr 
.endfn PSMGetBattleD__Fv

.fn PSMGetEventD__Fv, global
/* 80458A04 00455944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458A08 00455948  7C 08 02 A6 */	mflr r0
/* 80458A0C 0045594C  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458A10 00455950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458A14 00455954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458A18 00455958  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458A1C 0045595C  93 C1 00 08 */	stw r30, 8(r1)
/* 80458A20 00455960  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458A24 00455964  28 00 00 00 */	cmplwi r0, 0
/* 80458A28 00455968  40 82 00 18 */	bne .L_80458A40
/* 80458A2C 0045596C  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458A30 00455970  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458A34 00455974  38 80 01 D3 */	li r4, 0x1d3
/* 80458A38 00455978  4C C6 31 82 */	crclr 6
/* 80458A3C 0045597C  4B BD 1C 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458A40:
/* 80458A40 00455980  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458A44 00455984  28 1E 00 00 */	cmplwi r30, 0
/* 80458A48 00455988  40 82 00 18 */	bne .L_80458A60
/* 80458A4C 0045598C  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458A50 00455990  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458A54 00455994  38 80 01 DC */	li r4, 0x1dc
/* 80458A58 00455998  4C C6 31 82 */	crclr 6
/* 80458A5C 0045599C  4B BD 1B E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458A60:
/* 80458A60 004559A0  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458A64 004559A4  28 00 00 00 */	cmplwi r0, 0
/* 80458A68 004559A8  40 82 00 18 */	bne .L_80458A80
/* 80458A6C 004559AC  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458A70 004559B0  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458A74 004559B4  38 80 00 CF */	li r4, 0xcf
/* 80458A78 004559B8  4C C6 31 82 */	crclr 6
/* 80458A7C 004559BC  4B BD 1B C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458A80:
/* 80458A80 004559C0  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458A84 004559C4  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458A88 004559C8  28 1E 00 00 */	cmplwi r30, 0
/* 80458A8C 004559CC  40 82 00 18 */	bne .L_80458AA4
/* 80458A90 004559D0  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458A94 004559D4  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458A98 004559D8  38 80 00 D1 */	li r4, 0xd1
/* 80458A9C 004559DC  4C C6 31 82 */	crclr 6
/* 80458AA0 004559E0  4B BD 1B A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458AA4:
/* 80458AA4 004559E4  7F C3 F3 78 */	mr r3, r30
/* 80458AA8 004559E8  48 00 EC 6D */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80458AAC 004559EC  88 03 00 06 */	lbz r0, 6(r3)
/* 80458AB0 004559F0  28 00 00 07 */	cmplwi r0, 7
/* 80458AB4 004559F4  40 82 00 24 */	bne .L_80458AD8
/* 80458AB8 004559F8  4B ED F1 F1 */	bl PSGetDirectedMainBgm__Fv
/* 80458ABC 004559FC  28 03 00 00 */	cmplwi r3, 0
/* 80458AC0 00455A00  41 82 00 10 */	beq .L_80458AD0
/* 80458AC4 00455A04  38 80 00 00 */	li r4, 0
/* 80458AC8 00455A08  4B ED A0 B5 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80458ACC 00455A0C  48 00 00 28 */	b .L_80458AF4
.L_80458AD0:
/* 80458AD0 00455A10  38 60 00 00 */	li r3, 0
/* 80458AD4 00455A14  48 00 00 20 */	b .L_80458AF4
.L_80458AD8:
/* 80458AD8 00455A18  4B ED F1 D1 */	bl PSGetDirectedMainBgm__Fv
/* 80458ADC 00455A1C  28 03 00 00 */	cmplwi r3, 0
/* 80458AE0 00455A20  41 82 00 10 */	beq .L_80458AF0
/* 80458AE4 00455A24  38 80 00 00 */	li r4, 0
/* 80458AE8 00455A28  4B ED A0 95 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80458AEC 00455A2C  48 00 00 08 */	b .L_80458AF4
.L_80458AF0:
/* 80458AF0 00455A30  38 60 00 00 */	li r3, 0
.L_80458AF4:
/* 80458AF4 00455A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458AF8 00455A38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80458AFC 00455A3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80458B00 00455A40  7C 08 03 A6 */	mtlr r0
/* 80458B04 00455A44  38 21 00 10 */	addi r1, r1, 0x10
/* 80458B08 00455A48  4E 80 00 20 */	blr 
.endfn PSMGetEventD__Fv

.fn PSMGetOtakaraEventD__Fv, global
/* 80458B0C 00455A4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458B10 00455A50  7C 08 02 A6 */	mflr r0
/* 80458B14 00455A54  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458B18 00455A58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458B1C 00455A5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458B20 00455A60  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458B24 00455A64  93 C1 00 08 */	stw r30, 8(r1)
/* 80458B28 00455A68  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458B2C 00455A6C  28 00 00 00 */	cmplwi r0, 0
/* 80458B30 00455A70  40 82 00 18 */	bne .L_80458B48
/* 80458B34 00455A74  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458B38 00455A78  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458B3C 00455A7C  38 80 01 D3 */	li r4, 0x1d3
/* 80458B40 00455A80  4C C6 31 82 */	crclr 6
/* 80458B44 00455A84  4B BD 1A FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458B48:
/* 80458B48 00455A88  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458B4C 00455A8C  28 1E 00 00 */	cmplwi r30, 0
/* 80458B50 00455A90  40 82 00 18 */	bne .L_80458B68
/* 80458B54 00455A94  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458B58 00455A98  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458B5C 00455A9C  38 80 01 DC */	li r4, 0x1dc
/* 80458B60 00455AA0  4C C6 31 82 */	crclr 6
/* 80458B64 00455AA4  4B BD 1A DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458B68:
/* 80458B68 00455AA8  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458B6C 00455AAC  28 00 00 00 */	cmplwi r0, 0
/* 80458B70 00455AB0  40 82 00 18 */	bne .L_80458B88
/* 80458B74 00455AB4  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458B78 00455AB8  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458B7C 00455ABC  38 80 00 CF */	li r4, 0xcf
/* 80458B80 00455AC0  4C C6 31 82 */	crclr 6
/* 80458B84 00455AC4  4B BD 1A BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458B88:
/* 80458B88 00455AC8  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458B8C 00455ACC  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458B90 00455AD0  28 1E 00 00 */	cmplwi r30, 0
/* 80458B94 00455AD4  40 82 00 18 */	bne .L_80458BAC
/* 80458B98 00455AD8  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458B9C 00455ADC  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458BA0 00455AE0  38 80 00 D1 */	li r4, 0xd1
/* 80458BA4 00455AE4  4C C6 31 82 */	crclr 6
/* 80458BA8 00455AE8  4B BD 1A 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458BAC:
/* 80458BAC 00455AEC  7F C3 F3 78 */	mr r3, r30
/* 80458BB0 00455AF0  48 00 EB 65 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80458BB4 00455AF4  88 03 00 06 */	lbz r0, 6(r3)
/* 80458BB8 00455AF8  28 00 00 07 */	cmplwi r0, 7
/* 80458BBC 00455AFC  41 82 00 24 */	beq .L_80458BE0
/* 80458BC0 00455B00  4B ED F0 E9 */	bl PSGetDirectedMainBgm__Fv
/* 80458BC4 00455B04  28 03 00 00 */	cmplwi r3, 0
/* 80458BC8 00455B08  41 82 00 10 */	beq .L_80458BD8
/* 80458BCC 00455B0C  38 80 00 01 */	li r4, 1
/* 80458BD0 00455B10  4B ED 9F AD */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80458BD4 00455B14  48 00 00 10 */	b .L_80458BE4
.L_80458BD8:
/* 80458BD8 00455B18  38 60 00 00 */	li r3, 0
/* 80458BDC 00455B1C  48 00 00 08 */	b .L_80458BE4
.L_80458BE0:
/* 80458BE0 00455B20  38 60 00 00 */	li r3, 0
.L_80458BE4:
/* 80458BE4 00455B24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458BE8 00455B28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80458BEC 00455B2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80458BF0 00455B30  7C 08 03 A6 */	mtlr r0
/* 80458BF4 00455B34  38 21 00 10 */	addi r1, r1, 0x10
/* 80458BF8 00455B38  4E 80 00 20 */	blr 
.endfn PSMGetOtakaraEventD__Fv

.fn PSMGetGroundD__Fv, global
/* 80458BFC 00455B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458C00 00455B40  7C 08 02 A6 */	mflr r0
/* 80458C04 00455B44  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458C08 00455B48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458C0C 00455B4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458C10 00455B50  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458C14 00455B54  93 C1 00 08 */	stw r30, 8(r1)
/* 80458C18 00455B58  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458C1C 00455B5C  28 00 00 00 */	cmplwi r0, 0
/* 80458C20 00455B60  40 82 00 18 */	bne .L_80458C38
/* 80458C24 00455B64  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458C28 00455B68  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458C2C 00455B6C  38 80 01 D3 */	li r4, 0x1d3
/* 80458C30 00455B70  4C C6 31 82 */	crclr 6
/* 80458C34 00455B74  4B BD 1A 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458C38:
/* 80458C38 00455B78  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458C3C 00455B7C  28 1E 00 00 */	cmplwi r30, 0
/* 80458C40 00455B80  40 82 00 18 */	bne .L_80458C58
/* 80458C44 00455B84  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458C48 00455B88  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458C4C 00455B8C  38 80 01 DC */	li r4, 0x1dc
/* 80458C50 00455B90  4C C6 31 82 */	crclr 6
/* 80458C54 00455B94  4B BD 19 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458C58:
/* 80458C58 00455B98  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458C5C 00455B9C  28 00 00 00 */	cmplwi r0, 0
/* 80458C60 00455BA0  40 82 00 18 */	bne .L_80458C78
/* 80458C64 00455BA4  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458C68 00455BA8  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458C6C 00455BAC  38 80 00 CF */	li r4, 0xcf
/* 80458C70 00455BB0  4C C6 31 82 */	crclr 6
/* 80458C74 00455BB4  4B BD 19 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458C78:
/* 80458C78 00455BB8  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458C7C 00455BBC  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458C80 00455BC0  28 1E 00 00 */	cmplwi r30, 0
/* 80458C84 00455BC4  40 82 00 18 */	bne .L_80458C9C
/* 80458C88 00455BC8  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458C8C 00455BCC  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458C90 00455BD0  38 80 00 D1 */	li r4, 0xd1
/* 80458C94 00455BD4  4C C6 31 82 */	crclr 6
/* 80458C98 00455BD8  4B BD 19 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458C9C:
/* 80458C9C 00455BDC  7F C3 F3 78 */	mr r3, r30
/* 80458CA0 00455BE0  48 00 EA 75 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80458CA4 00455BE4  88 03 00 06 */	lbz r0, 6(r3)
/* 80458CA8 00455BE8  28 00 00 07 */	cmplwi r0, 7
/* 80458CAC 00455BEC  41 82 00 C8 */	beq .L_80458D74
/* 80458CB0 00455BF0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458CB4 00455BF4  28 00 00 00 */	cmplwi r0, 0
/* 80458CB8 00455BF8  40 82 00 18 */	bne .L_80458CD0
/* 80458CBC 00455BFC  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458CC0 00455C00  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458CC4 00455C04  38 80 01 D3 */	li r4, 0x1d3
/* 80458CC8 00455C08  4C C6 31 82 */	crclr 6
/* 80458CCC 00455C0C  4B BD 19 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458CD0:
/* 80458CD0 00455C10  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458CD4 00455C14  28 1E 00 00 */	cmplwi r30, 0
/* 80458CD8 00455C18  40 82 00 18 */	bne .L_80458CF0
/* 80458CDC 00455C1C  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458CE0 00455C20  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458CE4 00455C24  38 80 01 DC */	li r4, 0x1dc
/* 80458CE8 00455C28  4C C6 31 82 */	crclr 6
/* 80458CEC 00455C2C  4B BD 19 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458CF0:
/* 80458CF0 00455C30  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458CF4 00455C34  28 00 00 00 */	cmplwi r0, 0
/* 80458CF8 00455C38  40 82 00 18 */	bne .L_80458D10
/* 80458CFC 00455C3C  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458D00 00455C40  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458D04 00455C44  38 80 00 CF */	li r4, 0xcf
/* 80458D08 00455C48  4C C6 31 82 */	crclr 6
/* 80458D0C 00455C4C  4B BD 19 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458D10:
/* 80458D10 00455C50  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458D14 00455C54  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458D18 00455C58  28 1E 00 00 */	cmplwi r30, 0
/* 80458D1C 00455C5C  40 82 00 18 */	bne .L_80458D34
/* 80458D20 00455C60  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458D24 00455C64  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458D28 00455C68  38 80 00 D1 */	li r4, 0xd1
/* 80458D2C 00455C6C  4C C6 31 82 */	crclr 6
/* 80458D30 00455C70  4B BD 19 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458D34:
/* 80458D34 00455C74  7F C3 F3 78 */	mr r3, r30
/* 80458D38 00455C78  48 00 E9 DD */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80458D3C 00455C7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80458D40 00455C80  81 8C 00 08 */	lwz r12, 8(r12)
/* 80458D44 00455C84  7D 89 03 A6 */	mtctr r12
/* 80458D48 00455C88  4E 80 04 21 */	bctrl 
/* 80458D4C 00455C8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80458D50 00455C90  40 82 00 24 */	bne .L_80458D74
/* 80458D54 00455C94  4B ED EF 55 */	bl PSGetDirectedMainBgm__Fv
/* 80458D58 00455C98  28 03 00 00 */	cmplwi r3, 0
/* 80458D5C 00455C9C  41 82 00 10 */	beq .L_80458D6C
/* 80458D60 00455CA0  38 80 00 04 */	li r4, 4
/* 80458D64 00455CA4  4B ED 9E 19 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80458D68 00455CA8  48 00 00 10 */	b .L_80458D78
.L_80458D6C:
/* 80458D6C 00455CAC  38 60 00 00 */	li r3, 0
/* 80458D70 00455CB0  48 00 00 08 */	b .L_80458D78
.L_80458D74:
/* 80458D74 00455CB4  38 60 00 00 */	li r3, 0
.L_80458D78:
/* 80458D78 00455CB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458D7C 00455CBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80458D80 00455CC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80458D84 00455CC4  7C 08 03 A6 */	mtlr r0
/* 80458D88 00455CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80458D8C 00455CCC  4E 80 00 20 */	blr 
.endfn PSMGetGroundD__Fv

.fn PSMGetPikminNumD__Fv, global
/* 80458D90 00455CD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458D94 00455CD4  7C 08 02 A6 */	mflr r0
/* 80458D98 00455CD8  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458D9C 00455CDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458DA0 00455CE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458DA4 00455CE4  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458DA8 00455CE8  93 C1 00 08 */	stw r30, 8(r1)
/* 80458DAC 00455CEC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458DB0 00455CF0  28 00 00 00 */	cmplwi r0, 0
/* 80458DB4 00455CF4  40 82 00 18 */	bne .L_80458DCC
/* 80458DB8 00455CF8  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458DBC 00455CFC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458DC0 00455D00  38 80 01 D3 */	li r4, 0x1d3
/* 80458DC4 00455D04  4C C6 31 82 */	crclr 6
/* 80458DC8 00455D08  4B BD 18 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458DCC:
/* 80458DCC 00455D0C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458DD0 00455D10  28 1E 00 00 */	cmplwi r30, 0
/* 80458DD4 00455D14  40 82 00 18 */	bne .L_80458DEC
/* 80458DD8 00455D18  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458DDC 00455D1C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458DE0 00455D20  38 80 01 DC */	li r4, 0x1dc
/* 80458DE4 00455D24  4C C6 31 82 */	crclr 6
/* 80458DE8 00455D28  4B BD 18 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458DEC:
/* 80458DEC 00455D2C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458DF0 00455D30  28 00 00 00 */	cmplwi r0, 0
/* 80458DF4 00455D34  40 82 00 18 */	bne .L_80458E0C
/* 80458DF8 00455D38  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458DFC 00455D3C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458E00 00455D40  38 80 00 CF */	li r4, 0xcf
/* 80458E04 00455D44  4C C6 31 82 */	crclr 6
/* 80458E08 00455D48  4B BD 18 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458E0C:
/* 80458E0C 00455D4C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458E10 00455D50  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458E14 00455D54  28 1E 00 00 */	cmplwi r30, 0
/* 80458E18 00455D58  40 82 00 18 */	bne .L_80458E30
/* 80458E1C 00455D5C  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458E20 00455D60  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458E24 00455D64  38 80 00 D1 */	li r4, 0xd1
/* 80458E28 00455D68  4C C6 31 82 */	crclr 6
/* 80458E2C 00455D6C  4B BD 18 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458E30:
/* 80458E30 00455D70  7F C3 F3 78 */	mr r3, r30
/* 80458E34 00455D74  48 00 E8 E1 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80458E38 00455D78  88 03 00 06 */	lbz r0, 6(r3)
/* 80458E3C 00455D7C  28 00 00 07 */	cmplwi r0, 7
/* 80458E40 00455D80  41 82 00 24 */	beq .L_80458E64
/* 80458E44 00455D84  4B ED EE 65 */	bl PSGetDirectedMainBgm__Fv
/* 80458E48 00455D88  28 03 00 00 */	cmplwi r3, 0
/* 80458E4C 00455D8C  41 82 00 10 */	beq .L_80458E5C
/* 80458E50 00455D90  38 80 00 05 */	li r4, 5
/* 80458E54 00455D94  4B ED 9D 29 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80458E58 00455D98  48 00 00 10 */	b .L_80458E68
.L_80458E5C:
/* 80458E5C 00455D9C  38 60 00 00 */	li r3, 0
/* 80458E60 00455DA0  48 00 00 08 */	b .L_80458E68
.L_80458E64:
/* 80458E64 00455DA4  38 60 00 00 */	li r3, 0
.L_80458E68:
/* 80458E68 00455DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458E6C 00455DAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80458E70 00455DB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80458E74 00455DB4  7C 08 03 A6 */	mtlr r0
/* 80458E78 00455DB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80458E7C 00455DBC  4E 80 00 20 */	blr 
.endfn PSMGetPikminNumD__Fv

.fn PSMGetDamageD__Fv, global
/* 80458E80 00455DC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458E84 00455DC4  7C 08 02 A6 */	mflr r0
/* 80458E88 00455DC8  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458E8C 00455DCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458E90 00455DD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458E94 00455DD4  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458E98 00455DD8  93 C1 00 08 */	stw r30, 8(r1)
/* 80458E9C 00455DDC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458EA0 00455DE0  28 00 00 00 */	cmplwi r0, 0
/* 80458EA4 00455DE4  40 82 00 18 */	bne .L_80458EBC
/* 80458EA8 00455DE8  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458EAC 00455DEC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458EB0 00455DF0  38 80 01 D3 */	li r4, 0x1d3
/* 80458EB4 00455DF4  4C C6 31 82 */	crclr 6
/* 80458EB8 00455DF8  4B BD 17 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458EBC:
/* 80458EBC 00455DFC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458EC0 00455E00  28 1E 00 00 */	cmplwi r30, 0
/* 80458EC4 00455E04  40 82 00 18 */	bne .L_80458EDC
/* 80458EC8 00455E08  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458ECC 00455E0C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458ED0 00455E10  38 80 01 DC */	li r4, 0x1dc
/* 80458ED4 00455E14  4C C6 31 82 */	crclr 6
/* 80458ED8 00455E18  4B BD 17 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458EDC:
/* 80458EDC 00455E1C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458EE0 00455E20  28 00 00 00 */	cmplwi r0, 0
/* 80458EE4 00455E24  40 82 00 18 */	bne .L_80458EFC
/* 80458EE8 00455E28  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458EEC 00455E2C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458EF0 00455E30  38 80 00 CF */	li r4, 0xcf
/* 80458EF4 00455E34  4C C6 31 82 */	crclr 6
/* 80458EF8 00455E38  4B BD 17 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458EFC:
/* 80458EFC 00455E3C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458F00 00455E40  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458F04 00455E44  28 1E 00 00 */	cmplwi r30, 0
/* 80458F08 00455E48  40 82 00 18 */	bne .L_80458F20
/* 80458F0C 00455E4C  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458F10 00455E50  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80458F14 00455E54  38 80 00 D1 */	li r4, 0xd1
/* 80458F18 00455E58  4C C6 31 82 */	crclr 6
/* 80458F1C 00455E5C  4B BD 17 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458F20:
/* 80458F20 00455E60  7F C3 F3 78 */	mr r3, r30
/* 80458F24 00455E64  48 00 E7 F1 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80458F28 00455E68  88 03 00 06 */	lbz r0, 6(r3)
/* 80458F2C 00455E6C  28 00 00 07 */	cmplwi r0, 7
/* 80458F30 00455E70  41 82 00 24 */	beq .L_80458F54
/* 80458F34 00455E74  4B ED ED 75 */	bl PSGetDirectedMainBgm__Fv
/* 80458F38 00455E78  28 03 00 00 */	cmplwi r3, 0
/* 80458F3C 00455E7C  41 82 00 10 */	beq .L_80458F4C
/* 80458F40 00455E80  38 80 00 06 */	li r4, 6
/* 80458F44 00455E84  4B ED 9C 39 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80458F48 00455E88  48 00 00 10 */	b .L_80458F58
.L_80458F4C:
/* 80458F4C 00455E8C  38 60 00 00 */	li r3, 0
/* 80458F50 00455E90  48 00 00 08 */	b .L_80458F58
.L_80458F54:
/* 80458F54 00455E94  38 60 00 00 */	li r3, 0
.L_80458F58:
/* 80458F58 00455E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80458F5C 00455E9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80458F60 00455EA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80458F64 00455EA4  7C 08 03 A6 */	mtlr r0
/* 80458F68 00455EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80458F6C 00455EAC  4E 80 00 20 */	blr 
.endfn PSMGetDamageD__Fv

.fn PSMGetLifeD__Fv, global
/* 80458F70 00455EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80458F74 00455EB4  7C 08 02 A6 */	mflr r0
/* 80458F78 00455EB8  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 80458F7C 00455EBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80458F80 00455EC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80458F84 00455EC4  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80458F88 00455EC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80458F8C 00455ECC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80458F90 00455ED0  28 00 00 00 */	cmplwi r0, 0
/* 80458F94 00455ED4  40 82 00 18 */	bne .L_80458FAC
/* 80458F98 00455ED8  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458F9C 00455EDC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458FA0 00455EE0  38 80 01 D3 */	li r4, 0x1d3
/* 80458FA4 00455EE4  4C C6 31 82 */	crclr 6
/* 80458FA8 00455EE8  4B BD 16 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458FAC:
/* 80458FAC 00455EEC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80458FB0 00455EF0  28 1E 00 00 */	cmplwi r30, 0
/* 80458FB4 00455EF4  40 82 00 18 */	bne .L_80458FCC
/* 80458FB8 00455EF8  38 7F 00 64 */	addi r3, r31, 0x64
/* 80458FBC 00455EFC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458FC0 00455F00  38 80 01 DC */	li r4, 0x1dc
/* 80458FC4 00455F04  4C C6 31 82 */	crclr 6
/* 80458FC8 00455F08  4B BD 16 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458FCC:
/* 80458FCC 00455F0C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80458FD0 00455F10  28 00 00 00 */	cmplwi r0, 0
/* 80458FD4 00455F14  40 82 00 18 */	bne .L_80458FEC
/* 80458FD8 00455F18  38 7F 00 70 */	addi r3, r31, 0x70
/* 80458FDC 00455F1C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80458FE0 00455F20  38 80 00 CF */	li r4, 0xcf
/* 80458FE4 00455F24  4C C6 31 82 */	crclr 6
/* 80458FE8 00455F28  4B BD 16 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80458FEC:
/* 80458FEC 00455F2C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80458FF0 00455F30  83 C3 00 04 */	lwz r30, 4(r3)
/* 80458FF4 00455F34  28 1E 00 00 */	cmplwi r30, 0
/* 80458FF8 00455F38  40 82 00 18 */	bne .L_80459010
/* 80458FFC 00455F3C  38 7F 00 70 */	addi r3, r31, 0x70
/* 80459000 00455F40  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80459004 00455F44  38 80 00 D1 */	li r4, 0xd1
/* 80459008 00455F48  4C C6 31 82 */	crclr 6
/* 8045900C 00455F4C  4B BD 16 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459010:
/* 80459010 00455F50  7F C3 F3 78 */	mr r3, r30
/* 80459014 00455F54  48 00 E7 01 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80459018 00455F58  88 03 00 06 */	lbz r0, 6(r3)
/* 8045901C 00455F5C  28 00 00 07 */	cmplwi r0, 7
/* 80459020 00455F60  41 82 00 24 */	beq .L_80459044
/* 80459024 00455F64  4B ED EC 85 */	bl PSGetDirectedMainBgm__Fv
/* 80459028 00455F68  28 03 00 00 */	cmplwi r3, 0
/* 8045902C 00455F6C  41 82 00 10 */	beq .L_8045903C
/* 80459030 00455F70  38 80 00 07 */	li r4, 7
/* 80459034 00455F74  4B ED 9B 49 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80459038 00455F78  48 00 00 10 */	b .L_80459048
.L_8045903C:
/* 8045903C 00455F7C  38 60 00 00 */	li r3, 0
/* 80459040 00455F80  48 00 00 08 */	b .L_80459048
.L_80459044:
/* 80459044 00455F84  38 60 00 00 */	li r3, 0
.L_80459048:
/* 80459048 00455F88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045904C 00455F8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459050 00455F90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459054 00455F94  7C 08 03 A6 */	mtlr r0
/* 80459058 00455F98  38 21 00 10 */	addi r1, r1, 0x10
/* 8045905C 00455F9C  4E 80 00 20 */	blr 
.endfn PSMGetLifeD__Fv

.fn PSMGetBeedamaForOrimerD__Fv, global
/* 80459060 00455FA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459064 00455FA4  7C 08 02 A6 */	mflr r0
/* 80459068 00455FA8  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 8045906C 00455FAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459070 00455FB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459074 00455FB4  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80459078 00455FB8  93 C1 00 08 */	stw r30, 8(r1)
/* 8045907C 00455FBC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459080 00455FC0  28 00 00 00 */	cmplwi r0, 0
/* 80459084 00455FC4  40 82 00 18 */	bne .L_8045909C
/* 80459088 00455FC8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045908C 00455FCC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459090 00455FD0  38 80 01 D3 */	li r4, 0x1d3
/* 80459094 00455FD4  4C C6 31 82 */	crclr 6
/* 80459098 00455FD8  4B BD 15 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045909C:
/* 8045909C 00455FDC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 804590A0 00455FE0  28 1E 00 00 */	cmplwi r30, 0
/* 804590A4 00455FE4  40 82 00 18 */	bne .L_804590BC
/* 804590A8 00455FE8  38 7F 00 64 */	addi r3, r31, 0x64
/* 804590AC 00455FEC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804590B0 00455FF0  38 80 01 DC */	li r4, 0x1dc
/* 804590B4 00455FF4  4C C6 31 82 */	crclr 6
/* 804590B8 00455FF8  4B BD 15 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804590BC:
/* 804590BC 00455FFC  80 1E 00 04 */	lwz r0, 4(r30)
/* 804590C0 00456000  28 00 00 00 */	cmplwi r0, 0
/* 804590C4 00456004  40 82 00 18 */	bne .L_804590DC
/* 804590C8 00456008  38 7F 00 70 */	addi r3, r31, 0x70
/* 804590CC 0045600C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804590D0 00456010  38 80 00 CF */	li r4, 0xcf
/* 804590D4 00456014  4C C6 31 82 */	crclr 6
/* 804590D8 00456018  4B BD 15 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804590DC:
/* 804590DC 0045601C  80 7E 00 04 */	lwz r3, 4(r30)
/* 804590E0 00456020  83 C3 00 04 */	lwz r30, 4(r3)
/* 804590E4 00456024  28 1E 00 00 */	cmplwi r30, 0
/* 804590E8 00456028  40 82 00 18 */	bne .L_80459100
/* 804590EC 0045602C  38 7F 00 70 */	addi r3, r31, 0x70
/* 804590F0 00456030  38 BF 00 7C */	addi r5, r31, 0x7c
/* 804590F4 00456034  38 80 00 D1 */	li r4, 0xd1
/* 804590F8 00456038  4C C6 31 82 */	crclr 6
/* 804590FC 0045603C  4B BD 15 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459100:
/* 80459100 00456040  7F C3 F3 78 */	mr r3, r30
/* 80459104 00456044  48 00 E6 11 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 80459108 00456048  88 03 00 06 */	lbz r0, 6(r3)
/* 8045910C 0045604C  28 00 00 07 */	cmplwi r0, 7
/* 80459110 00456050  40 82 00 24 */	bne .L_80459134
/* 80459114 00456054  4B ED EB 95 */	bl PSGetDirectedMainBgm__Fv
/* 80459118 00456058  28 03 00 00 */	cmplwi r3, 0
/* 8045911C 0045605C  41 82 00 10 */	beq .L_8045912C
/* 80459120 00456060  38 80 00 03 */	li r4, 3
/* 80459124 00456064  4B ED 9A 59 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80459128 00456068  48 00 00 10 */	b .L_80459138
.L_8045912C:
/* 8045912C 0045606C  38 60 00 00 */	li r3, 0
/* 80459130 00456070  48 00 00 08 */	b .L_80459138
.L_80459134:
/* 80459134 00456074  38 60 00 00 */	li r3, 0
.L_80459138:
/* 80459138 00456078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045913C 0045607C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459140 00456080  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459144 00456084  7C 08 03 A6 */	mtlr r0
/* 80459148 00456088  38 21 00 10 */	addi r1, r1, 0x10
/* 8045914C 0045608C  4E 80 00 20 */	blr 
.endfn PSMGetBeedamaForOrimerD__Fv

.fn PSMGetBeedamaForLugieD__Fv, global
/* 80459150 00456090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459154 00456094  7C 08 02 A6 */	mflr r0
/* 80459158 00456098  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 8045915C 0045609C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459160 004560A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459164 004560A4  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80459168 004560A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8045916C 004560AC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459170 004560B0  28 00 00 00 */	cmplwi r0, 0
/* 80459174 004560B4  40 82 00 18 */	bne .L_8045918C
/* 80459178 004560B8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045917C 004560BC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459180 004560C0  38 80 01 D3 */	li r4, 0x1d3
/* 80459184 004560C4  4C C6 31 82 */	crclr 6
/* 80459188 004560C8  4B BD 14 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045918C:
/* 8045918C 004560CC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80459190 004560D0  28 1E 00 00 */	cmplwi r30, 0
/* 80459194 004560D4  40 82 00 18 */	bne .L_804591AC
/* 80459198 004560D8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045919C 004560DC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804591A0 004560E0  38 80 01 DC */	li r4, 0x1dc
/* 804591A4 004560E4  4C C6 31 82 */	crclr 6
/* 804591A8 004560E8  4B BD 14 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804591AC:
/* 804591AC 004560EC  80 1E 00 04 */	lwz r0, 4(r30)
/* 804591B0 004560F0  28 00 00 00 */	cmplwi r0, 0
/* 804591B4 004560F4  40 82 00 18 */	bne .L_804591CC
/* 804591B8 004560F8  38 7F 00 70 */	addi r3, r31, 0x70
/* 804591BC 004560FC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804591C0 00456100  38 80 00 CF */	li r4, 0xcf
/* 804591C4 00456104  4C C6 31 82 */	crclr 6
/* 804591C8 00456108  4B BD 14 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804591CC:
/* 804591CC 0045610C  80 7E 00 04 */	lwz r3, 4(r30)
/* 804591D0 00456110  83 C3 00 04 */	lwz r30, 4(r3)
/* 804591D4 00456114  28 1E 00 00 */	cmplwi r30, 0
/* 804591D8 00456118  40 82 00 18 */	bne .L_804591F0
/* 804591DC 0045611C  38 7F 00 70 */	addi r3, r31, 0x70
/* 804591E0 00456120  38 BF 00 7C */	addi r5, r31, 0x7c
/* 804591E4 00456124  38 80 00 D1 */	li r4, 0xd1
/* 804591E8 00456128  4C C6 31 82 */	crclr 6
/* 804591EC 0045612C  4B BD 14 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804591F0:
/* 804591F0 00456130  7F C3 F3 78 */	mr r3, r30
/* 804591F4 00456134  48 00 E5 21 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 804591F8 00456138  88 03 00 06 */	lbz r0, 6(r3)
/* 804591FC 0045613C  28 00 00 07 */	cmplwi r0, 7
/* 80459200 00456140  40 82 00 24 */	bne .L_80459224
/* 80459204 00456144  4B ED EA A5 */	bl PSGetDirectedMainBgm__Fv
/* 80459208 00456148  28 03 00 00 */	cmplwi r3, 0
/* 8045920C 0045614C  41 82 00 10 */	beq .L_8045921C
/* 80459210 00456150  38 80 00 04 */	li r4, 4
/* 80459214 00456154  4B ED 99 69 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80459218 00456158  48 00 00 10 */	b .L_80459228
.L_8045921C:
/* 8045921C 0045615C  38 60 00 00 */	li r3, 0
/* 80459220 00456160  48 00 00 08 */	b .L_80459228
.L_80459224:
/* 80459224 00456164  38 60 00 00 */	li r3, 0
.L_80459228:
/* 80459228 00456168  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045922C 0045616C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459230 00456170  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459234 00456174  7C 08 03 A6 */	mtlr r0
/* 80459238 00456178  38 21 00 10 */	addi r1, r1, 0x10
/* 8045923C 0045617C  4E 80 00 20 */	blr 
.endfn PSMGetBeedamaForLugieD__Fv

.fn PSMGetIchouForOrimerD__Fv, global
/* 80459240 00456180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459244 00456184  7C 08 02 A6 */	mflr r0
/* 80459248 00456188  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 8045924C 0045618C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459250 00456190  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459254 00456194  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80459258 00456198  93 C1 00 08 */	stw r30, 8(r1)
/* 8045925C 0045619C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459260 004561A0  28 00 00 00 */	cmplwi r0, 0
/* 80459264 004561A4  40 82 00 18 */	bne .L_8045927C
/* 80459268 004561A8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045926C 004561AC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459270 004561B0  38 80 01 D3 */	li r4, 0x1d3
/* 80459274 004561B4  4C C6 31 82 */	crclr 6
/* 80459278 004561B8  4B BD 13 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045927C:
/* 8045927C 004561BC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80459280 004561C0  28 1E 00 00 */	cmplwi r30, 0
/* 80459284 004561C4  40 82 00 18 */	bne .L_8045929C
/* 80459288 004561C8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045928C 004561CC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459290 004561D0  38 80 01 DC */	li r4, 0x1dc
/* 80459294 004561D4  4C C6 31 82 */	crclr 6
/* 80459298 004561D8  4B BD 13 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045929C:
/* 8045929C 004561DC  80 1E 00 04 */	lwz r0, 4(r30)
/* 804592A0 004561E0  28 00 00 00 */	cmplwi r0, 0
/* 804592A4 004561E4  40 82 00 18 */	bne .L_804592BC
/* 804592A8 004561E8  38 7F 00 70 */	addi r3, r31, 0x70
/* 804592AC 004561EC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804592B0 004561F0  38 80 00 CF */	li r4, 0xcf
/* 804592B4 004561F4  4C C6 31 82 */	crclr 6
/* 804592B8 004561F8  4B BD 13 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804592BC:
/* 804592BC 004561FC  80 7E 00 04 */	lwz r3, 4(r30)
/* 804592C0 00456200  83 C3 00 04 */	lwz r30, 4(r3)
/* 804592C4 00456204  28 1E 00 00 */	cmplwi r30, 0
/* 804592C8 00456208  40 82 00 18 */	bne .L_804592E0
/* 804592CC 0045620C  38 7F 00 70 */	addi r3, r31, 0x70
/* 804592D0 00456210  38 BF 00 7C */	addi r5, r31, 0x7c
/* 804592D4 00456214  38 80 00 D1 */	li r4, 0xd1
/* 804592D8 00456218  4C C6 31 82 */	crclr 6
/* 804592DC 0045621C  4B BD 13 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804592E0:
/* 804592E0 00456220  7F C3 F3 78 */	mr r3, r30
/* 804592E4 00456224  48 00 E4 31 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 804592E8 00456228  88 03 00 06 */	lbz r0, 6(r3)
/* 804592EC 0045622C  28 00 00 07 */	cmplwi r0, 7
/* 804592F0 00456230  40 82 00 24 */	bne .L_80459314
/* 804592F4 00456234  4B ED E9 B5 */	bl PSGetDirectedMainBgm__Fv
/* 804592F8 00456238  28 03 00 00 */	cmplwi r3, 0
/* 804592FC 0045623C  41 82 00 10 */	beq .L_8045930C
/* 80459300 00456240  38 80 00 05 */	li r4, 5
/* 80459304 00456244  4B ED 98 79 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 80459308 00456248  48 00 00 10 */	b .L_80459318
.L_8045930C:
/* 8045930C 0045624C  38 60 00 00 */	li r3, 0
/* 80459310 00456250  48 00 00 08 */	b .L_80459318
.L_80459314:
/* 80459314 00456254  38 60 00 00 */	li r3, 0
.L_80459318:
/* 80459318 00456258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045931C 0045625C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459320 00456260  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459324 00456264  7C 08 03 A6 */	mtlr r0
/* 80459328 00456268  38 21 00 10 */	addi r1, r1, 0x10
/* 8045932C 0045626C  4E 80 00 20 */	blr 
.endfn PSMGetIchouForOrimerD__Fv

.fn PSMGetIchouForLugieD__Fv, global
/* 80459330 00456270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459334 00456274  7C 08 02 A6 */	mflr r0
/* 80459338 00456278  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 8045933C 0045627C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459340 00456280  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459344 00456284  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80459348 00456288  93 C1 00 08 */	stw r30, 8(r1)
/* 8045934C 0045628C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459350 00456290  28 00 00 00 */	cmplwi r0, 0
/* 80459354 00456294  40 82 00 18 */	bne .L_8045936C
/* 80459358 00456298  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045935C 0045629C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459360 004562A0  38 80 01 D3 */	li r4, 0x1d3
/* 80459364 004562A4  4C C6 31 82 */	crclr 6
/* 80459368 004562A8  4B BD 12 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045936C:
/* 8045936C 004562AC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80459370 004562B0  28 1E 00 00 */	cmplwi r30, 0
/* 80459374 004562B4  40 82 00 18 */	bne .L_8045938C
/* 80459378 004562B8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045937C 004562BC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459380 004562C0  38 80 01 DC */	li r4, 0x1dc
/* 80459384 004562C4  4C C6 31 82 */	crclr 6
/* 80459388 004562C8  4B BD 12 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045938C:
/* 8045938C 004562CC  80 1E 00 04 */	lwz r0, 4(r30)
/* 80459390 004562D0  28 00 00 00 */	cmplwi r0, 0
/* 80459394 004562D4  40 82 00 18 */	bne .L_804593AC
/* 80459398 004562D8  38 7F 00 70 */	addi r3, r31, 0x70
/* 8045939C 004562DC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 804593A0 004562E0  38 80 00 CF */	li r4, 0xcf
/* 804593A4 004562E4  4C C6 31 82 */	crclr 6
/* 804593A8 004562E8  4B BD 12 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804593AC:
/* 804593AC 004562EC  80 7E 00 04 */	lwz r3, 4(r30)
/* 804593B0 004562F0  83 C3 00 04 */	lwz r30, 4(r3)
/* 804593B4 004562F4  28 1E 00 00 */	cmplwi r30, 0
/* 804593B8 004562F8  40 82 00 18 */	bne .L_804593D0
/* 804593BC 004562FC  38 7F 00 70 */	addi r3, r31, 0x70
/* 804593C0 00456300  38 BF 00 7C */	addi r5, r31, 0x7c
/* 804593C4 00456304  38 80 00 D1 */	li r4, 0xd1
/* 804593C8 00456308  4C C6 31 82 */	crclr 6
/* 804593CC 0045630C  4B BD 12 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804593D0:
/* 804593D0 00456310  7F C3 F3 78 */	mr r3, r30
/* 804593D4 00456314  48 00 E3 41 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 804593D8 00456318  88 03 00 06 */	lbz r0, 6(r3)
/* 804593DC 0045631C  28 00 00 07 */	cmplwi r0, 7
/* 804593E0 00456320  40 82 00 24 */	bne .L_80459404
/* 804593E4 00456324  4B ED E8 C5 */	bl PSGetDirectedMainBgm__Fv
/* 804593E8 00456328  28 03 00 00 */	cmplwi r3, 0
/* 804593EC 0045632C  41 82 00 10 */	beq .L_804593FC
/* 804593F0 00456330  38 80 00 06 */	li r4, 6
/* 804593F4 00456334  4B ED 97 89 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 804593F8 00456338  48 00 00 10 */	b .L_80459408
.L_804593FC:
/* 804593FC 0045633C  38 60 00 00 */	li r3, 0
/* 80459400 00456340  48 00 00 08 */	b .L_80459408
.L_80459404:
/* 80459404 00456344  38 60 00 00 */	li r3, 0
.L_80459408:
/* 80459408 00456348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045940C 0045634C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459410 00456350  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459414 00456354  7C 08 03 A6 */	mtlr r0
/* 80459418 00456358  38 21 00 10 */	addi r1, r1, 0x10
/* 8045941C 0045635C  4E 80 00 20 */	blr 
.endfn PSMGetIchouForLugieD__Fv

.fn PSMGetPikiBattleD__Fv, global
/* 80459420 00456360  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459424 00456364  7C 08 02 A6 */	mflr r0
/* 80459428 00456368  3C 60 80 4A */	lis r3, lbl_8049CD98@ha
/* 8045942C 0045636C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459430 00456370  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459434 00456374  3B E3 CD 98 */	addi r31, r3, lbl_8049CD98@l
/* 80459438 00456378  93 C1 00 08 */	stw r30, 8(r1)
/* 8045943C 0045637C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459440 00456380  28 00 00 00 */	cmplwi r0, 0
/* 80459444 00456384  40 82 00 18 */	bne .L_8045945C
/* 80459448 00456388  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045944C 0045638C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459450 00456390  38 80 01 D3 */	li r4, 0x1d3
/* 80459454 00456394  4C C6 31 82 */	crclr 6
/* 80459458 00456398  4B BD 11 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045945C:
/* 8045945C 0045639C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80459460 004563A0  28 1E 00 00 */	cmplwi r30, 0
/* 80459464 004563A4  40 82 00 18 */	bne .L_8045947C
/* 80459468 004563A8  38 7F 00 64 */	addi r3, r31, 0x64
/* 8045946C 004563AC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459470 004563B0  38 80 01 DC */	li r4, 0x1dc
/* 80459474 004563B4  4C C6 31 82 */	crclr 6
/* 80459478 004563B8  4B BD 11 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045947C:
/* 8045947C 004563BC  80 1E 00 04 */	lwz r0, 4(r30)
/* 80459480 004563C0  28 00 00 00 */	cmplwi r0, 0
/* 80459484 004563C4  40 82 00 18 */	bne .L_8045949C
/* 80459488 004563C8  38 7F 00 70 */	addi r3, r31, 0x70
/* 8045948C 004563CC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80459490 004563D0  38 80 00 CF */	li r4, 0xcf
/* 80459494 004563D4  4C C6 31 82 */	crclr 6
/* 80459498 004563D8  4B BD 11 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045949C:
/* 8045949C 004563DC  80 7E 00 04 */	lwz r3, 4(r30)
/* 804594A0 004563E0  83 C3 00 04 */	lwz r30, 4(r3)
/* 804594A4 004563E4  28 1E 00 00 */	cmplwi r30, 0
/* 804594A8 004563E8  40 82 00 18 */	bne .L_804594C0
/* 804594AC 004563EC  38 7F 00 70 */	addi r3, r31, 0x70
/* 804594B0 004563F0  38 BF 00 7C */	addi r5, r31, 0x7c
/* 804594B4 004563F4  38 80 00 D1 */	li r4, 0xd1
/* 804594B8 004563F8  4C C6 31 82 */	crclr 6
/* 804594BC 004563FC  4B BD 11 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804594C0:
/* 804594C0 00456400  7F C3 F3 78 */	mr r3, r30
/* 804594C4 00456404  48 00 E2 51 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 804594C8 00456408  88 03 00 06 */	lbz r0, 6(r3)
/* 804594CC 0045640C  28 00 00 07 */	cmplwi r0, 7
/* 804594D0 00456410  40 82 00 24 */	bne .L_804594F4
/* 804594D4 00456414  4B ED E7 D5 */	bl PSGetDirectedMainBgm__Fv
/* 804594D8 00456418  28 03 00 00 */	cmplwi r3, 0
/* 804594DC 0045641C  41 82 00 10 */	beq .L_804594EC
/* 804594E0 00456420  38 80 00 07 */	li r4, 7
/* 804594E4 00456424  4B ED 96 99 */	bl getDirectorP__Q28PSSystem11DirectedBgmFUc
/* 804594E8 00456428  48 00 00 10 */	b .L_804594F8
.L_804594EC:
/* 804594EC 0045642C  38 60 00 00 */	li r3, 0
/* 804594F0 00456430  48 00 00 08 */	b .L_804594F8
.L_804594F4:
/* 804594F4 00456434  38 60 00 00 */	li r3, 0
.L_804594F8:
/* 804594F8 00456438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804594FC 0045643C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459500 00456440  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459504 00456444  7C 08 03 A6 */	mtlr r0
/* 80459508 00456448  38 21 00 10 */	addi r1, r1, 0x10
/* 8045950C 0045644C  4E 80 00 20 */	blr 
.endfn PSMGetPikiBattleD__Fv

.fn __dt__Q23PSM13ExiteDirectorFv, weak
/* 80459510 00456450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459514 00456454  7C 08 02 A6 */	mflr r0
/* 80459518 00456458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045951C 0045645C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459520 00456460  7C 9F 23 78 */	mr r31, r4
/* 80459524 00456464  93 C1 00 08 */	stw r30, 8(r1)
/* 80459528 00456468  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045952C 0045646C  41 82 00 68 */	beq .L_80459594
/* 80459530 00456470  3C 80 80 4F */	lis r4, __vt__Q23PSM13ExiteDirector@ha
/* 80459534 00456474  38 04 DD 50 */	addi r0, r4, __vt__Q23PSM13ExiteDirector@l
/* 80459538 00456478  90 1E 00 00 */	stw r0, 0(r30)
/* 8045953C 0045647C  41 82 00 48 */	beq .L_80459584
/* 80459540 00456480  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80459544 00456484  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 80459548 00456488  90 1E 00 00 */	stw r0, 0(r30)
/* 8045954C 0045648C  41 82 00 38 */	beq .L_80459584
/* 80459550 00456490  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80459554 00456494  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80459558 00456498  90 1E 00 00 */	stw r0, 0(r30)
/* 8045955C 0045649C  41 82 00 28 */	beq .L_80459584
/* 80459560 004564A0  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80459564 004564A4  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80459568 004564A8  90 1E 00 00 */	stw r0, 0(r30)
/* 8045956C 004564AC  41 82 00 18 */	beq .L_80459584
/* 80459570 004564B0  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459574 004564B4  38 80 00 00 */	li r4, 0
/* 80459578 004564B8  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 8045957C 004564BC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459580 004564C0  4B C6 0C 7D */	bl __dt__10JADHioNodeFv
.L_80459584:
/* 80459584 004564C4  7F E0 07 35 */	extsh. r0, r31
/* 80459588 004564C8  40 81 00 0C */	ble .L_80459594
/* 8045958C 004564CC  7F C3 F3 78 */	mr r3, r30
/* 80459590 004564D0  4B BC AB 25 */	bl __dl__FPv
.L_80459594:
/* 80459594 004564D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80459598 004564D8  7F C3 F3 78 */	mr r3, r30
/* 8045959C 004564DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804595A0 004564E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 804595A4 004564E4  7C 08 03 A6 */	mtlr r0
/* 804595A8 004564E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804595AC 004564EC  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM13ExiteDirectorFv

.section .text, "ax", unique, 1
.fn onSetMinDistObj__Q23PSM20ActorDirector_ScaledFPQ24Game8Creature, weak
/* 804595B0 004564F0  4E 80 00 20 */	blr 
.endfn onSetMinDistObj__Q23PSM20ActorDirector_ScaledFPQ24Game8Creature

.section .text, "ax", unique, 2
.fn is1PGame__Q23PSM11ObjCalcBaseFv, weak
/* 804595B4 004564F4  38 60 00 01 */	li r3, 1
/* 804595B8 004564F8  4E 80 00 20 */	blr 
.endfn is1PGame__Q23PSM11ObjCalcBaseFv

.section .text, "ax", unique, 3
.fn is2PBattle__Q23PSM16OtakaraEventLinkFv, weak
/* 804595BC 004564FC  38 60 00 00 */	li r3, 0
/* 804595C0 00456500  4E 80 00 20 */	blr 
.endfn is2PBattle__Q23PSM16OtakaraEventLinkFv

.section .text, "ax", unique, 4
.fn __dt__Q23PSM17PikAttackDirectorFv, weak
/* 804595C4 00456504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804595C8 00456508  7C 08 02 A6 */	mflr r0
/* 804595CC 0045650C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804595D0 00456510  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804595D4 00456514  7C 9F 23 78 */	mr r31, r4
/* 804595D8 00456518  93 C1 00 08 */	stw r30, 8(r1)
/* 804595DC 0045651C  7C 7E 1B 79 */	or. r30, r3, r3
/* 804595E0 00456520  41 82 00 68 */	beq .L_80459648
/* 804595E4 00456524  3C 80 80 4F */	lis r4, __vt__Q23PSM17PikAttackDirector@ha
/* 804595E8 00456528  38 04 DD 88 */	addi r0, r4, __vt__Q23PSM17PikAttackDirector@l
/* 804595EC 0045652C  90 1E 00 00 */	stw r0, 0(r30)
/* 804595F0 00456530  41 82 00 48 */	beq .L_80459638
/* 804595F4 00456534  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804595F8 00456538  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804595FC 0045653C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459600 00456540  41 82 00 38 */	beq .L_80459638
/* 80459604 00456544  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80459608 00456548  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 8045960C 0045654C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459610 00456550  41 82 00 28 */	beq .L_80459638
/* 80459614 00456554  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80459618 00456558  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 8045961C 0045655C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459620 00456560  41 82 00 18 */	beq .L_80459638
/* 80459624 00456564  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459628 00456568  38 80 00 00 */	li r4, 0
/* 8045962C 0045656C  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459630 00456570  90 1E 00 00 */	stw r0, 0(r30)
/* 80459634 00456574  4B C6 0B C9 */	bl __dt__10JADHioNodeFv
.L_80459638:
/* 80459638 00456578  7F E0 07 35 */	extsh. r0, r31
/* 8045963C 0045657C  40 81 00 0C */	ble .L_80459648
/* 80459640 00456580  7F C3 F3 78 */	mr r3, r30
/* 80459644 00456584  4B BC AA 71 */	bl __dl__FPv
.L_80459648:
/* 80459648 00456588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045964C 0045658C  7F C3 F3 78 */	mr r3, r30
/* 80459650 00456590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459654 00456594  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459658 00456598  7C 08 03 A6 */	mtlr r0
/* 8045965C 0045659C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459660 004565A0  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM17PikAttackDirectorFv

.fn __dt__Q23PSM19ActorDirector_KehaiFv, weak
/* 80459664 004565A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459668 004565A8  7C 08 02 A6 */	mflr r0
/* 8045966C 004565AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459670 004565B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459674 004565B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80459678 004565B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8045967C 004565BC  7C 9E 23 78 */	mr r30, r4
/* 80459680 004565C0  41 82 00 98 */	beq .L_80459718
/* 80459684 004565C4  3C 80 80 4F */	lis r4, __vt__Q23PSM19ActorDirector_Kehai@ha
/* 80459688 004565C8  38 04 DD C0 */	addi r0, r4, __vt__Q23PSM19ActorDirector_Kehai@l
/* 8045968C 004565CC  90 1F 00 00 */	stw r0, 0(r31)
/* 80459690 004565D0  41 82 00 78 */	beq .L_80459708
/* 80459694 004565D4  3C 80 80 4F */	lis r4, __vt__Q23PSM19ActorDirector_Enemy@ha
/* 80459698 004565D8  38 04 DE 50 */	addi r0, r4, __vt__Q23PSM19ActorDirector_Enemy@l
/* 8045969C 004565DC  90 1F 00 00 */	stw r0, 0(r31)
/* 804596A0 004565E0  41 82 00 68 */	beq .L_80459708
/* 804596A4 004565E4  3C 80 80 4F */	lis r4, __vt__Q23PSM20ActorDirector_Scaled@ha
/* 804596A8 004565E8  38 04 DE 98 */	addi r0, r4, __vt__Q23PSM20ActorDirector_Scaled@l
/* 804596AC 004565EC  90 1F 00 00 */	stw r0, 0(r31)
/* 804596B0 004565F0  41 82 00 58 */	beq .L_80459708
/* 804596B4 004565F4  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 804596B8 004565F8  38 04 DF 24 */	addi r0, r4, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 804596BC 004565FC  90 1F 00 00 */	stw r0, 0(r31)
/* 804596C0 00456600  41 82 00 48 */	beq .L_80459708
/* 804596C4 00456604  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804596C8 00456608  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804596CC 0045660C  90 1F 00 00 */	stw r0, 0(r31)
/* 804596D0 00456610  41 82 00 38 */	beq .L_80459708
/* 804596D4 00456614  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 804596D8 00456618  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 804596DC 0045661C  90 1F 00 00 */	stw r0, 0(r31)
/* 804596E0 00456620  41 82 00 28 */	beq .L_80459708
/* 804596E4 00456624  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804596E8 00456628  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804596EC 0045662C  90 1F 00 00 */	stw r0, 0(r31)
/* 804596F0 00456630  41 82 00 18 */	beq .L_80459708
/* 804596F4 00456634  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 804596F8 00456638  38 80 00 00 */	li r4, 0
/* 804596FC 0045663C  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459700 00456640  90 1F 00 00 */	stw r0, 0(r31)
/* 80459704 00456644  4B C6 0A F9 */	bl __dt__10JADHioNodeFv
.L_80459708:
/* 80459708 00456648  7F C0 07 35 */	extsh. r0, r30
/* 8045970C 0045664C  40 81 00 0C */	ble .L_80459718
/* 80459710 00456650  7F E3 FB 78 */	mr r3, r31
/* 80459714 00456654  4B BC A9 A1 */	bl __dl__FPv
.L_80459718:
/* 80459718 00456658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045971C 0045665C  7F E3 FB 78 */	mr r3, r31
/* 80459720 00456660  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459724 00456664  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459728 00456668  7C 08 03 A6 */	mtlr r0
/* 8045972C 0045666C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459730 00456670  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM19ActorDirector_KehaiFv

.fn __dt__Q23PSM20ActorDirector_BattleFv, weak
/* 80459734 00456674  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459738 00456678  7C 08 02 A6 */	mflr r0
/* 8045973C 0045667C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459740 00456680  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459744 00456684  7C 7F 1B 79 */	or. r31, r3, r3
/* 80459748 00456688  93 C1 00 08 */	stw r30, 8(r1)
/* 8045974C 0045668C  7C 9E 23 78 */	mr r30, r4
/* 80459750 00456690  41 82 00 98 */	beq .L_804597E8
/* 80459754 00456694  3C 80 80 4F */	lis r4, __vt__Q23PSM20ActorDirector_Battle@ha
/* 80459758 00456698  38 04 DE 08 */	addi r0, r4, __vt__Q23PSM20ActorDirector_Battle@l
/* 8045975C 0045669C  90 1F 00 00 */	stw r0, 0(r31)
/* 80459760 004566A0  41 82 00 78 */	beq .L_804597D8
/* 80459764 004566A4  3C 80 80 4F */	lis r4, __vt__Q23PSM19ActorDirector_Enemy@ha
/* 80459768 004566A8  38 04 DE 50 */	addi r0, r4, __vt__Q23PSM19ActorDirector_Enemy@l
/* 8045976C 004566AC  90 1F 00 00 */	stw r0, 0(r31)
/* 80459770 004566B0  41 82 00 68 */	beq .L_804597D8
/* 80459774 004566B4  3C 80 80 4F */	lis r4, __vt__Q23PSM20ActorDirector_Scaled@ha
/* 80459778 004566B8  38 04 DE 98 */	addi r0, r4, __vt__Q23PSM20ActorDirector_Scaled@l
/* 8045977C 004566BC  90 1F 00 00 */	stw r0, 0(r31)
/* 80459780 004566C0  41 82 00 58 */	beq .L_804597D8
/* 80459784 004566C4  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 80459788 004566C8  38 04 DF 24 */	addi r0, r4, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 8045978C 004566CC  90 1F 00 00 */	stw r0, 0(r31)
/* 80459790 004566D0  41 82 00 48 */	beq .L_804597D8
/* 80459794 004566D4  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80459798 004566D8  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 8045979C 004566DC  90 1F 00 00 */	stw r0, 0(r31)
/* 804597A0 004566E0  41 82 00 38 */	beq .L_804597D8
/* 804597A4 004566E4  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 804597A8 004566E8  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 804597AC 004566EC  90 1F 00 00 */	stw r0, 0(r31)
/* 804597B0 004566F0  41 82 00 28 */	beq .L_804597D8
/* 804597B4 004566F4  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804597B8 004566F8  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804597BC 004566FC  90 1F 00 00 */	stw r0, 0(r31)
/* 804597C0 00456700  41 82 00 18 */	beq .L_804597D8
/* 804597C4 00456704  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 804597C8 00456708  38 80 00 00 */	li r4, 0
/* 804597CC 0045670C  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 804597D0 00456710  90 1F 00 00 */	stw r0, 0(r31)
/* 804597D4 00456714  4B C6 0A 29 */	bl __dt__10JADHioNodeFv
.L_804597D8:
/* 804597D8 00456718  7F C0 07 35 */	extsh. r0, r30
/* 804597DC 0045671C  40 81 00 0C */	ble .L_804597E8
/* 804597E0 00456720  7F E3 FB 78 */	mr r3, r31
/* 804597E4 00456724  4B BC A8 D1 */	bl __dl__FPv
.L_804597E8:
/* 804597E8 00456728  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804597EC 0045672C  7F E3 FB 78 */	mr r3, r31
/* 804597F0 00456730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804597F4 00456734  83 C1 00 08 */	lwz r30, 8(r1)
/* 804597F8 00456738  7C 08 03 A6 */	mtlr r0
/* 804597FC 0045673C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459800 00456740  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM20ActorDirector_BattleFv

.fn __dt__Q23PSM19ActorDirector_EnemyFv, weak
/* 80459804 00456744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459808 00456748  7C 08 02 A6 */	mflr r0
/* 8045980C 0045674C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459810 00456750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459814 00456754  7C 9F 23 78 */	mr r31, r4
/* 80459818 00456758  93 C1 00 08 */	stw r30, 8(r1)
/* 8045981C 0045675C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80459820 00456760  41 82 00 88 */	beq .L_804598A8
/* 80459824 00456764  3C 80 80 4F */	lis r4, __vt__Q23PSM19ActorDirector_Enemy@ha
/* 80459828 00456768  38 04 DE 50 */	addi r0, r4, __vt__Q23PSM19ActorDirector_Enemy@l
/* 8045982C 0045676C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459830 00456770  41 82 00 68 */	beq .L_80459898
/* 80459834 00456774  3C 80 80 4F */	lis r4, __vt__Q23PSM20ActorDirector_Scaled@ha
/* 80459838 00456778  38 04 DE 98 */	addi r0, r4, __vt__Q23PSM20ActorDirector_Scaled@l
/* 8045983C 0045677C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459840 00456780  41 82 00 58 */	beq .L_80459898
/* 80459844 00456784  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Scaled@ha
/* 80459848 00456788  38 04 DF 24 */	addi r0, r4, __vt__Q23PSM22TrackOnDirector_Scaled@l
/* 8045984C 0045678C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459850 00456790  41 82 00 48 */	beq .L_80459898
/* 80459854 00456794  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80459858 00456798  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 8045985C 0045679C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459860 004567A0  41 82 00 38 */	beq .L_80459898
/* 80459864 004567A4  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80459868 004567A8  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 8045986C 004567AC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459870 004567B0  41 82 00 28 */	beq .L_80459898
/* 80459874 004567B4  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80459878 004567B8  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 8045987C 004567BC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459880 004567C0  41 82 00 18 */	beq .L_80459898
/* 80459884 004567C4  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459888 004567C8  38 80 00 00 */	li r4, 0
/* 8045988C 004567CC  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459890 004567D0  90 1E 00 00 */	stw r0, 0(r30)
/* 80459894 004567D4  4B C6 09 69 */	bl __dt__10JADHioNodeFv
.L_80459898:
/* 80459898 004567D8  7F E0 07 35 */	extsh. r0, r31
/* 8045989C 004567DC  40 81 00 0C */	ble .L_804598A8
/* 804598A0 004567E0  7F C3 F3 78 */	mr r3, r30
/* 804598A4 004567E4  4B BC A8 11 */	bl __dl__FPv
.L_804598A8:
/* 804598A8 004567E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804598AC 004567EC  7F C3 F3 78 */	mr r3, r30
/* 804598B0 004567F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804598B4 004567F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 804598B8 004567F8  7C 08 03 A6 */	mtlr r0
/* 804598BC 004567FC  38 21 00 10 */	addi r1, r1, 0x10
/* 804598C0 00456800  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM19ActorDirector_EnemyFv

.fn __dt__Q23PSM21ActorDirector_TrackOnFv, weak
/* 804598C4 00456804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804598C8 00456808  7C 08 02 A6 */	mflr r0
/* 804598CC 0045680C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804598D0 00456810  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804598D4 00456814  7C 9F 23 78 */	mr r31, r4
/* 804598D8 00456818  93 C1 00 08 */	stw r30, 8(r1)
/* 804598DC 0045681C  7C 7E 1B 79 */	or. r30, r3, r3
/* 804598E0 00456820  41 82 00 68 */	beq .L_80459948
/* 804598E4 00456824  3C 80 80 4F */	lis r4, __vt__Q23PSM21ActorDirector_TrackOn@ha
/* 804598E8 00456828  38 04 DE D8 */	addi r0, r4, __vt__Q23PSM21ActorDirector_TrackOn@l
/* 804598EC 0045682C  90 1E 00 00 */	stw r0, 0(r30)
/* 804598F0 00456830  41 82 00 48 */	beq .L_80459938
/* 804598F4 00456834  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 804598F8 00456838  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 804598FC 0045683C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459900 00456840  41 82 00 38 */	beq .L_80459938
/* 80459904 00456844  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80459908 00456848  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 8045990C 0045684C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459910 00456850  41 82 00 28 */	beq .L_80459938
/* 80459914 00456854  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80459918 00456858  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 8045991C 0045685C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459920 00456860  41 82 00 18 */	beq .L_80459938
/* 80459924 00456864  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459928 00456868  38 80 00 00 */	li r4, 0
/* 8045992C 0045686C  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459930 00456870  90 1E 00 00 */	stw r0, 0(r30)
/* 80459934 00456874  4B C6 08 C9 */	bl __dt__10JADHioNodeFv
.L_80459938:
/* 80459938 00456878  7F E0 07 35 */	extsh. r0, r31
/* 8045993C 0045687C  40 81 00 0C */	ble .L_80459948
/* 80459940 00456880  7F C3 F3 78 */	mr r3, r30
/* 80459944 00456884  4B BC A7 71 */	bl __dl__FPv
.L_80459948:
/* 80459948 00456888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045994C 0045688C  7F C3 F3 78 */	mr r3, r30
/* 80459950 00456890  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459954 00456894  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459958 00456898  7C 08 03 A6 */	mtlr r0
/* 8045995C 0045689C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459960 004568A0  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM21ActorDirector_TrackOnFv

.fn __dt__Q23PSM22TrackOnDirector_VotingFv, weak
/* 80459964 004568A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459968 004568A8  7C 08 02 A6 */	mflr r0
/* 8045996C 004568AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459970 004568B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459974 004568B4  7C 9F 23 78 */	mr r31, r4
/* 80459978 004568B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8045997C 004568BC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80459980 004568C0  41 82 00 68 */	beq .L_804599E8
/* 80459984 004568C4  3C 80 80 4F */	lis r4, __vt__Q23PSM22TrackOnDirector_Voting@ha
/* 80459988 004568C8  38 04 DF 60 */	addi r0, r4, __vt__Q23PSM22TrackOnDirector_Voting@l
/* 8045998C 004568CC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459990 004568D0  41 82 00 48 */	beq .L_804599D8
/* 80459994 004568D4  3C 80 80 4F */	lis r4, __vt__Q23PSM19TrackOnDirectorBase@ha
/* 80459998 004568D8  38 04 DF 98 */	addi r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
/* 8045999C 004568DC  90 1E 00 00 */	stw r0, 0(r30)
/* 804599A0 004568E0  41 82 00 38 */	beq .L_804599D8
/* 804599A4 004568E4  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 804599A8 004568E8  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 804599AC 004568EC  90 1E 00 00 */	stw r0, 0(r30)
/* 804599B0 004568F0  41 82 00 28 */	beq .L_804599D8
/* 804599B4 004568F4  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 804599B8 004568F8  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 804599BC 004568FC  90 1E 00 00 */	stw r0, 0(r30)
/* 804599C0 00456900  41 82 00 18 */	beq .L_804599D8
/* 804599C4 00456904  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 804599C8 00456908  38 80 00 00 */	li r4, 0
/* 804599CC 0045690C  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 804599D0 00456910  90 1E 00 00 */	stw r0, 0(r30)
/* 804599D4 00456914  4B C6 08 29 */	bl __dt__10JADHioNodeFv
.L_804599D8:
/* 804599D8 00456918  7F E0 07 35 */	extsh. r0, r31
/* 804599DC 0045691C  40 81 00 0C */	ble .L_804599E8
/* 804599E0 00456920  7F C3 F3 78 */	mr r3, r30
/* 804599E4 00456924  4B BC A6 D1 */	bl __dl__FPv
.L_804599E8:
/* 804599E8 00456928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804599EC 0045692C  7F C3 F3 78 */	mr r3, r30
/* 804599F0 00456930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804599F4 00456934  83 C1 00 08 */	lwz r30, 8(r1)
/* 804599F8 00456938  7C 08 03 A6 */	mtlr r0
/* 804599FC 0045693C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459A00 00456940  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM22TrackOnDirector_VotingFv

.fn __dt__Q23PSM28PikminNumberDirector_AutoBgmFv, weak
/* 80459A04 00456944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459A08 00456948  7C 08 02 A6 */	mflr r0
/* 80459A0C 0045694C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459A10 00456950  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459A14 00456954  7C 9F 23 78 */	mr r31, r4
/* 80459A18 00456958  93 C1 00 08 */	stw r30, 8(r1)
/* 80459A1C 0045695C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80459A20 00456960  41 82 00 68 */	beq .L_80459A88
/* 80459A24 00456964  3C 80 80 4F */	lis r4, __vt__Q23PSM28PikminNumberDirector_AutoBgm@ha
/* 80459A28 00456968  38 04 DF D0 */	addi r0, r4, __vt__Q23PSM28PikminNumberDirector_AutoBgm@l
/* 80459A2C 0045696C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459A30 00456970  41 82 00 48 */	beq .L_80459A78
/* 80459A34 00456974  3C 80 80 4F */	lis r4, __vt__Q23PSM20PikminNumberDirector@ha
/* 80459A38 00456978  38 04 E0 08 */	addi r0, r4, __vt__Q23PSM20PikminNumberDirector@l
/* 80459A3C 0045697C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459A40 00456980  41 82 00 38 */	beq .L_80459A78
/* 80459A44 00456984  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80459A48 00456988  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80459A4C 0045698C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459A50 00456990  41 82 00 28 */	beq .L_80459A78
/* 80459A54 00456994  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80459A58 00456998  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80459A5C 0045699C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459A60 004569A0  41 82 00 18 */	beq .L_80459A78
/* 80459A64 004569A4  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459A68 004569A8  38 80 00 00 */	li r4, 0
/* 80459A6C 004569AC  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459A70 004569B0  90 1E 00 00 */	stw r0, 0(r30)
/* 80459A74 004569B4  4B C6 07 89 */	bl __dt__10JADHioNodeFv
.L_80459A78:
/* 80459A78 004569B8  7F E0 07 35 */	extsh. r0, r31
/* 80459A7C 004569BC  40 81 00 0C */	ble .L_80459A88
/* 80459A80 004569C0  7F C3 F3 78 */	mr r3, r30
/* 80459A84 004569C4  4B BC A6 31 */	bl __dl__FPv
.L_80459A88:
/* 80459A88 004569C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80459A8C 004569CC  7F C3 F3 78 */	mr r3, r30
/* 80459A90 004569D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459A94 004569D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459A98 004569D8  7C 08 03 A6 */	mtlr r0
/* 80459A9C 004569DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80459AA0 004569E0  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM28PikminNumberDirector_AutoBgmFv

.fn __dt__Q23PSM25ActorDirector_TempoChangeFv, weak
/* 80459AA4 004569E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459AA8 004569E8  7C 08 02 A6 */	mflr r0
/* 80459AAC 004569EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459AB0 004569F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459AB4 004569F4  7C 9F 23 78 */	mr r31, r4
/* 80459AB8 004569F8  93 C1 00 08 */	stw r30, 8(r1)
/* 80459ABC 004569FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80459AC0 00456A00  41 82 00 68 */	beq .L_80459B28
/* 80459AC4 00456A04  3C 80 80 4F */	lis r4, __vt__Q23PSM25ActorDirector_TempoChange@ha
/* 80459AC8 00456A08  38 04 E0 40 */	addi r0, r4, __vt__Q23PSM25ActorDirector_TempoChange@l
/* 80459ACC 00456A0C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459AD0 00456A10  41 82 00 48 */	beq .L_80459B18
/* 80459AD4 00456A14  3C 80 80 4F */	lis r4, __vt__Q23PSM23TempoChangeDirectorBase@ha
/* 80459AD8 00456A18  38 04 E0 78 */	addi r0, r4, __vt__Q23PSM23TempoChangeDirectorBase@l
/* 80459ADC 00456A1C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459AE0 00456A20  41 82 00 38 */	beq .L_80459B18
/* 80459AE4 00456A24  3C 80 80 4F */	lis r4, __vt__Q23PSM16SwitcherDirector@ha
/* 80459AE8 00456A28  38 04 E0 B0 */	addi r0, r4, __vt__Q23PSM16SwitcherDirector@l
/* 80459AEC 00456A2C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459AF0 00456A30  41 82 00 28 */	beq .L_80459B18
/* 80459AF4 00456A34  3C 80 80 4E */	lis r4, __vt__Q28PSSystem16SwitcherDirector@ha
/* 80459AF8 00456A38  38 04 AF D0 */	addi r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
/* 80459AFC 00456A3C  90 1E 00 00 */	stw r0, 0(r30)
/* 80459B00 00456A40  41 82 00 18 */	beq .L_80459B18
/* 80459B04 00456A44  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459B08 00456A48  38 80 00 00 */	li r4, 0
/* 80459B0C 00456A4C  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459B10 00456A50  90 1E 00 00 */	stw r0, 0(r30)
/* 80459B14 00456A54  4B C6 06 E9 */	bl __dt__10JADHioNodeFv
.L_80459B18:
/* 80459B18 00456A58  7F E0 07 35 */	extsh. r0, r31
/* 80459B1C 00456A5C  40 81 00 0C */	ble .L_80459B28
/* 80459B20 00456A60  7F C3 F3 78 */	mr r3, r30
/* 80459B24 00456A64  4B BC A5 91 */	bl __dl__FPv
.L_80459B28:
/* 80459B28 00456A68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80459B2C 00456A6C  7F C3 F3 78 */	mr r3, r30
/* 80459B30 00456A70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459B34 00456A74  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459B38 00456A78  7C 08 03 A6 */	mtlr r0
/* 80459B3C 00456A7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459B40 00456A80  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM25ActorDirector_TempoChangeFv

.fn __dt__Q23PSM14DamageDirectorFv, weak
/* 80459B44 00456A84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459B48 00456A88  7C 08 02 A6 */	mflr r0
/* 80459B4C 00456A8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459B50 00456A90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80459B54 00456A94  7C 9F 23 78 */	mr r31, r4
/* 80459B58 00456A98  93 C1 00 08 */	stw r30, 8(r1)
/* 80459B5C 00456A9C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80459B60 00456AA0  41 82 00 58 */	beq .L_80459BB8
/* 80459B64 00456AA4  3C 80 80 4F */	lis r4, __vt__Q23PSM14DamageDirector@ha
/* 80459B68 00456AA8  38 04 E0 E8 */	addi r0, r4, __vt__Q23PSM14DamageDirector@l
/* 80459B6C 00456AAC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459B70 00456AB0  41 82 00 38 */	beq .L_80459BA8
/* 80459B74 00456AB4  3C 80 80 4F */	lis r4, __vt__Q23PSM15OneShotDirector@ha
/* 80459B78 00456AB8  38 04 E1 20 */	addi r0, r4, __vt__Q23PSM15OneShotDirector@l
/* 80459B7C 00456ABC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459B80 00456AC0  41 82 00 28 */	beq .L_80459BA8
/* 80459B84 00456AC4  3C 80 80 4E */	lis r4, __vt__Q28PSSystem15OneShotDirector@ha
/* 80459B88 00456AC8  38 04 B0 08 */	addi r0, r4, __vt__Q28PSSystem15OneShotDirector@l
/* 80459B8C 00456ACC  90 1E 00 00 */	stw r0, 0(r30)
/* 80459B90 00456AD0  41 82 00 18 */	beq .L_80459BA8
/* 80459B94 00456AD4  3C A0 80 4E */	lis r5, __vt__Q28PSSystem12DirectorBase@ha
/* 80459B98 00456AD8  38 80 00 00 */	li r4, 0
/* 80459B9C 00456ADC  38 05 B0 40 */	addi r0, r5, __vt__Q28PSSystem12DirectorBase@l
/* 80459BA0 00456AE0  90 1E 00 00 */	stw r0, 0(r30)
/* 80459BA4 00456AE4  4B C6 06 59 */	bl __dt__10JADHioNodeFv
.L_80459BA8:
/* 80459BA8 00456AE8  7F E0 07 35 */	extsh. r0, r31
/* 80459BAC 00456AEC  40 81 00 0C */	ble .L_80459BB8
/* 80459BB0 00456AF0  7F C3 F3 78 */	mr r3, r30
/* 80459BB4 00456AF4  4B BC A5 01 */	bl __dl__FPv
.L_80459BB8:
/* 80459BB8 00456AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80459BBC 00456AFC  7F C3 F3 78 */	mr r3, r30
/* 80459BC0 00456B00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80459BC4 00456B04  83 C1 00 08 */	lwz r30, 8(r1)
/* 80459BC8 00456B08  7C 08 03 A6 */	mtlr r0
/* 80459BCC 00456B0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80459BD0 00456B10  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM14DamageDirectorFv
