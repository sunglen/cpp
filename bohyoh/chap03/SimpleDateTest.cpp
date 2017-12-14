// 日付当てゲーム（メンバ関数へのポインタを用いた動的な関数呼出し）

#include <iostream>
#include "SimpleDate.h"

using namespace std;

int main()
{
	typedef int (SimpleDate::*Comp)(int) const;
	Comp pcomp[] = {
		&SimpleDate::comp_y,
		&SimpleDate::comp_m,
		&SimpleDate::comp_d,
	};
	int menu;
	const SimpleDate birthday(1963, 11, 18);

	cout << "私の誕生日を当ててください。\n";

	do {
		cout << "0…年/1…月/2…日/3…終了：";
		cin >> menu;

		if (menu >= 0 && menu <= 2) {
			int value;
			cout << "いくつかな：";
			cin >> value;

			int diff = (birthday.*pcomp[menu])(value);
			if (!diff)
				cout << "正解です。\n";
			else if (diff > 0)
				cout <<  diff << "だけ大きいです。\n";
			else
				cout << -diff << "だけ小さいです。\n";
		}
	} while (menu != 3);
}
