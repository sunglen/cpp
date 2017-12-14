// 派生の一例

#include <iostream>
#include "BaseDerived.h"

using namespace std;

int main()
{
	Derived dv(1, 2, 3);

	cout << "dv.func()\n";    dv.func();	// Baseから継承したメンバ関数
	cout << "dv.method()\n";  dv.method();	// Derivedに所属するメンバ関数
}
