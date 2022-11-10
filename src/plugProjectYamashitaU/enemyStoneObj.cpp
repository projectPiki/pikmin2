#include "types.h"
#include "Game/EnemyStone.h"
#include "Game/generalEnemyMgr.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "nans.h"

namespace Game {
namespace EnemyStone {

/*
 * --INFO--
 * Address:	80129B30
 * Size:	0000A8
 */
Obj::Obj(EnemyBase* enemy, Info* info)
    : m_info(info)
    , m_enemy(enemy)
    , _50(0)
{
	_50 = 0;
	m_nodeArray[0].clearRelations();
	m_nodeArray[1].clearRelations();
}

/*
 * --INFO--
 * Address:	80129BD8
 * Size:	000104
 */
bool Obj::start()
{
	_50         = 0;
	bool result = false;
	if (generalEnemyMgr->m_stoneMgr.regist(this) != false) {
		_50 |= 0x20;
		float appearVal = 0.0f;
		float normVal   = 1.0f / (float)m_info->m_infoCnt;

		for (int i = 0; i < 2; i++) {
			CNode* currChild = m_nodeArray[i].m_child;
			while (currChild) {
				CNode* nextChild = currChild->m_next;
				static_cast<DrawInfo*>(currChild)->appear(m_enemy, appearVal);
				appearVal -= normVal;
				currChild = nextChild;
			}
		}

		result = true;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80129CDC
 * Size:	0000E0
 */
void Obj::shake()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r3, 0x50(r3)
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_80129D8C
	ori      r3, r3, 8
	lis      r0, 0x4330
	stb      r3, 0x50(r28)
	mr       r31, r28
	lfd      f1, lbl_80518040@sda21(r2)
	li       r30, 0
	lwz      r3, 0x18(r28)
	stw      r0, 8(r1)
	lbz      r0, 0(r3)
	lfs      f2, lbl_8051803C@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f31, lbl_80518038@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fdivs    f30, f2, f0

lbl_80129D54:
	lwz      r3, 0x2c(r31)
	b        lbl_80129D74

lbl_80129D5C:
	fmr      f1, f31
	lwz      r29, 4(r3)
	lwz      r4, 0x4c(r28)
	bl       shake__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBasef
	fsubs    f31, f31, f30
	mr       r3, r29

lbl_80129D74:
	cmplwi   r3, 0
	bne      lbl_80129D5C
	addi     r30, r30, 1
	addi     r31, r31, 0x18
	cmpwi    r30, 2
	blt      lbl_80129D54

lbl_80129D8C:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x44(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80129DBC
 * Size:	0002A8
 */
void Obj::update()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	li       r29, 0
	stw      r28, 0x50(r1)
	mr       r28, r31

lbl_80129DE4:
	lwz      r3, 0x2c(r28)
	b        lbl_80129DFC

lbl_80129DEC:
	lwz      r30, 4(r3)
	lwz      r4, 0x4c(r31)
	bl       update__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase
	mr       r3, r30

lbl_80129DFC:
	cmplwi   r3, 0
	bne      lbl_80129DEC
	addi     r29, r29, 1
	addi     r28, r28, 0x18
	cmpwi    r29, 2
	blt      lbl_80129DE4
	lbz      r3, 0x50(r31)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	bne      lbl_80129E9C
	lwz      r3, 0x4c(r31)
	li       r4, 0x50b0
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 2
	bl       checkDrawInfoState__Q34Game10EnemyStone3ObjFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012A044
	lbz      r0, 0x50(r31)
	mr       r28, r31
	li       r30, 0
	ori      r0, r0, 2
	stb      r0, 0x50(r31)

lbl_80129E68:
	lwz      r3, 0x2c(r28)
	b        lbl_80129E80

lbl_80129E70:
	lwz      r29, 4(r3)
	lwz      r4, 0x4c(r31)
	bl       fit__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase
	mr       r3, r29

lbl_80129E80:
	cmplwi   r3, 0
	bne      lbl_80129E70
	addi     r30, r30, 1
	addi     r28, r28, 0x18
	cmpwi    r30, 2
	blt      lbl_80129E68
	b        lbl_8012A044

lbl_80129E9C:
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	bne      lbl_80129FB4
	mr       r3, r31
	li       r4, 4
	bl       checkDrawInfoState__Q34Game10EnemyStone3ObjFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012A044
	lbz      r0, 0x50(r31)
	ori      r0, r0, 4
	stb      r0, 0x50(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8012A044
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8012A044
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xb
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8012A044
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8012A044
	lfs      f0, lbl_80518038@sda21(r2)
	lis      r4, lbl_8047BF18@ha
	li       r0, 0
	addi     r3, r1, 8
	addi     r4, r4, lbl_8047BF18@l
	stw      r0, 0x18(r1)
	stw      r4, 0x14(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x44(r1)
	lwz      r4, 0x4c(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x14
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x4c(r31)
	stw      r0, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xb
	bl       setDemoFlag__Q24Game8PlayDataFi
	b        lbl_8012A044

lbl_80129FB4:
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_8012A044
	mr       r3, r31
	li       r4, 6
	bl       checkDrawInfoState__Q34Game10EnemyStone3ObjFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012A044
	li       r30, 0
	mr       r28, r31

lbl_80129FD8:
	lwz      r3, 0x2c(r28)
	b        lbl_80129FF0

lbl_80129FE0:
	lwz      r29, 4(r3)
	lwz      r4, 0x4c(r31)
	bl       disappear__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase
	mr       r3, r29

lbl_80129FF0:
	cmplwi   r3, 0
	bne      lbl_80129FE0
	addi     r30, r30, 1
	addi     r28, r28, 0x18
	cmpwi    r30, 2
	blt      lbl_80129FD8
	lwz      r3, 0x4c(r31)
	li       r4, 0x58b3
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x50(r31)
	mr       r4, r31
	ori      r0, r0, 0x10
	stb      r0, 0x50(r31)
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r3, r3, 0x58
	bl       release__Q34Game10EnemyStone3MgrFPQ34Game10EnemyStone3Obj

lbl_8012A044:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A064
 * Size:	000088
 */
void Obj::checkDrawInfoState(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4

lbl_8012A08C:
	lwz      r3, 0x2c(r31)
	b        lbl_8012A0B0

lbl_8012A094:
	lwz      r29, 4(r3)
	bl       getStateID__Q34Game10EnemyStone8DrawInfoFv
	cmpw     r28, r3
	beq      lbl_8012A0AC
	li       r3, 0
	b        lbl_8012A0CC

lbl_8012A0AC:
	mr       r3, r29

lbl_8012A0B0:
	cmplwi   r3, 0
	bne      lbl_8012A094
	addi     r30, r30, 1
	addi     r31, r31, 0x18
	cmpwi    r30, 2
	blt      lbl_8012A08C
	li       r3, 1

lbl_8012A0CC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A0EC
 * Size:	0000B4
 */
void Obj::dead()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28

lbl_8012A114:
	lwz      r3, 0x2c(r31)
	b        lbl_8012A12C

lbl_8012A11C:
	lwz      r29, 4(r3)
	lwz      r4, 0x4c(r28)
	bl       dead__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase
	mr       r3, r29

lbl_8012A12C:
	cmplwi   r3, 0
	bne      lbl_8012A11C
	addi     r30, r30, 1
	addi     r31, r31, 0x18
	cmpwi    r30, 2
	blt      lbl_8012A114
	lwz      r3, 0x4c(r28)
	li       r4, 0x58b3
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x50(r28)
	mr       r4, r28
	ori      r0, r0, 0x10
	stb      r0, 0x50(r28)
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r3, r3, 0x58
	bl       release__Q34Game10EnemyStone3MgrFPQ34Game10EnemyStone3Obj
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace EnemyStone
} // namespace Game
