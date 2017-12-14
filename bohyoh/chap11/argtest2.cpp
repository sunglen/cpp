// プログラム名・プログラム仮引数の表示（その２）

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int i = 0;
	while (argc-- > 0)
		cout << "argv[" << i++ << "] = " << *argv++ << '\n';
}
