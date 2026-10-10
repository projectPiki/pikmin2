#include "Game/P2JST/ObjectSystem.h"
#include "Game/P2JST/ObjectActor.h"
#include "Game/P2JST/ObjectCamera.h"
#include "stl/algorithm.h"

// this is a made-up helper for the find_if call in findObject
// since it really looks like it needs *something*
namespace {
struct TObjectNameEqual {
	TObjectNameEqual(JStage::TEObject type, const char* name)
	    : mType(type)
	    , mName(name)
	{
	}

	bool operator()(JStage::TObject* const& object) const { return (object == nullptr) ? false : strcmp(object->JSGGetName(), mName) == 0; }

	JStage::TEObject mType; // _00
	const char* mName;      // _04
};
} // namespace

namespace Game {
namespace P2JST {

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
// void P2JST::_Print(char*, ...)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80430954
 * @note Size: 0xA0
 */
ObjectSystem::ObjectSystem(char const* name, MoviePlayer* player)
    : ObjectBase(name, player)
    , mObjListPointer(JGadget::TVoidAllocator())
{
}

/**
 * @note Address: 0x804309F4
 * @note Size: 0x84
 */
ObjectSystem::~ObjectSystem()
{
	destroyObjectAll();
}

/**
 * @note Address: 0x80430A78
 * @note Size: 0xA8
 */
void ObjectSystem::destroyObjectAll()
{
	while (!mObjListPointer.empty()) {
		JStage::TObject*& object = getLastObject();
		delete object;
		object = nullptr;
		mObjListPointer.pop_back();
	}
}

/**
 * @note Address: 0x80430B20
 * @note Size: 0xF4
 */
void ObjectSystem::reset()
{
	JGadget::TList_pointer<JStage::TObject*>::iterator iterStart = mObjListPointer.begin();
	JGadget::TList_pointer<JStage::TObject*>::iterator iterEnd   = mObjListPointer.end();
	while (iterStart != iterEnd) {
		JStage::TObject* obj = static_cast<JStage::TObject*>(*iterStart);
		switch (obj->JSGFGetType()) {
		case JStage::TEO_Camera:
			static_cast<ObjectCamera*>(obj)->reset();
			break;
		case JStage::TEO_Actor:
			static_cast<ObjectActor*>(obj)->reset();
			break;
		default:
			obj->JSGFGetType(); // debug probably
			break;
		case JStage::TEO_AmbientLight:
		case JStage::TEO_Light:
		case JStage::TEO_Fog:
			break;
		}

		++iterStart;
	}
}

/**
 * @note Address: 0x80430C14
 * @note Size: 0xAC
 */
void ObjectSystem::entry()
{
	JGadget::TList_pointer<JStage::TObject*>::iterator iterStart = mObjListPointer.begin();
	JGadget::TList_pointer<JStage::TObject*>::iterator iterEnd   = mObjListPointer.end();
	while (iterStart != iterEnd) {
		JStage::TObject* obj = static_cast<JStage::TObject*>(*iterStart);
		switch (obj->JSGFGetType()) {
		case JStage::TEO_Actor:
			static_cast<ObjectActor*>(obj)->entry();
			break;
		}

		++iterStart;
	}
}

/**
 * @note Address: 0x80430CC0
 * @note Size: 0xD4
 */
void ObjectSystem::update()
{
	JGadget::TList_pointer<JStage::TObject*>::iterator iterStart = mObjListPointer.begin();
	JGadget::TList_pointer<JStage::TObject*>::iterator iterEnd   = mObjListPointer.end();
	while (iterStart != iterEnd) {
		JStage::TObject* obj = static_cast<JStage::TObject*>(*iterStart);
		switch (obj->JSGFGetType()) {
		case JStage::TEO_Actor:
			static_cast<ObjectActor*>(obj)->update();
			break;
		case JStage::TEO_Camera:
			static_cast<ObjectCamera*>(obj)->update();
			break;
		case JStage::TEO_AmbientLight:
		case JStage::TEO_Light:
		case JStage::TEO_Fog:
			break;
		}

		++iterStart;
	}
}

/**
 * @note Address: 0x80430D94
 * @note Size: 0xD4
 */
void ObjectSystem::start()
{
	JGadget::TList_pointer<JStage::TObject*>::iterator iterStart = mObjListPointer.begin();
	JGadget::TList_pointer<JStage::TObject*>::iterator iterEnd   = mObjListPointer.end();
	while (iterStart != iterEnd) {
		JStage::TObject* obj = static_cast<JStage::TObject*>(*iterStart);
		switch (obj->JSGFGetType()) {
		case JStage::TEO_Actor:
			static_cast<ObjectActor*>(obj)->start();
			break;
		case JStage::TEO_Camera:
			static_cast<ObjectCamera*>(obj)->start();
			break;
		case JStage::TEO_AmbientLight:
		case JStage::TEO_Light:
		case JStage::TEO_Fog:
			break;
		}

		++iterStart;
	}
}

/**
 * @note Address: 0x80430E68
 * @note Size: 0xD4
 */
void ObjectSystem::stop()
{
	JGadget::TList_pointer<JStage::TObject*>::iterator iterStart = mObjListPointer.begin();
	JGadget::TList_pointer<JStage::TObject*>::iterator iterEnd   = mObjListPointer.end();
	while (iterStart != iterEnd) {
		JStage::TObject* obj = static_cast<JStage::TObject*>(*iterStart);
		switch (obj->JSGFGetType()) {
		case JStage::TEO_Actor:
			static_cast<ObjectActor*>(obj)->stop();
			break;
		case JStage::TEO_Camera:
			static_cast<ObjectCamera*>(obj)->stop();
			break;
		case JStage::TEO_AmbientLight:
		case JStage::TEO_Light:
		case JStage::TEO_Fog:
			break;
		}

		++iterStart;
	}
}

/**
 * @note Address: 0x80430F3C
 * @note Size: 0xFC
 */
JStage::TObject* ObjectSystem::findObject(const char* name, JStage::TEObject type) const
{
	JGadget::TList_pointer<JStage::TObject*>::iterator found
	    = std::find_if(mObjListPointer.begin(), mObjListPointer.end(), TObjectNameEqual(type, name));
	if (found != mObjListPointer.end()) {
		return *found;
	}
	return nullptr;
}

/**
 * @note Address: 0x80431038
 * @note Size: 0x310
 */
int ObjectSystem::JSGFindObject(JStage::TObject** outObject, const char* name, JStage::TEObject type) const
{
	JStage::TObject* obj    = findObject(name, type);
	JStage::TObject* newObj = obj;
	if (obj) {
		*outObject = obj;
		return 0;
	}

	switch (type) {
	case JStage::TEO_Actor:
		if (name[0] == '@') {
			newObj = new ObjectParticleActor(name, mMoviePlayer, nullptr);
		} else if (name[0] == '+') {
			newObj = new ObjectSpecialActor(name, mMoviePlayer);
		} else if (name[0] == '*') {
			Creature* actor = findCreature(name);
			if (actor) {
				newObj = new ObjectGameActor(name, mMoviePlayer, actor);
			}
		} else {
			newObj = new ObjectActor(name, mMoviePlayer);
		}
		break;
	case JStage::TEO_Camera:
		newObj = new ObjectCamera(name, mMoviePlayer);
		break;
	default:
		JGadget::TList_pointer<JStage::TObject*>::iterator iterStart = mObjListPointer.begin();
		JGadget::TList_pointer<JStage::TObject*>::iterator iterEnd   = mObjListPointer.end();
		while (iterStart != iterEnd) {
			JStage::TObject* obj = static_cast<JStage::TObject*>(*iterStart);
			obj->JSGGetName(); // debug probably

			++iterStart;
		}
		JUT_PANICLINE(449, "JSGFindObject---- %d not found\n"); // nice oopsie
		break;
	case JStage::TEO_System:
	case JStage::TEO_AmbientLight:
	case JStage::TEO_Light:
	case JStage::TEO_Fog:
		break;
	}

	if (newObj) {
		mObjListPointer.push_back(newObj);
	}
	*outObject = newObj;
	if (newObj == nullptr) {
		return 2;
	}
	return 0;
}

/**
 * @note Address: 0x80431348
 * @note Size: 0x8
 */
char* ObjectSystem::JSGGetName() const
{
	return const_cast<char*>(mName);
}

/**
 * @note Address: 0x80431350
 * @note Size: 0x8
 */
void ObjectSystem::JSGSetFlag(u32 flag)
{
	mFlags = flag;
}

/**
 * @note Address: 0x80431358
 * @note Size: 0x8
 */
u32 ObjectSystem::JSGGetFlag() const
{
	return mFlags;
}

/**
 * @note Address: 0x80431360
 * @note Size: 0x10
 */
void ObjectSystem::JSGSetData(u32 d1, void const* d2, u32 d3)
{
	_14 = d1;
	_18 = d2;
	_1C = d3;
}

} // namespace P2JST
} // namespace Game

#include "nans.h"
