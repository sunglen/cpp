// 例外の送出と捕捉

#include <iostream>

using namespace std;

//=== オーバフロークラス ===//
class Overflow { };

//--- xの２倍を返す ---//
int twice(int x)
{
	if (x < 0)
		throw "おかしい。値が負になっています。\n";
	else if (x > 30000)
		throw Overflow();
	else
		return 2 * x;
}

int main()
{
	int a;
	cout << "整数：";
	cin >> a;

	try {
		int b = twice(a);
		cout << "その数の２倍は" << b << "です。\n";
	}
	catch (const char* str) {		// 文字列の例外を捕捉
		cout << "例外発生：" << str;
	}
	catch (const Overflow&) {		// Overflow型の例外を捕捉
		cout << "オーバフローしました。プログラムを終了します。\n";
		return 1;
	}
}
