//*--------------------------------------------------------------*//
//= @file   名前:GameLogo.cpp
//=
//= @brief  概要:ロゴ処理のソースファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// ヘッダファイルの読み込み ================================================
#include "GameMain.h"
#include "GameLogo.h"

// 名前空間
using namespace DirectX::SimpleMath;
using namespace DirectX;

//----------------------------------------------------------------------
//! @brief コンストラクタ
//!
//! @param[in] なし
//----------------------------------------------------------------------
GameLogo::GameLogo()
{
	cnt = 0;
	p = new int[5];				//メモリーリーク検証用

}

//----------------------------------------------------------------------
//! @brief デストラクタ
//----------------------------------------------------------------------
GameLogo::~GameLogo(void)
{
	delete p;					//メモリーリーク検証用

}

//----------------------------------------------------------------------
//! @brief ゲームロゴ処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GameLogo::Update(void)
{
	cnt++;

	//トライデントロゴを６０フレーム描画
	if (cnt > 180)
	{
		game->Transition(TITLE);
		game->UpdateGame();
	}
}

//----------------------------------------------------------------------
//! @brief 描画処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GameLogo::Render(void)
{

}

