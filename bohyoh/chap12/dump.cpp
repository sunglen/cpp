ｻｿ// 繝繝ｳ繝暦ｼ医ヵ繧｡繧､繝ｫ荳ｭ縺ｮ蜈ｨ繝舌う繝医ｒ譁蟄励→繧ｳ繝ｼ繝峨〒陦ｨ遉ｺｼ

#include <string>
#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	string fname;	// 繝輔ぃ繧､繝ｫ蜷

	cout << "繝輔ぃ繧､繝ｫ蜷搾ｼ";
	cin >> fname;

	ifstream fs(fname.c_str(), ios_base::binary);
	if (!fs)
		cout << "\a繝輔ぃ繧､繝ｫ繧偵が繝ｼ繝励Φ縺ｧ縺阪∪縺帙ｓ縲n";
	else {
		unsigned long count = 0;
		while (true) {
			int n;
			unsigned char buf[16];
			fs.read(reinterpret_cast<char*>(buf), 16);
			if ((n = fs.gcount()) == 0) break;

			cout << hex << setw(8) << setfill('0') << count << ' ';	// 繧｢繝峨Ξ繧ｹ

			for (int i = 0; i < n; i++)								// 16騾ｲ謨ｰ
				cout << hex << setw(2) << setfill('0')
							<< static_cast<unsigned>(buf[i]) << ' ';

			if (n < 16)
				for (int i = n; i < 16; i++) cout << "   ";

			for (int i = 0; i < n; i++)								// 譁蟄
				cout << (isprint(buf[i]) ? static_cast<char>(buf[i]) : '.');

			cout << '\n';
			if (n < 16) break;
			count += 16;
		}
	}
}
