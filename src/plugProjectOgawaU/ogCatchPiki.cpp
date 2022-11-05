#include "og/Screen/callbackNodes.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/JKR/JKRArchive.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80307820
 * Size:	000080
 */
CallBack_CatchPiki::CallBack_CatchPiki()
{
	m_pikiTypePtr = nullptr;
	m_pikiIcon    = nullptr;
}

/*
 * --INFO--
 * Address:	803078DC
 * Size:	0000C0
 */
void CallBack_CatchPiki::init(J2DScreen* screen, u64 tag, u32* pikiTypePtr, JKRArchive* archive)
{
	m_pikiIcon     = static_cast<J2DPicture*>(screen->search(tag));
	m_pikiTypePtr  = pikiTypePtr;
	m_currPikiType = *pikiTypePtr;

	char** iconNames   = (char**)PikiIconTextureName;
	ResTIMG** textures = PikiIconTextureResTIMG;

	for (int i = 0; i < 19; i++) {
		textures[i] = static_cast<ResTIMG*>(archive->getResource('TIMG', iconNames[i]));
	}

	setPikiIcon(*pikiTypePtr);
	update();
}

/*
 * --INFO--
 * Address:	8030799C
 * Size:	0000F0
 */
void CallBack_CatchPiki::update()
{
	if (m_pikiTypePtr && m_pikiIcon) {
		u32 pikiType = *m_pikiTypePtr;
		if (pikiType != m_currPikiType && pikiType < 19) {
			setPikiIcon(pikiType);
			m_scaleMgr.up(0.4f, 30.0f, 0.7f, 0.0f);
			m_currPikiType = pikiType;
		}

		f32 scale = m_scaleMgr.calc();
		m_pikiIcon->rotate(m_pikiIcon->_020.getWidth() / 2, m_pikiIcon->_020.getHeight() / 2, J2DROTATE_Z, 0.0f);
		m_pikiIcon->updateScale(scale);
	}
}

/*
 * --INFO--
 * Address:	80307A8C
 * Size:	00004C
 */
void CallBack_CatchPiki::setPikiIcon(int pikiType)
{
	if (pikiType < 19) {
		m_pikiIcon->changeTexture(PikiIconTextureResTIMG[pikiType], 0);
	}
}

} // namespace Screen
} // namespace og
