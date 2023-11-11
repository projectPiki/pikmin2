#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/ItemOnyon.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "Game/MapMgr.h"
#include "PSM/Otakara.h"
#include "nans.h"
namespace Game {

PelletOtakara::Mgr* mgr;

/*
 * --INFO--
 * Address:	801FFE64
 * Size:	000094
 */
void PelletOtakara::Object::constructor()
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
void PelletOtakara::Object::do_onInit(Game::CreatureInitArg*)
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
void PelletOtakara::Object::getShadowParam(Game::ShadowParam& shadowParam) { Pellet::getShadowParam(shadowParam); }

/*
 * --INFO--
 * Address:	8020000C
 * Size:	000148
 */
void PelletOtakara::Object::sound_otakaraEventStart()
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
void PelletOtakara::Object::sound_otakaraEventRestart()
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
void PelletOtakara::Object::sound_otakaraEventStop()
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
void PelletOtakara::Object::sound_otakaraEventFinish()
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
void PelletOtakara::Object::onCreateShape()
{
	if (mConfig->mParams.mIndirectState == 2) {
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
void PelletOtakara::Object::theEntry()
{
	BaseGameSection* game = gameSystem->mSection;
	if (game->mDraw2DCreature != this && mConfig->mParams.mIndirectState == 2) {
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
void PelletOtakara::Object::changeMaterial()
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
		copyMtx44(texMtx->_24, copyMatrix);
		texMtx->_24[3][0] = texMtx->_24[3][1] = texMtx->_24[3][2] = 0.0f;
		texMtx->_24[3][3]                                         = 1.0f;

		J3DTexture* texData = mModel->mJ3dModel->mModelData->getTexture();
		JUTTexture* xfbTex  = gameSystem->getXfbTexture();
		u16 id              = mFbTextureID;
		ResTIMG* img        = texData->getResTIMG(id);

		*img = *xfbTex->mTexInfo;

		texData->setImageOffset((int)&img[id]);
		texData->setPaletteOffset((int)&img[id]);
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x458(r3)
	cmplwi   r0, 0
	beq      lbl_80200768
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_80200550
	cmpwi    r0, 3
	bne      lbl_80200554

lbl_80200550:
	li       r3, 1

lbl_80200554:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80200768
	lwz      r3, sys@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, 0x24(r3)
	lwz      r3, 0x25c(r3)
	lwz      r3, 0x44(r3)
	addi     r3, r3, 0xb4
	bl       PSMTX44Copy
	lfs      f5, 0x38(r1)
	lfs      f4, 0x3c(r1)
	lfs      f1, lbl_80519D20@sda21(r2)
	lfs      f3, 0x40(r1)
	lfs      f2, 0x44(r1)
	lfs      f0, lbl_80519D24@sda21(r2)
	stfs     f5, 0x28(r1)
	stfs     f4, 0x2c(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x458(r31)
	li       r4, 1
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f1, lbl_80519D20@sda21(r2)
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_80519D24@sda21(r2)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x14(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x18(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x1c(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x20(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x24(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x28(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x2c(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x30(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x34(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r3, 0x174(r31)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, 8(r3)
	lha      r0, 0x45c(r31)
	lwz      r3, 4(r3)
	lwz      r5, 0x54(r4)
	rlwinm   r0, r0, 5, 0xb, 0x1a
	lwz      r4, 0x6c(r3)
	lwz      r3, 0x20(r5)
	lwz      r6, 4(r4)
	lbz      r5, 0(r3)
	add      r6, r6, r0
	stb      r5, 0(r6)
	lbz      r5, 1(r3)
	stb      r5, 1(r6)
	lhz      r5, 2(r3)
	sth      r5, 2(r6)
	lhz      r5, 4(r3)
	sth      r5, 4(r6)
	lbz      r5, 6(r3)
	stb      r5, 6(r6)
	lbz      r5, 7(r3)
	stb      r5, 7(r6)
	lbz      r5, 8(r3)
	stb      r5, 8(r6)
	lbz      r5, 9(r3)
	stb      r5, 9(r6)
	lhz      r5, 0xa(r3)
	sth      r5, 0xa(r6)
	lwz      r5, 0xc(r3)
	stw      r5, 0xc(r6)
	lbz      r5, 0x10(r3)
	stb      r5, 0x10(r6)
	lbz      r5, 0x11(r3)
	stb      r5, 0x11(r6)
	lbz      r5, 0x12(r3)
	stb      r5, 0x12(r6)
	lbz      r5, 0x13(r3)
	stb      r5, 0x13(r6)
	lbz      r5, 0x14(r3)
	stb      r5, 0x14(r6)
	lbz      r5, 0x15(r3)
	stb      r5, 0x15(r6)
	lbz      r5, 0x16(r3)
	stb      r5, 0x16(r6)
	lbz      r5, 0x17(r3)
	stb      r5, 0x17(r6)
	lbz      r5, 0x18(r3)
	stb      r5, 0x18(r6)
	lbz      r5, 0x19(r3)
	stb      r5, 0x19(r6)
	lha      r5, 0x1a(r3)
	sth      r5, 0x1a(r6)
	lwz      r5, 0x1c(r3)
	stw      r5, 0x1c(r6)
	lwz      r5, 4(r4)
	add      r6, r5, r0
	lwz      r5, 0x1c(r6)
	add      r5, r3, r5
	subf     r5, r6, r5
	stw      r5, 0x1c(r6)
	lwz      r4, 4(r4)
	add      r4, r4, r0
	lwz      r0, 0xc(r4)
	add      r0, r3, r0
	subf     r0, r4, r0
	stw      r0, 0xc(r4)

lbl_80200768:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020077C
 * Size:	0000B0
 */
PelletOtakara::Mgr::Mgr()
    : FixedSizePelletMgr<Object>(PelletList::OTAKARA)
{
}

/*
 * --INFO--
 * Address:	80200AD8
 * Size:	00006C
 */
void PelletOtakara::Mgr::setupResources()
{
	sys->heapStatusStart("Otakara", nullptr);
	alloc(32); // definitely should have defines for these
	load_texArc("otakara_texts.szs");
	mCollPartMgr.alloc(256);
	sys->heapStatusEnd("Otakara");
}

/*
 * --INFO--
 * Address:	80200B44
 * Size:	000024
 */
GenPelletParm* PelletOtakara::Mgr::generatorNewPelletParm()
{
	// something weird here (should it return something else?)
	return new GenPelletParm;
}

/*
 * --INFO--
 * Address:	80200B68
 * Size:	000148
 */
Pellet* PelletOtakara::Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenPelletParm* genParm)
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
void PelletOtakara::Mgr::generatorWrite(Stream& data, GenPelletParm* parm) { data.writeShort((u16)parm->mIndex); }

/*
 * --INFO--
 * Address:	80200CE0
 * Size:	000038
 */
void PelletOtakara::Mgr::generatorRead(Stream& data, GenPelletParm* parm, u32 flag) { parm->mIndex = (u16)data.readShort(); }

} // namespace Game
