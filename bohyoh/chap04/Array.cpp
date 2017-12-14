// 基底クラスと派生クラスの代入演算子とデストラクタ

#include <iostream>

using namespace std;

//===== 超簡易配列クラス =====//
class Array {
	static const int num = 5;		// 要素数（固定）
	int *p;

public:
	//--- デフォルトコンストラクタ ---//
	Array() : p(new int[num]) { cout << "領域確保\n"; }

	//--- コピーコンストラクタ ---//
	Array(const Array& x) : p(new int[x.num]) {
		for (int i = 0; i < num; i++) p[i] = x.p[i];	// xの全要素をコピー
		cout << "コピー初期化\n";
	}

	//--- デストラクタ ---//
	~Array() { delete[] p;  cout << "領域解放\n"; }

	//--- 代入演算子 ---//
	Array& operator=(const Array& x) {
		for (int i = 0; i < num; i++) p[i] = x.p[i];
		return *this;
	}

	//--- 全要素に値vを代入 ---//
	void set(int v) { for (int i = 0; i < num; i++) p[i] = v; }

	//--- 全要素の値を表示 ---//
	void print() const { for (int i = 0; i < num; i++) cout << p[i] << ' '; }
};

//===== 超簡易配列クラス（派生クラス）=====//
class ArrayX : public Array {
	// コンストラクタを含め何も定義しない
};

int main()
{
	ArrayX a1;
	a1.set(15);		// a1の全要素に15を代入

	ArrayX a2(a1);	// a1で初期化

	ArrayX a3;
	a3 = a1;		// a1の全要素をa3にコピー

	cout << "配列a1：";   a1.print();   cout << '\n';
	cout << "配列a2：";   a2.print();   cout << '\n';
	cout << "配列a3：";   a3.print();   cout << '\n';
}
