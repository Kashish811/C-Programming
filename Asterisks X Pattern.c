#include <stdio.h>
int main()
{
	int i, j, row=7, column=7;
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			if(i==j||(i+j)==6){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
