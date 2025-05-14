#include <stdio.h>

int divisorSum(int num)
{
	int i, sum=0;
	for(i=1; i<num+1; i++)
	{
		if(num%i==0){
			sum+=i;
		}
	}
	return sum;
}

int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
	int res=divisorSum(num);
	
	printf("The Sum of all the divisors of %d is %d", num, res);
	
	return 0;
}
