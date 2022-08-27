#include <iostream>

using namespace std;
// 프로그래머
// 커피숍 관리프로그램을 개발 의뢰 받았습니다.

// Cashier, Barista, Guest

class Coffee {
	string name;

public :
	Coffee()
		:name("Coffee"){}

	string GetName() {
		return name;
	}
};

class Barista {
public :
	void MakeADrink() {
		cout << "음료를 만듭니다." << endl;
	}
};

class Cashier {
private:
	Barista& bari;
public:
	Cashier(Barista& ref)
		:bari(ref){}

	void OrderedDrink() {
		cout << "주믄을 받습니다." << endl;
		cout << "음료 오더를 보냅니다." << endl;
		bari.MakeADrink();
	}
};

class Guest {
public:
	void OrdeeringDrink(Cashier& ref) {	// 의존적 관계(일시적인 관계)
		cout << "음료를 주문합니다." << endl;
		ref.OrderedDrink();
	}
};




int main(void) {

	Guest guest;
	Barista bari;
	Cashier cashier(bari);


	return 0;
}