#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

//--- int型配列のクイックソート ---//
void quick(int v[], int n)
{
	if (n > 0) {
		int pl = 0;					// 左カーソル
		int pr = n - 1;				// 右カーソル
		int x = v[(pl + pr) / 2];	// 枢軸は中央の要素

		do {
			while (v[pl] < x) pl++;
			while (v[pr] > x) pr--;
			if (pl <= pr) {
				swap(int, v[pl], v[pr]);
				pl++;
				pr--;
			}
		} while (pl <= pr);
		if (0  < pr)    quick(v, pr + 1);		// 左グループを分割
		if (pl < n - 1) quick(v + pl, n - pl);	// 右グループを分割
	}
}
