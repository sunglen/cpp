// 日付クラスDateの利用例

#include <iostream>
#include "Date.h"

using namespace std;

//--- 日付に関する情報を表示 ---//
void display(const Date& day)
{
	string dw[] = { "日", "月", "火", "水", "木", "金", "土" };
	cout << "・日付" << day << "に関する情報\n";
	cout << "  曜日は" << dw[day.day_of_week()] << "曜日";
	cout << "  年内経過日数は" << day.day_of_year() << "日";
	cout << "  1970年1月1日の" << long(day) << "日後";
	cout << "  その年は閏年で" << (day.leap_year() ? "ある" : "はない。") << '\n';
}

//--- 日付を変更 ---//
void change(Date& day)
{
	while (true) {
		cout << "[1]年変更 [2]月変更 [3]日変更 [4]年月日変更 "
			<< "[5]n日進める [6]n日戻す [0]戻る：";
		int selected;
		cin >> selected;

		if (selected == 0) return;

		int y, m, d, n;
		if (selected == 1 || selected == 4) { cout << "年：";   cin >> y; }
		if (selected == 2 || selected == 4) { cout << "月：";   cin >> m; }
		if (selected == 3 || selected == 4) { cout << "日：";   cin >> d; }
		if (selected == 5 || selected == 6) { cout << "日数："; cin >> n; }

		switch (selected) {
		case 1: day.set_year(y);	break;		// y年に設定
		case 2: day.set_month(m);	break;		// m月に設定
		case 3: day.set_day(d);	break;		// d日に設定
		case 4: day.set(y, m, d);	break;		// y年m月d日に設定
		case 5: day += n;			break;		// n日進める
		case 6: day -= n;			break;		// n日戻す
		}
		cout << day << "に更新されました。\n";
	}
}

//--- 増分および減分演算子を適用 ---//
void inc_dec(Date& day)
{
	while (true) {
		cout << "[1]++day  [2]day++  [3]--day  [4]day-- [0]戻る：";
		int selected;
		cin >> selected;

		if (selected == 0) return;

		switch (selected) {
		case 1: cout << "++day = " << ++day << '\n';  break;	// 前置増分
		case 2: cout << "day++ = " << day++ << '\n';  break;	// 後置増分
		case 3: cout << "--day = " << --day << '\n';  break;	// 前置減分
		case 4: cout << "day-- = " << day-- << '\n';  break;	// 後置減分
		}
		cout << "day   = " << day << '\n';
	}
}

//--- 前後の日付を求める ---//
void before_after(Date& day)
{
	while (true) {
		cout << "[1]翌日 [2]前日 [3]n日後(day+n) [4]n日後(n+day)"
			<< "[5]n日前 [0]戻る：";
		int selected;
		cin >> selected;

		if (selected == 0) return;

		int n;
		if (selected >= 3 && selected <= 5) {
			cout << "日数：";  cin >> n;
		}

		cout << "それは";
		switch (selected) {
		case 1: cout << day.following_day();	break;	// 翌日
		case 2: cout << day.preceding_day();	break;	// 前日
		case 3: cout << day + n;				break;	// n日後（Date + int ）
		case 4: cout << n + day;				break;	// n日後（int  + Date）
		case 5: cout << day - n;				break;	// n日前（Date - int ）
		}
		cout << "です。\n";
	}
}

//--- 他の日付との比較 ---//
void compare(const Date& day)
{
	int y, m, d;
	cout << "比較対象の日付day2を入力せよ。\n";
	cout << "年：";  cin >> y;
	cout << "月：";  cin >> m;
	cout << "日：";  cin >> d;

	Date day2(y, m, d);	// 比較対象の日付

	cout << boolalpha;
	cout << "day  = " << day << '\n';
	cout << "day2 = " << day2 << '\n';
	cout << "day  -  day2  = " << (day - day2) << '\n';
	cout << "day2 -  day   = " << (day2 - day) << '\n';
	cout << "day  == day2  = " << (day == day2) << '\n';
	cout << "day  != day2  = " << (day != day2) << '\n';
	cout << "day  >  day2  = " << (day  >  day2) << '\n';
	cout << "day  >= day2  = " << (day >= day2) << '\n';
	cout << "day  <  day2  = " << (day  <  day2) << '\n';
	cout << "day  <= day2  = " << (day <= day2) << '\n';
}

int main()
{
	int y, m, d;
	cout << "日付dayを入力せよ。\n";
	cout << "年：";  cin >> y;
	cout << "月：";  cin >> m;
	cout << "日：";  cin >> d;

	Date day(y, m, d);	// 読み込んだ日付

	while (true) {
		cout << "[1]情報表示 [2]日付の変更 [3]増減分演算子 [4]前後の日付 "
			<< "[5]比較 [0]終了：";

		int selected;
		cin >> selected;

		if (selected == 0) break;

		switch (selected) {
		case 1: display(day);		break;	// 日付に関する情報を表示
		case 2: change(day);		break;	// 日付を変更
		case 3: inc_dec(day);		break;	// 増分演算子・減分演算子
		case 4: before_after(day);	break;	// 前後の日付を求める
		case 5: compare(day);		break;	// 他の日付との比較
		}
	}
}
