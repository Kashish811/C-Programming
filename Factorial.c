#include <stdio.h>
int factorial(int n)
{
	if(n<1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main()
{
	int num, s;
	printf("Please enter a number:");
	scanf("%d",&num);
	
	s=factorial(num);
	
	printf("The factorial of %d is %d!=%d.",num, num, s);
	
	return 0;
}
