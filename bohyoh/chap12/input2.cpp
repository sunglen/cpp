ｻｿ// 蜈･蜉帙ヵ繧｡繧､繝ｫ繧ｹ繝医Μ繝ｼ繝縺九ｉ譁蟄怜励ｒ陦悟腰菴阪↓隱ｭ縺ｿ霎ｼ繧薙〒陦ｨ遉ｺ

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream fis("HELLO");		// "HELLO"繧貞･蜉帙せ繝医Μ繝ｼ繝縺ｨ縺励※繧ｪ繝ｼ繝励Φ

	if (!fis)
		cerr << "\a繝輔ぃ繧､繝ｫ\"HELLO\"繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		while (true) {
			string text;
			getline(fis, text);		// 繧ｹ繝医Μ繝ｼ繝縺九ｉｼ題｡後ｒ隱ｭ縺ｿ霎ｼ繧薙〒
			if (!fis) break;
			cout << text << '\n';	// 縺昴譁蟄怜励ｒ逕ｻ髱｢縺ｫ陦ｨ遉ｺ
		}
	}
}
