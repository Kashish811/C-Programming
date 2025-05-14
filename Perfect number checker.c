#include <stdio.h>

int perfectNum(int n)
{
	int i, sum=0;
	for(i=1; i<=(n/2); i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if (n==sum){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (perfectNum(num)) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is Not a Perfect Number.\n", num);
    }
	
	return 0;
}
