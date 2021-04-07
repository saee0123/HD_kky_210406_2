/*
원의 지름이 10cm 일때 원의 넓이와 둘레 길이를 출력하는 프로그램을 만들으세요
PI= 3.141592이고,  
원의 넓이 = PI * 반지름 * 반지름  , 원의 둘레 = PI * 2 * 반지름
*/

#include<stdio.h>

void main() {
	
	int _inumber10 = 10;
	float _PI = 3.141592;
	float _circle = _inumber10 / 2;

	printf("원의 넓이 = %f \n", _PI * _inumber10);
	printf("원의 둘레 = %f \n", _PI * (_circle*_circle));

	fgetc(stdin);
}
