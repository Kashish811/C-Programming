#include <stdio.h>

int main() {
    int i, j, k, blankspaces, n, num=1 ;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    blankspaces=n-1;

    for (i = 1; i <= n; i++) 
	{
    	for(k=blankspaces; k>=1; k--)
		{
    		printf(" ");
		}
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", num);
            num++;
        }
        printf("\n");
        blankspaces--;
    }
    return 0;
}
    
