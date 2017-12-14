ｻｿ// string縺ｮ蛻ｩ逕ｨ萓具ｼ磯｣邨舌隱ｭ霎ｼ縺ｿ繝ｻ豈碑ｼｼ

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s1 = "ABC";
	string s2 = s1 + "DEF";	// 騾｣邨
	string s3;

	cout << "譁蟄怜励ｒ蜈･蜉帙○繧茨ｼ";
	cin >> s3;

	cout << "縺昴譁蟄怜励\"" + s1 + "\"縺ｨ遲峨＠" +
		((s3 == s1) ? "縺縺ｧ縺吶n" : "縺上≠繧翫∪縺帙ｓ縲n");	// 豈碑ｼ

	cout << "縺昴譁蟄怜励\"" + s2 + "\"繧医ｊ蟆上＆" +
		((s3 < s2) ? "縺縺ｧ縺吶n" : "縺上≠繧翫∪縺帙ｓ縲n");	// 豈碑ｼ
}
