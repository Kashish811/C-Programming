#include <stdio.h>
int sumOfNumbers(int n)
{
	if(n<1){
		return 0;
	}else{
		return n+sumOfNumbers(n-1);
	}
}

int main()
{
	int num, s;
	printf("Please enter a natural number:");
	scanf("%d",&num);
	
	s=sumOfNumbers(num);
	
	printf("The sum of numbers upto %d is %d.",num, s);
	
	return 0;
}
