// 動的キャストと失敗時の挙動

#include <iostream>

using namespace std;

//===== 基底クラス =====//
class Base {
	virtual void f() { }	// 仮想関数
};

//===== 派生クラス =====//
class Derived : public Base { };

int main()
{
	Base bs;
	Derived dv;

	Derived* p1 = dynamic_cast<Derived*>(&bs);		// 失敗：空ポインタとなる
	cout << "p1 = " << p1 << '\n';

	Derived* p2 = dynamic_cast<Derived*>(&dv);		// 成功
	cout << "p2 = " << p2 << '\n';

	try {
		Derived& r1 = dynamic_cast<Derived&>(bs);	// 失敗：bad_castを送出
		cout << "r1はbsを参照しています。\n";		// 実行されない
	} catch (bad_cast) {
		cout << "bsのキャストに失敗しました。\n";
	}

	try {
		Derived& r2 = dynamic_cast<Derived&>(dv);	// 成功
		cout << "r2はdvを参照しています。\n";
	} catch (bad_cast) {
		cout << "dvのキャストに失敗しました。\n";	// 実行されない
	}
}
