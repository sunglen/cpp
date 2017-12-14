// 図形クラスShape（第３版）

#ifndef ___Class_Shape
#define ___Class_Shape

#include <string>
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

//--- 図形クラス群用の挿入子 ---//
inline std::ostream& operator<<(std::ostream& os, const Shape& s)
{
	return os << s.to_string(); // to_stringが返却する文字列を表示
}

#endif
