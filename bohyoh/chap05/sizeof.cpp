// 仮想関数をもつクラスオブジェクトの大きさを表示

#include <iostream>

using namespace std;

class A { int x;          void f() { }                      } a;
class B { int x;  virtual void f() { }                      } b;
class C { int x;  virtual void f() { } virtual void g() { } } c;

int main()
{
	cout << "sizeof(a) = " << sizeof(a) << '\n';
	cout << "sizeof(b) = " << sizeof(b) << '\n';
	cout << "sizeof(c) = " << sizeof(c) << '\n';
}
