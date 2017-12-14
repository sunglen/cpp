// signed charとintの演算

#include <climits>
#include <iostream>

using namespace std;

int main()
{
	int x;
	signed char ch = CHAR_MAX;		// 符号付きcharの最大値

	cout << "chの値は" << static_cast<int>(ch) << "です。\n\n";

	x = ch + 1;

	cout << "x = ch + 1;\n";
	cout << "xの値は" << x << "です。\n\n";

	x = ++ch;

	cout << "x = ++ch;\n";
	cout << "xの値は" << x << "です。\n";
}
