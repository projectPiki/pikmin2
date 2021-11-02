#include "Game/EnemyPelletInfo.h"
namespace Game {

/*
 * --INFO--
 * Address:	8012E34C
 * Size:	000034
 */
EnemyPelletInfo::EnemyPelletInfo()
{
	m_color          = 3;
	m_size           = 1;
	m_minPellets     = 1;
	m_maxPellets     = 8;
	m_spawnThreshold = 0.0f;
}

/*
 * --INFO--
 * Address:	8012E380
 * Size:	000120
 */
void EnemyPelletInfo::write(Stream& stream)
{
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_color);
	stream.textWriteText("\t\t# %s \r\n", "Pellet color");
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_size);
	stream.textWriteText("\t\t# %s \r\n", "Pellet size");
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_minPellets);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Min");
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_maxPellets);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Max");
	stream.textWriteTab(stream.m_tabCount);
	stream.writeFloat(m_spawnThreshold);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Min");
}

/*
 * --INFO--
 * Address:	8012E4A0
 * Size:	000070
 */
void EnemyPelletInfo::read(Stream& stream)
{
	m_color          = stream.readByte();
	m_size           = stream.readByte();
	m_minPellets     = stream.readByte();
	m_maxPellets     = stream.readByte();
	m_spawnThreshold = stream.readFloat();
}
} // namespace Game
