#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"

#include"GameHead.h"
#include"ObjEnemy.h"

using namespace GameL;

void CObjEnemy::Init()
{
	m_x = 500.0f;
	m_y = 100.0f;
	m_vx = 0.0f;
	m_vy = 0.0f;
}
void CObjEnemy::Action()
{
	m_vx = -1.0f;
	m_vy = 0.0f;
	float r = 0.0f;
	r = m_vx * m_vx + m_vy * m_vy;
	r = sqrt(r);

	if (r == 0.0f)
	{
		;
	}
	else
	{
		m_vx *= 1.0f / r * m_vx;
		m_vy *= 1.0f / r * m_vy;
	}

	m_vx *= 1.5f;
	m_vy *= 1.5f;

	m_x += m_vx;
	m_y += m_vy;
}
void CObjEnemy::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f+m_y;
	dst.m_left = 32.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 32.0f+m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}