#include <iostream>

using namespace std;

// 특수화
// 동물농장 시뮬레이션을 만드는데
// 돼지, 소. 닭, 돌고래

// 상속의 장점
// 1. 기존의 클래스를 보존
// 2. 공통되는 부분을 상위클래스에 통합하여 반복을 제거하고 유지, 보수를 편리하게 함
// 3. 공통되는 부모를 가지고 계층을 만들어서 다형성의 기본 구조를 제공합니다.
class Animal {
protected:
	
	string _name;
	float _age;
	float _weight;
	float _height;
	
	

public:
	Animal(string name, float age, float weight, float height)
		:_name(name), _age(age), _weight(weight), _height(height) {}

	void Speak() {
		cout << _name << "이 말합니다. " << endl;
	}

	void Run() {
		cout << _name << "이 뜁니다. " << endl;
	}

	void Info() {
		cout << "이름 : " << _name << endl;
		cout << "나이 : " << _age << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "키 : " << _height << endl;
	}

};

class Pig : public Animal{
public:
	Pig(string name, float age, float weight, float height)
		:Animal(name, age, weight, height) {}

	void Speak() {
		cout << _name << "이 꿀꿀합니다. " << endl;
	}

};

class Cow :public Animal {
	
public:
	Cow(string name, float age, float weight, float height)
		:Animal(name, age, weight, height) {}

	void Speak() {
		cout << _name << "이 음매합니다. " << endl;
	}
};

class Chicken :public Animal {
private:
	bool _isFly;

	void Fly() {
		cout << _name << "이 납니다. " << endl;
	}

public:
	Chicken(string name, float age, float weight, float height, bool isFly)
		:Animal(name, age, weight, height), _isFly(isFly) {}

	void Speak() {
		cout << _name << "이 꼬끼오합니다. " << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
			else
				cout << _name << "이 못 납니다. " << endl;
		}

};

class Dolpin :public Animal {
private:
	bool _isSwim;
public:
	Dolpin(string name, float age, float weight, float height, bool isSwim)
		:Animal(name, age, weight, height), _isSwim(isSwim) {}

	void Speak() {
		cout << _name << "이 끼끼끼끼끾합니다. " << endl;
	}

	void Run() {
			cout << _name << "이 헤엄칩니다. " << endl;
	}

};

int main(void) {

	Pig Pig("돼지", 5.0f, 200.0f, 60.0f);
	Cow Cow("소", 5.0f, 200.0f, 60.0f);
	Chicken flyCh("나는닭", 5.0f, 200.0f, 60.0f, true);
	Chicken ontFlyCh("못나는닭", 5.0f, 200.0f, 60.0f, false);
	Dolpin dolpin("돌고래", 5.0f, 200.0f, 60.0f, true);

	Pig.Speak();
	Pig.Run();

	cout << endl;

	Cow.Speak();
	Cow.Run();

	cout << endl;

	flyCh.Speak();
	flyCh.Run();

	cout << endl;

	ontFlyCh.Speak();
	ontFlyCh.Run();

	cout << endl;

	dolpin.Speak();
	dolpin.Run();

	return 0;
}