//*--------------------------------------------------------------*//
//= @file   名前:Enemy.h
//=
//= @brief  概要:エネミークラス
//=
//= @date   日付:2016/2/4
//=
//= @author 製作者:ShutaFurukawa
//*--------------------------------------------------------------*//

//ヘッダファイルの多重インクルード防止
#pragma once

//ヘッダファイルのインクルード
#include "ObjectBase.h"
#include "GameBase.h"

//クラスの定義
class Enemy :public ObjectBase
{
private:

public:
	Enemy();		//コンストラクタ 
	~Enemy();		//デストラクタ
};