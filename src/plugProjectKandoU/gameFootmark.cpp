
#include "Game/Footmark.h"
#include "Game/GameSystem.h"

namespace Game {

/*
 * --INFO--
 * Address:	801B4794
 * Size:	00001C
 */
Footmark::Footmark()
{
	m_position = Vector3f(0.0f);
	m_flags    = 0;
}

/*
 * --INFO--
 * Address:	801B47B0
 * Size:	00001C
 */
Footmarks::Footmarks()
{
	m_marks = nullptr;
	m_count = 0;
	_08     = 0;
	_04     = 0;
	_10     = 0;
}

/*
 * --INFO--
 * Address:	801B47CC
 * Size:	00006C
 */
void Footmarks::alloc(int amt)
{
	m_marks = new Footmark[amt];
	m_count = amt;
	_08     = 0;
	_04     = 0;
}

/*
 * --INFO--
 * Address:	801B4838
 * Size:	000134
 */
void Footmarks::add(Footmark& mark)
{
	m_position = mark.m_position;
	if (_08 >= 2) {
		int adjIndex       = (_04 + (m_count - 1)) % m_count;
		f32 p1             = 0.0f;
		Footmark* currMark = &m_marks[adjIndex];
		Vector3f diff      = currMark->m_position - mark.m_position;
		p1                 = _lenVec(diff);
		if (p1 < 20.0f) {
			return;
		}
	}

	u32 timer            = gameSystem->m_frameTimer;
	Footmark* testMark   = &m_marks[_04];
	testMark->m_position = mark.m_position;
	testMark->m_flags    = mark.m_flags;
	m_marks[_04].m_flags = timer;
	_04                  = (_04 + 1) % m_count;
	if (_08 < m_count) {
		_08++;
	}
	_10 = timer;
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1C(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0x2
	  blt-      .loc_0xAC
	  lwz       r7, 0xC(r3)
	  lwz       r5, 0x4(r3)
	  subi      r0, r7, 0x1
	  lwz       r6, 0x0(r3)
	  add       r5, r5, r0
	  lfs       f2, 0x4(r4)
	  divw      r0, r5, r7
	  lfs       f4, 0x8(r4)
	  lfs       f1, 0x0(r4)
	  lfs       f0, -0x4F48(r2)
	  mullw     r0, r0, r7
	  sub       r0, r5, r0
	  rlwinm    r0,r0,4,0,27
	  add       r5, r6, r0
	  lfs       f3, 0x4(r5)
	  lfs       f5, 0x8(r5)
	  fsubs     f3, f3, f2
	  lfs       f2, 0x0(r5)
	  fsubs     f4, f5, f4
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmuls     f3, f4, f4
	  fmadds    f1, f1, f1, f2
	  fadds     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x9C
	  ble-      .loc_0xA0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xA0

	.loc_0x9C:
	  fmr       f1, f0

	.loc_0xA0:
	  lfs       f0, -0x4F44(r2)
	  fcmpo     cr0, f1, f0
	  bltlr-

	.loc_0xAC:
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r5, 0x0(r3)
	  rlwinm    r0,r0,4,0,27
	  lwz       r6, 0x50(r6)
	  lfs       f0, 0x0(r4)
	  add       r5, r5, r0
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r5)
	  lwz       r0, 0xC(r4)
	  stw       r0, 0xC(r5)
	  lwz       r0, 0x4(r3)
	  lwz       r4, 0x0(r3)
	  rlwinm    r0,r0,4,0,27
	  add       r4, r4, r0
	  stw       r6, 0xC(r4)
	  lwz       r5, 0x4(r3)
	  lwz       r4, 0xC(r3)
	  addi      r5, r5, 0x1
	  divw      r0, r5, r4
	  mullw     r0, r0, r4
	  sub       r0, r5, r0
	  stw       r0, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r4, r0
	  bge-      .loc_0x12C
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)

	.loc_0x12C:
	  stw       r6, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B496C
 * Size:	00004C
 */
Footmark* Footmarks::get(int index)
{
	if (index < 0 || index >= _08) {
		return nullptr;
	}

	return &m_marks[(((m_count + _04) - (index + 1)) % m_count)];
}

/*
 * --INFO--
 * Address:	801B49B8
 * Size:	0000C8
 */
Footmark* Footmarks::findNearest2(Vector3f& position, int idx)
{
	int minIndex = -1;
	f32 minDist  = 1280000.0f;
	for (int i = 0; i < _08 - 1; i++) {
		int adjIndex = (_04 + i) % m_count;
		if (idx == -1 || (int)m_marks[adjIndex].m_flags > idx) {
			Footmark* mark = &m_marks[adjIndex];
			Vector3f diff  = position - mark->m_position;
			f32 dist       = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
			if (dist < minDist) {
				minDist  = dist;
				minIndex = adjIndex;
			}
		}
	}

	if (minIndex != -1) {
		return &m_marks[minIndex];
	}
	return nullptr;
}

} // namespace Game
