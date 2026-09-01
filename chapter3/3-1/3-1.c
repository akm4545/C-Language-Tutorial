#include <stdio.h>

int main(void) {
	int a; 
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("면수 a의 값 : %d\n", a);
	printf("면수 b의 값 : %d\n", b);
	printf("면수 c의 값 : %d\n", c);
	printf("면수 da의 값 : %d\n", da);
	printf("면수 ch의 값 : %d\n", ch);

	return 0;
}