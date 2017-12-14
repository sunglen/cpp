// オーバライド（上書き）とオーバロード（多重定義）

#include <iostream>

using namespace std;

class A {
public:
	void f() { cout << "A::f()\n"; }			// [非]仮想関数
};

class B : public A {
public:
	virtual void f() { cout << "B::f()\n"; }	// 仮想関数
};

class C : public B {
public:
	void f()	{ cout << "C::f()\n"; }		// 仮想関数のオーバライド（上書き）
	void f(int)	{ cout << "C::f(int)\n"; }	// オーバロード（多重定義）
};

int main()
{
	A  a;
	B  b;
	C  c;
	A* p = &b;
	B* q = &c;

	a.f();
	b.f();
	c.f();
	c.f(1);
	p->f();		// 動的結合は行われない
	q->f();		// 動的結合が行われる
//	q->f(1);	// コンパイルエラー
}
