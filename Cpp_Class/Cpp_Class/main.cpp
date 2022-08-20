#include <iostream>
#include "main.h"

using namespace std;;

class Student {
private :
	string _name;	// ��� ����
	int _age;
	int _grade;

public :
	Student() {

	}
	Student(string name, int age, int grade)		// ���ڸ� �޴� ������
		:_name(name), _age(age), _grade(grade) {}

	void init(string name, int age, int grade) {
		_name = name;
		_age = age;
		_grade = grade;
	}

	void info() {
		cout << "�̸� : " << _name << endl;
		cout << "���� : " << _age << endl;
		cout << "�г� : " << _grade << endl;
	}
};

int global = 100;	// �ܺκ���, ��������

int SetScore(int value) {
	static int score = 0;	// ���ú���(��������), ��������
	score += value;
	return score;
}

// ������ü
// ������ ����
// ���ٹ���, ���ӱⰣ
int main(void) {
	
	Student* pa = new Student("monster", 10, 3);	// ������ü �Ҵ�

	pa->info();	// �ּҰ����� Ŭ������ ����� �����Ҷ��� ȭ��ǥ �����ڸ� ����մϴ�.

	

	delete pa;	// ������ü ��ȯ

	Student *parray = new Student[5];	// ������ü �迭�� ������� �⺻ �����ڸ� ��������

	for (int i = 0; i < 5; i++) {
		parray[i].init("monster", i, i);
	}
	for (int i = 0; i < 5; i++) {
		parray[i].info();
	}

	delete[] parray;	// ������ü �迭 �Ҵ� ����

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
//}