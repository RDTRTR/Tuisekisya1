#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture2 :public CObj
{
public:

	CObjFurniture2() {};
	~CObjFurniture2() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;
	

};
