#include "Dolphin/stl.h"
#include "IDelegate.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/TColor.h"
#include "Screen/Enums.h"
#include "Screen/SceneInfoList.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/ogScreen.h"
#include "og/newScreen/ogUtil.h"
#include "Screen/Bases.h"
#include "Screen/screenMgr.h"
#include "System.h"
#include "types.h"

namespace Screen {

/*
 * --INFO--
 * Address:	80451790
 * Size:	000134
 */
SceneBase::SceneBase()
    : m_controller(nullptr)
    , m_screenMgr(nullptr)
    , _10C(this, &SceneBase::userCallBackFunc)
    , m_stateID(Unknown0)
    , m_command("no name")
    , m_objMgr(nullptr)
{
	m_objMgr     = new ObjMgrBase();
	m_dispMember = reinterpret_cast<og::Screen::DispMemberBase*>(new u8[0x400]);
	P2ASSERTLINE(113, m_dispMember != nullptr);
	og::Screen::DispMemberDummy dummy;
	memcpy(m_dispMember, (void*)&dummy, sizeof(dummy));
	sprintf(m_name, "???");
}

/*
 * --INFO--
 * Address:	804518C4
 * Size:	000030
 */
IObjBase* SceneBase::searchObj(char* name) { return m_objMgr->search(this, name); }

/*
 * --INFO--
 * Address:	804518F4
 * Size:	000038
 */
void SceneBase::destroy(void)
{
	if (m_command._30 != -1) {
		gResMgr2D->destroy(&m_command);
	}
}

/*
 * --INFO--
 * Address:	8045192C
 * Size:	0000BC
 */
void SceneBase::create(void)
{
	if (m_command._30 == -1) {
		m_someTime    = sys->getTime();
		m_command._B0 = &_10C;
		if (getResName()[0] != '\0') {
			og::newScreen::makeLanguageResName(m_name, getResName());
			gResMgr2D->loadResource(&m_command, m_name, true);
		} else {
			gResMgr2D->loadResource(&m_command, "", true);
		}
		m_stateID = Unknown1;
	}
}

/*
 * --INFO--
 * Address:	804519E8
 * Size:	00015C
 */
void SceneBase::update()
{
	switch (m_stateID) {
	case Unknown0:
		break;
	case Unknown1:
		if (gResMgr2D->sync(&m_command, false) != false) {
			if (getResName()[0] != '\0') {
				void* res = m_command.getResource();
				P2ASSERTLINE(194, res != nullptr);
				m_command.becomeCurrentHeap();
				JKRArchive* archive = JKRArchive::mount(res, nullptr, JKRArchive::EMD_Unk1);
				P2ASSERTLINE(197, archive != nullptr);
				createObj(archive);
				m_command.releaseCurrentHeap();
			}
			m_stateID = Unknown2;
			sys->getTime();
		}
		break;
	case Unknown2:
		break;
	case Unknown3:
		if (updateActive()) {
			m_stateID = Unknown4;
		}
		break;
	case Unknown4:
		break;
	default:
		JUTException::panic_f(__FILE__, 226, "P2Assert");
		break;
	}
}

/*
 * --INFO--
 * Address:	80451B44
 * Size:	000040
 */
bool SceneBase::updateActive()
{
	doUpdateActive();
	return m_objMgr->update();
}

/*
 * --INFO--
 * Address:	80451B84
 * Size:	000004
 */
void SceneBase::doUpdateActive() { }

/*
 * @note `break;` has a different result from `return;` here.
 * --INFO--
 * Address:	80451B88
 * Size:	000090
 */
void SceneBase::draw(Graphics& gfx)
{
	switch (m_stateID) {
	case Unknown0:
	case Unknown1:
	case Unknown2:
		// return;
		break;
	case Unknown3:
	case Unknown4:
		setPort(gfx);
		m_objMgr->draw(gfx);
		// return;
		break;
	default:
		P2ASSERTLINE(285, false);
	}
}

/*
 * --INFO--
 * Address:	80451C18
 * Size:	000050
 */
bool SceneBase::start(Screen::StartSceneArg* arg)
{
	if (m_stateID != Unknown0 && m_stateID != Unknown1) {
		m_stateID = Unknown3;
		return doStart(arg);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	80451C68
 * Size:	000028
 */
bool SceneBase::doStart(Screen::StartSceneArg* arg)
{
	m_objMgr->start(arg);
	return true;
}

/*
 * --INFO--
 * Address:	80451C90
 * Size:	000068
 */
bool SceneBase::end(Screen::EndSceneArg* arg)
{
	bool result;
	if (m_stateID == Unknown0 || m_stateID == Unknown2) {
		m_stateID = Unknown4;
		result    = true;
	} else if (m_stateID != Unknown1) {
		result = doEnd(arg);
	} else {
		result = false;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80451CF8
 * Size:	000024
 */
bool SceneBase::doEnd(Screen::EndSceneArg* arg) { return m_objMgr->end(arg); }

/*
 * --INFO--
 * Address:	80451D1C
 * Size:	00002C
 */
void SceneBase::userCallBackFunc(Resource::MgrCommand* command) { doUserCallBackFunc(command); }

/*
 * --INFO--
 * Address:	80451D48
 * Size:	00002C
 */
void SceneBase::createObj(JKRArchive* archive) { doCreateObj(archive); }

/*
 * --INFO--
 * Address:	80451D74
 * Size:	00005C
 */
void SceneBase::registObj(Screen::ObjBase* obj, JKRArchive* archive)
{
	m_objMgr->registObj(obj, this);
	obj->create(archive);
}

/*
 * --INFO--
 * Address:	80451DD0
 * Size:	000078
 */
bool SceneBase::confirmSetScene(Screen::SetSceneArg& arg) { return (m_objMgr->confirmSetScene(arg) && doConfirmSetScene(arg)); }

/*
 * --INFO--
 * Address:	80451E48
 * Size:	000078
 */
bool SceneBase::confirmStartScene(Screen::StartSceneArg* arg) { return (m_objMgr->confirmStartScene(arg) && doConfirmStartScene(arg)); }

/*
 * --INFO--
 * Address:	80451EC0
 * Size:	000070
 */
bool SceneBase::confirmEndScene(Screen::EndSceneArg* arg) { return (m_objMgr->confirmEndScene(arg) && doConfirmEndScene(arg)); }

/*
 * setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
 * --INFO--
 * Address:	80451F30
 * Size:	000030
 */
void SceneBase::setScene(Screen::SetSceneArg& arg) { m_screenMgr->setScene(arg); }

/*
 * startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
 * --INFO--
 * Address:	80451F60
 * Size:	000030
 */
void SceneBase::startScene(Screen::StartSceneArg* arg) { m_screenMgr->startScene(arg); }

/*
 * endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
 * --INFO--
 * Address:	80451F90
 * Size:	000030
 */
void SceneBase::endScene(Screen::EndSceneArg* arg) { m_screenMgr->endScene(arg); }

/*
 * setBackupScene__Q26Screen9SceneBaseFv
 * --INFO--
 * Address:	80451FC0
 * Size:	000100
 */
bool SceneBase::setBackupScene()
{

	SceneInfoList* list = (SceneInfoList*)m_screenMgr->_60.m_child;
	Mgr* mgr;
	bool result = false;

	if (list) {
		SetSceneArg arg(list->m_sceneType, (og::Screen::DispMemberBase*)list->m_dispMemberBuffer, 0, true);
		doSetBackupScene(arg);

		result = m_screenMgr->setScene(arg);
		if (result) {
			mgr  = m_screenMgr;
			list = (SceneInfoList*)mgr->_60.m_child;
			P2ASSERTLINE(329, list);
			list->del();
			mgr->m_sceneInfoList.add(list);
		}
	}
	return result;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	li       r29, 0
	lwz      r4, 0x108(r3)
	lwz      r5, 0x70(r4)
	cmplwi   r5, 0
	beq      lbl_804520A0
	lwz      r7, 0x18(r5)
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r0, r5, 0x1c
	li       r6, 0
	li       r5, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r7, 0xc(r1)
	stb      r6, 0x10(r1)
	stb      r5, 0x11(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x108(r30)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	beq      lbl_804520A0
	lwz      r31, 0x108(r30)
	lwz      r30, 0x70(r31)
	cmplwi   r30, 0
	bne      lbl_8045208C
	lis      r3, lbl_8049B8BC@ha
	lis      r5, lbl_8049B8B0@ha
	addi     r3, r3, lbl_8049B8BC@l
	li       r4, 0x149
	addi     r5, r5, lbl_8049B8B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045208C:
	mr       r3, r30
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r31, 0x78
	bl       add__5CNodeFP5CNode

lbl_804520A0:
	lwz      r0, 0x34(r1)
	mr       r3, r29
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
 * --INFO--
 * Address:	804520C0
 * Size:	000130
 */
bool SceneBase::setDispMember(og::Screen::DispMemberBase* disp)
{
	bool result = false;
	if (disp->isID(getOwnerID(), getMemberID()) || disp->getSubMember(getOwnerID(), getMemberID())) {
		memcpy(m_dispMember, (void*)disp, disp->getSize());
		result = true;
	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		result = setDefaultDispMember();
	}

	return result;
}

/*
 * --INFO--
 * Address:	804521F0
 * Size:	000040
 */
int SceneBase::getFinishState() { return (m_stateID == 4) ? doGetFinishState() : -2; }

/*
 * --INFO--
 * Address:	80452230
 * Size:	000054
 */
Controller* SceneBase::getGamePad() const
{
	Mgr* mgr = m_screenMgr;
	mgr->checkController();
	return mgr->m_controller;
}

/*
 * --INFO--
 * Address:	80452284
 * Size:	000044
 */
void SceneBase::setColorBG(u8 r, u8 g, u8 b, u8 a)
{
	JUtility::TColor color(r, g, b, a);
	m_screenMgr->setColorBG(color);
}

/*
 * --INFO--
 * Address:	804522C8
 * Size:	000004
 */
void Mgr::setColorBG(JUtility::TColor&) { }

/*
 * --INFO--
 * Address:	804522CC
 * Size:	000004
 */
void Mgr::setBGMode(int) { }

} // namespace Screen
