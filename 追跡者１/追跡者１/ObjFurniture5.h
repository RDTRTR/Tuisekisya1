#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture5 :public CObj
{
public:

	CObjFurniture5() {};
	~CObjFurniture5() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

