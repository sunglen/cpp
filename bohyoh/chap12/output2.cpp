ｻｿ// 蜃ｺ蜉帙ヵ繧｡繧､繝ｫ繧ｹ繝医Μ繝ｼ繝縺ｸ縺ｮ譖ｸ霎ｼ縺ｿｼ域忰蟆ｾ縺ｸ縺ｮ霑ｽ蜉ｼ

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream fos("HELLO", ios_base::app);	// "HELLO"繧定ｿｽ蜉繝｢繝ｼ繝峨〒繧ｪ繝ｼ繝励Φ

	if (!fos)
		cerr << "\a繝輔ぃ繧､繝ｫ\"HELLO\"繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		fos << "Fine, thanks.\n";
		fos << "And you?\n";
	}
}
