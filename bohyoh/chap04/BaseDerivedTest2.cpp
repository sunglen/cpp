// スライシング

#include <iostream>
#include "BaseDerived.h"

using namespace std;

int main()
{
	Derived dv(1, 2, 3);
	Base bs(99, 99);

	cout << "bsの初期状態\n";     bs.func();

	bs = dv;						// ＯＫ：スライシング
	cout << "dvを代入した後\n";   bs.func();

//	dv = bs;						// コンパイルエラー
}
