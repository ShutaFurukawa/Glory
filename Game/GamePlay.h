//*--------------------------------------------------------------*//
//= @file   名前:GamePlay.h
//=
//= @brief  概要:プレイ処理のヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// 多重インクルードの防止 ==================================================
#pragma once

#include "Player.h"
#include "Enemy.h"
#include "GameMain.h"

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

