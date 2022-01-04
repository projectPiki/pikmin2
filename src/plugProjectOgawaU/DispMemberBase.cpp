#include "Screen/Enums.h"
#include "types.h"
#include "og/Screen/ogScreen.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	8030F31C
	 * Size:	000080
	 */
	bool DispMemberBase::isID(u32 ownerID, u64 memberID)
	{
		u32 thisOwnerID      = getOwnerID();
		u64 thisMemberID = getMemberID();
		if ((ownerID == thisOwnerID) && (memberID == thisMemberID)) {
			return true;
		}
		return false;
	}

	/*
	 * --INFO--
	 * Address:	8030F39C
	 * Size:	000040
	 */
	void DispMemberBase::getMemberName(char* outName)
	{
		og::Screen::TagToName(getMemberID(), outName);
	}

	/*
	 * --INFO--
	 * Address:	8030F3DC
	 * Size:	0000E4
	 */
	bool DispMemberBase::setSubMember(og::Screen::DispMemberBase* newSubMember)
	{
		char ownerName[12];
		char memberName[12];
		char subMemberOwnerName[12];
		char subMemberMemberName[12];
		DispMemberBase* potentialParent = this;
		newSubMember->m_subMember       = nullptr;
		og::Screen::TagToName(getOwnerID(), ownerName);
		og::Screen::TagToName(getMemberID(), memberName);
		for (int i = 10; i != 0; i--) {
			if (potentialParent->m_subMember == nullptr) {
				potentialParent->m_subMember = newSubMember;
				og::Screen::TagToName(newSubMember->getOwnerID(),
				                      subMemberOwnerName);
				og::Screen::TagToName(newSubMember->getMemberID(),
				                      subMemberMemberName);
				return true;
			}
			potentialParent = potentialParent->m_subMember;
		}
		return false;
	}

#if NOPE
	/*
	 * --INFO--
	 * Address:	8030F4C0
	 * Size:	00010C
	 */
	DispMemberBase* DispMemberBase::getSubMember(u32 ownerID,
	                                             u64 memberID)
	{
		// int i = 0;
		// TODO: m_subMember is only fetched once. How does it pull that off?
		// TODO: Recursion?!?
		DispMemberBase* member = m_subMember;
		for (int i = 0; 10 > i; member = member->m_subMember, i++) {
			if (member == nullptr) {
				break;
			}
			u32 mo     = member->getOwnerID();
			u64 mm = member->getMemberID();
			char ownerName[12];
			TagToName(mo, ownerName);
			char memberName[12];
			TagToName(mm, memberName);
			// getMemberName(memberName);
			if (member->isID(ownerID, memberID)) {
				return member;
			}
		}
		return nullptr;
		// int i = 0;
		// u32 memberOwnerID;
		// u64 memberMemberID;
		// DispMemberBase* member = this;
		// do {
		// 	member = member->m_subMember;
		// // for (DispMemberBase* member = m_subMember; i < 10; i++, member =
		// member->m_subMember) { 	if (member == nullptr) { 		break;
		// 	}
		// 	char ownerName[12];
		// 	char memberName[12];
		// 	memberOwnerID = member->getOwnerID();
		// 	memberMemberID = member->getMemberID();
		// 	TagToName(memberOwnerID, ownerName);
		// 	TagToName(memberMemberID, memberName);
		// 	// getMemberName(memberName);
		// 	if (member->isID(ownerID, memberID)) {
		// 		return member;
		// 	}
		// } while (++i < 10);
		// return nullptr;
		/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r29, r4
	mr       r31, r5
	mr       r30, r6
	li       r27, 0

lbl_8030F4E0:
	lwz      r26, 4(r3)
	cmplwi   r26, 0
	beq      lbl_8030F5B4
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r26
	lwz      r12, 0(r26)
	mr       r28, r0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r25, r4
	mr       r4, r28
	mr       r28, r3
	addi     r5, r1, 0x14
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r4, r25
	mr       r3, r28
	addi     r5, r1, 8
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmplw    r29, r28
	bne      lbl_8030F590
	xor      r4, r30, r4
	xor      r0, r31, r3
	or.      r0, r4, r0
	bne      lbl_8030F590
	li       r0, 1
	b        lbl_8030F594

lbl_8030F590:
	li       r0, 0

lbl_8030F594:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8030F5A4
	mr       r3, r26
	b        lbl_8030F5B8

lbl_8030F5A4:
	addi     r27, r27, 1
	mr       r3, r26
	cmpwi    r27, 0xa
	blt      lbl_8030F4E0

lbl_8030F5B4:
	li       r3, 0

lbl_8030F5B8:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030F5CC
	 * Size:	000034
	 */
	void DispMemberBase::setSubMemberAll(void)
	{
		m_subMember = nullptr;
		doSetSubMemberAll();
	}
#endif

} // namespace Screen
} // namespace og

#pragma auto_inline reset
