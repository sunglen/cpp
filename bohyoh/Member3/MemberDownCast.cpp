// dynamic_cast演算子によるダウンキャストの例

#include <iostream>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

//--- 長寿会員のみの情報を表示 ---//
void senior_print(Member* p)
{
	Member* d = dynamic_cast<SeniorMember*>(p);

	if (d)				// キャストに成功したときのみ
		d->print();		// 表示
}

int main()
{
	Member       kaneko("金子健太", 15, 75.2);
	VipMember    mineya("峰屋龍次", 17, 89.2, "会費全額免除");
	SeniorMember susaki("州崎賢一", 43, 63.7, 3);

	senior_print(&kaneko);
	senior_print(&mineya);
	senior_print(&susaki);
}