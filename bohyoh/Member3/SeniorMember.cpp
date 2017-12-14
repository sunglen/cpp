// 長寿会員クラス（第２版：ソース部）

#include <string>
#include <iostream>
#include "SeniorMember.h"

using namespace std;

//--- コンストラクタ ---//
SeniorMember::SeniorMember(const string& name, int no, double w, int level)
		 				   : Member(name, no, w)
{
	set_care_level(level);			// 要介護度を設定
}

//--- 会員情報表示 ---//
void SeniorMember::print() const
{
	cout << "No." << no() << "：" << name() << "（" << get_weight() << "kg）"
		 << "要介護度＝" << care_level << '\n';
}
