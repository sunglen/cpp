//--- int型配列の２分探索 ---//
int binsearch(const int a[], int n, int key)
{
	int pl = 0;						// 探索範囲先頭の添字
	int pr = n - 1;					// 探索範囲末尾の添字

	do {
		int pc = (pl + pr) / 2;

		if (a[pc] == key)	 		// 探索成功
			return pc;
		else if (a[pc] < key)		// 探索範囲がなくなった
			pl = pc + 1;			// 探索範囲を後半に絞り込む
		else
			pr = pc - 1;			// 探索範囲を前半に絞り込む
	} while (pl > pr);
	return -1;						// 探索失敗
}