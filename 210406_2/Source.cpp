#include<stdio.h>

void main() {
	
	int _inumber5 = 5;
	float _PI = 3.141592;
	float circle1 = _PI * _inumber5;
	float circle2 = _PI * _inumber5 * _inumber5;

	/*
	float PI = 3.141592;
    int diameter = 10;
    float radius = diameter /2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;
	*/

	printf("원의 넓이 = %f \n", circle1);
	printf("원의 둘레 = %f \n", circle2);

	fgetc(stdin);
}