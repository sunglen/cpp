ｻｿ// 繝昴う繝ｳ繧ｿ縺ｫ繧医ｋ驟榊苓ｦ∫ｴ縺ｮ襍ｰ譟ｻ

#include <iostream>

using namespace std;

int main()
{
	int a[5];			// 隕∫ｴ謨ｰ縺ｯ5
	int value = 0;

	// 蜈磯ｭ縺九ｉ譛ｫ蟆ｾ縺ｸ縺ｨ襍ｰ譟ｻ縺励※蛟､繧剃ｻ｣蜈･
	for (int *p = &a[0]; p != &a[5]; p++)
		*p = ++value;

	// 蜈磯ｭ縺九ｉ譛ｫ蟆ｾ縺ｸ縺ｨ襍ｰ譟ｻ縺励※蛟､繧定｡ｨ遉ｺ
	for (const int *p = &a[0]; p != &a[5]; p++)
		cout << *p << ' ';
	cout << '\n';
}
