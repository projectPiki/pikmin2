#include "Game/EnemyParmsBase.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "stream.h"

namespace Game {
/*
 * --INFO--
 * Address:	8012A244
 * Size:	000094
 */
bool EnemyParmsBase::loadSettingFile(JKRArchive* archive, char* name)
{
	void* handle = archive->getResource(name);
	if (handle) {
		RamStream stream(handle, -1);
		stream.resetPosition(true, 1);
		read(stream);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8012A2D8
 * Size:	000024
 */
void EnemyParmsBase::setDebugParm(u32 parm)
{
	mFlags[0].set((u16)parm);
	mFlags[1].set(parm >> 16);
}

/*
 * --INFO--
 * Address:	8012A2FC
 * Size:	000024
 */
void EnemyParmsBase::resetDebugParm(u32 parm)
{
	mFlags[0].unset((u16)parm);
	mFlags[1].unset(parm >> 16);
}
} // namespace Game
