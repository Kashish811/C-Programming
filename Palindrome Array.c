#include <stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE];
	int i;
	int flag=1;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Enter element-%d:",i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<SIZE; i++)
	{
		if(arr[i]!=arr[SIZE-i-1]){
			flag=0;
		}
	}
	if(flag==1){
		printf("Array is a Palindrome!!!");
	}else{
		printf("Array is NOT a Palindrome!!!");
	}
	return 0;
}
