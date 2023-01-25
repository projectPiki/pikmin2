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
    , mPelletType(0)
    , mPelletSize(1)
    , mSize(0)
{
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
		mPelletType = stream.readByte();
		mPelletSize = stream.readByte();
		mSize       = stream.readByte();
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
		mPelletType = stream.readByte();
		mSize       = stream.readByte();
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
	stream.writeByte(mPelletType);
	stream.textWriteText("\t\t# %s \r\n", "pellet type");
	stream.textWriteTab(stream.mTabCount);
	stream.writeByte(mPelletSize);
	stream.textWriteText("\t\t# %s \r\n", "pellet size");
	stream.textWriteTab(stream.mTabCount);
	stream.writeByte(mSize);
	stream.textWriteText("\t\t# %s \r\n", "size");
}

} // namespace Pelplant
} // namespace Game
