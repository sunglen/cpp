//--- 一般会員クラス（第１版）の利用例 ---//

#include <iostream>
#include "Member.h"

using namespace std;

int main()
{
	Member kaneko("金子健太", 15, 75.2);

	double weight = kaneko.get_weight();	// 金子君の体重を取得
	kaneko.set_weight(weight - 3.7);		// 金子君の体重を更新（3.7kg減量）

	cout << "No." << kaneko.no() << "：" << kaneko.name()
		 << "（" << kaneko.get_weight() << "kg）\n";
}
