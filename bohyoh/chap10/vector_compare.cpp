// 二つのベクトルの比較

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> x;
	vector<int> y;

	cout << "xの要素を入力せよ。\n※終了は9999。\n";
	for (int i = 0; ; i++) {
		cout << "x[" << i << "] = ";
		int temp;
		cin >> temp;
		if (temp == 9999) break;
		x.push_back(temp);		// xの末尾にtempを追加
	}

	cout << "yの要素を入力せよ。\n※終了は9999。\n";
	for (int i = 0; ; i++) {
		cout << "y[" << i << "] = ";
		int temp;
		cin >> temp;
		if (temp == 9999) break;
		y.push_back(temp);		// yの末尾にtempを追加
	}

	cout << boolalpha;
	cout << "x == y " << (x == y) << '\n';
	cout << "x != y " << (x != y) << '\n';
	cout << "x <  y " << (x <  y) << '\n';
	cout << "x <= y " << (x <= y) << '\n';
	cout << "x >  y " << (x >  y) << '\n';
	cout << "x >= y " << (x >= y) << '\n';
}
