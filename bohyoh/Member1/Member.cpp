//--- 一般会員クラス（第１版：ソース部）---//

#include <iostream>
#include "Member.h"

using namespace std;

//--- コンストラクタ ---//
Member::Member(const string& name, int no, double w)
			   : full_name(name), number(no)
{
	set_weight(w);				// 体重を設定
}
