#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    lbl_8049DA80:
        .asciz "PSMainSide_DirectorMgr.cpp"
        .skip 1
    lbl_8049DA9C:
        .asciz "P2Assert"
        .skip 3
        .asciz "caveglass.bms"
        .skip 2
        .asciz "caverelax.bms"
        .skip 2
        .asciz "/user/Totaka/trackMap_Seq_T.txt"
        .asciz "caveconc.bms"
        .skip 3
        .asciz "/user/Totaka/trackMap_Cond_T.txt"
        .skip 3
        .asciz "cavesoil.bms"
        .skip 3
        .asciz "cavemetal.bms"
        .skip 2
        .asciz "/user/Wakai/trackMap_Cond_W.txt"
        .asciz "/user/Wakai/trackMap_Seq_W.txt"
        .skip 1
        .asciz "track map is\nnot initialized\n"
        .skip 2
        .asciz "kehaiD   "
        .skip 2
        .asciz "battleD  "
        .skip 2
        .asciz "OtakaraD"
        .skip 3
        .asciz "GroundD  "
        .skip 2
        .asciz "PSGame.h"
        .skip 3
        .asciz "PSCommon.h"
        .skip 1
        .asciz "eventD   "
        .skip 2
        .asciz "OriBeedaD"
        .skip 2
        .asciz "RugBeedaD"
        .skip 2
        .asciz "OriIchouD"
        .skip 2
        .asciz "RouIchouD"
        .skip 2
        .asciz "PikBattlD"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    lbl_804EF880:
        .4byte lbl_8046F928
        .4byte lbl_8046FB60
        .4byte lbl_8046F9D8
        .4byte lbl_8046FA98
        .4byte lbl_8046FC0C
        .4byte lbl_8046FD34
        .4byte lbl_8046FEA8
        .4byte lbl_8046FF14
    lbl_804EF8A0:
        .4byte lbl_80470060
        .4byte lbl_80470068
        .4byte lbl_80470070
        .4byte lbl_80470078
        .4byte lbl_80470080
        .4byte lbl_80470088
        .4byte lbl_80470090
        .4byte lbl_80470098
    lbl_804EF8C0:
        .4byte lbl_80470518
        .4byte lbl_804705F8
        .4byte lbl_804706D4
        .4byte lbl_804707B0
        .4byte lbl_80470850
        .4byte lbl_804708F0
        .4byte lbl_804709C4
        .4byte lbl_80470A98
    .global __vt__Q23PSM20DirectorMgr_2PBattle
    __vt__Q23PSM20DirectorMgr_2PBattle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM20DirectorMgr_2PBattleFv
        .4byte
   newDirector__Q23PSM20DirectorMgr_2PBattleFUcRQ28PSSystem11DirectedBgm .4byte
   0 .4byte 0 .4byte "@12@__dt__Q23PSM20DirectorMgr_2PBattleFv" .global
   __vt__Q23PSM18DirectorMgr_Battle
    __vt__Q23PSM18DirectorMgr_Battle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM18DirectorMgr_BattleFv
        .4byte
   newDirector__Q23PSM18DirectorMgr_BattleFUcRQ28PSSystem11DirectedBgm .4byte 0
        .4byte 0
        .4byte "@12@__dt__Q23PSM18DirectorMgr_BattleFv"
    .global __vt__Q23PSM25DirectorMgr_Scene_AutoBgm
    __vt__Q23PSM25DirectorMgr_Scene_AutoBgm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv
        .4byte
   newDirector__Q23PSM17DirectorMgr_SceneFUcRQ28PSSystem11DirectedBgm .4byte 0
        .4byte 0
        .4byte "@12@__dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv"
        .4byte isSlave__Q23PSM17DirectorMgr_SceneFv
        .4byte
   newPikminNumberDirector__Q23PSM25DirectorMgr_Scene_AutoBgmFiUcRQ28PSSystem11DirectedBgm
    .global __vt__Q23PSM19GroundDirector_Cave
    __vt__Q23PSM19GroundDirector_Cave:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM19GroundDirector_CaveFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q23PSM19GroundDirector_CaveFv
        .4byte directOff__Q23PSM19GroundDirector_CaveFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q23PSM21ActorDirector_TrackOnFv
        .4byte
   directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase .4byte
   doUpdateRequest__Q28PSSystem16SwitcherDirectorFv .4byte
   onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack .4byte
   onDirectOn__Q28PSSystem12DirectorBaseFv .4byte
   onDirectOff__Q28PSSystem12DirectorBaseFv .global
   "__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"
    "__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>Fv"
    .global __vt__Q23PSM17DirectorMgr_Scene
    __vt__Q23PSM17DirectorMgr_Scene:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM17DirectorMgr_SceneFv
        .4byte
   newDirector__Q23PSM17DirectorMgr_SceneFUcRQ28PSSystem11DirectedBgm .4byte 0
        .4byte 0
        .4byte "@12@__dt__Q23PSM17DirectorMgr_SceneFv"
        .4byte isSlave__Q23PSM17DirectorMgr_SceneFv
        .4byte
   newPikminNumberDirector__Q23PSM17DirectorMgr_SceneFiUcRQ28PSSystem11DirectedBgm
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    lbl_80520D60:
        .asciz ""
        .skip 3
    lbl_80520D64:
        .asciz "new_"
        .skip 3
    lbl_80520D6C:
        .asciz "eventD"
        .skip 1
    lbl_80520D74:
        .float 200.0
    lbl_80520D78:
        .float 1500.0
    lbl_80520D7C:
        .asciz "PSSeq.h"
    lbl_80520D84:
        .float 300.0
    lbl_80520D88:
        .float 600.0
*/

namespace PSM {

/*
 * --INFO--
 * Address:	8046F2BC
 * Size:	0002D8
 */
DirectorMgr_Scene::DirectorMgr_Scene(PSM::DirectorMgr_Scene*, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	mr       r4, r5
	bl       __ct__Q28PSSystem15DirectorMgrBaseFUc
	addi     r3, r30, 0xc
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q23PSM17DirectorMgr_Scene@ha
	li       r3, 0
	addi     r4, r4, __vt__Q23PSM17DirectorMgr_Scene@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0xc(r30)
	stw      r28, 0x44(r30)
	stb      r3, 0x68(r30)
	stb      r3, 0x69(r30)
	stb      r3, 0x6a(r30)
	stb      r3, 0x6b(r30)
	stb      r3, 0x6c(r30)
	stb      r3, 0x6d(r30)
	b        lbl_8046F3AC

lbl_8046F328:
	clrlwi   r4, r3, 0x18
	addi     r0, r3, 1
	addi     r5, r4, 0x6e
	li       r6, 0
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r5, r4, 0x6e
	addi     r0, r3, 2
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r5, r4, 0x6e
	addi     r0, r3, 3
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r5, r4, 0x6e
	addi     r0, r3, 4
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r5, r4, 0x6e
	addi     r0, r3, 5
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r5, r4, 0x6e
	addi     r0, r3, 6
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r0, r3, 7
	addi     r3, r3, 8
	addi     r5, r4, 0x6e
	clrlwi   r4, r0, 0x18
	stbx     r6, r30, r5
	addi     r0, r4, 0x6e
	stbx     r6, r30, r0

lbl_8046F3AC:
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8046F328
	li       r0, 0
	addi     r3, r30, 0x48
	stb      r0, 0x7e(r30)
	addi     r4, r2, lbl_80520D60@sda21
	stb      r0, 0x7f(r30)
	stb      r0, 0x80(r30)
	stb      r0, 0x81(r30)
	stb      r0, 0x82(r30)
	stb      r0, 0x83(r30)
	stb      r0, 0x84(r30)
	stb      r0, 0x85(r30)
	bl       strcpy
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046F514
	li       r31, 0
	b        lbl_8046F504

lbl_8046F40C:
	clrlwi   r0, r31, 0x18
	cmpwi    r0, 4
	beq      lbl_8046F474
	bge      lbl_8046F428
	cmpwi    r0, 0
	bge      lbl_8046F434
	b        lbl_8046F4E4

lbl_8046F428:
	cmpwi    r0, 8
	bge      lbl_8046F4E4
	b        lbl_8046F4B4

lbl_8046F434:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8046F464
	li       r4, 0
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_8046F464:
	rlwinm   r3, r31, 2, 0x16, 0x1d
	addi     r0, r3, 0x24
	stwx     r29, r30, r0
	b        lbl_8046F500

lbl_8046F474:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8046F4A4
	li       r4, 0
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_8046F4A4:
	rlwinm   r3, r31, 2, 0x16, 0x1d
	addi     r0, r3, 0x24
	stwx     r29, r30, r0
	b        lbl_8046F500

lbl_8046F4B4:
	li       r3, 0xc
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8046F4D4
	li       r4, 0
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	mr       r4, r3

lbl_8046F4D4:
	rlwinm   r3, r31, 2, 0x16, 0x1d
	addi     r0, r3, 0x24
	stwx     r4, r30, r0
	b        lbl_8046F500

lbl_8046F4E4:
	lis      r3, lbl_8049DA80@ha
	lis      r5, lbl_8049DA9C@ha
	addi     r3, r3, lbl_8049DA80@l
	li       r4, 0x3c
	addi     r5, r5, lbl_8049DA9C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F500:
	addi     r31, r31, 1

lbl_8046F504:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 8
	blt      lbl_8046F40C
	b        lbl_8046F570

lbl_8046F514:
	lis      r4, lbl_8049DA80@ha
	lis      r3, lbl_8049DA9C@ha
	addi     r29, r4, lbl_8049DA80@l
	li       r28, 0
	addi     r31, r3, lbl_8049DA9C@l
	b        lbl_8046F564

lbl_8046F52C:
	rlwinm   r4, r28, 2, 0x16, 0x1d
	lwz      r3, 0x44(r30)
	addi     r0, r4, 0x24
	lwzx     r3, r3, r0
	stwx     r3, r30, r0
	lwzx     r0, r30, r0
	cmplwi   r0, 0
	bne      lbl_8046F560
	mr       r3, r29
	mr       r5, r31
	li       r4, 0x45
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F560:
	addi     r28, r28, 1

lbl_8046F564:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 8
	blt      lbl_8046F52C

lbl_8046F570:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	8046F594
 * Size:	00008C
 */
DirectorMgr_Scene::~DirectorMgr_Scene()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8046F604
	lis      r4, __vt__Q23PSM17DirectorMgr_Scene@ha
	addi     r3, r30, 0xc
	addi     r5, r4, __vt__Q23PSM17DirectorMgr_Scene@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0xc(r30)
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_8046F5F4
	lis      r4, __vt__Q28PSSystem15DirectorMgrBase@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q28PSSystem15DirectorMgrBase@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_8046F5F4:
	extsh.   r0, r31
	ble      lbl_8046F604
	mr       r3, r30
	bl       __dl__FPv

lbl_8046F604:
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
 * Address:	8046F620
 * Size:	000294
 */
void DirectorMgr_Scene::initTrackMap(PSSystem::DirectedBgm&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r5, lbl_8049DA80@ha
	stw      r0, 0x94(r1)
	stmw     r27, 0x7c(r1)
	mr       r31, r3
	mr       r27, r4
	addi     r3, r1, 0x48
	addi     r30, r5, lbl_8049DA80@l
	li       r4, 0
	bl       __ct__Q23PSM15BgmTrackMapFileFb
	lwz      r29, 0x14(r27)
	addi     r4, r30, 0x28
	mr       r28, r29
	mr       r3, r29
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_8046F67C
	mr       r3, r29
	addi     r4, r30, 0x38
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8046F684

lbl_8046F67C:
	addi     r29, r30, 0x48
	b        lbl_8046F7A4

lbl_8046F684:
	mr       r3, r29
	addi     r4, r30, 0x68
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8046F6D8
	mr       r3, r27
	addi     r29, r30, 0x78
	lwz      r12, 0x10(r27)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_8046F6D0
	addi     r3, r30, 0
	addi     r5, r30, 0x1c
	li       r4, 0x74
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F6D0:
	lwz      r28, 0x330(r27)
	b        lbl_8046F7A4

lbl_8046F6D8:
	addi     r3, r2, lbl_80520D64@sda21
	bl       strlen
	mr       r5, r3
	mr       r4, r29
	addi     r3, r2, lbl_80520D64@sda21
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_8046F738
	mr       r3, r27
	addi     r29, r30, 0x78
	lwz      r12, 0x10(r27)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_8046F730
	addi     r3, r30, 0
	addi     r5, r30, 0x1c
	li       r4, 0x7e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F730:
	lwz      r28, 0x330(r27)
	b        lbl_8046F7A4

lbl_8046F738:
	mr       r3, r29
	addi     r4, r30, 0x9c
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_8046F760
	mr       r3, r29
	addi     r4, r30, 0xac
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8046F7A0

lbl_8046F760:
	mr       r3, r27
	addi     r29, r30, 0xbc
	lwz      r12, 0x10(r27)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_8046F798
	addi     r3, r30, 0
	addi     r5, r30, 0x1c
	li       r4, 0x8b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F798:
	lwz      r28, 0x330(r27)
	b        lbl_8046F7A4

lbl_8046F7A0:
	addi     r29, r30, 0xdc

lbl_8046F7A4:
	mr       r4, r29
	addi     r3, r1, 0x48
	li       r5, 2
	bl onlyLoad__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection
	mr       r5, r28
	addi     r3, r1, 8
	addi     r4, r1, 0x48
	bl       readTrackMap__Q23PSM15BgmTrackMapFileFPCc
	lwz      r0, 8(r1)
	lis      r3, __vt__Q23PSM15BgmTrackMapFile@ha
	lwz      r4, 0xc(r1)
	addic.   r5, r1, 0x64
	addi     r3, r3, __vt__Q23PSM15BgmTrackMapFile@l
	stw      r0, 0x48(r31)
	addi     r0, r3, 0x10
	stw      r4, 0x4c(r31)
	lwz      r5, 0x10(r1)
	lwz      r4, 0x14(r1)
	stw      r5, 0x50(r31)
	stw      r4, 0x54(r31)
	lwz      r5, 0x18(r1)
	lwz      r4, 0x1c(r1)
	stw      r5, 0x58(r31)
	stw      r4, 0x5c(r31)
	lwz      r5, 0x20(r1)
	lwz      r4, 0x24(r1)
	stw      r5, 0x60(r31)
	stw      r4, 0x64(r31)
	lbz      r4, 0x28(r1)
	stb      r4, 0x68(r31)
	lbz      r4, 0x29(r1)
	stb      r4, 0x69(r31)
	lbz      r4, 0x2a(r1)
	stb      r4, 0x6a(r31)
	lbz      r4, 0x2b(r1)
	stb      r4, 0x6b(r31)
	lbz      r4, 0x2c(r1)
	stb      r4, 0x6c(r31)
	lbz      r4, 0x2d(r1)
	stb      r4, 0x6d(r31)
	lwz      r5, 0x2e(r1)
	lwz      r4, 0x32(r1)
	stw      r5, 0x6e(r31)
	stw      r4, 0x72(r31)
	lwz      r5, 0x36(r1)
	lwz      r4, 0x3a(r1)
	stw      r5, 0x76(r31)
	stw      r4, 0x7a(r31)
	lwz      r5, 0x3e(r1)
	lwz      r4, 0x42(r1)
	stw      r5, 0x7e(r31)
	stw      r4, 0x82(r31)
	stw      r3, 0x48(r1)
	stw      r0, 0x64(r1)
	beq      lbl_8046F894
	lis      r3, "__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@ha
	li       r0, 0
	addi     r3, r3,
"__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@l stw      r0,
"sInstance__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@sda21(r13) stw
r3, 0x64(r1)

lbl_8046F894:
	addi     r3, r1, 0x48
	li       r4, 0
	bl       __dt__Q28PSSystem12TextDataBaseFv
	lmw      r27, 0x7c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8046F8B4
 * Size:	000770
 */
void DirectorMgr_Scene::newDirector(unsigned char, PSSystem::DirectedBgm&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r22, 8(r1)
	mr       r29, r3
	lis      r3, lbl_8049DA80@ha
	mr       r27, r4
	addi     r26, r29, 0x48
	mr       r30, r5
	addi     r31, r3, lbl_8049DA80@l
	lbz      r0, 0x68(r29)
	cmplwi   r0, 0
	bne      lbl_8046F8FC
	addi     r3, r31, 0
	addi     r5, r31, 0xfc
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F8FC:
	clrlwi   r0, r27, 0x18
	li       r25, 0
	cmplwi   r0, 7
	li       r28, 0
	bgt      lbl_8046FF7C
	lis      r3, lbl_804EF880@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804EF880@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_8046F928:
	li       r3, 0x68
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8046F95C
	lbz      r5, 0x21(r26)
	addi     r4, r2, lbl_80520D6C@sda21
	lfs      f1, lbl_80520D74@sda21(r2)
	li       r6, 0x64
	lfs      f2, lbl_80520D78@sda21(r2)
	li       r7, 0x64
	li       r8, 0x64
	bl       __ct__Q23PSM20ActorDirector_ScaledFPCciffllUl
	mr       r0, r3

lbl_8046F95C:
	cmplwi   r0, 0
	mr       r25, r0
	bne      lbl_8046F97C
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0xad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F97C:
	li       r23, 0
	b        lbl_8046F9C4

lbl_8046F984:
	lbz      r0, 0x20(r26)
	add      r24, r3, r0
	cmpwi    r24, 0x10
	blt      lbl_8046F9A8
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046F9A8:
	slwi     r4, r24, 2
	mr       r3, r25
	addi     r0, r4, 0x74
	mr       r4, r23
	lwzx     r5, r30, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r23, r23, 1

lbl_8046F9C4:
	lbz      r0, 0x21(r26)
	clrlwi   r3, r23, 0x18
	cmpw     r3, r0
	blt      lbl_8046F984
	b        lbl_8046FF7C

lbl_8046F9D8:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8046FA0C
	lbz      r5, 0x23(r26)
	addi     r4, r31, 0x11c
	li       r6, 0x64
	li       r7, 0x64
	li       r8, 0x64
	bl       __ct__Q23PSM19ActorDirector_EnemyFPCcillUl
	lis      r3, __vt__Q23PSM19ActorDirector_Kehai@ha
	addi     r0, r3, __vt__Q23PSM19ActorDirector_Kehai@l
	stw      r0, 0(r24)

lbl_8046FA0C:
	cmplwi   r24, 0
	mr       r25, r24
	bne      lbl_8046FA2C
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0xbc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FA2C:
	li       r23, 0
	b        lbl_8046FA84

lbl_8046FA34:
	lbz      r4, 0x22(r26)
	lbz      r0, 0x20(r26)
	lbz      r3, 0x21(r26)
	add      r0, r0, r4
	add      r24, r0, r5
	add      r24, r3, r24
	cmpwi    r24, 0x10
	blt      lbl_8046FA68
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FA68:
	slwi     r4, r24, 2
	mr       r3, r25
	addi     r0, r4, 0x74
	mr       r4, r23
	lwzx     r5, r30, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r23, r23, 1

lbl_8046FA84:
	lbz      r0, 0x23(r26)
	clrlwi   r5, r23, 0x18
	cmpw     r5, r0
	blt      lbl_8046FA34
	b        lbl_8046FF7C

lbl_8046FA98:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8046FACC
	lbz      r5, 0x24(r26)
	addi     r4, r31, 0x128
	li       r6, 0x64
	li       r7, 0x64
	li       r8, 0x64
	bl       __ct__Q23PSM19ActorDirector_EnemyFPCcillUl
	lis      r3, __vt__Q23PSM20ActorDirector_Battle@ha
	addi     r0, r3, __vt__Q23PSM20ActorDirector_Battle@l
	stw      r0, 0(r24)

lbl_8046FACC:
	cmplwi   r24, 0
	mr       r25, r24
	bne      lbl_8046FAEC
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0xce
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FAEC:
	li       r24, 0
	b        lbl_8046FB4C

lbl_8046FAF4:
	lbz      r3, 0x22(r26)
	lbz      r0, 0x20(r26)
	lbz      r4, 0x23(r26)
	add      r0, r0, r3
	lbz      r3, 0x21(r26)
	add      r0, r0, r4
	add      r23, r0, r5
	add      r23, r3, r23
	cmpwi    r23, 0x10
	blt      lbl_8046FB30
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FB30:
	slwi     r4, r23, 2
	mr       r3, r25
	addi     r0, r4, 0x74
	mr       r4, r24
	lwzx     r5, r30, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r24, r24, 1

lbl_8046FB4C:
	lbz      r0, 0x24(r26)
	clrlwi   r5, r24, 0x18
	cmpw     r5, r0
	blt      lbl_8046FAF4
	b        lbl_8046FF7C

lbl_8046FB60:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8046FB88
	lbz      r5, 0x22(r26)
	addi     r4, r31, 0x134
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM21ActorDirector_TrackOnFPCcill
	mr       r0, r3

lbl_8046FB88:
	cmplwi   r0, 0
	mr       r25, r0
	bne      lbl_8046FBA8
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0xdb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FBA8:
	li       r24, 0
	b        lbl_8046FBF8

lbl_8046FBB0:
	lbz      r0, 0x20(r26)
	lbz      r3, 0x21(r26)
	add      r23, r0, r4
	add      r23, r3, r23
	cmpwi    r23, 0x10
	blt      lbl_8046FBDC
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FBDC:
	slwi     r4, r23, 2
	mr       r3, r25
	addi     r0, r4, 0x74
	mr       r4, r24
	lwzx     r5, r30, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r24, r24, 1

lbl_8046FBF8:
	lbz      r0, 0x22(r26)
	clrlwi   r4, r24, 0x18
	cmpw     r4, r0
	blt      lbl_8046FBB0
	b        lbl_8046FF7C

lbl_8046FC0C:
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_8046FC64
	li       r3, 0x58
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8046FC5C
	lbz      r5, 0x25(r26)
	addi     r4, r31, 0x140
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM21ActorDirector_TrackOnFPCcill
	lis      r3, __vt__Q23PSM19GroundDirector_Cave@ha
	addi     r0, r3, __vt__Q23PSM19GroundDirector_Cave@l
	stw      r0, 0(r23)

lbl_8046FC5C:
	mr       r25, r23
	b        lbl_8046FC9C

lbl_8046FC64:
	li       r3, 0x68
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8046FC98
	lbz      r5, 0x25(r26)
	addi     r4, r31, 0x140
	lfs      f1, lbl_80520D84@sda21(r2)
	li       r6, 0xc8
	lfs      f2, lbl_80520D88@sda21(r2)
	li       r7, 0xc8
	li       r8, 0xa
	bl       __ct__Q23PSM20ActorDirector_ScaledFPCciffllUl
	mr       r0, r3

lbl_8046FC98:
	mr       r25, r0

lbl_8046FC9C:
	cmplwi   r25, 0
	bne      lbl_8046FCB8
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x113
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FCB8:
	li       r24, 0
	b        lbl_8046FD20

lbl_8046FCC0:
	lbz      r3, 0x22(r26)
	lbz      r0, 0x20(r26)
	lbz      r4, 0x23(r26)
	add      r0, r0, r3
	lbz      r5, 0x24(r26)
	add      r0, r0, r4
	lbz      r3, 0x21(r26)
	add      r0, r0, r5
	add      r23, r0, r6
	add      r23, r3, r23
	cmpwi    r23, 0x10
	blt      lbl_8046FD04
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FD04:
	slwi     r4, r23, 2
	mr       r3, r25
	addi     r0, r4, 0x74
	mr       r4, r24
	lwzx     r5, r30, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r24, r24, 1

lbl_8046FD20:
	lbz      r0, 0x25(r26)
	clrlwi   r6, r24, 0x18
	cmpw     r6, r0
	blt      lbl_8046FCC0
	b        lbl_8046FF7C

lbl_8046FD34:
	li       r4, 0
	mr       r5, r4
	b        lbl_8046FD5C

lbl_8046FD40:
	clrlwi   r3, r5, 0x18
	addi     r0, r3, 0x26
	lbzx     r0, r26, r0
	cmplwi   r0, 0
	beq      lbl_8046FD58
	addi     r4, r4, 1

lbl_8046FD58:
	addi     r5, r5, 1

lbl_8046FD5C:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8046FD40
	li       r5, 0
	mr       r6, r5
	b        lbl_8046FD9C

lbl_8046FD74:
	clrlwi   r3, r6, 0x18
	addi     r0, r3, 0x36
	lbzx     r0, r26, r0
	cmplwi   r0, 0
	beq      lbl_8046FD98
	clrlwi   r0, r0, 0x18
	slw      r0, r0, r3
	or       r0, r5, r0
	clrlwi   r5, r0, 0x18

lbl_8046FD98:
	addi     r6, r6, 1

lbl_8046FD9C:
	clrlwi   r0, r6, 0x18
	cmplwi   r0, 8
	blt      lbl_8046FD74
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r6, r30
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_8046FDDC
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x122
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FDDC:
	li       r23, 0
	li       r22, 0
	b        lbl_8046FE38

lbl_8046FDE8:
	clrlwi   r24, r22, 0x18
	addi     r0, r24, 0x26
	lbzx     r0, r26, r0
	cmplwi   r0, 0
	beq      lbl_8046FE34
	cmpwi    r24, 0x10
	blt      lbl_8046FE18
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FE18:
	slwi     r3, r24, 2
	mr       r4, r23
	addi     r0, r3, 0x74
	mr       r3, r25
	lwzx     r5, r30, r0
	addi     r23, r23, 1
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase

lbl_8046FE34:
	addi     r22, r22, 1

lbl_8046FE38:
	clrlwi   r0, r22, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8046FDE8
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_8046FF7C
	li       r5, 0
	mr       r4, r5
	b        lbl_8046FE94

lbl_8046FE70:
	clrlwi   r3, r4, 0x18
	addi     r0, r3, 0x26
	lbzx     r0, r26, r0
	cmplwi   r0, 0
	beq      lbl_8046FE90
	slw      r0, r0, r3
	or       r0, r5, r0
	clrlwi   r5, r0, 0x10

lbl_8046FE90:
	addi     r4, r4, 1

lbl_8046FE94:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 0x10
	blt      lbl_8046FE70
	sth      r5, 0x34c(r30)
	b        lbl_8046FF7C

lbl_8046FEA8:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8046FEC0
	bl       __ct__Q23PSM14DamageDirectorFv
	mr       r4, r3

lbl_8046FEC0:
	lbz      r0, 0xb4(r30)
	mr       r28, r4
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_8046FEE4
	lwz      r0, 0x70(r30)
	cmplwi   r0, 0
	beq      lbl_8046FEE4
	li       r3, 1

lbl_8046FEE4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046FF00
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FF00:
	lwz      r5, 0x70(r30)
	mr       r3, r28
	li       r4, 0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	b        lbl_8046FF7C

lbl_8046FF14:
	li       r3, 0x54
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8046FF2C
	bl       __ct__Q23PSM25ActorDirector_TempoChangeFv
	mr       r4, r3

lbl_8046FF2C:
	lbz      r0, 0xb4(r30)
	mr       r25, r4
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_8046FF50
	lwz      r0, 0x70(r30)
	cmplwi   r0, 0
	beq      lbl_8046FF50
	li       r3, 1

lbl_8046FF50:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046FF6C
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FF6C:
	lwz      r5, 0x70(r30)
	mr       r3, r25
	li       r4, 0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase

lbl_8046FF7C:
	cmplwi   r25, 0
	li       r22, 0
	bne      lbl_8046FF98
	cmplwi   r28, 0
	beq      lbl_8046FF98
	mr       r22, r28
	b        lbl_8046FFAC

lbl_8046FF98:
	cmplwi   r25, 0
	beq      lbl_8046FFAC
	cmplwi   r28, 0
	bne      lbl_8046FFAC
	mr       r22, r25

lbl_8046FFAC:
	cmplwi   r22, 0
	bne      lbl_8046FFC8
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x14e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046FFC8:
	lwz      r12, 0(r29)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	add      r4, r29, r0
	mr       r3, r29
	lwz      r12, 0x1c(r12)
	lwz      r23, 0x24(r4)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046FFF8
	stw      r22, 8(r23)
	b        lbl_8046FFFC

lbl_8046FFF8:
	stw      r22, 4(r23)

lbl_8046FFFC:
	mr       r3, r29
	mr       r4, r22
	mr       r5, r27
	bl
adaptDirectorActor__Q23PSM17DirectorMgr_SceneFPQ28PSSystem12DirectorBaseUc mr
r3, r22 lmw      r22, 8(r1) lwz      r0, 0x34(r1) mtlr     r0 addi     r1, r1,
0x30 blr
	*/
}

/*
 * --INFO--
 * Address:	80470024
 * Size:	0000A8
 */
void DirectorMgr_Scene::adaptDirectorActor(PSSystem::DirectorBase*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r6,r5,0,24,31
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r5,2,22,29
	  add       r3, r3, r0
	  cmplwi    r6, 0x7
	  lwz       r5, 0x24(r3)
	  bgt-      .loc_0x7C
	  lis       r3, 0x804F
	  rlwinm    r0,r6,2,0,29
	  subi      r3, r3, 0x760
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  stw       r5, 0x64(r4)
	  b         .loc_0x98
	  stw       r5, 0x54(r4)
	  b         .loc_0x98
	  stw       r5, 0x64(r4)
	  b         .loc_0x98
	  stw       r5, 0x64(r4)
	  b         .loc_0x98
	  stw       r5, 0x64(r4)
	  b         .loc_0x98
	  stw       r5, 0x48(r4)
	  b         .loc_0x98
	  stw       r5, 0x48(r4)
	  b         .loc_0x98
	  stw       r5, 0x50(r4)
	  b         .loc_0x98

	.loc_0x7C:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x2580
	  li        r4, 0x195
	  subi      r5, r5, 0x2564
	  crclr     6, 0x6
	  bl        -0x445A78

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804700CC
 * Size:	000094
 */
void DirectorMgr_Scene::newPikminNumberDirector(int, unsigned char, PSSystem::DirectedBgm&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r3, 0x50
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  bl        -0x44C254
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  bl        -0x19278
	  mr        r31, r3

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x70
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x2580
	  li        r4, 0x19C
	  subi      r5, r5, 0x2564
	  crclr     6, 0x6
	  bl        -0x445AF8

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80470160
 * Size:	000090
 */
void DirectorMgr_Scene_AutoBgm::newPikminNumberDirector(int, unsigned char, PSSystem::DirectedBgm&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r3, 0x54
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        -0x44C2E4
	  mr.       r0, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        -0x191DC
	  mr        r0, r3

	.loc_0x48:
	  cmplwi    r0, 0
	  mr        r31, r0
	  bne-      .loc_0x70
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x2580
	  li        r4, 0x1A9
	  subi      r5, r5, 0x2564
	  crclr     6, 0x6
	  bl        -0x445B8C

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804701F0
 * Size:	000050
 */
DirectorMgr_Battle::DirectorMgr_Battle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28PSSystem15DirectorMgrBaseFUc
	addi     r3, r31, 0xc
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q23PSM18DirectorMgr_Battle@ha
	mr       r3, r31
	addi     r4, r4, __vt__Q23PSM18DirectorMgr_Battle@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x10
	stw      r0, 0xc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80470240
 * Size:	000244
 */
void DirectorMgr_Battle::newDirector(unsigned char, PSSystem::DirectedBgm&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r3, lbl_8049DA80@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r4
	mr       r27, r5
	addi     r31, r3, lbl_8049DA80@l
	li       r30, 0
	li       r29, 0xff
	li       r28, 0xff
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8047028C
	addi     r3, r31, 0x14c
	addi     r5, r31, 0x1c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8047028C:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_804702AC
	addi     r3, r31, 0x14c
	addi     r5, r31, 0x1c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804702AC:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r25, 0x18
	cmpwi    r0, 1
	beq      lbl_80470378
	bge      lbl_804703B4
	cmpwi    r0, 0
	bge      lbl_804702DC
	b        lbl_804703B4

lbl_804702DC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_804702F0
	li       r28, 0xe
	li       r29, 1
	b        lbl_804702F8

lbl_804702F0:
	li       r28, 0xa
	li       r29, 1

lbl_804702F8:
	li       r3, 0x54
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80470314
	clrlwi   r4, r29, 0x18
	bl       __ct__Q23PSM17PikAttackDirectorFi
	mr       r0, r3

lbl_80470314:
	lwz      r26,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13) mr
r30, r0 cmplwi   r26, 0 beq      lbl_804703B4 bne      lbl_8047033C addi     r3,
r31, 0x158 addi     r5, r31, 0x1c li       r4, 0x89 crclr    6 bl
panic_f__12JUTExceptionFPCciPCce

lbl_8047033C:
	lwz      r3,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13) lwz
r0, 0xc(r3) clrlwi.  r25, r0, 0x18 beq      lbl_804703B4 li       r3, 0x10 bl
__nw__FUl or.      r0, r3, r3 beq      lbl_80470370 mr       r4, r30 mr r5, r25
	li       r6, 0
	bl
__ct__Q23PSM15DirectorUpdatorFPQ28PSSystem12DirectorBaseUcQ33PSM15DirectorUpdator4Type
	mr       r0, r3

lbl_80470370:
	stw      r0, 0x34(r26)
	b        lbl_804703B4

lbl_80470378:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8047038C
	li       r28, 0xf
	li       r29, 1
	b        lbl_80470394

lbl_8047038C:
	li       r28, 0xb
	li       r29, 1

lbl_80470394:
	li       r3, 0x54
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804703B0
	clrlwi   r4, r29, 0x18
	bl       __ct__Q23PSM13ExiteDirectorFi
	mr       r0, r3

lbl_804703B0:
	mr       r30, r0

lbl_804703B4:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 0xff
	bne      lbl_804703D4
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x1ef
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804703D4:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 0xff
	bne      lbl_804703F4
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x1f0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804703F4:
	cmplwi   r30, 0
	bne      lbl_80470410
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x1f1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470410:
	clrlwi   r26, r28, 0x18
	clrlwi   r28, r29, 0x18
	li       r25, 0
	b        lbl_80470460

lbl_80470420:
	clrlwi   r0, r25, 0x18
	add      r29, r26, r0
	cmpwi    r29, 0x10
	blt      lbl_80470444
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470444:
	slwi     r4, r29, 2
	mr       r3, r30
	addi     r0, r4, 0x74
	mr       r4, r25
	lwzx     r5, r27, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r25, r25, 1

lbl_80470460:
	clrlwi   r0, r25, 0x18
	cmplw    r0, r28
	blt      lbl_80470420
	mr       r3, r30
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80470484
 * Size:	000050
 */
DirectorMgr_2PBattle::DirectorMgr_2PBattle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 8
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28PSSystem15DirectorMgrBaseFUc
	addi     r3, r31, 0xc
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q23PSM20DirectorMgr_2PBattle@ha
	mr       r3, r31
	addi     r4, r4, __vt__Q23PSM20DirectorMgr_2PBattle@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x10
	stw      r0, 0xc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804704D4
 * Size:	0006B8
 */
void DirectorMgr_2PBattle::newDirector(unsigned char, PSSystem::DirectedBgm&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_8049DA80@ha
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 7
	stmw     r27, 0xc(r1)
	mr       r29, r5
	addi     r31, r3, lbl_8049DA80@l
	li       r30, 0
	bgt      lbl_80470B44
	lis      r3, lbl_804EF8C0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804EF8C0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80470518:
	li       r3, 0x68
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8047054C
	lfs      f1, lbl_80520D74@sda21(r2)
	addi     r4, r31, 0x164
	lfs      f2, lbl_80520D78@sda21(r2)
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	li       r8, 0x64
	bl       __ct__Q23PSM20ActorDirector_ScaledFPCciffllUl
	mr       r0, r3

lbl_8047054C:
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_8047056C
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x267
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8047056C:
	li       r27, 0
	b        lbl_804705B4

lbl_80470574:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 8
	cmpwi    r0, 0x10
	blt      lbl_80470598
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470598:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0x94
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_804705B4:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_80470574
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_804705F0
	mr       r4, r30
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_804705F0:
	stw      r29, 0x64(r30)
	b        lbl_80470B58

lbl_804705F8:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8047062C
	addi     r4, r31, 0x11c
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	li       r8, 0x64
	bl       __ct__Q23PSM19ActorDirector_EnemyFPCcillUl
	lis      r3, __vt__Q23PSM19ActorDirector_Kehai@ha
	addi     r0, r3, __vt__Q23PSM19ActorDirector_Kehai@l
	stw      r0, 0(r30)

lbl_8047062C:
	cmplwi   r30, 0
	bne      lbl_80470648
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x273
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470648:
	li       r27, 0
	b        lbl_80470690

lbl_80470650:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 9
	cmpwi    r0, 0x10
	blt      lbl_80470674
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470674:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0x98
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_80470690:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_80470650
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_804706CC
	mr       r4, r30
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_804706CC:
	stw      r29, 0x64(r30)
	b        lbl_80470B58

lbl_804706D4:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80470708
	addi     r4, r31, 0x128
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	li       r8, 0x64
	bl       __ct__Q23PSM19ActorDirector_EnemyFPCcillUl
	lis      r3, __vt__Q23PSM20ActorDirector_Battle@ha
	addi     r0, r3, __vt__Q23PSM20ActorDirector_Battle@l
	stw      r0, 0(r30)

lbl_80470708:
	cmplwi   r30, 0
	bne      lbl_80470724
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x27f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470724:
	li       r27, 0
	b        lbl_8047076C

lbl_8047072C:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 0xa
	cmpwi    r0, 0x10
	blt      lbl_80470750
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470750:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0x9c
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_8047076C:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_8047072C
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_804707A8
	mr       r4, r30
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_804707A8:
	stw      r29, 0x64(r30)
	b        lbl_80470B58

lbl_804707B0:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804707D8
	addi     r4, r31, 0x170
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM21ActorDirector_TrackOnFPCcill
	mr       r0, r3

lbl_804707D8:
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_804707F8
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x296
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804707F8:
	li       r27, 0
	b        lbl_80470840

lbl_80470800:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 0xb
	cmpwi    r0, 0x10
	blt      lbl_80470824
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470824:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0xa0
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_80470840:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_80470800
	b        lbl_80470B58

lbl_80470850:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80470878
	addi     r4, r31, 0x17c
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM21ActorDirector_TrackOnFPCcill
	mr       r0, r3

lbl_80470878:
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_80470898
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x2bb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470898:
	li       r27, 0
	b        lbl_804708E0

lbl_804708A0:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 0xc
	cmpwi    r0, 0x10
	blt      lbl_804708C4
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804708C4:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0xa4
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_804708E0:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_804708A0
	b        lbl_80470B58

lbl_804708F0:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80470918
	addi     r4, r31, 0x188
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM21ActorDirector_TrackOnFPCcill
	mr       r0, r3

lbl_80470918:
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_80470938
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x2d9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470938:
	li       r27, 0
	b        lbl_80470980

lbl_80470940:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 0xd
	cmpwi    r0, 0x10
	blt      lbl_80470964
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470964:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0xa8
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_80470980:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_80470940
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_804709BC
	mr       r4, r30
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_804709BC:
	stw      r29, 0x54(r30)
	b        lbl_80470B58

lbl_804709C4:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804709EC
	addi     r4, r31, 0x194
	li       r5, 1
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM21ActorDirector_TrackOnFPCcill
	mr       r0, r3

lbl_804709EC:
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_80470A0C
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x2f5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470A0C:
	li       r27, 0
	b        lbl_80470A54

lbl_80470A14:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 0xe
	cmpwi    r0, 0x10
	blt      lbl_80470A38
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470A38:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0xac
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_80470A54:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_80470A14
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80470A90
	mr       r4, r30
	li       r5, 0
	bl
__ct__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBasePQ28PSSystem12DirectorBase
	addi     r3, r29, 0xc
	bl       initiate__10JSUPtrListFv
	lis      r3, __vt__Q23PSM17ListDirectorActor@ha
	addi     r0, r3, __vt__Q23PSM17ListDirectorActor@l
	stw      r0, 0(r29)

lbl_80470A90:
	stw      r29, 0x54(r30)
	b        lbl_80470B58

lbl_80470A98:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80470AD0
	addi     r5, r31, 0x1a0
	li       r4, 1
	li       r6, 0x64
	li       r7, 0x64
	bl       __ct__Q23PSM19TrackOnDirectorBaseFiPCcll
	lis      r3, __vt__Q23PSM22TrackOnDirector_Voting@ha
	li       r0, 0
	addi     r3, r3, __vt__Q23PSM22TrackOnDirector_Voting@l
	stw      r3, 0(r30)
	stb      r0, 0x54(r30)

lbl_80470AD0:
	cmplwi   r30, 0
	bne      lbl_80470AEC
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x310
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470AEC:
	li       r27, 0
	b        lbl_80470B34

lbl_80470AF4:
	clrlwi   r28, r27, 0x18
	addi     r0, r28, 0xf
	cmpwi    r0, 0x10
	blt      lbl_80470B18
	addi     r5, r31, 0x1c
	addi     r3, r2, lbl_80520D7C@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470B18:
	slwi     r4, r28, 2
	mr       r3, r30
	addi     r0, r4, 0xb0
	mr       r4, r27
	lwzx     r5, r29, r0
	bl       setTrack__Q28PSSystem12DirectorBaseFUcPQ28PSSystem12SeqTrackBase
	addi     r27, r27, 1

lbl_80470B34:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 1
	blt      lbl_80470AF4
	b        lbl_80470B58

lbl_80470B44:
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x317
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470B58:
	cmplwi   r30, 0
	bne      lbl_80470B74
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x31d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80470B74:
	mr       r3, r30
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80470B8C
 * Size:	00008C
 */
DirectorMgr_2PBattle::~DirectorMgr_2PBattle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80470BFC
	lis      r4, __vt__Q23PSM20DirectorMgr_2PBattle@ha
	addi     r3, r30, 0xc
	addi     r5, r4, __vt__Q23PSM20DirectorMgr_2PBattle@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0xc(r30)
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_80470BEC
	lis      r4, __vt__Q28PSSystem15DirectorMgrBase@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q28PSSystem15DirectorMgrBase@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_80470BEC:
	extsh.   r0, r31
	ble      lbl_80470BFC
	mr       r3, r30
	bl       __dl__FPv

lbl_80470BFC:
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
 * Address:	80470C18
 * Size:	00008C
 */
DirectorMgr_Battle::~DirectorMgr_Battle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80470C88
	lis      r4, __vt__Q23PSM18DirectorMgr_Battle@ha
	addi     r3, r30, 0xc
	addi     r5, r4, __vt__Q23PSM18DirectorMgr_Battle@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0xc(r30)
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_80470C78
	lis      r4, __vt__Q28PSSystem15DirectorMgrBase@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q28PSSystem15DirectorMgrBase@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_80470C78:
	extsh.   r0, r31
	ble      lbl_80470C88
	mr       r3, r30
	bl       __dl__FPv

lbl_80470C88:
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
 * Address:	80470CA4
 * Size:	0000A4
 */
DirectorMgr_Scene_AutoBgm::~DirectorMgr_Scene_AutoBgm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80470D2C
	lis      r3, __vt__Q23PSM25DirectorMgr_Scene_AutoBgm@ha
	addi     r3, r3, __vt__Q23PSM25DirectorMgr_Scene_AutoBgm@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x10
	stw      r0, 0xc(r30)
	beq      lbl_80470D1C
	lis      r4, __vt__Q23PSM17DirectorMgr_Scene@ha
	addi     r3, r30, 0xc
	addi     r5, r4, __vt__Q23PSM17DirectorMgr_Scene@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0xc(r30)
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_80470D1C
	lis      r4, __vt__Q28PSSystem15DirectorMgrBase@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q28PSSystem15DirectorMgrBase@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_80470D1C:
	extsh.   r0, r31
	ble      lbl_80470D2C
	mr       r3, r30
	bl       __dl__FPv

lbl_80470D2C:
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
 * Address:	80470D48
 * Size:	000014
 */
void DirectorMgr_Scene::isSlave()
{
	/*
	lwz      r3, 0x44(r3)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80470D5C
 * Size:	000088
 */
BgmTrackMapFile::~BgmTrackMapFile()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80470DC8
	lis      r3, __vt__Q23PSM15BgmTrackMapFile@ha
	addic.   r0, r30, 0x1c
	addi     r3, r3, __vt__Q23PSM15BgmTrackMapFile@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x10
	stw      r0, 0x1c(r30)
	beq      lbl_80470DAC
	lis      r3, "__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@ha
	li       r0, 0
	addi     r3, r3,
"__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@l stw      r3,
0x1c(r30) stw      r0,
"sInstance__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@sda21(r13)

lbl_80470DAC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q28PSSystem12TextDataBaseFv
	extsh.   r0, r31
	ble      lbl_80470DC8
	mr       r3, r30
	bl       __dl__FPv

lbl_80470DC8:
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
 * Address:	80470DE4
 * Size:	0000B0
 */
GroundDirector_Cave::~GroundDirector_Cave()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80470E78
	lis      r4, __vt__Q23PSM19GroundDirector_Cave@ha
	addi     r0, r4, __vt__Q23PSM19GroundDirector_Cave@l
	stw      r0, 0(r30)
	beq      lbl_80470E68
	lis      r4, __vt__Q23PSM21ActorDirector_TrackOn@ha
	addi     r0, r4, __vt__Q23PSM21ActorDirector_TrackOn@l
	stw      r0, 0(r30)
	beq      lbl_80470E68
	lis      r4, __vt__Q23PSM19TrackOnDirectorBase@ha
	addi     r0, r4, __vt__Q23PSM19TrackOnDirectorBase@l
	stw      r0, 0(r30)
	beq      lbl_80470E68
	lis      r4, __vt__Q23PSM16SwitcherDirector@ha
	addi     r0, r4, __vt__Q23PSM16SwitcherDirector@l
	stw      r0, 0(r30)
	beq      lbl_80470E68
	lis      r4, __vt__Q28PSSystem16SwitcherDirector@ha
	addi     r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
	stw      r0, 0(r30)
	beq      lbl_80470E68
	lis      r5, __vt__Q28PSSystem12DirectorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28PSSystem12DirectorBase@l
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_80470E68:
	extsh.   r0, r31
	ble      lbl_80470E78
	mr       r3, r30
	bl       __dl__FPv

lbl_80470E78:
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
 * Address:	80470E94
 * Size:	000004
 */
void GroundDirector_Cave::directOn() { }

/*
 * --INFO--
 * Address:	80470E98
 * Size:	000004
 */
void GroundDirector_Cave::directOff() { }

namespace PSSystem {

} // namespace PSSystem

/*
 * --INFO--
 * Address:	80470E9C
 * Size:	000050
 */
void SingletonBase<PSM::BgmTrackMapFile>::~SingletonBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80470ED4
	lis      r5, "__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@ha
	extsh.   r0, r4
	addi     r4, r5,
"__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@l li       r0, 0 stw
r4, 0(r31) stw      r0,
"sInstance__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@sda21(r13) ble
lbl_80470ED4 bl       __dl__FPv

lbl_80470ED4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace PSM {

/*
 * --INFO--
 * Address:	80470EEC
 * Size:	000008
 */
DirectorMgr_Scene::@12 @~DirectorMgr_Scene()
{
	/*
addi     r3, r3, -12
b        __dt__Q23PSM17DirectorMgr_SceneFv
	*/
}

/*
 * --INFO--
 * Address:	80470EF4
 * Size:	000008
 */
DirectorMgr_Scene_AutoBgm::@12 @~DirectorMgr_Scene_AutoBgm()
{
	/*
addi     r3, r3, -12
b        __dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv
	*/
}

/*
 * --INFO--
 * Address:	80470EFC
 * Size:	000008
 */
DirectorMgr_Battle::@12 @~DirectorMgr_Battle()
{
	/*
addi     r3, r3, -12
b        __dt__Q23PSM18DirectorMgr_BattleFv
	*/
}

/*
 * --INFO--
 * Address:	80470F04
 * Size:	000008
 */
DirectorMgr_2PBattle::@12 @~DirectorMgr_2PBattle()
{
	/*
addi     r3, r3, -12
b        __dt__Q23PSM20DirectorMgr_2PBattleFv
	*/
}
} // namespace PSM
} // namespace PSM
