#include <iostream>

using namespace std;

// Ư��ȭ
// �������� �ùķ��̼��� ����µ�
// ����, ��. ��, ����

// ����� ����
// 1. ������ Ŭ������ ����
// 2. ����Ǵ� �κ��� ����Ŭ������ �����Ͽ� �ݺ��� �����ϰ� ����, ������ ���ϰ� ��
// 3. ����Ǵ� �θ� ������ ������ ���� �������� �⺻ ������ �����մϴ�.
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
		cout << _name << "�� ���մϴ�. " << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�. " << endl;
	}

	void Info() {
		cout << "�̸� : " << _name << endl;
		cout << "���� : " << _age << endl;
		cout << "������ : " << _weight << endl;
		cout << "Ű : " << _height << endl;
	}

};

class Pig : public Animal{
public:
	Pig(string name, float age, float weight, float height)
		:Animal(name, age, weight, height) {}

	void Speak() {
		cout << _name << "�� �ܲ��մϴ�. " << endl;
	}

};

class Cow :public Animal {
	
public:
	Cow(string name, float age, float weight, float height)
		:Animal(name, age, weight, height) {}

	void Speak() {
		cout << _name << "�� �����մϴ�. " << endl;
	}
};

class Chicken :public Animal {
private:
	bool _isFly;

	void Fly() {
		cout << _name << "�� ���ϴ�. " << endl;
	}

public:
	Chicken(string name, float age, float weight, float height, bool isFly)
		:Animal(name, age, weight, height), _isFly(isFly) {}

	void Speak() {
		cout << _name << "�� �������մϴ�. " << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
			else
				cout << _name << "�� �� ���ϴ�. " << endl;
		}

};

class Dolpin :public Animal {
private:
	bool _isSwim;
public:
	Dolpin(string name, float age, float weight, float height, bool isSwim)
		:Animal(name, age, weight, height), _isSwim(isSwim) {}

	void Speak() {
		cout << _name << "�� �����������մϴ�. " << endl;
	}

	void Run() {
			cout << _name << "�� ���Ĩ�ϴ�. " << endl;
	}

};

int main(void) {

	Pig Pig("����", 5.0f, 200.0f, 60.0f);
	Cow Cow("��", 5.0f, 200.0f, 60.0f);
	Chicken flyCh("���´�", 5.0f, 200.0f, 60.0f, true);
	Chicken ontFlyCh("�����´�", 5.0f, 200.0f, 60.0f, false);
	Dolpin dolpin("����", 5.0f, 200.0f, 60.0f, true);

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