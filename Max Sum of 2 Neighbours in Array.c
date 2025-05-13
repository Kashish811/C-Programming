#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter element-%d:",i+1);
		scanf("%d", &arr[i]);
	}
	
	int maxSum=arr[0]+arr[1];
	
	for(i=1; i<SIZE-1; i++)
	{
		if(arr[i]+arr[i+1]>maxSum){
			maxSum=arr[i]+arr[i+1];
		}
	}
	
	printf("Maximum Sum of two neighbours=%d", maxSum);
	
	return 0;
}
