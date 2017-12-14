// 基底クラスへのポインタ／参照が指す／参照するオブジェクトの型

#include <iostream>
#include <typeinfo>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

//--- ptrが指す先／refの参照先の型情報を表示 ---//
void ptr_ref(const Member* ptr, const Member& ref)
{
	cout << "ptrが指す先は" << typeid(*ptr).name() << "型オブジェクトです。\n";
	cout << "refの参照先は" << typeid(ref).name()  << "型オブジェクトです。\n\n";
}

int main()
{
	Member       kaneko("金子健太", 15, 75.2);
	VipMember    mineya("峰屋龍次", 17, 89.2, "会費全額免除");
	SeniorMember susaki("州崎賢一", 43, 63.7, 3);

	cout << kaneko.name() << '\n';	ptr_ref(&kaneko, kaneko);

	cout << mineya.name() << '\n';	ptr_ref(&mineya, mineya);

	cout << susaki.name() << '\n';	ptr_ref(&susaki, susaki);
}
