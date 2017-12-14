// 人間クラスHuman（第２版）ソース部

#include <string>
#include <iostream>
#include "Human.h"

using namespace std;

//--- コンストラクタ ---//
Human::Human(const string& full_name, int height, int weight)
{
	this->full_name = full_name;		// 氏名
	this->height = height;				// 身長
	this->weight = weight;				// 体重
}

//--- 氏名を調べる ---//
string Human::name() const
{
	return full_name;
}

//--- 身長を調べる ---//
int Human::get_height() const
{
	return height;
}

//--- 体重を調べる ---//
int Human::get_weight() const
{
	return weight;
}

//--- 太る ---//
void Human::grow_fat(int dw)
{
	weight += dw;				// 体重がdwだけ増える
}

//--- やせる ---//
void Human::slim_off(int dw)
{
	weight -= dw;				// 体重がdwだけ減る
}
