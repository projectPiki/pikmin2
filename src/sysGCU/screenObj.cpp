#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/J2D/J2DPrint.h"

namespace Screen {

/**
 * @note Address: 0x80453AE8
 * @note Size: 0x90
 */
ObjBase::ObjBase()
    : IObjBase()
{
	mObjState = ObjState_Inactive;
	mOwner    = nullptr;
}

/**
 * @note Address: 0x80453B78
 * @note Size: 0x2C
 */
void ObjBase::create(JKRArchive* archive) { doCreate(archive); }

/**
 * @note Address: 0x80453BA4
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80453C50
 * @note Size: 0x138
 */
bool ObjBase::end(EndSceneArg const* arg)
{
	bool ret = false;
	switch (mObjState) {
	case 2:
		if (doEnd(arg)) {
			doUpdateFinish();
			if (arg && arg->mAllowFadeOut) {
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
		if (arg && arg->mAllowFadeOut) {
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

/**
 * @note Address: 0x80453D88
 * @note Size: 0x110
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

/**
 * @note Address: 0x80453E98
 * @note Size: 0x38
 */
void ObjBase::draw(Graphics& gfx)
{
	if (mObjState != ObjState_Inactive) {
		doDraw(gfx);
	}
}

/**
 * @note Address: 0x80453ED0
 * @note Size: 0xD8
 */
void ObjBase::doDraw(Graphics& gfx)
{
	J2DPrint print(JFWSystem::systemFont, 0.0f);
	print.initiate();

	print.mCharColor.set(JUtility::TColor(255, 255, 255, 255));
	print.mGradientColor.set(JUtility::TColor(255, 255, 255, 255));
	print.print(100.0f, 100.0f, mName);
}

/**
 * @note Address: 0x80453FA8
 * @note Size: 0xC
 */
og::Screen::DispMemberBase* ObjBase::getDispMember() { return mOwner->mDispMember; }

/**
 * @note Address: 0x80453FB4
 * @note Size: 0x2C
 */
bool ObjBase::confirmSetScene(SetSceneArg& arg) { return doConfirmSetScene(arg); }

/**
 * @note Address: 0x80453FE0
 * @note Size: 0x2C
 */
bool ObjBase::confirmStartScene(StartSceneArg* arg) { return doConfirmStartScene(arg); }

/**
 * @note Address: 0x8045400C
 * @note Size: 0x34
 */
bool ObjBase::confirmEndScene(EndSceneArg* arg) { return doConfirmEndScene(arg); }

/**
 * @note Address: 0x80454040
 * @note Size: 0x30
 */
Controller* ObjBase::getGamePad() const { return getOwner()->getGamePad(); }

/**
 * @note Address: 0x80454070
 * @note Size: 0x44
 */
ObjMgrBase::ObjMgrBase()
    : mNode()
{
	mNode.clearRelations();
}

/**
 * @note Address: 0x804540B4
 * @note Size: 0x58
 */
void ObjMgrBase::registObj(IObjBase* obj, SceneBase* scene)
{
	obj->setOwner(scene);
	mNode.add(obj);
}

/**
 * update__Q26Screen10ObjMgrBaseFv
 * @note Address: 0x8045410C
 * @note Size: 0x68
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

/**
 * draw__Q26Screen10ObjMgrBaseFR8Graphics
 * @note Address: 0x80454174
 * @note Size: 0x5C
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

/**
 * @note Address: 0x804541D0
 * @note Size: 0x98
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

/**
 * @note Address: 0x80454268
 * @note Size: 0x78
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

/**
 * @note Address: 0x804542E0
 * @note Size: 0x78
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

/**
 * @note Address: 0x80454358
 * @note Size: 0x7C
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

/**
 * @note Address: 0x804543D4
 * @note Size: 0x7C
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

/**
 * @note Address: 0x80454450
 * @note Size: 0x7C
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
