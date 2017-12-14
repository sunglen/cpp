// 数値演算例外クラス群（第１版）

#ifndef ___Math_Exception
#define ___Math_Exception

//--- 0による除算 ---//
class DividedByZero { };

//--- オーバフロー ---//
class Overflow {
	int v;
public:
	Overflow(int val) : v(val) { }
	int value() const { return v; }
};

//--- アンダフロー ---//
class Underflow {
	int v;
public:
	Underflow(int val) : v(val) { }
	int value() const { return v; }
};

#endif
