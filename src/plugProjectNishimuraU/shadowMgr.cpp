#include "Game/shadowMgr.h"
#include "Game/Creature.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Viewport.h"
#include "Camera.h"
#include "nans.h"

namespace Game {

static const int unusedArray[] = { 0, 0, 0 };
static const char unusedName[] = "246-ShadowMgr";

ShadowMgr* shadowMgr;

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JointShadowRootNode::JointShadowRootNode()
{
	mCreature = nullptr;
	_1C       = 0;
}

/*
 * --INFO--
 * Address:	8024127C
 * Size:	000060
 */
JointShadowRootNode::JointShadowRootNode(Creature* owner)
{
	mCreature = owner;
	_1C       = 0;
	shadowMgr->setJointShadowRootNode(this);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JointShadowRootNode::init(int count)
{
	_1C = 0;
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
	_18 = 0;
	_1C = new Matrixf;
	_20 = new Matrixf[mtxCount];
	init(mtxCount);
}

/*
 * --INFO--
 * Address:	80241350
 * Size:	000074
 */
void JointShadowNode::init(int count)
{
	PSMTXIdentity(_1C->mMatrix.mtxView);
	for (int i = 0; i < count; i++) {
		PSMTXIdentity(_20[i].mMatrix.mtxView);
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
	_18 = count;
	_1C = 0;
	loadResource();
	_3C   = 1;
	_3D   = 1;
	_40   = 0;
	_44   = 0;
	mName = "ShadowMgr";
}

/*
 * --INFO--
 * Address:	80241444
 * Size:	000210
 */
void ShadowMgr::loadResource()
{
	mParms     = new ShadowParms;
	_20        = new ShadowNode;
	_24        = new ShadowNode;
	_28[0]     = new ShadowCylinder2(mParms, &mColor);
	_28[1]     = new ShadowCylinder3(mParms, &mColor);
	mViewports = new Viewport*[_18];
	_34        = new JointShadowRootNode;
	_38        = new JointShadowRootNode;
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
	_28[0]->setColor(color);
	_28[1]->setColor(color);
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
	if (_3C) {
		for (int i = 0; i < getCount(); i++) {
			_28[_40]->setCameraParms(mViewports[i]->mCamera, i);
		}

		FOREACH_NODE(ShadowNode, _20->mChild, node)
		{
			if (node->mCreature->needShadow()) {
				Matrixf mat;
				ShadowParam param;
				node->mCreature->getShadowParam(param);
				node->mFlags &= ~0x0FFFFFFF;
				_28[_40]->makeSRT(mat, param);

				for (int i = 0; i < getCount(); i++) {
					if (mViewports[i]->viewable()) {
						Matrixf* nodeMat = &node->mMatrices[i];
						Matrixf* viewMat = mViewports[i]->mCamera->getViewMatrix(false);
						PSMTXConcat(viewMat->mMatrix.mtxView, mat.mMatrix.mtxView, nodeMat->mMatrix.mtxView);

						int cylType = 0;
						if (_3D) {
							cylType = _28[_40]->getCylinderType(param, i);
						}

						node->mFlags |= getShadowMaskType(cylType, i);
					}
				}
			}
		}

		FOREACH_NODE(JointShadowRootNode, _34->mChild, node)
		{
			if (node->mCreature->needShadow()) {
				FOREACH_NODE(JointShadowNode, node->mChild, childNode)
				{
					for (int i = 0; i < getCount(); i++) {
						if (mViewports[i]->viewable()) {
							Matrixf* dest    = &childNode->_20[i];
							Matrixf* nodeMat = childNode->_1C;
							Matrixf* viewMat = mViewports[i]->mCamera->getViewMatrix(false);
							PSMTXConcat(viewMat->mMatrix.mtxView, nodeMat->mMatrix.mtxView, dest->mMatrix.mtxView);
						}
					}
				}
			}
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stmw     r24, 0x60(r1)
	mr       r27, r3
	lbz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_802418FC
	li       r28, 0
	li       r26, 0
	b        lbl_80241708

lbl_802416DC:
	lwz      r0, 0x40(r27)
	mr       r5, r28
	lwz      r3, 0x30(r27)
	slwi     r6, r0, 2
	lwzx     r4, r3, r26
	addi     r0, r6, 0x28
	lwzx     r3, r27, r0
	lwz      r4, 0x44(r4)
	bl       setCameraParms__Q24Game12CylinderBaseFP6Camerai
	addi     r26, r26, 4
	addi     r28, r28, 1

lbl_80241708:
	lwz      r0, 0x18(r27)
	cmpw     r28, r0
	blt      lbl_802416DC
	lwz      r3, 0x20(r27)
	lwz      r29, 0x10(r3)
	b        lbl_80241838

lbl_80241720:
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80241834
	lwz      r3, 0x18(r29)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x134(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r29)
	addi     r4, r1, 0x28
	addi     r5, r1, 8
	rlwinm   r0, r0, 0, 0, 3
	stw      r0, 0x20(r29)
	lwz      r0, 0x40(r27)
	slwi     r3, r0, 2
	addi     r0, r3, 0x28
	lwzx     r3, r27, r0
	bl       makeSRT__Q24Game12CylinderBaseFR7MatrixfRQ24Game11ShadowParam
	li       r31, 0
	li       r28, 0
	mr       r30, r31
	b        lbl_80241828

lbl_8024178C:
	lwz      r3, 0x30(r27)
	lwzx     r3, r3, r31
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024181C
	lwz      r3, 0x30(r27)
	li       r4, 0
	lwz      r0, 0x1c(r29)
	lwzx     r3, r3, r31
	add      r26, r0, r30
	lwz      r3, 0x44(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r5, r26
	addi     r4, r1, 0x28
	bl       PSMTXConcat
	lbz      r0, 0x3d(r27)
	li       r4, 0
	cmplwi   r0, 0
	beq      lbl_80241804
	lwz      r0, 0x40(r27)
	mr       r5, r28
	addi     r4, r1, 8
	slwi     r3, r0, 2
	addi     r0, r3, 0x28
	lwzx     r3, r27, r0
	bl       getCylinderType__Q24Game12CylinderBaseFRQ24Game11ShadowParami
	mr       r4, r3

lbl_80241804:
	mr       r3, r27
	mr       r5, r28
	bl       getShadowMaskType__Q24Game9ShadowMgrFii
	lwz      r0, 0x20(r29)
	or       r0, r0, r3
	stw      r0, 0x20(r29)

lbl_8024181C:
	addi     r31, r31, 4
	addi     r30, r30, 0x30
	addi     r28, r28, 1

lbl_80241828:
	lwz      r0, 0x18(r27)
	cmpw     r28, r0
	blt      lbl_8024178C

lbl_80241834:
	lwz      r29, 4(r29)

lbl_80241838:
	cmplwi   r29, 0
	bne      lbl_80241720
	lwz      r3, 0x34(r27)
	lwz      r31, 0x10(r3)
	b        lbl_802418F4

lbl_8024184C:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802418F0
	lwz      r25, 0x10(r31)
	b        lbl_802418E8

lbl_80241870:
	li       r29, 0
	li       r24, 0
	mr       r30, r29
	b        lbl_802418D8

lbl_80241880:
	lwz      r3, 0x30(r27)
	lwzx     r3, r3, r29
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802418CC
	lwz      r3, 0x30(r27)
	li       r4, 0
	lwz      r0, 0x20(r25)
	lwzx     r3, r3, r29
	add      r28, r0, r30
	lwz      r26, 0x1c(r25)
	lwz      r3, 0x44(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r4, r26
	mr       r5, r28
	bl       PSMTXConcat

lbl_802418CC:
	addi     r29, r29, 4
	addi     r30, r30, 0x30
	addi     r24, r24, 1

lbl_802418D8:
	lwz      r0, 0x18(r27)
	cmpw     r24, r0
	blt      lbl_80241880
	lwz      r25, 4(r25)

lbl_802418E8:
	cmplwi   r25, 0
	bne      lbl_80241870

lbl_802418F0:
	lwz      r31, 4(r31)

lbl_802418F4:
	cmplwi   r31, 0
	bne      lbl_8024184C

lbl_802418FC:
	lmw      r24, 0x60(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
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
	if (_3C && mViewports[idx]->viewable()) {
		Rectf box = mViewports[idx]->mBounds2;
		_28[_40]->setShadowRect(box);
		_28[_40]->setFilterTextureID(idx);
		_28[_40]->drawInit();

		mViewports[idx]->setProjection();
		mViewports[idx]->setViewport();

		FOREACH_NODE(ShadowNode, _20->mChild, node)
		{
			if (isDrawNormalShadow(node, idx)) {
				int type = getShadowType(node->mFlags, idx);
				_28[_40]->drawCylinder(node->mMatrices[idx], type);
			}
		}

		FOREACH_NODE(JointShadowRootNode, _34->mChild, node)
		{
			if (isDrawJointShadow(node, idx)) {
				FOREACH_NODE(JointShadowNode, node->mChild, childNode) { _28[_40]->drawCylinder(childNode->_20[idx], childNode->_18); }
			}
		}

		_28[_40]->drawFinish();
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
	FOREACH_NODE(ShadowNode, _24->mChild, node)
	{
		if (owner == node->mCreature) {
			return;
		}
	}

	FOREACH_NODE(ShadowNode, _20->mChild, node)
	{
		if (owner == node->mCreature) {
			return;
		}
	}

	_24->add(new ShadowNode(owner, getCount()));
	_1C++;
}

/*
 * --INFO--
 * Address:	80241C10
 * Size:	000058
 */
void ShadowMgr::killAll()
{
	_34->clearRelations();
	_38->clearRelations();
	_20->clearRelations();
	_24->clearRelations();
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
	FOREACH_NODE(ShadowNode, _24->mChild, node)
	{
		if (owner == node->mCreature) {
			node->del();
			_20->add(node);
			node->init(getCount());
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
	JointShadowRootNode* node = static_cast<JointShadowRootNode*>(_38->mChild);
	while (node) {
		JointShadowRootNode* nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->del();
			_34->add(node);
			node->init(_18);
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
	FOREACH_NODE(ShadowNode, _20->mChild, node)
	{
		if (owner == node->mCreature) {
			node->del();
			_24->add(node);
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
	JointShadowRootNode* node = static_cast<JointShadowRootNode*>(_34->mChild);
	while (node) {
		nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->del();
			_38->add(node);
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
	FOREACH_NODE(ShadowNode, _20->mChild, node)
	{
		if (owner == node->mCreature) {
			node->mCreature = nullptr;
			node->del();
		}
	}

	FOREACH_NODE(ShadowNode, _24->mChild, node)
	{
		if (owner == node->mCreature) {
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
	JointShadowRootNode* node = static_cast<JointShadowRootNode*>(_34->mChild);
	while (node) {
		nextNode = static_cast<JointShadowRootNode*>(node->mNext);
		if (owner == node->mCreature) {
			node->mCreature = nullptr;
			node->del();
		}
		node = nextNode;
	}

	node = static_cast<JointShadowRootNode*>(_38->mChild);
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
void ShadowMgr::setJointShadowRootNode(JointShadowRootNode* node) { _38->add(node); }

/*
 * --INFO--
 * Address:	80242100
 * Size:	0000F0
 */
void ShadowMgr::setForceVisible(Creature* owner, bool isVisible)
{
	FOREACH_NODE(ShadowNode, _20->mChild, node)
	{
		if (owner == node->mCreature) {
			if (isVisible) {
				node->mFlags |= 0x10000000;
				break;
			} else {
				node->mFlags &= ~0xF0000000;
				break;
			}
		}
	}

	FOREACH_NODE(ShadowNode, _24->mChild, node)
	{
		if (owner == node->mCreature) {
			if (isVisible) {
				node->mFlags |= 0x10000000;
				break;
			} else {
				node->mFlags &= ~0xF0000000;
				break;
			}
		}
	}

	FOREACH_NODE(JointShadowRootNode, _34->mChild, node)
	{
		if (owner == node->mCreature) {
			node->_1C = isVisible;
		}
	}

	FOREACH_NODE(JointShadowRootNode, _38->mChild, node)
	{
		if (owner == node->mCreature) {
			node->_1C = isVisible;
		}
	}
}

/*
 * --INFO--
 * Address:	802421F0
 * Size:	000030
 */
int ShadowMgr::getSize() { return _20->getChildCount(); }

/*
 * --INFO--
 * Address:	80242220
 * Size:	000008
 */
int ShadowMgr::getMax() { return _1C; }

/*
 * --INFO--
 * Address:	80242228
 * Size:	000038
 */
Creature* ShadowMgr::getCreature(int idx)
{
	ShadowNode* node = static_cast<ShadowNode*>(_20->getChildAt(idx));
	if (node) {
		return node->mCreature;
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
	if (node->mCreature->needShadow() && (node->mFlags & 0xF0000000 || node->mCreature->mLod.isFlag(AILOD_IsVisVP0 << vpNum))) {
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
	if (node->mCreature->needShadow() && (node->_1C || node->mCreature->mLod.isFlag(AILOD_IsVisVP0 << vpNum))) {
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
	output.writeShort((u16)_3C);
	output.writeShort((u16)_3D);
	output.writeInt(_40);
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
	_3C = input.readShort();
	_3D = input.readShort();
	_40 = input.readInt();
	_44 = input.readInt();
	mColor.read(input);
	mParms->read(input);
}

} // namespace Game
