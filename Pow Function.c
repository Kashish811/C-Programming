#include <stdio.h>
#include <math.h>
int main()
{
	double n;
	printf("Enter a number: ");
	scanf("%lf",&n);
	double square=pow(n,2);
	printf("Number is %0.2lf and its square is : %0.2lf",n,square);
	return 0;
}
