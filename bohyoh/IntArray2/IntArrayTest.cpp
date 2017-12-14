// 整数配列クラスIntArray（第２版）の利用例

#include <new>
#include <iostream>
#include "IntArray.h"

using namespace std;

//--- 要素数sizeの配列にnum個のデータを代入して表示 ---//
void set_and_disp(int size, int num)
{
	try {
		IntArray x(size);
		for (int i = 0; i < num; i++) {
			x[i] = i;
			cout << "x[" << i << "] = " << x[i] << '\n';
		}
	}

	catch (const bad_alloc&) {
		cout << "メモリの確保に失敗しました。\n";
		exit(1);				// 強制終了
	}

	catch (const IntArray::IdxRngErr& x) {
		cout << "添字オーバフロー：" << x.index() << '\n';
		return;
	}
}

int main()
{
	int size, num;

	cout << "要素数：";		cin >> size;
	cout << "データ数：";	cin >> num;

	set_and_disp(size, num);
}
