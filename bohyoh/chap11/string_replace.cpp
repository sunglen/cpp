ｻｿ// 譁蟄怜励鄂ｮ謠

#include <string>
#include <iostream>

using namespace std;

//--- 譁蟄怜耀1縺ｫ蜷ｫ縺ｾ繧後ｋ譛繧ょ磯ｭ縺ｫ菴咲ｽｮ縺吶ｋs2繧痴3縺ｫ鄂ｮ謠 --//
template <class CharT, class Traits, class Allocator>
basic_string<CharT, Traits, Allocator>& replace_substr(
	basic_string<CharT, Traits, Allocator>& s1,
	const basic_string<CharT, Traits, Allocator>& s2,
	const basic_string<CharT, Traits, Allocator>& s3
)
{
	basic_string<CharT, Traits, Allocator>::size_type pos = s1.find(s2);
	if (pos != basic_string<CharT, Traits, Allocator>::npos)
		s1.replace(pos, s2.length(), s3);
	return s1;
}

int main()
{
	string s1, s2, s3;

	cout << "s1荳ｭ縺ｮ譛繧ょ磯ｭ縺ｫ菴咲ｽｮ縺吶ｋs2繧痴3縺ｫ鄂ｮ謠帙＠縺ｾ縺吶n";
	cout << "譁蟄怜耀1ｼ";   getline(cin, s1);
	cout << "譁蟄怜耀2ｼ";   getline(cin, s2);
	cout << "譁蟄怜耀3ｼ";   getline(cin, s3);

	cout << "鄂ｮ謠帛ｾ茎1ｼ" << replace_substr(s1, s2, s3) << '\n';
}
