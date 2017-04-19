//*--------------------------------------------------------------*//
//= @file   名前:Enemy.cpp
//=
//= @brief  概要:エネミーのソースファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

//ヘッダファイルのインクルード
#include "Enemy.h"
#include "GameMain.h"
#include <d3d11.h>
#include <SimpleMath.h>

//名前空間
using namespace DirectX::SimpleMath;
using namespace DirectX;

//メンバ関数の定義
//----------------------------------------------------------------------
//! @brief コンストラクタ
//!
//! @param[in] なし
//----------------------------------------------------------------------
Enemy::Enemy()
{
	//テクスチャを指定
	Texture* PongImage = new Texture(L"Resources\\Images\\PongImage.png");

	//テクスチャを読み込む
	handle = PongImage;

	//画像のステータスを設定
	grp_x = 32;
	grp_y = 0;
	grp_w = 32;
	grp_h = 32;
	pos_x = 640;
	pos_y = (rand() % 15 + 1) * 32;
	spd_x = 0.0f;
	spd_y = 0.0f;
	state = 1;

}

//----------------------------------------------------------------------
//! @brief デストラクタ
//----------------------------------------------------------------------
Enemy::~Enemy()
{

}
