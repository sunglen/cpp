// string型とwstring型の要素型を表示

#include <string>
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
   cout << " string型の要素型は" << typeid( string::value_type).name() << "です。\n";
   cout << "wstring型の要素型は" << typeid(wstring::value_type).name() << "です。\n";
}
