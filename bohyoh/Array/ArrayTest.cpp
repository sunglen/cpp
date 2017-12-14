// 配列クラステンプレートArrayの利用例

#include <new>
#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
	try {
		int no;
		Array<int>    x(5);		// 要素型がintで要素数が5
		Array<double> y(8);		// 要素型がdoubleで要素数が8

		cout << "データ数：";
		cin >> no;

		for (int i = 0; i < no; i++) {
			x[i] = i;
			y[i] = 0.1 * i;
			cout << "x[" << i << "] = " << x[i] << "   "
				<< "y[" << i << "] = " << y[i] << '\n';
		}
	}
	catch (bad_alloc) {
		cout << "メモリの確保に失敗しました。\n";
		return 1;									// 強制終了
	}
	catch (const Array<int>::IdxRngErr& x) {
		cout << "添字オーバフロー Array<int>：" << x.Index() << '\n';
		return 1;
	}
	catch (const Array<double>::IdxRngErr& x) {
		cout << "添字オーバフロー Array<double>：" << x.Index() << '\n';
		return 1;
	}
}
