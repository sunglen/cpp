// public派生とメンバのアクセス性（注：エラーとなる行はコメントアウト）

#include "Super.h"

class Sub : public Super {
	void f() {
//		pri = 1;	// クラス内部からのアクセス不可
		pro = 1;
		pub = 1;
	}
};

int main()
{
	Sub x;

//	x.pri = 1;		// クラス外部からのアクセス不可
//	x.pro = 1;		// クラス外部からのアクセス不可
	x.pub = 1;		// 公開属性が維持される
}
