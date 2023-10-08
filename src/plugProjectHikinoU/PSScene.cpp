#include "PSSystem/PSScene.h"
#include "PSSystem/WaveScene.h"
#include "PSSystem/PSSystemIF.h"

namespace PSSystem {

SceneMgr* spSceneMgr;

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
WaveLoader::WaveLoader(u8 id1, u8 id2)
{
	mWaveSceneID[0] = id1;
	mWaveSceneID[1] = id2;
}

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
	volatile TaskChecker task;
	OSInitMutex((OSMutex*)&task.mMutex);
	task._18 = 0;
	scene1st((TaskChecker*)&task);

	while (task._18) { }
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

	while (scene->getChildScene()) {
		scene = scene->getChildScene();
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
	Scene* childScene = scene->getChildScene();
	if (childScene) {
		deleteScene(childScene);
	}

	scene->stopAllSound(10);
	for (u8 i = 0; i < JAInter::SoundTable::getCategotyMax(); i++) {
		PSGetSystemIF()->stopAllSe(i);
	}

	while (scene->getSeqMgr()->isPlaying()) {
		PSGetSystemIFA()->mainLoop();
		VIWaitForRetrace();
	}
	scene->detach();
	delete scene;
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

} // namespace PSSystem
