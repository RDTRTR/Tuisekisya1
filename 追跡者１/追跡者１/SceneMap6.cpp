//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"

//使用するネームスペース
using namespace GameL;

#include "GameHead.h"
#include "SceneMap6.h"
#include "ObjEnemy.h"

//コンストラクタ
CSceneMap6::CSceneMap6()
{

}
//デストラクタ
CSceneMap6::~CSceneMap6()
{

}
//初期化メソッド
void CSceneMap6::InitScene()
{

	//音楽情報の読み込み
	//バックミュージックスタート
	Audio::LoadAudio(0, L"kamen-night.wav", SOUND_TYPE::BACK_MUSIC);
	//ドアの効果音
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	Audio::Start(0); //音楽スタート

	float Volume = Audio::Volume(1.0f, 0); //ボリュームを下げない
	float Volume1 = Audio::Volume(1.0f,1);

	//Audio::Start(1);

	//メモ4入手時のSE
	Audio::LoadAudio(4, L"itemgetseb .wav", SOUND_TYPE::EFFECT);


	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み3番目に登録
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み10番目に登録
	Draw::LoadImageW(L"本棚横並び.png", 10, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み11番目に登録
	Draw::LoadImageW(L"カーペット２.png", 11, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み12番目に登録
	Draw::LoadImageW(L"十字架.png", 12, TEX_SIZE_64);

	//謎解きメモ
	Draw::LoadImage(L"Text4.png", 30, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み50番目に登録
	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み52番目に登録
	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_512);






	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();
	//作った主人公オブジェクトをオブジェクトマネージャーに登録
	Objs::InsertObj(obj, OBJ_HERO, 10);

	//アイテムオブジェクト作成
	CObjItem*obji = new CObjItem(393, 300);
	Objs::InsertObj(obji, OBJ_ITEM, 1);

	//トラップオブジェクト
	CObjtrap1*obj_trap1 = new CObjtrap1(760, 540);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 5);

	CObjtrap1*obj_trapp1 = new CObjtrap1(0, 150);
	Objs::InsertObj(obj_trapp1, OBJ_TRAP, 5);

	//マップ背景オブジェクト1作成
	CObjMap6*map6 = new CObjMap6();
	Objs::InsertObj(map6, OBJ_MAP6, 5);

	//敵オブジェクト作成
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 20);
	
}
//実行中メソッド
void CSceneMap6::Scene()
{

}