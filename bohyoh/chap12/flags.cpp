ｻｿ// 繝輔Λ繧ｰ縺ｮ險ｭ螳壹→蠕ｩ蜈

#include <iostream>

using namespace std;

//--- double蝙矩榊励蜈ｨ隕∫ｴ繧#######.##蠖｢蠑上〒蜷陦後↓ｼ題ｦ∫ｴ縺壹▽陦ｨ遉ｺ ---//
void put_ary(double ary[], int n)
{
	// 險ｭ螳壹☆繧区嶌蠑擾ｼ亥承謠∴ｼ10騾ｲ謨ｰｼ句崋螳壼ｰ乗焚轤ｹ險俶ｳ包ｼ
	ios_base::fmtflags flags = ios_base::right | ios_base::dec | ios_base::fixed;

	// 迴ｾ蝨ｨ縺ｮ譖ｸ蠑上→譛蟆丞ｹ繧剃ｿ晏ｭ
	ios_base::fmtflags old_flags = cout.flags();	// 迴ｾ蝨ｨ縺ｮ譖ｸ蠑
	streamsize old_size = cout.width();				// 迴ｾ蝨ｨ縺ｮ譛蟆丞ｹ

	// 邊ｾ蠎ｦ繧定ｨｭ螳壹☆繧九→縺ｨ繧ゅ↓迴ｾ蝨ｨ縺ｮ邊ｾ蠎ｦ繧剃ｿ晏ｭ
	streamsize old_prec = cout.precision(2);		// 邊ｾ蠎ｦ縺ｯ2譯

	for (int i = 0; i < n; i++) {
		cout.width(10);				// 譛蟆丞ｹ繧10縺ｫ險ｭ螳
		cout.flags(flags);			// 譖ｸ蠑上ｒflags縺ｫ險ｭ螳
		cout << ary[i] << '\n';
	}

	cout.flags(old_flags);		// 繝輔Λ繧ｰ繧呈綾縺
	cout.width(old_size);		// 譛蟆丞ｹ繧呈綾縺
	cout.precision(old_prec);	// 邊ｾ蠎ｦ繧呈綾縺
}

int main()
{
	double a[] = {1234.235, 5568.6205, 78999.312};

	cout << 0.00001234567890 << "\n\n";		// 騾壼ｸｸ陦ｨ遉ｺ

	put_ary(a, sizeof(a) / sizeof(a[0]));
	cout << '\n';

	cout << 0.00001234567890 << '\n';		// 騾壼ｸｸ陦ｨ遉ｺ
}
