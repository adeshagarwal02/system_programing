#include <stdio.h>
#include <mymath.h>

int main(void)
{
	float a,b;
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("%.2f\n",myadd(a,b));
	printf("%.2f\n",mysub(a,b));
	printf("%.2f\n",mymul(a,b));
	printf("%.2f\n",mydiv(a,b));
	return 0;

}
