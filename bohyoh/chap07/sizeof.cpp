// 仮想基底クラスをもつクラスオブジェクトの大きさを表示

#include <iostream>

using namespace std;

class A             { int x; } a;
class B : A         { int x; } b;
class C : virtual A { int x; } c;

int main()
{
	cout << "sizeof(a) = " << sizeof(a) << '\n';
	cout << "sizeof(b) = " << sizeof(b) << '\n';
	cout << "sizeof(c) = " << sizeof(c) << '\n';
}
