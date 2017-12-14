// 図形クラス間のクロスキャスト

#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "TwoDimensional.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	Shape* s = new HorzLine(5);					// sが指すのは水平直線

	// sが指すのが２次元であれば（成立しない）
	if (TwoDimensional* w = dynamic_cast<TwoDimensional*>(s))
		cout << "面積は" << w->get_area() << "です。\n";	// 面積は求められない

	Shape* r = new Rectangle(3, 5);				// rが指すのは長方形

	// rが指すのが２次元であれば（成立する）
	if (TwoDimensional* w = dynamic_cast<TwoDimensional*>(r))
		cout << "面積は" << w->get_area() << "です。\n";	// 面積は求められる

	TwoDimensional* t = new Rectangle(6, 4);	// tが指すのは長方形

	// tが指すのが図形であれば（成立する）
	if (Shape* s = dynamic_cast<Shape*>(t))
		s->draw();											// 描画できる

	delete s;
	delete r;
	delete t;
}
