#include "efx/THoneydown.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/Navi.h"
#include "Game/AIConstants.h"
#include "PSM/Navi.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ItemHoney {

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Printf(char* format) { OSReport(format, "itemHoney"); }

Mgr* mgr;

/*
 * --INFO--
 * Address:	801D2D6C
 * Size:	00023C
 */
void FSM::init(CFSMItem*)
{
	create(HONEY_StateCount);
	registerState(new FallState());
	registerState(new BounceState());
	registerState(new WaitState());
	registerState(new ShrinkState());
	registerState(new TouchState());
	registerState(new DemoState());
}

/*
 * --INFO--
 * Address:	801D2FA8
 * Size:	000004
 */
void FallState::init(CFSMItem*, StateArg*) { }

/*
 * --INFO--
 * Address:	801D2FAC
 * Size:	000004
 */
void FallState::exec(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D2FB0
 * Size:	000004
 */
void FallState::cleanup(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D2FB4
 * Size:	000034
 */
void FallState::onBounce(CFSMItem* item, Sys::Triangle* tri) { transit(item, HONEY_Bounce, nullptr); }

/*
 * --INFO--
 * Address:	801D2FE8
 * Size:	0001C4
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

/*
 * --INFO--
 * Address:	801D31AC
 * Size:	000004
 */
void BounceState::exec(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D31B0
 * Size:	000004
 */
void BounceState::cleanup(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D31B4
 * Size:	000034
 */
void BounceState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { transit(item, HONEY_Wait, nullptr); }

/*
 * --INFO--
 * Address:	801D31E8
 * Size:	000038
 */
void WaitState::init(CFSMItem* item, StateArg* arg) { item->mAnimator.startAnim(4, item); }

/*
 * --INFO--
 * Address:	801D3220
 * Size:	000004
 */
void WaitState::exec(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D3224
 * Size:	000004
 */
void WaitState::cleanup(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D3228
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	801D3344
 * Size:	000038
 */
bool WaitState::interactAbsorb(CFSMItem* item, InteractAbsorb& interaction)
{
	transit(item, HONEY_Shrink, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	801D337C
 * Size:	000038
 */
void ShrinkState::init(CFSMItem* item, StateArg* arg) { item->mAnimator.startAnim(6, item); }

/*
 * --INFO--
 * Address:	801D33B4
 * Size:	000004
 */
void ShrinkState::exec(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D33B8
 * Size:	000004
 */
void ShrinkState::cleanup(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D33BC
 * Size:	000064
 */
void ShrinkState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent&)
{
	item->setAlive(false);
	item->kill(nullptr);
	mgr->kill(static_cast<Item*>(item));
}

/*
 * --INFO--
 * Address:	801D3444
 * Size:	00004C
 */
void TouchState::init(CFSMItem* item, StateArg* arg)
{
	item->mAnimator.startAnim(5, item);
	mIsJiggling = false;
}

/*
 * --INFO--
 * Address:	801D3490
 * Size:	000004
 */
void TouchState::exec(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D3494
 * Size:	000004
 */
void TouchState::cleanup(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D3498
 * Size:	000038
 */
bool TouchState::interactAbsorb(CFSMItem* item, InteractAbsorb& interaction)
{
	transit(item, HONEY_Shrink, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	801D34D0
 * Size:	000034
 */
void TouchState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { transit(item, HONEY_Wait, nullptr); }

/*
 * --INFO--
 * Address:	801D3504
 * Size:	000080
 */
void TouchState::collisionCallback(CFSMItem* item, CollEvent& collEvent)
{
	Creature* other = collEvent.mCollidingCreature;
	if (!mIsJiggling && other->isNavi()) {
		mIsJiggling = true;
		static_cast<Navi*>(other)->mSoundObj->startSound(PSSE_PL_TOUCH_HONEY, 0);
	}
}

/*
 * --INFO--
 * Address:	801D3584
 * Size:	000038
 */
void DemoState::init(CFSMItem* item, StateArg* arg) { item->mAnimator.startAnim(5, item); }

/*
 * --INFO--
 * Address:	801D35BC
 * Size:	000004
 */
void DemoState::exec(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D35C0
 * Size:	000004
 */
void DemoState::cleanup(CFSMItem*) { }

/*
 * --INFO--
 * Address:	801D35C4
 * Size:	000038
 */
void DemoState::onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { item->mAnimator.startAnim(5, item); }

/*
 * --INFO--
 * Address:	801D35FC
 * Size:	00003C
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

/*
 * --INFO--
 * Address:	801D3638
 * Size:	000088
 */
Item::Item()
    : CFSMItem(OBJTYPE_Honey)
{
	mBoundingSphere.mRadius = 15.0f;
	mCollTree->createSingleSphere(mModel, 0, mBoundingSphere, nullptr);
}

/*
 * --INFO--
 * Address:	801D36C0
 * Size:	000058
 */
CItemFSM* Item::createFSM() { return new FSM(); }

/*
 * --INFO--
 * Address:	801D3718
 * Size:	000040
 */
void Item::doAI()
{
	CFSMItem::doAI();
	CheckHellArg hellArg;
	checkHell(hellArg);
}

/*
 * --INFO--
 * Address:	801D3758
 * Size:	000158
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

/*
 * --INFO--
 * Address:	801D38B0
 * Size:	000004
 */
void Item::onSetPosition() { }

/*
 * --INFO--
 * Address:	801D38B4
 * Size:	000008
 */
f32 Item::getMapCollisionRadius() { return 7.5f; }

/*
 * --INFO--
 * Address:	801D38BC
 * Size:	000130
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

/*
 * --INFO--
 * Address:	801D39EC
 * Size:	000038
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	updateCollTree();
}

/*
 * --INFO--
 * Address:	801D3A24
 * Size:	000094
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

/*
 * --INFO--
 * Address:	801D3AB8
 * Size:	000054
 */
bool Item::absorbable()
{
	if (getCurrState()) {
		return static_cast<State*>(getCurrState())->absorbable();
	}
	return false;
}

/*
 * --INFO--
 * Address:	801D3B14
 * Size:	000060
 */
void Item::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (getCurrState()) {
		static_cast<State*>(getCurrState())->onKeyEvent(this, keyEvent);
	}
}

/*
 * --INFO--
 * Address:	801D3B74
 * Size:	000060
 */
void Item::collisionCallback(CollEvent& collEvent)
{
	if (getCurrState()) {
		static_cast<State*>(getCurrState())->collisionCallback(this, collEvent);
	}
}

/*
 * --INFO--
 * Address:	801D3BD8
 * Size:	000068
 */
bool Item::interactAbsorb(InteractAbsorb& interaction)
{
	if (getCurrState() != nullptr) {
		return static_cast<State*>(getCurrState())->interactAbsorb(this, interaction);
	}
	return false;
}

/*
 * --INFO--
 * Address:	801D3C48
 * Size:	000004
 */
void Item::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	801D3C4C
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	801D3CB8
 * Size:	00003C
 */
void Item::onStartCapture() { mFsm->start(this, HONEY_Fall, nullptr); }

/*
 * --INFO--
 * Address:	801D3CF4
 * Size:	000054
 */
void Item::onUpdateCapture(Matrixf& mtx)
{
	mBaseTrMatrix.getBasis(3, mPosition);
	mVelocity = Vector3f(0.0f);
	entryShape();
}

/*
 * --INFO--
 * Address:	801D3D48
 * Size:	000028
 */
void Item::onEndCapture() { setPosition(mPosition, false); }

/*
 * --INFO--
 * Address:	801D3D70
 * Size:	00002C
 */
void Item::on_movie_end(bool shouldResetAnims) { mAnimator.startAnim(4, nullptr); }

/*
 * --INFO--
 * Address:	801D3D9C
 * Size:	00002C
 */
bool Item::isShrinking() { return getStateID() == HONEY_Shrink; }

/*
 * --INFO--
 * Address:	801D3DC8
 * Size:	0000D0
 */
Mgr::Mgr()
{
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/honey";
	mItemName            = "Honey";
}

/*
 * --INFO--
 * Address:	801D40A8
 * Size:	000070
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->getJ3DModel()->newDifferedDisplayList(0x1000200);
	model->getJ3DModel()->calc();
	model->getJ3DModel()->calcMaterial();
	model->getJ3DModel()->makeDL();
	model->getJ3DModel()->lock();
}

/*
 * --INFO--
 * Address:	801D4118
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	801D41E4
 * Size:	00002C
 */
Item* Mgr::birth() { return mMonoObjectMgr.birth(); }

/*
 * --INFO--
 * Address:	801D4210
 * Size:	000060
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
