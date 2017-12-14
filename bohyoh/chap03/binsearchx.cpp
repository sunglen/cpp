// 汎用２分探索関数（bsearch関数を拡張）

#include <cstdlib>

// baseが指す要素の大きさがsizeで要素数がnmembの配列からkeyと一致する要素を
// 比較関数comparを用いて２分探索
// ※ keyと等しい要素が複数存在する場合は最も先頭の要素を探す
void* binsearchx(const void* key, const void* base, size_t nmemb, size_t size,
				 int (*compar)(const void*, const void*))
{
  if (nmemb > 0) {
    const char* x = reinterpret_cast<const char*>(base);
    size_t pl = 0;							// 探索範囲先頭の添字
    size_t pr = nmemb - 1;					// 探索範囲末尾の添字
    size_t pc;								// 探索範囲中央の添字

    while (1) {
      int comp = compar(key,
                        reinterpret_cast<const void*>(&x[(pc = (pl+pr)/2) * size]));

      if (comp == 0) { 				// 探索成功
        for ( ; pc > pl; pc--)		// keyと等しい先頭の要素を探す
          if (compar(key,
                    reinterpret_cast<const void*>(&x[(pc = (pl+pr)/2) * size])))
            break;
          return const_cast<void*>(reinterpret_cast<const void*>(&x[pc * size]));
      } else if (pl == pr)			// 探索範囲がなくなった
        break;			
      else if (comp > 0)
        pl = pc + 1;					// 探索範囲を後半に絞り込む
      else
        pr = pc - 1;					// 探索範囲を前半に絞り込む
    }
  }
  return NULL;							// 探索失敗
}
