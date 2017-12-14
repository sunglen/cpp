// bad_exception例外

#include <iostream>
#include <exception>

using namespace std;

//--- int型例外を送出すると宣言していながらdouble型例外を送出 ---//
void func() throw(int)
{
	throw 3.14;
}

//--- unexpected関数の代わりに呼び出されるハンドラ関数 ---//
void my_handler()
{
	std::cout << "例外指定されていない例外が送出されました。\n";
}

int main()
{
	try {
		throw bad_exception();
	}
	catch (const bad_exception& e) {
		cout << "bad_exceptionを捕捉：エラー内容は" << e.what() << '\n';
	}

	set_unexpected(my_handler);

	func();
}
