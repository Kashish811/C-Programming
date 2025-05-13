#include <stdio.h>
#define SIZE 5

int main()
{
	int myArr[SIZE];
	int i;
	int hasGoodNeighbours=0;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter value %d ", i+1);
		scanf("%d", &myArr[i]);
	}
	
	for(i=1; i<SIZE-1; 	i++)
	{
		if(myArr[i]==myArr[i-1]*myArr[i+1])
		{
			hasGoodNeighbours=1;
			break;
		}
	}
	if(hasGoodNeighbours==0)
	{
		printf("Array does not have good neighbours!!\n");
	} else{
		printf("Array has good neighbours!!\n");
	}	
	
	return 0;
}
