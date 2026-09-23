#include "Game/Cave/RandMapMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

RandMapMgr* randMapMgr;

/**
 * @note Address: 0x80244528
 * @note Size: 0x88
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

/**
 * @note Address: 0x802445B0
 * @note Size: 0x1A4
 */
void RandMapMgr::loadResource(MapUnitInterface* interface, int interfaceCount, FloorInfo* floorInfo, bool isFinalFloor,
                              EditMapUnit* editUnit)
{
	mGenerator        = new MapUnitGenerator(interface, interfaceCount, floorInfo, isFinalFloor, editUnit);
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

/**
 * @note Address: 0x80244754
 * @note Size: 0x104
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

/**
 * @note Address: 0x80244858
 * @note Size: 0x34
 */
int RandMapMgr::getNumRooms()
{
	return mGenerator->mPlacedMapNodes->getChildCount();
}

/**
 * @note Address: 0x8024488C
 * @note Size: 0x3C
 */
char* RandMapMgr::getUseUnitName(int idx)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		return node->getUnitName();
	}

	return nullptr;
}

/**
 * @note Address: 0x802448C8
 * @note Size: 0x84
 */
char* RandMapMgr::getRoomData(int idx, f32& x, f32& y, int& dir)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		node->getNodeCentreOffset(x, y);
		dir = node->getDirection();
		return node->getUnitName();
	}

	return nullptr;
}

/**
 * @note Address: 0x8024494C
 * @note Size: 0xE4
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

/**
 * @note Address: 0x80244A30
 * @note Size: 0x84
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

/**
 * @note Address: 0x80244AB4
 * @note Size: 0x88
 */
void RandMapMgr::getStartPosition(Vector3f& position, int naviID)
{
	if (mGenerator->mIsVersusMode) {
		if (naviID == NAVIID_Olimar) {
			mRandMapScore->getGlobalPosition(FIXNODE_VsRedOnyon, position);
		} else {
			mRandMapScore->getGlobalPosition(FIXNODE_VsBlueOnyon, position);
		}
	} else {
		mRandMapScore->getGlobalPosition(FIXNODE_Pod, position);
	}

	position.y += 50.0f;
}

/**
 * @note Address: 0x80244B3C
 * @note Size: 0xA0
 */
void RandMapMgr::getItemDropPosition(Vector3f& position, f32 minDist, f32 maxDist)
{
	mRandItemUnit->getItemDropPosition(position, minDist + randWeightFloat(maxDist - minDist), -1);
}

/**
 * @note Address: 0x80244BDC
 * @note Size: 0x188
 */
void RandMapMgr::getItemDropPosition(Vector3f* positions, int count, f32 lowerWeightBound, f32 upperWeightBound)
{
	f32 avg    = 0.5f * (lowerWeightBound + upperWeightBound);
	f32 weight = (upperWeightBound - avg > 0.0f) ? upperWeightBound - avg : -(upperWeightBound - avg);

	MapNode* nodeList[16];
	BaseGen* genList[16];

	const int randVal   = randInt(2);
	const int countEven = (count % 2) - 1;
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
}

/**
 * @note Address: 0x80244D64
 * @note Size: 0x48
 */
void RandMapMgr::setUnitTexture(int idx, JUTTexture* texture)
{
	MapNode* node = static_cast<MapNode*>(mGenerator->mPlacedMapNodes->getChildAt(idx));
	if (node) {
		node->mUnitInfo->setUnitTexture(texture);
	}
}

/**
 * @note Address: 0x80244DAC
 * @note Size: 0xC
 */
void RandMapMgr::setCaptureOn()
{
	mIsCaptureOn = true;
}

/**
 * @note Address: 0x80244DB8
 * @note Size: 0xDC
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

/**
 * @note Address: 0x80244E94
 * @note Size: 0x1C
 */
bool RandMapMgr::isLastFloor()
{
	if (mGenerator) {
		return mGenerator->mIsFinalFloor;
	}
	return false;
}

/**
 * @note Address: 0x80244EB0
 * @note Size: 0x8
 */
bool RandMapMgr::isVersusHiba()
{
	return mIsVersusHiba;
}

/**
 * @note Address: 0x80244EB8
 * @note Size: 0x8
 */
JUTTexture* RandMapMgr::getRadarMapTexture()
{
	return mRadarMapTexture;
}

/**
 * @note Address: 0x80244EC0
 * @note Size: 0x24
 */
void RandMapMgr::radarMapPartsOpen(Vector3f& pos)
{
	mRandMapDraw->radarMapPartsOpen(pos);
}

/**
 * @note Address: 0x80244EE4
 * @note Size: 0x20
 */
void RandMapMgr::getPositionOnTex(Vector3f& pos, f32& x, f32& y)
{
	x = pos.x * (4.0f / 85.0f);
	y = pos.z * (4.0f / 85.0f);
}

/**
 * @brief Retrieves base generation data.
 *
 * This function retrieves the base generation data for enemy group or enemy solo spawns.
 * It iterates through the map nodes and their child base generators to find the relevant data.
 * The positions and directions of the base generators are stored in the provided arrays.
 * The selection of the base generator is based on a random value.
 *
 * @param positions An array to store the positions of the base generators.
 * @param dirs An array to store the directions of the base generators.
 *
 * @note Address: 0x80244F04
 * @note Size: 0x254
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
		for (CNode* node = startNodes[i]->mChild; node; node = node->mNext) {
			MapNode* currNode = static_cast<MapNode*>(node);
			BaseGen* baseGen  = currNode->mUnitInfo->getBaseGen();
			if (baseGen) {

				FOREACH_NODE(BaseGen, baseGen->mChild, currGen)
				{
					if (currGen->mSpawnType == BaseGen::CGT_EnemyEasy || currGen->mSpawnType == BaseGen::CGT_EnemyHard) {
						Vector3f globalPos = currNode->getBaseGenGlobalPosition(currGen);
						nodeList[counter]  = currNode;
						genList[counter]   = currGen;
						floatList[counter] = positions->distance(globalPos);

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
}

/**
 * @note Address: 0x80245158
 * @note Size: 0x200
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

	f32 zero = 0.0f;
	GXPosition3f32(zero, zero, zero);                                                 // bottom left
	GXPosition3f32(mRadarMapTexture->getSizeX(), zero, zero);                         // bottom right
	GXPosition3f32(mRadarMapTexture->getSizeX(), mRadarMapTexture->getSizeY(), zero); // top right
	GXPosition3f32(zero, mRadarMapTexture->getSizeY(), zero);                         // top left
	GXSetDstAlpha(GX_FALSE, 0);
}
} // namespace Cave
} // namespace Game
