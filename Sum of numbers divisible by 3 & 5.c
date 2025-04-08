#include <stdio.h>
int main()
{
	int n, i, sum=0;
	
	printf("Enter a number:");
	scanf("%d", &n);
	
	printf("Numbers from 1 to %d divisible by 3 & 5:", n);
	for(i=1; i<=n; i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("\nSum of these numbers: %d",sum);
	
	return 0;
	
}
