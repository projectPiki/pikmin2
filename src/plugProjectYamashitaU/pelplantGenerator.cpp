#include "types.h"
#include "Game/Entities/Pelplant.h"

namespace Game {
namespace Pelplant {

/**
 * @note Address: 0x801275B0
 * @note Size: 0x98
 */
Generator::Generator()
    : EnemyGeneratorBase("ペレット草")
{
	mInitialParam.mColor        = PELCOLOR_BLUE;
	mInitialParam.mAmount       = PELLET_NUMBER_ONE;
	mInitialParam.mInitialState = PELPLANTSIZE_Small;
}

/**
 * @note Address: 0x80127648
 * @note Size: 0x8C
 */
void Generator::doRead(Stream& stream)
{
	// if latest version, do the following
	if (mVersion == getLatestVersion()) {
		mInitialParam.mColor        = stream.readByte();
		mInitialParam.mAmount       = stream.readByte();
		mInitialParam.mInitialState = stream.readByte();
		return;
	}
	// if not latest version, use old read function
	doReadOldVersion(stream);
}

/**
 * @note Address: 0x801276E0
 * @note Size: 0x64
 */
void Generator::doReadOldVersion(Stream& stream)
{
	switch (mVersion.getID()) {
	case '0000':
		mInitialParam.mColor        = stream.readByte();
		mInitialParam.mInitialState = stream.readByte();
		break;
	default:
		return;
	}
}

/**
 * @note Address: 0x80127744
 * @note Size: 0xC8
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeByte(mInitialParam.mColor);
	stream.textWriteText("\t\t# %s \r\n", "pellet type");
	stream.textWriteTab(stream.mTabCount);
	stream.writeByte(mInitialParam.mAmount);
	stream.textWriteText("\t\t# %s \r\n", "pellet size");
	stream.textWriteTab(stream.mTabCount);
	stream.writeByte(mInitialParam.mInitialState);
	stream.textWriteText("\t\t# %s \r\n", "size");
}

} // namespace Pelplant
} // namespace Game
