// 符号無し整数の論理積・論理和・排他的論理和・１の補数を表示

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
	unsigned a, b;

	cout << "非負の整数を二つ入力せよ。\n";
	cout << "a : ";	  cin >> a;
	cout << "b : ";	  cin >> b;

	cout << "a     = ";  print_bits(a);		cout << '\n';
	cout << "b     = ";  print_bits(b);		cout << '\n';
	cout << "a & b = ";  print_bits(a & b);	cout << '\n';	// 論理積
	cout << "a | b = ";  print_bits(a | b);	cout << '\n';	// 論理和
	cout << "a ^ b = ";  print_bits(a ^ b);	cout << '\n';	// 論理差
	cout << "~a    = ";  print_bits(~a);	cout << '\n';	// １の補数
	cout << "~b    = ";  print_bits(~b);	cout << '\n';	// １の補数
}
