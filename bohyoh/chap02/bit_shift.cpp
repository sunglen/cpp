// 符号無し整数型を左右にシフトした値を表示

#include <iostream>

using namespace std;

//--- 整数x中の“１”であるビット数を求める ---//
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

//--- int型／unsigned型のビット数を求める ---//
int int_bits()
{
	return count_bits(~0U);
}

//--- unsigned型のビット構成を表示 ---//
void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >= 0; i--)
		cout << ((x >> i) & 1U ? '1' : '0');
}

int main()
{
	unsigned x, n;

	cout << "非負の整数：";			cin >> x;
	cout << "シフトするビット数：";	cin >> n;

	cout << "整数　   = ";  print_bits(x);		 cout << '\n';
	cout << "左シフト = ";  print_bits(x << n);	 cout << '\n';
	cout << "右シフト = ";  print_bits(x >> n);	 cout << '\n';
}
