ｻｿ// string縺ｮ讒狗ｯ我ｾ

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s0;						// 遨ｺ縺ｮ譁蟄怜
	string s1("ABCDEFGHIJK");		// 譁蟄怜"ABCDEFGHIJK"
	string s2("ABCDEFGHIJK", 5);	// 譁蟄怜"ABCDEFGHIJK"縺ｮ蜈磯ｭ5譁蟄"ABCDE"
	string s3(7, '*');				// 7蛟九'*'縺吶↑縺｡繧上■"*******"
	string s4(s1);					// s1縺ｮ繧ｳ繝斐
	string s5(s1, 5, 3);			// s1[5]繧貞磯ｭ縺ｨ縺吶ｋ3譁蟄励☆縺ｪ繧上■"FGH"

	//--- 陦ｨ遉ｺ ---//
	cout << "s0 = " << s0 << '\n';
	cout << "s1 = " << s1 << '\n';
	cout << "s2 = " << s2 << '\n';
	cout << "s3 = " << s3 << '\n';
	cout << "s4 = " << s4 << '\n';
	cout << "s5 = " << s5 << '\n';
}
