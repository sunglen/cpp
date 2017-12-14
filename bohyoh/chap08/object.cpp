// 例外の送出とオブジェクトの構築・解体

#include <string>
#include <iostream>

using namespace std;

class C {
	string name;
public:
	C(const string& n) : name(n) { cout << name << "を構築\n"; }
	C(const C& c) { name = c.name + "'"; cout << name << "をコピー構築\n"; }
	~C() { cout << name << "を解体\n"; }
};

void func()
{
	C c1(string("c1"));

	try {
		C c2(string("c2"));
		throw c2;						// 例外を送出
	}
	catch (int) {
		cout << "int型例外を捕捉\n";	// 捕捉されない
	}
	cout << "tryブロック終了\n";		// 実行されない
}

int main()
{
	try {
		func();
	}
	catch (const C& c) {
		cout << "C型例外を捕捉\n";		// ここで捕捉される
	}
}
