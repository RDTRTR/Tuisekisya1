#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTips3.h"

using namespace GameL;
extern bool Memoflag1;
extern bool Tipsflag;
bool Textflag5 = false;

extern float g_Xz;
extern float g_Yz;

void CObjTips3::Init()
{

	m_px = 640;
	m_py = 360;
	Hits::SetHitBox(this, m_px + 64, m_py + 64, 64, 50, ELEMENT_BLUE, OBJ_TIPS3, 1);
}

void CObjTips3::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);


	if (Textflag5 == true)
	{
		Sleep(1500);
		g_Xz = 100;
		g_Yz = 120;

		Scene::SetScene(new CSceneGameOver());

		this->SetStatus(false);   //自身に削除命令を出す。

	}

	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{		
			if (Memoflag1 == true && Tipsflag == true)
			{
				Audio::Start(6);

				Textflag5 = true;
			}
		}
	}

}

void CObjTips3::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right = 64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	//Jupiter
	Draw::Draw(36, &src, &dst, c, 0.0f);

	if (Textflag5 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 230.0f;
		dst.m_left = 300.0f;
		dst.m_right = 556.0f;
		dst.m_bottom = 456.0f;

		Draw::Draw(41, &src, &dst, c, 0.0f);
	}
}