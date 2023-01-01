#include "Game/gameGenerator.h"
// #include "Game/genItem.h"
#include "Game/itemMgr.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F810
    lbl_8047F810:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
    .global lbl_8047F81C
    lbl_8047F81C:
        .4byte 0x4954454D
        .4byte 0x2082F083
        .4byte 0x5A836283
        .4byte 0x67000000
    .global lbl_8047F82C
    lbl_8047F82C:
        .4byte 0x83418343
        .4byte 0x83658380
        .4byte 0x82F094AD
        .4byte 0x90B60000
        .4byte 0x09232069
        .4byte 0x74656D20
        .4byte 0x69640D0A
        .4byte 0x00000000
        .4byte 0x09232072
        .4byte 0x6F746174
        .4byte 0x696F6E0D
        .4byte 0x0A000000
        .4byte 0x09232069
        .4byte 0x74656D20
        .4byte 0x6C6F6361
        .4byte 0x6C207665
        .4byte 0x7273696F
        .4byte 0x6E0D0A00
    .global lbl_8047F874
    lbl_8047F874:
        .4byte 0x67656E49
        .4byte 0x74656D2E
        .4byte 0x63707000
    .global lbl_8047F880
    lbl_8047F880:
        .4byte 0x6E6F2062
        .4byte 0x61736549
        .4byte 0x74656D4D
        .4byte 0x67722066
        .4byte 0x6F722025
        .4byte 0x730A0000
        .4byte 0x8349836A
        .4byte 0x83878393
        .4byte 0x82F094AD
        .4byte 0x90B60000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game7GenItem
    __vt__Q24Game7GenItem:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenItemFR6Stream
        .4byte ramSaveParameters__Q24Game7GenItemFR6Stream
        .4byte ramLoadParameters__Q24Game7GenItemFR6Stream
        .4byte doEvent__Q24Game7GenItemFUl
        .4byte doRead__Q24Game7GenItemFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenItemFv
        .4byte updateUseList__Q24Game7GenItemFPQ24Game9Generatori
        .4byte generate__Q24Game7GenItemFPQ24Game9Generator
        .4byte birth__Q24Game7GenItemFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game7GenItemFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805192B8
    lbl_805192B8:
        .4byte 0x00000000
    .global lbl_805192BC
    lbl_805192BC:
        .4byte 0x40490FDB
    .global lbl_805192C0
    lbl_805192C0:
        .4byte 0x3BB60B61
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801ACD20
 * Size:	00009C
 */


Game::GenObject* makeItem() { return new Game::GenItem; }

namespace Game {

/*
 * --INFO--
 * Address:	801ACDBC
 * Size:	00008C
 */
void GenItem::initialise()
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (GenObjectFactory::factory->m_count >= GenObjectFactory::factory->m_limit) {
		return;
	}
	GenObjectFactory::factory->m_factories[GenObjectFactory::factory->m_count].m_typeID = 'item';
	factory->m_factories[factory->m_count].m_makeFunction = makeItem;
	factory->m_factories[factory->m_count].m_name = "ƒAƒCƒeƒ€‚ð”­¶"; // spawn item
	factory->m_factories[factory->m_count].m_version = '0002';
	
	factory->m_count++;

}

void GenItem::updateUseList(Generator* gen, int i) {
	m_itemMgr = itemMgr->getMgrByIndex(m_mgrIndex);
}

/*
 * --INFO--
 * Address:	801ACE80
 * Size:	00006C
 */
void GenItem::doEvent(u32 idx)
{
	if ((int*)idx == &m_mgrIndex) {
		if (m_parm) {
			delete m_parm;
		}
		m_itemMgr = itemMgr->getMgrByIndex(m_mgrIndex);
		m_parm = m_itemMgr->generatorNewItemParm();
	}

}

} // namespace Game

/*
 * --INFO--
 * Address:	801ACEEC
 * Size:	000068
 */
void Game::GenItem::generatorMakeMatrix(Matrixf& matrix, Vector3f& vec)
{
	float x = m_rotation.x * DEG2RAD * PI;
	float y = m_rotation.y * DEG2RAD * PI;
	float z = m_rotation.z * DEG2RAD * PI;
	Vector3f rotation = Vector3f(x, y, z);

	matrix.makeTR(vec, rotation);

}

namespace Game {

/*
 * --INFO--
 * Address:	801ACF54
 * Size:	000050
 */
J3DModelData* GenItem::getShape(void)
{
	BaseItemMgr* baseMgr = m_itemMgr;
	if (baseMgr && m_parm) {
		return baseMgr->generatorGetShape(m_parm);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801ACFA4
 * Size:	000154
 */
void GenItem::doWrite(Stream& stream)
{
	if (m_itemMgr) {
		u32 id = m_itemMgr->generatorGetID();
		ID32 id32 = id;
		stream.textBeginGroup(id32.getStr());
		stream.textWriteTab(stream.m_tabCount);
		id32.write(stream);
		stream.textWriteText("\t# item id\r\n");
		stream.textWriteTab(stream.m_tabCount);
		stream.writeFloat(m_rotation.x);
		stream.writeFloat(m_rotation.y);
		stream.writeFloat(m_rotation.z);
		stream.textWriteText("\t # rotation\r\n");
		u32 localVer = m_itemMgr->generatorLocalVersion();
		ID32 localID = localVer;
		stream.textWriteTab(stream.m_tabCount);
		localID.write(stream);
		stream.textWriteText("\t# item local version\r\n");
		m_itemMgr->generatorWrite(stream, m_parm);
		stream.textEndGroup();
	}
}

/*
 * --INFO--
 * Address:	801AD108
 * Size:	000148
 */
void GenItem::doRead(Stream& stream)
{
	if (m_parm) {
		delete m_parm;
		m_parm = nullptr;
	}
	m_itemMgr = nullptr;
		ID32 id32;
		id32.read(stream);
		m_itemMgr = itemMgr->getMgrByID(id32);
		m_mgrIndex = itemMgr->getIndexByMgr(m_itemMgr);
		JUT_ASSERTLINE(175, m_itemMgr && m_mgrIndex != -1, "no baseItemMgr for %s\n", &id32); 
		m_parm = m_itemMgr->generatorNewItemParm();
		m_rotation.x = stream.readFloat();
		m_rotation.y = stream.readFloat();
		m_rotation.z = stream.readFloat();
		u32 version = '0000';
		if (m_rawID >= '0002') {
			ID32 localID;
			localID.read(stream);
			version = localID.getID();
		}
		m_itemMgr->generatorRead(stream, m_parm, version);

		
}

/*
 * --INFO--
 * Address:	801AD254
 * Size:	000004
 */
void GenItem::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801AD258
 * Size:	000004
 */
void GenItem::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801AD25C
 * Size:	000078
 */
Creature* GenItem::generate(Game::Generator* generator)
{
	Vector3f pos = generator->m_position + generator->m_offset;
	GenArg arg;
	arg.m_position = pos;
	birth(&arg);
}

/*
 * --INFO--
 * Address:	801AD2D4
 * Size:	0000A4
 */
Creature* GenItem::birth(Game::GenArg* arg)
{
	BaseItem* baseItem = nullptr;
	BaseItemMgr* baseItemMgr = m_itemMgr;
	if (baseItemMgr) {
		Vector3f pos = arg->m_position;
		float z = m_rotation.z * DEG2RAD * PI;
		float y = m_rotation.y * DEG2RAD * PI;
		float x = m_rotation.x * DEG2RAD * PI;
		Vector3f rotation = Vector3f(x, y, z);
		baseItem = baseItemMgr->generatorBirth(pos, rotation,  m_parm);
	}
	return baseItem;
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void makeObjectItem()
{
	// UNUSED FUNCTION
}

namespace Game {

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00008C
//  */
// void GenObjectItem::initialise(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00004C
//  */
// void GenObjectItem::doWrite(Stream&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00004C
//  */
// void GenObjectItem::doRead(Stream&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void GenObjectItem::ramSaveParameters(Stream&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void GenObjectItem::ramLoadParameters(Stream&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000078
//  */
// void GenObjectItem::generate(Game::Generator*)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000074
//  */
// void GenObjectItem::birth(Game::GenArg*)
// {
// 	// UNUSED FUNCTION
// }
} // namespace Game
