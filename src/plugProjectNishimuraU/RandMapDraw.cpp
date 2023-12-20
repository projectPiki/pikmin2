#include "Game/Cave/RandMapMgr.h"
#include "Graphics.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x80245418
 * @note Size: 0x8
 */
RandMapDraw::RandMapDraw(MapUnitGenerator* generator) { mGenerator = generator; }

/**
 * @note Address: 0x80245420
 * @note Size: 0x1CC
 */
void RandMapDraw::radarMapPartsOpen(Vector3f& pos)
{
	// Looking down on a position, we don't care about the Y
	// therefore x, y coords translate to x, z
	f32 x_pos = pos.x / 170.0f;
	f32 y_pos = pos.z / 170.0f;

	MapNode* placedMapNodes = mGenerator->mPlacedMapNodes;
	MapNode* visitedNodes   = mGenerator->mVisitedMapNodes;

	MapNode* childNode = static_cast<MapNode*>(placedMapNodes->mChild);
	for (childNode; childNode != nullptr; childNode = static_cast<MapNode*>(childNode->mNext)) {
		// If the x & z fall within the boundaries of the node (a square)
		if ((x_pos > childNode->getNodeOffsetX()) && (y_pos > childNode->getNodeOffsetY())
		    && x_pos < (childNode->getNodeOffsetX() + childNode->mUnitInfo->getUnitSizeX())
		    && y_pos < (childNode->getNodeOffsetY() + childNode->mUnitInfo->getUnitSizeY())) {

			// We're within that section, so we add it to the visited nodes
			childNode->del();
			visitedNodes->add(childNode);

			const int doorCount = childNode->getNumDoors();
			for (int i = 0; i < doorCount; i++) {
				MapNode* currMapNode = childNode->mAdjustInfo[i].mMapTile;

				// If the node has a door that leads to a dead end, we've discovered it too
				if ((placedMapNodes == currMapNode->mParent) && (currMapNode->mUnitInfo->getUnitKind() == UNITKIND_Cap)) {
					currMapNode->del();
					visitedNodes->add(currMapNode);
				}
			}
		}
	}
}

/**
 * @note Address: 0x802455EC
 * @note Size: 0x78
 */
void RandMapDraw::draw(Graphics& gfx, f32 x, f32 y, f32 z)
{
	MapNode* currMapNode = static_cast<MapNode*>(mGenerator->mVisitedMapNodes->mChild);
	for (currMapNode; currMapNode != nullptr; currMapNode = static_cast<MapNode*>(currMapNode->mNext)) {
		currMapNode->draw(x, y, z);
	}
}
} // namespace Cave
} // namespace Game
