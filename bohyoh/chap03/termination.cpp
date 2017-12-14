// プログラム終了時にメッセージと時刻を表示

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//--- 終了メッセージ表示 ----//
void good_bye()
{
	cout << "プログラム正常終了！\n";
}

//--- 現在の時刻を表示 ---//
void put_time()
{
	time_t current = time(NULL);			// 現在の時刻を取得
	struct tm* lct = localtime(&current);	// 地方時の構造体に変換

	cout << lct->tm_hour << ":" << lct->tm_min << ":" << lct->tm_sec << '\n';
}

int main()
{
	int x;

	atexit(good_bye);	// 関数good_byeを登録
	atexit(put_time);	// 関数put_timeを登録

	cout << "(0)…正常終了 (1)…異常終了：";
	cin >> x;

	if (x) abort();		// 異常終了（登録関数は呼び出されない）
	return 0;			// 正常終了（登録関数が自動的に呼び出される）
}
