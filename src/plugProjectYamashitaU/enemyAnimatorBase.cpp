#include "Game/EnemyAnimatorBase.h"

namespace Game {
const f32 EnemyAnimatorBase::defaultAnimSpeed = 30.0f;

/*
 * --INFO--
 * Address:	80127974
 * Size:	000044
 */
EnemyAnimatorBase::EnemyAnimatorBase()
    : m_animSpeed(30.0f)
    , m_progress(1.0f)
{
	reset();
}

/*
 * --INFO--
 * Address:	801279B8
 * Size:	000124
 */
void EnemyAnimatorBase::animate(float speed)
{
	if (!(m_flags.typeView & EANIM_FLAG_STOPPED)) {
		if (m_flags.typeView & EANIM_FLAG_REWIND) {
			m_progress *= 0.9f;
			if (m_progress < 0.1f) {
				m_progress = 0.0f;

				m_flags.typeView &= ~EANIM_FLAG_FORWARD | EANIM_FLAG_STOPPED;
				m_flags.typeView |= EANIM_FLAG_STOPPED;
			}
		} else if (m_flags.typeView & EANIM_FLAG_FORWARD) {
			m_progress *= 1.1f;
			if (m_progress > 1.0f) {
				m_progress = 1.0f;

				m_flags.typeView &= ~(EANIM_FLAG_REWIND | EANIM_FLAG_STOPPED);
				m_progress = 1.0f;
			}
		}

		getAnimator().animate(speed * m_progress);
	} else {
		getAnimator().animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	80127ADC
 * Size:	000124
 */
void EnemyAnimatorBase::animate(int animatorNum, float speed)
{
	if (!(m_flags.typeView & EANIM_FLAG_STOPPED)) {
		if (m_flags.typeView & EANIM_FLAG_REWIND) {
			m_progress *= 0.9f;
			if (m_progress < 0.1f) {
				m_progress = 0.0f;

				m_flags.typeView &= ~EANIM_FLAG_FORWARD | EANIM_FLAG_STOPPED;
				m_flags.typeView |= EANIM_FLAG_STOPPED;
			}
		} else if (m_flags.typeView & EANIM_FLAG_FORWARD) {
			m_progress *= 1.1f;
			if (m_progress > 1.0f) {
				m_progress = 1.0f;

				m_flags.typeView &= ~(EANIM_FLAG_REWIND | EANIM_FLAG_STOPPED);
				m_progress = 1.0f;
			}
		}

		getAnimator(animatorNum).animate(speed * m_progress);
	} else {
		getAnimator().animate(0.0f);
	}
}
} // namespace Game
