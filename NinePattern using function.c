#include <stdio.h>

int ninePattern(int length)
{
	int i, a=9;
	for(i=0; i<length; i++){
		printf("%d",a);
	}	
}
	
int main()
{	
	int n, result;
	printf("Enter the length: ");
	scanf("%d", &n);

    ninePattern(n);
}
