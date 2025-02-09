#include <stdio.h>
int main()
{
	int i,start,end,evenSum=0,oddSum=0;
	
	printf("Enter the start of the range:");
	scanf("%d",&start);
	printf("Enter the end of the range:");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++){
		if(i%2==0){
			evenSum+=i;
		}else{
			oddSum+=i;
		}
	}
	printf("Sum of Even Numbers:%d\n",evenSum);
	printf("Sum of Odd Numbers:%d\n",oddSum);
	
	return 0;
}
