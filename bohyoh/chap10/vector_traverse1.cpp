ｻｿ// 蜿榊ｾｩ蟄舌↓繧医ｋ繝吶け繝医Ν隕∫ｴ縺ｮ襍ｰ譟ｻ

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v(5);	// 隕∫ｴ謨ｰ縺ｯ5
	int value = 0;

	// 蜈磯ｭ縺九ｉ譛ｫ蟆ｾ縺ｸ縺ｨ襍ｰ譟ｻ縺励※蛟､繧剃ｻ｣蜈･
	for (vector<int>::iterator p = v.begin(); p != v.end(); p++)
		*p = ++value;

	// 蜈磯ｭ縺九ｉ譛ｫ蟆ｾ縺ｸ縺ｨ襍ｰ譟ｻ縺励※蛟､繧定｡ｨ遉ｺ
	for (vector<int>::const_iterator p = v.begin(); p != v.end(); p++) 
		cout << *p << ' ';
	cout << '\n';
}
