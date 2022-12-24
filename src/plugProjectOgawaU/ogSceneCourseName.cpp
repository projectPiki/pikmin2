#include "og/newScreen/CourseName.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80318050
 * Size:	00003C
 */
CourseName::CourseName() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
CourseName::~CourseName() { }

/*
 * --INFO--
 * Address:	8031808C
 * Size:	000128
 */
void CourseName::doUserCallBackFunc(Resource::MgrCommand*)
{
	og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(m_dispMember);
	if (disp->isID(OWNER_OGA, MEMBER_COURSE_NAME)) {
		m_courseIndex = disp->m_courseIndex;
	} else {
		JUT_PANICLINE(58, "DispMember ERR!\n", 0);
	}

	if (m_courseIndex >= 4)
		m_courseIndex = 0;

	og::newScreen::makeLanguageResName(m_name, CourseNumToSZS[m_courseIndex]);
	LoadResource::Arg arg(m_name);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	JKRArchive* arc          = nullptr;
	if (node) {
		arc = node->m_archive;
		if (!node->m_archive) {
			JUT_PANICLINE(98, "arc is NULL!!\n");
		}
	} else {
		JUT_PANICLINE(103, "node is NULL!!\n");
	}
	doCreateObjUserCallBackFunc(arc);
}

/*
 * --INFO--
 * Address:	803181B4
 * Size:	000004
 */
void CourseName::doCreateObj(JKRArchive*) { }

/*
 * --INFO--
 * Address:	803181B8
 * Size:	000060
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
