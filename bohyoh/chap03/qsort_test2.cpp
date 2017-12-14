// qsort関数を利用して実数配列の要素を値の降順にソート

#include <cstdlib>
#include <iostream>

using namespace std;

//--- double型の比較関数（降順用）---//
int double_cmpr(const double* a, const double* b)
{
	return *a < *b ? 1 : *a > *b ? -1 : 0;
}

int main()
{
	int nx;							// xの要素数
	cout << "配列の要素数：";
	cin >> nx;
	double* x = new double[nx];		// 配列を生成

	cout << nx << "個の実数を入力せよ。\n";
	for (int i = 0; i < nx; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	qsort(x, nx, sizeof(double), 
		  reinterpret_cast<int (*)(const void*, const void*)>(double_cmpr));

	cout << "降順にソートしました。\n";
	for (int i = 0; i < nx; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
}
