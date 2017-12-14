// 優待会員クラス（第２版：ソース部）

#include <string>
#include <iostream>
#include "VipMember.h"

using namespace std;

//--- コンストラクタ ---//
VipMember::VipMember(const string& name, int no, double w, const string& prv)
		 			 : Member(name, no, w)
{
	set_privilege(prv);			// 特典を設定
}

//--- 会員情報表示 ---//
void VipMember::print() const
{
	cout << "No." << no() << "：" << name() << "（" << get_weight() << "kg）"
		 << "特典＝" << privilege << '\n';
}
