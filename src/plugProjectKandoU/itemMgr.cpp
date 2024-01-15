#include "Game/BaseItem.h"
#include "Game/MapMgr.h"
#include "Game/PlatInstance.h"
#include "Game/itemMgr.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "LoadResource.h"
#include "PlatAttacher.h"

namespace Game {

/**
 * @note Address: 0x801CBFE8
 * @note Size: 0x100
 */
BaseItem::BaseItem(int objectTypeID)
{
	mObjectTypeID             = objectTypeID;
	mAnimSpeed                = 0.0f;
	mNodeItemMgr              = nullptr;
	_188                      = 0;
	_184                      = 0;
	mVelocity                 = 0.0f;
	mPosition                 = 0.0f;
	mCollTree                 = new CollTree;
	mBoundingSphere.mPosition = Vector3f::zero;
	mBoundingSphere.mRadius   = 1.0f;
}

/**
 * @note Address: 0x801CC0E8
 * @note Size: 0x4C
 */
void BaseItem::constructor()
{
	PSM::CreatureObj* soundObj = new PSM::CreatureObj(this, 2);
	mSoundObj                  = soundObj;
}

/**
 * @note Address: 0x801CC134
 * @note Size: 0x14
 */
JAInter::Object* BaseItem::getJAIObject()
{
	// Notice how this generates a check for nullptr.
	// This is because JAInter::Object is the second inheritance of CreatureObj.
	return mSoundObj;
}

/**
 * @note Address: 0x801CC148
 * @note Size: 0x8
 */
PSM::Creature* BaseItem::getPSCreature() { return mSoundObj; }

/**
 * @note Address: 0x801CC150
 * @note Size: 0x8C
 */
void BaseItem::startSound(u32 soundID)
{
	JUT_ASSERTLINE(262, mSoundObj != nullptr, "(%s) no mSoundCreature\n", getCreatureName());
	mSoundObj->startSound(soundID, 0);
}

/**
 * @note Address: 0x801CC1DC
 * @note Size: 0x108
 */
void BaseItem::doAnimation()
{
	if (mAnimator.mAnimMgr) {
		mAnimator.animate(mAnimSpeed * sys->mDeltaTime);
		SysShape::Model* model                                        = mModel;
		model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = (J3DMtxCalcAnmBase*)mAnimator.getCalc();
		do_doAnimation();
	}
	if (mCaptureMatrix == nullptr) {
		makeTrMatrix();
	}
	if (mModel) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
	}
	update();
}

/**
 * @note Address: 0x801CC2E4
 * @note Size: 0x2C
 */
void BaseItem::updateTrMatrix() { makeTrMatrix(); }

/**
 * @note Address: 0x801CC310
 * @note Size: 0xC4
 */
void BaseItem::entryShape()
{
	if (mModel == nullptr) {
		return;
	}
	if (mLod.isFlag(AILOD_IsVisible)) {
		mModel->show();
	} else {
		if (BaseHIOParms::sEntryOpt) {
			if (!gameSystem->isMultiplayerMode()) {
				return;
			}
		}
		mModel->hide();
	}
	changeMaterial();
	mModel->getJ3DModel()->entry();
}

/**
 * @note Address: 0x801CC3D4
 * @note Size: 0x38
 */
void BaseItem::doEntry()
{
	if (mCaptureMatrix == nullptr) {
		entryShape();
	}
}

/**
 * @note Address: 0x801CC40C
 * @note Size: 0x74
 */
bool BaseItem::stimulate(Game::Interaction& interaction) { return (interaction.actCommon(this) ? interaction.actItem(this) : false); }

/**
 * @note Address: 0x801CC480
 * @note Size: 0x4
 */
void BaseItem::doSimulation(f32) { }

/**
 * @note Address: 0x801CC484
 * @note Size: 0x2C
 */
void BaseItem::makeTrMatrix() { mBaseTrMatrix.makeT(mPosition); }

/**
 * update__
 * @note Address: 0x801CC4B0
 * @note Size: 0xDC
 */
void BaseItem::update()
{
	doAI();
	updateBoundSphere();
	mSoundObj->exec();
	if (isAlive()) {
		updateCell();
		if (0 > mCellLayerIndex || mCellLayerIndex > 10) {
			getTypeName();
			JUT_PANICLINE(365, "cellLayerindex overflow\n");
		}
		do_updateLOD();
	}
}

/**
 * @note Address: 0x801CC590
 * @note Size: 0x7C
 */
void BaseItem::do_updateLOD()
{
	AILODParm parm;
	do_setLODParm(parm);
	updateLOD(parm);
	if (isMovieActor()) {
		mLod.setFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);
	}
}

/**
 * @note Address: 0x801CC60C
 * @note Size: 0x3C
 */
void BaseItem::updateCollTree()
{
	mCollTree->update();
	mCollTree->getBoundingSphere(mBoundingSphere);
}

/**
 * @note Address: 0x801CC648
 * @note Size: 0x1C4
 */
void BaseItem::move(f32 p1)
{
	Sys::Sphere moveSphere(mPosition, getMapCollisionRadius());
	MoveInfo info(&moveSphere, &mVelocity, 1.0f);
	info.mInfoOrigin = this;

	mapMgr->traceMove(info, p1);
	Sys::Triangle* mapTri = info.mBounceTriangle;
	platMgr->traceMove(info, p1);

	if (!mCollTriangle) {
		if (!mapTri) {
			if (info.mBounceTriangle) {
				bounceCallback(info.mBounceTriangle);
				mCollTriangle = info.mBounceTriangle;
			} else {
				mCollTriangle = nullptr;
			}
		} else {
			bounceCallback(mapTri);
			mCollTriangle = mapTri;
		}
	} else {
		mCollTriangle = nullptr;
	}

	mPosition = moveSphere.mPosition;
	mPosition.y -= moveSphere.mRadius;

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	lwz      r12, 0(r3)
	fmr      f30, f1
	mr       r30, r3
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lfs      f6, 0x1a0(r30)
	lis      r3, sincosTable___5JMath@ha
	lfs      f7, 0x1a4(r30)
	lfs      f5, 0x19c(r30)
	li       r5, 0
	fadds    f6, f6, f31
	addi     r3, r3, sincosTable___5JMath@l
	stw      r5, 0x2c(r1)
	addi     r7, r1, 8
	lfs      f4, lbl_8051961C@sda21(r2)
	addi     r6, r30, 0x190
	lfs      f3, lbl_80519618@sda21(r2)
	li       r0, -1
	lfs      f2, 0x800(r3)
	fmr      f1, f30
	lfs      f0, lbl_80519620@sda21(r2)
	addi     r4, r1, 0x18
	stfs     f5, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f6, 0xc(r1)
	stfs     f7, 0x10(r1)
	stfs     f31, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r6, 0x1c(r1)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x5c(r1)
	stb      r5, 0x8c(r1)
	stb      r5, 0x31(r1)
	stb      r5, 0x30(r1)
	stw      r5, 0x60(r1)
	stb      r5, 0xa8(r1)
	stw      r5, 0xac(r1)
	stfs     f2, 0x44(r1)
	stfs     f0, 0x48(r1)
	stw      r0, 0xb0(r1)
	stw      r5, 0x64(r1)
	stb      r5, 0x32(r1)
	stw      r30, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	fmr      f1, f30
	lwz      r31, 0x5c(r1)
	lwz      r3, platMgr__4Game@sda21(r13)
	addi     r4, r1, 0x18
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
	lwz      r0, 0x18c(r30)
	cmplwi   r0, 0
	bne      lbl_801CC7B8
	cmplwi   r31, 0
	bne      lbl_801CC798
	lwz      r4, 0x5c(r1)
	cmplwi   r4, 0
	beq      lbl_801CC78C
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x5c(r1)
	stw      r0, 0x18c(r30)
	b        lbl_801CC7C0

lbl_801CC78C:
	li       r0, 0
	stw      r0, 0x18c(r30)
	b        lbl_801CC7C0

lbl_801CC798:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x18c(r30)
	b        lbl_801CC7C0

lbl_801CC7B8:
	li       r0, 0
	stw      r0, 0x18c(r30)

lbl_801CC7C0:
	lfs      f0, 8(r1)
	stfs     f0, 0x19c(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1a0(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1a4(r30)
	lfs      f0, 0x1a0(r30)
	fsubs    f0, f0, f31
	stfs     f0, 0x1a0(r30)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0xb8(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x801CC80C
 * @note Size: 0x7C
 */
void BaseItem::movieStartAnimation(u32 p1)
{
	if (mAnimator.mAnimMgr) {
		getCreatureName();
		mAnimator.startAnim(p1, nullptr);
		mAnimSpeed = 30.0f;
	} else {
		getCreatureName();
	}
}

/**
 * @note Address: 0x801CC888
 * @note Size: 0x88
 */
void BaseItem::movieStartDemoAnimation(SysShape::AnimInfo* animInfo)
{
	getTypeName();
	mAnimator.startExAnim(animInfo);
	mAnimSpeed = 30.0f;
	P2ASSERTLINE(498, mAnimator.assertValid(mModel));
}

/**
 * @note Address: 0x801CC910
 * @note Size: 0x24
 */
void BaseItem::movieSetAnimationLastFrame() { mAnimator.setLastFrame(); }

/**
 * @note Address: 0x801CC934
 * @note Size: 0x1C
 */
void BaseItem::movieSetTranslation(Vector3f& dest, f32 faceDir) { mPosition = dest; }

/**
 * constructor__Q24Game8CFSMItemFv
 * @note Address: 0x801CC950
 * @note Size: 0x50
 */
void CFSMItem::constructor()
{
	initFSM();
	mSoundObj = new PSM::CreatureObj(this, 2);
}

/**
 * @note Address: 0x801CC9A0
 * @note Size: 0x54
 */
void CFSMItem::initFSM()
{
	mFsm = createFSM();
	mFsm->init(this);
}

/**
 * doAI__Q24Game8CFSMItemFv
 * @note Address: 0x801CC9F8
 * @note Size: 0x34
 */
void CFSMItem::doAI() { mFsm->exec(this); }

/**
 * @note Address: 0x801CCA2C
 * @note Size: 0x8
 */
void CFSMItem::setCurrState(FSMState<CFSMItem>* state) { mCurrentState = state; }

/**
 * @note Address: 0x801CCA34
 * @note Size: 0x8
 */
FSMState<CFSMItem>* CFSMItem::getCurrState() { return mCurrentState; }

/**
 * @note Address: 0x801CCA3C
 * @note Size: 0x1C
 */
int CFSMItem::getStateID()
{
	if (mCurrentState) {
		return mCurrentState->mId;
	}
	return -1;
}

/**
 * @note Address: 0x801CCA58
 * @note Size: 0x44
 */
void CFSMItem::bounceCallback(Sys::Triangle* tri)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onBounce(this, tri);
	}
}

/**
 * @note Address: 0x801CCAA0
 * @note Size: 0x44
 */
void CFSMItem::collisionCallback(Game::CollEvent& event)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onCollision(this, event);
	}
}

/**
 * @note Address: 0x801CCAE8
 * @note Size: 0x44
 */
void CFSMItem::platCallback(Game::PlatEvent& event)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onPlatCollision(this, event);
	}
}

/**
 * @note Address: 0x801CCB30
 * @note Size: 0x44
 */
void CFSMItem::onKeyEvent(const SysShape::KeyEvent& event)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onKeyEvent(this, event);
	}
}

/**
 * actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
 * @note Address: 0x801CCB78
 * @note Size: 0x38
 */
bool InteractAttack::actItem(Game::BaseItem* item) { return item->interactAttack(*this); }

/**
 * actItem__Q24Game19InteractBreakBridgeFPQ24Game8BaseItem
 * @note Address: 0x801CCBB0
 * @note Size: 0x38
 */
bool InteractBreakBridge::actItem(Game::BaseItem* item) { return item->interactBreakBridge(*this); }

/**
 * actItem__Q24Game14InteractGotKeyFPQ24Game8BaseItem
 * @note Address: 0x801CCBE8
 * @note Size: 0x38
 */
bool InteractGotKey::actItem(Game::BaseItem* item) { return item->interactGotKey(*this); }

/**
 * actItem__Q24Game11InteractEatFPQ24Game8BaseItem
 * @note Address: 0x801CCC20
 * @note Size: 0x38
 */
bool InteractEat::actItem(Game::BaseItem* item) { return item->interactEat(*this); }

/**
 * actItem__Q24Game19InteractFlockAttackFPQ24Game8BaseItem
 * @note Address: 0x801CCC58
 * @note Size: 0x38
 */
bool InteractFlockAttack::actItem(Game::BaseItem* item) { return item->interactFlockAttack(*this); }

/**
 * actItem__Q24Game14InteractAbsorbFPQ24Game8BaseItem
 * @note Address: 0x801CCC90
 * @note Size: 0x38
 */
bool InteractAbsorb::actItem(Game::BaseItem* item) { return item->interactAbsorb(*this); }

/**
 * actItem__Q24Game11InteractFueFPQ24Game8BaseItem
 * @note Address: 0x801CCCC8
 * @note Size: 0x38
 */
bool InteractFue::actItem(Game::BaseItem* item) { return item->interactFue(*this); }

/**
 * actItem__Q24Game18InteractFarmKareroFPQ24Game8BaseItem
 * @note Address: 0x801CCD00
 * @note Size: 0x38
 */
bool InteractFarmKarero::actItem(Game::BaseItem* item) { return item->interactFarmKarero(*this); }

/**
 * actItem__Q24Game17InteractFarmHaeroFPQ24Game8BaseItem
 * @note Address: 0x801CCD38
 * @note Size: 0x38
 */
bool InteractFarmHaero::actItem(Game::BaseItem* item) { return item->interactFarmHaero(*this); }

/**
 * @note Address: 0x801CCD70
 * @note Size: 0x5C
 */
BaseItemMgr::BaseItemMgr(int p1)
{
	mAnimMgr             = nullptr;
	mCollPartFactory     = nullptr;
	mObjectPathComponent = nullptr;
	mArchive             = nullptr;
	mModelData           = nullptr;
	mItemName            = "BaseItem";
	mResourceNode        = nullptr;
	_10                  = 0;
	_14                  = 0;
}

/**
 * @note Address: 0x801CCDCC
 * @note Size: 0x108
 */
void BaseItemMgr::setModelSize(int modelSize)
{
	mModelDataMax = modelSize;
	mModelData    = new J3DModelData*[modelSize];
	for (int i = 0; i < modelSize; i++) {
		mModelData[i] = nullptr;
	}
}

/**
 * @note Address: 0x801CCED4
 * @note Size: 0x7C
 */
void BaseItemMgr::loadArchive(char* fileName)
{
	char pathBuffer[512];
	sprintf(pathBuffer, "%s/%s", mObjectPathComponent, fileName);
	LoadResource::Arg loadArg(pathBuffer);
	loadArg.mHeap = JKRGetCurrentHeap();

	LoadResource::Node* loadNode = gLoadResourceMgr->mountArchive(loadArg);
	if (loadNode) {
		mArchive = (JKRMemArchive*)loadNode->mArchive;
	} else {
		mArchive = nullptr;
	}
}

/**
 * @note Address: 0x801CCF50
 * @note Size: 0xAC
 */
void BaseItemMgr::loadBmd(char* path, int shapeID, u32 flags)
{
	P2ASSERTBOUNDSLINE(702, 0, shapeID, mModelDataMax);
	J3DModelData* modelData = J3DModelLoaderDataBase::load(JKRFileLoader::getGlbResource(path, nullptr), flags);
	JUT_ASSERTLINE(708, modelData != nullptr, "fatal error\n");
	mModelData[shapeID] = modelData;
}

/**
 * @note Address: 0x801CCFFC
 * @note Size: 0x80
 */
void BaseItemMgr::loadAnimMgr(JKRFileLoader* loader, char* path)
{
	mAnimMgr = SysShape::AnimMgr::load(loader, path, *mModelData, mArchive, nullptr);
	JUT_ASSERTLINE(753, mAnimMgr != nullptr, "AnimMgr creation failed ! %s\n", path);
}

/**
 * @note Address: 0x801CD07C
 * @note Size: 0x38
 */
void BaseItemMgr::loadCollision(JKRFileLoader* loader, char* path) { mCollPartFactory = CollPartFactory::load(loader, path); }

/**
 * @note Address: 0x801CD0B4
 * @note Size: 0x38
 */
GenItemParm* BaseItemMgr::generatorNewItemParm() { return new GenItemParm(); }

/**
 * @note Address: 0x801CD0EC
 * @note Size: 0x64
 */
J3DModelData* BaseItemMgr::generatorGetShape(Game::GenItemParm* parm)
{
	int shapeID = parm->getShapeID();
	J3DModelData* modelData;
	if (!(0 > shapeID || shapeID >= mModelDataMax)) {
		modelData = mModelData[shapeID];
	} else {
		modelData = nullptr;
	}
	return modelData;
}

/**
 * @note Address: 0x801CD150
 * @note Size: 0x7C
 */
J3DModelData* BaseItemMgr::getModelData(int index)
{
	P2ASSERTBOUNDSLINE(792, 0, index, mModelDataMax);
	return mModelData[index];
}

/**
 * @note Address: 0x801CD1CC
 * @note Size: 0x84
 */
JKRArchive* BaseItemMgr::openTextArc(char* fileName)
{
	char pathBuffer[512];
	sprintf(pathBuffer, "%s/%s", mObjectPathComponent, fileName);

	LoadResource::Arg loadArg(pathBuffer);
	loadArg.mHeap     = JKRGetCurrentHeap();
	loadArg.mAllocDir = JKRDvdRipper::ALLOC_DIR_BOTTOM;
	mResourceNode     = gLoadResourceMgr->mountArchive(loadArg);

	return (mResourceNode) ? mResourceNode->mArchive : nullptr;
}

/**
 * @note Address: 0x801CD250
 * @note Size: 0x50
 */
void BaseItemMgr::closeTextArc(JKRArchive*)
{
	delete mResourceNode;
	mResourceNode = nullptr;
}

/**
 * @note Address: 0x801CD2A0
 * @note Size: 0x68
 */
Platform* BaseItemMgr::loadPlatform(JKRFileLoader* loader, char* p2)
{
	Platform* platform = new Platform;
	platform->load(loader, p2);
	return platform;
}

/**
 * @note Address: 0x801CD308
 * @note Size: 0xBC
 */
PlatAttacher* BaseItemMgr::loadPlatAttacher(JKRFileLoader* loader, char* path)
{
	PlatAttacher* attacher = new PlatAttacher;
	// Why does PlatAttacher not have a ::load? Ah well.
	// It clearly doesn't, given the assertion was written in this file....
	void* data = JKRFileLoader::getGlbResource(path, loader);
	// Line 0x404: platAttacher not found. :-)
	if (data == nullptr) {
		JUT_PANICLINE(1028, "platAttacher %s not found !\n", path);
	} else {
		RamStream stream(data, -1);
		stream.resetPosition(false, -1);
		attacher->read(stream);
		return attacher;
	}
}

/**
 * @note Address: 0x801CD3C4
 * @note Size: 0x2C
 */
void BaseItemMgr::updateUseList(Game::GenItemParm* p1, int p2) { onUpdateUseList(p1, p2); }

/**
 * @note Address: 0x801CD3F0
 * @note Size: 0x2C
 */
void BaseItemMgr::loadResources() { onLoadResources(); }

/**
 * @note Address: 0x801CD41C
 * @note Size: 0x4
 */
void BaseItemMgr::setupSoundViewerAndBas() { }

/**
 * @note Address: 0x801CD420
 * @note Size: 0x14C
 */
TNodeItemMgr::TNodeItemMgr()
    : BaseItemMgr(0)
{
}

/**
 * @note Address: 0x801CD78C
 * @note Size: 0x9C
 */
BaseItem* TNodeItemMgr::birth()
{
	BaseItem* item              = doNew();
	item->mNodeItemMgr          = this;
	TObjectNode<BaseItem>* node = new TObjectNode<BaseItem>;
	node->mContents             = item;
	mNodeObjectMgr.mNode.add(node);
	node->mContents->constructor();
	return item;
}

/**
 * entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
 * @note Address: 0x801CD828
 * @note Size: 0x84
 */
void TNodeItemMgr::entry(BaseItem* item)
{
	item->mNodeItemMgr          = this;
	TObjectNode<BaseItem>* node = new TObjectNode<BaseItem>;
	node->mContents             = item;
	mNodeObjectMgr.mNode.add(node);
	node->mContents->constructor();
}

/**
 * initDependency__Q24Game12TNodeItemMgrFv
 * @note Address: 0x801CD8AC
 * @note Size: 0x1E8
 */
void TNodeItemMgr::initDependency()
{
	Iterator<BaseItem> iterator(&mNodeObjectMgr);
	CI_LOOP(iterator)
	{
		BaseItem* item = (*iterator);
		item->initDependency();
	}
}

/**
 * @note Address: 0x801CDA94
 * @note Size: 0xA8
 */
void TNodeItemMgr::killAll()
{
	for (TObjectNode<BaseItem>* node = (TObjectNode<BaseItem>*)mNodeObjectMgr.mNode.mChild; node != nullptr;
	     node                        = (TObjectNode<BaseItem>*)mNodeObjectMgr.mNode.mChild) {
		node->mContents->getCreatureName();
		BaseItem* creature = node->mContents;
		CreatureKillArg arg(CKILL_Unk1);
		creature->kill(&arg);
		if (creature->mSoundObj != nullptr && PSSystem::SingletonBase<PSM::ObjMgr>::sInstance) {
			PSSystem::SingletonBase<PSM::ObjMgr>::sInstance->remove(creature->mSoundObj);
		}
	}
}

/**
 * __ct__Q24Game7ItemMgrFv
 * @note Address: 0x801CDB3C
 * @note Size: 0xC4
 */
ItemMgr::ItemMgr()
{
	mName = "アイテムマネージャ"; // "Item Manager"
}

/**
 * __dt__Q24Game7ItemMgrFv
 * @note Address: 0x801CDC00
 * @note Size: 0xE8
 */
ItemMgr::~ItemMgr() { clearGlobalPointers(); }

/**
 * @note Address: 0x801CDCE8
 * @note Size: 0x6C
 */
void ItemMgr::addMgr(BaseItemMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>;
	node->mContents                     = mgr;
	mNode.add(node);
}

/**
 * initDependency__Q24Game7ItemMgrFv
 * @note Address: 0x801CDD54
 * @note Size: 0x1E4
 */
void ItemMgr::initDependency()
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		BaseItemMgr* item = (BaseItemMgr*)(*iterator);
		item->initDependency();
	}
}

/**
 * doAnimation__Q24Game7ItemMgrFv
 * @note Address: 0x801CDF38
 * @note Size: 0x1E4
 */
void ItemMgr::doAnimation()
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->doAnimation();
	}
}

/**
 * doEntry__Q24Game7ItemMgrFv
 * @note Address: 0x801CE11C
 * @note Size: 0x1E4
 */
void ItemMgr::doEntry()
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->doEntry();
	}
}

/**
 * doSetView__Q24Game7ItemMgrFi
 * @note Address: 0x801CE300
 * @note Size: 0x1F4
 */
void ItemMgr::doSetView(int viewportNumber)
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->doSetView(viewportNumber);
	}
}

/**
 * doViewCalc__Q24Game7ItemMgrFv
 * @note Address: 0x801CE4F4
 * @note Size: 0x1E4
 */
void ItemMgr::doViewCalc()
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->doViewCalc();
	}
}

/**
 * doSimulation__Q24Game7ItemMgrFf
 * @note Address: 0x801CE6D8
 * @note Size: 0x1F4
 */
void ItemMgr::doSimulation(f32 p1)
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->doSimulation(p1);
	}
}

/**
 * @note Address: 0x801CE8CC
 * @note Size: 0x4
 */
void ItemMgr::doDirectDraw(Graphics&) { }

/**
 * doSimpleDraw__Q24Game7ItemMgrFP8Viewport
 * @note Address: 0x801CE8D0
 * @note Size: 0x1F4
 */
void ItemMgr::doSimpleDraw(Viewport* viewport)
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->doSimpleDraw(viewport);
	}
}

/**
 * setupSoundViewerAndBas__Q24Game7ItemMgrFv
 * @note Address: 0x801CEAC4
 * @note Size: 0x1E4
 */
void ItemMgr::setupSoundViewerAndBas()
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		BaseItemMgr* item = (BaseItemMgr*)(*iterator);
		item->setupSoundViewerAndBas();
	}
}

/**
 * loadResources__Q24Game7ItemMgrFv
 * @note Address: 0x801CECA8
 * @note Size: 0x1E4
 */
void ItemMgr::loadResources()
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		GenericObjectMgr* item = (*iterator);
		item->loadResources();
	}
}

/**
 * @note Address: 0x801CEE8C
 * @note Size: 0x204
 */
int ItemMgr::getIndexByMgr(Game::BaseItemMgr* mgr)
{
	int index = 0;
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		if (*iterator == mgr) {
			return index;
		}
		index++;
	}
	return -1;
}

/**
 * @note Address: 0x801CF090
 * @note Size: 0x200
 */
BaseItemMgr* ItemMgr::getMgrByIndex(int index)
{
	int i = 0;
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		BaseItemMgr* mgr = (BaseItemMgr*)(*iterator);
		if (i == index) {
			return mgr;
		}
		i++;
	}
	return nullptr;
}

/**
 * @note Address: 0x801CF290
 * @note Size: 0x224
 */
BaseItemMgr* ItemMgr::getMgrByID(ID32& id)
{
	Iterator<GenericObjectMgr> iterator(this);
	CI_LOOP(iterator)
	{
		BaseItemMgr* item = (BaseItemMgr*)(*iterator);
		if (id.match(item->generatorGetID(), '*')) {
			return item;
		}
	}
	return nullptr;
}

} // namespace Game
