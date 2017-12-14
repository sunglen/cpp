// スタック抽象クラステンプレートStackの利用例（その１）

#include <iostream>
#include "Stack.h"
#include "ArrayStack.h"
#include "ListStack.h"
#include "VectorStack.h"

using namespace std;

enum StackType { ArraySTK = 1, ListSTK, VectorSTK };

//--- スタックを生成 ---//
template <class Type>
Stack<Type>* generate_Stack(StackType sw)
{
	switch (sw) {
	 case  ArraySTK : return new ArrayStack<Type>();
	 case  ListSTK :  return new ListStack<Type>();
	 default :        return new VectorStack<Type>();
	}
}

//--- すべてのデータをポップして表示 ---//
template <class Type>
void pop_all(Stack<Type>& s)
{
	cout << '{'
	try {
		while (1)
			cout << s.pop() << ", ";
	} catch (Stack<Type>::Empty) {
		;
	}
	cout << "}";
}

int main()
{
	int type;

	do {
		cout << "スタックの種類（1…配列／2…リスト／3…vector）：";
		cin >> type;
	} while (type < 0 || type > 2);

	Stack<int>* s = generate_Stack<int>(static_cast<StackType>(type));

	while (1) {
		int menu;
		cout << "(1)プッシュ  (2)ポップ  (3)全ポップ＆表示 (0)終了：";
		cin >> menu;
		if (menu == 0) break;

		switch (menu) {
		 int x;
		 case 1: cout << "データ：";
				 cin >> x;
				 try {
					 s->push(x);
				 }
				 catch (Stack<int>::Overflow) {
					cout << "\aオーバフローしました。\n";
				 }
				 break;

		 case 2: try {
					x = s->pop();
				 	cout << "ポップしたデータは" << x << "です。\n"; 
				 }
				 catch (Stack<int>::Empty) {
					cout << "\aスタックは空です。\n";
				 }
				 break;
		 }
	}
}
