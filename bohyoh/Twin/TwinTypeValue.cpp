// 二値クラステンプレートTwinと関数テンプレート

#include <string>
#include <iostream>
#include <typeinfo>
#include "Twin.h"

using namespace std;

//--- Twin<>型xの型と値を表示 ---//
template <class Type>
void put_Twin_type_value(const Twin<Type>& x)
{
	cout << typeid(x).name() << "型で、値は" << x << "です。\n";
}

int main()
{
	Twin<int> t1(15, 37);			put_Twin_type_value(t1);

	Twin<string> t2("ABC", "XYZ");	put_Twin_type_value(t2);

//	t1 = t2;			// エラー
}
