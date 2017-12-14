// 0以上99以下の二つの整数値を加算する（結果も0以上99以下でなければならない）

#include <iostream>
#include <exception>

using namespace std;

/*--- 0以上99以下のv1とv2を加算 ---*/
int add(int v1, int v2)
{
	if (v1 < 0 || v1 > 99)
		throw out_of_range("v1の値が不正。");

	if (v2 < 0 || v2 > 99)
		throw out_of_range("v2の値が不正。");

	int sum = v1 + v2;
	if (sum < 0 || sum > 99)
		throw overflow_error("オーバフロー。");

	return v1 + v2;
}

int main()
{
	int x, y;		// 加算する値（0～99でなければならない）

	cout << "xの値(0～99)：";
	cin >> x;

	cout << "yの値(0～99)：";
	cin >> y;

	try {
		cout << "加算した値は" << add(x, y) << "です。\n";
	} catch (const logic_error& e) {
		cerr << "論理エラー発生：" << e.what() << '\n';
	} catch (const runtime_error& e) {
		cerr << "実行時エラー発生：" << e.what() << '\n';
	}
}
