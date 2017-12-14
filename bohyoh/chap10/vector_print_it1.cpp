ｻｿ// 繝吶け繝医Ν縺ｮ蜈ｨ隕∫ｴ縺ｮ陦ｨ遉ｺｼ亥渚蠕ｩ蟄撰ｼ

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//--- 繝吶け繝医Νv縺ｮ蜈ｨ隕∫ｴ繧畜}縺ｧ蝗ｲ繧薙〒鬆縺ｫ陦ｨ遉ｺ --//
template <class T, class Allocator>
void print_vector(vector<T, Allocator>& v)
{
	cout << "{ ";
	for (vector<T, Allocator>::const_iterator i = v.begin();  i != v.end(); i++)
		cout << *i << ' ';
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
