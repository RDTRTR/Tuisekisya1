#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture25 :public CObj
{
public:

	CObjFurniture25() {};
	~CObjFurniture25() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};
