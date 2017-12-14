ｻｿ// 豬ｮ蜍募ｰ乗焚轤ｹ謨ｰ縺ｮ譖ｸ蠑

#include <iostream>

using namespace std;

int main()
{
	int precision;		// 邊ｾ蠎ｦ
	double x;			// 陦ｨ遉ｺ縺吶ｋ蛟､

	cout << "螳滓焚蛟､ｼ";
	cin >> x;

	cout << "邊ｾ蠎ｦｼ";
	cin >> precision;

	cout.precision(precision);	// 邊ｾ蠎ｦ縺ｯ譛蠕後∪縺ｧ譛牙柑

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "遘大ｭｦ蠖｢蠑擾ｼ" << x << '\n';

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "蝗ｺ螳壼ｽ｢蠑擾ｼ" << x << '\n';

	cout.setf(0, ios_base::floatfield);	
	cout << "騾壼ｸｸ陦ｨ遉ｺｼ" << x << '\n';
}
