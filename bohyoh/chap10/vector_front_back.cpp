// ベクトルの利用例（push_back, pop_back, front, backなど）

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

	cout << "先頭データは" << x.front() << "です。\n";
	cout << "末尾から逆順に一つずつ取り出して空にします。\n";
	while (x.size()) {
		cout << x.back()<< " ";		// 末尾要素の値を表示
		x.pop_back();				// 末尾要素を除去
	}
	cout << '\n';
}
