//--- 図形クラス群Shape, Point, Rectangle（第１版）---//

#ifndef ___Class_Shape
#define ___Class_Shape

#include <iostream>

//===== 図形クラス（抽象クラス）=====//
class Shape {
public:
	//--- 描画 ---//
	virtual void draw() const = 0;		// 純粋仮想関数
};

//===== 点クラス =====//
class Point : public Shape {
public:
	//--- 描画 ---//
	void draw() const {
		std::cout << "+\n";
	}
};

//===== 長方形クラス =====//
class Rectangle : public Shape {
	int width;		// 幅
	int height;		// 高さ

public:
	//--- コンストラクタ ---//
	Rectangle(int w, int h) : width(w), height(h) { }

	//--- 描画 ---//
	void draw() const {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				std::cout << '*';
			std::cout << '\n';
		}
	}
};

#endif
