
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
		int adjIndex       = ((_04 + m_count) - 1) % m_count; // (_04 + (m_count - 1) % m_count);
		Footmark* currMark = &m_marks[adjIndex];

		f32 dist = _distanceBetween(currMark->m_position, mark.m_position);
		if (dist < 20.0f) {
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

			Vector3f diff = position - mark->m_position;
			f32 dist      = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
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
