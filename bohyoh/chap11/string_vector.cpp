ｻｿ// 譁蟄怜励繝吶け繝医Ν

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//--- 譁蟄怜励繝吶け繝医Νv繧抵ｼ第枚蟄励★縺､襍ｰ譟ｻ縺励※陦ｨ遉ｺ ---*/
template <typename Allocaotor>
void put_string_vector(const vector<string, Allocaotor>& v)
{
	cout << "{ ";
	for (std::vector<string, Allocaotor>::size_type i = 0; i < v.size(); i++) {
		cout << '"';
		for (vector<string, Allocaotor>::size_type j = 0;
			 j < v[i].length(); j++)
			cout << v[i][j];
		cout << "\" ";
	}
	cout << "} ";
}

int main()
{
	vector<string> s1(3);		// 遨ｺ縺ｮ譁蟄怜3蛟
	vector<string> s2;
	s2.push_back("ABC");
	s2.push_back("123");
	s2.push_back("XYZ");

	cout << "s1 = ";
	put_string_vector(s1);
	cout << '\n';

	cout << "s2 = ";
	put_string_vector(s2);
	cout << '\n';
}
