//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   GameLogo.h
//!
//! @brief  ゲームプレイのヘッダファイル
//!
//! @date   日付
//!
//! @author 制作者名
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

// 多重インクルードの防止 ==================================================
#pragma once

#include "Player.h"
#include "Enemy.h"

class GamePlay :public GameBase
{
private:
	//マウス座標
	int mx;
	int my;

	//プレイヤーオブジェクト
	Player* player;
	//エネミーオブジェクト
	Enemy* enemy;

public:

	//コンストラクタ
	GamePlay();
	//デストラクタ
	~GamePlay();

	//更新処理
	void Update();
	//描画処理
	void Render();
	
};

