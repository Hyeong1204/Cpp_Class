#include <iostream>

using namespace std;;

// C++에서는 동일한 함수명을 사용할 수 있습니다.
// 대신에 매개변수의 데이타 타입이나 갯수가 틀려야 합니다.
// C++에서는 함수 네이밍하는 방법으로 네임 맹글링
// 같은 이름의 함수를 사용하는 방법을 오버로딩(Over loading)

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