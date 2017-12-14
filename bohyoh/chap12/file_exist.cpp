ｻｿ// 繝輔ぃ繧､繝ｫ縺ｮ蟄伜惠繧堤｢ｺ隱

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

//--- 蜷榊燕縺掲ilename縺ｧ縺ゅｋ繝輔ぃ繧､繝ｫ縺悟ｭ伜惠縺吶ｋ縺九←縺縺九ｒ蛻､螳 ---//
bool file_exist(const char* filename)
{
	ifstream fis(filename);		// 蜈･蜉帙せ繝医Μ繝ｼ繝縺ｨ縺励※繧ｪ繝ｼ繝励Φ
	return fis.is_open();		// 繧ｪ繝ｼ繝励Φ縺ｫ謌仙粥縺励◆縺具ｼ
}

int main()
{
	string file_name;
	cout << "蟄伜惠繧堤｢ｺ隱阪＠縺溘＞繝輔ぃ繧､繝ｫ縺ｮ蜷榊燕ｼ";
	cin >> file_name;

	cout << "縺昴繝輔ぃ繧､繝ｫ縺ｯ蟄伜惠"
		 << (file_exist(file_name.c_str()) ? "縺励∪縺吶n" : "縺励∪縺帙ｓ縲n");
}
