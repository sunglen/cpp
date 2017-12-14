// 選ばれた動物の鳴き声を表示（その２：関数へのポインタの配列）

#include <iostream>

using namespace std;

enum Animal {Dog, Cat, Monkey, Invalid};

//--- 犬が鳴く ---//
void dog()
{
	cout << "ワンワン!!\n";
}

//--- 猫が鳴く ---//
void cat()
{
	cout << "ニャ～オ!!\n";
}

//--- 猿が鳴く ---//
void monkey()
{
	cout << "キッキッ!!\n";
}

//--- 動物を選ばせる ---//
Animal select()
{
	int tmp;

	do {
		cout << "(0)…犬　(1)…猫　(2)…猿　(3)…終了：";
		cin >> tmp;
	} while (tmp < Dog || tmp > Invalid);
	return static_cast<Animal>(tmp);
}

int main()
{
	typedef void (*AnimalFP)();
	Animal selected;
	AnimalFP afp[] = {dog, cat, monkey};

	do {
		selected = select();	// 動物を選ぶ
		if (selected >= Dog && selected < Invalid)
			afp[selected]();
	} while (selected != Invalid);
}

