// 関数へのポインタの利用例

#include <iostream>

using namespace std;

void plus10(int& x) { x += 10; }	// xに10を加える

void mult10(int& x) { x *= 10; }	// xを10倍する

//--- n1とn2の差を求める ---//
int diff(int n1, int n2) {
	return n1 > n2 ? n1 - n2 : n2 - n1;
}

//--- 要素数nの配列aの全要素に対してfを適用 ---//
void trans1(int a[], int n, void f(int&)) {
	for (int i = 0; i < n; i++)
		f(a[i]);
}

//--- 要素数nの配列aとbの全要素に対してfを適用した結果をcに格納 ---//
void trans2(int a[], int b[], int c[], int n, int f(int, int)) {
	for (int i = 0; i < n; i++)
		c[i] = f(a[i], b[i]);
}

//--- 要素数nの配列aの全要素を表示 ---//
void print_ary(const int a[], int n) {
	cout << "{ ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "}";
}

int main()
{
	int a[] = {  1,  2,  3,  4,  5 };
	int b[] = { 17, 23, 73, 84, 52 };
	int c[] = { 93, 65, 43, 63, 11 };
	int d[] = {  0,  0,  0,  0,  0 };

	trans1(a, 5, plus10);		// aの全要素に10を加える
	trans1(a, 5, mult10);		// aの全要素を10倍する
	trans2(b, c, d, 5, diff);	// bとcの要素の差をdに格納する

	cout << "a = ";  print_ary(a, 5);  cout << '\n';
	cout << "b = ";  print_ary(b, 5);  cout << '\n';
	cout << "c = ";  print_ary(c, 5);  cout << '\n';
	cout << "d = ";  print_ary(d, 5);  cout << '\n';
}
