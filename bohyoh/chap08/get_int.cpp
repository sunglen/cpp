// 二つの数値を読み込んで和を表示（例外の再送出）

#include <cctype>
#include <string>
#include <iostream>

using namespace std;

class FormatError { };		// 不正な書式（数字以外の文字が含まれている）
class ValueError  { };		// 不正な値（指定された範囲ではない値となっている）

//--- 文字列strをint型の値に変換 ---//
int string_to_int(const string& str)
{
	int i = 0;
	int no = 0;					// 変換後の数値
	int sign = 1;				// 符号

	while (isspace(str[i]))		// 空白類文字を読み飛ばす
		i++;

	switch (str[i]) {
	case '+': i++;			  break;	// 正符号
	case '-': i++;  sign = -1;  break;	// 負符号
	}

	while (i < str.length()) {
		if (!isdigit(str[i]))				// 不正な文字を見つけたら
			throw FormatError();			// 例外を送出
		no = no * 10 + (str[i] - '0');
		i++;
	}
	return no *= sign;
}

//--- 整数値を読み込む ---//
int get_int()
{
	int no = 0;
	string temp;

	try {
		cin >> temp;				// いったん文字列として読み込んで
		no = string_to_int(temp);	// 整数値に変換
		return no;
	}
	catch (FormatError&) {
		cout << "数字以外の文字が入力されました。\n";
		throw;						// 再送出
	}
}

//--- low以上high以下の整数値を読み込む ---//
int get_int_bound(int low, int high)
{
	int no = low;

	try {
		no = get_int();
		if (no < low || no > high)	// 指定された範囲外の値であれば
			throw ValueError();		// 例外を送出
		return no;
	}
	catch (ValueError&) {
		cout << "不正な値が入力されました。\n";
		throw;						// 再送出
	}
}

int main()
{
	try {
		cout << "aの値：";			int a = get_int();
		cout << "bの値(10～99)：";	int b = get_int_bound(10, 99);
		cout << "a + bは" << a + b << "です。\n";
	}
	catch (...) {
		cout << "入力エラー発生!!\n";
	}
}
