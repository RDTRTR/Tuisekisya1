#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture33 :public CObj
{
public:

	CObjFurniture33() {};
	~CObjFurniture33() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};
