#include "Game/EnemyStone.h"
#include "stream.h"
#include "Vector3.h"
#include "Dolphin/math.h"

namespace Game {
namespace EnemyStone {
/*
 * --INFO--
 * Address:	80128108
 * Size:	000164
 */
void Info::setup(Stream& stream)
{
	m_infoCnt = stream.readByte();
	m_infoArr = new ObjInfo[m_infoCnt];

	for (u8 i = 0; i < m_infoCnt; i++) {
		m_infoArr[i].m_name = stream.readString(nullptr, 0);
		m_infoArr[i]._04    = stream.readInt();

		Vector3f position;
		position.read(stream);

		Vector3f rotation;
		rotation.read(stream);
		rotation.x = PI * (DEG2RAD * rotation.x);
		rotation.y = PI * (DEG2RAD * rotation.y);
		rotation.z = PI * (DEG2RAD * rotation.z);

		Vector3f scale;
		scale.read(stream);
		m_infoArr[i].m_modelMatrix.makeSRT(scale, rotation, position);
	}
}

/*
 * --INFO--
 * Address:	8012826C
 * Size:	000014
 */
ObjInfo::ObjInfo()
    : m_name(nullptr)
    , _04(-1)
{
}
} // namespace EnemyStone
} // namespace Game
