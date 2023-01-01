#include "Game/gameGenerator.h"

static const char name[] = "genPellet";

/*
 * --INFO--
 * Address:	8020278C
 * Size:	00009C
 */
Game::GenPellet* makePellet() { return new Game::GenPellet; }

namespace Game {

/*
 * --INFO--
 * Address:	80202828
 * Size:	00008C
 */
void GenPellet::initialise()
{
	if (GenObjectFactory::factory->m_count >= GenObjectFactory::factory->m_limit)
		return;

	GenObjectFactoryFactory* obj                  = GenObjectFactory::factory;
	obj->m_factories[obj->m_count].m_typeID       = 'pelt';
	obj->m_factories[obj->m_count].m_makeFunction = (GenObjectFactory::MakeFunction*)makePellet;
	obj->m_factories[obj->m_count].m_name         = "PELLET‚ð”­¶";
	obj->m_factories[obj->m_count].m_version      = '0000';
	obj->m_count++;
}

/*
 * --INFO--
 * Address:	802028B4
 * Size:	00006C
 */
void GenPellet::doEvent(u32 flag)
{
	// weird check?
	if (flag == (int)&m_pelType) {
		if (m_genParm) {
			delete m_genParm;
		}
		m_manager = pelletMgr->getMgrByID(m_pelType);
		m_genParm = m_manager->generatorNewPelletParm();
	}
}

/*
 * --INFO--
 * Address:	80202920
 * Size:	000068
 */
void GenPellet::generatorMakeMatrix(Matrixf& mtx, Vector3f& pos)
{
	f32 x, y, z;
	y = m_rotation.y * DEG2RAD * PI;
	z = m_rotation.z * DEG2RAD * PI;
	x = m_rotation.x * DEG2RAD * PI;

	Vector3f ang(x, y, z);
	mtx.makeTR(pos, ang);
}

/*
 * --INFO--
 * Address:	80202988
 * Size:	000050
 */
J3DModelData* GenPellet::getShape()
{
	if (m_manager && m_genParm) {
		return m_manager->generatorGetShape(m_genParm);
	} else {
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	802029D8
 * Size:	000138
 */
void GenPellet::doWrite(Stream& data)
{
	if (m_manager) {
		data.textBeginGroup(m_manager->getMgrName());
		data.textWriteTab(data.m_tabCount);
		data.writeByte(m_pelType);
		data.textWriteText("\t# mgr id\r\n");

		data.textWriteTab(data.m_tabCount);
		data.writeFloat(m_rotation.x);
		data.writeFloat(m_rotation.y);
		data.writeFloat(m_rotation.z);
		data.textWriteText("\t# rotation\r\n");

		u32 temp = m_manager->generatorLocalVersion();
		ID32 id(temp);
		id.write(data);
		data.textWriteText("\t# pellet local version\r\n");

		m_manager->generatorWrite(data, m_genParm);
		data.textEndGroup();
	}
}

/*
 * --INFO--
 * Address:	80202B10
 * Size:	000118
 */
void GenPellet::doRead(Stream& data)
{
	if (m_genParm) {
		delete m_genParm;
		m_genParm = nullptr;
	}

	m_manager = nullptr;
	m_pelType = data.readByte();
	m_manager = pelletMgr->getMgrByID(m_pelType);
	if (!m_manager || m_pelType == 255) {
		JUT_PANICLINE(161, "no basePelletMgr for %d\n", m_pelType);
	}
	m_genParm    = m_manager->generatorNewPelletParm();
	m_rotation.x = data.readFloat();
	m_rotation.y = data.readFloat();
	m_rotation.z = data.readFloat();

	ID32 id;
	id.read(data);
	m_manager->generatorRead(data, m_genParm, id.getID());
}

/*
 * --INFO--
 * Address:	80202C28
 * Size:	000004
 */
void GenPellet::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80202C2C
 * Size:	000004
 */
void GenPellet::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80202C30
 * Size:	000058
 */
void GenPellet::updateUseList(Generator*, int)
{
	m_manager = pelletMgr->getMgrByID(m_pelType);
	m_manager->setUse(m_genParm->m_index);
	m_manager->getPelletConfig(m_genParm->m_index);
}

/*
 * --INFO--
 * Address:	80202C88
 * Size:	000078
 */
Creature* GenPellet::generate(Generator* gen)
{
	f32 y, z, x;
	z = gen->m_position.z + gen->m_offset.z;
	y = gen->m_position.y + gen->m_offset.y;
	x = gen->m_position.x + gen->m_offset.x;
	GenArg arg;
	arg.m_position = Vector3f(x, y, z);
	return birth(&arg);
}

/*
 * --INFO--
 * Address:	80202D00
 * Size:	000040
 */
void GenPellet::getDebugInfo(char* str) { sprintf(str, "mgr%d:%d", m_pelType, m_genParm->m_index); }

/*
 * --INFO--
 * Address:	80202D40
 * Size:	0000D4
 */
Creature* GenPellet::birth(Game::GenArg* arg)
{
	Pellet* pelt = nullptr;
	if (m_manager) {
		Vector3f pos = arg->m_position;
		f32 x, y, z;
		z = m_rotation.z * DEG2RAD * PI;
		y = m_rotation.y * DEG2RAD * PI;
		x = m_rotation.x * DEG2RAD * PI;

		Vector3f ang(x, y, z);

		pelt = m_manager->generatorBirth(pos, ang, m_genParm);
		if (pelt) {
			pelt->allocateTexCaster();
		} else {
			JUT_PANICLINE(245, "GENERATOR ERR\n");
		}
	}
	return pelt;
}

} // namespace Game
