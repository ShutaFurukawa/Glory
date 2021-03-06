//*--------------------------------------------------------------*//
//= @file   名前:GamePlay.cpp
//=
//= @brief  概要:プレイ処理のヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// ヘッダファイルの読み込み ================================================
#include "GamePlay.h"
#include "ObjectBase.h"
#include "Player.h"

#include <time.h>

//名前空間
using namespace DirectX::SimpleMath;
using namespace DirectX;

//----------------------------------------------------------------------
//! @brief コンストラクタ
//!
//! @param[in] なし
//----------------------------------------------------------------------
GamePlay::GamePlay()
{
	//ランダム性を取得
	srand((unsigned int)time(NULL));

	//プレイヤーはオブジェクトクラスの派生クラスである
	player = new Player();
	//エネミーポインタを作ることで配列化をしている
	enemy = new Enemy();
}

//----------------------------------------------------------------------
//! @brief デストラクタ
//----------------------------------------------------------------------
GamePlay::~GamePlay(void)
{
	delete player;
	delete enemy;

}


//----------------------------------------------------------------------
//! @brief ゲームプレイ処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GamePlay::Update(void)
{
	//int i;					//カウンタ

	//ここで設定するのは速度

	//キー入力関係

	//プレイヤーの座標変更
	player->Update();
	enemy->Update();

	//スペースキーでタイトルに遷移
	if (g_keyTracker->pressed.Space)
	{

	}
}

//----------------------------------------------------------------------
//! @brief ゲームプレイ描画処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GamePlay::Render(void)
{
	//プレイヤーの描画処理
	player->Render();
	enemy->Render();
}
