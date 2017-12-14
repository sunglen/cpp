// 各整数型のビット数を表示

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "char 型のビット数：" << numeric_limits<unsigned char>::digits  << '\n';
	cout << "short型のビット数：" << numeric_limits<unsigned short>::digits << '\n';
	cout << "int  型のビット数：" << numeric_limits<unsigned int>::digits   << '\n';
	cout << "long 型のビット数：" << numeric_limits<unsigned long>::digits  << '\n';
}
