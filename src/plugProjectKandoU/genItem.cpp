#include "Game/gameGenerator.h"
#include "Game/itemMgr.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "types.h"

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
	factory->m_factories[factory->m_count].m_makeFunction                               = makeItem;
	factory->m_factories[factory->m_count].m_name                                       = "アイテムを発生"; // spawn item
	factory->m_factories[factory->m_count].m_version                                    = '0002';

	factory->m_count++;
}

void GenItem::updateUseList(Generator* gen, int i) { m_itemMgr = itemMgr->getMgrByIndex(m_mgrIndex); }

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
		m_parm    = m_itemMgr->generatorNewItemParm();
	}
}

/*
 * --INFO--
 * Address:	801ACEEC
 * Size:	000068
 */
void GenItem::generatorMakeMatrix(Matrixf& matrix, Vector3f& vec)
{
	float x           = m_rotation.x * DEG2RAD * PI;
	float y           = m_rotation.y * DEG2RAD * PI;
	float z           = m_rotation.z * DEG2RAD * PI;
	Vector3f rotation = Vector3f(x, y, z);

	matrix.makeTR(vec, rotation);
}

/*
 * --INFO--
 * Address:	801ACF54
 * Size:	000050
 */
J3DModelData* GenItem::getShape()
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
		u32 id    = m_itemMgr->generatorGetID();
		ID32 id32 = id;
		stream.textBeginGroup(id32.getStr());
		stream.textWriteTab(stream.m_tabCount);
		id32.write(stream);
		stream.textWriteText("\t# item id\r\n");
		stream.textWriteTab(stream.m_tabCount);
		stream.writeFloat(m_rotation.x);
		stream.writeFloat(m_rotation.y);
		stream.writeFloat(m_rotation.z);
		stream.textWriteText("\t# rotation\r\n");
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
	m_itemMgr  = itemMgr->getMgrByID(id32);
	m_mgrIndex = itemMgr->getIndexByMgr(m_itemMgr);
	JUT_ASSERTLINE(175, m_itemMgr && m_mgrIndex != -1, "no baseItemMgr for %s\n", &id32);
	m_parm       = m_itemMgr->generatorNewItemParm();
	m_rotation.x = stream.readFloat();
	m_rotation.y = stream.readFloat();
	m_rotation.z = stream.readFloat();
	u32 version  = '0000';
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
	BaseItem* baseItem       = nullptr;
	BaseItemMgr* baseItemMgr = m_itemMgr;
	if (baseItemMgr) {
		Vector3f pos      = arg->m_position;
		float z           = m_rotation.z * DEG2RAD * PI;
		float y           = m_rotation.y * DEG2RAD * PI;
		float x           = m_rotation.x * DEG2RAD * PI;
		Vector3f rotation = Vector3f(x, y, z);
		baseItem          = baseItemMgr->generatorBirth(pos, rotation, m_parm);
	}
	return baseItem;
}

static const char unusedGenItemStr[] = "オニョンを発生";
} // namespace Game
