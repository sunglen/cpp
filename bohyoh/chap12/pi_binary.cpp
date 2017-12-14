ｻｿ// 蜀蜻ｨ邇繧偵ヵ繧｡繧､繝ｫ縺ｫ譖ｸ縺崎ｾｼ繧薙〒隱ｭ縺ｿ蜿悶ｋｼ医ヰ繧､繝翫Μ繝｢繝ｼ繝会ｼ

#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	double pi = 3.14159265358979323846;

	ofstream fos("pi.bin", ios_base::binary);
	if (!fos)
		cout << "\a繝輔ぃ繧､繝ｫ繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		fos.write(reinterpret_cast<char*>(&pi), sizeof(double));
		fos.close();
	}

	ifstream fis("pi.bin", ios_base::binary);
	if (!fis)
		cout << "\a繝輔ぃ繧､繝ｫ繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		fis.read(reinterpret_cast<char*>(&pi), sizeof(double));
		cout << "pi縺ｮ蛟､縺ｯ" << fixed << setprecision(20) << pi << "縺ｧ縺吶n";
		fis.close();
	}
}
