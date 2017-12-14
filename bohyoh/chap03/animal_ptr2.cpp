// 選ばれた動物の鳴き声を表示（関数へのポインタを返却する関数）

#include <iostream>

using namespace std;

enum Animal {Dog, Cat, Monkey, Invalid};

//--- 犬が鳴く ---//
void dog() { cout << "ワンワン!!\n"; }

//--- 猫が鳴く ---//
void cat() { cout << "ニャ～オ!!\n"; }

//--- 猿が鳴く ---//
void monkey() { cout << "キッキッ!!\n"; }

//--- 動物を選ばせる（選ばれた関数へのポインタを返却）---//
void (*selected_animal())()
{
	int tmp;

	while (1) {
		cout << "(0)…犬　(1)…猫　(2)…猿　(3)…終了：";
		cin >> tmp;
		switch (tmp) {
		 case Dog :     return dog;			// 関数dogへのポインタを返却
		 case Cat :     return cat;			// 関数catへのポインタを返却
		 case Monkey :  return monkey;		// 関数monkeyへのポインタを返却
		 case Invalid : return NULL;		// 空ポインタを返却	
		}
	}
}

int main()
{
	while (1) {
		void (*animal)() = selected_animal();
		if (animal == NULL)		// 空ポインタであれば終了
			break;
		animal();				// animalが指す関数を呼び出す
	}
}