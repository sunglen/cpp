// 点クラスPoint（第３版）

#ifndef ___Class_Point
#define ___Class_Point

#include <string>
#include <iostream>
#include "Shape.h"

//===== 点クラス =====//
class Point : public Shape {
public:
	//--- 描画 ---//
	void draw() const {
		std::cout << "*\n";
	}

	//--- 複製 ---//
	Point* clone() const {
		return new Point;
	}

	//--- 文字列表現 ---//
	std::string to_string() const {
		return "Point";
	}

	//--- デバッグ用情報表示 ---//
	void debug() const {
		Shape::debug();
	}
};

#endif
