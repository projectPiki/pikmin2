#include "JSystem/JStage/TCamera.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/stb-data.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q214JStudio_JStage13TCreateObject
    __vt__Q214JStudio_JStage13TCreateObject:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage13TCreateObjectFv
        .4byte
   create__Q214JStudio_JStage13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

#define GetTypeFromByteStream(data, type, offset) (*(type*)((data) + (offset)))

namespace JStudio_JStage {
namespace {
typedef JStudio::TObject* (*CreateObjectFunction)(const JStudio::stb::data::TParse_TBlock_object&, JStage::TObject*,
                                                  const JStage::TSystem*);
template <typename Adaptor, typename Object>
JStudio::TObject* createObject_JSG_(const JStudio::stb::data::TParse_TBlock_object& data, JStage::TObject* stageObject,
                                    const JStage::TSystem* system)
{
	Adaptor* adaptor = new Adaptor(system, (Object*)stageObject);
	if (adaptor == nullptr) {
		return nullptr;
	}
	typename Object::StudioObject* studioObject = new typename Object::StudioObject(data, (Adaptor*)adaptor);
	if (studioObject == nullptr) {
		// TODO: This should probably delete the adaptor in NONMATCHING builds, if the object couldn't get created.
		return studioObject;
	} else {
		if (studioObject->mAdaptor != nullptr) {
			studioObject->mAdaptor->adaptor_do_prepare(studioObject);
		}
	}
	return studioObject;
}
} // namespace

/*
 * --INFO--
 * Address:	80014734
 * Size:	000060
 */
JStudio_JStage::TCreateObject::~TCreateObject() { }

/*
 * --INFO--
 * Address:	80014794
 * Size:	000194
 */
bool JStudio_JStage::TCreateObject::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	*newObject = nullptr;
	JStage::TEObject type;
	CreateObjectFunction function;
	switch (data.filedata->_04) {
	case 'JACT':
		type     = JStage::TEO_Actor;
		function = &createObject_JSG_<TAdaptor_actor, JStage::TActor>;
		break;
	case 'JCMR':
		type     = JStage::TEO_Camera;
		function = &createObject_JSG_<TAdaptor_camera, JStage::TCamera>;
		break;
	case 'JABL':
		type     = JStage::TEO_AmbientLight;
		function = &createObject_JSG_<TAdaptor_ambientLight, JStage::TAmbientLight>;
		break;
	case 'JLIT':
		type     = JStage::TEO_Light;
		function = &createObject_JSG_<TAdaptor_light, JStage::TLight>;
		break;
	case 'JFOG':
		type     = JStage::TEO_Fog;
		function = &createObject_JSG_<TAdaptor_fog, JStage::TFog>;
		break;
	default:
		return false;
	}
	JStage::TObject* stageObject;
	switch (mSystem->JSGFindObject(&stageObject, (const char*)&data.filedata[3], type)) {
	case 0:
		*newObject = function(data, stageObject, mSystem);
		return true;
	case 2:
		return true;
	}
	return false;
}
} // namespace JStudio_JStage
/*
 * --INFO--
 * Address:	80014928
 * Size:	0000CC
 */
// void createObject_JSG_<JStudio_JStage::TAdaptor_actor, JStage::TActor> __Q214JStudio_JStage21 @unnamed @control_cpp
//     @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  stw       r31, 0x1C(r1)
// 	  stw       r30, 0x18(r1)
// 	  mr        r30, r4
// 	  stw       r29, 0x14(r1)
// 	  mr        r29, r5
// 	  stw       r28, 0x10(r1)
// 	  mr        r28, r3
// 	  li        r3, 0x14C
// 	  bl        0xF550
// 	  mr.       r31, r3
// 	  beq-      .loc_0x48
// 	  mr        r4, r29
// 	  mr        r5, r30
// 	  bl        -0x27D0
// 	  mr        r31, r3

// 	.loc_0x48:
// 	  cmplwi    r31, 0
// 	  bne-      .loc_0x58
// 	  li        r3, 0
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  li        r3, 0x38
// 	  bl        0xF520
// 	  mr.       r30, r3
// 	  beq-      .loc_0x78
// 	  mr        r4, r28
// 	  mr        r5, r31
// 	  bl        -0x70A0
// 	  mr        r30, r3

// 	.loc_0x78:
// 	  cmplwi    r30, 0
// 	  bne-      .loc_0x88
// 	  li        r30, 0
// 	  b         .loc_0xA8

// 	.loc_0x88:
// 	  lwz       r3, 0x34(r30)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0xA8
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r30
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0xA8:
// 	  mr        r3, r30

// 	.loc_0xAC:
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  lwz       r29, 0x14(r1)
// 	  lwz       r28, 0x10(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800149F4
 * Size:	0000CC
 */
// void createObject_JSG_<JStudio_JStage::TAdaptor_camera, JStage::TCamera> __Q214JStudio_JStage21 @unnamed @control_cpp
//     @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  stw       r31, 0x1C(r1)
// 	  stw       r30, 0x18(r1)
// 	  mr        r30, r4
// 	  stw       r29, 0x14(r1)
// 	  mr        r29, r5
// 	  stw       r28, 0x10(r1)
// 	  mr        r28, r3
// 	  li        r3, 0x120
// 	  bl        0xF484
// 	  mr.       r31, r3
// 	  beq-      .loc_0x48
// 	  mr        r4, r29
// 	  mr        r5, r30
// 	  bl        -0x160C
// 	  mr        r31, r3

// 	.loc_0x48:
// 	  cmplwi    r31, 0
// 	  bne-      .loc_0x58
// 	  li        r3, 0
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  li        r3, 0x38
// 	  bl        0xF454
// 	  mr.       r30, r3
// 	  beq-      .loc_0x78
// 	  mr        r4, r28
// 	  mr        r5, r31
// 	  bl        -0x69A4
// 	  mr        r30, r3

// 	.loc_0x78:
// 	  cmplwi    r30, 0
// 	  bne-      .loc_0x88
// 	  li        r30, 0
// 	  b         .loc_0xA8

// 	.loc_0x88:
// 	  lwz       r3, 0x34(r30)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0xA8
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r30
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0xA8:
// 	  mr        r3, r30

// 	.loc_0xAC:
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  lwz       r29, 0x14(r1)
// 	  lwz       r28, 0x10(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80014AC0
 * Size:	0000CC
 */
// void createObject_JSG_<JStudio_JStage::TAdaptor_ambientLight, JStage::TAmbientLight> __Q214JStudio_JStage21 @unnamed @control_cpp
//     @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  stw       r31, 0x1C(r1)
// 	  stw       r30, 0x18(r1)
// 	  mr        r30, r4
// 	  stw       r29, 0x14(r1)
// 	  mr        r29, r5
// 	  stw       r28, 0x10(r1)
// 	  mr        r28, r3
// 	  li        r3, 0x64
// 	  bl        0xF3B8
// 	  mr.       r31, r3
// 	  beq-      .loc_0x48
// 	  mr        r4, r29
// 	  mr        r5, r30
// 	  bl        -0x1974
// 	  mr        r31, r3

// 	.loc_0x48:
// 	  cmplwi    r31, 0
// 	  bne-      .loc_0x58
// 	  li        r3, 0
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  li        r3, 0x38
// 	  bl        0xF388
// 	  mr.       r30, r3
// 	  beq-      .loc_0x78
// 	  mr        r4, r28
// 	  mr        r5, r31
// 	  bl        -0x6D00
// 	  mr        r30, r3

// 	.loc_0x78:
// 	  cmplwi    r30, 0
// 	  bne-      .loc_0x88
// 	  li        r30, 0
// 	  b         .loc_0xA8

// 	.loc_0x88:
// 	  lwz       r3, 0x34(r30)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0xA8
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r30
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0xA8:
// 	  mr        r3, r30

// 	.loc_0xAC:
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  lwz       r29, 0x14(r1)
// 	  lwz       r28, 0x10(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80014B8C
 * Size:	0000CC
 */
// void createObject_JSG_<JStudio_JStage::TAdaptor_light, JStage::TLight> __Q214JStudio_JStage21 @unnamed @control_cpp
//     @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  stw       r31, 0x1C(r1)
// 	  stw       r30, 0x18(r1)
// 	  mr        r30, r4
// 	  stw       r29, 0x14(r1)
// 	  mr        r29, r5
// 	  stw       r28, 0x10(r1)
// 	  mr        r28, r3
// 	  li        r3, 0x11C
// 	  bl        0xF2EC
// 	  mr.       r31, r3
// 	  beq-      .loc_0x48
// 	  mr        r4, r29
// 	  mr        r5, r30
// 	  bl        -0x3804
// 	  mr        r31, r3

// 	.loc_0x48:
// 	  cmplwi    r31, 0
// 	  bne-      .loc_0x58
// 	  li        r3, 0
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  li        r3, 0x38
// 	  bl        0xF2BC
// 	  mr.       r30, r3
// 	  beq-      .loc_0x78
// 	  mr        r4, r28
// 	  mr        r5, r31
// 	  bl        -0x63F4
// 	  mr        r30, r3

// 	.loc_0x78:
// 	  cmplwi    r30, 0
// 	  bne-      .loc_0x88
// 	  li        r30, 0
// 	  b         .loc_0xA8

// 	.loc_0x88:
// 	  lwz       r3, 0x34(r30)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0xA8
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r30
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0xA8:
// 	  mr        r3, r30

// 	.loc_0xAC:
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  lwz       r29, 0x14(r1)
// 	  lwz       r28, 0x10(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80014C58
 * Size:	0000CC
 */
// void createObject_JSG_<JStudio_JStage::TAdaptor_fog, JStage::TFog> __Q214JStudio_JStage21 @unnamed @control_cpp
//     @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  stw       r31, 0x1C(r1)
// 	  stw       r30, 0x18(r1)
// 	  mr        r30, r4
// 	  stw       r29, 0x14(r1)
// 	  mr        r29, r5
// 	  stw       r28, 0x10(r1)
// 	  mr        r28, r3
// 	  li        r3, 0x8C
// 	  bl        0xF220
// 	  mr.       r31, r3
// 	  beq-      .loc_0x48
// 	  mr        r4, r29
// 	  mr        r5, r30
// 	  bl        -0xB64
// 	  mr        r31, r3

// 	.loc_0x48:
// 	  cmplwi    r31, 0
// 	  bne-      .loc_0x58
// 	  li        r3, 0
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  li        r3, 0x38
// 	  bl        0xF1F0
// 	  mr.       r30, r3
// 	  beq-      .loc_0x78
// 	  mr        r4, r28
// 	  mr        r5, r31
// 	  bl        -0x675C
// 	  mr        r30, r3

// 	.loc_0x78:
// 	  cmplwi    r30, 0
// 	  bne-      .loc_0x88
// 	  li        r30, 0
// 	  b         .loc_0xA8

// 	.loc_0x88:
// 	  lwz       r3, 0x34(r30)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0xA8
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r30
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0xA8:
// 	  mr        r3, r30

// 	.loc_0xAC:
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  lwz       r29, 0x14(r1)
// 	  lwz       r28, 0x10(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }
