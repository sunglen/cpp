ｻｿ// 蜃ｺ蜉帙ヵ繧｡繧､繝ｫ繧ｹ繝医Μ繝ｼ繝縺ｸ縺ｮ譖ｸ霎ｼ縺ｿ

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream fos("HELLO");		// "HELLO"繧貞ｺ蜉帙せ繝医Μ繝ｼ繝縺ｨ縺励※繧ｪ繝ｼ繝励Φ

	if (!fos)
		cerr << "\a繝輔ぃ繧､繝ｫ\"HELLO\"繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		fos << "Hello!\n";
		fos << "How are you?\n";
	}
}
