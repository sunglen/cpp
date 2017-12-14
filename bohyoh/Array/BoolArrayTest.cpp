// 配列クラステンプレートArray<bool>の利用例

#include <iostream>
#include "Array.h"
#include "BoolArray.h"

using namespace std;

//--- Array<bool>型配列aの全要素を0または1で連続表示 ---//
void print_Array_bool(const Array<bool>& a)
{
	for (int i = 0; i < a.size(); i++)
		cout << (a[i] ? '1' : '0');
}

int main()
{
	Array<bool> x(10);		// 全要素をfalseで初期化

	cout << boolalpha;
	for (int i = 0; i < x.size(); i++)
		cout << "x[" << i  << "] = " << x[i] << '\n';

	Array<bool> y(x);		// yはxのコピー（要素数が10で全要素がfalse）
	Array<bool> z(5);		// zの要素数は5だが
	z = y;					// yが代入されるので要素数は10となる

	y[3] = y[6] = true;	
	z[5] = z[7] = true;

	cout << "x = ";  print_Array_bool(x);  cout << '\n';
	cout << "y = ";  print_Array_bool(y);  cout << '\n';
	cout << "z = ";  print_Array_bool(z);  cout << '\n';
}
