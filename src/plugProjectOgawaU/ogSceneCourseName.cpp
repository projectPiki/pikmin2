#include "og/newScreen/CourseName.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80318050
 * @note Size: 0x3C
 */
CourseName::CourseName() { }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
CourseName::~CourseName() { }

/**
 * @note Address: 0x8031808C
 * @note Size: 0x128
 */
void CourseName::doUserCallBackFunc(Resource::MgrCommand*)
{
	og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(mDispMember);
	if (disp->isID(OWNER_OGA, MEMBER_COURSE_NAME)) {
		mCourseIndex = disp->mCourseIndex;
	} else {
		JUT_PANICLINE(58, "DispMember ERR!\n", 0);
	}

	if (mCourseIndex >= 4)
		mCourseIndex = 0;

	og::newScreen::makeLanguageResName(mName, CourseNumToSZS[mCourseIndex]);
	LoadResource::Arg arg(mName);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	JKRArchive* arc          = nullptr;
	if (node) {
		arc = node->mArchive;
		if (!node->mArchive) {
			JUT_PANICLINE(98, "arc is NULL!!\n");
		}
	} else {
		JUT_PANICLINE(103, "node is NULL!!\n");
	}
	doCreateObjUserCallBackFunc(arc);
}

/**
 * @note Address: 0x803181B4
 * @note Size: 0x4
 */
void CourseName::doCreateObj(JKRArchive*) { }

/**
 * @note Address: 0x803181B8
 * @note Size: 0x60
 */
void CourseName::doCreateObjUserCallBackFunc(JKRArchive* arc)
{
	ObjCourseName* obj = new ObjCourseName("course name screen");
	registObj(obj, arc);
}

const char* CourseNumToSZS[]    = { "res_course_name00.szs", "res_course_name01.szs", "res_course_name02.szs", "res_course_name03.szs" };
const char* bloFileNameCourse[] = { "course_name00.blo", "course_name01.blo", "course_name02.blo", "course_name03.blo" };

char* animFile_Course00[] = { "course_name00.bck", "course_name00.btk", "course_name00.bpk", 0 };
char* animFile_Course01[] = { "course_name01.bck", "course_name01.btk", "course_name01.bpk", 0 };
char* animFile_Course02[] = { "course_name02.bck", "course_name02.btk", "course_name02.bpk", 0 };
char* animFile_Course03[] = { "course_name03.bck", "course_name03.btk", "course_name03.bpk", 0 };

char** animFileTableCourse[] = { animFile_Course00, animFile_Course01, animFile_Course02, animFile_Course03 };

} // namespace newScreen
} // namespace og
