#ifndef _PSGAME_SOUNDTABLE_CATEGORYMGR_H
#define _PSGAME_SOUNDTABLE_CATEGORYMGR_H

/*
    __vt__Q36PSGame10SoundTable11CategoryMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q36PSGame10SoundTable11CategoryMgrFv
*/

namespace PSGame {
namespace SoundTable {
struct CategoryMgr {
	virtual ~CategoryMgr(); // _08 (weak)

	CategoryMgr();
	void initiate(unsigned char);
};
} // namespace SoundTable
} // namespace PSGame

#endif
