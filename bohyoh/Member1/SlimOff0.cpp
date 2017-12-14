// 一般会員クラス（第１版）と試作版・優待会員クラスの利用例

#include <iostream>
#include "Member.h"
#include "VipMember0.h"

using namespace std;

//--- 一般会員mの減量（体重がdw減る）---//
void slim_off(Member& m, double dw)
{
	double weight = m.get_weight();		// 現在の体重を取得
	if (weight > dw)
		m.set_weight(weight - dw);		// 体重を更新
}

//--- 優待会員mの減量（体重がdw減る）---//
void slim_off(VipMember0& m, double dw)
{
	double weight = m.get_weight();		// 現在の体重を取得
	if (weight > dw)
		m.set_weight(weight - dw);		// 体重を更新
}

int main()
{
	Member kaneko("金子健太", 15, 75.2);						// 一般会員
	VipMember0 mineya("峰屋龍次", 17, 89.2, "会費全額免除");	// 優待会員

	slim_off(kaneko, 3.7);					// 金子君が3.7kg減量
	cout << "No." << kaneko.no() << "：" << kaneko.name()
		 << "（" << kaneko.get_weight() << "kg）\n";

	slim_off(mineya, 15.3);					// 峰屋君が15.3kg減量
	cout << "No." << mineya.no() << "：" << mineya.name()
		 << "（" << mineya.get_weight() << "kg）"
		 << " 特典＝" << mineya.get_privilege() << '\n';
}
