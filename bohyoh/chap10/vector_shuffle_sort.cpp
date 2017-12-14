ｻｿ// 繝吶け繝医Ν縺ｫ蟇ｾ縺吶ｋ隕∫ｴ縺ｮ謖ｿ蜈･縺ｨ蜑企勁

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

//--- [first, last)縺ｮ蜈ｨ隕∫ｴ繧畜}縺ｧ蝗ｲ繧薙〒鬆縺ｫ陦ｨ遉ｺ ---//
template<class InputIterator>
void print(InputIterator first, InputIterator last)
{
	cout << "{ ";
	for (InputIterator i = first; i != last; i++)
		cout << *i << " ";
	cout << "}";
}

int main()
{
	vector<int> x;

	for (vector<int>::size_type i = 0; i < 10; i++)
		x.push_back(i);

	random_shuffle(x.begin(), x.end());			// 繧ｷ繝｣繝ヵ繝ｫ
	cout << "繧ｷ繝｣繝ヵ繝ｫｼ";  print(x.begin(), x.end());  cout << '\n';

	sort(x.begin(), x.end());					// 譏鬆繧ｽ繝ｼ繝
	cout << "譏鬆繧ｽ繝ｼ繝茨ｼ";  print(x.begin(), x.end());  cout << '\n';

	sort(x.begin(), x.end(), greater<int>());	// 髯埼繧ｽ繝ｼ繝
	cout << "髯埼繧ｽ繝ｼ繝茨ｼ";  print(x.begin(), x.end());  cout << '\n';
}
