#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture19.h"

using namespace GameL;

void CObjFurniture19::Init()
{
	m_x = 745;
	m_y = 450;


}

void CObjFurniture19::Action()
{

}

void CObjFurniture19::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 260.0f;
	src.m_right = 0.0f;
	src.m_bottom = 180.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 260.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 180.0f + m_y;

	Draw::Draw(13, &src, &dst, c, 0.0f);//キッチンテーブル1
}