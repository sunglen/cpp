// ベクトルのリサイズ

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> x(2, 0);	// 要素数は2（全要素を0で初期化）

	x.resize(6, 99);		// 要素数を6に変更（追加要素を99で初期化）

	for (vector<int>::size_type i = 0; i < x.size(); i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
}
