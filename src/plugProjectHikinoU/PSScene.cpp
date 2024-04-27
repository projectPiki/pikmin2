#include "PSSystem/PSScene.h"
#include "PSSystem/WaveScene.h"
#include "PSSystem/PSSystemIF.h"

namespace PSSystem {

SceneMgr* spSceneMgr;

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
WaveLoader::WaveLoader(u8 id1, u8 id2)
{
	mWaveSceneID[0] = id1;
	mWaveSceneID[1] = id2;
}

/**
 * @note Address: 0x803414F8
 * @note Size: 0x40
 */
void WaveLoader::loadWave(TaskChecker* task, WaveScene::AreaArg arg)
{
	if (mWaveSceneID[arg] != 255) {
		mWaveScene.load(0, mWaveSceneID[arg], arg, task);
	}
}

/**
 * @note Address: 0x80341538
 * @note Size: 0x118
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

/**
 * @note Address: 0x80341650
 * @note Size: 0xC4
 */
Scene::~Scene() { delete mWaveLoader; }

/**
 * @note Address: 0x80341714
 * @note Size: 0xBC
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

/**
 * @note Address: 0x803417D0
 * @note Size: 0x70
 */
void Scene::adaptTo(Scene** scene)
{
	P2ASSERTLINE(127, !mAdaptScene);
	OSDisableInterrupts();
	mAdaptScene = scene;
	spSceneMgr->refreshCurEndScene();
	OSEnableInterrupts();
}

/**
 * @note Address: 0x80341840
 * @note Size: 0x58
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

/**
 * @note Address: 0x80341898
 * @note Size: 0x60
 */
void Scene::appendSeq(SeqBase* seq)
{
	P2ASSERTLINE(146, seq);
	mSeqMgr.append(seq);
}

/**
 * @note Address: 0x803418F8
 * @note Size: 0x3C
 */
void Scene::startMainSeq()
{
	SeqBase** seq = (SeqBase**)mSeqMgr.getFirst();
	if (seq) {
		(*seq)->startSeq();
	}
}

/**
 * @note Address: 0x80341934
 * @note Size: 0x3C
 */
void Scene::stopMainSeq(u32 time)
{
	SeqBase** seq = (SeqBase**)mSeqMgr.getFirst();
	if (seq) {
		(*seq)->stopSeq(time);
	}
}

/**
 * @note Address: 0x80341970
 * @note Size: 0x24
 */
void Scene::stopAllSound(u32 time) { mSeqMgr.stopAllSound(time); }

/**
 * @note Address: 0x80341994
 * @note Size: 0x88
 */
void Scene::scene1st(TaskChecker* task)
{
	WaveLoader* wave = mWaveLoader;

	if (wave) {
		wave->loadWave(task, WaveScene::AREA_0);
		wave->loadWave(task, WaveScene::AREA_1);
	}

	mSeqMgr.scene1st(task);
}

/**
 * @note Address: 0x80341A1C
 * @note Size: 0x5C
 */
void Scene::scene1stLoadSync()
{
	volatile TaskChecker task;
	OSInitMutex((OSMutex*)&task.mMutex);
	task.mTaskIndex = 0;
	scene1st((TaskChecker*)&task);

	while (task.mTaskIndex) { }
}

/**
 * @note Address: 0x80341A78
 * @note Size: 0x4C
 */
void Scene::exec()
{
	mSeqMgr.exec();
	if (mChild) {
		mChild->exec();
	}
}

/**
 * @note Address: 0x80341AC4
 * @note Size: 0x34
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

/**
 * @note Address: 0x80341AF8
 * @note Size: 0x154
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

/**
 * @note Address: 0x80341C4C
 * @note Size: 0x154
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

/**
 * @note Address: 0x80341DA0
 * @note Size: 0x440
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

/**
 * @note Address: 0x803421E0
 * @note Size: 0x68
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
