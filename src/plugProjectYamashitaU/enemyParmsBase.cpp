#include "Game/EnemyParmsBase.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "stream.h"

namespace Game {
/**
 * @note Address: 0x8012A244
 * @note Size: 0x94
 */
bool EnemyParmsBase::loadSettingFile(JKRArchive* archive, char* name)
{
	void* handle = archive->getResource(name);
	if (handle) {
		RamStream stream(handle, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		read(stream);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8012A2D8
 * @note Size: 0x24
 */
void EnemyParmsBase::setDebugParm(u32 parm)
{
	mFlags[0].set((u16)parm);
	mFlags[1].set(parm >> 16);
}

/**
 * @note Address: 0x8012A2FC
 * @note Size: 0x24
 */
void EnemyParmsBase::resetDebugParm(u32 parm)
{
	mFlags[0].unset((u16)parm);
	mFlags[1].unset(parm >> 16);
}
} // namespace Game
