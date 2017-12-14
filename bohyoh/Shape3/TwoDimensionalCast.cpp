// 図形クラス群（第３版）の利用例（TwoDimensionalとしての多相性＋クロスキャスト）

#include <iostream>
#include "Shape.h"
#include "TwoDimensional.h"
#include "Rectangle.h"
#include "RectEquilTriangle.h"

using namespace std;

int main()
{
	TwoDimensional* t[] = {
		new Rectangle(7, 3),			// 長方形
		new RectEquilTriangleLB(5),		// 左下直角二等辺三角形
		new RectEquilTriangleRU(4),		// 右上直角二等辺三角形
	};

	for (int i = 0; i < sizeof(t) / sizeof(t[0]); i++) {
		cout << "t[" << i << "]の面積は" << t[i]->get_area() << "です。\n";

		// t[i]の指すオブジェクトが図形であれば…
		if (Shape* s = dynamic_cast<Shape*>(t[i]))
			s->draw();	// 描画
		cout << '\n';
	}

	for (int i = 0; i < sizeof(t) / sizeof(t[0]); i++)
		delete t[i];
}
