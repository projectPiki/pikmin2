#include "types.h"
#include "ebi/title/Entities/TKogane.h"
#include "ebi/title/TTitle.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Controller.h"
#include "Dolphin/rand.h"
#include "trig.h"
#define _(x)        (x)


/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_ebiP2TitleKogane_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804974A0
    lbl_804974A0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x65626950
        .4byte 0x32546974
        .4byte 0x6C654B6F
        .4byte 0x67616E65
        .4byte 0x00000000
    .global lbl_804974C0
    lbl_804974C0:
        .4byte 0x4B6F6761
        .4byte 0x6E654D67
        .4byte 0x72000000
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x00000000
        .4byte 0x834A838A
        .4byte 0x8393834F
        .4byte 0x94BC8C61
        .4byte 0x00000000
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x839394BC
        .4byte 0x8C610000
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x94BD899E
        .4byte 0x94BC8C61
        .4byte 0x00000000
        .4byte 0x95E08D73
        .4byte 0x83898393
        .4byte 0x835F8380
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x95E08D73
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x90F989F1
        .4byte 0x90AB945C
        .4byte 0x00000000
        .4byte 0x91D282BF
        .4byte 0x8E9E8AD4
        .4byte 0x8DC58FAC
        .4byte 0x28956229
        .4byte 0x00000000
        .4byte 0x91D282BF
        .4byte 0x8E9E8AD4
        .4byte 0x8DC591E5
        .4byte 0x28956229
        .4byte 0x00000000
        .4byte 0x88DA93AE
        .4byte 0x8E9E8AD4
        .4byte 0x8DC58FAC
        .4byte 0x28956229
        .4byte 0x00000000
        .4byte 0x88DA93AE
        .4byte 0x8E9E8AD4
        .4byte 0x8DC591E5
        .4byte 0x28956229
        .4byte 0x00000000
        .4byte 0x83528393
        .4byte 0x8367838D
        .4byte 0x815B8389
        .4byte 0x8FF391D4
        .4byte 0x8E9E8AD4
        .4byte 0x28956229
        .4byte 0x00000000
    .global lbl_804975A4
    lbl_804975A4:
        .4byte 0x70617261
        .4byte 0x6D2F7061
        .4byte 0x72616D5F
        .4byte 0x6B6F6761
        .4byte 0x6E652E74
        .4byte 0x78740000
        .4byte 0x6B6F6761
        .4byte 0x6E652F6B
        .4byte 0x6F67616E
        .4byte 0x655F6D6F
        .4byte 0x76652E62
        .4byte 0x636B0000
        .4byte 0x6B6F6761
        .4byte 0x6E652F6B
        .4byte 0x6F67616E
        .4byte 0x655F7761
        .4byte 0x69742E62
        .4byte 0x636B0000
        .4byte 0x6B6F6761
        .4byte 0x6E652F6B
        .4byte 0x6F67616E
        .4byte 0x655F7469
        .4byte 0x746C652E
        .4byte 0x626D6400
        .4byte 0x65626950
        .4byte 0x32546974
        .4byte 0x6C654B6F
        .4byte 0x67616E65
        .4byte 0x2E637070
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E9E10
    lbl_804E9E10:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804E9E1C
    lbl_804E9E1C:
        .4byte lbl_803E78A8
        .4byte lbl_803E78E8
        .4byte lbl_803E7940
        .4byte lbl_803E7A58
        .4byte lbl_803E7AB0
        .4byte lbl_803E7B0C
        .4byte lbl_803E78C4
    .global __vt__Q43ebi5title6Kogane5TUnit
    __vt__Q43ebi5title6Kogane5TUnit:
        .4byte 0
        .4byte 0
        .4byte getCreatureType__Q43ebi5title6Kogane5TUnitFv
        .4byte isCalc__Q43ebi5title6Kogane5TUnitFv
    .global __vt__Q43ebi5title6Kogane11TAnimFolder
    __vt__Q43ebi5title6Kogane11TAnimFolder:
        .4byte 0
        .4byte 0
        .4byte getAnimRes__Q43ebi5title6Kogane11TAnimFolderFl
    .global __vt__Q23ebi17E3DAnimFolderBase
    __vt__Q23ebi17E3DAnimFolderBase:
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805160F8
    lbl_805160F8:
        .skip 0x4
    .global lbl_805160FC
    lbl_805160FC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FD00
    lbl_8051FD00:
        .4byte 0x00000000
    .global lbl_8051FD04
    lbl_8051FD04:
        .4byte 0xBF800000
    .global lbl_8051FD08
    lbl_8051FD08:
        .float 1.0
    .global lbl_8051FD0C
    lbl_8051FD0C:
        .4byte 0x5061726D
        .4byte 0x73000000
    .global lbl_8051FD14
    lbl_8051FD14:
        .4byte 0x40000000
    .global lbl_8051FD18
    lbl_8051FD18:
        .4byte 0x41200000
    .global lbl_8051FD1C
    lbl_8051FD1C:
        .4byte 0x42480000
    .global lbl_8051FD20
    lbl_8051FD20:
        .4byte 0x43FA0000
    .global lbl_8051FD24
    lbl_8051FD24:
        .4byte 0x43160000
    .global lbl_8051FD28
    lbl_8051FD28:
        .4byte 0x42700000
    .global lbl_8051FD2C
    lbl_8051FD2C:
        .4byte 0x42B40000
    .global lbl_8051FD30
    lbl_8051FD30:
        .4byte 0x42C80000
    .global lbl_8051FD34
    lbl_8051FD34:
        .float 0.1
    .global lbl_8051FD38
    lbl_8051FD38:
        .4byte 0x3FC00000
    .global lbl_8051FD3C
    lbl_8051FD3C:
        .float 0.3
    .global lbl_8051FD40
    lbl_8051FD40:
        .4byte 0x40A00000
    .global lbl_8051FD44
    lbl_8051FD44:
        .4byte 0x46FFFE00
    .global lbl_8051FD48
    lbl_8051FD48:
        .4byte 0x40490FDB
    .global lbl_8051FD4C
    lbl_8051FD4C:
        .4byte 0x3BB60B61
    .global lbl_8051FD50
    lbl_8051FD50:
        .4byte 0xC3A2F983
    .global lbl_8051FD54
    lbl_8051FD54:
        .4byte 0x43A2F983
    .global lbl_8051FD58
    lbl_8051FD58:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051FD60
    lbl_8051FD60:
        .float 0.7
    .global lbl_8051FD64
    lbl_8051FD64:
        .float 0.5
*/

namespace ebi {
namespace title {

static const int unusedTitleKoganeArray[] = { 0, 0, 0 };
static const char ebiP2TitleKoganeName[]  = "ebiP2TitleKogane";

/*
 * --INFO--
 * Address:	803E7358
 * Size:	000148
 */
Kogane::TMgr::TMgr()
    : CNode("KoganeMgr")
{
    mAnimator = new TAnimator;
	mObject   = new TUnit;
}

/*
 * --INFO--
 * Address:	803E74A0
 * Size:	000050
 */
void Kogane::TMgr::setArchive(JKRArchive* arc)
{
	mParams.loadSettingFile(arc, "param/param_kogane.txt");
	mAnimator->setArchive(arc);
}

/*
 * --INFO--
 * Address:	803E74F0
 * Size:	000028
 */
void Kogane::TMgr::initUnit() { mObject->init(this); }


/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Kogane::TAnimFolder::load(J3DModelData*, JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E7518
 * Size:	000068
 */
Kogane::TAnimator::TAnimator()
{
    mModelData = nullptr;
}
/*
 * --INFO--
 * Address:	803E7580
 * Size:	00011C
 */
void Kogane::TAnimator::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("kogane/kogane_title.bmd");
	P2ASSERTLINE(0x75, file);
	mModelData = J3DModelLoaderDataBase::load(file, 0x240030);
    
    for (u16 i = 0; i < (mModelData->mShapeTable).mCount; i++) 
    { 
        mModelData->mShapeTable.mItems[i]->mFlags = (mModelData->mShapeTable.mItems[i]->mFlags & 0xFFFF0FFF)|0x2000 ;

    }
	mModelData->newSharedDisplayList(0x40000);
    mModelData->makeSharedDL();
    mAnimFolder.mAnims[0].load(mModelData,arc,"kogane/kogane_move.bck");
    mAnimFolder.mAnims[0].mMode = 1;
    mAnimFolder.mAnims[1].load(mModelData,arc,"kogane/kogane_wait.bck");
    mAnimFolder.mAnims[1].mMode = 1;


}
J3DModel* Kogane::TAnimator::newJ3DModel() { return new J3DModel(mModelData, 0x20000, 1); }

/*
 * --INFO--
 * Address:	803E769C
 * Size:	000008
 */
void Kogane::TUnit::setController(Controller* a1)
{
	mControl = a1;
}
/*
 * --INFO--
 * Address:	803E76A4
 * Size:	0000F4
 */
void Kogane::TUnit::init(TMgr* mgr)
{
    mManager = mgr;
    mModel   = mManager->mAnimator->newJ3DModel();
	mAnim.setAnimFolder(&mManager->mAnimator->mAnimFolder);

	mPos      = titleMgr->getPosOutOfViewField();
	mParms[0] = mManager->mParams.mWalkSpeed.mValue;
	mParms[1] = mManager->mParams.mScale.mValue;
	mParms[4] = mManager->mParams.mCullRadius.mValue;
	mParms[2] = mManager->mParams.mCollRadius.mValue;
	mParms[3] = mManager->mParams.mPikiReactRadius.mValue;
}
/*
 * --INFO--
 * Address:	803E7798
 * Size:	00004C
 */
void Kogane::TUnit::startZigzagWalk(Vector2f& pos1, Vector2f& pos2)
{
	mPos       = pos1;
	mTargetPos = pos2;
	mActionID  = -1;
	startState((enumState)4);
}

/*
 * --INFO--
 * Address:	803E77E4
 * Size:	000030
 */
void Kogane::TUnit::goHome()
{
    if (mStateID != 0)
    {
        startState((enumState)5);
    }
}

/*
 * --INFO--
 * Address:	803E7814
 * Size:	000024
 */
void Kogane::TUnit::outOfCalc()
{
	startState((enumState)0);
}

/*
 * --INFO--
 * Address:	803E7838
 * Size:	000014
 */
bool Kogane::TUnit::isCalc()
{
	return (bool) mStateID != 0;
}

/*
 * --INFO--
 * Address:	803E784C
 * Size:	000014
 */
bool Kogane::TUnit::isController()
{
    return (u8) (mStateID == 6);
};


/*
 * --INFO--
 * Address:	803E7860
 * Size:	0002D0
 */
void Kogane::TUnit::startState(ebi::title::Kogane::TUnit::enumState state)
{

    mStateID = state;
    switch(state)
    {
        case 0: // Inactive
		mPos = title::titleMgr->getPosOutOfViewField();
        case 6: // Seems to be controlled
		u32 time  = mManager->mParams.mControlStateTime.mValue / sys->mDeltaTime;
		mCounter  = time;
		mCounter2 = time;
        break;
        case 1: // Wait
		f32 max, min;
		min       = mManager->mParams.mMinWaitTime.mValue;
		max       = mManager->mParams.mMaxWaitTime.mValue;
		u32 time2 = ((max - min) * randFloat() + min) / sys->mDeltaTime;
		mCounter  = time2;
		mCounter2 = time2;
		break;
        case 2: // Turn
		f32 angle    = mManager->mParams.mWalkRandomAngle.mValue;
		f32 line     = JMath::atanTable_.atan2_(mTargetPos.y - mPos.y, mTargetPos.x - mPos.x);
		f32 test     = angle * DEG2RAD * PI * (randFloat() * 2.0f + -1.0f) + line;
		mTargetAngle = Vector2f(pikmin2_cosf(test), pikmin2_sinf(test));
		break;
        case 3: // walk
		f32 max2, min2;
		max2 = mManager->mParams.mMaxMoveTime.mValue;
		min2 = mManager->mParams.mMinMoveTime.mValue;

		u32 time3 = ((max2 - min2) * randFloat() + min2) / sys->mDeltaTime;
		mCounter  = time3;
		mCounter2 = time3;
		break;

	    case 4: // AI_5 in Chappy
		Vector2f negPos(-mPos.x, -mPos.y);
		f32 len = _sqrtf(negPos.x * negPos.x + negPos.y * negPos.y);
		if (len != 0.0f) {
			f32 norm = 1.0f / len;
			negPos.x *= norm;
			negPos.y *= norm;
		}
		mAngle = negPos;
		break;

    }
};


/*
 * --INFO--
 * Address:	803E7B30
 * Size:	000734
 */
void Kogane::TUnit::update()
{
    if (!isCalc())
		return;
        
    if ( (mStateID != 0) && (mStateID != 5) && (mStateID != 4)) 
    {
        if (mControl && mControl->mSStick.mStickMag > 0.7f) {
            startState((enumState)6);
        }
    }

    s32 actionId = (s32)mActionID;
    switch(mStateID) {
        case 6: {
            if (mCounter != 0) {
                mCounter--;
            }
            mActionID = 0;
            if (mControl != nullptr) {
                f32 stickX = mControl->mSStick.mXPos;
                if (FABS(stickX) > 0.7f) {
                    
                    f32 turnProduct = stickX * mManager->mParams.mTurnRate.mValue;

                    f32 angleX = -mAngle.x;
                    f32 angleY = mAngle.y;
                    f32 yProduct = (angleY * turnProduct);
                    f32 xProduct = (angleX * turnProduct);
                    mAngle = Vector2f(
                        mAngle.x + yProduct, mAngle.y + xProduct
                    );
                    f32 val = _sqrtfvec(mAngle); 
                    if (val != 0.0) 
                    {
                        mAngle.x = mAngle.x * (1.0f / val);
                        mAngle.y = mAngle.y * (1.0f / val);
                    }
                    mActionID = 1;


                }

            }
            f32 stickY = mControl->mSStick.mYPos;
            if (stickY > 0.7f) {
                f32 paramProd = stickY * mParms[0];
                f32 xProd = (mAngle.x * paramProd);
                f32 yProd = (mAngle.y * paramProd);
                mPos = Vector2f(mPos.x + xProd, mPos.y + yProd);
                mActionID = 2;
            }
            if (mCounter == 0) {
                startState((enumState)5);
            }

        }
        break;
        case 1: {
            mActionID = 0;
            if (mCounter != 0) {
                mCounter--;
            }
            if (mCounter == 0) {
                startState((enumState)2);
            }
        }
        break;
        case 2: {
            mActionID = 1;
            f32 product = 60.0f * sys->mDeltaTime * 0.5f * 0.1f ;
            f32 xProduct = mTargetAngle.x * product;
            f32 yProduct = mTargetAngle.y * product;
            mAngle = Vector2f(mAngle.x + xProduct, mAngle.y + yProduct);
            f32 val = _sqrtfvec(mAngle); 
            if (val != 0.0) 
            {
                mAngle.x = mAngle.x * (1.0f / val);
                mAngle.y = mAngle.y * (1.0f / val);
            }
            f32 yDiff = mAngle.y - mTargetAngle.y;
            f32 xDiff = mAngle.x - mTargetAngle.x;
            f32 yDiffSq = yDiff * yDiff;
            f32 xDiffSq = xDiff * xDiff;
            f32 len = (xDiff * xDiff) + yDiffSq;
            len = _sqrtf(len);
            if (len < 0.1) {
                startState((enumState)3);
            }
        }
        break;
        case 3: { 
            mActionID = 2;
            if (mCounter != 0) {
                mCounter--;
            }
            if (mCounter == 0) {
                startState((enumState)1);
            }
            else {
                f32 xParam = mAngle.x * mParms[0];
                f32 yParam = mAngle.y * mParms[0];
                mPos = Vector2f(mPos.x + xParam, mPos.y + yParam);
            }
            
        }
        break;
        case 4: {
            mActionID = 2;
            f32 val = _sqrtfvec(mAngle); 
            if (val != 0.0) 
            {
                mAngle.x = mAngle.x * (1.0f / val);
                mAngle.y = mAngle.y * (1.0f / val);
            }
            f32 xParam = mAngle.x * mParms[0];
            f32 yParam = mAngle.y * mParms[0];
            mPos = Vector2f(mPos.x + xParam, mPos.y + yParam);
        }
        break;
        case 5: { 
            mActionID = 2;
            f32 val = _sqrtfvec(mAngle);  
            if (val != 0.0) 
            {
                mAngle.x = mAngle.x * (1.0f / val);
                mAngle.y = mAngle.y * (1.0f / val);
            }
            f32 xParam = mAngle.x * mParms[0];
            f32 yParam = mAngle.y * mParms[0];
            mPos = Vector2f(mPos.x + xParam, mPos.y + yParam);
        }
        break;
    } 

    switch(mStateID) {
        case 0: 
        mPos      = titleMgr->getPosOutOfViewField();
        case 4: 
        if (titleMgr->isInViewField(this)) {
            startState((enumState)3);
        }
        break;
        case 5: 
        if (titleMgr->isOutViewField(this)) {
            startState((enumState)0);
        }
        break;
        default:
        titleMgr->inViewField(this);
        break;

    }
    if ((s32) mActionID != actionId) // Check if action has changed since begining of function call
    {
        switch(mActionID) {
        case 1: {
            mAnim.init(0, 1.0);
            mAnim.play();

        }
        break;
        case 2: {
            mAnim.init(0, 1.0);
            mAnim.play();
            
        }
        break;
        case 0: {
            mAnim.init(1, 1.0);
            mAnim.play();
        }
        break;

        }
    }
    calcModelBaseMtx_();
    if (mAnim._0C != nullptr) {
        switch(mAnim._08) {
            case 1:
            mAnim._00 += mAnim._04 * mAnim._0C->float_0x18;
            if (mAnim._00 > mAnim._0C->mLoopEnd ) {
                mAnim._00 -= mAnim._0C->mLoopEnd - mAnim._0C->mLoopStart;
            }
            break;
            case 2:
            mAnim._00 += mAnim._04 * mAnim._0C->float_0x18;
            if (  mAnim._00 >=   mAnim._0C->float_0xC) {
                mAnim._00 = mAnim._0C->float_0xC;
                mAnim._08 = 3;
            }
            break;
            case 0:
            case 3:
            case 4:
            break;

        }
    }
    J3DModel* model = mModel;
    if (mAnim._0C != nullptr) {
        mAnim._0C->pAnmTransform_0x0->mCurrentFrame  = mAnim._00;
        model->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnim._0C->pMtxCalcAnm_0x4;
        //mModel->mModelData
    }
    mModel->calc();
    mModel->entry();
    return mModel ->viewCalc();
}

/*
 * --INFO--
 * Address:	803E8264
 * Size:	00032C
 */
Kogane::TParam::TParam()    
    : mScale(this, 'b000', "スケール", 2.0f, 0.0f, 10.0f) 
    , mCullRadius(this, 'b001', "カリング半径", 50.0f, 0.0f, 500.0f)
    , mCollRadius(this, 'b002', "コリジョン半径", 50.0f, 0.0f, 500.0f)
    , mPikiReactRadius(this, 'b003', "ピクミン反応半径", 150.0f, 0.0f, 500.0f)
    , mWalkRandomAngle(this, 'kg00', "歩行ランダム角度", 60.0f, 0.0f, 90.0f)
    , mWalkSpeed(this, 'kg01', "歩行速度", 10.0f, 0.0f, 100.0f)
    , mTurnRate(this, 'kg15', "旋回性能x5C", 0.1f, 0.0f, 1.0f) // x5C literal required for match
    , mMinWaitTime(this, 'kg10', "待ち時間最小(秒)", 1.0f, 0.0f, 10.0f)
    , mMaxWaitTime(this, 'kg11', "待ち時間最大(秒)", 1.5f, 0.0f, 10.0f)
    , mMinMoveTime(this, 'kg12', "移動時間最小(秒)", 0.3f, 0.0f, 10.0f)
    , mMaxMoveTime(this, 'kg13', "移動時間最大(秒)", 1.0f, 0.0f, 10.0f)
    , mControlStateTime(this, 'kg14', "コントローラ状態時間(秒)", 5.0f, 0.0f, 60.0f) 
{
}

/*
 * --INFO--
 * Address:	803E8590
 * Size:	000008
 */
u32 Kogane::TUnit::getCreatureType() { return 0x5; }

/*
 * --INFO--
 * Address:	803E8598
 * Size:	000014
 */
E3DAnimRes* Kogane::TAnimFolder::getAnimRes(long id)  { return &mAnims[id]; }

/*
 * --INFO--
 * Address:	803E85AC
 * Size:	000004
 */
E3DAnimRes::E3DAnimRes() {
    return;
 }




} // namespace title
} // namespace ebi

