ｻｿ// 繝吶け繝医Ν縺ｫ繧医ｋｼ呈ｬ｡蜈榊

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int m, n;		// 陦梧焚縺ｨ蛻玲焚
	cout << "陦梧焚ｼ";	cin >> m;
	cout << "蛻玲焚ｼ";	cin >> n;

	vector<vector<int> > x(m, vector<int>(n));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "x[" << i << "][" << j << "] = " << x[i][j] << '\n';
		}
	}
}
