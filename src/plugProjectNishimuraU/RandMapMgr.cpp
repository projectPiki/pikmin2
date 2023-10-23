#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

RandMapMgr* randMapMgr;

/*
 * --INFO--
 * Address:	80244528
 * Size:	000088
 */
RandMapMgr::RandMapMgr(bool isVersusHiba)
{
	mGenerator        = nullptr;
	mRandMapUnit      = nullptr;
	mRandEnemyUnit    = nullptr;
	mRandCapEnemyUnit = nullptr;
	mRandPlantUnit    = nullptr;
	mRandGateUnit     = nullptr;
	mRandItemUnit     = nullptr;
	mRandMapScore     = nullptr;
	mRandMapDraw      = nullptr;
	mIsCaptureOn      = false;
	mRadarMapTexture  = nullptr;
	mIsVersusHiba     = isVersusHiba;
	mName             = "RandMapMgr";
}

/*
 * --INFO--
 * Address:	802445B0
 * Size:	0001A4
 */
void RandMapMgr::loadResource(MapUnitInterface* interface, int p1, FloorInfo* floorInfo, bool check, EditMapUnit* editMU)
{
	mGenerator        = new MapUnitGenerator(interface, p1, floorInfo, check, editMU);
	mRandMapUnit      = new RandMapUnit(mGenerator);
	mRandEnemyUnit    = new RandEnemyUnit(mGenerator, mIsVersusHiba);
	mRandCapEnemyUnit = new RandCapEnemyUnit(mGenerator);
	mRandPlantUnit    = new RandPlantUnit(mGenerator);
	mRandGateUnit     = new RandGateUnit(mGenerator);
	mRandItemUnit     = new RandItemUnit(mGenerator);
	mRandMapScore     = new RandMapScore(mGenerator);
	mRandMapDraw      = new RandMapDraw(mGenerator);

	mRandEnemyUnit->setManageClassPtr(mRandMapScore);
	mRandCapEnemyUnit->setManageClassPtr(mRandItemUnit);
	mRandGateUnit->setManageClassPtr(mRandMapScore, mRandItemUnit);
	mRandItemUnit->setManageClassPtr(mRandMapScore);
}

/*
 * --INFO--
 * Address:	80244754
 * Size:	000104
 */
void RandMapMgr::create()
{
	// The CaveGen Function (tm)

	// Round 1: place map tiles + set ship spawn
	mRandMapUnit->setMapUnit();
	mRandMapScore->setStartSlot();
	// Calculate score after round 1 (just distance score based on map tile layout)
	mRandMapScore->setMapUnitScore();

	// Round 2: place hole (and geyser), then place enemies
	mRandMapScore->setGoalSlot();
	mRandEnemyUnit->setEnemySlot();
	// Calculate score after round 2 (now includes enemies as well as distance score)
	mRandMapScore->setMapUnitScore();

	// Round 3: place plants, then treasures, then cap enemies
	mRandPlantUnit->setPlantSlot();
	mRandItemUnit->setItemSlot();
	mRandCapEnemyUnit->setCapEnemySlot();
	// Calculate score after round 3 (doesn't get used again though)
	mRandMapScore->setMapUnitScore();

	// Round 4: place gates
	mRandGateUnit->setGateDoor();

	// With all units placed, determine radar texture size + allocate
	int x;
	int y;
	mRandMapUnit->getTextureSize(x, y);

	x *= 8;
	y *= 8;

	sys->heapStatusStart("Radar Map Texture", nullptr);
	mRadarMapTexture                          = new JUTTexture(x, y, GX_TF_I4);
	mRadarMapTexture->mTexInfo->mTransparency = Transparency_2;
	sys->heapStatusEnd("Radar Map Texture");
}

/*
 * --INFO--
 * Address:	80244858
 * Size:	000034
 */
int RandMapMgr::getNumRooms() { return mGenerator->mPlacedMapNodes->getChildCount(); }

/*
 * --INFO--
 * Address:	8024488C
 * Size:	00003C
 */
char* RandMapMgr::getUseUnitName(int idx)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		return node->getUnitName();
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	802448C8
 * Size:	000084
 */
char* RandMapMgr::getRoomData(int idx, float& x, float& y, int& dir)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		node->getNodeCentreOffset(x, y);
		dir = node->getDirection();
		return node->getUnitName();
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	8024494C
 * Size:	0000E4
 */
RoomLink* RandMapMgr::makeRoomLink(int idx)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		RoomLink* parentLink = new RoomLink;

		int numDoors = node->getNumDoors();

		for (int i = 0; i < numDoors; i++) {
			RoomLink* childLink        = new RoomLink;
			childLink->mLinkIndex      = i;
			childLink->mBirthDoorIndex = node->mAdjustInfo[i].mBirthDoorIndex;
			childLink->mAliveMapIndex  = mRandMapUnit->getAliveMapIndex(node->mAdjustInfo[i].mMapTile);
			parentLink->add(childLink);
		}

		return parentLink;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80244A30
 * Size:	000084
 */
ObjectLayoutInfo* RandMapMgr::makeObjectLayoutInfo(int idx)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		ObjectLayout* layout = new ObjectLayout(node);
		mRandMapScore->makeObjectLayout(node, layout);
		return layout;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80244AB4
 * Size:	000088
 */
void RandMapMgr::getStartPosition(Vector3f& position, int idx)
{
	if (mGenerator->mIsVersusMode) {
		if (idx == 0) {
			mRandMapScore->getGlobalPosition(3, position);
		} else {
			mRandMapScore->getGlobalPosition(4, position);
		}
	} else {
		mRandMapScore->getGlobalPosition(0, position);
	}

	position.y += 50.0f;
}

/*
 * --INFO--
 * Address:	80244B3C
 * Size:	0000A0
 */
void RandMapMgr::getItemDropPosition(Vector3f& position, f32 minDist, f32 maxDist)
{
	mRandItemUnit->getItemDropPosition(position, minDist + randWeightFloat(maxDist - minDist), -1);
}

/*
 * --INFO--
 * Address:	80244BDC
 * Size:	000188
 */
void RandMapMgr::getItemDropPosition(Vector3f* positions, int count, f32 p1, f32 p2)
{
	f32 avg    = 0.5f * (p1 + p2);
	f32 weight = (p2 - avg > 0.0f) ? p2 - avg : -(p2 - avg);

	MapNode* nodeList[16];
	BaseGen* genList[16];

	int randVal   = 2.0f * randFloat();
	int countEven = (count % 2) - 1;
	mRandItemUnit->setItemDropPositionList(nodeList, genList);

	for (int i = 0; i < count; i++) {
		f32 val = avg;
		if (i != countEven) {
			if (i % 2 == randVal) {
				val = avg + randWeightFloat(weight);
			} else {
				val = avg - randWeightFloat(weight);
			}
		}
		mRandItemUnit->getItemDropPosition(positions[i], val, i);
	}
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stmw     r26, 0x98(r1)
	fadds    f1, f1, f2
	lfs      f3, lbl_8051A738@sda21(r2)
	lfs      f0, lbl_8051A73C@sda21(r2)
	mr       r30, r3
	mr       r26, r4
	mr       r31, r5
	fmuls    f30, f3, f1
	fsubs    f31, f2, f30
	fcmpo    cr0, f31, f0
	ble      lbl_80244C28
	b        lbl_80244C2C

lbl_80244C28:
	fneg     f31, f31

lbl_80244C2C:
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x8c(r1)
	srwi     r3, r31, 0x1f
	clrlwi   r0, r31, 0x1f
	lfd      f3, lbl_8051A730@sda21(r2)
	stw      r4, 0x88(r1)
	xor      r0, r0, r3
	subf     r3, r3, r0
	lfs      f1, lbl_8051A72C@sda21(r2)
	lfd      f2, 0x88(r1)
	addi     r27, r3, -1
	lfs      f0, lbl_8051A740@sda21(r2)
	addi     r4, r1, 0x48
	fsubs    f2, f2, f3
	lwz      r3, 0x30(r30)
	addi     r5, r1, 8
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r29, 0x94(r1)
	bl
setItemDropPositionList__Q34Game4Cave12RandItemUnitFPPQ34Game4Cave7MapNodePPQ34Game4Cave7BaseGen
	mr       r28, r26
	li       r26, 0
	b        lbl_80244D38

lbl_80244C98:
	fmr      f1, f30
	cmpw     r26, r27
	beq      lbl_80244D20
	srwi     r3, r26, 0x1f
	clrlwi   r0, r26, 0x1f
	xor      r0, r0, r3
	subf     r0, r3, r0
	cmpw     r0, r29
	bne      lbl_80244CF0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f2, lbl_8051A730@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	fadds    f1, f30, f0
	b        lbl_80244D20

lbl_80244CF0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f2, lbl_8051A730@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	fsubs    f1, f30, f0

lbl_80244D20:
	lwz      r3, 0x30(r30)
	mr       r4, r28
	mr       r5, r26
	bl       "getItemDropPosition__Q34Game4Cave12RandItemUnitFR10Vector3<f>fi"
	addi     r28, r28, 0xc
	addi     r26, r26, 1

lbl_80244D38:
	cmpw     r26, r31
	blt      lbl_80244C98
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lmw      r26, 0x98(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244D64
 * Size:	000048
 */
void RandMapMgr::setUnitTexture(int idx, JUTTexture* texture)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		node->mUnitInfo->setUnitTexture(texture);
	}
}

/*
 * --INFO--
 * Address:	80244DAC
 * Size:	00000C
 */
void RandMapMgr::setCaptureOn() { mIsCaptureOn = true; }

/*
 * --INFO--
 * Address:	80244DB8
 * Size:	0000DC
 */
void RandMapMgr::captureRadarMap(Graphics& gfx)
{
	if (mIsCaptureOn) {
		drawFrameBuffer(gfx);
		gfx.setTextureGX();

		GXSetChanMatColor(GX_COLOR0A0, JUtility::TColor(255, 255, 255, 255));
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
		mRandMapDraw->draw(gfx, 0.0f, 0.0f, 8.0f);
		mRadarMapTexture->capture(0, 0, GX_CTF_R4, false, 0);
		drawFrameBuffer(gfx);
		mIsCaptureOn = false;
	}
}

/*
 * --INFO--
 * Address:	80244E94
 * Size:	00001C
 */
bool RandMapMgr::isLastFloor()
{
	if (mGenerator) {
		return mGenerator->mIsFinalFloor;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80244EB0
 * Size:	000008
 */
bool RandMapMgr::isVersusHiba() { return mIsVersusHiba; }

/*
 * --INFO--
 * Address:	80244EB8
 * Size:	000008
 */
JUTTexture* RandMapMgr::getRadarMapTexture() { return mRadarMapTexture; }

/*
 * --INFO--
 * Address:	80244EC0
 * Size:	000024
 */
void RandMapMgr::radarMapPartsOpen(Vector3f& vec) { mRandMapDraw->radarMapPartsOpen(vec); }

/*
 * --INFO--
 * Address:	80244EE4
 * Size:	000020
 */
void RandMapMgr::getPositionOnTex(Vector3f& pos, f32& x, f32& y)
{
	x = pos.x * (4.0f / 85.0f);
	y = pos.z * (4.0f / 85.0f);
}

/*
 * --INFO--
 * Address:	80244F04
 * Size:	000254
 */
void RandMapMgr::getBaseGenData(Vector3f* positions, f32* dirs)
{
	f32 floatList[512];
	MapNode* nodeList[512];
	BaseGen* genList[512];

	f32 total   = 0.0f;
	int counter = 0;

	MapNode* startNodes[2];
	startNodes[0] = mGenerator->mPlacedMapNodes;
	startNodes[1] = mGenerator->mVisitedMapNodes;

	for (int i = 0; i < 2; i++) {
		FOREACH_NODE(MapNode, startNodes[i]->mChild, currNode)
		{
			BaseGen* baseGen = currNode->mUnitInfo->getBaseGen();
			if (baseGen) {

				FOREACH_NODE(BaseGen, baseGen->mChild, currGen)
				{
					if (currGen->mSpawnType == BaseGen::TekiA__Easy || currGen->mSpawnType == BaseGen::TekiB__Hard) {
						Vector3f globalPos = currNode->getBaseGenGlobalPosition(currGen);
						Vector3f sep       = Vector3f(positions->y - globalPos.y, positions->z - globalPos.z, positions->x - globalPos.x);
						nodeList[counter]  = currNode;
						genList[counter]   = currGen;
						floatList[counter] = _length2(sep);

						total += floatList[counter];
						counter++;
					}
				}
			}
		}
	}

	if (counter) {
		f32 tally   = 0.0f;
		f32 randVal = randWeightFloat(total);
		for (int i = 0; i < counter; i++) {
			tally += floatList[i];
			if (tally > randVal) {
				*positions = nodeList[i]->getBaseGenGlobalPosition(genList[i]);
				*dirs      = nodeList[i]->getBaseGenGlobalDirection(genList[i]);
				return;
			}
		}
	}

	/*
	stwu     r1, -0x18a0(r1)
	mflr     r0
	stw      r0, 0x18a4(r1)
	li       r0, 0x1898
	stfd     f31, 0x1890(r1)
	psq_stx  f31, r1, r0, 0, qr0
	li       r0, 0x1888
	stfd     f30, 0x1880(r1)
	psq_stx  f30, r1, r0, 0, qr0
	stmw     r15, 0x183c(r1)
	lwz      r6, 0x18(r3)
	addi     r18, r1, 0x1028
	lfs      f31, lbl_8051A73C@sda21(r2)
	mr       r29, r4
	lwz      r3, 0x28(r6)
	mr       r30, r5
	lwz      r0, 0x2c(r6)
	mr       r19, r18
	stw      r3, 8(r1)
	addi     r22, r1, 8
	addi     r21, r1, 0x828
	addi     r20, r1, 0x28
	stw      r0, 0xc(r1)
	li       r17, 0
	li       r16, 0

lbl_80244F68:
	lwz      r3, 0(r22)
	mr       r25, r21
	mr       r24, r20
	mr       r23, r19
	lwz      r15, 0x10(r3)
	b        lbl_80245068

lbl_80244F80:
	lwz      r3, 0x18(r15)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_80245064
	lwz      r31, 0x10(r3)
	mr       r28, r25
	mr       r27, r24
	mr       r26, r23
	b        lbl_8024505C

lbl_80244FA4:
	lwz      r0, 0x18(r31)
	cmpwi    r0, 0
	beq      lbl_80244FB8
	cmpwi    r0, 1
	bne      lbl_80245058

lbl_80244FB8:
	mr       r4, r15
	mr       r5, r31
	addi     r3, r1, 0x1c
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 4(r29) lfs      f0, 0x20(r1) lfs      f3, 0(r29) fsubs    f4, f1, f0 lfs f2,
0x1c(r1) lfs      f1, 8(r29) lfs      f0, 0x24(r1) fsubs    f3, f3, f2 fmuls f4,
f4, f4 fsubs    f2, f1, f0 lfs      f0, lbl_8051A73C@sda21(r2) stw      r15,
0(r28) fmadds   f1, f3, f3, f4 fmuls    f2, f2, f2 stw      r31, 0(r27) fadds
f1, f2, f1 fcmpo    cr0, f1, f0 ble      lbl_80245020 ble      lbl_80245024
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80245024

lbl_80245020:
	fmr      f1, f0

lbl_80245024:
	stfs     f1, 0(r26)
	addi     r21, r21, 4
	addi     r20, r20, 4
	addi     r19, r19, 4
	lfs      f0, 0(r26)
	addi     r17, r17, 1
	addi     r28, r28, 4
	addi     r27, r27, 4
	fadds    f31, f31, f0
	addi     r25, r25, 4
	addi     r26, r26, 4
	addi     r24, r24, 4
	addi     r23, r23, 4

lbl_80245058:
	lwz      r31, 4(r31)

lbl_8024505C:
	cmplwi   r31, 0
	bne      lbl_80244FA4

lbl_80245064:
	lwz      r15, 4(r15)

lbl_80245068:
	cmplwi   r15, 0
	bne      lbl_80244F80
	addi     r16, r16, 1
	addi     r22, r22, 4
	cmpwi    r16, 2
	blt      lbl_80244F68
	cmpwi    r17, 0
	beq      lbl_8024512C
	lfs      f30, lbl_8051A73C@sda21(r2)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x182c(r1)
	li       r3, 0
	lfd      f2, lbl_8051A730@sda21(r2)
	stw      r0, 0x1828(r1)
	lfs      f0, lbl_8051A72C@sda21(r2)
	lfd      f1, 0x1828(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f1, f1, f0
	mtctr    r17
	cmpwi    r17, 0
	ble      lbl_8024512C

lbl_802450C8:
	lfs      f0, 0(r18)
	fadds    f30, f30, f0
	fcmpo    cr0, f30, f1
	ble      lbl_80245120
	slwi     r15, r3, 2
	addi     r17, r1, 0x828
	addi     r16, r1, 0x28
	lwzx     r4, r17, r15
	lwzx     r5, r16, r15
	addi     r3, r1, 0x10
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 0x10(r1) lwzx     r3, r17, r15 stfs     f0, 0(r29) lwzx     r4, r16, r15 lfs
f0, 0x14(r1) stfs     f0, 4(r29) lfs      f0, 0x18(r1) stfs     f0, 8(r29) bl
getBaseGenGlobalDirection__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen stfs f1,
0(r30) b        lbl_8024512C

lbl_80245120:
	addi     r18, r18, 4
	addi     r3, r3, 1
	bdnz     lbl_802450C8

lbl_8024512C:
	li       r0, 0x1898
	psq_lx   f31, r1, r0, 0, qr0
	lfd      f31, 0x1890(r1)
	li       r0, 0x1888
	psq_lx   f30, r1, r0, 0, qr0
	lfd      f30, 0x1880(r1)
	lmw      r15, 0x183c(r1)
	lwz      r0, 0x18a4(r1)
	mtlr     r0
	addi     r1, r1, 0x18a0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245158
 * Size:	000200
 */
void RandMapMgr::drawFrameBuffer(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();

	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDstAlpha(GX_TRUE, 0);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
	GXSetNumChans(1);
	GXSetChanMatColor(GX_COLOR0A0, JUtility::TColor(0, 0, 0, 255));
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetNumTevStages(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	GXPosition3f32(0.0f, 0.0f, 0.0f);                                                 // bottom left
	GXPosition3f32(mRadarMapTexture->getSizeX(), 0.0f, 0.0f);                         // bottom right
	GXPosition3f32(mRadarMapTexture->getSizeX(), mRadarMapTexture->getSizeY(), 0.0f); // top right
	GXPosition3f32(0.0f, mRadarMapTexture->getSizeY(), 0.0f);                         // top left
	GXSetDstAlpha(GX_FALSE, 0);
}
} // namespace Cave
} // namespace Game
