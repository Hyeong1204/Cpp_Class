#include <iostream>
#include "main.h"

using namespace std;;

// 상속
// 동물 농장 시뮬레이션
// 돼지, 소, 닭

class Pig {
private:
	string _name;
	float _age;
	float _weight;
	float _height;

public:
	Pig(string name, float age, float weight, float height)
		:_name(name), _age(age), _weight(weight), _height(height) {}

	void Speak() {
		cout << _name <<"이 꿀꿀합니다. " << endl;
	}

	void Eat() {
		cout << _name <<"이 먹습니다. " << endl;
	}

	void Run() {
		cout << _name << "이 뜁니다. " << endl;
	}

	void info() {
		cout << "이름 : " << _name << endl;
		cout << "나이 : " << _age << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "키 : " << _height << endl;
	}
};

class Cow {
private:
	string _name;
	float _age;
	float _weight;
	float _height;

public:
	Cow(string name, float age, float weight, float height)
		:_name(name), _age(age), _weight(weight), _height(height) {}

	void Speak() {
		cout << _name << "이 음매합니다. " << endl;
	}

	void Eat() {
		cout << _name << "이 먹습니다. " << endl;
	}

	void Run() {
		cout << _name << "이 뜁니다. " << endl;
	}

	void info() {
		cout << "이름 : " << _name << endl;
		cout << "나이 : " << _age << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "키 : " << _height << endl;
	}
};

class Chicken {
private :
	string _name;
	float _age;
	float _weight;
	float _height;
	bool _fly;

	void Fly() {
		cout << _name << "이 납니다. " << endl;
	}

public:
	Chicken(string name, float age, float weight, float height, bool fly)
		:_name(name), _age(age), _weight(weight), _height(height), _fly(fly) {}

	void Speak() {
		cout << _name << "이 꼬끼오합니다. " << endl;
	}

	void Eat() {
		cout << _name << "이 먹습니다. " << endl;
	}

	void Run() {
		if (_fly)
		{
			Fly();
		}
		else
		cout << _name << "이 뜁니다. " << endl;
	}

	void info() {
		cout << "이름 : " << _name << endl;
		cout << "나이 : " << _age << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "키 : " << _height << endl;
		if (_fly)
		{
			cout << "종류 : 나는 닭" << endl;
		}
		else
			cout << "종류 : 못 나는 닭" << endl;
	}
};

int main(void) {
	//Student* pa = new Student("monster", 10, 3);	// 동적객체 할당
	//pa->info();	// 주소값으로 클래스의 멤버에 접근할때는 화살표 연산자를 사용합니다.
	//delete pa;	// 동적객체 반환
	//Student *parray = new Student[5];	// 동적객체 배열을 만들려면 기본 생성자를 만들어야함
	//for (int i = 0; i < 5; i++) {
	//	parray[i].init("monster", i, i);
	//}
	//for (int i = 0; i < 5; i++) {
	//	parray[i].info();
	//}
	//delete[] parray;	// 동적객체 배열 할당 해제

	Cow cow("소", 2.2f, 200.0f, 1.5f);
	Pig pig("돼지", 2.5f, 150.0f, 1.3f);
	Chicken flyChicken("나는닭", 0.5f, 2.5f, 0.3f, true);
	Chicken notFlyChicken("못나는닭", 0.5f, 2.5f, 0.3f, false);

	cow.Speak();
	cow.Run();

	cout << endl;

	pig.Speak();
	pig.Run();

	cout << endl;

	flyChicken.Speak();
	flyChicken.Run();

	cout << endl;

	notFlyChicken.Speak();
	notFlyChicken.Run();

	return 0;
}

void Test_count()
{

	int a = 20;		// 로컬변수(지역변수), 장동변수

	int* pa; // 포인터형지정자
	pa = new int;	// 동적메모리공간을 할당
	*pa = 1000;	// *포인터연산자, 주소값에 할당 받은 공간에 좁속할때 사용

	cout << "*pa = " << *pa << endl;

	delete pa;	// 동적메모리공간을 반환처리

	int count = 0;
	cout << "필요한 정수의 갯수를 입력하세요 : " << endl;
	cin >> count;

	int* parray = new int[count];	// 동적배열

	for (int i = 0; i < count; i++)
		parray[i] = i;

	for (int i = 0; i < count; i++)
		cout << "parray[" << i << "] = " << parray[i] << endl;

	delete[] parray;	// 동적배열 반환
}

int SetScore(int value) {
	static int score = 0;	// 로컬변수(지역변수), 정적변수
	score += value;
	return score;
}

//class Student {
//private :
//	string _name;	// 멤버 변수
//	int _age;
//	int _grade;
//
//public :
//	Student() {
//
//	}
//	Student(string name, int age, int grade)		// 인자를 받는 생성자
//		:_name(name), _age(age), _grade(grade) {}
//
//	void init(string name, int age, int grade) {
//		_name = name;
//		_age = age;
//		_grade = grade;
//	}
//
//	void info() {
//		cout << "이름 : " << _name << endl;
//		cout << "나이 : " << _age << endl;
//		cout << "학년 : " << _grade << endl;
//	}
//};






















// C++에서는 동일한 함수명을 사용할 수 있습니다.
// 대신에 매개변수의 데이타 타입이나 갯수가 틀려야 합니다.
// C++에서는 함수 네이밍하는 방법으로 네임 맹글링
// 같은 이름의 함수를 사용하는 방법을 오버로딩(Over loading)


//int add(int a, int b) {			// addxx
//	return a + b;
//}
//
//float add(float a, float b) {	// addyy
//	return a + b;
//}
//
//float add(float a, int b) {		// addyx
//	return a + b;
//}
//
//float add(float a, float b, float c) {		// addyyy
//	return a + b;
//}
//
//int main(void) {
//
//	int a = 20;
//	int b = 30;
//	float c = 1.2f;
//	float d = 3.4f;
//
//	int ret = add(a, b);	// call addxx
//	cout << a << " + " << b << " = " << ret << endl;
//
//	float fret = add(c, d);	// call addyy
//	cout << c << " + " << d << " = " << fret << endl;
//
//	return 0;
//};