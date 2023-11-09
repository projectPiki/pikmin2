#include "PSSystem/SeqTrack.h"
#include "PSSystem/PSGame.h"
#include "PSM/ObjCalc.h"
#include "PSM/Otakara.h"
#include "PSGame/Global.h"
#include "PSAutoBgm/AutoBgm.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSM/CreaturePrm.h"
#include "utilityU.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    lbl_8049CD98:
        .asciz "damageD  "
        .skip 2
    lbl_8049CDA4:
        .asciz "lifeD    "
        .skip 2
    lbl_8049CDB0:
        .asciz "pikminD  "
        .skip 2
    lbl_8049CDBC:
        .asciz "PSMainSide_Director.cpp"
    lbl_8049CDD4:
        .asciz "P2Assert"
        .skip 3
    lbl_8049CDE0:
        .asciz "PSDirector.h"
        .skip 3
        .asciz "PSCommon.h"
        .skip 1
        .asciz "PSGame.h"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "get sound scene at\ninvalid timming\n"
        .asciz "PSMainSide_ObjSound.h"
        .skip 2
    lbl_8049CE50:
        .asciz "pikatkD  "
        .skip 2
    lbl_8049CE5C:
        .asciz "tentionD "
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23PSM13ExiteDirector
    __vt__Q23PSM13ExiteDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM13ExiteDirectorFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .global
   __vt__Q23PSM17PikAttackDirector
    __vt__Q23PSM17PikAttackDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM17PikAttackDirectorFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .global
   __vt__Q23PSM19ActorDirector_Kehai
    __vt__Q23PSM19ActorDirector_Kehai:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM19ActorDirector_KehaiFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q23PSM19ActorDirector_EnemyFv
        .4byte execInner__Q23PSM20ActorDirector_ScaledFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .4byte
   getNearestDistance__Q23PSM20ActorDirector_ScaledFv .4byte
   onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature .4byte
   getVolZeroDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase .4byte
   getVolMaxDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase .global
   __vt__Q23PSM20ActorDirector_Battle
    __vt__Q23PSM20ActorDirector_Battle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM20ActorDirector_BattleFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q23PSM19ActorDirector_EnemyFv
        .4byte execInner__Q23PSM20ActorDirector_ScaledFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .4byte
   getNearestDistance__Q23PSM20ActorDirector_ScaledFv .4byte
   onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature .4byte
   getVolZeroDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase .4byte
   getVolMaxDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase .global
   __vt__Q23PSM19ActorDirector_Enemy
    __vt__Q23PSM19ActorDirector_Enemy:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM19ActorDirector_EnemyFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q23PSM19ActorDirector_EnemyFv
        .4byte execInner__Q23PSM20ActorDirector_ScaledFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .4byte
   getNearestDistance__Q23PSM20ActorDirector_ScaledFv .4byte
   onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature .4byte 0
        .4byte 0
    .global __vt__Q23PSM20ActorDirector_Scaled
    __vt__Q23PSM20ActorDirector_Scaled:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM20ActorDirector_ScaledFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q23PSM22TrackOnDirector_ScaledFv
        .4byte execInner__Q23PSM20ActorDirector_ScaledFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .4byte
   getNearestDistance__Q23PSM20ActorDirector_ScaledFv .4byte
   onSetMinDistObj__Q23PSM20ActorDirector_ScaledFPQ24Game8Creature .global
   __vt__Q23PSM21ActorDirector_TrackOn
    __vt__Q23PSM21ActorDirector_TrackOn:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM21ActorDirector_TrackOnFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM21ActorDirector_TrackOnFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .global
   __vt__Q23PSM17ListDirectorActor
    __vt__Q23PSM17ListDirectorActor:
        .4byte 0
        .4byte 0
        .4byte exec__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBase
        .4byte onUpdateFromMasterD__Q23PSM17ListDirectorActorFv
        .4byte onUpdateFromSlaveD__Q28PSSystem17DirectorCopyActorFv
    .global __vt__Q23PSM22TrackOnDirector_Scaled
    __vt__Q23PSM22TrackOnDirector_Scaled:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM22TrackOnDirector_ScaledFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q23PSM22TrackOnDirector_ScaledFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .4byte 0 .global
   __vt__Q23PSM22TrackOnDirector_Voting
    __vt__Q23PSM22TrackOnDirector_Voting:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM22TrackOnDirector_VotingFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM22TrackOnDirector_VotingFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .global
   __vt__Q23PSM19TrackOnDirectorBase
    __vt__Q23PSM19TrackOnDirectorBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM19TrackOnDirectorBaseFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .global
   __vt__Q23PSM28PikminNumberDirector_AutoBgm
    __vt__Q23PSM28PikminNumberDirector_AutoBgm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM28PikminNumberDirector_AutoBgmFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM20PikminNumberDirectorFv
        .4byte
   directOnTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
        .4byte
   directOffTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q23PSM20PikminNumberDirector
    __vt__Q23PSM20PikminNumberDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM20PikminNumberDirectorFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM20PikminNumberDirectorFv
        .4byte
   directOnTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q23PSM25ActorDirector_TempoChange
    __vt__Q23PSM25ActorDirector_TempoChange:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM25ActorDirector_TempoChangeFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM25ActorDirector_TempoChangeFv
        .4byte
   directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
        .4byte
   directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q23PSM23TempoChangeDirectorBase
    __vt__Q23PSM23TempoChangeDirectorBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM23TempoChangeDirectorBaseFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte
   directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
        .4byte
   directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q23PSM16SwitcherDirector
    __vt__Q23PSM16SwitcherDirector:
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
    .global __vt__Q23PSM14DamageDirector
    __vt__Q23PSM14DamageDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM14DamageDirectorFv
        .4byte exec__Q28PSSystem15OneShotDirectorFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM14DamageDirectorFv
        .4byte directOnTrack__Q23PSM14DamageDirectorFRQ28PSSystem12SeqTrackBase
        .4byte
   directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q23PSM15OneShotDirector
    __vt__Q23PSM15OneShotDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM15OneShotDirectorFv
        .4byte exec__Q28PSSystem15OneShotDirectorFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte 0
        .4byte
   directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    lbl_80520C00:
        .float 0.1
    lbl_80520C04:
        .float 5.0
    lbl_80520C08:
        .float 1.0
    lbl_80520C0C:
        .float 0.7
    lbl_80520C10:
        .float 0.0
    lbl_80520C14:
        .float 100000.0
    lbl_80520C18:
        .float 1000000.0
*/

namespace PSM {

/*
 * --INFO--
 * Address:	80456AF8
 * Size:	000080
 */
DamageDirector::DamageDirector()
    : PSM::OneShotDirector()
    , _4C(0.1f)
    , _50(5.0f)
    , _54(225)
{
}

/*
 * --INFO--
 * Address:	80456BF8
 * Size:	000034
 */
void DamageDirector::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).pitchModulation(_4C, _50, _54, this);
}

/*
 * --INFO--
 * Address:	80456C2C
 * Size:	00003C
 */
void DamageDirector::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/*
 * --INFO--
 * Address:	80456CE8
 * Size:	000030
 */
void TempoChangeDirectorBase::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).tempoChange(_48, _4C, this);
}

/*
 * --INFO--
 * Address:	80456D18
 * Size:	000030
 */
void TempoChangeDirectorBase::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).tempoChange(1.0f, _4C, this);
}

/*
 * --INFO--
 * Address:	80456D48
 * Size:	000084
 */
ActorDirector_TempoChange::ActorDirector_TempoChange() { }

/*
 * --INFO--
 * Address:	80456E5C
 * Size:	00003C
 */
void ActorDirector_TempoChange::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/*
 * --INFO--
 * Address:	80456E98
 * Size:	000078
 */
PikminNumberDirector::PikminNumberDirector(int p1, u8 p2, PSSystem::DirectedBgm& bgm)
    : SwitcherDirector(p1, "pikminD  ")
    , _4C(p2)
{
}

/*
 * --INFO--
 * Address:	80456F10
 * Size:	00004C
 */
void PikminNumberDirector::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	seqTrack.getTaskEntryList();
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).setIdMask(_4C, this);
}

/*
 * --INFO--
 * Address:	80456F5C
 * Size:	00002C
 */
void PikminNumberDirector::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).setIdMask(0, this);
}

/*
 * --INFO--
 * Address:	80456F88
 * Size:	00003C
 */
void PikminNumberDirector::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/*
 * --INFO--
 * Address:	80456FC4
 * Size:	000094
 */
PikminNumberDirector_AutoBgm::PikminNumberDirector_AutoBgm(int p1, u8 p2, PSSystem::DirectedBgm& bgm)
    : PikminNumberDirector(p1, p2, bgm)
    , mDirectedBgm(&bgm)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r0, r7, 0x3250
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  mr        r5, r0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x114140
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  subi      r0, r4, 0x5030
	  lis       r4, 0x804F
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x1F50
	  lis       r3, 0x804F
	  li        r5, 0
	  stw       r0, 0x0(r29)
	  subi      r4, r4, 0x1FF8
	  subi      r0, r3, 0x2030
	  mr        r3, r29
	  stw       r5, 0x48(r29)
	  stw       r4, 0x0(r29)
	  stb       r30, 0x4C(r29)
	  stw       r0, 0x0(r29)
	  stw       r31, 0x50(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804570E8
 * Size:	000088
 */
void PikminNumberDirector_AutoBgm::directOnTrack(PSSystem::SeqTrackBase& track)
{
	PSAutoBgm::Track* subtrack = getTrack(track);
	PSAutoBgm::AutoBgm* bgm    = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm);
	bgm->_34E                  = true;
	FOREACH_NODE(PSAutoBgm::MeloArrBase, bgm->mMeloArr.mList.mHead, melo)
	{
		bool valid = melo->_18 == 1;
		if (valid) {
			melo->directOn(subtrack);
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
	lwz      r4, 0x50(r30)
	li       r0, 1
	mr       r30, r3
	stb      r0, 0x34e(r4)
	lwz      r31, 0x340(r4)
	b        lbl_80457150

lbl_8045711C:
	lwz      r3, 0(r31)
	lbz      r4, 0x18(r3)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	cmplwi   r0, 1
	bne      lbl_8045714C
	lwz      r12, 0x14(r3)
	mr       r4, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8045714C:
	lwz      r31, 0xc(r31)

lbl_80457150:
	cmplwi   r31, 0
	bne      lbl_8045711C
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
 * Address:	80457170
 * Size:	000088
 */
void PikminNumberDirector_AutoBgm::directOffTrack(PSSystem::SeqTrackBase& track)
{
	PSAutoBgm::Track* subtrack = getTrack(track);
	PSAutoBgm::AutoBgm* bgm    = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm);
	bgm->_34E                  = false;
	FOREACH_NODE(PSAutoBgm::MeloArrBase, bgm->mMeloArr.mList.mHead, melo)
	{
		bool valid = melo->_18 == 1;
		if (valid) {
			melo->directOn(subtrack);
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase
	lwz      r4, 0x50(r30)
	li       r0, 0
	mr       r30, r3
	stb      r0, 0x34e(r4)
	lwz      r31, 0x340(r4)
	b        lbl_804571D8

lbl_804571A4:
	lwz      r3, 0(r31)
	lbz      r4, 0x18(r3)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	cmplwi   r0, 1
	bne      lbl_804571D4
	lwz      r12, 0x14(r3)
	mr       r4, r30
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_804571D4:
	lwz      r31, 0xc(r31)

lbl_804571D8:
	cmplwi   r31, 0
	bne      lbl_804571A4
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
 * Address:	804571F8
 * Size:	0000B8
 */
PSAutoBgm::Track* PikminNumberDirector_AutoBgm::getTrack(PSSystem::SeqTrackBase& parent)
{
	PSSystem::TaskEntryMgr* mgr = parent.getTaskEntryList();
	u32 flag                    = mgr->mTrack->_348 & 0xf;
	// P2ASSERTLINE(194, (JADUtility::PrmSetRc<PSAutoBgm::Track>*)(mDirectedBgm)->getchild <= flag);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r4
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	lwz      r4, 0x24(r3)
	lwz      r3, 0x50(r30)
	lwz      r0, 0x348(r4)
	lwz      r3, 0x308(r3)
	clrlwi   r0, r0, 0x1c
	mr       r31, r0
	bl       "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r31, 0x18
	cmplw    r0, r3
	blt      lbl_80457260
	lis      r3, lbl_8049CDBC@ha
	lis      r5, lbl_8049CDD4@ha
	addi     r3, r3, lbl_8049CDBC@l
	li       r4, 0xc2
	addi     r5, r5, lbl_8049CDD4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80457260:
	lwz      r3, 0x50(r30)
	mr       r4, r31
	lwz      r3, 0x308(r3)
	bl       "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
	or.      r31, r3, r3
	bne      lbl_80457294
	lis      r3, lbl_8049CDBC@ha
	lis      r5, lbl_8049CDD4@ha
	addi     r3, r3, lbl_8049CDBC@l
	li       r4, 0xc4
	addi     r5, r5, lbl_8049CDD4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80457294:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804572B0
 * Size:	00007C
 */
TrackOnDirectorBase::TrackOnDirectorBase(int p1, const char* p2, long p3, long p4)
    : SwitcherDirector(p1, p2)
    , _48(p3)
    , _4C(p4)
    , _50(0)
{
}

/*
 * --INFO--
 * Address:	8045732C
 * Size:	000034
 */
void TrackOnDirectorBase::onPlayInit(JASTrack* track)
{
	track->_358 |= 0x60;
	track->muteTrack(true);
}

/*
 * --INFO--
 * Address:	80457360
 * Size:	000050
 */
void TrackOnDirectorBase::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	if (_50 != 0) {
		static_cast<PSSystem::SeqTrackChild&>(seqTrack).muteOffAndFadeIn(0.0f, 0, this);
	} else {
		static_cast<PSSystem::SeqTrackChild&>(seqTrack).muteOffAndFadeIn(1.0f, _48, this);
	}
}

/*
 * --INFO--
 * Address:	804573B0
 * Size:	00002C
 */
void TrackOnDirectorBase::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).fadeoutAndMute(_4C, this);
}

/*
 * --INFO--
 * Address:	804573DC
 * Size:	000090
 */
void TrackOnDirector_Voting::execInner()
{
	if (_54 == 0 && isUnderDirection()) {
		directOff();
	} else if (_54 != 0 && !isUnderDirection()) {
		directOn();
	}
	_54 = 0;
}

/*
 * --INFO--
 * Address:	804574FC
 * Size:	0000FC
 */
void TrackOnDirector_Scaled::underDirection()
{
	f32 rate = 1.0f;
	if (!PSSystem::DirectorBase::sToolMode) {
		rate = getNearestDistance();
		_5C  = rate;
		rate = JALCalc::linearTransform(_5C, _58, _54, 0.0f, 1.0f, false);
	}

	fadeAllTracks(rate, _60);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lbz      r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
	mr       r28, r3
	lfs      f31, lbl_80520C08@sda21(r2)
	cmplwi   r0, 0
	bne      lbl_80457568
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x5c(r28)
	li       r3, 0
	lfs      f4, lbl_80520C10@sda21(r2)
	lfs      f1, 0x5c(r28)
	lfs      f2, 0x58(r28)
	lfs      f3, 0x54(r28)
	lfs      f5, lbl_80520C08@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	fmr      f31, f1

lbl_80457568:
	lis      r4, lbl_8049CDE0@ha
	lis      r3, lbl_8049CDD4@ha
	addi     r30, r4, lbl_8049CDE0@l
	li       r29, 0
	addi     r31, r3, lbl_8049CDD4@l
	b        lbl_804575C0

lbl_80457580:
	clrlwi   r0, r29, 0x18
	cmplw    r0, r3
	blt      lbl_804575A0
	mr       r3, r30
	mr       r5, r31
	li       r4, 0x33
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804575A0:
	lwz      r3, 4(r28)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	fmr      f1, f31
	lwz      r4, 0x60(r28)
	lwzx     r3, r3, r0
	li       r5, 0
	bl       fade__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase
	addi     r29, r29, 1

lbl_804575C0:
	lbz      r3, 0x41(r28)
	clrlwi   r0, r29, 0x18
	cmplw    r0, r3
	blt      lbl_80457580
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804575F8
 * Size:	00008C
 */
void ListDirectorActor::onUpdateFromMasterD()
{
	if (!mHead && mDirectorChild->isUnderDirection()) {
		mDirectorChild->directOff();
	} else if (mHead && !mDirectorChild->isUnderDirection()) {
		mDirectorChild->directOn();
	}
}

/*
 * --INFO--
 * Address:	80457684
 * Size:	000098
 */
ActorDirector_TrackOn::ActorDirector_TrackOn(const char* p1, int p2, long p3, long p4)
    : TrackOnDirectorBase(p2, p1, p3, p4)
    , mActor(nullptr)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	mr       r0, r4
	mr       r4, r5
	stw      r31, 0x1c(r1)
	mr       r31, r7
	mr       r5, r0
	stw      r30, 0x18(r1)
	mr       r30, r6
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__Q28PSSystem12DirectorBaseFiPCc
	lis      r4, __vt__Q28PSSystem16SwitcherDirector@ha
	lis      r3, __vt__Q23PSM16SwitcherDirector@ha
	addi     r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
	lis      r4, __vt__Q23PSM19TrackOnDirectorBase@ha
	stw      r0, 0(r29)
	addi     r0, r3, __vt__Q23PSM16SwitcherDirector@l
	lis      r3, __vt__Q23PSM21ActorDirector_TrackOn@ha
	addi     r5, r4, __vt__Q23PSM19TrackOnDirectorBase@l
	stw      r0, 0(r29)
	li       r4, 0
	addi     r0, r3, __vt__Q23PSM21ActorDirector_TrackOn@l
	mr       r3, r29
	stw      r5, 0(r29)
	stw      r30, 0x48(r29)
	stw      r31, 0x4c(r29)
	stb      r4, 0x50(r29)
	stw      r4, 0x54(r29)
	stw      r0, 0(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8045771C
 * Size:	00003C
 */
void ActorDirector_TrackOn::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/*
 * --INFO--
 * Address:	80457758
 * Size:	0000F4
 */
ActorDirector_Scaled::ActorDirector_Scaled(const char* name, int p2, f32 p3, f32 p4, long p5, long p6, u32 p7)
    : TrackOnDirector_Scaled(name, p2, p3, p4, p5, p6, p7)
{
}

/*
 * --INFO--
 * Address:	804578EC
 * Size:	00003C
 */
void ActorDirector_Scaled::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/*
 * --INFO--
 * Address:	80457928
 * Size:	000614
 */
f64 ActorDirector_Scaled::getNearestDistance()
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stw      r31, 0x14c(r1)
	stw      r30, 0x148(r1)
	stw      r29, 0x144(r1)
	stw      r28, 0x140(r1)
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) lis r4,
lbl_8049CD98@ha mr       r30, r3 cmplwi   r0, 0 addi     r31, r4, lbl_8049CD98@l
	bne      lbl_804579B0
	addi     r3, r31, 0x58
	addi     r5, r31, 0x3c
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804579B0:
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) lwz r12,
0(r3) lwz      r12, 0x18(r12) mtctr    r12 bctrl clrlwi.  r0, r3, 0x18 lfs f24,
lbl_80520C18@sda21(r2) bne      lbl_80457D14 lwz      r3,
naviMgr__4Game@sda21(r13) li       r4, 0 lwz      r12, 0(r3) lwz      r12,
0x24(r12) mtctr    r12 bctrl mr       r0, r3 lwz      r3,
naviMgr__4Game@sda21(r13) mr       r29, r0 li       r4, 1 lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r29, 0
	mr       r28, r3
	li       r0, 0
	beq      lbl_80457A24
	cmplwi   r28, 0
	beq      lbl_80457A24
	li       r0, 1

lbl_80457A24:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80457A40
	addi     r3, r31, 0x24
	addi     r5, r31, 0x3c
	li       r4, 0x18a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80457A40:
	mr       r4, r29
	addi     r3, r1, 0x134
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x128
	lwz      r12, 0(r28)
	lfs      f30, 0x134(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x138(r1)
	lfs      f28, 0x13c(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r30)
	lfs      f27, 0x128(r1)
	cmplwi   r3, 0
	lfs      f26, 0x12c(r1)
	lfs      f25, 0x130(r1)
	beq      lbl_80457A98
	addi     r3, r3, 0xc

lbl_80457A98:
	lwz      r31, 0(r3)
	lfs      f31, lbl_80520C10@sda21(r2)
	b        lbl_80457D08

lbl_80457AA4:
	lwz      r4, 0(r31)
	addi     r3, r1, 0x11c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x120(r1)
	lfs      f0, 0x11c(r1)
	stfs     f30, 0xa4(r1)
	lfs      f2, 0x124(r1)
	stfs     f29, 0xa8(r1)
	lwz      r0, 0xa4(r1)
	stfs     f0, 0xb0(r1)
	lwz      r6, 0xa8(r1)
	stfs     f1, 0xb4(r1)
	lwz      r4, 0xb0(r1)
	lwz      r3, 0xb4(r1)
	stfs     f28, 0xac(r1)
	lfs      f0, 0x11c(r1)
	stfs     f2, 0xb8(r1)
	lwz      r5, 0xac(r1)
	stw      r0, 0x104(r1)
	lwz      r0, 0xb8(r1)
	stw      r6, 0x108(r1)
	lfs      f5, 0x104(r1)
	stw      r4, 0x110(r1)
	lfs      f3, 0x108(r1)
	stw      r3, 0x114(r1)
	lfs      f6, 0x110(r1)
	lfs      f4, 0x114(r1)
	stw      r5, 0x10c(r1)
	fsubs    f6, f6, f5
	fsubs    f5, f4, f3
	stw      r0, 0x118(r1)
	lfs      f3, 0x10c(r1)
	lfs      f4, 0x118(r1)
	stfs     f6, 0x68(r1)
	fsubs    f3, f4, f3
	stfs     f5, 0x6c(r1)
	lwz      r0, 0x68(r1)
	lwz      r3, 0x6c(r1)
	stfs     f3, 0x70(r1)
	stw      r0, 0x50(r1)
	lwz      r0, 0x70(r1)
	stw      r3, 0x54(r1)
	lfs      f4, 0x50(r1)
	lfs      f3, 0x54(r1)
	stw      r0, 0x58(r1)
	fmuls    f5, f4, f4
	fmuls    f4, f3, f3
	lfs      f3, 0x58(r1)
	stfs     f5, 0x50(r1)
	fmuls    f3, f3, f3
	stfs     f4, 0x54(r1)
	lwz      r0, 0x50(r1)
	lwz      r3, 0x54(r1)
	stfs     f3, 0x58(r1)
	stw      r0, 0x5c(r1)
	lwz      r0, 0x58(r1)
	stw      r3, 0x60(r1)
	lfs      f4, 0x5c(r1)
	lfs      f3, 0x60(r1)
	stw      r0, 0x64(r1)
	fadds    f3, f4, f3
	lfs      f4, 0x64(r1)
	fadds    f4, f4, f3
	fcmpo    cr0, f4, f31
	ble      lbl_80457BBC
	frsqrte  f3, f4
	fmuls    f4, f3, f4

lbl_80457BBC:
	stfs     f27, 0x8c(r1)
	stfs     f26, 0x90(r1)
	lwz      r0, 0x8c(r1)
	stfs     f0, 0x98(r1)
	lwz      r6, 0x90(r1)
	stfs     f1, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r3, 0x9c(r1)
	stfs     f25, 0x94(r1)
	stfs     f2, 0xa0(r1)
	lwz      r5, 0x94(r1)
	stw      r0, 0xec(r1)
	lwz      r0, 0xa0(r1)
	stw      r6, 0xf0(r1)
	lfs      f2, 0xec(r1)
	stw      r4, 0xf8(r1)
	lfs      f0, 0xf0(r1)
	stw      r3, 0xfc(r1)
	lfs      f3, 0xf8(r1)
	lfs      f1, 0xfc(r1)
	stw      r5, 0xf4(r1)
	fsubs    f3, f3, f2
	fsubs    f2, f1, f0
	stw      r0, 0x100(r1)
	lfs      f0, 0xf4(r1)
	lfs      f1, 0x100(r1)
	stfs     f3, 0x44(r1)
	fsubs    f0, f1, f0
	stfs     f2, 0x48(r1)
	lwz      r0, 0x44(r1)
	lwz      r3, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stw      r0, 0x2c(r1)
	lwz      r0, 0x4c(r1)
	stw      r3, 0x30(r1)
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x30(r1)
	stw      r0, 0x34(r1)
	fmuls    f2, f1, f1
	fmuls    f1, f0, f0
	lfs      f0, 0x34(r1)
	stfs     f2, 0x2c(r1)
	fmuls    f0, f0, f0
	stfs     f1, 0x30(r1)
	lwz      r0, 0x2c(r1)
	lwz      r3, 0x30(r1)
	stfs     f0, 0x34(r1)
	stw      r0, 0x38(r1)
	lwz      r0, 0x34(r1)
	stw      r3, 0x3c(r1)
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	stw      r0, 0x40(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x40(r1)
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_80457CAC
	frsqrte  f1, f0
	fmuls    f0, f1, f0

lbl_80457CAC:
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_80457CE0
	fcmpo    cr0, f4, f24
	bge      lbl_80457D04
	mr       r3, r30
	fmr      f24, f4
	lwz      r12, 0(r30)
	lwz      r4, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	b        lbl_80457D04

lbl_80457CE0:
	fcmpo    cr0, f0, f24
	bge      lbl_80457D04
	mr       r3, r30
	fmr      f24, f0
	lwz      r12, 0(r30)
	lwz      r4, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80457D04:
	lwz      r31, 0xc(r31)

lbl_80457D08:
	cmplwi   r31, 0
	bne      lbl_80457AA4
	b        lbl_80457ED8

lbl_80457D14:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	bne      lbl_80457D60
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) li r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mulli    r0, r0, 0xc
	lwz      r3, 4(r3)
	lwzx     r3, r3, r0
	lfs      f25, 0(r3)
	lfs      f26, 4(r3)
	lfs      f27, 8(r3)
	b        lbl_80457D84

lbl_80457D60:
	mr       r4, r3
	addi     r3, r1, 0xe0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f25, 0xe0(r1)
	lfs      f26, 0xe4(r1)
	lfs      f27, 0xe8(r1)

lbl_80457D84:
	lwz      r3, 0x64(r30)
	lfs      f28, lbl_80520C10@sda21(r2)
	lwz      r31, 0xc(r3)
	b        lbl_80457ED0

lbl_80457D94:
	lwz      r4, 0(r31)
	addi     r3, r1, 0xd4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xd4(r1)
	lfs      f1, 0xd8(r1)
	stfs     f25, 0x74(r1)
	lfs      f0, 0xdc(r1)
	stfs     f26, 0x78(r1)
	lwz      r0, 0x74(r1)
	stfs     f2, 0x80(r1)
	lwz      r6, 0x78(r1)
	stfs     f1, 0x84(r1)
	lwz      r4, 0x80(r1)
	lwz      r3, 0x84(r1)
	stfs     f27, 0x7c(r1)
	stfs     f0, 0x88(r1)
	lwz      r5, 0x7c(r1)
	stw      r0, 0xbc(r1)
	lwz      r0, 0x88(r1)
	stw      r6, 0xc0(r1)
	lfs      f2, 0xbc(r1)
	stw      r4, 0xc8(r1)
	lfs      f0, 0xc0(r1)
	stw      r3, 0xcc(r1)
	lfs      f3, 0xc8(r1)
	lfs      f1, 0xcc(r1)
	stw      r5, 0xc4(r1)
	fsubs    f3, f3, f2
	fsubs    f2, f1, f0
	stw      r0, 0xd0(r1)
	lfs      f0, 0xc4(r1)
	lfs      f1, 0xd0(r1)
	stfs     f3, 0x20(r1)
	fsubs    f0, f1, f0
	stfs     f2, 0x24(r1)
	lwz      r0, 0x20(r1)
	lwz      r3, 0x24(r1)
	stfs     f0, 0x28(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	stw      r0, 0x10(r1)
	fmuls    f2, f1, f1
	fmuls    f1, f0, f0
	lfs      f0, 0x10(r1)
	stfs     f2, 8(r1)
	fmuls    f0, f0, f0
	stfs     f1, 0xc(r1)
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stfs     f0, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x18(r1)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	stw      r0, 0x1c(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x1c(r1)
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f28
	ble      lbl_80457EA8
	frsqrte  f1, f0
	fmuls    f0, f1, f0

lbl_80457EA8:
	fcmpo    cr0, f0, f24
	bge      lbl_80457ECC
	mr       r3, r30
	fmr      f24, f0
	lwz      r12, 0(r30)
	lwz      r4, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80457ECC:
	lwz      r31, 0xc(r31)

lbl_80457ED0:
	cmplwi   r31, 0
	bne      lbl_80457D94

lbl_80457ED8:
	fmr      f1, f24
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	lwz      r31, 0x14c(r1)
	lwz      r30, 0x148(r1)
	lwz      r29, 0x144(r1)
	lwz      r0, 0x1d4(r1)
	lwz      r28, 0x140(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80457F3C
 * Size:	0000E4
 */
ActorDirector_Enemy::ActorDirector_Enemy(const char* name, int p2, long p3, long p4, u32 p5)
    : ActorDirector_Scaled(name, p2, 1.0f, 0.0f, p3, p4, p5)
    , mGameObject(nullptr)
{
}

/*
 * --INFO--
 * Address:	804580D0
 * Size:	000008
 */
void ActorDirector_Enemy::onSetMinDistObj(Game::Creature* obj) { mGameObject = obj; }

/*
 * --INFO--
 * Address:	804580D8
 * Size:	0001D0
 */
void ActorDirector_Enemy::underDirection()
{
	mGameObject = nullptr;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r0, 0
	stw      r0, 0x68(r3)
	lis      r3, lbl_8049CD98@ha
	lfs      f31, lbl_80520C08@sda21(r2)
	addi     r31, r3, lbl_8049CD98@l
	lbz      r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045822C
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045813C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045813C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8045815C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045815C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8045817C
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045817C:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_804581A0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804581A0:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 0xd
	bne      lbl_804581BC
	lfs      f31, lbl_80520C08@sda21(r2)
	b        lbl_8045822C

lbl_804581BC:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x5c(r29)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r4, 0x68(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	fmr      f31, f1
	mr       r3, r29
	lwz      r4, 0x68(r29)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	fmr      f0, f1
	lfs      f1, 0x5c(r29)
	fmr      f2, f31
	lfs      f4, lbl_80520C10@sda21(r2)
	lfs      f5, lbl_80520C08@sda21(r2)
	li       r3, 0
	fmr      f3, f0
	bl       linearTransform__7JALCalcFfffffb
	fmr      f31, f1

lbl_8045822C:
	li       r30, 0
	b        lbl_80458274

lbl_80458234:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_80458254
	addi     r3, r31, 0x48
	addi     r5, r31, 0x3c
	li       r4, 0x33
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458254:
	lwz      r3, 4(r29)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	fmr      f1, f31
	lwz      r4, 0x60(r29)
	lwzx     r3, r3, r0
	li       r5, 0
	bl       fade__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase
	addi     r30, r30, 1

lbl_80458274:
	lbz      r3, 0x41(r29)
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_80458234
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804582A8
 * Size:	000044
 */
f64 ActorDirector_Battle::getVolZeroDist(Game::EnemyBase* enemy)
{
	// return CreaturePrm::cVolZeroDist_Battle[enemy->mSoundObj->getCastType() - 2];
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, -2
	lis      r3, cVolZeroDist_Battle__Q23PSM11CreaturePrm@ha
	slwi     r0, r0, 2
	addi     r3, r3, cVolZeroDist_Battle__Q23PSM11CreaturePrm@l
	lfsx     f1, r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804582EC
 * Size:	000044
 */
f64 ActorDirector_Battle::getVolMaxDist(Game::EnemyBase* enemy)
{
	// return CreaturePrm::cVolMaxDist_Battle[enemy->mSoundObj->getCastType() - 2];
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, -2
	lis      r3, cVolMaxDist_Battle__Q23PSM11CreaturePrm@ha
	slwi     r0, r0, 2
	addi     r3, r3, cVolMaxDist_Battle__Q23PSM11CreaturePrm@l
	lfsx     f1, r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80458330
 * Size:	000044
 */
f64 ActorDirector_Kehai::getVolZeroDist(Game::EnemyBase* enemy)
{
	// return CreaturePrm::cVolZeroDist_Kehai[enemy->mSoundObj->getCastType() - 2];
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, -2
	lis      r3, cVolZeroDist_Kehai__Q23PSM11CreaturePrm@ha
	slwi     r0, r0, 2
	addi     r3, r3, cVolZeroDist_Kehai__Q23PSM11CreaturePrm@l
	lfsx     f1, r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80458374
 * Size:	000044
 */
f64 ActorDirector_Kehai::getVolMaxDist(Game::EnemyBase* enemy)
{
	// return CreaturePrm::cVolMaxDist_Kehai[enemy->mSoundObj->getCastType() - 2];
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, -2
	lis      r3, cVolMaxDist_Kehai__Q23PSM11CreaturePrm@ha
	slwi     r0, r0, 2
	addi     r3, r3, cVolMaxDist_Kehai__Q23PSM11CreaturePrm@l
	lfsx     f1, r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804583B8
 * Size:	00007C
 */
PikAttackDirector::PikAttackDirector(int p1)
    : TrackOnDirectorBase(p1, "pikatkD  ", 100, 100)
{
}

/*
 * --INFO--
 * Address:	80458434
 * Size:	00007C
 */
ExiteDirector::ExiteDirector(int p1)
    : TrackOnDirectorBase(p1, "tentionD ", 100, 100)
{
}

/*
 * --INFO--
 * Address:	804584B0
 * Size:	000068
 */
DirectorUpdator::DirectorUpdator(PSSystem::DirectorBase* director, u8 p2, PSM::DirectorUpdator::Type type)
    : _00(p2)
    , mType(type)
    , _08(0)
    , _09(0)
    , mDirector(director)
{
	P2ASSERTLINE(698, p2 != 0);
}

/*
 * --INFO--
 * Address:	80458518
 * Size:	000034
 */
void DirectorUpdator::directOn(u8 id)
{
	if (id != _09 & 1) { }
	id = 1 << id;
	_08 |= id;
	_09 |= id;
	/*
	clrlwi   r0, r4, 0x18
	li       r4, 1
	lbz      r5, 9(r3)
	slw      r4, r4, r0
	and.     r0, r5, r4
	bnelr
	lbz      r0, 8(r3)
	or       r0, r0, r4
	stb      r0, 8(r3)
	lbz      r0, 9(r3)
	or       r0, r0, r4
	stb      r0, 9(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8045854C
 * Size:	000034
 */
void DirectorUpdator::directOff(u8 id)
{
	if (id != _09 & 1) { }
	id = 1 << id;
	_08 &= ~id;
	_09 |= id;
	/*
	clrlwi   r0, r4, 0x18
	li       r4, 1
	lbz      r5, 9(r3)
	slw      r4, r4, r0
	and.     r0, r5, r4
	bnelr
	lbz      r0, 8(r3)
	andc     r0, r0, r4
	stb      r0, 8(r3)
	lbz      r0, 9(r3)
	or       r0, r0, r4
	stb      r0, 9(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80458580
 * Size:	00012C
 */
void DirectorUpdator::frameEndWork()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_80458698
	lwz      r0, 4(r31)
	li       r7, 0
	cmpwi    r0, 1
	beq      lbl_80458600
	bge      lbl_80458640
	cmpwi    r0, 0
	bge      lbl_804585C0
	b        lbl_80458640

lbl_804585C0:
	lbz      r6, 0(r31)
	li       r8, 0
	li       r4, 1
	b        lbl_804585F0

lbl_804585D0:
	clrlwi   r0, r8, 0x18
	lbz      r5, 8(r31)
	slw      r0, r4, r0
	and.     r0, r5, r0
	beq      lbl_804585EC
	li       r7, 1
	b        lbl_80458640

lbl_804585EC:
	addi     r8, r8, 1

lbl_804585F0:
	clrlwi   r0, r8, 0x18
	cmplw    r0, r6
	blt      lbl_804585D0
	b        lbl_80458640

lbl_80458600:
	lbz      r6, 0(r31)
	li       r7, 1
	li       r8, 0
	li       r4, 1
	b        lbl_80458634

lbl_80458614:
	clrlwi   r0, r8, 0x18
	lbz      r5, 8(r31)
	slw      r0, r4, r0
	and.     r0, r5, r0
	bne      lbl_80458630
	li       r7, 0
	b        lbl_80458640

lbl_80458630:
	addi     r8, r8, 1

lbl_80458634:
	clrlwi   r0, r8, 0x18
	cmplw    r0, r6
	blt      lbl_80458614

lbl_80458640:
	clrlwi.  r0, r7, 0x18
	beq      lbl_8045866C
	bl       isUnderDirection__Q28PSSystem12DirectorBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045868C
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8045868C

lbl_8045866C:
	bl       isUnderDirection__Q28PSSystem12DirectorBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045868C
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8045868C:
	li       r0, 0
	stb      r0, 8(r31)
	stb      r0, 9(r31)

lbl_80458698:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace PSM

/*
 * --INFO--
 * Address:	804586AC
 * Size:	000148
 */
PSSystem::DirectorBase* PSMGetBattleDirector(u8)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8049CD98@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	addi     r30, r4, lbl_8049CD98@l
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_804586F4
	addi     r3, r30, 0x64
	addi     r5, r30, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804586F4:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_80458714
	addi     r3, r30, 0x64
	addi     r5, r30, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458714:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80458734
	addi     r3, r30, 0x70
	addi     r5, r30, 0x3c
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458734:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8045874C
	li       r29, 0
	b        lbl_80458754

lbl_8045874C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r29, r3

lbl_80458754:
	cmplwi   r29, 0
	bne      lbl_80458764
	li       r3, 0
	b        lbl_804587D4

lbl_80458764:
	mr       r3, r29
	li       r31, 0
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	beq      lbl_804587A8
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_804587AC

lbl_804587A8:
	li       r31, 1

lbl_804587AC:
	clrlwi.  r0, r31, 0x18
	bne      lbl_804587C8
	addi     r3, r30, 0x24
	addi     r5, r30, 0x3c
	li       r4, 0x32a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804587C8:
	mr       r3, r29
	mr       r4, r28
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc

lbl_804587D4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804587F4
 * Size:	000108
 */
PSM::ActorDirector_Kehai* PSMGetKehaiD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458830
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458830:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458850
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458850:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458870
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458870:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458894
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458894:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_804588C8
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_804588C0
	li       r4, 1
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_804588E4

lbl_804588C0:
	li       r3, 0
	b        lbl_804588E4

lbl_804588C8:
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_804588E0
	li       r4, 2
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_804588E4

lbl_804588E0:
	li       r3, 0

lbl_804588E4:
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
 * Address:	804588FC
 * Size:	000108
 */
PSM::ActorDirector_Battle* PSMGetBattleD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458938
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458938:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458958
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458958:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458978
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458978:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8045899C
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045899C:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_804589D0
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_804589C8
	li       r4, 2
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_804589EC

lbl_804589C8:
	li       r3, 0
	b        lbl_804589EC

lbl_804589D0:
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_804589E8
	li       r4, 3
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_804589EC

lbl_804589E8:
	li       r3, 0

lbl_804589EC:
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
 * Address:	80458A04
 * Size:	000108
 */
PSM::ActorDirector_Scaled* PSMGetEventD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458A40
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458A40:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458A60
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458A60:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458A80
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458A80:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458AA4
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458AA4:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_80458AD8
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_80458AD0
	li       r4, 0
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80458AF4

lbl_80458AD0:
	li       r3, 0
	b        lbl_80458AF4

lbl_80458AD8:
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_80458AF0
	li       r4, 0
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80458AF4

lbl_80458AF0:
	li       r3, 0

lbl_80458AF4:
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
 * Address:	80458B0C
 * Size:	0000F0
 */
PSM::ActorDirector_TrackOn* PSMGetOtakaraEventD()
{
	PSM::SceneMgr* mgr = static_cast<PSM::SceneMgr*>(PSSystem::getSceneMgr());
	PSSystem::checkSceneMgr(mgr);
	PSM::SceneBase* scene = static_cast<PSM::SceneBase*>(mgr->getChildScene()->mChild);
	if (scene->getSceneInfoA()->mSceneType == 7) {
		return nullptr;
	}
	PSSystem::DirectedBgm* bgm = static_cast<PSSystem::DirectedBgm*>(PSGetDirectedMainBgm());
	if (bgm == nullptr) {
		return nullptr;
	}
	return (PSM::ActorDirector_TrackOn*)bgm->getDirectorP(1);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458B48
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458B48:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458B68
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458B68:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458B88
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458B88:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458BAC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458BAC:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	beq      lbl_80458BE0
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_80458BD8
	li       r4, 1
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80458BE4

lbl_80458BD8:
	li       r3, 0
	b        lbl_80458BE4

lbl_80458BE0:
	li       r3, 0

lbl_80458BE4:
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
 * Address:	80458BFC
 * Size:	000194
 */
PSM::ActorDirector_Scaled* PSMGetGroundD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458C38
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458C38:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458C58
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458C58:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458C78
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458C78:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458C9C
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458C9C:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	beq      lbl_80458D74
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458CD0
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458CD0:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458CF0
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458CF0:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458D10
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458D10:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458D34
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458D34:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80458D74
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_80458D6C
	li       r4, 4
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80458D78

lbl_80458D6C:
	li       r3, 0
	b        lbl_80458D78

lbl_80458D74:
	li       r3, 0

lbl_80458D78:
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
 * Address:	80458D90
 * Size:	0000F0
 */
PSM::PikminNumberDirector* PSMGetPikminNumD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458DCC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458DCC:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458DEC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458DEC:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458E0C
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458E0C:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458E30
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458E30:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	beq      lbl_80458E64
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_80458E5C
	li       r4, 5
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80458E68

lbl_80458E5C:
	li       r3, 0
	b        lbl_80458E68

lbl_80458E64:
	li       r3, 0

lbl_80458E68:
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
 * Address:	80458E80
 * Size:	0000F0
 */
PSM::DamageDirector* PSMGetDamageD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458EBC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458EBC:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458EDC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458EDC:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458EFC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458EFC:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80458F20
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458F20:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	beq      lbl_80458F54
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_80458F4C
	li       r4, 6
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80458F58

lbl_80458F4C:
	li       r3, 0
	b        lbl_80458F58

lbl_80458F54:
	li       r3, 0

lbl_80458F58:
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
 * Address:	80458F70
 * Size:	0000F0
 */
PSM::ActorDirector_TempoChange* PSMGetLifeD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80458FAC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458FAC:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80458FCC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458FCC:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80458FEC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80458FEC:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80459010
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80459010:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	beq      lbl_80459044
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_8045903C
	li       r4, 7
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80459048

lbl_8045903C:
	li       r3, 0
	b        lbl_80459048

lbl_80459044:
	li       r3, 0

lbl_80459048:
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
 * Address:	80459060
 * Size:	0000F0
 */
PSM::ActorDirector_TrackOn* PSMGetBeedamaForOrimerD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045909C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045909C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_804590BC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804590BC:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_804590DC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804590DC:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80459100
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80459100:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_80459134
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_8045912C
	li       r4, 3
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80459138

lbl_8045912C:
	li       r3, 0
	b        lbl_80459138

lbl_80459134:
	li       r3, 0

lbl_80459138:
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
 * Address:	80459150
 * Size:	0000F0
 */
PSM::ActorDirector_TrackOn* PSMGetBeedamaForLugieD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045918C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045918C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_804591AC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804591AC:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_804591CC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804591CC:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_804591F0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804591F0:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_80459224
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_8045921C
	li       r4, 4
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80459228

lbl_8045921C:
	li       r3, 0
	b        lbl_80459228

lbl_80459224:
	li       r3, 0

lbl_80459228:
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
 * Address:	80459240
 * Size:	0000F0
 */
PSM::ActorDirector_TrackOn* PSMGetIchouForOrimerD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045927C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045927C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8045929C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045929C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_804592BC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804592BC:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_804592E0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804592E0:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_80459314
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_8045930C
	li       r4, 5
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80459318

lbl_8045930C:
	li       r3, 0
	b        lbl_80459318

lbl_80459314:
	li       r3, 0

lbl_80459318:
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
 * Address:	80459330
 * Size:	0000F0
 */
PSM::ActorDirector_TrackOn* PSMGetIchouForLugieD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045936C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045936C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8045938C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045938C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_804593AC
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804593AC:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_804593D0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804593D0:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_80459404
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_804593FC
	li       r4, 6
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_80459408

lbl_804593FC:
	li       r3, 0
	b        lbl_80459408

lbl_80459404:
	li       r3, 0

lbl_80459408:
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
 * Address:	80459420
 * Size:	0000F0
 */
PSM::TrackOnDirector_Voting* PSMGetPikiBattleD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8049CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8049CD98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045945C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045945C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8045947C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045947C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8045949C
	addi     r3, r31, 0x70
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045949C:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_804594C0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x7c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804594C0:
	mr       r3, r30
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 7
	bne      lbl_804594F4
	bl       PSGetDirectedMainBgm__Fv
	cmplwi   r3, 0
	beq      lbl_804594EC
	li       r4, 7
	bl       getDirectorP__Q28PSSystem11DirectedBgmFUc
	b        lbl_804594F8

lbl_804594EC:
	li       r3, 0
	b        lbl_804594F8

lbl_804594F4:
	li       r3, 0

lbl_804594F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
