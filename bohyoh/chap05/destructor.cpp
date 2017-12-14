// 継承とデストラクタ

#include <iostream>

using namespace std;

//===== 基底クラス =====//
class Base {
public:
	Base() { cout << "Baseのコンストラクタ\n"; }	// コンストラクタ
   ~Base() { cout << "Baseのデストラクタ\n"; }		// デストラクタ
};

//===== 派生クラス =====//
class Derived : public Base {
	int* a;
public:
	Derived() { a = new int[10]; cout << "配列を生成。\n"; } // コンストラクタ
   ~Derived() { delete[] a; 	 cout << "配列を解放。\n"; } // デストラクタ
};

int main()
{
	Base* ptr = new Derived;		// Derivedを作成

	delete ptr;						// Baseを消去
}
