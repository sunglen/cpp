// 優待会員クラス（第２版：ヘッダ部）

#ifndef ___VipMember
#define ___VipMember

#include <string>
#include "Member.h"

//===== 優待会員クラス =====//
class VipMember : public Member {
	std::string privilege;	// 特典

public:
	//--- コンストラクタ ---//
	VipMember(const std::string& name, int no, double w, const std::string& prv);

	//--- 特典取得（privilegeのゲッタ）---//
	std::string get_privilege() const { return privilege; }

	//--- 特典設定（privilegeのセッタ）---//
	void set_privilege(const std::string& prv) {
		privilege = (prv != "") ? prv : "未登録";
	}

	//--- 会員情報表示---//
	void print() const;
};

#endif
