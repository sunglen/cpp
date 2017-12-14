ｻｿ// 繝吶け繝医Ν縺ｫ蟇ｾ縺吶ｋ繧｢繝ｫ繧ｴ繝ｪ繧ｺ繝縺ｮ驕ｩ逕ｨ

#include <string>
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

//=== 蛟､縺ｫ邯壹￠縺ｦ繧ｹ繝壹繧ｹ繧抵ｼ大句ｺ蜉幢ｼchar逕ｨ縺ｫ迚ｹ谿雁喧ｼ===//
template <>
struct put1<char>: public unary_function<const char&, void> {
	void operator()(const char& n) {
		cout << "'" << n << "' ";		// 蜊倅ｸ蠑慕畑隨ｦ縺ｧ蝗ｲ繧薙〒繧ｹ繝壹繧ｹｼ大
	}
};

//=== 蛟､縺ｫ邯壹￠縺ｦ繧ｹ繝壹繧ｹ繧抵ｼ大句ｺ蜉幢ｼstd::string逕ｨ縺ｫ迚ｹ谿雁喧ｼ===//
template <>
struct put1<std::string>: public unary_function<const std::string&, void> {
	void operator()(const string& n) {
		cout << "\"" << n << "\" ";		// 莠碁㍾蠑慕畑隨ｦ縺ｧ蝗ｲ繧薙〒繧ｹ繝壹繧ｹｼ大
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

//--- 蛛ｶ謨ｰ縺ｧ縺ゅｋ縺九←縺縺九ｒ豎ゅａ繧 ---//
template <class Type>
struct is_even : public unary_function<const Type&, bool> {
	bool operator()(const Type& n) {
		return n % 2 == 0;
	}
};

//--- 10繧貞刈縺医◆蛟､繧呈ｱゅａ繧 ---//
template <class Type>
struct plus10 : public unary_function<const Type&, const Type&> {
	Type operator()(const Type& n) {
		return n + 10;
	}
};

//--- 蟾ｮ繧呈ｱゅａ繧 ---//
template <class Type>
struct diff : public binary_function<const Type&, const Type&, Type>
{
	Type operator()(const Type& a1, const Type& a2) {
		return (a1 < a2) ? a2 - a1 : a1 - a2;
	}
};

int main()
{
	vector<int> a;
	for (vector<int>::size_type i = 0; i < 10; i++)
		a.push_back(i);

	vector<int> b(a);						// a縺ｮ繧ｳ繝斐
	random_shuffle(b.begin(), b.end());		// 繧ｷ繝｣繝ヵ繝ｫ

	vector<bool> c(10);		// a縺ｮ蜈ｨ隕∫ｴ縺悟謨ｰ縺九←縺縺
	transform(a.begin(), a.end(), c.begin(), is_even<int>());

	vector<int> d(10);		// a縺ｮ蜈ｨ隕∫ｴ縺ｫ10繧貞刈縺医◆繝吶け繝医Ν
	transform(a.begin(), a.end(), d.begin(), plus10<int>());

	vector<int> e(10);		// a縺ｨb縺ｮ蜷隕∫ｴ縺ｮ蟾ｮ繧呈ｼ邏阪☆繧九繧ｯ繝医Ν
	transform(a.begin(), a.end(), b.begin(), e.begin(), diff<int>());

	cout << "a = ";   print(a.begin(), a.end());   cout << '\n';
	cout << "b = ";   print(b.begin(), b.end());   cout << '\n';
	cout << "c = ";   print(c.begin(), c.end());   cout << '\n';
	cout << "d = ";   print(d.begin(), d.end());   cout << '\n';
	cout << "e = ";   print(e.begin(), e.end());   cout << '\n';
}
