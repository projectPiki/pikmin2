#include "Game/Cave/RandMapMgr.h"
#include "Graphics.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	80245418
 * Size:	000008
 */
RandMapDraw::RandMapDraw(MapUnitGenerator* generator) { m_generator = generator; }

/*
 * --INFO--
 * Address:	80245420
 * Size:	0001CC
 */
void RandMapDraw::radarMapPartsOpen(Vector3f& pos)
{
	// Looking down on a position, we don't care about the Y
	// therefore x, y coords translate to x, z
	f32 x_pos = pos.x / 170.0f;
	f32 y_pos = pos.z / 170.0f;

	MapNode* placedMapNodes = m_generator->m_placedMapNodes;
	MapNode* visitedNodes   = m_generator->m_visitedMapNodes;

	MapNode* childNode = static_cast<MapNode*>(placedMapNodes->m_child);
	for (childNode; childNode != nullptr; childNode = static_cast<MapNode*>(childNode->m_next)) {
		// If the x & z fall within the boundaries of the node (a square)
		if ((x_pos > childNode->getNodeOffsetX()) && (y_pos > childNode->getNodeOffsetY())
		    && x_pos < (childNode->getNodeOffsetX() + childNode->m_unitInfo->getUnitSizeX())
		    && y_pos < (childNode->getNodeOffsetY() + childNode->m_unitInfo->getUnitSizeY())) {

			// We're within that section, so we add it to the visited nodes
			childNode->del();
			visitedNodes->add(childNode);

			const int doorCount = childNode->getNumDoors();
			for (int i = 0; i < doorCount; i++) {
				MapNode* currMapNode = childNode->m_adjustInfo[i].m_node;

				// If the node has a door that leads to a dead end, we've discovered it too
				if ((placedMapNodes == currMapNode->m_parent) && (currMapNode->m_unitInfo->getUnitKind() == 0)) {
					currMapNode->del();
					visitedNodes->add(currMapNode);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802455EC
 * Size:	000078
 */
void RandMapDraw::draw(Graphics& gfx, f32 x, f32 y, f32 z)
{
	MapNode* currMapNode = static_cast<MapNode*>(m_generator->m_visitedMapNodes->m_child);
	for (currMapNode; currMapNode != nullptr; currMapNode = static_cast<MapNode*>(currMapNode->m_next)) {
		currMapNode->draw(x, y, z);
	}
}
} // namespace Cave
} // namespace Game
