ｻｿ// 繝吶け繝医Ν縺ｫ繧医ｋ蜃ｸ蜃ｹｼ呈ｬ｡蜈榊

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int m, n;		// 陦梧焚縺ｨ蛻玲焚
	cout << "陦梧焚ｼ";
	cin >> m;

	vector<vector<int> > x;

	for (int i = 0; i < m; i++) {
		int width;
		cout << i << "陦檎岼縺ｮ蛻玲焚ｼ";
		cin >> width;
		x.push_back(vector<int>(width));
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < x[i].size(); j++) {
			cout << "x[" << i << "][" << j << "] = " << x[i][j] << '\n';
		}
	}
}
