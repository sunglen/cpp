// 第6章 まとめ

#include <string>
#include <iostream>

//--- 動物クラス（抽象クラス）---//
class Animal {
	std::string name;	// 名前
public:
	Animal(const std::string& n) : name(n) { }

	virtual ~Animal() = 0;					// 純粋仮想デストラクタ

	virtual void bark() = 0;				// 吠える

	virtual std::string to_string() = 0;	// 文字列表現を返却

	std::string get_name() { return name; }	// 名前を返却

	void introduce() {
		std::cout << to_string() + "だ";
		bark();
		std::cout << '\n';
	}
};

inline Animal::~Animal() { }

//--- 犬クラス ---//
class Dog : public Animal {
	std::string type;	// 犬種
public:
	Dog(const std::string& n, const std::string& t) : Animal(n), type(t) { }

	virtual void bark() { std::cout << "ワンワン!!"; }

	virtual std::string to_string() { return type + "の" + get_name(); }
};

//--- 猫クラス ---//
class Cat : public Animal {
	std::string fav;	// 好物
public:
	Cat(const std::string& n, const std::string& f) : Animal(n), fav(f) { }

	virtual void bark() { std::cout << "ニャ～ン!!"; }

	virtual std::string to_string() { return fav + "が大好きな"
												 + get_name(); }
};

using namespace std;

// 動物クラスの利用例
int main()
{
	Animal *p[] = {
		new Dog("タロー", "柴犬"),		// 犬
		new Cat("マイケル", "サンマ"),	// 猫
		new Dog("ハチ公", "秋田犬"),	// 犬
	};

	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
		p[i]->introduce();

	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
		delete p[i];
}
