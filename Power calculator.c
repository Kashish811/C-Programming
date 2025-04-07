#include <stdio.h>
int main()
{
	int n,p,i;
	int res=1;
	printf("Enter the base number:");
	scanf("%d", &n);
	printf("Enter the power:");
	scanf("%d", &p);
	
	i=0;
	while(i<p){
		res=res*n;
		i++;
	}
	printf("%d^%d=%d",n,p,res);
	return 0;
}
