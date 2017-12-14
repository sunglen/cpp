// スタック クラステンプレート（std::vectorによる実現）

#ifndef ___Class_VectorStack
#define ___Class_VectorStack

#include "Stack.h"
#include <vector>

//===== std::vectorによるスタック クラステンプレート =====//
template <class Type> class VectorStack : public Stack<Type> {
	std::vector<Type> stk;					// べクトル

public:
	//--- コンストラクタ ---//
	VectorStack() { }

	//--- デストラクタ ---//
   ~VectorStack() { }

	//--- プッシュ --//
	void push(const Type& x) {
		try {
			stk.push_back(x);			// xを末尾に挿入
		}
		catch (...) {
			throw Overflow();
		}
	}

	//--- ポップ --//
	Type pop() {
		if (stk.empty())				// スタックが空
			throw Empty();
		Type x = stk.back();			// 末尾の値を調べる
		stk.pop_back();					// 末尾要素を削除
		return x;
	}
};

#endif
