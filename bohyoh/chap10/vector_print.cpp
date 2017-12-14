// 要素型に依存しないベクトル内全要素の表示

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//--- ベクトルvの全要素を表示 --//
template <class T, class Allocator>
void print_vector(const vector<T, Allocator>& v)
{
	cout << "{ ";
	for (vector<T, Allocator>::size_type i = 0; i != v.size(); i++)
		cout << v[i] << ' ';
	cout << '}';
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	vector<int> x(a, a + sizeof(a) / sizeof(a[0]));

	double b[] = {3.5, 7.3, 2.2, 9.9};
	vector<double> y(b, b + sizeof(b) / sizeof(b[0]));

	string c[] = {"abc", "WXYZ", "123456"};
	vector<string> z(c, c + sizeof(c) / sizeof(c[0]));

	cout << "x = ";   print_vector(x);   cout << '\n';
	cout << "y = ";   print_vector(y);   cout << '\n';
	cout << "z = ";   print_vector(z);   cout << '\n';
}
