#include "Screen/Enums.h"
#include "types.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030F31C
 * @note Size: 0x80
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

/**
 * @note Address: 0x8030F39C
 * @note Size: 0x40
 */
void DispMemberBase::getMemberName(char* outName) { og::Screen::TagToName(getMemberID(), outName); }

/**
 * @note Address: 0x8030F3DC
 * @note Size: 0xE4
 */
bool DispMemberBase::setSubMember(og::Screen::DispMemberBase* newSubMember)
{
	char ownerName[12];
	char memberName[12];
	char subMemberOwnerName[12];
	char subMemberMemberName[12];
	DispMemberBase* potentialParent = this;
	newSubMember->mSubMember        = nullptr;
	og::Screen::TagToName(getOwnerID(), ownerName);
	og::Screen::TagToName(getMemberID(), memberName);
	for (int i = 10; i != 0; i--) {
		if (potentialParent->mSubMember == nullptr) {
			potentialParent->mSubMember = newSubMember;
			og::Screen::TagToName(newSubMember->getOwnerID(), subMemberOwnerName);
			og::Screen::TagToName(newSubMember->getMemberID(), subMemberMemberName);
			return true;
		}
		potentialParent = potentialParent->mSubMember;
	}
	return false;
}

/**
 * @note Address: 0x8030F4C0
 * @note Size: 0x10C
 */
DispMemberBase* DispMemberBase::getSubMember(u32 ownerID, u64 memberID)
{
	DispMemberBase* member = this;
	for (int i = 0; i < 10; i++) {
		DispMemberBase* subMember = member->mSubMember;

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

/**
 * @note Address: 0x8030F5CC
 * @note Size: 0x34
 */
void DispMemberBase::setSubMemberAll()
{
	mSubMember = nullptr;
	doSetSubMemberAll();
}

} // namespace Screen
} // namespace og
