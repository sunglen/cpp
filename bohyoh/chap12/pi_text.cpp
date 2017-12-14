ｻｿ// 蜀蜻ｨ邇繧偵ヵ繧｡繧､繝ｫ縺ｫ譖ｸ縺崎ｾｼ繧薙〒隱ｭ縺ｿ蜿悶ｋｼ医ユ繧ｭ繧ｹ繝医Δ繝ｼ繝会ｼ

#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	double pi = 3.14159265358979323846264338327950288;

	ofstream fos("pi.txt");
	if (!fos)
		cout << "\a繝輔ぃ繧､繝ｫ繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		fos << pi;
		fos.close();
	}

	ifstream fis("pi.txt", ios_base::binary);
	if (!fis)
		cout << "\a繝輔ぃ繧､繝ｫ繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		fis >> pi;
		cout << "pi縺ｮ蛟､縺ｯ" << fixed << setprecision(20) << pi << "縺ｧ縺吶n";
		fis.close();
	}
}
