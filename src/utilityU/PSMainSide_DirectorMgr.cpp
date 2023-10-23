#include "PSM/DirectorMgr.h"
#include "PSAutoBgm/AutoBgm.h"
#include "PSSystem/PSGame.h"
#include "PSGame/PikScene.h"
#include "PSM/BossBgmFader.h"

namespace PSM {

/*
 * --INFO--
 * Address:	8046F2BC
 * Size:	0002D8
 */
DirectorMgr_Scene::DirectorMgr_Scene(DirectorMgr_Scene* owner, u8 type)
    : ::PSSystem::DirectorMgrBase(type)
    , mOwner(owner)
{

	if (!isSlave()) {
		for (u8 i = 0; i < 8; i++) {
			switch (i) {
			case 0:
			case 1:
			case 2:
			case 3:
				mCopyActorList[i] = new ListDirectorActor;
				break;
			case 4:
				mCopyActorList[i] = new ListDirectorActor;
				break;
			case 5:
			case 6:
			case 7:
				mCopyActorList[i] = new ::PSSystem::DirectorCopyActor(nullptr, nullptr);
				break;
			default:
				JUT_PANICLINE(60, "P2Assert");
			}
		}
	} else {
		for (u8 i = 0; i < 8; i++) {
			setCopyActorList(i, mOwner->getCopyActorList(i));
			P2ASSERTLINE(69, mCopyActorList[i]);
		}
	}
}

/*
 * --INFO--
 * Address:	8046F594
 * Size:	00008C
 */
DirectorMgr_Scene::~DirectorMgr_Scene() { }

/*
 * --INFO--
 * Address:	8046F620
 * Size:	000294
 */
void DirectorMgr_Scene::initTrackMap(::PSSystem::DirectedBgm& bgm)
{
	BgmTrackMapFile file(false);
	char* path = bgm.mBmsFileName;
	char* bms  = path;

	// Determine what trackMap file to load, depending on bms/cnd file name
	if (!strcmp(bms, "caveglass.bms") || (!strcmp(bms, "caverelax.bms"))) {
		path = "/user/Totaka/trackMap_Seq_T.txt";
	} else if (!strcmp(bms, "caveconc.bms")) {
		path = "/user/Totaka/trackMap_Cond_T.txt";
		P2ASSERTLINE(116, bgm.getCastType() == ::PSSystem::DirectedBgm::BgmType_Cave);
		bms = static_cast<PSAutoBgm::AutoBgm*>(&bgm)->mConductorFilePath;
	} else if (!strncmp("new_", bms, strlen("new_"))) {
		path = "/user/Totaka/trackMap_Cond_T.txt";
		P2ASSERTLINE(126, bgm.getCastType() == ::PSSystem::DirectedBgm::BgmType_Cave);
		bms = static_cast<PSAutoBgm::AutoBgm*>(&bgm)->mConductorFilePath;
	} else if (!strcmp(bms, "cavesoil.bms") || (!strcmp(bms, "cavemetal.bms"))) {
		path = "/user/Wakai/trackMap_Cond_W.txt";
		P2ASSERTLINE(139, bgm.getCastType() == ::PSSystem::DirectedBgm::BgmType_Cave);
		bms = static_cast<PSAutoBgm::AutoBgm*>(&bgm)->mConductorFilePath;
	} else {
		path = "/user/Wakai/trackMap_Seq_W.txt";
	}

	file.onlyLoad(path, JKRDvdRipper::ALLOC_DIR_BOTTOM);
	mBgmTrackMap = file.readTrackMap(bms);
}

/*
 * --INFO--
 * Address:	8046F8B4
 * Size:	000770
 */
::PSSystem::DirectorBase* DirectorMgr_Scene::newDirector(u8 type, ::PSSystem::DirectedBgm& bgm)
{
	PSM::BgmTrackMap& trackMap = mBgmTrackMap;

	JUT_ASSERTLINE(161, trackMap.mBasicTrackCount, "track map is\nnot initialized\n");
	::PSSystem::DirectorBase* actor = nullptr;
	DamageDirector* damage          = nullptr;
	switch (type) {
	case Director_Working: {
		actor = new ActorDirector_Scaled("eventD", trackMap.mEventTrackCount, 200.0, 1500.0, 100, 100, 100);
		P2ASSERTLINE(173, actor);
		actor->setupTracks(trackMap.mBasicTrackCount, trackMap.mEventTrackCount, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director_EnemyNear: {
		actor = new ActorDirector_Kehai("kehaiD   ", trackMap.mKehaiTrackCount, 100, 100, 100);
		P2ASSERTLINE(188, actor);
		actor->setupTracks(trackMap.mBasicTrackCount + trackMap.mEventTrackCount + trackMap.mOtakaraTrackCount, trackMap.mKehaiTrackCount,
		                   (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director_Battle: {
		actor = new ActorDirector_Battle("battleD  ", trackMap.mBattleTrackCount, 100, 100, 100);
		P2ASSERTLINE(188, actor);
		actor->setupTracks(trackMap.mBasicTrackCount + trackMap.mEventTrackCount + trackMap.mOtakaraTrackCount + trackMap.mKehaiTrackCount,
		                   trackMap.mBattleTrackCount, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director_Treasure: {
		actor = new ActorDirector_TrackOn("OtakaraD", trackMap.mOtakaraTrackCount, 100, 100);
		P2ASSERTLINE(219, actor);
		actor->setupTracks(trackMap.mBasicTrackCount + trackMap.mEventTrackCount, trackMap.mOtakaraTrackCount,
		                   (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director_Ground: {
		actor;
		if (bgm.getCastType() == ::PSSystem::DirectedBgm::BgmType_Cave) {
			actor = new GroundDirector_Cave("GroundD  ", trackMap.mGroundTrackCount, 100, 100);
		} else {
			actor = new ActorDirector_Scaled("GroundD  ", trackMap.mGroundTrackCount, 300.0f, 600.0f, 200, 200, 10);
		}
		P2ASSERTLINE(275, actor);

		actor->setupTracks(trackMap.mBasicTrackCount + trackMap.mEventTrackCount + trackMap.mOtakaraTrackCount + trackMap.mKehaiTrackCount
		                       + trackMap.mBattleTrackCount,
		                   trackMap.mBattleTrackCount, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director_Pikmin: {
		int pikNum = trackMap.getPikNum();
		int mask   = trackMap.getPikMaskNum();
		actor      = newPikminNumberDirector(pikNum, mask, bgm);
		P2ASSERTLINE(290, actor);
		actor->setupTracks(0, 16, (::PSSystem::SeqTrackBase**)bgm.mChildTracks, trackMap.mPikNum);
		if (bgm.getCastType() == 3) {
			static_cast<PSAutoBgm::AutoBgm*>(&bgm)->setPikiMaskNum(trackMap.mPikNum);
		}
		break;
	}
	case Director_Damage: {
		damage = new DamageDirector;
		// damage->isBgmTrackValid();
		damage->setTrack(0, bgm.mRootTrack);
		break;
	case Director_Tempo:
		actor = new ActorDirector_TempoChange;
		// actor->isBgmTrackValid();
		actor->setTrack(0, bgm.mRootTrack);
		break;
	}
	}

	::PSSystem::DirectorBase* ret;
	if (actor || (!actor && damage)) {
		ret = actor;
	}

	P2ASSERTLINE(334, ret);

	::PSSystem::DirectorCopyActor* obj = mCopyActorList[type];
	if (isSlave()) {
		obj->mDirectorChild = ret;
	} else {
		obj->mDirectorParent = ret;
	}
	adaptDirectorActor(ret, type);
	return ret;
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
void DirectorMgr_Scene::adaptDirectorActor(::PSSystem::DirectorBase* director, u8 type)
{
	::PSSystem::DirectorCopyActor* actor = mCopyActorList[type];
	switch (type) {
	case 0:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case 1:
		static_cast<ActorDirector_TrackOn*>(director)->mActor = actor;
		break;
	case 2:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case 3:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case 4:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case 5:
		static_cast<PikminNumberDirector*>(director)->mActor = actor;
		break;
	case 6:
		static_cast<DamageDirector*>(director)->mActor = actor;
		break;
	case 7:
		static_cast<ActorDirector_TempoChange*>(director)->mActor = actor;
		break;
	default:
		JUT_PANICLINE(405, "P2Assert");
	}
}

/*
 * --INFO--
 * Address:	804700CC
 * Size:	000094
 */
PikminNumberDirector* DirectorMgr_Scene::newPikminNumberDirector(int pikNum, u8 pikMask, ::PSSystem::DirectedBgm& bgm)
{
	PikminNumberDirector* director = new PikminNumberDirector(pikNum, pikMask, bgm);
	P2ASSERTLINE(412, director);
	return director;
}

/*
 * --INFO--
 * Address:	80470160
 * Size:	000090
 */
PikminNumberDirector* DirectorMgr_Scene_AutoBgm::newPikminNumberDirector(int pikNum, u8 pikMask, ::PSSystem::DirectedBgm& bgm)
{
	PikminNumberDirector* director = new PikminNumberDirector_AutoBgm(pikNum, pikMask, bgm);
	P2ASSERTLINE(425, director);
	return director;
}

/*
 * --INFO--
 * Address:	804701F0
 * Size:	000050
 */
DirectorMgr_Battle::DirectorMgr_Battle()
    : ::PSSystem::DirectorMgrBase(::PSSystem::DirectedBgm::BgmType_Battle)
{
}

/*
 * --INFO--
 * Address:	80470240
 * Size:	000244
 */
::PSSystem::DirectorBase* DirectorMgr_Battle::newDirector(u8 flag, ::PSSystem::DirectedBgm& bgm)
{
	::PSSystem::DirectorBase* director = nullptr;
	u8 tracks                          = 255;
	u8 info                            = 255;

	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(::PSSystem::getSceneMgr());
	::PSSystem::checkSceneMgr(mgr);
	bool boss = mgr->curSceneIsBigBossFloor();
	switch (flag) {
	case 0:
		if (boss) {
			info   = 14;
			tracks = 1;
		} else {
			info   = 10;
			tracks = 1;
		}
		director                = new PikAttackDirector(tracks);
		BossBgmFader::Mgr* boss = ::PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance();
		boss->setUpdator(director);
		break;
	case 1:
		if (boss) {
			info   = 11;
			tracks = 1;
		} else {
			info   = 15;
			tracks = 1;
		}
		director = new ExiteDirector(tracks);
		break;
	}

	P2ASSERTLINE(495, tracks != 255);
	P2ASSERTLINE(496, info != 255);
	P2ASSERTLINE(497, director);
	director->setupTracks(0, tracks, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
	return director;
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
    : ::PSSystem::DirectorMgrBase(::PSSystem::DirectedBgm::BgmType_2PBattle)
{
}

/*
 * --INFO--
 * Address:	804704D4
 * Size:	0006B8
 */
::PSSystem::DirectorBase* DirectorMgr_2PBattle::newDirector(u8 type, ::PSSystem::DirectedBgm& bgm)
{
	::PSSystem::DirectorBase* actor = nullptr;
	switch (type) {
	case Director2P_Working: {
		actor = new ActorDirector_Scaled("eventD   ", 1, 200.0, 1500.0, 100, 100, 100);
		P2ASSERTLINE(615, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director2P_EnemyNear: {
		actor = new ActorDirector_Kehai("kehaiD   ", 1, 100, 100, 100);
		P2ASSERTLINE(627, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		static_cast<ActorDirector_Kehai*>(actor)->mActor = new ListDirectorActor;
		break;
	}
	case Director2P_Battle: {
		actor = new ActorDirector_Battle("battleD  ", 1, 100, 100, 100);
		P2ASSERTLINE(639, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		static_cast<ActorDirector_Kehai*>(actor)->mActor = new ListDirectorActor;
		break;
	}
	case Director2P_OlimarMarble: {
		actor = new ActorDirector_TrackOn("OriBeedaD", 1, 100, 100);
		P2ASSERTLINE(662, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director2P_LouieMarble: {
		actor = new ActorDirector_TrackOn("RugBeedaD", 1, 100, 100);
		P2ASSERTLINE(699, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	}
	case Director2P_OlimarIchou: {
		actor = new ActorDirector_TrackOn("OriIchouD", 1, 100, 100);
		P2ASSERTLINE(729, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		static_cast<ActorDirector_TrackOn*>(actor)->mActor = new ListDirectorActor;
		break;
	}
	case Director2P_LouieIchou: {
		actor = new ActorDirector_TrackOn("RouIchouD", 1, 100, 100);
		P2ASSERTLINE(757, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		static_cast<ActorDirector_TrackOn*>(actor)->mActor = new ListDirectorActor;
		break;
	case Director2P_PikBattle:
		actor = new TrackOnDirector_Voting(1, "PikBattlD", 100, 100);
		P2ASSERTLINE(757, actor);
		actor->setupTracks(0, 1, (::PSSystem::SeqTrackBase**)bgm.mChildTracks);
		break;
	default:
		JUT_PANICLINE(791, "P2Assert");
	}
	}

	P2ASSERTLINE(797, actor);
	return actor;
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

} // namespace PSM
