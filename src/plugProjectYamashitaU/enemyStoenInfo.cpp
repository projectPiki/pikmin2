#include "Game/EnemyStone.h"
#include "stream.h"
#include "Vector3.h"
#include "math.h"

namespace Game {
namespace EnemyStone {
/**
 * @note Address: 0x80128108
 * @note Size: 0x164
 */
void Info::setup(Stream& stream)
{
	mLength  = stream.readByte();
	mObjList = new ObjInfo[mLength];

	for (u8 i = 0; i < mLength; i++) {
		mObjList[i].mName = stream.readString(nullptr, 0);
		mObjList[i].mSize = stream.readInt();

		Vector3f position;
		position.read(stream);

		Vector3f rotation;
		rotation.read(stream);
		rotation.x = PI * (DEG2RAD * rotation.x);
		rotation.y = PI * (DEG2RAD * rotation.y);
		rotation.z = PI * (DEG2RAD * rotation.z);

		Vector3f scale;
		scale.read(stream);
		mObjList[i].mModelMatrix.makeSRT(scale, rotation, position);
	}
}

/**
 * @note Address: 0x8012826C
 * @note Size: 0x14
 */
ObjInfo::ObjInfo()
    : mName(nullptr)
    , mSize(-1)
{
}
} // namespace EnemyStone
} // namespace Game
