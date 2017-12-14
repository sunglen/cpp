// int型二値クラスIntTwin

#ifndef ___Class_IntTwin
#define ___Class_IntTwin

#include <utility>
#include <algorithm>

//===== int型二値クラス =====//
class IntTwin {
	int v1;		// 第一値
	int v2;		// 第二値

public:
	IntTwin(int f = 0, int s = 0) : v1(f), v2(s) { }	// コンストラクタ

	int  first()  const { return v1; }				// 第一値v1のゲッタ
	int& first()        { return v1; }				// 第一値v1のゲッタ兼セッタ

	int  second() const { return v2; }				// 第二値v2のゲッタ
	int& second()       { return v2; }				// 第二値v2のゲッタ兼セッタ

	void set(int f, int s) { v1 = f;  v2 = s; }		// 二値のセッタ

	int min() const { return v1 < v2 ? v1 : v2; }	// 小さいほうの値

	bool ascending() const { return v1 < v2; }		// 第一値のほうが小さいか？

	void sort() { if (!(v1 < v2)) std::swap(v1, v2); }	// 昇順にソート
};

#endif
