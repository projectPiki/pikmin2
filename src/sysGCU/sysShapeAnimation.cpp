/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_sysShapeAnimation_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AC40
    lbl_8049AC40:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x73797353
        .4byte 0x68617065
        .4byte 0x4D6F6465
        .4byte 0x6C000000
    .global lbl_8049AC5C
    lbl_8049AC5C:
        .4byte 0x73797353
        .4byte 0x68617065
        .4byte 0x416E696D
        .4byte 0x6174696F
        .4byte 0x6E2E6370
        .4byte 0x70000000
    .global lbl_8049AC74
    lbl_8049AC74:
        .4byte 0x616E696D
        .4byte 0x44617461
        .4byte 0x206E756C
        .4byte 0x6C210A00
        .4byte 0x6E616E64
        .4byte 0x617E7E7E
        .4byte 0x7E3F0A00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECBF0
    lbl_804ECBF0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516270
    lbl_80516270:
        .skip 0x4
    .global lbl_80516274
    lbl_80516274:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805208F8
    lbl_805208F8:
        .4byte 0x25732F25
        .4byte 0x73000000
    .global lbl_80520900
    lbl_80520900:
        .4byte 0x25730000
        .4byte 0x00000000
*/

#include "SysShape/AnimInfo.h"
#include "SysShape/AnimMgr.h"
#include "SysShape/Model.h"

#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JKR/JKRFileLoader.h"

#include "stream.h"
#include "nans.h"

namespace SysShape {
static const char BLAH_[] = "\0\0\0\0\0\0\0\0";
static const char BLAH[]  = "sysShapeModel";

/*
 * --INFO--
 * Address:	8043DCDC
 * Size:	000080
 */
void AnimInfo::attach(J3DModelData* modelData, void* animData)
{
	JUT_ASSERTLINE(64, animData != nullptr, "animData null!\n");

	m_anm  = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(animData);
	m_calc = J3DNewMtxCalcAnm(modelData->m_jointTree.m_08 & 0xf, m_anm);
}

/*
 * --INFO--
 * Address:	8043DD5C
 * Size:	000120
 */
AnimMgr* AnimMgr::load(JKRFileLoader* a1, char* a2, J3DModelData* a3, JKRFileLoader* a4, char* a5)
{
	void* resource = a1->getResource(a2);
	if (!resource) {
		return nullptr;
	}

	RamStream rs(resource, -1);
	rs.resetPosition(true, 1);

	AnimMgr* newMgr = new AnimMgr();
	newMgr->load(rs, a3, a4, a5);

	return newMgr;
}

/*
 * --INFO--
 * Address:	8043DE7C
 * Size:	000110
 */
void AnimMgr::load(Stream& s, J3DModelData* md, JKRFileLoader* fl, char* folderName)
{
	read(s);

	for (AnimInfo* c = (AnimInfo*)m_animInfo.m_child; c; c = (AnimInfo*)c->m_next) {
		char path[512];
		void* animData;

		if (folderName) {
			sprintf(path, "%s/%s", folderName, c->m_name);
			animData = fl->getResource(path);
		} else {
			sprintf(path, "%s", c->m_name);
			animData = JKRFileLoader::getGlbResource(c->m_name, fl);
		}

		JUT_ASSERTLINE(119, animData, "nanda~~~~?\n");
		JUT_ASSERTLINE(64, animData, "animData null!\n");

		c->m_anm  = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(animData);
		c->m_calc = J3DNewMtxCalcAnm(md->m_jointTree.m_08 & 0xF, c->m_anm);
	}
}

/*
 * --INFO--
 * Address:	8043DF8C
 * Size:	0000D8
 */
void AnimMgr::read(Stream& s)
{
	const int length = s.readInt();

	for (int i = 0; i < length; i++) {
		AnimInfo* info = new AnimInfo(this);

		info->read(s);
		info->m_id  = m_count;
		info->m_mgr = this;

		m_animInfo.add(info);
		m_count++;
	}
}

/*
 * --INFO--
 * Address:	8043E064
 * Size:	0000F8
 */
void AnimMgr::connectBasArc(char* a2, char* a3, JKRFileLoader* a4)
{
	for (AnimInfo* c = (AnimInfo*)m_animInfo.m_child; c; c = (AnimInfo*)c->m_next) {
		char path[512];

		if (a2) {
			sprintf(path, "%s/%s", a2, c->m_name);
		} else {
			sprintf(path, "%s", c->m_name);
		}

		for (int i = 0; i < strlen(path); i++) {
			if (path[i] == '.') {
				char* fnEnd = &path[i];
				fnEnd[1]    = 'b';
				fnEnd[2]    = 'a';
				fnEnd[3]    = 's';
				fnEnd[4]    = '\0';
				break;
			}
		}

		void* basFile = a4->getResource(path);
		if (basFile) {
			c->m_basFile = (JAIAnimeFrameSoundData*)basFile;
		}
	}
}

/*
 * --INFO--
 * Address:	8043E15C
 * Size:	000054
 */
void AnimMgr::registerSoundViewer(PSGame::SoundCreatureMgr* scm)
{
	for (AnimInfo* c = (AnimInfo*)m_animInfo.m_child; c; c = (AnimInfo*)c->m_next) {
		scm->registerAnime(c->m_anm, c->m_name);
	}
}

} // namespace SysShape