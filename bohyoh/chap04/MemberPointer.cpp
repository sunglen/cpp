//--- 継承とメンバへのポインタ ---//

#include <iostream>

using namespace std;

//--- 基底クラス ---//
class Bas {
public:
	int a;

	void f() { cout << "Bas::f()\n"; }
};

//--- 派生クラス ---//
class Drv : public Bas {
public:
	int b;

	void g() { cout << "Drv::g()\n"; }
};

int main()
{
	Bas bas;
	Drv drv;

	int Bas::* ptr1 = &Bas::a;			 bas.*ptr1 = 5;		  drv.*ptr1 = 5;
//	int Bas::* ptr2 = &Drv::b;			 bas.*ptr2 = 5;		  drv.*ptr2 = 5;
	int Drv::* ptr3 = &Bas::a;		 /*  bas.*ptr3 = 5; */	  drv.*ptr3 = 5;
	int Drv::* ptr4 = &Drv::b;		 /*  bas.*ptr4 = 5; */	  drv.*ptr4 = 5;

	void (Bas::*fptr1)() = &Bas::f;		(bas.*fptr1)();		 (drv.*fptr1)();
//	void (Bas::*fptr2)() = &Drv::g;		(bas.*fptr2)();		 (drv.*fptr2)();
	void (Drv::*fptr3)() = &Bas::f;  /* (bas.*fptr3)(); */	 (drv.*fptr3)();
	void (Drv::*fptr4)() = &Drv::g;  /* (bas.*fptr4)(); */	 (drv.*fptr4)();
}
