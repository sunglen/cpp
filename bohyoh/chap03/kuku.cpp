// 九九の加算と乗算

#include <iomanip>
#include <iostream>

using namespace std;

//--- x1とx2の和を求める ---//
int sum(int x1, int x2)
{
	return x1 + x2;
}

//--- x1とx2の積を求める ---//
int mul(int x1, int x2)
{
	return x1 * x2;
}

//--- 九九の表を出力 ---//
void kuku(int calc(int, int))
{
	cout << "  |";
	for (int i = 1; i <= 9; i++)
		cout << setw(3) << i;
	cout << "\n--+";
	for (int i = 1; i <= 27; i++)
		cout << '-';
	cout << '\n';

	for (int i = 1; i <= 9; i++) {
		cout << i << " |";
		for (int j = 1; j <= 9; j++)
			cout << setw(3) << calc(i, j);
		cout << '\n';
	}
}

int main()
{
	cout << "九九の加算表\n";
	kuku(sum);					// 加算表
	cout << '\n';

	cout << "九九の乗算表\n";
	kuku(mul);					// 乗算表
}
