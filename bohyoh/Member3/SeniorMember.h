// 長寿会員クラス（第２版：ヘッダ部）

#ifndef ___SeniorMember
#define ___SeniorMember

#include <string>
#include "Member.h"

//===== 長寿会員クラス =====//
class SeniorMember : public Member {
	int care_level;		// 要介護度

public:
	//--- コンストラクタ ---//
	SeniorMember(const std::string& name, int no, double w, int level = 0);

	//--- 要介護度取得（care_levelのゲッタ）---//
	int get_care_level() const { return care_level; }

	//--- 要介護度設定（care_levelのセッタ）---//
	void set_care_level(int level) {
		care_level = (level >= 1 && level <= 5) ? level : 0;
	}

	//--- 会員情報表示---//
	void print() const;
};

#endif
