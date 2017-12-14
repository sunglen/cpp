ｻｿ// 謖螳夐聞縺ｫ縺ｪ繧九ｈ縺縺ｫ譁蟄怜励蠕後ｍ縺ｫ蜷御ｸ譁蟄励ｒ蜉縺医ｋｼ磯未謨ｰ繝繝ｳ繝励Ξ繝ｼ繝育沿ｼ

#include <string>
#include <iostream>

using namespace std;

//--- width譁蟄励↓縺ｪ繧九ｈ縺縺ｫ譁蟄怜耀縺ｮ蠕後ｍ縺ｫ譁蟄幼h繧貞沂繧∝ｰｽ縺上☆ ---*/
template <class type>
void pad_char(basic_string<type>&s, type ch,
			  typename basic_string<type>::size_type width)
{
	if (width > s.length())		// s縺ｮ譁蟄玲焚縺詣idth莉･荳翫〒縺ゅｌ縺ｰ菴輔ｂ縺励↑縺
		s.append(width - s.length(), ch);
}

int main()
{
	string s1 = "ABC";
	wstring s2 = L"譟ｴ逕ｰ";
	wcout.imbue(std::locale("Japanese"));

	pad_char(s1, '+',   10);
	pad_char(s2, L'ｼ', 10);

	cout << "s1 = " << s1 << '\n';
	wcout << "s2 = " << s2 << '\n';
}
