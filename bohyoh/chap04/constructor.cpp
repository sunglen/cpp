// 基底クラスと派生クラスのコンストラクタ

#include <iostream>

using namespace std;

//===== 基底クラス =====//
class Base {
	int x;

public:
	//--- コンストラクタ ---//
	Base() : x(99) { cout << "Base::xを99で初期化。\n"; }

	//--- xのゲッタ ---//
	int get_x() const { return x; }
};

//===== 派生クラス =====//
class Derived : public Base {
	// コンストラクタを含め何も定義しない
};

int main()
{
	Derived d;

	cout << "d.get_x() = " << d.get_x() << '\n';
}
