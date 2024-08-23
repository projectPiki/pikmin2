#include "efx/THoneydown.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/Navi.h"
#include "Game/AIConstants.h"
#include "PSM/Navi.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ItemHoney {

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Printf(char* format) { OSReport(format, "itemHoney"); }

Mgr* mgr;

/**
 * @note Address: 0x801D2D6C
 * @note Size: 0x23C
 */
void FSM::init(CFSMItem*)
{
	create(HONEY_StateCount);
	registerState(new FallState);
	registerState(new BounceState);
	registerState(new WaitState);
	registerState(new ShrinkState);
	registerState(new TouchState);
	registerState(new DemoState);
}

/**
 * @note Address: 0x801D2FA8
 * @note Size: 0x4
 */
void FallState::init(CFSMItem*, StateArg*) { }

/**
 * @note Address: 0x801D2FAC
 * @note Size: 0x4
 */
void FallState::exec(CFSMItem*) { }

/**
 * @note Address: 0x801D2FB0
 * @note Size: 0x4
 */
void FallState::cleanup(CFSMItem*) { }

/**
 * @note Address: 0x801D2FB4
 * @note Size: 0x34
 */
void FallState::onBounce(CFSMItem* item, Sys::Triangle* tri) { transit(item, HONEY_Bounce, nullptr); }

/**
 * @note Address: 0x801D2FE8
 * @note Size: 0x1C4
 */
void BounceState::init(CFSMItem* item, StateArg* arg)
{
	item->mAnimator.startAnim(3, item);
	item->mVelocity = Vector3f(0.0f);
	item->startSound(PSSE_EV_WORK_HONEY_DROP);
	Vector3f pos = item->getPosition();
	Item* honey  = static_cast<Item*>(item);
	switch (honey->mHoneyType) {
	case HONEY_Y: {
		efx::THoneydownY effect;
		efx::Arg effectArg(pos);
		effect.create(&effectArg);
		break;
	}
	case HONEY_R: {
		efx::THoneydownR effect;
		efx::Arg effectArg(pos);
		effect.create(&effectArg);
		break;
	}
	case HONEY_B: {
		efx::THoneydownB effect;
		efx::Arg effectArg(pos);
		effect.create(&effectArg);
		break;
	}
	}
}

/**
 * @note Address: 0x801D31AC
 * @note Size: 0x4
 */
void BounceState::exec(CFSMItem*) { }

/**
 * @note Address: 0x801D31B0
 * @note Size: 0x4
 */
void BounceState::cleanup(CFSMItem*) { }

/**
 * @note Address: 0x801D31B4
 * @note Size: 0x34
 */
void BounceState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { transit(item, HONEY_Wait, nullptr); }

/**
 * @note Address: 0x801D31E8
 * @note Size: 0x38
 */
void WaitState::init(CFSMItem* item, StateArg* arg) { item->mAnimator.startAnim(4, item); }

/**
 * @note Address: 0x801D3220
 * @note Size: 0x4
 */
void WaitState::exec(CFSMItem*) { }

/**
 * @note Address: 0x801D3224
 * @note Size: 0x4
 */
void WaitState::cleanup(CFSMItem*) { }

/**
 * @note Address: 0x801D3228
 * @note Size: 0x11C
 */
void WaitState::collisionCallback(CFSMItem* item, CollEvent& event)
{
	// colliding creature needs to be moving fast enough to trigger a collision
	Vector3f vel = event.mCollidingCreature->getVelocity();
	if (vel.x * vel.x + vel.z * vel.z < 100.0f) {
		return;
	}

	// if we hit nectar and we're not a piki (or another honey), enter touch state
	if (static_cast<Item*>(item)->mHoneyType == HONEY_Y) {
		if (!event.mCollidingCreature->isPiki() && event.mCollidingCreature->mObjectTypeID != OBJTYPE_Honey) {
			transit(item, HONEY_Touch, nullptr);
		}

		// if we hit a spray and we're not a navi (or another honey), enter touch state
	} else if (!event.mCollidingCreature->isNavi() && event.mCollidingCreature->mObjectTypeID != OBJTYPE_Honey) {
		transit(item, HONEY_Touch, nullptr);
	}
}

/**
 * @note Address: 0x801D3344
 * @note Size: 0x38
 */
bool WaitState::interactAbsorb(CFSMItem* item, InteractAbsorb& interaction)
{
	transit(item, HONEY_Shrink, nullptr);
	return true;
}

/**
 * @note Address: 0x801D337C
 * @note Size: 0x38
 */
void ShrinkState::init(CFSMItem* item, StateArg* arg) { item->mAnimator.startAnim(6, item); }

/**
 * @note Address: 0x801D33B4
 * @note Size: 0x4
 */
void ShrinkState::exec(CFSMItem*) { }

/**
 * @note Address: 0x801D33B8
 * @note Size: 0x4
 */
void ShrinkState::cleanup(CFSMItem*) { }

/**
 * @note Address: 0x801D33BC
 * @note Size: 0x64
 */
void ShrinkState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent&)
{
	item->setAlive(false);
	item->kill(nullptr);
	mgr->kill(static_cast<Item*>(item));
}

/**
 * @note Address: 0x801D3444
 * @note Size: 0x4C
 */
void TouchState::init(CFSMItem* item, StateArg* arg)
{
	item->mAnimator.startAnim(5, item);
	mIsJiggling = false;
}

/**
 * @note Address: 0x801D3490
 * @note Size: 0x4
 */
void TouchState::exec(CFSMItem*) { }

/**
 * @note Address: 0x801D3494
 * @note Size: 0x4
 */
void TouchState::cleanup(CFSMItem*) { }

/**
 * @note Address: 0x801D3498
 * @note Size: 0x38
 */
bool TouchState::interactAbsorb(CFSMItem* item, InteractAbsorb& interaction)
{
	transit(item, HONEY_Shrink, nullptr);
	return true;
}

/**
 * @note Address: 0x801D34D0
 * @note Size: 0x34
 */
void TouchState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { transit(item, HONEY_Wait, nullptr); }

/**
 * @note Address: 0x801D3504
 * @note Size: 0x80
 */
void TouchState::collisionCallback(CFSMItem* item, CollEvent& collEvent)
{
	Creature* other = collEvent.mCollidingCreature;
	if (!mIsJiggling && other->isNavi()) {
		mIsJiggling = true;
		static_cast<Navi*>(other)->mSoundObj->startSound(PSSE_PL_TOUCH_HONEY, 0);
	}
}

/**
 * @note Address: 0x801D3584
 * @note Size: 0x38
 */
void DemoState::init(CFSMItem* item, StateArg* arg) { item->mAnimator.startAnim(5, item); }

/**
 * @note Address: 0x801D35BC
 * @note Size: 0x4
 */
void DemoState::exec(CFSMItem*) { }

/**
 * @note Address: 0x801D35C0
 * @note Size: 0x4
 */
void DemoState::cleanup(CFSMItem*) { }

/**
 * @note Address: 0x801D35C4
 * @note Size: 0x38
 */
void DemoState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { item->mAnimator.startAnim(5, item); }

/**
 * @note Address: 0x801D35FC
 * @note Size: 0x3C
 */
bool Item::demoOK()
{
	int stateID = getStateID();
	bool result = false;
	if (stateID == HONEY_Wait || stateID == HONEY_Touch) {
		result = true;
	}
	return result;
}

/**
 * @note Address: 0x801D3638
 * @note Size: 0x88
 */
Item::Item()
    : CFSMItem(OBJTYPE_Honey)
{
	mBoundingSphere.mRadius = 15.0f;
	mCollTree->createSingleSphere(mModel, 0, mBoundingSphere, nullptr);
}

/**
 * @note Address: 0x801D36C0
 * @note Size: 0x58
 */
CItemFSM* Item::createFSM() { return new FSM(); }

/**
 * @note Address: 0x801D3718
 * @note Size: 0x40
 */
void Item::doAI()
{
	CFSMItem::doAI();
	CheckHellArg hellArg;
	checkHell(hellArg);
}

/**
 * @note Address: 0x801D3758
 * @note Size: 0x158
 */
void Item::onInit(CreatureInitArg* initArg)
{
	mModel = mgr->FixedSizeItemMgr::createModel(this);

	InitArg* honeyArg = static_cast<InitArg*>(initArg);
	if (honeyArg) {
		mHoneyType = honeyArg->mHoneyType;
	} else {
		mHoneyType = HONEY_Y;
		mHoneyType = randFloat() * 3.0f;
	}

	mAnimator.mAnimMgr = mgr->mAnimMgr;
	mAnimator.startAnim(0, nullptr);
	mAnimSpeed = 30.0f;

	mCollTree->attachModel(mModel);

	setCollisionFlick(false);

	if (honeyArg && honeyArg->mIsDemo) {
		mFsm->start(this, HONEY_Demo, nullptr);
	} else {
		mFsm->start(this, HONEY_Fall, nullptr);
	}

	setAlive(true);
}

/**
 * @note Address: 0x801D38B0
 * @note Size: 0x4
 */
void Item::onSetPosition() { }

/**
 * @note Address: 0x801D38B4
 * @note Size: 0x8
 */
f32 Item::getMapCollisionRadius() { return 7.5f; }

/**
 * @note Address: 0x801D38BC
 * @note Size: 0x130
 */
void Item::changeMaterial()
{
	if (isAlive()) {
		J2DGXColorS10 color;
		if (mHoneyType == HONEY_Y) {
			// dark yellow
			color.r = 182;
			color.g = 121;
			color.b = 0;
			color.a = 255;
		} else if (mHoneyType == HONEY_R) {
			// dark red
			color.r = 130;
			color.g = 40;
			color.b = 49;
			color.a = 255;
		} else {
			// dark purple
			color.r = 26;
			color.g = 7;
			color.b = 54;
			color.a = 255;
		}

		int idx               = mModel->mJ3dModel->mModelData->getMaterialName()->getIndex("mitu1");
		J3DMaterial* material = mModel->mJ3dModel->mModelData->getMaterialNodePointer(idx);
		JUT_ASSERTLINE(505, material, "no mat mitu1\n");
		material->getTevBlock()->setTevColor(0, color);

		mModel->mJ3dModel->calcMaterial();
		mModel->mJ3dModel->diff();
	}
}

/**
 * @note Address: 0x801D39EC
 * @note Size: 0x38
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	updateCollTree();
}

/**
 * @note Address: 0x801D3A24
 * @note Size: 0x94
 */
void Item::doSimulation(f32 rate)
{
	if (!mCaptureMatrix && getStateID() == HONEY_Fall) {
		mVelocity.y -= rate * _aiConstants->mGravity.mData;
		move(rate);
	} else {
		mVelocity.z = 0.0f;
		mVelocity.y = 0.0f;
		mVelocity.x = 0.0f;
	}
}

/**
 * @note Address: 0x801D3AB8
 * @note Size: 0x54
 */
bool Item::absorbable()
{
	if (getCurrState()) {
		return static_cast<State*>(getCurrState())->absorbable();
	}
	return false;
}

/**
 * @note Address: 0x801D3B14
 * @note Size: 0x60
 */
void Item::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (getCurrState()) {
		static_cast<CItemState*>(getCurrState())->onKeyEvent(this, keyEvent);
	}
}

/**
 * @note Address: 0x801D3B74
 * @note Size: 0x60
 */
void Item::collisionCallback(CollEvent& collEvent)
{
	if (getCurrState()) {
		static_cast<State*>(getCurrState())->collisionCallback(this, collEvent);
	}
}

/**
 * @note Address: 0x801D3BD8
 * @note Size: 0x68
 */
bool Item::interactAbsorb(InteractAbsorb& interaction)
{
	if (getCurrState() != nullptr) {
		return static_cast<State*>(getCurrState())->interactAbsorb(this, interaction);
	}
	return false;
}

/**
 * @note Address: 0x801D3C48
 * @note Size: 0x4
 */
void Item::doDirectDraw(Graphics& gfx) { }

/**
 * @note Address: 0x801D3C4C
 * @note Size: 0x6C
 */
void Item::makeTrMatrix()
{
	// indexed by HoneyKind
	f32 scaleVals[3] = {
		1.5f,  // nectar
		1.75f, // spicy
		1.75f, // bitter
	};

	Vector3f scale = Vector3f(scaleVals[mHoneyType]);
	mBaseTrMatrix.makeST(scale, mPosition);
}

/**
 * @note Address: 0x801D3CB8
 * @note Size: 0x3C
 */
void Item::onStartCapture() { mFsm->start(this, HONEY_Fall, nullptr); }

/**
 * @note Address: 0x801D3CF4
 * @note Size: 0x54
 */
void Item::onUpdateCapture(Matrixf& mtx)
{
	mBaseTrMatrix.getColumn(3, mPosition);
	mVelocity = Vector3f(0.0f);
	entryShape();
}

/**
 * @note Address: 0x801D3D48
 * @note Size: 0x28
 */
void Item::onEndCapture() { setPosition(mPosition, false); }

/**
 * @note Address: 0x801D3D70
 * @note Size: 0x2C
 */
void Item::on_movie_end(bool shouldResetAnims) { mAnimator.startAnim(4, nullptr); }

/**
 * @note Address: 0x801D3D9C
 * @note Size: 0x2C
 */
bool Item::isShrinking() { return getStateID() == HONEY_Shrink; }

/**
 * @note Address: 0x801D3DC8
 * @note Size: 0xD0
 */
Mgr::Mgr()
{
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/honey";
	mItemName            = "Honey";
}

/**
 * @note Address: 0x801D40A8
 * @note Size: 0x70
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->getJ3DModel()->newDifferedDisplayList(0x1000200);
	model->getJ3DModel()->calc();
	model->getJ3DModel()->calcMaterial();
	model->getJ3DModel()->makeDL();
	model->getJ3DModel()->lock();
}

/**
 * @note Address: 0x801D4118
 * @note Size: 0xCC
 */
void Mgr::onLoadResources()
{
	sys->heapStatusStart("itemHoney", nullptr);
	loadArchive("arc.szs");
	loadBmd("mitu.bmd", 0, 0x20000);
	(*mModelData)->newSharedDisplayList(0x40000);
	JKRArchive* arc = openTextArc("texts.szs");
	loadAnimMgr(arc, "honeyAnimMgr.txt");
	closeTextArc(arc);
	createMgr(24, 0x80000);
	sys->heapStatusEnd("itemHoney");
}

/**
 * @note Address: 0x801D41E4
 * @note Size: 0x2C
 */
Item* Mgr::birth() { return FixedSizeItemMgr<Item>::birth(); }

/**
 * @note Address: 0x801D4210
 * @note Size: 0x60
 */
Item* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	Item* item = birth();
	item->init(nullptr);
	item->setPosition(pos, false);
	return item;
}

} // namespace ItemHoney
} // namespace Game
