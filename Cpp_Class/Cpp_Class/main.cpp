#include <iostream>

using namespace std;;

// C++������ ������ �Լ����� ����� �� �ֽ��ϴ�.
// ��ſ� �Ű������� ����Ÿ Ÿ���̳� ������ Ʋ���� �մϴ�.
// C++������ �Լ� ���̹��ϴ� ������� ���� �ͱ۸�
// ���� �̸��� �Լ��� ����ϴ� ����� �����ε�(Over loading)

int add(int a, int b) {			// addxx
	return a + b;
}

float add(float a, float b) {	// addyy
	return a + b;
}

float add(float a, int b) {		// addyx
	return a + b;
}

float add(float a, float b, float c) {		// addyyy
	return a + b;
}

int main(void) {

	int a = 20;
	int b = 30;
	float c = 1.2f;
	float d = 3.4f;

	int ret = add(a, b);	// call addxx
	cout << a << " + " << b << " = " << ret << endl;

	float fret = add(c, d);	// call addyy
	cout << c << " + " << d << " = " << fret << endl;

	return 0;
}