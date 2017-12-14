// vectorの利用例（事前に個数が分からないデータの読込み）

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> x;

	cout << "整数を入力せよ。\n※終了は9999。\n";

	while (true) {
		int temp;
		cin >> temp;
		if (temp == 9999) break;
		x.push_back(temp);		// xの末尾にtempを追加
	}

	for (vector<int>::size_type i = 0; i < x.size(); i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
}
