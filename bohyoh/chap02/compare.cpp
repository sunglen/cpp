// 符号付き整数と符号無し整数の比較

#include <iostream>

using namespace std;

int main()
{
	int      sint;		// 符号付き整数
	unsigned uint;		// 符号無し整数

	cout << "符号付き整数：";   cin >> sint;
	cout << "符号無し整数：";   cin >> uint;

	cout << "(" << sint << " < " << uint << "U)は"
		 << (sint < uint ? "真" : "偽") << "です。\n";
}
