// 多重継承とダウンキャストにおけるポインタ

#include <iostream>

using namespace std;

class A { int a; };

class B { int b; };

class C : public A, public B {
	int c;
};

int main()
{
	C c;
	A* ptr_a = &c;		// ptr_aはcを指す
	B* ptr_b = &c;		// ptr_bはcを指す

	cout << "ptr_a = " << ptr_a << '\n';	// cを指すptr_aの値を表示
	cout << "ptr_b = " << ptr_b << '\n';	// cを指すptr_bの値を表示
	cout << "&c    = " << &c << '\n';		// cへのポインタ値を表示
}
