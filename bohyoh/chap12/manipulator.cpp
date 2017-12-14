ｻｿ// 謫堺ｽ懷ｭ舌↓繧医ｋ譖ｸ蠑乗欠螳

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	cout << oct << 1234 << '\n';	// 8騾ｲ謨ｰ
	cout << dec << 1234 << '\n';	// 10騾ｲ謨ｰ
	cout << hex << 1234 << '\n';	// 16騾ｲ謨ｰ

	cout << showbase;
	cout << oct << 1234 << '\n';	// 8騾ｲ謨ｰ
	cout << dec << 1234 << '\n';	// 10騾ｲ謨ｰ
	cout << hex << 1234 << '\n';	// 16騾ｲ謨ｰ

	cout << setw(10) << internal << "abc\n";
	cout << setw(10) << left	 << "abc\n";
	cout << setw(10) << right	 << "abc\n";

	cout << setbase(10);
	cout << setw(10) << internal << -123 << '\n';
	cout << setw(10) << left	 << -123 << '\n';
	cout << setw(10) << right	 << -123 << '\n';

	cout << setfill('*');
	cout << setw(10) << internal << -123 << '\n';
	cout << setw(10) << left	 << -123 << '\n';
	cout << setw(10) << right	 << -123 << '\n';
	cout << setfill(' ');

	cout << fixed      << setw(10) << setprecision(2) << 123.5 << endl;
	cout << scientific << setw(10) << setprecision(2) << 123.5 << endl;
}
