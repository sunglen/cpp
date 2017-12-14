// 図形クラス群（第３版）の利用例（Shapeとしての多相性＋クロスキャスト）

#include <iostream>
#include "Shape.h"
#include "TwoDimensional.h"
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "RectEquilTriangle.h"

using namespace std;

int main()
{
	Shape* s[] = {
		new Point(),				 // 点
		new HorzLine(6),			 // 水平直線
		new VertLine(9),			 // 垂直直線
		new Rectangle(7, 3),		 // 長方形
		new RectEquilTriangleLB(5),	 // 左下直角二等辺三角形
		new RectEquilTriangleRU(4),  // 右上直角二等辺三角形
	};

	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
		cout << "s[" << i << "]\n";
		s[i]->print();		// 図形に関する情報を表示

		// s[i]の指すオブジェクトが２次元図形であれば…
		if (TwoDimensional* t = dynamic_cast<TwoDimensional*>(s[i]))
			cout << "面積は" << t->get_area() << "です。\n";	// 面積を表示
		cout << '\n';
	}

	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
		delete s[i];
}
