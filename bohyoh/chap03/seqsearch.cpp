// 汎用線形探索関数

#include <cstdlib>

// baseが指す要素の大きさがsizeで要素数がnmembの配列からkeyと一致する要素を
// 比較関数comparを用いて線形探索
void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size,
				int (*compar)(const void*, const void*))
{
	const char* x = reinterpret_cast<const char*>(base);

	for (size_t i = 0; i < nmemb; i++)
		if (!compar(key, reinterpret_cast<const void*>(&x[i * size])))
			return const_cast<void*>(reinterpret_cast<const void*>(&x[i * size]));		// 探索成功
	return NULL;						// 探索失敗
}
