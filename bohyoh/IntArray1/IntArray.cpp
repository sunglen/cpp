// 整数配列クラスIntArray（第１版：ソース部）

#include <cstdlib>
#include "IntArray.h"

//--- コピーコンストラクタ ---//
IntArray::IntArray(const IntArray& x)
{
	if (&x == this) {						// 初期化子が自分自身であれば…
		nelem = 0;
		vec = NULL;
	}
	else {
		nelem = x.nelem;					// 要素数をxと同じにする
		vec = new int[nelem];				// 配列本体を確保
		for (int i = 0; i < nelem; i++)		// 全要素をコピー
			vec[i] = x.vec[i];
	}
}

//--- 代入演算子 ---//
IntArray& IntArray::operator=(const IntArray& x)
{
	if (&x != this) {					// 代入元が自分自身でなければ…
		if (nelem != x.nelem) {			// 代入前後の要素数が異なれば…
			delete[] vec;				// もともと確保していた領域を解放
			nelem = x.nelem;			// 新しい要素数
			vec = new int[nelem];		// 新たに領域を確保
		}
		for (int i = 0; i < nelem; i++)	// 全要素をコピー
			vec[i] = x.vec[i];
	}
	return *this;
}
