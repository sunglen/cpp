// 一般会員クラスと優待会員クラス（いずれも第１版）の利用例

#include <iostream>
#include "Member.h"
#include "VipMember.h"

using namespace std;

//--- 会員mの減量（体重がdw減る）---//
void slim_off(Member& m, double dw)
{
	double weight = m.get_weight();		// 現在の体重
	if (weight > dw)
		m.set_weight(weight - dw);		// 体重を更新
}

int main()
{
	Member kaneko("金子健太", 15, 75.2);
	slim_off(kaneko, 3.7);

	VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
	slim_off(mineya, 15.3);

	cout << "No." << kaneko.no() << "：" << kaneko.name()
		 << "（" << kaneko.get_weight() << "kg）\n";

	cout << "No." << mineya.no() << "：" << mineya.name()
		 << "（" << mineya.get_weight() << "kg）"
		 << " 特典＝" << mineya.get_privilege() << '\n';
}
