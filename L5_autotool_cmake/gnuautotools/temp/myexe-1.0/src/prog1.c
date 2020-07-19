#include <stdio.h>
#include "mymath.h"

int main(void)
{
	double a,b;
	printf("Enter first no: ");
	scanf("%lf",&a);
	printf("Enter Second no: ");
	scanf("%lf",&b);
	printf("Add = %lf\n",myadd(a,b));
	printf("Sub = %lf\n",mysub(a,b));
	printf("Mul = %lf\n",mymul(a,b));
	printf("Div = %lf\n",mydiv(a,b));

	return 0;
}
