#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"Scenemain.h"
#include"GameHead.h"
#include"SceneSave1.h"

//コンストラクタ
CSceneRoad1::CSceneRoad1()
{

}

//デストラクタ
CSceneRoad1::~CSceneRoad1()
{

}

//ゲームメイン初期化メソッド
void CSceneRoad1::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"セーブ画面");

	//セーブ画面オブジェクト作成
	CObjRoad1* obj = new CObjRoad1();      //セーブ画面オブジェクト作成
	Objs::InsertObj(obj, OBJ_ROAD1, 10);  //主人公オブジェクト登録
}

//ゲームメイン実行中メソッド
void CSceneRoad1::Scene()
{

}
