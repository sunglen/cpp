// qsort関数を利用して整数配列の要素を値の昇順にソート

#include <cstdlib>
#include <iostream>

using namespace std;

//--- int型整数の比較関数 ---//
int int_cmp(const int* a, const int* b)
{
	return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main()
{
	int nx;						// xの要素数
	cout << "配列の要素数：";
	cin >> nx;
	int* x = new int[nx];		// 配列を生成

	cout << nx << "個の整数を入力せよ。\n";
	for (int i = 0; i < nx; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	qsort(x, nx, sizeof(int),
		  reinterpret_cast<int (*)(const void*, const void*)>(int_cmp));

	cout << "昇順にソートしました。\n";
	for (int i = 0; i < nx; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
}
