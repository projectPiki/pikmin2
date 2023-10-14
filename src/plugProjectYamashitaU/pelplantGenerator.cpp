#include "types.h"
#include "Game/Entities/Pelplant.h"

namespace Game {
namespace Pelplant {

/*
 * --INFO--
 * Address:	801275B0
 * Size:	000098
 */
Generator::Generator()
    : EnemyGeneratorBase("ÉyÉåÉbÉgëê")
{
	mInitialParam.mColor        = PELCOLOR_BLUE;
	mInitialParam.mAmount       = PELLET_NUMBER_ONE;
	mInitialParam.mInitialState = PELPLANTSIZE_Small;
}

/*
 * --INFO--
 * Address:	80127648
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	801276E0
 * Size:	000064
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

/*
 * --INFO--
 * Address:	80127744
 * Size:	0000C8
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
