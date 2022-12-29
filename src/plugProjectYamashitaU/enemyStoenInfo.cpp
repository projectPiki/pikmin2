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
	m_length  = stream.readByte();
	m_objList = new ObjInfo[m_length];

	for (u8 i = 0; i < m_length; i++) {
		m_objList[i].m_name = stream.readString(nullptr, 0);
		m_objList[i].m_size = stream.readInt();

		Vector3f position;
		position.read(stream);

		Vector3f rotation;
		rotation.read(stream);
		rotation.x = PI * (DEG2RAD * rotation.x);
		rotation.y = PI * (DEG2RAD * rotation.y);
		rotation.z = PI * (DEG2RAD * rotation.z);

		Vector3f scale;
		scale.read(stream);
		m_objList[i].m_modelMatrix.makeSRT(scale, rotation, position);
	}
}

/*
 * --INFO--
 * Address:	8012826C
 * Size:	000014
 */
ObjInfo::ObjInfo()
    : m_name(nullptr)
    , m_size(-1)
{
}
} // namespace EnemyStone
} // namespace Game
