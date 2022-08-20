#include <iostream>
#include "main.h"

using namespace std;;

// ���
// ���� ���� �ùķ��̼�
// ����, ��, ��

class Stock {
protected:
	string _name;
	float _age;
	float _weight;
	float _height;

public :
	Stock(string name, float age, float weight, float height)
		:_name(name), _age(age), _weight(weight), _height(height) {}

	void Speak() {
		cout << _name << "�� ���մϴ�. " << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�. " << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�. " << endl;
	}

	void info() {
		cout << "�̸� : " << _name << endl;
		cout << "���� : " << _age << endl;
		cout << "������ : " << _weight << endl;
		cout << "Ű : " << _height << endl;
	}
};

class Pig : public Stock{
public:
	Pig(string name, float age, float weight, float height)
		:Stock(name, age, weight, height) {}

	void Speak() {
		cout << _name << "�� �ܲ��մϴ�. " << endl;
	}
};

class Cow : public Stock{

public:
	Cow(string name, float age, float weight, float height)
		:Stock(name, age, weight, height) {}

	void Speak() {
		cout << _name << "�� �����մϴ�. " << endl;
	}
};

class Chicken : public Stock{
private :
	bool _fly;

	void Fly() {
		cout << _name << "�� ���ϴ�. " << endl;
	}

public:
	Chicken(string name, float age, float weight, float height, bool fly)
		:Stock(name, age, weight, height), _fly(fly) {}

	void Speak() {
		cout << _name << "�� �������մϴ�. " << endl;
	}

	void Run() {
		if (_fly)
		{
			Fly();
		}
		else
		cout << _name << "�� �ݴϴ�. " << endl;
	}

	void info() {
		Stock::info();
		if (_fly)
		{
			cout << "���� : ���� ��" << endl;
		}
		else
			cout << "���� : �� ���� ��" << endl;
	}
};

class Horse : public Stock {
public :
	Horse(string name, float age, float weight, float geight)
		: Stock(name, age, weight, geight){}

	void Speak() {
		cout << _name << "�� �����������մϴ�. " << endl; \
	}
};

int main(void) {
	//Student* pa = new Student("monster", 10, 3);	// ������ü �Ҵ�
	//pa->info();	// �ּҰ����� Ŭ������ ����� �����Ҷ��� ȭ��ǥ �����ڸ� ����մϴ�.
	//delete pa;	// ������ü ��ȯ
	//Student *parray = new Student[5];	// ������ü �迭�� ������� �⺻ �����ڸ� ��������
	//for (int i = 0; i < 5; i++) {
	//	parray[i].init("monster", i, i);
	//}
	//for (int i = 0; i < 5; i++) {
	//	parray[i].info();
	//}
	//delete[] parray;	// ������ü �迭 �Ҵ� ����

	Cow cow("��", 2.2f, 200.0f, 1.5f);
	Pig pig("����", 2.5f, 150.0f, 1.3f);
	Chicken flyChicken("���´�", 0.5f, 2.5f, 0.3f, true);
	Chicken notFlyChicken("�����´�", 0.5f, 2.5f, 0.3f, false);
	Horse horse("��", 1.3f, 180.0f, 2.0f);

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

	cout << endl;

	horse.Speak();
	horse.Run();

	return 0;
}

void Test_count()
{

	int a = 20;		// ���ú���(��������), �嵿����

	int* pa; // ��������������
	pa = new int;	// �����޸𸮰����� �Ҵ�
	*pa = 1000;	// *�����Ϳ�����, �ּҰ��� �Ҵ� ���� ������ �����Ҷ� ���

	cout << "*pa = " << *pa << endl;

	delete pa;	// �����޸𸮰����� ��ȯó��

	int count = 0;
	cout << "�ʿ��� ������ ������ �Է��ϼ��� : " << endl;
	cin >> count;

	int* parray = new int[count];	// �����迭

	for (int i = 0; i < count; i++)
		parray[i] = i;

	for (int i = 0; i < count; i++)
		cout << "parray[" << i << "] = " << parray[i] << endl;

	delete[] parray;	// �����迭 ��ȯ
}

int SetScore(int value) {
	static int score = 0;	// ���ú���(��������), ��������
	score += value;
	return score;
}

//class Student {
//private :
//	string _name;	// ��� ����
//	int _age;
//	int _grade;
//
//public :
//	Student() {
//
//	}
//	Student(string name, int age, int grade)		// ���ڸ� �޴� ������
//		:_name(name), _age(age), _grade(grade) {}
//
//	void init(string name, int age, int grade) {
//		_name = name;
//		_age = age;
//		_grade = grade;
//	}
//
//	void info() {
//		cout << "�̸� : " << _name << endl;
//		cout << "���� : " << _age << endl;
//		cout << "�г� : " << _grade << endl;
//	}
//};






















// C++������ ������ �Լ����� ����� �� �ֽ��ϴ�.
// ��ſ� �Ű������� ����Ÿ Ÿ���̳� ������ Ʋ���� �մϴ�.
// C++������ �Լ� ���̹��ϴ� ������� ���� �ͱ۸�
// ���� �̸��� �Լ��� ����ϴ� ����� �����ε�(Over loading)


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