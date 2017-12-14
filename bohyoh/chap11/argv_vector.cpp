ｻｿ// 譁蟄怜励繝吶け繝医Ν

#include <string>
#include <vector>
#include <iostream>t

using namespace std;

//--- 繝昴う繝ｳ繧ｿ縺ｫ繧医ｋ譁蟄怜励驟榊励ｒvector<string>縺ｫ螟画鋤 ---//
vector<string> strptary_to_vec(char** p, int n)
{
	vector<string> temp;
	for (int i = 0; i < n; i++)
		temp.push_back(p[i]);
	return temp;
}

int main(int argc, char**argv)
{
	vector<string> s1 = strptary_to_vec(argv, argc);			// 螟画鋤
	for (vector<string>::size_type i = 0; i < s1.size(); i++)	// 陦ｨ遉ｺ
		cout << "s1[" << i << "] = " << s1[i] << '\n';
}
