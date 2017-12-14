// 静的なメンバへのポインタ

#include <iostream>

using namespace std;

class StaticMember {
public:
	static int x;
	static void f() { cout << "TEST\n"; }
};

int StaticMember::x = 0;

int main()
{
	int *ptr = &StaticMember::x;			// 静的データメンバxへのポインタ
	void (*fptr)() = &StaticMember::f;		// 静的メンバ関数fへのポインタ

	cout << "*ptr = " << *ptr << '\n';

	cout << "fptr() : ";
	fptr();
}
