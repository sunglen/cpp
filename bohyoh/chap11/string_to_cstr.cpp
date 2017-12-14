ｻｿ// string繧抵ｼ｣險隱樊枚蟄怜励↓螟画鋤

#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char cst[100];			// 繝翫Ν譁蟄励ｒ蜷ｫ繧√※100譁蟄励∪縺ｧ
	string str;

	cout << "譁蟄怜励ｒ蜈･蜉帙○繧茨ｼ";
	cin >> str;

	strcpy(cst, str.c_str());		// str繧抵ｼ｣險隱樊枚蟄怜励↓螟画鋤縺励※cst縺ｫ繧ｳ繝斐

	cout << "cst = " << cst << '\n';
	cout << "str = " << str << '\n';
}
