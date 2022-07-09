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
void Game::Cave::RandMapDraw::radarMapPartsOpen(Vector3f& vec)
{
	// get map node currently in and add it to visited map nodes

	// Convert x and z units to map "units"
	// NB: 3D coord wise we're looking at X and Z,
	// but map-wise, Z is treated as a 2D "Y"
	float x_unit = vec.x / 170.0f;
	float z_unit = vec.z / 170.0f;

	MapNode* placedMapNodes = m_generator->m_placedMapNodes;
	MapNode* visitedNodes   = m_generator->m_visitedMapNodes;
	MapNode* childNode      = (MapNode*)placedMapNodes->m_child;

	// loop through list of placed map nodes
	for (childNode; childNode; childNode = (MapNode*)childNode->m_next) {

		// check we're within the current map node childNode
		// check if we're as FAR as the map node
		if ((x_unit > childNode->getNodeOffsetX()) && (z_unit > childNode->getNodeOffsetY())) {
			// check we're not FURTHER than the map node
			if (x_unit < (childNode->getNodeOffsetX() + childNode->m_unitInfo->getUnitSizeX())) {     // X
				if (z_unit < (childNode->getNodeOffsetY() + childNode->m_unitInfo->getUnitSizeY())) { // Z

					// we're within the map node, so 'move' it to visited
					childNode->del();
					visitedNodes->add(childNode);

					// loop through number of doors of map unit
					int doorLimit = childNode->getNumDoors();
					for (int i = 0; i < doorLimit; i++) {

						// check every third map unit in m_nodeList?
						// I assume this is to do with the structure of m_nodeList
						MapNode* currMapNode = childNode->m_nodeList[3 * i];
						// if childNode and currMapNode share a parent, and it's of unit type 0, add it to visited
						if ((placedMapNodes == currMapNode->m_parent) && (currMapNode->m_unitInfo->getUnitKind() == 0)) {
							currMapNode->del();
							visitedNodes->add(currMapNode);
						}
					}
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
	// get all visited map nodes (children of m_visitedMapNodes) and draw them

	// loop through all children of m_visitedMapNodes
	MapNode* currMapNode = (MapNode*)m_generator->m_visitedMapNodes->m_child;
	for (currMapNode; currMapNode; currMapNode = (MapNode*)currMapNode->m_next) {
		// draw map node
		currMapNode->draw(x, y, z);
	}
}
} // namespace Game
