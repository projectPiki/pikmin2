#ifndef _GAME_NAVIPARMS_H
#define _GAME_NAVIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct NaviParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "Navi::Parms")
		    , mP000(this, 'p000', "アクション半径", 25.0f, 0.0f, 500.0f)      // 'action radius'
		    , mP060(this, 'p060', "連続抜き距離", 200.0f, 0.0f, 1000.0f)      // 'continuous pluck distance'
		    , mP062(this, 'p062', "抜き距離(onyon外)", 15.0f, 0.0f, 500.0f)   // 'pluck distance (outside onyon)'
		    , mP001(this, 'p001', "ピキ呼び最大半径", 90.0f, 0.0f, 500.0f)    // 'piki call max radius'
		    , mP053(this, 'p053', "ピキ呼び最小半径", 5.0f, 0.0f, 500.0f)     // 'piki call min radius'
		    , mP002(this, 'p002', "ピキ呼び最大時間", 0.45f, 0.0f, 500.0f)    // 'max call time'
		    , mP003(this, 'p003', "サークル消え時間", 1.0f, 0.0f, 500.0f)     // 'circle disappearing time'
		    , mP004(this, 'p004', "移動速度", 160.0f, 0.0f, 500.0f)           // 'movement speed'
		    , mP056(this, 'p056', "走る速さ（好調時）", 160.0f, 0.0f, 500.0f) // 'running speed (in good condition)' (lol)
		    , mP038(this, 'p038', "表\示スケール", 1.2f, 0.1f, 10.0f)         // 'display scale'
		    , mStick0(this, 'p005', "Stick 0", 0.001f, 0.0f, 1.0f)
		    , mStick01(this, 'p020', "Stick 01", 0.1f, 0.0f, 1.0f)
		    , mStick1(this, 'p006', "Stick 1", 0.8f, 0.0f, 1.0f)
		    , mStick2(this, 'p007', "Stick 2", 1.0f, 0.0f, 1.0f)
		    , mP008(this, 'p008', "すべり角度", 120.0f, 90.0f, 180.0f)                       // 'sliding angle'
		    , mP009(this, 'p009', "投げため限界時間", 2.5f, 0.0f, 10.0f)                     // 'time limit for throwing'
		    , mP010(this, 'p010', "投げ距離(Max)", 140.0f, 0.0f, 1000.0f)                    // 'throw distance (Max)'
		    , mP011(this, 'p011', "投げ距離(Min)", 140.0f, 0.0f, 500.0f)                     // 'throw distance (Min)'
		    , mP024(this, 'p024', "投げ高さ(Max)", 75.0f, 0.0f, 1000.0f)                     // 'throw height (Max)'
		    , mP025(this, 'p025', "投げ高さ(min)", 75.0f, 0.0f, 1000.0f)                     // 'throw height (min)'
		    , mP054(this, 'p054', "投げ高さ(黄色)", 115.0f, 0.0f, 1000.0f)                   // 'throw height (yellow)'
		    , mQ000(this, 'q000', "黒　投げ高さ", 30.0f, 0.0f, 150.0f)                       // 'black throw height'
		    , mQ001(this, 'q001', "白　投げ高さ", 75.0f, 0.0f, 150.0f)                       // 'white throw height'
		    , mP026(this, 'p026', "着地時間", 1.0f, 0.0f, 100.0f)                            // 'landing time'
		    , mP037(this, 'p037', "ピキをつかむ有効範囲", 15.0f, 0.0f, 200.0f)               // 'effective range to grab piki'
		    , mP042(this, 'p042', "抜くループ回数", 0, 0, 10)                                // 'number of loops to pluck' (?)
		    , _698(this, 'p039', "ピキが待つ範囲", 15.0f, 0.0f, 200.0f)                      // 'piki wait range'
		    , mP040(this, 'p040', "ピキがフォーメーションを変える範囲", 40.0f, 0.0f, 200.0f) // 'range where piki changes formation'
		    , mP021(this, 'p021', "当たりサイズ", 8.0f, 0.0f, 100.0f)                        // 'hit size'
		    , mP041(this, 'p041', "地面当たりサイズ", 8.5f, 0.0f, 100.0f)                    // 'ground size'
		    , mP022(this, 'p022', "重さの逆数", 1.0f, 0.0f, 2000.0f)                         // 'inverse weight'
		    , mP023(this, 'p023', "エイミング回転スピード", 0.03f, 0.0f, 1.0f)               // 'aiming rotation speed'
		    , mP031(this, 'p031', "つぶれ総時間", 2.0f, 0.0f, 10.0f)                         // 'total crush time'
		    , mP032(this, 'p032', "ぺったんこ時間", 1.0f, 0.0f, 10.0f)                       // 'flat time'
		    , mP033(this, 'p033', "押し開始時間", 0.8f, 0.0f, 10.0f)                         // 'press start time'
		    , mP034(this, 'p034', "押し開始スティック量", 0.3f, 0.0f, 1.0f)                  // 'press start stick amount'
		    , mP035(this, 'p035', "手ぶれ防止角度", 10.0f, 0.0f, 180.0f)                     // 'shake prevention angle'
		    , mP036(this, 'p036', "手ぶれ防止大きさ", 0.1f, 0.0f, 1.0f)                      // 'shake prevention magnitude'
		    , mP048(this, 'p048', "カーソ\ルみる時間", 0.85f, 0.0f, 60.0f)                   // 'cursor look time'
		    , mP049(this, 'p049', "ピキがしびれを切らす時間", 5.0f, 0.0f, 60.0f)             // 'time for piki to lose its numbness' (?)
		    , mCStickNeutralThresh(this, 'p043', "ニュートラルスティック", 0.1f, 0.0f, 1.0f) // 'neutral stick'
		    , mP044(this, 'p044', "カーソ\ル移動スティック", 0.65f, 0.0f, 1.0f)              // 'cursor movement stick'
		    , _918(this, 'p048', "クランプスティック", 0.85f, 0.0f, 1.0f)                    // 'clamp stick'
		    , mP045(this, 'p045', "カーソ\ル移動最小半径", 0.0f, 0.0f, 1000.0f)              // 'min cursor movement radius'
		    , mP046(this, 'p046', "カーソ\ル移動最大半径", 100.0f, 0.0f, 2000.0f)            // 'max cursor movement radius'
		    , mP047(this, 'p047', "カーソ\ル移動スピード", 300.0f, 0.0f, 1000.0f)            // 'cursor movement speed'
		    , mMaxHealth(this, 'p050', "ライフ", 100.0f, 0.0f, 1000.0f)                      // 'life'
		    , mP051(this, 'p051', "攻撃力", 10.0f, 0.0f, 1000.0f)                            // 'attack power'
		    , mP052(this, 'p052', "攻撃範囲", 10.0f, 0.0f, 100.0f)                           // 'attack range'
		    , mP055(this, 'p055', "カーソ\ルカウント", 1, 0, 10)                             // 'cursor count'
		    , mP057(this, 'p057', "kinoko Flick Count", 3, 0, 16)                            // 'mushroom flick count' (?)
		    , mP058(this, 'p058', "bury Key Count", 2, 0, 16)
		    , mP059(this, 'p059', "bury Exit Count", 2, 0, 16)
		    , mP061(this, 'p061', "寄りカメラズームアウト(frame)", 80, 0, 1000) // 'close camera zoom out (frame)'
		    , mQ002(this, 'q002', "隊列 MAX Lv0", 10, 1, 100)                   // 'formation MAX Lv0'
		    , mQ003(this, 'q003', "隊列 MAX Lv1", 25, 1, 100)                   // 'formation MAX Lv1'
		    , mQ004(this, 'q004', "隊列 MAX Lv2", 50, 1, 100)                   // 'formation MAX Lv2'
		    , mQ005(this, 'q005', "隊列 MAX Lv3", 100, 1, 100)                  // 'formation MAX Lv3'
		    , mQ006(this, 'q006', "ダッシュブーツ速度", 240.0f, 0.0f, 500.0f)   // 'rush boot speed'
		    , mQ007(this, 'q007', "広範囲の笛半径", 200.0f, 0.0f, 300.0f)       // 'wide whistle radius'
		    , mQ008(this, 'q008', "シールドダメージ軽減率", 0.5f, 0.0f, 1.0f)   // 'shield damage reduction rate'
		    , mQ009(this, 'q009', "シーソ\ーで使う重さ", 2, 0, 10)              // 'weight for seesaw'
		    , mQ010(this, 'q010', "電気ゲートダメージ", 10.0f, 0.0f, 200.0f)    // 'electric gate damage'
		{
		}

		// _27C-_288	= Parameters
		Parm<f32> mP000;                // _288
		Parm<f32> mP060;                // _2B0
		Parm<f32> mP062;                // _2D8
		Parm<f32> mP001;                // _300, max whistle radius (pre-upgrade)
		Parm<f32> mP053;                // _328, initial whistle radius
		Parm<f32> mP002;                // _350, whistle time limit
		Parm<f32> mP003;                // _378, whistle fadeout time
		Parm<f32> mP004;                // _3A0
		Parm<f32> mP056;                // _3C8
		Parm<f32> mP038;                // _3F0
		Parm<f32> mStick0;              // _418
		Parm<f32> mStick01;             // _440
		Parm<f32> mStick1;              // _468
		Parm<f32> mStick2;              // _490
		Parm<f32> mP008;                // _4B8
		Parm<f32> mP009;                // _4E0
		Parm<f32> mP010;                // _508
		Parm<f32> mP011;                // _530
		Parm<f32> mP024;                // _558
		Parm<f32> mP025;                // _580
		Parm<f32> mP054;                // _5A8
		Parm<f32> mQ000;                // _5D0
		Parm<f32> mQ001;                // _5F8
		Parm<f32> mP026;                // _620 // 'landing time'
		Parm<f32> mP037;                // _648
		Parm<int> mP042;                // _670
		Parm<f32> _698;                 // _698
		Parm<f32> mP040;                // _6C0
		Parm<f32> mP021;                // _6E8
		Parm<f32> mP041;                // _710
		Parm<f32> mP022;                // _738
		Parm<f32> mP023;                // _760
		Parm<f32> mP031;                // _788
		Parm<f32> mP032;                // _7B0
		Parm<f32> mP033;                // _7D8
		Parm<f32> mP034;                // _800
		Parm<f32> mP035;                // _828
		Parm<f32> mP036;                // _850
		Parm<f32> mP048;                // _878
		Parm<f32> mP049;                // _8A0, "time for piki to run out of numbness"
		Parm<f32> mCStickNeutralThresh; // _8C8, p043
		Parm<f32> mP044;                // _8F0
		Parm<f32> _918;                 // _918, also p048?
		Parm<f32> mP045;                // _940
		Parm<f32> mP046;                // _968
		Parm<f32> mP047;                // _990
		Parm<f32> mMaxHealth;           // _9B8
		Parm<f32> mP051;                // _9E0
		Parm<f32> mP052;                // _A08
		Parm<int> mP055;                // _A30
		Parm<int> mP057;                // _A58
		Parm<int> mP058;                // _A80
		Parm<int> mP059;                // _AA8
		Parm<int> mP061;                // _AD0
		Parm<int> mQ002;                // _AF8
		Parm<int> mQ003;                // _B20
		Parm<int> mQ004;                // _B48
		Parm<int> mQ005;                // _B70
		Parm<f32> mQ006;                // _B98
		Parm<f32> mQ007;                // _BC0, max whistle radius (with upgrade)
		Parm<f32> mQ008;                // _BE8
		Parm<int> mQ009;                // _C10
		Parm<f32> mQ010;                // _C38
		                                // _C60 = IParameters ptr
	};

	NaviParms()
	    : mNaviParms()
	{
		mCreatureProps.mProps.mFriction.mValue      = 1.0f;
		mCreatureProps.mProps.mFaceDirAdjust.mValue = 0.5f;
		mCreatureProps.mProps.mAccel.mValue         = 0.1f;
	}

	virtual void read(Stream& stream)
	{
		CreatureParms::read(stream);
		mFakePikiParms.read(stream);
		mNaviParms.read(stream);
	} // _08 (weak)

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms mNaviParms; // _27C
};

} // namespace Game

#endif
