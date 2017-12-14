// new演算子によるメモリ確保失敗時の挙動を変える

#include <new>
#include <cstdlib>
#include <iostream>

using namespace std;

//--- bad_alloc発生時のハンドラ関数 ----//
void new_error()
{
	cout << "new演算子によるメモリ確保に失敗しました。\n";
	abort();
}

int main()
{
	set_new_handler(new_error);

	while (true)
		new char[10000];
}
