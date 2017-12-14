ｻｿ// string縺ｮ讒狗ｯ我ｾ具ｼ医◎縺ｮｼ抵ｼ

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s1("ABCDEFGHIJK");		// 譁蟄怜"ABCDEFGHIJK"


//--- 隨ｬｼ貞ｼ墓焚縺御ｸ肴ｭ｣縺ｧ縺ゅｋ萓 ---//
//	string sa(s1, 55, 3);			// 55譁蟄礼岼縺ｯ縺ｪ縺縺ｮ縺ｧout_of_range縺碁∝ｺ縺輔ｌ繧
//	string sb(s1, -5, 2);			// 蜷後§縺出ut_of_rage縺碁∝ｺ縺輔ｌ繧

//	cout << "sa = " << sa << '\n';
//	cout << "sb = " << sb << '\n';


//--- 隨ｬｼ灘ｼ墓焚縺ｯ雋蛟､縺ｧ繧ょ庄 ---//
	string sx(s1, 2, 128);			// 128譁蟄励↑縺縺ｮ縺ｧ譛ｫ蟆ｾ譁蟄励∪縺ｧ縺後さ繝斐縺輔ｌ繧
	string sy(s1, 2, -5);			// 譛ｫ蟆ｾ譁蟄励∪縺ｧ縺後さ繝斐縺輔ｌ繧
	string sz(s1, 2, string::npos);	// 譛ｫ蟆ｾ譁蟄励∪縺ｧ縺後さ繝斐縺輔ｌ繧

	cout << "sx = " << sx << '\n';
	cout << "sy = " << sy << '\n';
	cout << "sz = " << sz << '\n';


//--- 譁蟄励〒縺ｮ蛻晄悄蛹悶縺ｧ縺阪↑縺縺御ｻ｣蜈･縺ｯ蜿ｯ閭ｽ ---//
//	string sc1 = 'X';	// 繧ｨ繝ｩ繝ｼ
	string sc2;
	sc2 = 'X';			// OK

//	cout << "sc1 = " << sc1 << '\n';
	cout << "sc2 = " << sc2 << '\n';


//--- ｼ帝+貍皮ｮ怜ｭ舌↓繧医ｋ騾｣邨 ---//
	string st1 = "ABC";
	string st2 = "ABC" + s1;
	string st3 = st1 + st2;
	string st4 = st1 + "UVW";
//	string st5 = "UVW" + "XYZ";				// 繧ｨ繝ｩ繝ｼ
	string st6 = st1 + "UVW" + "XYZ";
//	string st7 = "UVW" + "XYZ" + s1;		// 繧ｨ繝ｩ繝ｼ
	string st8 = "ABC" + 'D';				// 荳肴ｭ｣
	string st9 = st1 + 'D';					// 繧ｨ繝ｩ繝ｼ
	
	cout << "st1 = " << st1 << '\n';
	cout << "st2 = " << st2 << '\n';
	cout << "st3 = " << st2 << '\n';
	cout << "st4 = " << st4 << '\n';
//	cout << "st5 = " << st5 << '\n';
	cout << "st6 = " << st6 << '\n';
//	cout << "st7 = " << st7 << '\n';
	cout << "st8 = " << st8 << '\n';
	cout << "st9 = " << st9 << '\n';

//--- 隍蜷井ｻ｣蜈･貍皮ｮ怜ｭ+=縺ｫ繧医ｋ騾｣邨 ---//
	st9 += st1;			// string蝙区枚蟄怜励ｒ騾｣邨
	st9 += "ABC";		// ｼ｣險隱樊枚蟄怜励ｒ騾｣邨
	st9 += 'D';			// 蜊倅ｸ譁蟄励ｒ騾｣邨

	cout << "st9 = " << st9 << '\n';
}
