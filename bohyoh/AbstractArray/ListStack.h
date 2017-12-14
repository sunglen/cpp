ｻｿ// 繧ｹ繧ｿ繝け 繧ｯ繝ｩ繧ｹ繝繝ｳ繝励Ξ繝ｼ繝茨ｼ育ｷ壼ｽ｢繝ｪ繧ｹ繝医↓繧医ｋ螳溽樟ｼ

#ifndef ___Class_ListStack
#define ___Class_ListStack

#include "Stack.h"

//===== 邱壼ｽ｢繝ｪ繧ｹ繝医↓繧医ｋ繧ｹ繧ｿ繝け 繧ｯ繝ｩ繧ｹ繝繝ｳ繝励Ξ繝ｼ繝 =====//
template <class Type> class ListStack : public Stack<Type> {

	//=== 繝弱繝 ===/
	template <class Type> class Node {
		friend class ListStack<Type>;
		Type* data;			// 繝繝ｼ繧ｿ
		Node* next;			// 蠕檎ｶ壹繧､繝ｳ繧ｿｼ亥ｾ檎ｶ壹ヮ繝ｼ繝峨∈縺ｮ繝昴う繝ｳ繧ｿｼ
	public:
		Node(Type* d, Node* n) : data(d), next(n) { }
	};

	Node<Type>* top;		// 蜈磯ｭ繝弱繝峨∈縺ｮ繝昴う繝ｳ繧ｿ
	Node<Type>* dummy;		// 繝繝溘繝弱繝峨∈縺ｮ繝昴う繝ｳ繧ｿ

public:
	//--- 繧ｳ繝ｳ繧ｹ繝医Λ繧ｯ繧ｿ ---//
	ListStack() {
		top = dummy = new Node<Type>(NULL, NULL);
	}

	//--- 繝繧ｹ繝医Λ繧ｯ繧ｿ ---//
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

	//--- 繝励ャ繧ｷ繝･ ---//
	void push(const Type& x) {
		Node<Type>* ptr = top;
		try {
			top = new Node<Type>(new Type(x), ptr);
		} catch (bad_alloc) {
			throw Overflow();
		}
	}

	//--- 繝昴ャ繝 ---//
	Type pop() {
		if (top == dummy)						// 繧ｹ繧ｿ繝け縺ｯ遨ｺ
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
