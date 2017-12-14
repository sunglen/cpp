// bsearch関数による降順ソート済み配列からの探索

#include <cstdlib>
#include <iostream>

using namespace std;

//--- int型整数の比較関数（降順用）---//
int int_cmpr(const int* a, const int* b)
{
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}

int main()
{
	int nx;						// xの要素数
	cout << "配列の要素数：";
	cin >> nx;
	int* x = new int[nx];		// 配列を生成

	cout << nx << "個の整数を降順に入力せよ。\n";
	cout << "x[0] : ";
	cin >> x[0];
	for (int i = 1; i < nx; i++) {
		do {
			cout << "x[" << i << "] : ";
			cin >> x[i];
		} while (x[i] > x[i - 1]);
	}

	int no;
	cout << "探索する値：";
	cin >> no;

	int* p = reinterpret_cast<int*>(bsearch(&no, x, nx, sizeof(int),
				reinterpret_cast<int (*)(const void*, const void*)>(int_cmpr)));

	if (p != NULL)
		cout << "x[" << (p - x) << "]が一致します。\n";
	else
		cout << "見つかりませんでした。\n";
}
