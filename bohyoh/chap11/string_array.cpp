ｻｿ// 譁蟄怜励驟榊

#include <string>
#include <iostream>

using namespace std;

//--- 隕∫ｴ謨ｰn縺ｮ譁蟄怜励驟榊耀繧抵ｼ第枚蟄励★縺､襍ｰ譟ｻ縺励※陦ｨ遉ｺ ---*/
void put_string_ary(const string *s, size_t n)
{
	cout << "{ ";
	for (size_t i = 0; i < n; i++) {
		cout << '"';
		for (string::size_type j = 0; j < s[i].length(); j++)
			cout << s[i][j];
		cout << "\" ";
	}
	cout << "} ";
}

int main()
{
	string s1[3];		// 遨ｺ縺ｮ譁蟄怜3蛟
	string s2[3] = {"ABC", "123", "XYZ"};

	cout << "s1 = ";
	put_string_ary(s1, sizeof(s1)/sizeof(s1[0]));
	cout << '\n';

	cout << "s2 = ";
	put_string_ary(s2, sizeof(s2)/sizeof(s2[0]));
	cout << '\n';
}
