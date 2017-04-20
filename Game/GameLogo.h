//*--------------------------------------------------------------*//
//= @file   名前:GameLogo.h
//=
//= @brief  概要:ロゴ処理のヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// 多重インクルードの防止 ==================================================
#pragma once


class GameLogo :public GameBase
{
private:
	int cnt;		//フレームカウント
	int* p;			//メモリーリーク検証用

	GameMain* game;		//ゲームメイン

public:
	//コンストラクタ
	GameLogo();
	//デストラクタ
	~GameLogo();

	//更新処理
	void Update();
	//描画処理
	void Render();
	
};

