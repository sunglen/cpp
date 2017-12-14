// 人間クラスHuman（第２版）とその利用例

#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

int main()
{
	Human nakano("中野太郎", 173, 65);			// 中野君（普通のオブジェクト）
	const Human morita("森田孝司", 168, 71);	// 森田君（定値オブジェクト）

	nakano.slim_off(3);				// 中野君が3kgやせる
//	morita.grow_fat(7);				// エラー：constな森田君は太れない

	cout << "nakano = " << nakano.name() << "  " << nakano.get_height() << "cm  "
		 << nakano.get_weight() << "kg\n";

	cout << "morita = " << morita.name() << "  " << morita.get_height() << "cm  "
		 << morita.get_weight() << "kg\n";
}
