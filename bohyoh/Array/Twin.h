// 二値クラステンプレートTwin

#ifndef ___Class_Twin
#define ___Class_Twin

#include <utility>
#include <algorithm>

//===== 二値クラステンプレート =====//
template <class Type> class Twin {
	Type v1;	// 第一値
	Type v2;	// 第二値

public:
	//--- コンストラクタ ---//
	Twin(const Type& f = Type(), const Type& s = Type()) : v1(f), v2(s) { } 

	//--- コピーコンストラクタ ---//
	Twin(const Twin<Type>& t) : v1(t.first()), v2(t.second()) { }

	Type  first()  const { return v1; }			// 第一値v1のゲッタ
	Type& first()        { return v1; }			// 第一値v1のゲッタ兼セッタ

	Type  second() const { return v2; }			// 第二値v2のゲッタ
	Type& second()       { return v2; }			// 第二値v2のゲッタ兼セッタ

	void set(const Type& f, const Type& s) { v1 = f; v2 = s; }	// 二値のセッタ

	Type min() const { return v1 < v2 ? v1 : v2; }	// 小さいほうの値

	bool ascending() const { return v1 < v2 ; }		// 第一値のほうが小さいか？

	void sort() { if (!(v1 < v2)) std::swap(v1, v2); }	// ソート
};

//--- 挿入子 ---//
template <class Type> inline std::ostream& operator<<(std::ostream& os,
                                                      const Twin<Type>& t)
{
	return os << "[" << t.first() << ", " << t.second() << "]";
}

#endif
