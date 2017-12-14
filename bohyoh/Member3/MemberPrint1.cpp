// 会員情報の表示（優待会員と長寿会員のメンバ関数printを呼び出す）

#include <iostream>
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

int main()
{
	VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
	SeniorMember susaki("州崎賢一", 43, 63.7, 3);

	mineya.print();		// 会員情報を表示（VipMemberのメンバ関数print）
	susaki.print();		// 会員情報を表示（SeniorMemberのメンバ関数print）
}
