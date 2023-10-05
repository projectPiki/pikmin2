#include "PSSystem/PSScene.h"
#include "PSSystem/WaveScene.h"
#include "PSSystem/PSSystemIF.h"

namespace PSSystem {

/*
 * --INFO--
 * Address:	803414F8
 * Size:	000040
 */
void WaveLoader::loadWave(TaskChecker* task, WaveScene::AreaArg arg)
{
	if (mWaveSceneID[arg] != 255) {
		mWaveScene.load(0, mWaveSceneID[arg], arg, task);
	}
}

/*
 * --INFO--
 * Address:	80341538
 * Size:	000118
 */
Scene::Scene(u8 id)
    : mChild(nullptr)
    , mWaveLoader(nullptr)
    , mAdaptScene(nullptr)
    , mSeqMgr(this)
{
	if (id != 255) {
		mWaveLoader = new WaveLoader(id, 255);
		P2ASSERTLINE(64, mWaveLoader);
	}
}

/*
 * --INFO--
 * Address:	80341650
 * Size:	0000C4
 */
Scene::~Scene() { delete mWaveLoader; }

/*
 * --INFO--
 * Address:	80341714
 * Size:	0000BC
 */
void Scene::adaptChildScene(Scene* scene)
{
	P2ASSERTLINE(109, scene);
	P2ASSERTLINE(110, !mChild);
	mChild = scene;
	scene->adaptTo(&mChild);
	P2ASSERTLINE(113, mChild);
	spSceneMgr->mEndScene = scene;
}

/*
 * --INFO--
 * Address:	803417D0
 * Size:	000070
 */
void Scene::adaptTo(Scene** scene)
{
	P2ASSERTLINE(127, !mAdaptScene);
	OSDisableInterrupts();
	mAdaptScene = scene;
	spSceneMgr->refreshCurEndScene();
	OSEnableInterrupts();
}

/*
 * --INFO--
 * Address:	80341840
 * Size:	000058
 */
void Scene::detach()
{
	OSDisableInterrupts();
	if (mAdaptScene && *mAdaptScene == this) {
		*mAdaptScene = nullptr;
	}
	spSceneMgr->refreshCurEndScene();
	OSEnableInterrupts();
}

/*
 * --INFO--
 * Address:	80341898
 * Size:	000060
 */
void Scene::appendSeq(SeqBase* seq)
{
	P2ASSERTLINE(146, seq);
	mSeqMgr.append(seq);
}

/*
 * --INFO--
 * Address:	803418F8
 * Size:	00003C
 */
void Scene::startMainSeq()
{
	SeqBase** seq = (SeqBase**)mSeqMgr.getFirst();
	if (seq) {
		(*seq)->startSeq();
	}
}

/*
 * --INFO--
 * Address:	80341934
 * Size:	00003C
 */
void Scene::stopMainSeq(u32 time)
{
	SeqBase** seq = (SeqBase**)mSeqMgr.getFirst();
	if (seq) {
		(*seq)->stopSeq(time);
	}
}

/*
 * --INFO--
 * Address:	80341970
 * Size:	000024
 */
void Scene::stopAllSound(u32 time) { mSeqMgr.stopAllSound(time); }

/*
 * --INFO--
 * Address:	80341994
 * Size:	000088
 */
void Scene::scene1st(TaskChecker* task)
{
	WaveLoader* wave = mWaveLoader;
	if (wave) {
		(wave)->loadWave(task, WaveScene::AREA_0);
		(wave)->loadWave(task, WaveScene::AREA_1);
	}
	mSeqMgr.scene1st(task);
}

/*
 * --INFO--
 * Address:	80341A1C
 * Size:	00005C
 */
void Scene::scene1stLoadSync()
{
	TaskChecker task;
	OSInitMutex(&task.mMutex);
	task._18 = 0;
	scene1st(&task);

	// branch is wrong?
	while (task._18) { }

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       OSInitMutex
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x20(r1)
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80341A58:
	lbz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_80341A58
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341A78
 * Size:	00004C
 */
void Scene::exec()
{
	mSeqMgr.exec();
	if (mChild) {
		mChild->exec();
	}
}

/*
 * --INFO--
 * Address:	80341AC4
 * Size:	000034
 */
void SceneMgr::refreshCurEndScene()
{
	Scene* scene = mScenes;
	if (!scene) {
		mEndScene = nullptr;
		return;
	}

	while (scene->mChild) {
		scene = scene->mChild;
	}
	mEndScene = scene;
}

/*
 * --INFO--
 * Address:	80341AF8
 * Size:	000154
 */
SeqBase* SceneMgr::findSeq(JASTrack* track)
{
	checkScene();

	if (mScenes->mChild) {
		checkScene();
		SeqBase* seq = mScenes->mChild->mSeqMgr.findSeq(track);
		if (seq) {
			return seq;
		}

		checkScene();
		if (mScenes->mChild->mChild) {

			checkScene();
			SeqBase* seq = mScenes->mChild->mChild->mSeqMgr.findSeq(track);
			if (seq) {
				return seq;
			}
		}
	}

	P2ASSERTLINE(328, mScenes);
	return mScenes->mSeqMgr.findSeq(track);
}

/*
 * --INFO--
 * Address:	80341C4C
 * Size:	000154
 */
SeqBase* SceneMgr::getPlayingSeq(JASTrack* track)
{
	checkScene();

	if (mScenes->mChild) {
		checkScene();
		SeqBase* seq = mScenes->mChild->mSeqMgr.getPlayingSeq(track);
		if (seq) {
			return seq;
		}

		checkScene();
		if (mScenes->mChild->mChild) {

			checkScene();
			SeqBase* seq = mScenes->mChild->mChild->mSeqMgr.getPlayingSeq(track);
			if (seq) {
				return seq;
			}
		}
	}

	P2ASSERTLINE(349, mScenes);
	return mScenes->mSeqMgr.getPlayingSeq(track);
}

/*
 * --INFO--
 * Address:	80341DA0
 * Size:	000440
 */
void SceneMgr::deleteScene(Scene* scene)
{
	P2ASSERTLINE(358, scene);
	if (scene->mChild) {
		deleteScene(scene->mChild);
	}

	scene->stopAllSound(10);
	for (u8 i = 0; i < JAInter::SoundTable::getCategotyMax(); i++) {
		spSysIF->stopAllSe(i);
	}

	while (scene->mSeqMgr.isPlaying()) {
		getSysIF()->mainLoop();
		VIWaitForRetrace();
	}
	scene->detach();
	delete scene;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r29, r4, r4
	lis      r4, lbl_80490120@ha
	mr       r28, r3
	addi     r31, r4, lbl_80490120@l
	bne      lbl_80341DD8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341DD8:
	lwz      r30, 4(r29)
	cmplwi   r30, 0
	beq      lbl_803420CC
	bne      lbl_80341DFC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341DFC:
	lwz      r27, 4(r30)
	cmplwi   r27, 0
	beq      lbl_80341FC0
	bne      lbl_80341E20
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341E20:
	lwz      r26, 4(r27)
	cmplwi   r26, 0
	beq      lbl_80341EEC
	bne      lbl_80341E44
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x166
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341E44:
	mr       r3, r26
	bl       getChildScene__Q28PSSystem5SceneFv
	or.      r4, r3, r3
	beq      lbl_80341E5C
	mr       r3, r28
	bl       deleteScene__Q28PSSystem8SceneMgrFPQ28PSSystem5Scene

lbl_80341E5C:
	mr       r3, r26
	li       r4, 0xa
	lwz      r12, 0(r26)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	b        lbl_80341E8C

lbl_80341E7C:
	bl       PSGetSystemIF__Fv
	mr       r4, r28
	bl       stopAllSe__8JAIBasicFUc
	addi     r28, r28, 1

lbl_80341E8C:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r28, 0x18
	cmplw    r0, r3
	blt      lbl_80341E7C
	b        lbl_80341EB0

lbl_80341EA4:
	bl       PSGetSystemIFA__Fv
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80341EB0:
	mr       r3, r26
	bl       getSeqMgr__Q28PSSystem5SceneFv
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80341EA4
	mr       r3, r26
	bl       detach__Q28PSSystem5SceneFv
	cmplwi   r26, 0
	beq      lbl_80341EEC
	mr       r3, r26
	li       r4, 1
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80341EEC:
	mr       r3, r27
	li       r4, 0xa
	lwz      r12, 0(r27)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	b        lbl_80341F1C

lbl_80341F0C:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mr       r4, r28
	bl       stopAllSe__8JAIBasicFUc
	addi     r28, r28, 1

lbl_80341F1C:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r28, 0x18
	cmplw    r0, r3
	blt      lbl_80341F0C
	b        lbl_80341F60

lbl_80341F34:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80341F54
	addi     r3, r31, 0x24
	addi     r5, r31, 0xc
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341F54:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80341F60:
	addi     r3, r27, 0x10
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80341F34
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r27)
	cmplwi   r3, 0
	beq      lbl_80341F94
	lwz      r0, 0(r3)
	cmplw    r0, r27
	bne      lbl_80341F94
	li       r0, 0
	stw      r0, 0(r3)

lbl_80341F94:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	bl       refreshCurEndScene__Q28PSSystem8SceneMgrFv
	bl       OSEnableInterrupts
	cmplwi   r27, 0
	beq      lbl_80341FC0
	mr       r3, r27
	li       r4, 1
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80341FC0:
	mr       r3, r30
	li       r4, 0xa
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	b        lbl_80341FF0

lbl_80341FE0:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mr       r4, r28
	bl       stopAllSe__8JAIBasicFUc
	addi     r28, r28, 1

lbl_80341FF0:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r28, 0x18
	cmplw    r0, r3
	blt      lbl_80341FE0
	b        lbl_80342034

lbl_80342008:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80342028
	addi     r3, r31, 0x24
	addi     r5, r31, 0xc
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342028:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80342034:
	addi     r3, r30, 0x10
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80342008
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r30)
	cmplwi   r3, 0
	beq      lbl_80342068
	lwz      r0, 0(r3)
	cmplw    r0, r30
	bne      lbl_80342068
	li       r0, 0
	stw      r0, 0(r3)

lbl_80342068:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r28, 4(r26)
	cmplwi   r28, 0
	bne      lbl_80342094
	li       r0, 0
	stw      r0, 8(r26)
	b        lbl_803420A8
	b        lbl_80342094

lbl_80342088:
	mr       r3, r28
	bl       getChildScene__Q28PSSystem5SceneFv
	mr       r28, r3

lbl_80342094:
	mr       r3, r28
	bl       getChildScene__Q28PSSystem5SceneFv
	cmplwi   r3, 0
	bne      lbl_80342088
	stw      r28, 8(r26)

lbl_803420A8:
	bl       OSEnableInterrupts
	cmplwi   r30, 0
	beq      lbl_803420CC
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803420CC:
	mr       r3, r29
	li       r4, 0xa
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	li       r26, 0
	b        lbl_803420FC

lbl_803420EC:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	mr       r4, r26
	bl       stopAllSe__8JAIBasicFUc
	addi     r26, r26, 1

lbl_803420FC:
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r26, 0x18
	cmplw    r0, r3
	blt      lbl_803420EC
	b        lbl_80342140

lbl_80342114:
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80342134
	addi     r3, r31, 0x24
	addi     r5, r31, 0xc
	li       r4, 0x18b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342134:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       mainLoop__Q28PSSystem5SysIFFv
	bl       VIWaitForRetrace

lbl_80342140:
	addi     r3, r29, 0x10
	bl       isPlaying__Q28PSSystem6SeqMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80342114
	bl       OSDisableInterrupts
	lwz      r3, 0xc(r29)
	cmplwi   r3, 0
	beq      lbl_80342174
	lwz      r0, 0(r3)
	cmplw    r0, r29
	bne      lbl_80342174
	li       r0, 0
	stw      r0, 0(r3)

lbl_80342174:
	lwz      r4, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r3, 4(r4)
	cmplwi   r3, 0
	bne      lbl_80342198
	li       r0, 0
	stw      r0, 8(r4)
	b        lbl_803421A8
	b        lbl_80342198

lbl_80342194:
	mr       r3, r0

lbl_80342198:
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80342194
	stw      r3, 8(r4)

lbl_803421A8:
	bl       OSEnableInterrupts
	cmplwi   r29, 0
	beq      lbl_803421CC
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803421CC:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803421E0
 * Size:	000068
 */
void SceneMgr::deleteCurrentScene()
{
	P2ASSERTLINE(397, mScenes);
	Scene* scene = mScenes->mChild;
	if (scene) {
		deleteScene(scene);
	}
}

/*
 * --INFO--
 * Address:	80342248
 * Size:	000008
 */
SeqMgr* Scene::getSeqMgr() { return &mSeqMgr; }

/*
 * --INFO--
 * Address:	80342250
 * Size:	000008
 */
Scene* Scene::getChildScene() { return mChild; }

} // namespace PSSystem

/*
 * --INFO--
 * Address:	80342258
 * Size:	000048
 */
PSSystem::SysIF* PSGetSystemIFA() { return PSSystem::getSysIF(); }

/*
 * --INFO--
 * Address:	803422A0
 * Size:	000008
 */
PSSystem::SysIF* PSGetSystemIF() { return PSSystem::spSysIF; }
