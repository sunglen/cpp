// 配列クラステンプレートFixedArrayの利用例

#include <new>
#include <iomanip>
#include <iostream>
#include "FixedArray.h"

using namespace std;

//--- FixedArray<Type, N>の全要素を表示 ---//
template <class Type, int N>
void print_FixedArray(const FixedArray<Type, N>& a)
{
	cout << "{ ";
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';
	cout << "}";
}

int main()
{
	FixedArray<int, 7> a1;		// 要素数7の配列

	for (int i = 0; i < a1.size(); i++)
		a1[i] = i;
		
	FixedArray<int, 7> a2 = a1;	// a2はa1のコピー

	cout << "a1 = ";   print_FixedArray(a1);   cout << '\n';
	cout << "a2 = ";   print_FixedArray(a2);   cout << '\n';

//	FixedArray<int, 8> a3 = a;	// コンパイルエラー：型が不一致
}
