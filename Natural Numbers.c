#include <stdio.h>

int main()
{
    int i, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Natural numbers from 1 to n: ");
    for (i = 1; i <= n; i++) 
    { 
      printf("%d ",i);
    }
    return 0;
}
