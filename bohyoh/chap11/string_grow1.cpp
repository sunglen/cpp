ｻｿ// 謖螳夐聞縺ｫ縺ｪ繧九ｈ縺縺ｫ譁蟄怜励蠕後ｍ縺ｫ蜷御ｸ譁蟄励ｒ蜉縺医ｋｼ磯未謨ｰ迚茨ｼ

#include <string>
#include <iostream>

using namespace std;

//--- width譁蟄励↓縺ｪ繧九ｈ縺縺ｫ譁蟄怜耀縺ｮ蠕後ｍ縺ｫ譁蟄幼h繧貞沂繧∝ｰｽ縺上☆ ---*/
void pad_char(string &s, char ch, string::size_type width)
{
	if (width > s.length())		// s縺ｮ譁蟄玲焚縺詣idth莉･荳翫〒縺ゅｌ縺ｰ菴輔ｂ縺励↑縺
		s.append(width - s.length(), ch);
}

int main()
{
	int width;
	char ch;
	string s1, s2, s3;

	cout << "謖螳夐聞縺ｫ縺ｪ繧九∪縺ｧ譁蟄怜励蠕後ｍ縺ｫ譁蟄励ｒ蝓九ａ蟆ｽ縺上＠縺ｾ縺吶n";
	cout << "譁蟄怜耀1 = ";   cin >> s1;
	cout << "譁蟄怜耀2 = ";   cin >> s2;
	cout << "譁蟄怜耀3 = ";   cin >> s3;
	cout << "謖螳夐聞   = ";   cin >> width;
	cout << "譁蟄     = ";   cin >> ch;

	pad_char(s1, ch, width);
	pad_char(s2, ch, width);
	pad_char(s3, ch, width);

	cout << "s1 = " << s1 << '\n';
	cout << "s2 = " << s2 << '\n';
	cout << "s3 = " << s3 << '\n';
}
