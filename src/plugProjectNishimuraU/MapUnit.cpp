#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/gx.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	802427A8
 * Size:	0000A4
 */
MapUnits::MapUnits(JUTTexture* texture)
{
	// Constructor for MapUnits struct
	//     - sets texture and unit sizes based on input texture
	//     - constructs a new DoorNode
	//     - sets everything else to 0 or -1 (whichever 'null' should be)
	m_texture = texture;
	m_baseGen = 0;
	m_name    = 0;
	m_index   = -1;
	m_kind    = -1;
	m_sizeX   = -1;
	m_sizeY   = -1;
	if (m_texture) {
		m_sizeX = ((u32)m_texture->_20->m_sizeX) >> 3;
		m_sizeY = ((u32)m_texture->_20->m_sizeY) >> 3;
	}

	m_doorNode   = new DoorNode();
	m_doorCounts = 0;
}

/*
 * --INFO--
 * Address:	8024284C
 * Size:	000060
 */
void MapUnits::setDoorNum(int doorNum)
{
	// Construct new AdjustNode array for number of doors
	m_doorCounts = new AdjustNode[doorNum];
}

/*
 * --INFO--
 * Address:	8024290C
 * Size:	000008
 */
void MapUnits::setUnitName(char* name) { m_name = name; }

/*
 * --INFO--
 * Address:	80242914
 * Size:	000008
 */
void MapUnits::setUnitIndex(int idx) { m_index = idx; }

/*
 * --INFO--
 * Address:	8024291C
 * Size:	000008
 */
void MapUnits::setUnitKind(int kind) { m_kind = kind; }

/*
 * --INFO--
 * Address:	80242924
 * Size:	00000C
 */
void MapUnits::setUnitSize(int sizeX, int sizeY)
{
	m_sizeX = sizeX;
	m_sizeY = sizeY;
}

/*
 * --INFO--
 * Address:	80242930
 * Size:	000008
 */
void MapUnits::setBaseGenPtr(BaseGen* baseGen) { m_baseGen = baseGen; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void Cave::MapUnits::setUnitTexture(JUTTexture*)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// char* Cave::MapUnits::getUnitName(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitIndex(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitKind(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitSizeX(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// int Cave::MapUnits::getUnitSizeY(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// BaseGen* Cave::MapUnits::getBaseGen(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// JUTTexture* Cave::MapUnits::getUnitTexture(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80242938
 * Size:	000064
 */
UnitInfo::UnitInfo(MapUnits* mapUnits)
{
	// Constructor for UnitInfo struct
	//    - sets m_mapUnits to input mapUnits
	//    - creates new DoorNode
	//    - sets everything else to 'null' (0 or -1 depending)

	m_mapUnits     = mapUnits;
	m_unitRotation = -1;
	m_unitSizeX    = -1;
	m_unitSizeY    = -1;
	m_doorNode     = new DoorNode;
	m_doorCounts   = 0;
}

/*
 * --INFO--
 * Address:	8024299C
 * Size:	00000C
 */
void UnitInfo::setUnitTexture(JUTTexture* texture) { m_mapUnits->m_texture = texture; }

/*
 * --INFO--
 * Address:	802429A8
 * Size:	000008
 */
void UnitInfo::setUnitRotation(int rot) { m_unitRotation = rot; }

/*
 * --INFO--
 * Address:	802429B0
 * Size:	0001BC
 */
void UnitInfo::create()
{
	// sets up unit sizes + directions based on details in m_mapUnits + current rotation

	// load all door nodes from m_mapUnits into m_doorNode
	DoorNode* mapDoorNode = (DoorNode*)m_mapUnits->m_doorNode->m_child;
	for (mapDoorNode; mapDoorNode; mapDoorNode = (DoorNode*)mapDoorNode->m_next) {
		DoorNode* newDoorNode           = new DoorNode();
		newDoorNode->m_node.m_direction = mapDoorNode->m_node.m_direction;
		newDoorNode->m_node.m_offset    = mapDoorNode->m_node.m_offset;
		m_doorNode->add(newDoorNode);
	}

	// get AdjustInfo* from m_mapUnits
	m_doorCounts = m_mapUnits->m_doorCounts;

	// if unit is facing up or down, use X and Y as normal
	if ((m_unitRotation == 0) || (m_unitRotation == 2)) {
		m_unitSizeX = m_mapUnits->m_sizeX;
		m_unitSizeY = m_mapUnits->m_sizeY;
	} else { // if unit is facing left or right, swap X and Y
		m_unitSizeX = m_mapUnits->m_sizeY;
		m_unitSizeY = m_mapUnits->m_sizeX;
	}

	// set defaults for door offsets
	int X = m_mapUnits->m_sizeX - 1;
	int Y = m_mapUnits->m_sizeY - 1;

	// set all door offsets based on their directions
	DoorNode* unitDoorNode = (DoorNode*)m_doorNode->m_child;
	for (unitDoorNode; unitDoorNode; unitDoorNode = (DoorNode*)unitDoorNode->m_next) {

		int doorDir      = unitDoorNode->m_node.m_direction; // default direction
		int newDirection = (doorDir + m_unitRotation) % 4;   // rotate with unit

		unitDoorNode->m_node.m_direction = newDirection; // set as new door direction
		// set offset based on new direction vs old direction
		if (doorDir == 0) {                                   // old = up
			if ((newDirection == 2) || (newDirection == 3)) { // new = down or left
				unitDoorNode->m_node.m_offset = (X - unitDoorNode->m_node.m_offset);
			}
		} else if (doorDir == 1) {                            // old = right
			if ((newDirection == 2) || (newDirection == 3)) { // new = down or left
				unitDoorNode->m_node.m_offset = (Y - unitDoorNode->m_node.m_offset);
			}
		} else if (doorDir == 2) {                            // old = down
			if ((newDirection == 0) || (newDirection == 1)) { // new = up or right
				unitDoorNode->m_node.m_offset = (X - unitDoorNode->m_node.m_offset);
			}
		} else if (doorDir == 3) {                            // old = left
			if ((newDirection == 0) || (newDirection == 1)) { // new = up or right
				unitDoorNode->m_node.m_offset = (Y - unitDoorNode->m_node.m_offset);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80242B6C
 * Size:	00000C
 */
char* UnitInfo::getUnitName() { return m_mapUnits->m_name; }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
// int Cave::UnitInfo::getUnitIndex(void)
// {
// // UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80242B78
 * Size:	00000C
 */
int UnitInfo::getUnitKind() { return m_mapUnits->m_kind; }

/*
 * --INFO--
 * Address:	80242B84
 * Size:	000008
 */
int UnitInfo::getUnitSizeX() { return m_unitSizeX; }

/*
 * --INFO--
 * Address:	80242B8C
 * Size:	000008
 */
int UnitInfo::getUnitSizeY() { return m_unitSizeY; }

/*
 * --INFO--
 * Address:	80242B94
 * Size:	000008
 */
int UnitInfo::getUnitRotation() { return m_unitRotation; }

/*
 * --INFO--
 * Address:	80242B9C
 * Size:	000024
 */
DoorNode* UnitInfo::getDoorNode(int doorNum) { return (DoorNode*)m_doorNode->getChildAt(doorNum); }

/*
 * --INFO--
 * Address:	80242BC0
 * Size:	00000C
 */
BaseGen* UnitInfo::getBaseGen() { return m_mapUnits->m_baseGen; }

/*
 * --INFO--
 * Address:	80242BCC
 * Size:	00018C
 */
// shout outs to encounter for adding the GXFifo stuff from SMB
void UnitInfo::draw(float p0, float p1, float p2, float p3)
{
	// Draw texture for UnitInfo based on rotation and
	// m_mapUnits->m_texture
	JUTTexture* texture = m_mapUnits->m_texture;
	if (texture) {
		// default first-input GX coords
		s8 u0 = 0;
		s8 u1 = 16;
		s8 u2 = 16;
		s8 u3 = 0;

		// default second-input GX coords
		s8 v0 = 0;
		s8 v1 = 0;
		s8 v2 = 16;
		s8 v3 = 16;

		// modify GX coords based on rotation of unit
		switch (m_unitRotation) {
		case 0: // facing up/default, no rotation
			break;
		case 1: // facing right
			u1 = 0;
			u3 = 16;

			v0 = 16;
			v2 = 0;
			break;
		case 2: // facing down
			u0 = 16;
			u1 = 0;
			u2 = 0;
			u3 = 16;

			v0 = 16;
			v1 = 16;
			v2 = 0;
			v3 = 0;
			break;
		case 3: // facing left
			u0 = 16;
			u2 = 0;

			v1 = 16;
			v3 = 0;
			break;
		}
		// set GX positions and coords
		texture->load(GX_TEXMAP0);

		GXBegin(GX_QUADS, GX_VTXFMT0, 4);
		float z = 0;
		GXPosition3f32(p0, p1, z);
		GXTexCoord2s8(u0, v0);

		GXPosition3f32(p2, p1, z);
		GXTexCoord2s8(u1, v1);

		GXPosition3f32(p2, p3, z);
		GXTexCoord2s8(u2, v2);

		GXPosition3f32(p0, p3, z);
		GXTexCoord2s8(u3, v3);
	}
}
} // namespace Cave
} // namespace Game
