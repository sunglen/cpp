// 汎用クイックソート（qsort関数に準じた仕様）

#include <cstdlib>

using namespace std;

//--- x, yの指すnバイトの領域を交換 ---//
namespace {
	void memswap(void* x, void* y, size_t n)
	{
		unsigned char* a = reinterpret_cast<unsigned char*>(x);
		unsigned char* b = reinterpret_cast<unsigned char*>(y);

		for ( ; n--; a++, b++) {
			unsigned char c = *a;
			*a = *b;
			*b = c;
		}
	}
}

//--- 汎用クイックソート（qsort関数に準じた仕様）---//
void quicksort(void* base, size_t nmemb, size_t size,
			   int (*compar)(const void*, const void*))
{
  if (nmemb > 0) {
    const char* v = reinterpret_cast<const char*>(base);  // 先頭要素へのポインタ
    size_t pl = 0;						// 左カーソル
    size_t pr = nmemb - 1;				// 右カーソル
    size_t pv = nmemb;					// 枢軸
    size_t pt = (pl + pr) / 2;			// 枢軸の更新値

    do {
      const char* x;					// 枢軸へのポインタ
      if (pv != pt) x = &v[(pv = pt) * size];
      while (compar(reinterpret_cast<const void*>(&v[pl * size]), x) < 0)
        pl++;
      while (compar(reinterpret_cast<const void*>(&v[pr * size]), x) > 0)
        pr--;
      if (pl <= pr) {
        pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
        memswap(const_cast<void*>(reinterpret_cast<const void*>(&v[pl * size])),
                const_cast<void*>(reinterpret_cast<const void*>(&v[pr * size])),
                size);
        pl++;
        if (pr == 0)	// 符号無し整数0からのデクリメントを避ける
          goto QuickRight;
        pr--;
      }
    } while (pl <= pr);

    if (0  < pr)
      quicksort(const_cast<void*>(reinterpret_cast<const void*>(&v[0])),
                pr + 1, size, compar);
  QuickRight:
    if (pl < nmemb-1)
      quicksort(const_cast<void*>(reinterpret_cast<const void*>(&v[pl * size])),
                nmemb - pl, size, compar);
  }
}
