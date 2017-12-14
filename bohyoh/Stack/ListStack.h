// スタック クラステンプレート（線形リストによる実現）

#ifndef ___Class_ListStack
#define ___Class_ListStack

#include "Stack.h"

//===== 線形リストによるスタック クラステンプレート =====//
template <class Type> class ListStack : public Stack<Type> {

	//=== ノード ===//
	template <class Type> class Node {
		friend class ListStack<Type>;
		Type* data;			// データ
		Node* next;			// 後続ポインタ（後続ノードへのポインタ）
	public:
		Node(Type* d, Node* n) : data(d), next(n) { }
	};

	Node<Type>* top;		// 先頭ノードへのポインタ
	Node<Type>* dummy;		// ダミーノードへのポインタ

public:
	//--- コンストラクタ ---//
	ListStack() {
		top = dummy = new Node<Type>(NULL, NULL);
	}

	//--- デストラクタ ---//
	~ListStack() {
		Node<Type>* ptr = top;
		while (ptr != dummy) {
			Node<Type>* next = ptr->next;
			delete ptr->data;
			delete ptr;
			ptr = next;
		}
		delete dummy;
	}

	//--- プッシュ ---//
	void push(const Type& x) {
		Node<Type>* ptr = top;
		try {
			top = new Node<Type>(new Type(x), ptr);
		} catch (const bad_alloc&) {
			throw Overflow();
		}
	}

	//--- ポップ ---//
	Type pop() {
		if (top == dummy)						// スタックは空
			throw Empty();
		else {
			Node<Type>* ptr = top->next;
			Type temp = *(top->data);
			delete top->data;
			delete top;
			top = ptr;
			return temp;
		}
	}
};

#endif
