// 直線クラス群（第３版）
//		Line
//		HorzLine
//		VertLine

#ifndef ___Class_Line
#define ___Class_Line

#include <string>
#include <sstream>
#include <iostream>
#include "Shape.h"

//===== 直線クラス（抽象クラス）=====//
class Line : public Shape {
protected:
	int length;			// 長さ

public:
	//--- コンストラクタ ---//
	Line(int len) : length(len) { }

	//--- 長さ（length）のゲッタ ---//
	int get_length() const { return length; }

	//--- 長さ（length）のセッタ ---//
	void set_length(int len) { length = len; }

	//--- デバッグ用情報表示 ---//
	void debug() const {
		Shape::debug();
		std::cout << "length：" << length << '\n';
	}
};

//===== 水平直線クラス =====//
class HorzLine : public Line {
public:
	//--- コンストラクタ ---//
	HorzLine(int len) : Line(len) { }

	//--- 複製 ---//
	HorzLine* clone() const {
		return new HorzLine(length);
	}

	//--- 描画 ---//
	void draw() const {
		for (int i = 1; i <= length; i++)
			std::cout << '-';
		std::cout << '\n';
	}

	//--- 文字列表現 ---//
	std::string to_string() const {
		std::ostringstream os;
		os << "HorzLine(length:" << length << ")";
		return os.str();
	}
};

//===== 垂直直線クラス =====//
class VertLine : public Line {
public:
	//--- コンストラクタ ---//
	VertLine(int len) : Line(len) { }

	//--- 複製 ---//
	VertLine* clone() const {
		return new VertLine(length);
	}

	//--- 描画 ---//
	void draw() const {
		for (int i = 1; i <= length; i++)
			std::cout << "|\n";
	}

	//--- 文字列表現 ---//
	std::string to_string() const {
		std::ostringstream os;
		os << "VertLine(length:" << length << ")";
		return os.str();
	}
};

#endif
