// 仮想基底クラスと非仮想基底クラスの初期化

#include <iostream>

using namespace std;

class V1 {
public:
	V1() { cout << "V1を初期化\n"; }
};

class V2 {
public:
	V2() { cout << "V2を初期化\n"; }
};

class X : virtual public V1, virtual public V2 {
public:
	X() { cout << "Ｘを初期化\n"; }
};

class Y : virtual public V2, virtual public V1 {
public:
	Y() { cout << "Ｙを初期化\n"; }
};

class Z : public X, public Y {
public:
	Z() { cout << "Ｚを初期化\n"; }
};

int main()
{
	Z dummy;
}
