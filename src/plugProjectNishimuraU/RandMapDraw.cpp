#include "Game/Cave/RandMapMgr.h"
#include "Graphics.h"

namespace Game {

/*
 * --INFO--
 * Address:	80245418
 * Size:	000008
 */
Cave::RandMapDraw::RandMapDraw(Game::Cave::MapUnitGenerator* generator) { m_generator = generator; }

} // namespace Game

/*
 * --INFO--
 * Address:	80245420
 * Size:	0001CC
 */
void Game::Cave::RandMapDraw::radarMapPartsOpen(Vector3f& pos)
{
	// Looking down on a position, we don't care about the Y
	// therefore x, y coords translate to x, z
	f32 x_pos = pos.x / 170.0f;
	f32 y_pos = pos.z / 170.0f;

	MapNode* placedMapNodes = m_generator->m_placedMapNodes;
	MapNode* visitedNodes   = m_generator->m_visitedMapNodes;

	MapNode* childNode = (MapNode*)placedMapNodes->m_child;
	for (; childNode != nullptr; childNode = (MapNode*)childNode->m_next) {
		// If the x & z fall within the boundaries of the node (a square)
		if ((x_pos > childNode->getNodeOffsetX()) && (y_pos > childNode->getNodeOffsetY())
		    && x_pos < (childNode->getNodeOffsetX() + childNode->m_unitInfo->getUnitSizeX())
		    && y_pos < (childNode->getNodeOffsetY() + childNode->m_unitInfo->getUnitSizeY())) {

			// We're within that section, so we add it to the visited nodes
			childNode->del();
			visitedNodes->add(childNode);

			const int doorCount = childNode->getNumDoors();
			for (int i = 0; i < doorCount; i++) {
				MapNode* currMapNode = childNode->m_nodeList[i * 3];

				// If the node has a door that leads to a dead end, we've discovered it too
				if (placedMapNodes == currMapNode->m_parent && currMapNode->m_unitInfo->getUnitKind() == 0) {
					currMapNode->del();
					visitedNodes->add(currMapNode);
				}
			}
		}
	}
}

namespace Game {

/*
 * --INFO--
 * Address:	802455EC
 * Size:	000078
 */
void Game::Cave::RandMapDraw::draw(Graphics& gfx, float x, float y, float z)
{
	MapNode* currMapNode = (MapNode*)m_generator->m_visitedMapNodes->m_child;
	for (; currMapNode; currMapNode = (MapNode*)currMapNode->m_next) {
		currMapNode->draw(x, y, z);
	}
}
} // namespace Game
