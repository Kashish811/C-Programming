#include <stdio.h>

int main()
{
    int i, n, sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Natural numbers from 1 to %d: ",n);
    for (i = 1; i <= n; i++) 
    { 
      printf("%d ",i);
      sum+=i;
    }
    printf("\nSum of all these numbers : %d", sum);
    return 0;
}
