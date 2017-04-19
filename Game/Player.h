//*--------------------------------------------------------------*//
//= @file   名前:Player.h
//=
//= @brief  概要:プレイヤーのヘッダファイル
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
class Player:public ObjectBase
{
public:
	Player();		//コンストラクタ 
	~Player();		//デストラクタ
};