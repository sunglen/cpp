// 汎用２分探索関数（bsearch関数に準じた仕様）

#include <cstdlib>

//--- 汎用２分探索関数（bsearch関数に準じた仕様）---//
void* binsearch(const void* key, const void* base, size_t nmemb, size_t size,
			 	int (*compar)(const void*, const void*))
{
   if (nmemb > 0) {
      const char* x = reinterpret_cast<const char*>(base);
      size_t pl = 0;					// 探索範囲先頭の添字
      size_t pr = nmemb - 1;			// 探索範囲末尾の添字
      size_t pc;						// 探索範囲中央の添字

      while (true) {
         int comp = compar(key,
                      reinterpret_cast<const void*>(&x[(pc = (pl+pr)/2) * size]));

         if (comp == 0)	 			// 探索成功
            return const_cast<void*>(reinterpret_cast<const void*>(&x[pc * size]));
         else if (pl == pr)			// 探索範囲がなくなった
            break;			
         else if (comp > 0)
            pl = pc + 1;			// 探索範囲を後半に絞り込む
         else
            pr = pc - 1;			// 探索範囲を前半に絞り込む
      }
   }
   return NULL;						// 探索失敗
}
