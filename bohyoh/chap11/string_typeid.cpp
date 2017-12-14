ｻｿ// string縺ｨwstring縺ｮ蝙句錐繧定｡ｨ遉ｺ

#include <string>
#include <typeinfo>
#include <iostream>

using namespace std;

int main()
{
	cout << "typeid(string).name() = "  << typeid(string).name()  << "\n\n";
	cout << "typeid(wstring).name() = " << typeid(wstring).name() << '\n';
}
