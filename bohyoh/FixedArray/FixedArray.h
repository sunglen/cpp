// 固定長配列クラステンプレートFixedArray

#ifndef ___Class_FixedArray
#define ___Class_FixedArray

//===== 固定長配列クラステンプレート =====//
template <class Type, int N> class FixedArray {
	Type vec[N];		// 配列

public:
	//----- 添字範囲エラー -----//
	class IdxRngErr {
		const FixedArray* ident;
		int index;
	public:
		IdxRngErr(const FixedArray* p, int i) : ident(p), index(i) { }
		int Index() const { return index; }
	};

	//--- 明示的コンストラクタ ---//
	explicit FixedArray(const Type& v = Type()) {
		for (int i = 0; i < N; i++)
			vec[i] = v;
	}

	//--- コピーコンストラクタ ---//
	FixedArray(const FixedArray& x) {
		if (&x != this) {					// 初期化子が自分自身でなければ…
			for (int i = 0; i < N; i++)		// 全要素をコピー
				vec[i] = x.vec[i];
		}
	}

	//--- 要素数を返す ---//
	int size() const { return N; }

	//--- 代入演算子= ---//
	FixedArray& operator=(const FixedArray& x) {
		for (int i = 0; i < N; i++)			// 全要素をコピー
			vec[i] = x.vec[i];
		return *this;
	}

	//--- 添字演算子[] ---//
	Type& operator[](int i) {
		if (i < 0 || i >= N)
			throw IdxRngErr(this, i);		// 添字範囲エラー送出
		return vec[i];
	}

	//--- 添字演算子[] ---//
	const Type& operator[](int i) const {
		if (i < 0 || i >= N)
			throw IdxRngErr(this, i);		// 添字範囲エラー送出
		return vec[i];
	}
};

#endif
