ｻｿ// 繝吶け繝医Ν縺ｮ隕∫ｴ繧定｡ｨ遉ｺｼfor_each縺ｨ繝輔ぃ繝ｳ繧ｯ繧ｿｼ

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

//=== 蛟､縺ｫ邯壹￠縺ｦ繧ｹ繝壹繧ｹ繧抵ｼ大句ｺ蜉 ===//
template <class Type>
struct put1 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << ' ';		// 繧ｹ繝壹繧ｹｼ大
	}
};

//=== 蛟､縺ｫ邯壹￠縺ｦ繧ｹ繝壹繧ｹ繧抵ｼ貞句ｺ蜉 ===//
template <class Type>
struct put2 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << "  ";		// 繧ｹ繝壹繧ｹｼ貞
	}
};

int main()
{
	vector<int> x;
	for (vector<int>::size_type i = 0; i < 10; i++)
		x.push_back(i);

	for_each(x.begin(), x.end(), put1<int>());	// 繧ｹ繝壹繧ｹｼ大九〒蛹ｺ蛻縺｣縺ｦ陦ｨ遉ｺ
	cout << '\n';

	for_each(x.begin(), x.end(), put2<int>());	// 繧ｹ繝壹繧ｹｼ貞九〒蛹ｺ蛻縺｣縺ｦ陦ｨ遉ｺ
	cout << '\n';
}
