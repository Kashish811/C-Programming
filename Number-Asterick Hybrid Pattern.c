#include <stdio.h>
int main()
{
	int i, k, j, row=5, column=10;
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(j<=i){
					printf("%d",j+1);
			} else{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
