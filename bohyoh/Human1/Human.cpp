// 人間クラスHuman（第１版）とその利用例

#include <string>
#include <iostream>

using namespace std;

//===== 人間クラス =====//
class Human {
private:
	string full_name;	// 氏名
	int height;			// 身長
	int weight;			// 体重

public:
	//--- コンストラクタ ---//
	Human(const string& name, int h, int w) {
		full_name = name;		// 氏名
		height = h;				// 身長
		weight = w;				// 体重
	}

	//--- 氏名を調べる ---//
	string name() {
		return full_name;
	}

	//--- 身長を調べる ---//
	int get_height() {
		return height;
	}

	//--- 体重を調べる ---//
	int get_weight() {
		return weight;
	}

	//--- 太る ---//
	void grow_fat(int dw) {
		weight += dw;				// 体重がdwだけ増える
	}

	//--- やせる ---//
	void slim_off(int dw) {
		weight -= dw;				// 体重がdwだけ減る
	}
};

int main()
{
	Human nakano("中野太郎", 173, 65);	// 中野君
	Human morita("森田孝司", 168, 71);	// 森田君

	nakano.slim_off(3);		// 中野君が3kgやせる
	morita.grow_fat(7);		// 森田君が7kg太る

	cout << "nakano = " << nakano.name() << "  " << nakano.get_height() << "cm  "
		<< nakano.get_weight() << "kg\n";

	cout << "morita = " << morita.name() << "  " << morita.get_height() << "cm  "
		<< morita.get_weight() << "kg\n";
}
