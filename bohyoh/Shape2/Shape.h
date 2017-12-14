// 図形クラス群Shape, Point, Line, HorzLine, VertLine, Rectangle（第２版）

#ifndef ___Class_Shape
#define ___Class_Shape

#include <string>
#include <sstream>
#include <iostream>

//===== 図形クラス（抽象クラス）=====//
class Shape {
public:
	//--- 純粋仮想デストラクタ ---//
	virtual ~Shape() = 0;

	//--- 複製 ---//
	virtual Shape* clone() const = 0;				// 純粋仮想関数

	//--- 描画 ---//
	virtual void draw() const = 0;					// 純粋仮想関数

	//--- 文字列表現 ---//
	virtual std::string to_string() const = 0;		// 純粋仮想関数

	//--- 情報解説付き描画 ---//
	void print() const {
		std::cout << to_string() << '\n';
		draw();
	}

	//--- デバッグ用情報表示 ---//
	virtual void debug() const = 0;					// 純粋仮想関数
};

//--- 純粋仮想デストラクタ ---//
inline Shape::~Shape() { }

//--- デバッグ用情報表示 ---//
inline void Shape::debug() const
{
	std::cout << "-- デバッグ情報 --\n";
	std::cout << "型：" << typeid(*this).name() << '\n';
	std::cout << "アドレス：" << this << '\n';
}

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

//===== 直線クラス（抽象クラス） =====//
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
	virtual HorzLine* clone() const {
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
	virtual VertLine* clone() const {
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

//===== 長方形クラス =====//
class Rectangle : public Shape {
	int width;		// 幅
	int height;		// 高さ

public:
	//--- コンストラクタ ---//
	Rectangle(int w, int h) : width(w), height(h) { }

	//--- 複製 ---//
	Rectangle* clone() const {
		return new Rectangle(width, height);
	}

	//--- 描画 ---//
	void draw() const {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				std::cout << '*';
			std::cout << '\n';
		}
	}

	//--- 文字列表現 ---//
	std::string to_string() const {
		std::ostringstream os;
		os << "Rectangle(width:" << width << ", height:" << height << ")";
		return os.str();
	}

	//--- デバッグ用情報表示 ---//
	void debug() const {
		Shape::debug();
		std::cout << "width ：" << width << '\n';
		std::cout << "height：" << height << '\n';
	}
};

//--- 図形クラス群用の挿入子 ---//
inline std::ostream& operator<<(std::ostream& os, const Shape& s)
{
	return os << s.to_string(); // to_stringが返却する文字列を表示
}

#endif
