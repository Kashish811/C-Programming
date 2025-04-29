#include <stdio.h>

int MaxDigit(int n)
{
	int ones, tens;
	ones = n%10;
	tens = n/10;
	if(ones>tens){
		return ones;
	}else{
		return tens;
	}		
}
	
int main()
{	
	int num, result;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	if (num >= 10 && num <= 99){
	    result = MaxDigit(num);
	    printf("The maximum digit in the given number %d is %d", num,result);
	}else{
            printf("Enter a TWO-digit number only!");
	}
}
