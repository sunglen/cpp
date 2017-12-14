// private派生とメンバのアクセス性（注：エラーとなる行はコメントアウト）

#include "Super.h"

class Sub : private Super {
	void f() {
//		pri = 1;	// クラス内部でもアクセスできない
		pro = 1;
		pub = 1;
	}
};

int main()
{
	Sub x;

//	x.pri = 1;		// クラス外部からアクセスできない
//	x.pro = 1;		// クラス外部からアクセスできない
//	x.pub = 1;		// クラス外部からアクセスできない
}
