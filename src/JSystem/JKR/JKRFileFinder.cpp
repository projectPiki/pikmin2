#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "types.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRFileFinder.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JKRDvdFinder
    __vt__12JKRDvdFinder:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRDvdFinderFv
        .4byte findNextFile__12JKRDvdFinderFv
    .global __vt__12JKRArcFinder
    __vt__12JKRArcFinder:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRArcFinderFv
        .4byte findNextFile__12JKRArcFinderFv
*/

/*
 * --INFO--
 * Address:	80022ADC
 * Size:	00008C
 */
JKRArcFinder::JKRArcFinder(JKRArchive* archive, long p2, long p3)
    : JKRFileFinder()
    , m_archive(archive)
{
	_10 = (bool)p3;
	_18 = p2;
	_1C = p2 + p3 + -1;
	_20 = _18;
	findNextFile();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r9, __vt__13JKRFileFinder@ha
	lis      r8, __vt__12JKRArcFinder@ha
	stw      r0, 0x14(r1)
	addi     r0, r6, -1
	neg      r7, r6
	addi     r9, r9, __vt__13JKRFileFinder@l
	stw      r31, 0xc(r1)
	andc     r6, r7, r6
	addi     r7, r8, __vt__12JKRArcFinder@l
	add      r0, r5, r0
	stw      r9, 0xc(r3)
	li       r9, 0
	srwi     r6, r6, 0x1f
	mr       r31, r3
	stb      r9, 0x10(r3)
	stb      r9, 0x11(r3)
	stw      r7, 0xc(r3)
	stw      r4, 0x14(r3)
	stb      r6, 0x10(r3)
	stw      r5, 0x18(r3)
	stw      r0, 0x1c(r3)
	lwz      r0, 0x18(r3)
	stw      r0, 0x20(r3)
	lwz      r12, 0xc(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022B68
 * Size:	0000AC
 */
bool JKRArcFinder::findNextFile()
{
	if (_10) {
		_10 = (_20 <= _1C);
		if (_10) {
			JKRArchive::SDirEntry entry;
			_10        = m_archive->getDirEntry(&entry, _20);
			m_fileName = entry._04;
			_04        = _20;
			_08        = entry._02;
			_0A        = entry._00;
			_11        = _0A >> 1 & 1;
			_20++;
		}
	}
	return _10;
}

/*
 * --INFO--
 * Address:	80022C14
 * Size:	000088
 */
JKRDvdFinder::JKRDvdFinder(const char* p1)
    : JKRFileFinder()
{
	_20 = DVDOpenDir(const_cast<char*>(p1), &m_fstEntry);
	_10 = _20;
	findNextFile();
}

/*
 * --INFO--
 * Address:	80022C9C
 * Size:	000080
 * __dt__12JKRDvdFinderFv
 */
// JKRDvdFinder::~JKRDvdFinder()
// {
// }

inline u16 findNextFileHelper(JKRDvdFinder* finder, OSFstEntry& entry)
{
	finder->_11        = (bool)entry.m_nextEntryNum;
	finder->m_fileName = entry.m_fileNameMaybe;
	finder->_04        = entry.m_entryNum;
	finder->_08        = 0;
	return finder->_11;
	// if (finder->_11) {
	// 	return 2;
	// }
	// return 1;
}

/*
 * --INFO--
 * Address:	80022D1C
 * Size:	0000A4
 * findNextFile__12JKRDvdFinderFv
 */
bool JKRDvdFinder::findNextFile()
{
	if (_10) {
		OSFstEntry entry;
		_10 = DVDReadDir(&m_fstEntry, &entry);
		if (_10) {
			// _0A = 1;
			// _0A = findNextFileHelper(this, entry) ? 2 : 1;
			u16 v1     = 1;
			_11        = (bool)entry.m_nextEntryNum;
			m_fileName = entry.m_fileNameMaybe;
			_04        = entry.m_entryNum;
			_08        = 0;
			// _0A = (_11) ? 2 : v1;
			if (_11) {
				// _0A = 2;
				v1 = 2;
			}
			_0A = v1;
		}
	}
	return _10;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_80022DA8
	addi     r3, r31, 0x14
	addi     r4, r1, 8
	bl       DVDReadDir
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x10(r31)
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80022DA8
	lwz      r5, 0xc(r1)
	li       r0, 0
	li       r3, 1
	neg      r4, r5
	or       r4, r4, r5
	srwi     r4, r4, 0x1f
	stb      r4, 0x11(r31)
	lwz      r4, 0x10(r1)
	stw      r4, 0(r31)
	lwz      r4, 8(r1)
	stw      r4, 4(r31)
	sth      r0, 8(r31)
	lbz      r0, 0x11(r31)
	cmplwi   r0, 0
	beq      lbl_80022DA4
	li       r3, 2

lbl_80022DA4:
	sth      r3, 0xa(r31)

lbl_80022DA8:
	lwz      r0, 0x24(r1)
	lbz      r3, 0x10(r31)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022DC0
 * Size:	00005C
 * __dt__12JKRArcFinderFv
 */
// JKRArcFinder::~JKRArcFinder()
// {
// }
