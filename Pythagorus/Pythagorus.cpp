#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, n1, n2;
	printf("Input first cathetus : ");
	scanf_s("%f", &n1);
	printf("Input second cathetus : ");
	scanf_s("%f", &n2);
	a = n1 * n1;
	b = n2 * n2;
	c = sqrt(a + b);
	printf("Hypotenuse = %f", c);

}