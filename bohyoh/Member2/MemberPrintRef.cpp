// 会員情報の表示（参照を通じたメンバ関数の呼出し）

#include <iostream>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

//--- 会員情報を表示（体重65kg以上に●を付ける）---//
void put_member(const Member& m)
{
	cout << (m.get_weight() >= 65 ? "● " : "   ");
	m.print();		// 会員情報を表示
}

int main()
{
	Member kaneko("金子健太", 15, 75.2);
	VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
	SeniorMember susaki("州崎賢一", 43, 63.7, 3);

	put_member(kaneko);			// 会員情報を表示
	put_member(mineya);			// 会員情報を表示
	put_member(susaki);			// 会員情報を表示
}
