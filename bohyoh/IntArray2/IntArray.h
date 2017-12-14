// 整数配列クラスIntArray（第２版：ヘッダ部）

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== 整数配列クラス ======//
class IntArray {
	int nelem;		// 配列の要素数
	int* vec;		// 先頭要素へのポインタ

	//--- 添字の妥当性を判定 ---//
	bool is_valid_index(int idx) const { return idx >= 0 && idx < nelem; }

public:
	//----- 添字範囲エラー -----//
	class IdxRngErr {
	private:
		const IntArray* ident;	// 例外を送出したオブジェクトへのポインタ
		int idx;				// 例外を送出するきっかけとなった添字の値
	public:
		IdxRngErr(const IntArray* p, int i) : ident(p), idx(i) { }
		int index() const { return idx; }
	};

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
	int& operator[](int i) {
		if (!is_valid_index(i))
			throw IdxRngErr(this, i);		// 添字範囲エラー送出
		return vec[i];
	}

	//--- const版添字演算子[] ---//
	const int& operator[](int i) const {
		if (!is_valid_index(i))
			throw IdxRngErr(this, i);		// 添字範囲エラー送出
		return vec[i];
	}
};

#endif
