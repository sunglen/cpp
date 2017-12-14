// string型文字列を扱うプログラム

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s1, s2;

	cout << "文字列s1 : ";  getline(cin, s1);
	cout << "文字列s2 : ";  getline(cin, s2);

	//--- 添字演算子による走査 ---//
	cout << "s1 = ";
	for (string::size_type i = 0; i < s1.length(); i++)
		cout << s1[i];
	cout << '\n';

	//--- 反復子による走査 ---//
	cout << "s2 = ";
	for (string::const_iterator i = s2.begin(); i != s2.end(); i++)
		cout << *i;
	cout << '\n';

	//--- 文字列内に含まれる文字列の探索 ---//
	string::size_type idx = s1.find(s2);
	if (idx == string::npos)
		cout << "s2はs1に含まれません。\n";
	else
		cout << "s2はs1の" << (idx + 1) << "文字目に含まれます。\n";
}
