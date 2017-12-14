ｻｿ// 蝓ｺ謨ｰ縺ｮ險ｭ螳

#include <iostream>

using namespace std;

int main()
{
	int n, flag;
	cout << "謨ｴ謨ｰ蛟､ｼ";
	cin >> n;
	cout << "蝓ｺ謨ｰｼ0窶ｦ髱櫁｡ｨ遉ｺｼ1窶ｦ陦ｨ遉ｺｼ会ｼ";
	cin >> flag;

	if (flag) cout.setf(ios_base::showbase);
	cout.setf(ios_base::oct, ios_base::basefield);  cout << n << '\n';	// 8騾ｲ謨ｰ
	cout.setf(ios_base::dec, ios_base::basefield);  cout << n << '\n';	// 10騾ｲ謨ｰ
	cout.setf(ios_base::hex, ios_base::basefield);  cout << n << '\n';	// 16騾ｲ謨ｰ
}
