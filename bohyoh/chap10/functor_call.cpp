// ファンクタを直接呼び出す

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

//=== 値に続けてスペースを１個出力 ===//
template <class Type>
struct put1 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << ' ';		// スペース１個
	}
};

//=== 値に続けてスペースを２個出力 ===//
template <class Type>
struct put2 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << "  ";		// スペース２個
	}
};

int main()
{
	cout << less<int>()(15, 37) << '\n';		// 15 < 37か？

	cout << greater<int>()(15, 37) << '\n';		// 15 > 37か？

	cout << equal_to<int>()(15, 37) << '\n';	// 15 == 37か？

	put1<int>()(15);			// 値に続けてスペースを1個表示
	put1<int>()(37);			// 値に続けてスペースを1個表示
	cout << '\n';

	put2<double>()(3.14);		// 値に続けてスペースを2個表示
	put2<double>()(1.57);		// 値に続けてスペースを2個表示
	cout << '\n';
}

