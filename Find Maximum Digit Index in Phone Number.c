#include <stdio.h>

int main()
{
	int phnum[10];
	int i;
	for (i=0; i<10; i++){
		printf("Enter digit-%d:",i+1);
		scanf("%d", &phnum[i]);
	}
	
	int maxIndex=0;
	
	for(i=0; i<10; i++){
		if(phnum[i]>phnum[maxIndex]);
		maxIndex=i;
	}
	
	printf("The Index of the maximum Digit of your phone number is:%d", maxIndex);
	
	return 0;
}
