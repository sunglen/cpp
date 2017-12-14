// 数値演算例外クラス群（第２版）

#ifndef ___Math_Exception
#define ___Math_Exception

//--- 数値演算による例外 ---//
class MathException { };

//--- 0による除算 ---//
class DividedByZero : public MathException { };

//--- オーバフロー ---//
class Overflow : public MathException {
	int v;
public:
	Overflow(int val) : v(val) { }
	int value() const { return v; }
};

//--- アンダフロー ---//
class Underflow : public MathException {
	int v;
public:
	Underflow(int val) : v(val) { }
	int value() const { return v; }
};

#endif
