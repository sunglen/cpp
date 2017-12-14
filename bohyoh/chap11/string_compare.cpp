ｻｿ// 譁蟄怜励螟ｧ蟆城未菫ゅ蛻､螳

#include <string>
#include <iostream>

using namespace std;

//--- 豈碑ｼｵ先棡縺ｮ陦ｨ遉ｺ --//
void put_comp_result(int cmp)
{
	if (cmp < 0)
		cout << "繧医ｊ蟆上＆縺縺ｧ縺吶n";
	else if (cmp > 0)
		cout << "繧医ｊ螟ｧ縺阪＞縺ｧ縺吶n";
	else
		cout << "縺ｨ荳閾ｴ縺励∪縺吶n";
}

int main()
{
	int n;
	string s1, s2;

	cout << "譁蟄怜耀1ｼ";         cin >> s1;
	cout << "譁蟄怜耀2ｼ";         cin >> s2;
	cout << "驛ｨ蛻豈碑ｼ枚蟄玲焚ｼ";   cin >> n;

	cout << boolalpha;
	cout << "s1 == s2 " << (s1 == s2) << '\n';
	cout << "s1 != s2 " << (s1 != s2) << '\n';
	cout << "s1 <  s2 " << (s1 <  s2) << '\n';
	cout << "s1 <= s2 " << (s1 <= s2) << '\n';
	cout << "s1 >  s2 " << (s1 >  s2) << '\n';
	cout << "s1 >= s2 " << (s1 >= s2) << '\n';

	cout << "s1縺ｯs2";
	put_comp_result(s1.compare(s2));

	cout << "s1縺ｮ蜈磯ｭ" << n << "譁蟄励s2縺ｮ蜈磯ｭ" << n << "譁蟄";
	put_comp_result(s1.compare(0, n, s2, 0, n));

	cout << "s1縺ｯ\"ABC\"";
	put_comp_result(s1.compare("ABC"));
}
