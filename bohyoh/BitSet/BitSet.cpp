// ビットベクトルによる集合クラスBitSet（ソース部）

#include <string>
#include <sstream>
#include <iostream>
#include "BitSet.h"

using namespace std;

//--- 文字列表現"{a, b, c}"を返却（要素をコンマで区切って{}で囲む）---//
string BitSet::to_string() const
{
	ostringstream s;
	int set[LONG_BIT];			// 含まれる要素
	int count = 0;				// 要素数

	for (int i = 0; i < LONG_BIT; i++)
		if (bits & set_of(i)) set[count++] = i;

	s << "{";
	if (count) {
		for (int i = 0; i < count - 1; i++)
			s << set[i] << ", ";
		s << set[count - 1];
	}
	s << "}";

	return s.str();
}

//--- ビットベクトルの文字列表現"010…10"を返却 ---//
string BitSet::bit_string() const
{
	char bp[LONG_BIT + 1];		// 含まれる要素

	for (int i = LONG_BIT - 1; i >= 0; i--)
		bp[LONG_BIT - i - 1] = (set_of(i) & bits) ? '1' : '0';
	bp[LONG_BIT] = '\0';

	return string(bp);
}

//--- 挿入子 ---//
ostream& operator<<(ostream& os, const BitSet& x)
{
	return os << x.to_string();
}
