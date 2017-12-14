ｻｿ// 繝吶け繝医Ν縺ｫ蟇ｾ縺吶ｋ隕∫ｴ縺ｮ謖ｿ蜈･縺ｨ蜑企勁

#include <vector>
#include <iostream>

using namespace std;

//--- 繝吶け繝医Νv縺ｮ蜈ｨ隕∫ｴ繧畜}縺ｧ蝗ｲ繧薙〒鬆縺ｫ陦ｨ遉ｺ --//
template <class T, class Allocator>
void print_vector(vector<T, Allocator>& v)
{
	cout << "{ ";
	for (vector<T, Allocator>::size_type i = 0; i != v.size(); i++)
		cout << v[i] << ' ';
	cout << '}';
}

//--- 謖ｿ蜈･菴咲ｽｮ縺ｮ隱ｭ霎ｼ縺ｿ ---//
int scan_ins(int &idx, int &val, int flag)
{
	int num = 0;

	cout << "謖ｿ蜈･菴咲ｽｮｼ";	cin >> idx;
	cout << "蛟､ｼ";			cin >> val;
	if (flag) {
		cout << "謖ｿ蜈･蛟区焚ｼ";  cin >> num;
	}
	return num;
}

//--- 蜑企勁菴咲ｽｮ縺ｮ隱ｭ霎ｼ縺ｿ ---//
int scan_ers(int &idx, int flag)
{
	int num = 0;

	cout << "蜑企勁菴咲ｽｮｼ";	cin >> idx;
	if (flag) {
		cout << "蜑企勁蛟区焚ｼ";  cin >> num;
	}
	return num;
}

int main()
{
	vector<int> x;

	for (vector<int>::size_type i = 0; i < 10; i++)
		x.push_back(i);

	while (true) {
		vector<int>::iterator i = x.begin();
		int menu;
		cout << "(1)謖ｿ蜈･ (2)騾｣邯壽諺蜈･ (3)蜑企勁 (4)騾｣邯壼炎髯､ (5)陦ｨ遉ｺ (0)邨ゆｺｼ";
		cin >> menu;
		if (!menu) break;

		switch (menu) {
		 int idx, val, n;
		 case 1 :     scan_ins(idx, val, 0);  x.insert(i + idx, val);     break;
		 case 2 : n = scan_ins(idx, val, 1);  x.insert(i + idx, n, val);  break;
		 case 3 :     scan_ers(idx, 0);  x.erase(i + idx);        		  break;
		 case 4 : n = scan_ers(idx, 1);  x.erase(i + idx, i + idx + n);	  break;
		 case 5 : print_vector(x); cout << '\n';
		}
	}
}
