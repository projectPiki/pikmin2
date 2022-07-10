#include "types.h"
#include "Game/Cave/RandMapMgr.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave10AdjustNode
    __vt__Q34Game4Cave10AdjustNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave10AdjustNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A6D8
    lbl_8051A6D8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802427A8
 * Size:	0000A4
 */
Cave::MapUnits::MapUnits(JUTTexture* texture) 
{
    // Constructor for MapUnits struct
    //     - sets texture and unit sizes based on input texture
    //     - constructs a new DoorNode 
    //     - sets everything else to 0 or -1 (whichever 'null' should be)
    m_texture = texture;
    m_baseGen = 0;
    m_name = 0;
    m_index = -1;
    m_kind = -1;
    m_sizeX = -1;
    m_sizeY = -1;
    if (m_texture) {
        m_sizeX = ((u32) m_texture->_20->m_sizeX) >> 3;
        m_sizeY = ((u32) m_texture->_20->m_sizeY) >> 3;
    }

    m_doorNode = new DoorNode();
    m_doorCounts = 0;
}

/*
 * --INFO--
 * Address:	8024284C
 * Size:	000060
 */
void Cave::MapUnits::setDoorNum(int doorNum) 
{
    // Construct new AdjustNode array for number of doors
    m_doorCounts = new AdjustNode [doorNum];
}

/*
 * --INFO--
 * Address:	802428AC
 * Size:	000060
 */
Cave::AdjustNode::~AdjustNode() { }

/*
 * --INFO--
 * Address:	8024290C
 * Size:	000008
 */
void Cave::MapUnits::setUnitName(char* name) { m_name = name; }

/*
 * --INFO--
 * Address:	80242914
 * Size:	000008
 */
void Cave::MapUnits::setUnitIndex(int idx) { m_index = idx; }

/*
 * --INFO--
 * Address:	8024291C
 * Size:	000008
 */
void Cave::MapUnits::setUnitKind(int kind) { m_kind = kind; }

/*
 * --INFO--
 * Address:	80242924
 * Size:	00000C
 */
void Cave::MapUnits::setUnitSize(int sizeX, int sizeY) 
{
    m_sizeX = sizeX;
    m_sizeY = sizeY;
}

/*
 * --INFO--
 * Address:	80242930
 * Size:	000008
 */
void Cave::MapUnits::setBaseGenPtr(BaseGen* baseGen) { m_baseGen = baseGen; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::setUnitTexture(JUTTexture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitName(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitIndex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitKind(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitSizeX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitSizeY(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getBaseGen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitTexture(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80242938
 * Size:	000064
 */
Cave::UnitInfo::UnitInfo(MapUnits* mapUnits) 
{
    // Constructor for UnitInfo struct
    //    - sets m_mapUnits to input mapUnits
    //    - creates new DoorNode
    //    - sets everything else to 'null' (0 or -1 depending)

    m_mapUnits = mapUnits;
    m_unitRotation = -1;
    m_unitSizeX = -1;
    m_unitSizeY = -1;
    m_doorNode = new DoorNode;
    m_doorCounts = 0;
}

/*
 * --INFO--
 * Address:	8024299C
 * Size:	00000C
 */
void Cave::UnitInfo::setUnitTexture(JUTTexture* texture) { m_mapUnits->m_texture = texture; }

/*
 * --INFO--
 * Address:	802429A8
 * Size:	000008
 */
void Cave::UnitInfo::setUnitRotation(int rot) { m_unitRotation = rot; }

/*
 * --INFO--
 * Address:	802429B0
 * Size:	0001BC
 */
void Cave::UnitInfo::create()
{
    // sets up unit sizes + directions based on details in m_mapUnits + current rotation

    // load all door nodes from m_mapUnits into m_doorNode
    DoorNode* mapDoorNode = (DoorNode*) m_mapUnits->m_doorNode->m_child;
    for (mapDoorNode; mapDoorNode; mapDoorNode = (DoorNode*) mapDoorNode->m_next) {
        DoorNode* newDoorNode = new DoorNode();
        newDoorNode->m_node.m_direction = mapDoorNode->m_node.m_direction;
        newDoorNode->m_node.m_offset = mapDoorNode->m_node.m_offset;
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
    DoorNode* unitDoorNode = (DoorNode*) m_doorNode->m_child;
    for (unitDoorNode; unitDoorNode; unitDoorNode = (DoorNode*) unitDoorNode->m_next) {
        
        int doorDir = unitDoorNode->m_node.m_direction; // default direction
        int newDirection = (doorDir + m_unitRotation) % 4; // rotate with unit
        
        unitDoorNode->m_node.m_direction = newDirection; // set as new door direction
        // set offset based on new direction vs old direction
        if (doorDir == 0) { // old = up
            if ((newDirection == 2) || (newDirection == 3)) { // new = down or left
                unitDoorNode->m_node.m_offset = (X - unitDoorNode->m_node.m_offset);
            }
        } else if (doorDir == 1) { // old = right
            if ((newDirection == 2) || (newDirection == 3)) { // new = down or left
                unitDoorNode->m_node.m_offset = (Y - unitDoorNode->m_node.m_offset);
            }            
        } else if (doorDir == 2) { // old = down
            if ((newDirection == 0) || (newDirection == 1)) { // new = up or right
                unitDoorNode->m_node.m_offset = (X - unitDoorNode->m_node.m_offset);
            }            
        } else if (doorDir == 3) { // old = left
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
char* Cave::UnitInfo::getUnitName() { return m_mapUnits->m_name; }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Cave::UnitInfo::getUnitIndex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80242B78
 * Size:	00000C
 */
int Cave::UnitInfo::getUnitKind() { return m_mapUnits->m_kind; }

/*
 * --INFO--
 * Address:	80242B84
 * Size:	000008
 */
int Cave::UnitInfo::getUnitSizeX() { return m_unitSizeX; }

/*
 * --INFO--
 * Address:	80242B8C
 * Size:	000008
 */
int Cave::UnitInfo::getUnitSizeY() { return m_unitSizeY; }

/*
 * --INFO--
 * Address:	80242B94
 * Size:	000008
 */
int Cave::UnitInfo::getUnitRotation() { return m_unitRotation; }

/*
 * --INFO--
 * Address:	80242B9C
 * Size:	000024
 */
Cave::DoorNode* Cave::UnitInfo::getDoorNode(int doorNum) 
{
    return (DoorNode*) m_doorNode->getChildAt(doorNum);
}

/*
 * --INFO--
 * Address:	80242BC0
 * Size:	00000C
 */
Cave::BaseGen* Cave::UnitInfo::getBaseGen() { return m_mapUnits->m_baseGen; }

/*
 * --INFO--
 * Address:	80242BCC
 * Size:	00018C
 */
void Cave::UnitInfo::draw(float, float, float, float)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stmw     r24, 0x10(r1)
	lwz      r4, 8(r3)
	fmr      f28, f1
	fmr      f29, f2
	lwz      r4, 8(r4)
	fmr      f30, f3
	fmr      f31, f4
	cmplwi   r4, 0
	beq      lbl_80242D24
	lwz      r0, 0xc(r3)
	li       r31, 0
	li       r30, 0x10
	li       r29, 0x10
	cmpwi    r0, 2
	li       r28, 0
	li       r27, 0
	li       r26, 0
	li       r25, 0x10
	li       r24, 0x10
	beq      lbl_80242C7C
	bge      lbl_80242C5C
	cmpwi    r0, 0
	beq      lbl_80242CB0
	bge      lbl_80242C68
	b        lbl_80242CB0

lbl_80242C5C:
	cmpwi    r0, 4
	bge      lbl_80242CB0
	b        lbl_80242CA0

lbl_80242C68:
	li       r30, 0
	li       r28, 0x10
	li       r27, 0x10
	li       r25, 0
	b        lbl_80242CB0

lbl_80242C7C:
	li       r31, 0x10
	li       r30, 0
	li       r29, 0
	li       r28, 0x10
	li       r27, 0x10
	li       r26, 0x10
	li       r25, 0
	li       r24, 0
	b        lbl_80242CB0

lbl_80242CA0:
	li       r31, 0x10
	li       r29, 0
	li       r26, 0x10
	li       r24, 0

lbl_80242CB0:
	mr       r3, r4
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r3, 0xCC008000@ha
	lfs      f0, lbl_8051A6D8@sda21(r2)
	stfs     f28, 0xCC008000@l(r3)
	stfs     f29, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r31, -0x8000(r3)
	stb      r27, -0x8000(r3)
	stfs     f30, -0x8000(r3)
	stfs     f29, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r30, -0x8000(r3)
	stb      r26, -0x8000(r3)
	stfs     f30, -0x8000(r3)
	stfs     f31, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r29, -0x8000(r3)
	stb      r25, -0x8000(r3)
	stfs     f28, -0x8000(r3)
	stfs     f31, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r28, -0x8000(r3)
	stb      r24, -0x8000(r3)

lbl_80242D24:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}
} // namespace Game
