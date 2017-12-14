// ベクトルに対する代入（代入演算子=とassign関数）

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<double> x, y;		// 空のベクトルを生成

	y.push_back(5.2);			// yに要素5.2を追加
	x.assign(5, 3.14);			// 5個の3.14を代入

	y = x;						// yにxを代入

	for (vector<int>::size_type i = 0; i < y.size(); i++)
		cout << "y[" << i << "] = " << y[i] << '\n';
}
