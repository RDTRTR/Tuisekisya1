#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture37 :public CObj
{
public:

	CObjFurniture37() {};
	~CObjFurniture37() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};
