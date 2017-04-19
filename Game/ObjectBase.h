//*--------------------------------------------------------------*//
//= @file   名前:ObjectBase.h
//=
//= @brief  概要:オブジェクトベースのヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

//ヘッダファイルの多重インクルード防止
#pragma once

//ヘッダファイルのインクルード
#include "..\Texture.h"
#include "..\DirectXTK.h"

//クラスの定義
class ObjectBase
{
	//限定公開メンバ
protected:
	Texture *handle;		//グラフィックハンドル 
	int grp_x;				//元画像のｘ座標 
	int grp_y;				//元画像のｙ座標 
	int grp_w;				//元画像の幅 
	int grp_h;				//元画像の高さ 
	float pos_x;			//座標x 
	float pos_y;			//座標y 
	float spd_x;			//速度x 
	float spd_y;			//速度y 
	int state;				//状態

	//公開メンバ
public:
	//コンストラクタ
	ObjectBase();
	//デストラクタ
	~ObjectBase();

	//メンバ関数
	//グラフィックハンドル関係関数
	Texture* GetHandle();
	void SetHandle(Texture* h);

	//元画像のｘ座標関係関数
	int GetGrpX();
	void SetGrpX(int x);

	//元画像のｙ座標関係関数
	int GetGrpY();
	void SetGrpY(int y);

	//元画像の幅関係関数
	int GetGrpW();
	void SetGrpW(int w);

	//元画像の高さ関係関数
	int GetGrpH();
	void SetGrpH(int h);

	//座標x関係関数
	float GetPosX();
	void SetPosX(float x);

	//座標y関係関数
	float GetPosY();
	void SetPosY(float y);

	//速度x関係関数
	float GetSpdX();
	void SetSpdX(float sx);

	//速度y関係関数
	float GetSpdY();
	void SetSpdY(float sy);

	//状態関係関数
	int GetState();
	void SetState(int state);

	//更新処理
	void Update();
	//描画処理
	void Render();
};