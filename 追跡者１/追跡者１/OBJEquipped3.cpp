//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjEquipped3.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjEquipped3::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	m_x = 0.0f;
	m_y = 0.0f;
}

//アクション
void CObjEquipped3::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 520 && m_mou_x < 680 && m_mou_y>435 && m_mou_y < 500)
	{
		//マウスの左が押されたらアイテム画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneItem());
		}
	}
}

//ドロー
void CObjEquipped3::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	//表示位置の設定
	dst.m_top = 100.0f + m_y;
	dst.m_left = 110.0f + m_x;
	dst.m_right = 330.0f + m_x;
	dst.m_bottom = 320.0f + m_y;

	//マウス表示位置
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	//マウスのボタンの状態
	if (m_mou_r == true)
		Font::StrDraw(L"R=押している", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=押していない", 20, 30, 12, c);

	if (m_mou_l == true)
		Font::StrDraw(L"L=押している", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=押していない", 20, 40, 12, c);

	//装備画面表示
	Font::StrDraw(L"屋根裏部屋の鍵", 340, 100, 46, c);

	Font::StrDraw(L"どこかで使えそうな鍵", 0, 150, 46, c);
	//装備しますか表示
	Font::StrDraw(L"装備しますか？", 250, 350, 46, c);
	//はい　いいえ表示
	Font::StrDraw(L"はい　　　　いいえ", 130, 440, 64, c);

	//一番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}