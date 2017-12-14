// unsigned charとintの演算

#include <climits>
#include <iostream>

using namespace std;

int main()
{
	int x;
	unsigned char ch = UCHAR_MAX;	// 符号無しcharの最大値

	cout << "chの値は" << static_cast<int>(ch) << "です。\n\n";

	x = ch + 1;

	cout << "x = ch + 1;\n";
	cout << "xの値は" << x << "です。\n\n";

	x = ++ch;

	cout << "x = ++ch;\n";
	cout << "xの値は" << x << "です。\n";
}
