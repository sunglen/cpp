ｻｿ// 譁蟄怜励ｒ襍ｰ譟ｻ縺励※陦ｨ遉ｺ

#include <string>
#include <iostream>

using namespace std;

//--- 譁蟄怜怜縺ｮ縺吶∋縺ｦ縺ｮ譁蟄励ｒ豺ｻ蟄励〒襍ｰ譟ｻ縺励※陦ｨ遉ｺ ---//
void print_string_idx(string s)
{
	for (string::size_type i = 0; i < s.length(); i++)
		cout << s[i];
}

//--- 譁蟄怜怜縺ｮ縺吶∋縺ｦ縺ｮ譁蟄励ｒ蜿榊ｾｩ蟄舌〒襍ｰ譟ｻ縺励※陦ｨ遉ｺ ---//
void print_string_it1(string s)
{
	for (string::const_iterator i = s.begin(); i != s.end(); i++)
		cout << *i;
}

//--- [first, last)縺ｮ蜈ｨ隕∫ｴ繧帝縺ｫ陦ｨ遉ｺ ---//
template<class InputIterator>
void print_string_it2(InputIterator first, InputIterator last)
{
	for (InputIterator i = first; i != last; i++)
		cout << *i;
}

int main()
{
	string s1;
	cout << "譁蟄怜励ｒ蜈･蜉帙○繧茨ｼ";
	cin >> s1;

	print_string_idx(s1);                     cout << '\n';
	print_string_it1(s1);                     cout << '\n';
	print_string_it2(s1.begin(), s1.end());   cout << '\n';
}
