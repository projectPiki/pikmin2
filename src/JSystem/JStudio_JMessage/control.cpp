#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JMessage/TControl.h"
#include "JSystem/JStudio_JMessage.h"
#include "JSystem/JStudio/TObject.h"
#include "types.h"

namespace JStudio_JMessage {
namespace {
/*
 * --INFO--
 * Address:	80014DF8
 * Size:	0000BC
 */
JStudio::TObject_message* createObject_MESSAGE_JMS_(const JStudio::stb::data::TParse_TBlock_object& data, JMessage::TControl* system)
{
	JStudio_JMessage::TAdaptor_message* adaptor = new JStudio_JMessage::TAdaptor_message(system);
	if (!adaptor) {
		return nullptr;
	}

	JStudio::TObject_message* object = new JStudio::TObject_message(data, adaptor);

	if (!object) {
		object = nullptr;

	} else if (object->mAdaptor) {
		object->mAdaptor->adaptor_do_prepare(object);
	}

	return object;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x10
	  bl        0xF088
	  mr.       r31, r3
	  beq-      .loc_0x3C
	  mr        r4, r30
	  bl        -0x108
	  mr        r31, r3

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x4C:
	  li        r3, 0x38
	  bl        0xF05C
	  mr.       r30, r3
	  beq-      .loc_0x6C
	  mr        r4, r29
	  mr        r5, r31
	  bl        -0x6230
	  mr        r30, r3

	.loc_0x6C:
	  cmplwi    r30, 0
	  bne-      .loc_0x7C
	  li        r30, 0
	  b         .loc_0x9C

	.loc_0x7C:
	  lwz       r3, 0x34(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  mr        r3, r30

	.loc_0xA0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
} // namespace

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
JStudio_JMessage::TCreateObject_base::~TCreateObject_base()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80014EB4
 * Size:	0000AC
 */
bool JStudio_JMessage::TCreateObject_base::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	JStudio::TObject_message* (*func)(const JStudio::stb::data::TParse_TBlock_object&, JMessage::TControl*);
	int p1 = data.filedata->_04;
	switch (p1) {
	case 'JMSG':
		func = &createObject_MESSAGE_JMS_;
		break;
	default:
		return false;
	}

	JMessage::TControl* system = find(data);

	if (!system) {
		return false;
	}

	*newObject = func(data, system);
	return true;
}

/*
 * --INFO--
 * Address:	80014F60
 * Size:	000070
 */
JStudio_JMessage::TCreateObject::~TCreateObject() { }

/*
 * --INFO--
 * Address:	80014FD0
 * Size:	000008
 */
JMessage::TControl* JStudio_JMessage::TCreateObject::find(JStudio::stb::data::TParse_TBlock_object const&) { return mControl; }
} // namespace JStudio_JMessage
