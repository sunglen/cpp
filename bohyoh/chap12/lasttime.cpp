ｻｿ// 蜑榊屓縺ｮ繝励Ο繧ｰ繝ｩ繝螳溯｡梧凾縺ｮ譌･莉倥→譎ょ綾繧定｡ｨ遉ｺ縺吶ｋ

#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;

char fname[] = "lasttime.txt";				// 繝輔ぃ繧､繝ｫ蜷

//--- 蜑榊屓縺ｮ譌･莉倥譎ょ綾繧貞叙蠕励陦ｨ遉ｺ ---//
void get_data()
{
	ifstream fis(fname);

	if (fis.fail())
		cout << "譛ｬ繝励Ο繧ｰ繝ｩ繝繧貞ｮ溯｡後☆繧九縺ｯ蛻昴ａ縺ｦ縺ｧ縺吶縲n";
	else {
		int year, month, day, h, m, s;
		fis >> year >> month >> day >> h >> m >> s;
		cout << "蜑榊屓縺ｯ" << year << "蟷ｴ" << month << "譛" << day << "譌･"
			 << h << "譎" << m << "蛻" << s << "遘偵〒縺励◆縲n";
	}
}

//--- 莉雁屓縺ｮ譌･莉倥譎ょ綾繧呈嶌縺崎ｾｼ繧 ---//
void put_data()
{
	ofstream fos(fname);

	if (fos.fail())
		cout << "\a繝輔ぃ繧､繝ｫ繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		time_t t = time(NULL);
		struct tm* local = localtime(&t);
		fos << local->tm_year + 1900 << ' ' << local->tm_mon + 1 << ' '
			<< local->tm_mday        << ' ' << local->tm_hour    << ' '
			<< local->tm_min         << ' ' << local->tm_sec     << '\n';
	}
}

int main()
{
	get_data();		// 蜑榊屓縺ｮ譌･莉倥譎ょ綾繧貞叙蠕励陦ｨ遉ｺ

	put_data();		// 莉雁屓縺ｮ譌･莉倥譎ょ綾繧呈嶌縺崎ｾｼ繧
}
