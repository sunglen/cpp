ｻｿ// 譁蟄怜励驟榊励繝吶け繝医Ν

#include <string>
#include <vector>
#include <iostream>

using namespace std;

//--- ｼ呈ｬ｡蜈榊励↓繧医ｋ譁蟄怜励驟榊励ｒvector<string>縺ｫ螟画鋤 ---//
vector<string> str2dary_to_vec(char* p, int h, int w)
{
	vector<string> temp;
	for (int i = 0; i < h; i++)
		temp.push_back(&p[i * w]);
	return temp;
}

//--- 繝昴う繝ｳ繧ｿ縺ｫ繧医ｋ譁蟄怜励驟榊励ｒvector<string>縺ｫ螟画鋤 ---//
vector<string> strptary_to_vec(char** p, int n)
{
	vector<string> temp;
	for (int i = 0; i < n; i++)
		temp.push_back(p[i]);
	return temp;
}

int main()
{
	char a[][5] = {"LISP", "C", "Ada"};		// 驟榊励↓繧医ｋ譁蟄怜励驟榊
	char* p[]   = {"PAUL", "X", "MAC"};		// 繝昴う繝ｳ繧ｿ縺ｫ繧医ｋ譁蟄怜励驟榊

	vector<string> sa = str2dary_to_vec(&a[0][0], 3, 5);
	for (vector<string>::size_type i = 0; i < sa.size(); i++)
		cout << "sa[" << i << "] = " << sa[i] << '\n';

	vector<string> sp = strptary_to_vec(p, 3);
	for (vector<string>::size_type i = 0; i < sp.size(); i++)
		cout << "sp[" << i << "] = " << sp[i] << '\n';
}
