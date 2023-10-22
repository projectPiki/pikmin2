#include "Game/shadowMgr.h"
#include "Game/Creature.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Viewport.h"
#include "Camera.h"
#include "nans.h"

namespace Game {

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "246-ShadowMgr";

ShadowMgr* shadowMgr;

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JointShadowRootNode::JointShadowRootNode()
{
	mCreature  = nullptr;
	mIsVisible = false;
}

/*
 * --INFO--
 * Address:	8024127C
 * Size:	000060
 */
JointShadowRootNode::JointShadowRootNode(Creature* owner)
{
	mCreature  = owner;
	mIsVisible = false;
	shadowMgr->setJointShadowRootNode(this);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JointShadowRootNode::init(int count)
{
	mIsVisible = false;
	FOREACH_NODE(JointShadowNode, mChild, childNode) { childNode->init(count); }
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
JointShadowNode::JointShadowNode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802412DC
 * Size:	000074
 */
JointShadowNode::JointShadowNode(int mtxCount)
{
	mCylinderID = 0;
	mMainMtx    = new Matrixf;
	mChildMtx   = new Matrixf[mtxCount];
	init(mtxCount);
}

/*
 * --INFO--
 * Address:	80241350
 * Size:	000074
 */
void JointShadowNode::init(int count)
{
	PSMTXIdentity(mMainMtx->mMatrix.mtxView);
	for (int i = 0; i < count; i++) {
		PSMTXIdentity(mChildMtx[i].mMatrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
ShadowNode::ShadowNode()
{
	mCreature = nullptr;
	mMatrices = nullptr;
	mFlags    = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
ShadowNode::ShadowNode(Creature* owner, int count)
{
	mCreature = owner;
	mMatrices = new Matrixf[count];
	mFlags    = 0;
	for (int i = 0; i < count; i++) {
		PSMTXIdentity(mMatrices[i].mMatrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void ShadowNode::init(int count)
{
	mFlags = 0;
	for (int i = 0; i < count; i++) {
		PSMTXIdentity(mMatrices[i].mMatrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	802413C4
 * Size:	000080
 */
ShadowMgr::ShadowMgr(int count)
{
	mViewportNum    = count;
	mAllocShadowNum = 0;
	loadResource();
	mEnabled             = true;
	mDoCheckCylinderType = 1;
	mCylinderID          = 0;
	_44                  = 0;
	mName                = "ShadowMgr";
}

/*
 * --INFO--
 * Address:	80241444
 * Size:	000210
 */
void ShadowMgr::loadResource()
{
	mParms                = new ShadowParms;
	mActiveShadows        = new ShadowNode;
	mInactiveShadows      = new ShadowNode;
	mCylinders[0]         = new ShadowCylinder2(mParms, &mColor);
	mCylinders[1]         = new ShadowCylinder3(mParms, &mColor);
	mViewports            = new Viewport*[mViewportNum];
	mActiveJointShadows   = new JointShadowRootNode;
	mInactiveJointShadows = new JointShadowRootNode;
	readShadowParms("/user/Nishimura/Shadow/shadowParms.txt");
}

/*
 * --INFO--
 * Address:	80241654
 * Size:	000004
 */
void ShadowMgr::init() { }

/*
 * --INFO--
 * Address:	80241658
 * Size:	000010
 */
void ShadowMgr::setViewport(Viewport* vp, int idx) { mViewports[idx] = vp; }

/*
 * --INFO--
 * Address:	80241668
 * Size:	000048
 */
void ShadowMgr::setShadowColor(Color4* color)
{
	mCylinders[0]->setColor(color);
	mCylinders[1]->setColor(color);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void ShadowMgr::resetShadowColor()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void ShadowMgr::drawShadowOn()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void ShadowMgr::drawShadowOff()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802416B0
 * Size:	000260
 */
void ShadowMgr::update()
{
	if (mEnabled) {
		for (int i = 0; i < getViewportCount(); i++) {
			getActiveCylinder()->setCameraParms(getViewport(i)->getCamera(), i);
		}

		FOREACH_NODE(ShadowNode, mActiveShadows->getNext(), node)
		{
			if (node->getGameObject()->needShadow()) {
				Matrixf mat;
				ShadowParam param;
				node->getGameObject()->getShadowParam(param);
				node->mFlags &= ~0x0FFFFFFF;
				getActiveCylinder()->makeSRT(mat, param);

				for (int i = 0; i < getViewportCount(); i++) {
					if (getViewport(i)->viewable()) {
						Matrixf* nodeMat = node->getMtx(i);
						Matrixf* viewMat = getViewport(i)->getCamera()->getViewMatrix(false);
						PSMTXConcat(viewMat->mMatrix.mtxView, mat.mMatrix.mtxView, nodeMat->mMatrix.mtxView);

						int cylType = 0;
						if (mDoCheckCylinderType) {
							cylType = getActiveCylinder()->getCylinderType(param, i);
						}

						node->mFlags |= getShadowMaskType(cylType, i);
					}
				}
			}
		}

		FOREACH_NODE(JointShadowRootNode, mActiveJointShadows->getNext(), node)
		{
			if (node->mCreature->needShadow()) {
				FOREACH_NODE(JointShadowNode, node->getNext(), childNode)
				{
					for (int i = 0; i < getViewportCount(); i++) {
						if (getViewport(i)->viewable()) {
							Matrixf* nodeMat = childNode->getMtxA();
							Matrixf* dest    = childNode->getMtxB(i);
							Matrixf* viewMat = getViewport(i)->getCamera()->getViewMatrix(false);
							PSMTXConcat(viewMat->mMatrix.mtxView, nodeMat->mMatrix.mtxView, dest->mMatrix.mtxView);
						}
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000250
 */
void ShadowMgr::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241910
 * Size:	000210
 */
void ShadowMgr::draw(Graphics& gfx, int idx)
{
	sys->mTimers->_start("shadow", true);
	if (mEnabled && getViewport(idx)->viewable()) {
		Rectf box = getViewport(idx)->mBounds2;
		getActiveCylinder()->setShadowRect(box);
		getActiveCylinder()->setFilterTextureID(idx);
		getActiveCylinder()->drawInit();

		getViewport(idx)->setProjection();
		getViewport(idx)->setViewport();

		FOREACH_NODE(ShadowNode, mActiveShadows->getNext(), node)
		{
			if (isDrawNormalShadow(node, idx)) {
				int type = getShadowType(node->mFlags, idx);
				getActiveCylinder()->drawCylinder(*node->getMtx(idx), type);
			}
		}

		FOREACH_NODE(JointShadowRootNode, mActiveJointShadows->getNext(), node)
		{
			if (isDrawJointShadow(node, idx)) {
				FOREACH_NODE(JointShadowNode, node->getNext(), childNode)
				{
					getActiveCylinder()->drawCylinder(*childNode->getMtxB(idx), childNode->mCylinderID);
				}
			}
		}

		getActiveCylinder()->drawFinish();
	}

	sys->mTimers->_stop("shadow");
}

/*
 * --INFO--
 * Address:	80241B20
 * Size:	0000F0
 */
void ShadowMgr::createShadow(Creature* owner)
{
	FOREACH_NODE(ShadowNode, mInactiveShadows->getNext(), node)
	{
		if (owner == node->mCreature) {
			return;
		}
	}

	FOREACH_NODE(ShadowNode, mActiveShadows->getNext(), node)
	{
		if (owner == node->mCreature) {
			return;
		}
	}

	mInactiveShadows->add(new ShadowNode(owner, getViewportCount()));
	mAllocShadowNum++;
}

/*
 * --INFO--
 * Address:	80241C10
 * Size:	000058
 */
void ShadowMgr::killAll()
{
	mActiveJointShadows->clearRelations();
	mInactiveJointShadows->clearRelations();
	mActiveShadows->clearRelations();
	mInactiveShadows->clearRelations();
}

/*
 * --INFO--
 * Address:	80241C68
 * Size:	000044
 */
void ShadowMgr::killShadow(Creature* owner)
{
	killJointShadow(owner);
	killNormalShadow(owner);
}

/*
 * --INFO--
 * Address:	80241CAC
 * Size:	000044
 */
void ShadowMgr::addShadow(Creature* owner)
{
	addJointShadow(owner);
	addNormalShadow(owner);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void ShadowMgr::addHeadShadow(Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241CF0
 * Size:	000044
 */
void ShadowMgr::delShadow(Creature* owner)
{
	delJointShadow(owner);
	delNormalShadow(owner);
}

/*
 * --INFO--
 * Address:	80241D34
 * Size:	0000AC
 */
void ShadowMgr::addNormalShadow(Creature* owner)
{
	FOREACH_NODE(ShadowNode, mInactiveShadows->getNext(), node)
	{
		if (owner == node->mCreature) {
			node->del();
			mActiveShadows->add(node);
			node->init(getViewportCount());
			return;
		}
	}
}

/*
 * --INFO--
 * Address:	80241DE0
 * Size:	0000B8
 */
void ShadowMgr::addJointShadow(Creature* owner)
{
	JointShadowRootNode* node = static_cast<JointShadowRootNode*>(mInactiveJointShadows->mChild);
	while (node) {
		JointShadowRootNode* nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->del();
			mActiveJointShadows->add(node);
			node->init(mViewportNum);
		}
		node = nextNode;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void ShadowMgr::addHeadNormalShadow(Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void ShadowMgr::addHeadJointShadow(Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241E98
 * Size:	00006C
 */
void ShadowMgr::delNormalShadow(Creature* owner)
{
	FOREACH_NODE(ShadowNode, mActiveShadows->mChild, node)
	{
		if (owner == node->mCreature) {
			node->del();
			mInactiveShadows->add(node);
			return;
		}
	}
}

/*
 * --INFO--
 * Address:	80241F04
 * Size:	000080
 */
void ShadowMgr::delJointShadow(Creature* owner)
{
	JointShadowRootNode* nextNode;
	JointShadowRootNode* node = static_cast<JointShadowRootNode*>(mActiveJointShadows->mChild);
	while (node) {
		nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->del();
			mInactiveJointShadows->add(node);
		}
		node = nextNode;
	}
}

/*
 * --INFO--
 * Address:	80241F84
 * Size:	0000AC
 */
void ShadowMgr::killNormalShadow(Creature* owner)
{
	FOREACH_NODE(ShadowNode, mActiveShadows->mChild, node)
	{
		if (owner == node->getGameObject()) {
			node->mCreature = nullptr;
			node->del();
		}
	}

	FOREACH_NODE(ShadowNode, mInactiveShadows->mChild, node)
	{
		if (owner == node->getGameObject()) {
			node->mCreature = nullptr;
			node->del();
		}
	}
}

/*
 * --INFO--
 * Address:	80242030
 * Size:	0000AC
 */
void ShadowMgr::killJointShadow(Creature* owner)
{
	JointShadowRootNode* nextNode;
	JointShadowRootNode* node = static_cast<JointShadowRootNode*>(mActiveJointShadows->mChild);
	while (node) {
		nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->mCreature = nullptr;
			node->del();
		}
		node = nextNode;
	}

	node = static_cast<JointShadowRootNode*>(mInactiveJointShadows->mChild);
	while (node) {
		nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->mCreature = nullptr;
			node->del();
		}
		node = nextNode;
	}
}

/*
 * --INFO--
 * Address:	802420DC
 * Size:	000024
 */
void ShadowMgr::setJointShadowRootNode(JointShadowRootNode* node) { mInactiveJointShadows->add(node); }

/*
 * --INFO--
 * Address:	80242100
 * Size:	0000F0
 */
void ShadowMgr::setForceVisible(Creature* owner, bool isVisible)
{
	FOREACH_NODE(ShadowNode, mActiveShadows->mChild, node)
	{
		if (owner == node->getGameObject()) {
			if (isVisible) {
				node->mFlags |= 0x10000000;
				break;
			} else {
				node->mFlags &= ~0xF0000000;
				break;
			}
		}
	}

	FOREACH_NODE(ShadowNode, mInactiveShadows->mChild, node)
	{
		if (owner == node->getGameObject()) {
			if (isVisible) {
				node->mFlags |= 0x10000000;
				break;
			} else {
				node->mFlags &= ~0xF0000000;
				break;
			}
		}
	}

	FOREACH_NODE(JointShadowRootNode, mActiveJointShadows->mChild, node)
	{
		if (owner == node->mCreature) {
			node->mIsVisible = isVisible;
		}
	}

	FOREACH_NODE(JointShadowRootNode, mInactiveJointShadows->mChild, node)
	{
		if (owner == node->mCreature) {
			node->mIsVisible = isVisible;
		}
	}
}

/*
 * --INFO--
 * Address:	802421F0
 * Size:	000030
 */
int ShadowMgr::getSize() { return mActiveShadows->getChildCount(); }

/*
 * --INFO--
 * Address:	80242220
 * Size:	000008
 */
int ShadowMgr::getMax() { return mAllocShadowNum; }

/*
 * --INFO--
 * Address:	80242228
 * Size:	000038
 */
Creature* ShadowMgr::getCreature(int idx)
{
	ShadowNode* node = static_cast<ShadowNode*>(mActiveShadows->getChildAt(idx));
	if (node) {
		return node->getGameObject();
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80242260
 * Size:	000008
 */
int ShadowMgr::getFirst() { return 0; }

/*
 * --INFO--
 * Address:	80242268
 * Size:	000008
 */
int ShadowMgr::getNext(int idx) { return idx + 1; }

/*
 * --INFO--
 * Address:	80242270
 * Size:	00004C
 */
bool ShadowMgr::isDone(int idx) { return (u8)(idx >= getSize()); }

/*
 * --INFO--
 * Address:	802422BC
 * Size:	00004C
 */
u32 ShadowMgr::getShadowMaskType(int p1, int p2)
{
	if (p2 == 0) {
		return p1;
	}

	if (p2 == 1) {
		return (p1 << 4) & 0xF0;
	}

	if (p2 == 2) {
		return (p1 << 8) & 0xF00;
	}

	if (p2 == 3) {
		return (p1 << 12) & 0xF000;
	}

	return 0;
}

/*
 * --INFO--
 * Address:	80242308
 * Size:	00004C
 */
u32 ShadowMgr::getShadowType(int p1, int p2)
{
	if (p2 == 0) {
		return p1 & 0xF;
	}

	if (p2 == 1) {
		return (p1 >> 4) & 0xF;
	}

	if (p2 == 2) {
		return (p1 >> 8) & 0xF;
	}

	if (p2 == 3) {
		return (p1 >> 12) & 0xF;
	}

	return 0;
}

/*
 * --INFO--
 * Address:	80242354
 * Size:	000080
 */
bool ShadowMgr::isDrawNormalShadow(ShadowNode* node, int vpNum)
{
	if (node->getGameObject()->needShadow() && (node->mFlags & 0xF0000000 || node->getGameObject()->mLod.isFlag(AILOD_IsVisVP0 << vpNum))) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802423D4
 * Size:	000080
 */
bool ShadowMgr::isDrawJointShadow(JointShadowRootNode* node, int vpNum)
{
	if (node->mCreature->needShadow() && (node->mIsVisible || node->mCreature->mLod.isFlag(AILOD_IsVisVP0 << vpNum))) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80242454
 * Size:	0000AC
 */
void ShadowMgr::readShadowParms(char* fileName)
{
	void* data = JKRDvdRipper::loadToMainRAM(fileName, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);

	if (data) {
		RamStream input(data, -1);
		input.resetPosition(true, 1);
		read(input);
		delete[] data;
	}
}

/*
 * --INFO--
 * Address:	80242500
 * Size:	000084
 */
void ShadowMgr::write(Stream& output)
{
	output.writeShort((u16)mEnabled);
	output.writeShort((u16)mDoCheckCylinderType);
	output.writeInt(mCylinderID);
	output.writeInt(_44);
	mColor.write(output);
	mParms->write(output);
}

/*
 * --INFO--
 * Address:	80242584
 * Size:	00007C
 */
void ShadowMgr::read(Stream& input)
{
	mEnabled             = input.readShort();
	mDoCheckCylinderType = input.readShort();
	mCylinderID          = input.readInt();
	_44                  = input.readInt();
	mColor.read(input);
	mParms->read(input);
}

} // namespace Game
