#include "efx2d/TChasePos.h"
#include "efx2d/TForever.h"
#include "efx2d/TSimple.h"
#include "JSystem/JUT/JUTException.h"
#include "TParticle2dMgr.h"

namespace efx2d {

/*
 * --INFO--
 * Address:	803B9830
 * Size:	000098
 */
bool TSimple1::create(Arg* arg)
{
	P2ASSERTLINE(10, arg != nullptr);

	Vector2f vec = *arg;

	m_emitters[0] = particle2dMgr->create(m_effectIDs[0], vec, _05, _04);

	if (m_emitters[0] == nullptr) {
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	803B98C8
 * Size:	0000B0
 */
bool TSimple2::create(Arg* arg)
{
	P2ASSERTLINE(25, arg != nullptr);

	Vector2f vec = *arg;

	for (int i = 0; i < 2; i++) {
		m_emitters[i] = particle2dMgr->create(m_effectIDs[i], vec, _05, _04);
		if (m_emitters[i] == nullptr) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	803B9978
 * Size:	0000B0
 */
bool TSimple3::create(Arg* arg)
{
	P2ASSERTLINE(40, arg != nullptr);

	Vector2f vec = *arg;

	for (int i = 0; i < 3; i++) {
		m_emitters[i] = particle2dMgr->create(m_effectIDs[i], vec, _05, _04);
		if (m_emitters[i] == nullptr) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	803B9A28
 * Size:	0000A4
 */
bool TForever::create(Arg* arg)
{
	P2ASSERTLINE(54, arg != nullptr);

	Vector2f vec = *arg;

	if (m_emitter) {
		return false;
	}

	m_emitter = particle2dMgr->create(m_efxID, vec, _05, _04);
	return m_emitter != nullptr;
}

/*
 * --INFO--
 * Address:	803B9ACC
 * Size:	00003C
 */
void TForever::kill()
{
	particle2dMgr->kill(m_emitter);
	m_emitter = nullptr;
}

/*
 * --INFO--
 * Address:	803B9B08
 * Size:	00003C
 */
void TForever::fade()
{
	particle2dMgr->fade(m_emitter);
	m_emitter = nullptr;
}

/*
 * --INFO--
 * Address:	803B9B44
 * Size:	000024
 */
void TForever::setGlobalScale(float scale)
{
	JPABaseEmitter* emitter = m_emitter;

	if (emitter == nullptr) {
		return;
	}

	emitter->_98 = scale;
	emitter->_B0 = scale;
	emitter->_B4 = scale;
}

/*
 * --INFO--
 * Address:	803B9B68
 * Size:	000028
 */
void TForever::setGlobalEnvColor(JUtility::TColor& color)
{
	JPABaseEmitter* emitter = m_emitter;

	if (emitter) {
		m_emitter->m_color.setRGB(color);
	}
}

/*
 * --INFO--
 * Address:	803B9B90
 * Size:	000014
 */
void TForever::setGlobalAlpha(u8 alpha)
{
	if (m_emitter) {
		m_emitter->_BB = alpha;
	}
}

/*
 * --INFO--
 * Address:	803B9BA4
 * Size:	000080
 */
TForeverN::TForeverN(u8 length)
    : m_length(length)
{
	m_forevers = new TForever[m_length];
}

/*
 * --INFO--
 * Address:	803B9C24
 * Size:	000050
 */
TForever::TForever()
{
	m_efxID   = 0;
	m_emitter = nullptr;
}

/*
 * --INFO--
 * Address:	803B9C74
 * Size:	000098
 */
bool TForeverN::create(Arg* arg)
{
	bool success = true;
	for (u8 i = 0; i < m_length; i++) {
		if (!m_forevers[i].create(arg)) {
			success = false;
		}
	}
	return success;
}

/*
 * --INFO--
 * Address:	803B9D0C
 * Size:	00006C
 */
void TForeverN::kill()
{
	for (u8 i = 0; i < m_length; i++) {
		m_forevers[i].kill();
	}
}

/*
 * --INFO--
 * Address:	803B9D78
 * Size:	00006C
 */
void TForeverN::fade()
{
	for (u8 i = 0; i < m_length; i++) {
		m_forevers[i].fade();
	}
}

/*
 * --INFO--
 * Address:	803B9DE4
 * Size:	00007C
 */
void TForeverN::setGroup(u8 group)
{
	for (u8 i = 0; i < m_length; i++) {
		m_forevers[i].setGroup(group);
	}
}

/*
 * --INFO--
 * Address:	803B9E60
 * Size:	000040
 */
void TForeverN::setGlobalAlpha(u8 alpha)
{
	for (u8 i = 0; i < m_length; i++) {
		JPABaseEmitter* emitter = m_forevers[i].m_emitter;
		if (emitter) {
			emitter->_BB = alpha;
		}
	}
}

/*
 * --INFO--
 * Address:	803B9EA0
 * Size:	000088
 */
bool TChasePos::create(Arg* arg)
{
	if (m_emitter) {
		return false;
	}

	m_emitter = particle2dMgr->create(m_efxID, *_14, _05, _04);

	if (m_emitter) {
		m_emitter->m_emitterCallback = this;
	} else {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	803B9F28
 * Size:	000078
 */
void TChasePos::execute(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(214, _14 != nullptr);

	float x = _14->x;
	float y = _14->y;

	emitter->_A4.x = x;
	emitter->_A4.y = y;
	emitter->_A4.z = 0.0f;
}

/*
 * --INFO--
 * Address:	803B9FA0
 * Size:	000088
 */
bool TChasePosDir::create(Arg* arg)
{
	if (m_emitter) {
		return false;
	}

	m_emitter = particle2dMgr->create(m_efxID, *_14, _05, _04);

	if (m_emitter) {
		m_emitter->m_emitterCallback = this;
	} else {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	803BA028
 * Size:	0000B8
 */
void TChasePosDir::execute(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(244, _14 != nullptr);
	P2ASSERTLINE(245, _18 != nullptr);

	float x1 = _14->x;
	float y1 = _14->y;

	float x2 = _18->x;
	float y2 = _18->y;

	emitter->_A4.x = x1;
	emitter->_A4.y = y1;
	emitter->_A4.z = 0.0f;

	emitter->_18.x = x2;
	emitter->_18.y = y2;
	emitter->_18.z = 0.0f;
}
} // namespace efx2d
