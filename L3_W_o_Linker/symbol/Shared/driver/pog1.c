#include <stdio.h>
#include <mymath.h>

int main(void)
{
	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
	printf("%d\n",mul(a,b));
	printf("%f\n",div(a,b));
	return 0;

}
