// ２次元クラスTwoDimensional

#ifndef ___Class_TwoDimensional
#define ___Class_TwoDimensional

//===== ２次元クラス（抽象クラス）=====//
class TwoDimensional {
public:
	//--- 純粋仮想デストラクタ ---//
	virtual ~TwoDimensional() = 0;

	//--- 面積を求める ---//
	virtual double get_area() const = 0;			// 純粋仮想関数
};

//--- 純粋仮想デストラクタ ---//
inline TwoDimensional::~TwoDimensional() {}

#endif
