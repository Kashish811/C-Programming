#include <stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE];
	int i;
	int temp;
	
	printf("Enter the array Elements:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("Enter element-%d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	temp=arr[0];
	for(i=0; i<SIZE-1; i++)
	{
		arr[i]=arr[i+1];
	}
	arr[SIZE-1]=temp;
	
	printf("Array after shifting elements to left by a position of 1:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
