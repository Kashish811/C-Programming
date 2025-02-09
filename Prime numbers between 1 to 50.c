#include <stdio.h>
int main()
{
	int i,j,count=0;
	printf("Prime Numbers between 1 to 50 are:\n");
	for(i=1;i<=50;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0 && i!=1)
			printf("%d\n",i);
		count=0;
	}
	return 0;
}


