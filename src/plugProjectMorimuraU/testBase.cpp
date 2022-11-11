#include "Morimura/Bases.h"

namespace Morimura {
u64 TTestBase::mIsSection;

/*
 * --INFO--
 * Address:	803491C8
 * Size:	000084
 */
TTestBase::TTestBase(char* name)
{
	m_timer        = 0.0f;
	m_timerLength  = 0.5f;
	m_fadeFraction = 0.0f;
	m_fadeAlpha    = 0;

	_45 = 0;

	strcpy(m_baseName, name);
	m_name = m_baseName;
}

/*
 * --INFO--
 * Address:	8034924C
 * Size:	000020
 */
bool TTestBase::doStart(Screen::StartSceneArg const*)
{
	m_fadeFraction = 0.0f;
	m_timer        = 0.0f;
	m_fadeAlpha    = 0;

	_45 = 0;

	return true;
}

/*
 * --INFO--
 * Address:	8034926C
 * Size:	000010
 */
bool TTestBase::doEnd(Screen::EndSceneArg const*)
{
	m_timer = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8034927C
 * Size:	0000B0
 */
bool TTestBase::doUpdateFadein()
{
	// Increase the fade timer, if it goes over the max, then clamp it
	m_timer += sys->m_deltaTime;
	if (m_timer > m_timerLength) {
		m_timer = m_timerLength;
	}

	// Work out the fade-in amount based on the timer
	m_fadeFraction = m_timer / m_timerLength;
	m_fadeAlpha    = 255.0f * m_fadeFraction;

	doUpdate();

	// Function returns true if the fade-in is done
	if (m_timer >= m_timerLength) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034932C
 * Size:	00000C
 */
void TTestBase::doUpdateFinish() { m_timer = 0.0f; }

/*
 * --INFO--
 * Address:	80349338
 * Size:	0000B8
 */
bool TTestBase::doUpdateFadeout()
{
	// Increase the fade timer, if it goes over the max, then clamp it
	m_timer += sys->m_deltaTime;
	if (m_timer > m_timerLength) {
		m_timer = m_timerLength;
	}

	// An equation that works out the inverse of the fade-in
	m_fadeFraction = 1.0f - (m_timer / m_timerLength);
	m_fadeAlpha    = 255.0f * m_fadeFraction;

	doUpdate();

	// Function returns true if the fade-out is done
	if (m_timer >= m_timerLength) {
		return true;
	}

	return false;
}
} // namespace Morimura
