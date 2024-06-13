#include "Game/P2JST/ObjectSystem.h"
#include "Game/P2JST/ObjectActor.h"
#include "Game/P2JST/ObjectCamera.h"

namespace Game {
namespace P2JST {

// NB: this file is probably not (as) terrible if we work out JGadget::TList<>::iterator.
// I assume it's probably similar to TLinkList::iterator, but haven't throughly checked.
// Have attempted things as best I can without that struct properly done + some guesses on what will end up going where.
// Please forgive me for not doing it, godspeed to the next sorry soul in here - HP.

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
ObjectSystem::~ObjectSystem() { destroyObjectAll(); }

/**
 * @note Address: 0x80430A78
 * @note Size: 0xA8
 */
void ObjectSystem::destroyObjectAll()
{
	// AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
	JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iter(&mObjListPointer.mNode);
	while (!mObjListPointer.empty()) {
		if (static_cast<JStage::TObject*>(*iter)) {
			static_cast<JStage::TObject*>(*iter)->~TObject();
		}
		mObjListPointer.erase(JGadget::TList_pointer<JStudio::TObject*>::iterator(iter.mNode->mNext));
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	li       r31, 0
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r28, r3
	addi     r29, r28, 0x28
	stw      r29, 0x10(r1)
	stw      r29, 0xc(r1)
	stw      r29, 0x1c(r1)
	b        lbl_80430AF4

lbl_80430AB0:
	lwz      r30, 4(r29)
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_80430AD4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80430AD4:
	stw      r31, 8(r30)
	addi     r3, r1, 0x14
	addi     r4, r28, 0x20
	addi     r5, r1, 0x18
	lwz      r0, 4(r29)
	stw      r0, 8(r1)
	stw      r0, 0x18(r1)
	bl
"erase__Q27JGadget18TList_pointer_voidFQ37JGadget36TList<Pv,Q27JGadget14TAllocator<Pv>>8iterator"

lbl_80430AF4:
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	bne      lbl_80430AB0
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80430B20
 * @note Size: 0xF4
 */
void ObjectSystem::reset()
{
	JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart(&mObjListPointer.mNode);
	JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd(mObjListPointer.mNode.mNext);
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

		++iterStart; // probably something like this
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r3, 0x28
	stw      r30, 0x28(r1)
	lwz      r0, 0x28(r3)
	stw      r31, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x24(r1)
	stw      r31, 8(r1)
	stw      r31, 0x20(r1)
	stw      r31, 0x1c(r1)
	b        lbl_80430BEC

lbl_80430B5C:
	lwz      r3, 0x24(r1)
	lwz      r30, 8(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 3
	beq      lbl_80430B9C
	bge      lbl_80430B90
	cmpwi    r3, 2
	bge      lbl_80430BB4
	b        lbl_80430BCC

lbl_80430B90:
	cmpwi    r3, 7
	bge      lbl_80430BCC
	b        lbl_80430BE0

lbl_80430B9C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	b        lbl_80430BE0

lbl_80430BB4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	b        lbl_80430BE0

lbl_80430BCC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80430BE0:
	lwz      r3, 0x24(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r1)

lbl_80430BEC:
	lwz      r0, 0x24(r1)
	cmplw    r0, r31
	stw      r0, 0x18(r1)
	bne      lbl_80430B5C
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80430C14
 * @note Size: 0xAC
 */
void ObjectSystem::entry()
{
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart(&mObjListPointer.mNext);
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd((void**)mObjListPointer.mNext);
	// while (iterStart.mElement != iterEnd.mElement) {
	// 	JStage::TObject* obj = static_cast<JStage::TObject*>((void*)iterStart.mElement);
	// 	switch (obj->JSGFGetType()) {
	// 	case JStage::TEO_Actor:
	// 		static_cast<ObjectActor*>(obj)->entry();
	// 		break;
	// 	}

	// 	// ++iterStart; // probably something like this
	// }
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r3, 0x28
	stw      r30, 0x28(r1)
	lwz      r0, 0x28(r3)
	stw      r31, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x24(r1)
	stw      r31, 8(r1)
	stw      r31, 0x20(r1)
	stw      r31, 0x1c(r1)
	b        lbl_80430C98

lbl_80430C50:
	lwz      r3, 0x24(r1)
	lwz      r30, 8(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 2
	beq      lbl_80430C78
	b        lbl_80430C8C

lbl_80430C78:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl

lbl_80430C8C:
	lwz      r3, 0x24(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r1)

lbl_80430C98:
	lwz      r0, 0x24(r1)
	cmplw    r0, r31
	stw      r0, 0x18(r1)
	bne      lbl_80430C50
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80430CC0
 * @note Size: 0xD4
 */
void ObjectSystem::update()
{
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart(&mObjListPointer.mNext);
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd((void**)mObjListPointer.mNext);
	// while (iterStart.mElement != iterEnd.mElement) {
	// 	JStage::TObject* obj = static_cast<JStage::TObject*>((void*)iterStart.mElement);
	// 	switch (obj->JSGFGetType()) {
	// 	default:
	// 		// probably some DEBUG thing to make this spawn
	// 		break;
	// 	case JStage::TEO_Actor:
	// 		static_cast<ObjectActor*>(obj)->update();
	// 		break;
	// 	case JStage::TEO_Camera:
	// 		static_cast<ObjectCamera*>(obj)->update();
	// 		break;
	// 	}

	// 	// ++iterStart; // probably something like this
	// }
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r3, 0x28
	stw      r30, 0x28(r1)
	lwz      r0, 0x28(r3)
	stw      r31, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x24(r1)
	stw      r31, 8(r1)
	stw      r31, 0x20(r1)
	stw      r31, 0x1c(r1)
	b        lbl_80430D6C

lbl_80430CFC:
	lwz      r3, 0x24(r1)
	lwz      r30, 8(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 3
	beq      lbl_80430D4C
	bge      lbl_80430D60
	cmpwi    r3, 2
	bge      lbl_80430D34
	b        lbl_80430D60
	b        lbl_80430D60

lbl_80430D34:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	b        lbl_80430D60

lbl_80430D4C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl

lbl_80430D60:
	lwz      r3, 0x24(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r1)

lbl_80430D6C:
	lwz      r0, 0x24(r1)
	cmplw    r0, r31
	stw      r0, 0x18(r1)
	bne      lbl_80430CFC
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80430D94
 * @note Size: 0xD4
 */
void ObjectSystem::start()
{
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart(&mObjListPointer.mNext);
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd((void**)mObjListPointer.mNext);
	// while (iterStart.mElement != iterEnd.mElement) {
	// 	JStage::TObject* obj = static_cast<JStage::TObject*>((void*)iterStart.mElement);
	// 	switch (obj->JSGFGetType()) {
	// 	default:
	// 		// probably some DEBUG thing to make this spawn
	// 		break;
	// 	case JStage::TEO_Actor:
	// 		static_cast<ObjectActor*>(obj)->start();
	// 		break;
	// 	case JStage::TEO_Camera:
	// 		static_cast<ObjectCamera*>(obj)->start();
	// 		break;
	// 	}

	// 	// ++iterStart; // probably something like this
	// }
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r3, 0x28
	stw      r30, 0x28(r1)
	lwz      r0, 0x28(r3)
	stw      r31, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x24(r1)
	stw      r31, 8(r1)
	stw      r31, 0x20(r1)
	stw      r31, 0x1c(r1)
	b        lbl_80430E40

lbl_80430DD0:
	lwz      r3, 0x24(r1)
	lwz      r30, 8(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 3
	beq      lbl_80430E20
	bge      lbl_80430E34
	cmpwi    r3, 2
	bge      lbl_80430E08
	b        lbl_80430E34
	b        lbl_80430E34

lbl_80430E08:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	b        lbl_80430E34

lbl_80430E20:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc8(r12)
	mtctr    r12
	bctrl

lbl_80430E34:
	lwz      r3, 0x24(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r1)

lbl_80430E40:
	lwz      r0, 0x24(r1)
	cmplw    r0, r31
	stw      r0, 0x18(r1)
	bne      lbl_80430DD0
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80430E68
 * @note Size: 0xD4
 */
void ObjectSystem::stop()
{
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart(&mObjListPointer.mNext);
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd((void**)mObjListPointer.mNext);
	// while (iterStart.mElement != iterEnd.mElement) {
	// 	JStage::TObject* obj = static_cast<JStage::TObject*>((void*)iterStart.mElement);
	// 	switch (obj->JSGFGetType()) {
	// 	default:
	// 		// probably some DEBUG thing to make this spawn
	// 		break;
	// 	case JStage::TEO_Actor:
	// 		static_cast<ObjectActor*>(obj)->stop();
	// 		break;
	// 	case JStage::TEO_Camera:
	// 		static_cast<ObjectCamera*>(obj)->stop();
	// 		break;
	// 	}

	// 	// ++iterStart; // probably something like this
	// }
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r3, 0x28
	stw      r30, 0x28(r1)
	lwz      r0, 0x28(r3)
	stw      r31, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x24(r1)
	stw      r31, 8(r1)
	stw      r31, 0x20(r1)
	stw      r31, 0x1c(r1)
	b        lbl_80430F14

lbl_80430EA4:
	lwz      r3, 0x24(r1)
	lwz      r30, 8(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 3
	beq      lbl_80430EF4
	bge      lbl_80430F08
	cmpwi    r3, 2
	bge      lbl_80430EDC
	b        lbl_80430F08
	b        lbl_80430F08

lbl_80430EDC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	b        lbl_80430F08

lbl_80430EF4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl

lbl_80430F08:
	lwz      r3, 0x24(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r1)

lbl_80430F14:
	lwz      r0, 0x24(r1)
	cmplw    r0, r31
	stw      r0, 0x18(r1)
	bne      lbl_80430EA4
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80430F3C
 * @note Size: 0xFC
 */
JStage::TObject* ObjectSystem::findObject(const char* name, JStage::TEObject type) const
{
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart((void**)&mObjListPointer.mNext);
	// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd((void**)mObjListPointer.mNext);
	// while (iterStart.mElement != iterEnd.mElement) {
	// 	// ++iterStart; // probably

	// 	if (iterStart.mElement != iterEnd.mElement) {
	// 		JStage::TObject* obj = static_cast<JStage::TObject*>((void*)iterStart.mElement);
	// 		bool check;
	// 		if (!obj) {
	// 			check = false;
	// 		} else {
	// 			check = (strcmp(obj->JSGGetName(), name) == 0);
	// 		}
	// 		if (check) {
	// 			continue;
	// 		}
	// 	}
	// 	break;
	// }

	// if (iterStart.mElement != iterEnd.mElement) {
	// 	return static_cast<JStage::TObject*>((void*)iterStart.mElement);
	// }

	// return nullptr;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	addi     r30, r3, 0x28
	lwz      r0, 0x28(r3)
	stw      r5, 0x48(r1)
	stw      r4, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r4, 0x54(r1)
	stw      r30, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r30, 0x34(r1)
	stw      r30, 0x38(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r30, 0xc(r1)
	b        lbl_80430FA0

lbl_80430F94:
	lwz      r3, 0x40(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x40(r1)

lbl_80430FA0:
	lwz      r0, 0x40(r1)
	cmplw    r0, r30
	stw      r0, 8(r1)
	beq      lbl_80430FF0
	lwz      r3, 0x40(r1)
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	bne      lbl_80430FC8
	li       r0, 0
	b        lbl_80430FE8

lbl_80430FC8:
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_80430FE8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80430F94

lbl_80430FF0:
	lwz      r3, 0x40(r1)
	stw      r30, 0x24(r1)
	cmplw    r3, r30
	stw      r3, 0x44(r1)
	stw      r30, 0x20(r1)
	stw      r30, 0x30(r1)
	stw      r30, 0x2c(r1)
	stw      r3, 0x28(r1)
	beq      lbl_8043101C
	lwz      r3, 8(r3)
	b        lbl_80431020

lbl_8043101C:
	li       r3, 0

lbl_80431020:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80431038
 * @note Size: 0x310
 */
int ObjectSystem::JSGFindObject(JStage::TObject** outObject, const char* name, JStage::TEObject type) const
{
	JStage::TObject* obj = findObject(name, type);
	const void* newObj   = obj;
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
		} else if (name[0] == 'p') {
			newObj = new ObjectActor(name, mMoviePlayer);
		}
		break;
	case JStage::TEO_Camera:
		newObj = new ObjectCamera(name, mMoviePlayer);
		break;
	default:
		// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart((void**)obj);
		// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterEnd((void**)obj);
		// while (iterStart.mElement != iterEnd.mElement) {
		// 	JStage::TObject* obj = static_cast<JStage::TObject*>((void*)iterStart.mElement);
		// 	obj->JSGGetName(); // debug probably

		// 	// ++iterStart; // probably, eventually
		// }
		JUT_PANICLINE(449, "JSGFindObject---- %d not found\n");
		break;
	case JStage::TEO_AmbientLight:
	case JStage::TEO_Light:
	case JStage::TEO_Fog:
		break;
	}

	if (newObj) {
		// JGadget::TList<void*, JGadget::TVoidAllocator>::iterator iterStart((void**)obj);
		// void* const& val = &newObj;
		// mObjListPointer.insert(iterStart, 0, val);
	}

	*outObject = *(JStage::TObject**)newObj;
	if (!*(JStage::TObject**)newObj) {
		return 2;
	}

	return 0;
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r26, 0x98(r1)
	  mr        r27, r5
	  mr        r28, r6
	  mr        r30, r3
	  addi      r31, r30, 0x28
	  mr        r26, r27
	  stw       r28, 0x8C(r1)
	  mr        r29, r4
	  stw       r27, 0x90(r1)
	  stw       r28, 0x84(r1)
	  lwz       r0, 0x28(r3)
	  stw       r26, 0x88(r1)
	  stw       r31, 0x1C(r1)
	  stw       r31, 0x18(r1)
	  stw       r31, 0x70(r1)
	  stw       r31, 0x6C(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x64(r1)
	  stw       r31, 0xC(r1)
	  b         .loc_0x70

	.loc_0x64:
	  lwz       r3, 0x64(r1)
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x64(r1)

	.loc_0x70:
	  lwz       r0, 0x64(r1)
	  cmplw     r0, r31
	  stw       r0, 0x8(r1)
	  beq-      .loc_0xC0
	  lwz       r3, 0x64(r1)
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x98
	  li        r0, 0
	  b         .loc_0xB8

	.loc_0x98:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r26
	  bl        -0x366A24
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31

	.loc_0xB8:
	  rlwinm.   r0,r0,0,24,31
	  beq+      .loc_0x64

	.loc_0xC0:
	  lwz       r3, 0x64(r1)
	  stw       r31, 0x2C(r1)
	  cmplw     r3, r31
	  stw       r3, 0x60(r1)
	  stw       r31, 0x28(r1)
	  stw       r31, 0x74(r1)
	  stw       r31, 0x4C(r1)
	  stw       r3, 0x48(r1)
	  beq-      .loc_0xEC
	  lwz       r0, 0x8(r3)
	  b         .loc_0xF0

	.loc_0xEC:
	  li        r0, 0

	.loc_0xF0:
	  cmplwi    r0, 0
	  stw       r0, 0x80(r1)
	  beq-      .loc_0x108
	  stw       r0, 0x0(r29)
	  li        r3, 0
	  b         .loc_0x2FC

	.loc_0x108:
	  cmpwi     r28, 0x3
	  beq-      .loc_0x20C
	  bge-      .loc_0x124
	  cmpwi     r28, 0x1
	  beq-      .loc_0x2A8
	  bge-      .loc_0x130
	  b         .loc_0x234

	.loc_0x124:
	  cmpwi     r28, 0x7
	  bge-      .loc_0x234
	  b         .loc_0x2A8

	.loc_0x130:
	  lbz       r0, 0x0(r27)
	  extsb     r0, r0
	  cmpwi     r0, 0x40
	  bne-      .loc_0x16C
	  li        r3, 0xC8
	  bl        -0x40D2D8
	  mr.       r0, r3
	  beq-      .loc_0x164
	  lwz       r5, 0x8(r30)
	  mr        r4, r27
	  li        r6, 0
	  bl        0x23340
	  mr        r0, r3

	.loc_0x164:
	  stw       r0, 0x80(r1)
	  b         .loc_0x2A8

	.loc_0x16C:
	  cmpwi     r0, 0x2B
	  bne-      .loc_0x19C
	  li        r3, 0xBC
	  bl        -0x40D30C
	  mr.       r0, r3
	  beq-      .loc_0x194
	  lwz       r5, 0x8(r30)
	  mr        r4, r27
	  bl        0x623C
	  mr        r0, r3

	.loc_0x194:
	  stw       r0, 0x80(r1)
	  b         .loc_0x2A8

	.loc_0x19C:
	  cmpwi     r0, 0x2A
	  bne-      .loc_0x1E4
	  mr        r3, r30
	  mr        r4, r27
	  bl        0x1D4
	  mr.       r26, r3
	  beq-      .loc_0x2A8
	  li        r3, 0xBC
	  bl        -0x40D350
	  mr.       r0, r3
	  beq-      .loc_0x1DC
	  lwz       r5, 0x8(r30)
	  mr        r4, r27
	  mr        r6, r26
	  bl        -0x1464
	  mr        r0, r3

	.loc_0x1DC:
	  stw       r0, 0x80(r1)
	  b         .loc_0x2A8

	.loc_0x1E4:
	  li        r3, 0x70
	  bl        -0x40D37C
	  mr.       r0, r3
	  beq-      .loc_0x204
	  lwz       r5, 0x8(r30)
	  mr        r4, r27
	  bl        -0x28D4
	  mr        r0, r3

	.loc_0x204:
	  stw       r0, 0x80(r1)
	  b         .loc_0x2A8

	.loc_0x20C:
	  li        r3, 0xC8
	  bl        -0x40D3A4
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  lwz       r5, 0x8(r30)
	  mr        r4, r27
	  bl        -0x1B78
	  mr        r0, r3

	.loc_0x22C:
	  stw       r0, 0x80(r1)
	  b         .loc_0x2A8

	.loc_0x234:
	  lwz       r0, 0x28(r30)
	  stw       r31, 0x3C(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x7C(r1)
	  stw       r31, 0x38(r1)
	  stw       r31, 0x78(r1)
	  stw       r31, 0x5C(r1)
	  b         .loc_0x27C

	.loc_0x258:
	  lwz       r3, 0x7C(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x7C(r1)
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x7C(r1)

	.loc_0x27C:
	  lwz       r0, 0x7C(r1)
	  cmplw     r0, r31
	  stw       r0, 0x58(r1)
	  bne+      .loc_0x258
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5D00
	  li        r4, 0x1C1
	  subi      r5, r5, 0x5CEC
	  crclr     6, 0x6
	  bl        -0x406C9C

	.loc_0x2A8:
	  lwz       r0, 0x80(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x2DC
	  stw       r31, 0x24(r1)
	  addi      r3, r1, 0x30
	  addi      r4, r30, 0x20
	  addi      r5, r1, 0x34
	  stw       r31, 0x20(r1)
	  addi      r6, r1, 0x80
	  stw       r31, 0x54(r1)
	  stw       r31, 0x50(r1)
	  stw       r31, 0x34(r1)
	  bl        -0x409DAC

	.loc_0x2DC:
	  lwz       r0, 0x80(r1)
	  stw       r0, 0x0(r29)
	  lwz       r0, 0x80(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F8
	  li        r3, 0x2
	  b         .loc_0x2FC

	.loc_0x2F8:
	  li        r3, 0

	.loc_0x2FC:
	  lmw       r26, 0x98(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/**
 * @note Address: 0x80431348
 * @note Size: 0x8
 */
char* ObjectSystem::JSGGetName() const { return const_cast<char*>(mName); }

/**
 * @note Address: 0x80431350
 * @note Size: 0x8
 */
void ObjectSystem::JSGSetFlag(u32 flag) { mFlags = flag; }

/**
 * @note Address: 0x80431358
 * @note Size: 0x8
 */
u32 ObjectSystem::JSGGetFlag() const { return mFlags; }

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
