// スタック クラステンプレートStackの利用例（文字列の反転）

#include <string>
#include <iostream>
#include "SimpleStack.h"

using namespace std;

int main()
{
	string x;

	cout << "文字列：";
	cin >> x;

	SimpleStack<char> s(x.length());	// スタックsの容量は文字列xの長さ

	try {
		for (int i = 0; i < x.length(); i++)	// 先頭文字から順にプッシュ
			s.push(x[i]);

		for (int i = 0; i < x.length(); i++)  {
			char c = s.pop();					// ポップ（逆順に得られる）
			cout << c;
		}
		cout << '\n';
	}
	catch (const SimpleStack<char>::Overflow&) {
		cout << "\a満杯の<char>スタックにプッシュしようとしました。\n";
	}
	catch (const SimpleStack<char>::Empty&) {
		cout << "\a空の<char>スタックからポップしようとしました。\n";
	}
}
