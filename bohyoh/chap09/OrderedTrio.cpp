// ソート済み三値クラステンプレートOrderedTrio

#include <string>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

// ソート済み三値クラステンプレートOrderedTrio
template <class T> class OrderedTrio {
	T v1, v2, v3;

	void sort() {								// v1≦v2≦v3となるようにソート
		if (!(v1 < v2)) std::swap(v1, v2);
		if (!(v2 < v3)) std::swap(v2, v3);
		if (!(v1 < v2)) std::swap(v1, v2);
	}
public:
	//--- コンストラクタ ---//
	OrderedTrio(const T& f1 = T(), const T& f2 = T(), const T& f3 = T()) 
			   : v1(f1), v2(f2), v3(f3) { sort(); } 

	//--- コピーコンストラクタ ---//
	OrderedTrio(const OrderedTrio<T>& t)
			   : v1(t.first()), v2(t.second()), v3(t.third()) { }

	T  first()  const { return v1; }			// 第一値v1のゲッタ
	T& first()        { return v1; }			// 第一値v1のゲッタ兼セッタ

	T  second() const { return v2; }			// 第二値v2のゲッタ
	T& second()       { return v2; }			// 第二値v2のゲッタ兼セッタ

	T  third()  const { return v3; }			// 第三値v3のゲッタ
	T& third()        { return v3; }			// 第三値v3のゲッタ兼セッタ
};

//--- 挿入子 ---//
template <class T>
inline std::ostream& operator<<(std::ostream& os, const OrderedTrio<T>& t)
{
	return os << "[" << t.first() << ", " << t.second()
								  << ", " << t.third() << "]";
}

//--- 挿入子（Trio<std::string>型への特殊化）---//
template <>
inline std::ostream& operator<<(std::ostream& os, const OrderedTrio<std::string>& st)
{
	return os << "[\"" << st.first() << "\", \"" << st.second()
									 << "\", \"" << st.third() << "\"]";
}

int main()
{
	int v1, v2, v3;
	string s1, s2, s3;
	cout << "整数[1]：";	cin >> v1;
	cout << "整数[2]：";	cin >> v2;
	cout << "整数[3]：";	cin >> v3;
	cout << "文字列[1]：";	cin >> s1;
	cout << "文字列[2]：";	cin >> s2;
	cout << "文字列[3]：";	cin >> s3;

	OrderedTrio<int> t1(v1, v2, v3);
	OrderedTrio<string> t2(s1, s2, s3);

	cout << "t1 = " << t1 << '\n';
	cout << "t2 = " << t2 << '\n';
}