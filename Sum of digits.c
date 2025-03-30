#include <stdio.h>
int main()
{
	int num, units, tens, hundreds;
	
	printf("Enter a 3-digit number:");
	scanf("%d", &num);
	
	hundreds = num/100;
	tens = (num%100)/10;
	units = (num%100)%10;
	
	printf("The sum of digits of %d is %d", num, units+tens+hundreds);
	return 0;
}
