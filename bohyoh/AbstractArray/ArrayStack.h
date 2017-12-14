// スタック クラステンプレート（要素数固定の配列による実現）

#ifndef ___Class_ArrayStack
#define ___Class_ArrayStack

#include "Stack.h"

//===== 要素数固定の配列によるスタック クラステンプレート =====//
template <class Type> class ArrayStack : public Stack<Type> {
	static const int size = 10;		// スタックの容量（配列の要素数）
	int ptr;						// スタックポインタ
	Type stk[size];					// スタックの本体

public:
	//--- コンストラクタ ---//
	ArrayStack() : ptr(0) { }

	//--- デストラクタ ---//
   ~ArrayStack() { }

	//--- プッシュ ---//
	void push(const Type& x) {
		if (ptr >= size)				// スタックは満杯
			throw Overflow();
		stk[ptr++] = x;
	}

	//--- ポップ ---//
	Type pop() {
		if (ptr <= 0)					// スタックは空
			throw Empty();
		return stk[--ptr];
	}
};

#endif
