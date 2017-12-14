ｻｿ// 譁蟄怜励↓蜷遞ｮ繧｢繝ｫ繧ｴ繝ｪ繧ｺ繝繧帝←逕ｨ

#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

//--- 蟆乗枚蟄励ｒ螟ｧ譁蟄励↓螟画鋤 --//
struct to_upper {
	char operator()(char c) { return toupper(c); }
};

//--- 螟ｧ譁蟄励ｒ蟆乗枚蟄励↓螟画鋤 --//
struct to_lower {
	char operator()(char c) { return tolower(c); }
};

//--- 螟ｧ譁蟄励→蟆乗枚蟄励ｒ蜿崎ｻ｢ ---//
struct invert_case {
	char operator()(char c) {
		return islower(c) ? toupper(c) : isupper(c) ? tolower(c) : c;
	}
};

int main()
{
	string s1;
	cout << "譁蟄怜励ｒ蜈･蜉帙○繧茨ｼ";
	cin >> s1;
	string s2(s1);

	transform(s1.begin(), s1.end(), s2.begin(), invert_case());	// 螟ｧｼ丞ｰ乗枚蟄励蜿崎ｻ｢
	cout << "螟ｧ蟆上蜿崎ｻ｢ｼ" << s2 << '\n';

	transform(s1.begin(), s1.end(), s2.begin(), to_upper());	// 螟ｧ譁蟄怜喧
	cout << "蜈ｨ螟ｧ譁蟄怜喧ｼ" << s2 << '\n';

	transform(s1.begin(), s1.end(), s2.begin(), to_lower());	// 蟆乗枚蟄怜喧
	cout << "蜈ｨ蟆乗枚蟄怜喧ｼ" << s2 << '\n';

	random_shuffle(s1.begin(), s1.end());			// 繧ｷ繝｣繝ヵ繝ｫ
	cout << "繧ｷ繝｣繝ヵ繝ｫｼ" << s1 << '\n';

	sort(s1.begin(), s1.end());						// 譏鬆繧ｽ繝ｼ繝
	cout << "譏鬆繧ｽ繝ｼ繝茨ｼ" << s1 << '\n';

	sort(s1.begin(), s1.end(), greater<char>());	// 髯埼繧ｽ繝ｼ繝
	cout << "髯埼繧ｽ繝ｼ繝茨ｼ" << s1 << '\n';
}