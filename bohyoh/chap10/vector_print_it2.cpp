ｻｿ// 繝吶け繝医Ν縺ｨ驟榊励蜈ｨ隕∫ｴ縺ｮ陦ｨ遉ｺｼ亥渚蠕ｩ蟄撰ｼ

#include <vector>
#include <iostream>

using namespace std;

//--- [first, last)縺ｮ蜈ｨ隕∫ｴ繧畜}縺ｧ蝗ｲ繧薙〒鬆縺ｫ陦ｨ遉ｺ ---//
template<class InputIterator>
void print(InputIterator first, InputIterator last)
{
	cout << "{ ";
	for (InputIterator i = first; i != last; i++)
		cout << *i << " ";
	cout << "}";
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	vector<int> x(a, a + 5);

	// 繝昴う繝ｳ繧ｿ繧呈ｸ｡縺
	cout << "a = ";  print(a,         a + 5  );   cout << '\n';

	// 蜿榊ｾｩ蟄舌ｒ貂｡縺
	cout << "x = ";  print(x.begin(), x.end());   cout << '\n';
}
