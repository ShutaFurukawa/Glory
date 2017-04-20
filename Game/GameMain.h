//*--------------------------------------------------------------*//
//= @file   名前:GameMain.h
//=
//= @brief  概要:ゲーム関連のヘッダファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// 多重インクルードの防止 ==================================================
#pragma once

#ifndef _GAMEMAIN_
#define EXTERN extern
#else
#define EXTERN
#endif

#include <windows.h>
#include <d3d11.h>
#include <SimpleMath.h>
#include "..\DirectXTK.h"
#include "..\Texture.h"
#include "GameBase.h"

// 定数の定義 ==============================================================

// ゲームタイトル
#define GAME_TITLE "Glory"

// ゲーム画面
#define SCREEN_WIDTH  640    // 幅[pixel]
#define SCREEN_HEIGHT 480    // 高さ[pixel]

//　列挙型宣言
enum SCENE
{
	BASE,
	LOGO,
	TITLE,
	PLAY,
	CLEAR,
	OVER
};

//クラスの定義
class GameMain
{
	//非公開メンバ
private:
	int m_scene;				//シーン管理
	int m_NextScene;			//次のシーン

	int g_TimeCnt;				//時間カウンタ
	int g_Time;					//秒数

	wchar_t m_buf[256];			//文字列編集用

	GameBase *base;				//ゲームベースのオブジェクト

	//公開メンバ
public:
	//コンストラクタ
	GameMain();
	//デストラクタ
	~GameMain();

	// ゲームの更新処理
	void UpdateGame(void);
	// ゲームの描画処理
	void RenderGame(void);
	// 数値描画処理
	void DrawNum(int x, int y, int n);
	// シーン遷移処理
	void Transition(int NextScene);
	// 文字列描画処理
	void DrawString(int x, int y, std::string str);
};
