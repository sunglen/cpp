// ベクトルの要素を表示（iterator_traits<>::value_typeを利用）

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

//=== 値に続けてスペースを１個出力 ===//
template <class Type>
struct put1 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << ' ';				// スペース１個
	}
};

//=== 値に続けてスペースを１個出力（char用に特殊化）===//
template <>
struct put1<char>: public unary_function<const char&, void> {
	void operator()(const char& n) {
		cout << "'" << n << "' ";		// 単一引用符で囲んでスペース１個
	}
};

//=== 値に続けてスペースを１個出力（std::string用に特殊化）===//
template <>
struct put1<std::string>: public unary_function<const std::string&, void> {
	void operator()(const std::string& n) {
		cout << "\"" << n << "\" ";		// 二重引用符で囲んでスペース１個
	}
};

//--- [first, last)の全要素をスペース１個で区切って{}で囲んで順に表示 ---//
template<class InputIterator>
void print(InputIterator first, InputIterator last)
{
	cout << "{ ";
	for_each(first, last, put1<std::iterator_traits<InputIterator>::value_type>());
	cout << "}";
}

int main()
{
	int    i[] = {1, 2, 3, 4, 5};
	double d[] = {3.14, 1.7};
	char   c[] = {'R', 'G','B'};
	string s[] = {"Turbo", "NA", "DOHC"};

	vector<int>    v1(i, i + sizeof(i) / sizeof(i[0]));
	vector<double> v2(d, d + sizeof(d) / sizeof(d[0]));
	vector<char>   v3(c, c + sizeof(c) / sizeof(c[0]));
	vector<string> v4(s, s + sizeof(s) / sizeof(s[0]));

	cout << "v1 = ";   print(v1.begin(), v1.end());   cout << '\n';
	cout << "v2 = ";   print(v2.begin(), v2.end());   cout << '\n';
	cout << "v3 = ";   print(v3.begin(), v3.end());   cout << '\n';
	cout << "v4 = ";   print(v4.begin(), v4.end());   cout << '\n';
}
