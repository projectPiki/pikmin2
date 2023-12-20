#include "types.h"

#include "Game/EnemyPelletInfo.h"
namespace Game {

/**
 * @note Address: 0x8012E34C
 * @note Size: 0x34
 */
EnemyPelletInfo::EnemyPelletInfo()
{
	mColor       = 3;
	mSize        = 1;
	mMinPellets  = 1;
	mMaxPellets  = 8;
	mSpawnChance = 0.0f;
}

/**
 * @note Address: 0x8012E380
 * @note Size: 0x120
 */
void EnemyPelletInfo::write(Stream& stream)
{
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(mColor);
	stream.textWriteText("\t\t# %s \r\n", "Pellet color");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(mSize);
	stream.textWriteText("\t\t# %s \r\n", "Pellet size");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(mMinPellets);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Min");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeByte(mMaxPellets);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Max");
	stream.writePadding(STREAM_MODE_TEXT);
	stream.writeFloat(mSpawnChance);
	stream.textWriteText("\t\t# %s \r\n", "Pellet Min");
}

/**
 * @note Address: 0x8012E4A0
 * @note Size: 0x70
 */
void EnemyPelletInfo::read(Stream& stream)
{
	mColor       = stream.readByte();
	mSize        = stream.readByte();
	mMinPellets  = stream.readByte();
	mMaxPellets  = stream.readByte();
	mSpawnChance = stream.readFloat();
}
} // namespace Game
