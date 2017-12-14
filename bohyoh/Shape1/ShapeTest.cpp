// 図形クラス群Shape, Point, Rectangle（第１版）の利用例

#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
	// 以下の宣言はエラーとなるのでコメントアウト
	// Shape s;		// エラー：抽象クラスのオブジェクトは生成できない

	Shape* a[2];

	a[0] = new Point;					// 点
	a[1] = new Rectangle(7, 3);			// 長方形

	for (int i = 0; i < 2; i++) {
		cout << "a[" << i << "]\n";
		a[i]->draw();					// 図形を描画
		cout << '\n';
	}

	delete a[0];
	delete a[1];
}
