//*--------------------------------------------------------------*//
//= @file   名前:GameClear.h
//=
//= @brief  概要:クリア処理のヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// 多重インクルードの防止 ==================================================
#pragma once


class GameClear :public GameBase
{
private:
	int cnt;		//フレームカウント
	GameMain* game;		//ゲームメイン

public:
	//コンストラクタ
	GameClear();
	//デストラクタ
	~GameClear();

	//更新処理
	void Update();
	//描画処理
	void Render();
	
};

