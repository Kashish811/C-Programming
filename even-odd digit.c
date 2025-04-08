#include <stdio.h>
int main()
{
	int n, currentDigit;
	int evenSum=0, oddSum=0;
		
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		currentDigit=n%10;
		if(currentDigit%2==0){
			evenSum+=currentDigit;
		} else{
			oddSum+=currentDigit;
		}
		n=n/10;
	}
	printf("Even Digit's Sum - Odd Digit's Sum= %d",evenSum-oddSum);
	return 0;
}
