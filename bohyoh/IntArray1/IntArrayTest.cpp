// 整数配列クラスIntArray（第１版）の利用例

#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	IntArray v1(5);				// v1は要素数5の配列

	for (int i = 0; i < v1.size(); i++)
		v1[i] = i + 1;

	const IntArray v2 = v1;		// v2はv1のコピー

//	v2[0] = 10;					// コンパイルエラー

	// v1の全要素を表示
	for (int i = 0; i < v1.size(); i++)
		cout << "v1[" << i << "] = " << v1[i] << '\n';

	// v2の全要素を表示
	for (int i = 0; i < v2.size(); i++)
		cout << "v2[" << i << "] = " << v2[i] << '\n';
}
