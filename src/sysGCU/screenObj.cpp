#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/J2D/J2DPrint.h"

namespace Screen {

/*
 * --INFO--
 * Address:	80453AE8
 * Size:	000090
 */
ObjBase::ObjBase()
    : IObjBase()
{
	mObjState = ObjState_Inactive;
	mOwner    = nullptr;
}

/*
 * --INFO--
 * Address:	80453B78
 * Size:	00002C
 */
void ObjBase::create(JKRArchive* archive) { doCreate(archive); }

/*
 * --INFO--
 * Address:	80453BA4
 * Size:	0000AC
 */
bool ObjBase::start(StartSceneArg const* arg)
{
	bool ret = false;
	switch (mObjState) {
	case ObjState_Inactive:
		if (doStart(arg)) {
			mObjState = ObjState_Fadein;
			ret       = true;
		}
		break;
	case ObjState_Fadein:
		ret = true;
		break;
	case ObjState_Standard:
	case ObjState_Fadeout:
		break;
	default:
		P2ASSERTLINE(97, false);
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80453C50
 * Size:	000138
 */
bool ObjBase::end(EndSceneArg const* arg)
{
	bool ret = false;
	switch (mObjState) {
	case 2:
		if (doEnd(arg)) {
			doUpdateFinish();
			if (arg && arg->_04) {
				doUpdateFadeoutFinish();
				mObjState = ObjState_Inactive;
			} else {
				mObjState = ObjState_Fadeout;
			}
			ret = true;
		}
		break;
	case ObjState_Inactive:
		ret = true;
		break;
	case ObjState_Fadein:
		break;
	case ObjState_Fadeout:
		if (arg && arg->_04) {
			doUpdateFadeoutFinish();
			mObjState = ObjState_Inactive;
		}
		ret = true;
		break;
	default:
		JUT_PANICLINE(145, "P2Assert");
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80453D88
 * Size:	000110
 */
bool ObjBase::update()
{
	bool ret = false;
	switch (mObjState) {
	case ObjState_Inactive:
		ret = true;
		break;
	case ObjState_Fadein:
		if (doUpdateFadein()) {
			doUpdateFadeinFinish();
			mObjState = ObjState_Standard;
		}
		break;
	case ObjState_Standard:
		if (doUpdate()) {
			doUpdateFinish();
			mObjState = ObjState_Fadeout;
		}
		break;
	case ObjState_Fadeout:
		if (doUpdateFadeout()) {
			doUpdateFadeoutFinish();
			mObjState = ObjState_Inactive;
		}
		break;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80453E98
 * Size:	000038
 */
void ObjBase::draw(Graphics& gfx)
{
	if (mObjState != ObjState_Inactive) {
		doDraw(gfx);
	}
}

/*
 * --INFO--
 * Address:	80453ED0
 * Size:	0000D8
 */
void ObjBase::doDraw(Graphics& gfx)
{
	J2DPrint print(JFWSystem::systemFont, 0.0f);
	print.initiate();

	print.mCharColor.set(JUtility::TColor(255, 255, 255, 255));
	print.mGradientColor.set(JUtility::TColor(255, 255, 255, 255));
	print.print(100.0f, 100.0f, mName);
}

/*
 * --INFO--
 * Address:	80453FA8
 * Size:	00000C
 */
og::Screen::DispMemberBase* ObjBase::getDispMember() { return mOwner->mDispMember; }

/*
 * --INFO--
 * Address:	80453FB4
 * Size:	00002C
 */
bool ObjBase::confirmSetScene(SetSceneArg& arg) { return doConfirmSetScene(arg); }

/*
 * --INFO--
 * Address:	80453FE0
 * Size:	00002C
 */
bool ObjBase::confirmStartScene(StartSceneArg* arg) { return doConfirmStartScene(arg); }

/*
 * --INFO--
 * Address:	8045400C
 * Size:	000034
 */
bool ObjBase::confirmEndScene(EndSceneArg* arg) { return doConfirmEndScene(arg); }

/*
 * --INFO--
 * Address:	80454040
 * Size:	000030
 */
Controller* ObjBase::getGamePad() const { return getOwner()->getGamePad(); }

/*
 * --INFO--
 * Address:	80454070
 * Size:	000044
 */
ObjMgrBase::ObjMgrBase()
    : mNode()
{
	mNode.clearRelations();
}

/*
 * --INFO--
 * Address:	804540B4
 * Size:	000058
 */
void ObjMgrBase::registObj(IObjBase* obj, SceneBase* scene)
{
	obj->setOwner(scene);
	mNode.add(obj);
}

/*
 * update__Q26Screen10ObjMgrBaseFv
 * --INFO--
 * Address:	8045410C
 * Size:	000068
 */
bool ObjMgrBase::update()
{
	bool result   = true;
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (!obj->update()) {
			result = false;
		}
		obj = next;
	}
	return result;
}

/*
 * draw__Q26Screen10ObjMgrBaseFR8Graphics
 * --INFO--
 * Address:	80454174
 * Size:	00005C
 */
void ObjMgrBase::draw(Graphics& gfx)
{
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		obj->draw(gfx);
		obj = next;
	}
}

/*
 * --INFO--
 * Address:	804541D0
 * Size:	000098
 */
IObjBase* ObjMgrBase::search(SceneBase* scene, char* name)
{
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (obj->getOwner() == scene && !strcmp(obj->mName, name)) {
			return obj;
		}
		obj = next;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80454268
 * Size:	000078
 */
bool ObjMgrBase::start(StartSceneArg* arg)
{
	bool result   = true;
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (!obj->start(arg)) {
			result = false;
		}
		obj = next;
	}
	return result;
}

/*
 * --INFO--
 * Address:	804542E0
 * Size:	000078
 */
bool ObjMgrBase::end(EndSceneArg* arg)
{
	bool result   = true;
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (!obj->end(arg)) {
			result = false;
		}
		obj = next;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80454358
 * Size:	00007C
 */
bool ObjMgrBase::confirmSetScene(SetSceneArg& arg)
{
	bool result   = true;
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (!obj->confirmSetScene(arg)) {
			result = false;
			break;
		}
		obj = next;
	}
	return result;
}

/*
 * --INFO--
 * Address:	804543D4
 * Size:	00007C
 */
bool ObjMgrBase::confirmStartScene(StartSceneArg* arg)
{
	bool result   = true;
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (!obj->confirmStartScene(arg)) {
			result = false;
			break;
		}
		obj = next;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80454450
 * Size:	00007C
 */
bool ObjMgrBase::confirmEndScene(EndSceneArg* arg)
{
	bool result   = true;
	IObjBase* obj = static_cast<IObjBase*>(mNode.mChild);
	while (obj) {
		IObjBase* next = static_cast<IObjBase*>(obj->mNext);
		if (!obj->confirmEndScene(arg)) {
			result = false;
			break;
		}
		obj = next;
	}
	return result;
}

} // namespace Screen
