#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームメイン
class CSceneMap6 :public CScene
{
public:
	CSceneMap6();
	~CSceneMap6();
	void InitScene();//ゲームメインの初期化メソッド
	void Scene();//ゲームメインの実行中メソッド:
private:

};