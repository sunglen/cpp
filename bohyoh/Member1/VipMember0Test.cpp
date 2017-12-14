// 試作版・優待会員クラスの利用例

#include <iostream>
#include "VipMember0.h"

using namespace std;

int main()
{
	VipMember0 mineya("峰屋龍次", 17, 89.2, "会費全額免除");

	double weight = mineya.get_weight();	// 峰屋君の体重を取得
	mineya.set_weight(weight - 15.3);		// 峰屋君の体重を更新（15.3kg減量）

	cout << "No." << mineya.no() << "：" << mineya.name()
		 << "（" << mineya.get_weight() << "kg）"
		 << " 特典＝" << mineya.get_privilege() << '\n';
}
