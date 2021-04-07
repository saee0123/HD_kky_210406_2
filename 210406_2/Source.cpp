#include<stdio.h>

void main() {
	
	int _inumber10 = 10;
	float _PI = 3.141592;
	float _circle = _inumber10 / 2;

	printf("원의 둘레 = %f \n", _PI * _circle);
	printf("원의 넓이 = %f \n", _PI * (_circle*_circle));

	fgetc(stdin);
}
