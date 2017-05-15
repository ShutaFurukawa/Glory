//*--------------------------------------------------------------*//
//= @file   名前:GameMain.cpp
//=
//= @brief  概要:ゲーム関連のソースファイル
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

// ヘッダファイルの読み込み ================================================
#define _GAMEMAIN_
#include "GameMain.h"

#include<fstream>
#include<iostream>
#include<string>
#include<sstream>

#include "..\ADX2Le.h"
#include "CueSheet_0.h"

#include "GameLogo.h"
#include "GameTitle.h"
#include "GamePlay.h"
#include "GameClear.h"
#include "GameOver.h"

#pragma comment(lib,"cri_ware_pcx86_LE_import.lib")

//名前空間
using namespace DirectX::SimpleMath;
using namespace DirectX;
using namespace std;

//----------------------------------------------------------------------
//! @brief コンストラクタ
//!
//! @param[in] なし
//----------------------------------------------------------------------
GameMain::GameMain()
{
	m_scene = PLAY;
	m_NextScene = m_scene;

	base = new GamePlay;

	//音の読み込み
	//g_se = LoadSoundMem("Resources\\Sounds\\SE00.ogg");
	//ADX2Le::Initialize("Resources\\Sounds\\NewProject.acf");
	//ADX2Le::LoadAcb("Resources\\Sounds\\CueSheet_0.acb");
	//ADX2Le::Play(CRI_CUESHEET_0__CUE_ID_0);

}

//----------------------------------------------------------------------
//! @brief デストラクタ
//----------------------------------------------------------------------
GameMain::~GameMain()
{
	//ADX2Le::Finalize();
	delete base;
}

//----------------------------------------------------------------------
//! @brief ゲームの更新処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GameMain::UpdateGame(void)
{
	ADX2Le::Update();

	//シーン管理
	if (m_scene != m_NextScene)
	{
		m_scene = m_NextScene;

		//シーン生成
		switch (m_scene)
		{
		case LOGO:
			base = new GameLogo();
			break;
		case TITLE:
			base = new GameTitle();
			break;
		case PLAY:
			base = new GamePlay();
			break;
		case CLEAR:
			base = new GameClear();
			break;
		case OVER:
			base = new GameOver();
			break;
		}
	}

	base->Update();
}

//----------------------------------------------------------------------
//! @brief ゲームの描画処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GameMain::RenderGame(void)
{
	base->Render();
}

//----------------------------------------------------------------------
//! @brief 数値描画処理
//!
//! @param[in] xy座標，数値w
//!
//! @return なし
//----------------------------------------------------------------------
void GameMain::Transition(SCENE scene)
{
	m_NextScene = scene;
}

//----------------------------------------------------------------------
//! @brief 数値描画処理
//!
//! @param[in] xy座標，数値w
//!
//! @return なし
//----------------------------------------------------------------------
SCENE GameMain::GetScene()
{
	return m_NextScene;
}

//----------------------------------------------------------------------
//! @brief 数値描画処理
//!
//! @param[in] xy座標，数値w
//!
//! @return なし
//----------------------------------------------------------------------
void GameMain::DrawNum(int x, int y, int n)
{
	int w = n;		//計算用
	int i = 0;		//文字数

	if (w == 0)
	{
	//	//DrawRectGraph(x, y, 0, 48, 25, 32, g_PongImage, TRUE, FALSE);
	}
	else
	{
		while (w)
		{
	//		//DrawRectGraph(x - i * 25, y,
	//		//	(w % 10) * 25, 48, 25, 32, g_PongImage, TRUE, FALSE);
			w = w / 10;
			i++;
		}
	}

}

//----------------------------------------------------------------------
//! @brief 文字列描画処理
//!
//! @param[in] なし
//!
//! @return なし
//----------------------------------------------------------------------
void GameMain::DrawString(int x,int y,string str)
{
	//文字列編集
	swprintf_s(m_buf, 256, L"%s", str);
	//文字の描画
	g_spriteFont->DrawString(g_spriteBatch.get(), m_buf, Vector2(x, y));
}
