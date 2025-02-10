#include <stdio.h>
#include <math.h>
int main()
{
	double n;
	printf("Enter a number: ");
	scanf("%lf",&n);
	double square_root=sqrt(n);
	printf("Number is %0.2lf and its square root is : %0.2lf",n,sqrt(n));
	return 0;
}
