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
	int num, result;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	result=factorial(num);
	printf("Factorial of %d is %d!=%d",num,num,result);
}
