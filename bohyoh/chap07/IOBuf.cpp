// 簡易配列クラス（仮想基底クラスの応用例）

#include <iostream>

using namespace std;

//===== バッファ =====//
class Buf {
	int a[5];
protected:
	int  element(int i) const { return a[i]; }		// a[i]を返却
	int& element(int i)       { return a[i]; }		// a[i]への参照を返却
};

//===== 読込みのみが可能なバッファ =====//
class InBuf : virtual Buf {
public:
	int get(int i) const { return element(i); }		// a[i]の読込み
};

//===== 書込みのみが可能なバッファ =====//
class OutBuf : virtual Buf {
public:
	void put(int i, int v) { element(i) = v; }		// a[i]への書込み
};

//===== 読み書きが可能なバッファ =====//
class IOBuf : public InBuf, public OutBuf {

};

int main()
{
	IOBuf a;

	for (int i = 0; i < 5; i++)
		a.put(i, i * 10);

	for (int i = 0; i < 5; i++)
		cout << a.get(i) << " ";
	cout << '\n';
}
