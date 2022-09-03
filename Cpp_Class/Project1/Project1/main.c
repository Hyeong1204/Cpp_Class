#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
	
	int a = 20;
	int b = 30;

	bool ret = a < b;

	printf("ret = %d\n", ret);

	return 0;
}