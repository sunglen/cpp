// 試作版・優待会員クラス（ソース部）

#include <string>
#include <iostream>
#include "VipMember0.h"

using namespace std;

//--- コンストラクタ ---//
VipMember0::VipMember0(const string& name, int no, double w, const string& prv)
		  : full_name(name), number(no)
{
	set_weight(w);				// 体重を設定
	set_privilege(prv);			// 特典を設定
}
