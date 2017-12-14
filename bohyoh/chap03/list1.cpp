// 特定条件の成立の可否によって配列要素の値を識別表示

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//--- 成績は良[Ｂ：70～79点]か？ ---//
bool fit(int x)
{
	return x >= 70 && x <= 79;
}

//--- 関数fit(x)の返却値が真である配列aの要素を識別表示 ---//
void put_list(const int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (fit(a[i]))
			cout << "★";
		else
			cout << "  ";
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
}

int main()
{
	int a[10];							// 点数
	int n = sizeof(a) / sizeof(a[0]);	// 要素数

	srand(time(NULL));			// 乱数の種を初期化

	for (int i = 0; i < n; i++)
		a[i] = rand() % 101;	// 0～100の乱数を代入

	put_list(a, n);				// 一覧表示
}
