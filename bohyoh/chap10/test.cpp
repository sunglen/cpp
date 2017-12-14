ｻｿ// 繝吶け繝医Ν縺ｮ蜷隕∫ｴ縺ｮ蜥後→遨

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

//=== 蛟､縺ｫ邯壹￠縺ｦ繧ｹ繝壹繧ｹ繧抵ｼ大句ｺ蜉 ===//
template <class Type>
struct put1 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << ' ';				// 繧ｹ繝壹繧ｹｼ大
	}
};

//--- [first, last)縺ｮ蜈ｨ隕∫ｴ繧偵せ繝壹繧ｹｼ大九〒蛹ｺ蛻縺｣縺ｦ{}縺ｧ蝗ｲ繧薙〒鬆縺ｫ陦ｨ遉ｺ ---//
template<class InputIterator>
void print(InputIterator first, InputIterator last)
{
	cout << "{ ";
	for_each(first, last, put1<std::iterator_traits<InputIterator>::value_type>());
	cout << "}";
}

int main()
{
	int ary[] = {1, 2, 3, 4, 5};
	vector<int> a(ary, ary + sizeof(ary) / sizeof(ary[0]));

	vector<int> b(a);						// a縺ｮ繧ｳ繝斐
	random_shuffle(b.begin(), b.end());		// 繧ｷ繝｣繝ヵ繝ｫ

	cout << "a  = ";   print(a.begin(), a.end());   cout << '\n';
	cout << "b  = ";   print(b.begin(), b.end());   cout << '\n';

	vector<int> c(a);
	transform(a.begin(), a.end(), b.begin(), c.begin(), plus<int>());
	cout << "蜥 = ";   print(c.begin(), c.end());   cout << '\n';

	transform(a.begin(), a.end(), b.begin(), c.begin(), multiplies<int>());
	cout << "遨 = ";   print(c.begin(), c.end());   cout << '\n';
}
