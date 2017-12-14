// 数値演算例外クラス群（第３版）

#ifndef ___Math_Exception
#define ___Math_Exception

#include <string>

//--- 数値演算による例外 ---//
class MathException {
public:
	virtual void display() const { std::cout << "数値演算例外\n"; }
};

//--- 0による除算 ---//
class DividedByZero : public MathException {
public:
	void display() const { std::cout << "０による除算\n"; }
};

//--- オーバフロー ---//
class Overflow : public MathException {
	int v;
public:
	Overflow(int val) : v(val) { }
	int value() const { return v; }
	void display() const { std::cout << "オーバフロー（値は" << v << "）\n"; }
};

//--- アンダフロー ---//
class Underflow : public MathException {
	int v;
public:
	Underflow(int val) : v(val) { }
	int value() const { return v; }
	void display() const { std::cout << "アンダフロー（値は" << v << "）\n"; }
};

#endif
