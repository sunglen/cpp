ｻｿ// 譁蟄怜励謗｢邏｢

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string txt, pat;

	cout << "譁蟄怜葉xtｼ";   getline(cin, txt);
	cout << "譁蟄怜用atｼ";   getline(cin, pat);

	string::size_type pos = txt.find(pat);
	if (pos == string::npos)
		cout << "pat縺ｯtxt縺ｫ蜷ｫ縺ｾ繧後∪縺帙ｓ縲n";
	else
		cout << "pat縺ｯtxt縺ｮ" << (pos + 1) << "譁蟄礼岼縺ｫ蜷ｫ縺ｾ繧後∪縺吶n";
}
