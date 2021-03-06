//*--------------------------------------------------------------*//
//= @file   名前:GameOver.h
//=
//= @brief  概要:ゲームオーバー処理のヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// 多重インクルードの防止 ==================================================
#pragma once


class GameOver :public GameBase
{
private:
	int cnt;		//フレームカウント

public:
	//コンストラクタ
	GameOver();
	//デストラクタ
	~GameOver();

	//更新処理
	void Update();
	//描画処理
	void Render();
	
};

