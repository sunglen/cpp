// 基底クラスへのポインタ／参照が、指す／参照するオブジェクトの型

#include <iostream>
#include <typeinfo>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

int main()
{
	VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");

	Member* ptr = &mineya;		// 基底クラス型のポインタ
	Member& ref =  mineya;		// 基底クラス型の参照

	cout << "ptrが指す先は" << typeid(*ptr).name() << "型オブジェクトです。\n";
	cout << "refの参照先は" << typeid(ref).name()  << "型オブジェクトです。\n";
}
