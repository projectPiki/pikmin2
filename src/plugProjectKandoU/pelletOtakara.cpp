#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/ItemOnyon.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "Game/MapMgr.h"
#include "PSM/Otakara.h"
#include "nans.h"
namespace Game {
namespace PelletOtakara {

Mgr* mgr;

/*
 * --INFO--
 * Address:	801FFE64
 * Size:	000094
 */
void Object::constructor()
{
	bool isVS = false;
	if (gameSystem && gameSystem->isVersusMode()) {
		isVS = true;
	}
	mSoundMgr = new PSM::PelletOtakara(this, isVS);
	shadowMgr->createShadow(this);
	mFbMaterial  = nullptr;
	mFbTextureID = -1;
	mBedamaColor = -1;
}

/*
 * --INFO--
 * Address:	801FFEF8
 * Size:	0000F4
 */
void Object::do_onInit(CreatureInitArg*)
{
	P2ASSERTLINE(171, mSoundMgr->getCastType() == 12);
	PSM::PelletOtakara* psm = static_cast<PSM::PelletOtakara*>(mSoundMgr);
	psm->mBedamaType        = 0;
	if (gameSystem->isVersusMode()) {
		u32 type = mPelletFlag;
		if (type == FLAG_VS_BEDAMA_RED) {
			psm->mBedamaType = PSM::Otakara::PSMBedama_Red;
			mBedamaColor     = 1;
		} else if (type == FLAG_VS_BEDAMA_BLUE) {
			psm->mBedamaType = PSM::Otakara::PSMBedama_Blue;
			mBedamaColor     = 0;
		} else if (type == FLAG_VS_BEDAMA_YELLOW) {
			psm->mBedamaType = PSM::Otakara::PSMBedama_Yellow;
			mBedamaColor     = 2;
		} else if (type == FLAG_VS_CHERRY) {
			psm->mBedamaType = PSM::Otakara::PSMBedama_Cherry;
			mBedamaColor     = 2;
		} else {
			mBedamaColor = -1;
		}
	}
}

/*
 * --INFO--
 * Address:	801FFFEC
 * Size:	000020
 */
void Object::getShadowParam(ShadowParam& shadowParam) { Pellet::getShadowParam(shadowParam); }

/*
 * --INFO--
 * Address:	8020000C
 * Size:	000148
 */
void Object::sound_otakaraEventStart()
{
	P2ASSERTLINE(253, mSoundMgr->getCastType() == 12);

	PSM::PelletOtakara* psm = static_cast<PSM::PelletOtakara*>(mSoundMgr);
	if (gameSystem->isVersusMode()) {
		int color = mCarryColor;
		int id    = -1;
		if (color == Blue) {
			id = 0;
		} else if (color == Red) {
			id = 1;
		}

		if (id != -1) {
			Onyon* goal = ItemOnyon::mgr->getOnyon(id);

			if (mPelletFlag == FLAG_VS_BEDAMA_RED) {
				if (id != Blue) {
					goal = nullptr;
				}
			} else if (mPelletFlag == FLAG_VS_BEDAMA_BLUE) {
				if (id != Red) {
					goal = nullptr;
				}
			} else if (mPelletFlag != FLAG_VS_CHERRY && mPelletFlag != FLAG_VS_BEDAMA_YELLOW) {
				goal = nullptr;
			}

			psm->setGoalOnyon(goal);
			if (goal) {
				psm->otakaraEventStart();
			}
		}
		return;
	}
	psm->otakaraEventStart();
}

/*
 * --INFO--
 * Address:	80200154
 * Size:	000148
 */
void Object::sound_otakaraEventRestart()
{
	P2ASSERTLINE(309, mSoundMgr->getCastType() == 12);

	PSM::PelletOtakara* psm = static_cast<PSM::PelletOtakara*>(mSoundMgr);
	if (gameSystem->isVersusMode()) {
		int color = mCarryColor;
		int id    = -1;
		if (color == Blue) {
			id = 0;
		} else if (color == Red) {
			id = 1;
		}

		if (id != -1) {
			Onyon* goal = ItemOnyon::mgr->getOnyon(id);

			if (mPelletFlag == FLAG_VS_BEDAMA_RED) {
				if (id != Blue) {
					goal = nullptr;
				}
			} else if (mPelletFlag == FLAG_VS_BEDAMA_BLUE) {
				if (id != Red) {
					goal = nullptr;
				}
			} else if (mPelletFlag != FLAG_VS_CHERRY && mPelletFlag != FLAG_VS_BEDAMA_YELLOW) {
				goal = nullptr;
			}

			psm->setGoalOnyon(goal);
			if (goal) {
				psm->otakaraEventRestart();
			}
		}
		return;
	}
	psm->otakaraEventRestart();
}

/*
 * --INFO--
 * Address:	8020029C
 * Size:	000074
 */
void Object::sound_otakaraEventStop()
{
	P2ASSERTLINE(360, mSoundMgr->getCastType() == 12);

	PSM::PelletOtakara* psm = static_cast<PSM::PelletOtakara*>(mSoundMgr);
	psm->otakaraEventStop();
}

/*
 * --INFO--
 * Address:	80200310
 * Size:	000074
 */
void Object::sound_otakaraEventFinish()
{
	P2ASSERTLINE(373, mSoundMgr->getCastType() == 12);

	PSM::PelletOtakara* psm = static_cast<PSM::PelletOtakara*>(mSoundMgr);
	psm->otakaraEventFinish();
}

/*
 * --INFO--
 * Address:	80200384
 * Size:	0000D8
 */
void Object::onCreateShape()
{
	if (mConfig->mParams.mIndirectState == PelletConfig::Indirect_Yes) {
		u16 id      = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterialNames->getIndex("indirect_tex");
		mFbMaterial = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[id];

		for (u16 i = 0; i < mModel->mJ3dModel->mModelData->mMaterialTable.mTextures->mNum; i++) {
			const char* tex = mModel->mJ3dModel->getModelData()->mMaterialTable.mTextureNames->getName(i);
			if (!strcmp(tex, "fbtex")) {
				mFbTextureID = i;
			}
		}
		return;
	}

	mFbMaterial  = nullptr;
	mFbTextureID = -1;
}

/*
 * --INFO--
 * Address:	8020045C
 * Size:	0000B8
 */
void Object::theEntry()
{
	BaseGameSection* game = gameSystem->mSection;
	if (game->mDraw2DCreature != this && mConfig->mParams.mIndirectState == PelletConfig::Indirect_Yes) {
		game->setDrawBuffer(8);
		mModel->mJ3dModel->entry();
		game->setDrawBuffer(0);
	} else {
		mModel->mJ3dModel->entry();
	}
	mModel->mJ3dModel->calcDiffTexMtx();
}

/*
 * --INFO--
 * Address:	80200514
 * Size:	000268
 */
void Object::changeMaterial()
{
	if (mFbMaterial && !gameSystem->isMultiplayerMode()) {
		Mtx44 copyMatrix;
		PSMTX44Copy(sys->mGfx->mCurrentViewport->mCamera->mProjectionMtx, copyMatrix);

		copyMatrix[2][0] = copyMatrix[3][0];
		copyMatrix[2][1] = copyMatrix[3][1];
		copyMatrix[2][2] = copyMatrix[3][2];
		copyMatrix[2][3] = copyMatrix[3][3];

		copyMatrix[3][0] = 0.0f;
		copyMatrix[3][1] = 0.0f;
		copyMatrix[3][2] = 0.0f;
		copyMatrix[3][3] = 1.0f;

		mModel->mJ3dModel->calcMaterial();

		J3DTexMtx* texMtx = mFbMaterial->mTexGenBlock->getTexMtx(1);
		texMtx->_24[0][0] = copyMatrix[0][0];
		texMtx->_24[0][1] = copyMatrix[0][1];
		texMtx->_24[0][2] = copyMatrix[0][2];
		texMtx->_24[0][3] = copyMatrix[0][3];
		texMtx->_24[1][0] = copyMatrix[1][0];
		texMtx->_24[1][1] = copyMatrix[1][1];
		texMtx->_24[1][2] = copyMatrix[1][2];
		texMtx->_24[1][3] = copyMatrix[1][3];
		texMtx->_24[2][0] = copyMatrix[2][0];
		texMtx->_24[2][1] = copyMatrix[2][1];
		texMtx->_24[2][2] = copyMatrix[2][2];
		texMtx->_24[2][3] = copyMatrix[2][3];
		texMtx->_24[3][0] = texMtx->_24[3][1] = texMtx->_24[3][2] = 0.0f;
		texMtx->_24[3][3]                                         = 1.0f;

		u16 id              = mFbTextureID;
		const ResTIMG* xfb  = gameSystem->getXfbTexture()->getTexInfo();
		J3DTexture* texData = mModel->mJ3dModel->mModelData->getTexture();

		*texData->getResTIMG(id) = *xfb;

		texData->setImageOffset((u32)xfb, id);
		texData->setPaletteOffset((u32)xfb, id);
	}
}

/*
 * --INFO--
 * Address:	8020077C
 * Size:	0000B0
 */
Mgr::Mgr()
    : FixedSizePelletMgr<Object>(PelletList::OTAKARA)
{
}

/*
 * --INFO--
 * Address:	80200AD8
 * Size:	00006C
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("Otakara", nullptr);
	alloc(PELLET_OTAKARA_MAXCOUNT);
	load_texArc("otakara_texts.szs");
	mCollPartMgr.alloc(PELLET_OTAKARA_MAXCOLLPART);
	sys->heapStatusEnd("Otakara");
}

/*
 * --INFO--
 * Address:	80200B44
 * Size:	000024
 */
GenPelletParm* Mgr::generatorNewPelletParm() { return new GenPelletParm; }

/*
 * --INFO--
 * Address:	80200B68
 * Size:	000148
 */
Pellet* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenPelletParm* genParm)
{
	PelletConfig* config = mgr->getPelletConfig(genParm->mIndex);
	PelletInitArg arg;
	arg.mTextIdentifier = config->mParams.mName.mData;
	arg.mPelletType     = PELTYPE_TREASURE;
	arg.mPelletIndex    = genParm->mIndex;
	arg.mPelView        = nullptr;

	Pellet* obj = pelletMgr->birth(&arg);
	if (obj) {
		if (mapMgr) {
			f32 y = mapMgr->getMinY(pos);
			pos.y = obj->getCylinderHeight() * 0.5f + y;
		}
		obj->setPosition(pos, false);
		Matrixf mtx;
		mtx.makeTR(pos, rot);
		obj->setOrientation(mtx);
	}
	return obj;
}

/*
 * --INFO--
 * Address:	80200CB0
 * Size:	000030
 */
void Mgr::generatorWrite(Stream& data, GenPelletParm* parm) { data.writeShort((u16)parm->mIndex); }

/*
 * --INFO--
 * Address:	80200CE0
 * Size:	000038
 */
void Mgr::generatorRead(Stream& data, GenPelletParm* parm, u32 flag) { parm->mIndex = (u16)data.readShort(); }

} // namespace PelletOtakara
} // namespace Game
