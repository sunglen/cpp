// 図形クラス群（第２版）の利用例

#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
	Shape* a[] = {
		new Point(),			// 点
		new HorzLine(9),		// 水平直線
		new VertLine(6),		// 垂直直線
		new Rectangle(7, 3),	// 長方形
	};

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		cout << "a[" << i << "]\n";
		a[i]->print();		// 図形に関する情報を表示
		a[i]->debug();		// デバック情報を表示
		cout << '\n';
	}

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		delete a[i];
}
