// 二つの整数値の加減乗除を求める（演算結果は0以上99以下でなければならい）

#include <iostream>
#include "MathException.h"

using namespace std;

/*--- valueが0以上99以下であるか ---*/
int check(int value)
{
	if (value <  0) throw Underflow(value);
	if (value > 99) throw Overflow(value);
	return value;
}

/*--- xにyを加えた値を返却 ---*/
int add2(int x, int y)
{
	return check(x + y);
}

/*--- xからyを減じた値を返却 ---*/
int sub2(int x, int y)
{
	return check(x - y);
}

/*--- xにyを乗じた値を返却 ---*/
int mul2(int x, int y)
{
	return check(x * y);
}

/*--- xをyで除した値を返却 ---*/
int div2(int x, int y)
{
	if (y == 0) throw DividedByZero();
	return check(x / y);
}

int main()
{
	int x, y;		// 加減乗除する値（0～99でなければならない）

	do { cout << "xの値：";  cin >> x; } while (x < 0 || x > 99);
	do { cout << "yの値：";  cin >> y; } while (y < 0 || y > 99);

	try {
		cout << "x + y = " << add2(x, y) << '\n';	// 加算
		cout << "x - y = " << sub2(x, y) << '\n';	// 減算
		cout << "x * y = " << mul2(x, y) << '\n';	// 乗算
		cout << "x / y = " << div2(x, y) << '\n';	// 除算
	}
	catch (const DividedByZero&) {
		cout << "０による除算が発生!!\n";
	}
	catch (const Overflow& e) {
		cout << "オーバフロー発生!! (" << e.value() << ")\n";
	}
	catch (const Underflow& e) {
		cout << "アンダフロー発生!! (" << e.value() << ")\n";
	}
	cout << "プログラム終了!!\n";
}
