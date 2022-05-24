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
    , m_pelletType(0)
    , m_pelletSize(1)
    , m_size(0)
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
	if (m_version == getLatestVersion()) {
		m_pelletType = stream.readByte();
		m_pelletSize = stream.readByte();
		m_size       = stream.readByte();
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
	switch (m_version.getID()) {
	case '0000':
		m_pelletType = stream.readByte();
		m_size       = stream.readByte();
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
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_pelletType);
	stream.textWriteText("\t\t# %s \r\n", "pellet type");
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_pelletSize);
	stream.textWriteText("\t\t# %s \r\n", "pellet size");
	stream.textWriteTab(stream.m_tabCount);
	stream.writeByte(m_size);
	stream.textWriteText("\t\t# %s \r\n", "size");
}

} // namespace Pelplant
} // namespace Game
