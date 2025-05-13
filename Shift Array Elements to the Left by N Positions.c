#include <stdio.h>
#define SIZE 5
#define POS 2

int main()
{
	int arr[SIZE];
	int i, j;
	int temp;
	
	printf("Enter the array Elements:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("Enter element-%d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(j=0; j<POS; j++){
	temp=arr[0];
	for(i=0; i<SIZE-1; i++)
	{
		arr[i]=arr[i+1];
	}
	arr[SIZE-1]=temp;
    }  
    
	printf("Array after shifting elements to left by a position of 2:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;

	
}
