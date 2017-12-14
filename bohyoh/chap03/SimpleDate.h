// 簡易日付クラスSimpleDate（日付当てゲーム用）

#ifndef ___Class_SimpleDate
#define ___Class_SimpleDate

//===== 簡易日付クラス =====//
class SimpleDate {
	int y;		// 西暦年
	int m;		// 月
	int d;		// 日

public:
	// コンストラクタ
	SimpleDate(int yy = 1, int mm = 1, int dd = 1) : y(yy), m(mm), d(dd) { }

	int year()  const { return y; }		// 年を返却（yのゲッタ）
	int month() const { return m; }		// 月を返却（mのゲッタ）
	int day()   const { return d; }		// 日を返却（dのゲッタ）

	int comp_y(int yy) const { return yy - y; }		// yyから年を減じた値を返却
	int comp_m(int mm) const { return mm - m; }		// mmから月を減じた値を返却
	int comp_d(int dd) const { return dd - d; }		// ddから日を減じた値を返却
};

#endif
