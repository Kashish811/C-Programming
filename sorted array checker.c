#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	int i;
	int flag_sorted=1;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter element-%d:",i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<SIZE-1; i++)
	{
		if(arr[i]>arr[i+1]){
		flag_sorted=0;	
		}
	}
	
	if(flag_sorted==1){
		printf("Array is Sorted.\n");
	}else{
		printf("Array is NOT Sorted.\n");
	}
	
	return 0;
}
