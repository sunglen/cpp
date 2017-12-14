// qsort関数を用いてクラス型の配列をソート

#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

class Person {
public:
	char name[10];	// 名前
	int  height;	// 身長
	int  weight;	// 体重
};

//--- Person型の比較関数（名前昇順） ---//
int npcmp(const Person* x, const Person* y)
{
	return strcmp(x->name, y->name);
}

//--- Person型の比較関数（身長昇順） ---//
int hpcmp(const Person* x, const Person* y)
{
	return x->height < y->height ? -1 :
		   x->height > y->height ?  1 : 0;
}

//--- Person型の比較関数（体重降順） ---//
int wpcmp(const Person* x, const Person* y)
{
	return x->weight < y->weight ?  1 :
		   x->weight > y->weight ? -1 : 0;
}

//--- no人分のデータを表示 ---//
void print_person(const Person x[], int no)
{
	for (int i = 0; i < no; i++)
		cout << setw(10) << left << x[i].name << " " << x[i].height << "cm "
			 << x[i].weight << "kg\n";
}

int main()
{
	Person x[]= {{"Shibata",  170, 52},
				 {"Takaoka",  180, 70},
				 {"Nangoh",   172, 63},
				 {"Sugiyama", 165, 50},
				};

	int nx = sizeof(x) / sizeof(x[0]);		// 配列xの要素数

	puts("ソート前");
	print_person(x, nx);

	// 名前昇順にソート
	qsort(x, nx, sizeof(Person),
		  reinterpret_cast<int (*)(const void*, const void*)>(npcmp));

	cout << "\n名前昇順ソート後\n";
	print_person(x, nx);

	// 身長昇順にソート
	qsort(x, nx, sizeof(Person),
		  reinterpret_cast<int (*)(const void*, const void*)>(hpcmp));

	cout << "\n身長昇順ソート後\n";
	print_person(x, nx);

	// 体重降順にソート
	qsort(x, nx, sizeof(Person),
		  reinterpret_cast<int (*)(const void*, const void*)>(wpcmp));

	cout << "\n体重降順ソート後\n";
	print_person(x, nx);
}
