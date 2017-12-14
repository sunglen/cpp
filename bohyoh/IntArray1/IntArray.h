// 整数配列クラスIntArray（第１版：ヘッダ部）

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== 整数配列クラス ======//
class IntArray {
	int nelem;		// 配列の要素数
	int* vec;		// 先頭要素へのポインタ

public:
	//--- 明示的コンストラクタ ---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	//--- コピーコンストラクタ ---//
	IntArray(const IntArray& x);

	//--- デストラクタ ---//
	~IntArray() { delete[] vec; }

	//--- 要素数を返す ---//
	int size() const { return nelem; }

	//--- 代入演算子= ---//
	IntArray& operator=(const IntArray& x);

	//--- 添字演算子[] ---//
	int& operator[](int i) { return vec[i]; }

	//--- const版添字演算子[] ---//
	const int& operator[](int i) const { return vec[i]; }
};

#endif
