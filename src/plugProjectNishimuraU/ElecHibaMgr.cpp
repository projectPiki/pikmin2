#include "Game/Entities/ElecHiba.h"

namespace Game {
namespace ElecHiba {

static const char elecHibaMgrName[] = "246-ElecHibaMgr";

/*
 * --INFO--
 * Address:	8026EA08
 * Size:	00008C
 */
Generator::Generator()
    : EnemyGeneratorBase("電撃ヒバジェネレータ") // electric hiba generator
    , m_distance(100.0f)
{
}

/*
 * --INFO--
 * Address:	8026EA94
 * Size:	00000C
 */
u32 Generator::getLatestVersion() { return '0000'; }

/*
 * --INFO--
 * Address:	8026EAA0
 * Size:	000074
 */
void Generator::doRead(Stream& stream)
{
	if (m_version == getLatestVersion()) {
		doReadLatestVersion(stream);
		return;
	}
	// if not latest version, use old read function
	doReadOldVersion(stream);
}

/*
 * --INFO--
 * Address:	8026EB14
 * Size:	000060
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.m_tabCount);
	stream.writeFloat(m_distance);
	stream.textWriteText("\t\t# distance \r\n");
}

/*
 * --INFO--
 * Address:	8026EB74
 * Size:	000034
 */
void Generator::doReadLatestVersion(Stream& stream) { m_distance = stream.readFloat(); }

/*
 * --INFO--
 * Address:	8026EBA8
 * Size:	000004
 */
void Generator::doReadOldVersion(Stream&) { }

/*
 * --INFO--
 * Address:	8026EBAC
 * Size:	000064
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "電撃ヒバマネージャ"; // electric hiba manager
}

/*
 * --INFO--
 * Address:	8026EC10
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8026EE24
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8026EF64
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8026EF74
 * Size:	0000E4
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	TeamList* teamList;
	InitialParam param;
	param._00     = 100.0f;
	Obj* elecHiba = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	Obj* elecHibaPartner;
	Obj* potentialPartner;
	if (elecHiba) {
		elecHiba->_2E4 = birthArg.m_position;
		elecHiba->setElecHibaPosition(&param, 1.0f);
		teamList = &elecHiba->m_teamList;
		elecHiba->createEffect(true);

		elecHibaPartner = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
		if (elecHibaPartner) {
			elecHibaPartner->_2E4 = birthArg.m_position;
			elecHibaPartner->setElecHibaPosition(&param, -1.0f);
			elecHibaPartner->createEffect(false);
			teamList->add(&elecHibaPartner->m_teamList);
		}
	}

	return elecHiba;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051B0C0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	stfs     f0, 8(r1)
	bl       birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	or.      r30, r3, r3
	beq      lbl_8026F034
	lfs      f0, 0(r28)
	addi     r4, r1, 8
	lfs      f1, lbl_8051B0D4@sda21(r2)
	stfs     f0, 0x2e4(r30)
	lfs      f0, 4(r28)
	stfs     f0, 0x2e8(r30)
	lfs      f0, 8(r28)
	stfs     f0, 0x2ec(r30)
	bl       setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf
	mr       r3, r30
	addi     r31, r30, 0x2c8
	li       r4, 1
	bl       createEffect__Q34Game8ElecHiba3ObjFb
	mr       r3, r29
	mr       r4, r28
	bl       birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	or.      r0, r3, r3
	beq
lbl_8026F034
  lfs      f0, 0(r28)
  mr       r29, r0
  lfs      f1,
	lbl_8051B0DC@sda21(r2)
	addi     r4, r1, 8
	stfs     f0, 0x2e4(r29)
	lfs      f0, 4(r28)
	stfs     f0, 0x2e8(r29)
	lfs      f0, 8(r28)
	stfs     f0, 0x2ec(r29)
	bl       setElecHibaPosition__Q34Game8ElecHiba3ObjFPQ34Game8ElecHiba12InitialParamf
	mr       r3, r29
	li       r4, 0
	bl       createEffect__Q34Game8ElecHiba3ObjFb mr r3, r31
	addi     r4, r29, 0x2c8
	bl       add__5CNodeFP5CNode

lbl_8026F034:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace ElecHiba
} // namespace Game
