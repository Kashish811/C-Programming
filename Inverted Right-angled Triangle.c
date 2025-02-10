#include <stdio.h>
int main() 
{
    int rows, i, j;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);
     
     for (i=rows;i>=1;i--) {  
        for (j=1;j<=i;j++) {  
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

