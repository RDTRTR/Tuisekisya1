#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMap6 : public CObj
{
public:
	CObjMap6() {};
	~CObjMap6() {};
	void Init();
	void Action();
	void Draw();

private:
};