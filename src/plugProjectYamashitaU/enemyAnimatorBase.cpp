#include "Game/EnemyAnimatorBase.h"

namespace Game {
const f32 EnemyAnimatorBase::defaultAnimSpeed = 30.0f;

/*
 * --INFO--
 * Address:	80127974
 * Size:	000044
 */
EnemyAnimatorBase::EnemyAnimatorBase()
{
	m_animSpeed = 30.0f;
	_08         = 1.0f;
	reset();
	reset();
}

/*
 * --INFO--
 * Address:	801279B8
 * Size:	000124
 */
void EnemyAnimatorBase::animate(float speedFactor)
{
	if (!(m_flags.m_flags & 1)) {
		if (m_flags.m_flags & 2) {
			_08 *= 0.9f;
			if (_08 < 0.1f) {
				_08 = 0.0f;
				m_flags.m_flags &= ~4 | 1;
				m_flags.m_flags |= 1;
			}
		} else if (m_flags.m_flags & 4) {
			_08 *= 1.1f;
			if (_08 > 1.0f) {
				_08 = 1.0f;
				m_flags.m_flags &= ~3;
				_08 = 1.0f;
			}
		}

		getAnimator().animate(speedFactor * _08);
	} else {
		getAnimator().animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	80127ADC
 * Size:	000124
 */
void EnemyAnimatorBase::animate(int animatorNum, float speedFactor)
{
	if (!(m_flags.m_flags & 1)) {
		if (m_flags.m_flags & 2) {
			_08 *= 0.9f;
			if (_08 < 0.1f) {
				_08 = 0.0f;
				m_flags.m_flags &= ~4 | 1;
				m_flags.m_flags |= 1;
			}
		} else if (m_flags.m_flags & 4) {
			_08 *= 1.1f;
			if (_08 > 1.0f) {
				_08 = 1.0f;
				m_flags.m_flags &= ~3;
				_08 = 1.0f;
			}
		}

		getAnimator(animatorNum).animate(speedFactor * _08);
	} else {
		getAnimator().animate(0.0f);
	}
}
} // namespace Game
