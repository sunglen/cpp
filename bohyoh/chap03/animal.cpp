// 選ばれた動物の鳴き声を表示（その１）

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
	Animal selected;

	do {
		selected = select();	// 動物を選ぶ
		switch (selected) {
		 case Dog :    dog();     break;		// 犬
		 case Cat :    cat();     break;		// 猫
		 case Monkey : monkey();  break;		// 猿
		}
	} while (selected != Invalid);
}
