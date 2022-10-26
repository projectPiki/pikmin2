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
	u32 thisOwnerID  = getOwnerID();
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
void DispMemberBase::getMemberName(char* outName) { og::Screen::TagToName(getMemberID(), outName); }

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
			og::Screen::TagToName(newSubMember->getOwnerID(), subMemberOwnerName);
			og::Screen::TagToName(newSubMember->getMemberID(), subMemberMemberName);
			return true;
		}
		potentialParent = potentialParent->m_subMember;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8030F4C0
 * Size:	00010C
 */
DispMemberBase* DispMemberBase::getSubMember(u32 ownerID, u64 memberID)
{
	DispMemberBase* member = this;
	for (int i = 0; i < 10; i++) {
		DispMemberBase* subMember = member->m_subMember;

		if (subMember == nullptr) {
			break;
		}

		char ownerName[12];
		char memberName[12];
		u32 mo = subMember->getOwnerID();
		u64 mm = subMember->getMemberID();
		TagToName(mo, ownerName);
		TagToName(mm, memberName);
		if (subMember->isID(ownerID, memberID)) {
			return subMember;
		}
		member = subMember;
	}
	return nullptr;
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

} // namespace Screen
} // namespace og
