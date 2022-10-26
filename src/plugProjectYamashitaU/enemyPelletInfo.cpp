#include "types.h"

#include "Game/EnemyPelletInfo.h"
namespace Game {

/*
 * --INFO--
 * Address:	8012E34C
 * Size:	000034
 */
EnemyPelletInfo::EnemyPelletInfo()
{
	m_color       = 3;
	m_size        = 1;
	m_minPellets  = 1;
	m_maxPellets  = 8;
	m_spawnChance = 0.0f;
}

/*
 * --INFO--
 * Address:	8012E380
 * Size:	000120
 */
void EnemyPelletInfo::write(Stream& stream)
{
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(m_color);
	stream.textWriteText("\t\t# %s \r\n", "Pellet color");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(m_size);
	stream.textWriteText("\t\t# %s \r\n", "Pellet size");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(m_minPellets);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Min");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(m_maxPellets);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Max");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeFloat(m_spawnChance);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Min");
}

/*
 * --INFO--
 * Address:	8012E4A0
 * Size:	000070
 */
void EnemyPelletInfo::read(Stream& stream)
{
	m_color       = stream.readByte();
	m_size        = stream.readByte();
	m_minPellets  = stream.readByte();
	m_maxPellets  = stream.readByte();
	m_spawnChance = stream.readFloat();
}
} // namespace Game
