#include <stdio.h>
int main()
{
	int size, i, previousValue, currentValue;
	int veryAscendingFlag=1;
	
	printf("Enter the size:");
	scanf("%d", &size);
	
	if(size<0){
		printf("Enter a positive size.");
	}
	else{
		do{
			printf("Enter a value:");
			scanf("%d", &currentValue);
			
			if(currentValue<= previousValue){
				veryAscendingFlag=0;
			}
			previousValue = currentValue;
			
			size--;
		}while(size>0);
	}
	if(veryAscendingFlag==1){
		printf("Sequence is Very Ascending.\n");
	} else{
		printf("Sequence is not Very Ascending.\n");
	}
	return 0;
	
}
