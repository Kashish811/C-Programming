#include <stdio.h>
#include <stdlib.h>
int main(){
	int num, choice, i, flag_prime;
	char ch; 
	do{
		system("cls");
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("Choose an operation\n");
		printf("1. Prime or Composite Numbers: \n");
		printf("2. Odd or Even Numbers: \n");
		printf("Enter your choice(1-2):");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("You are in Prime/Composite number Case.\n");
				if (num<=1){
		printf("The number %d is neither Prime nor Composite.\n", num);
	}
	else
	{
		for(i=2;i<=num/2;i++)
		{
			if (num % i ==0){
				flag_prime=0;
				break;
			}
		}
		if (flag_prime){
			printf("%d is a Prime Number.\n",num);
		}
		else
		{
			printf("%d is a Composite Number.\n",num);
		}
	}
				break;
				
			case 2:
				printf("You are in Even/Odd number Case.\n");
				if (num%2==0){
					printf("%d is an Even Number.\n",num);
				}
				else
				{
					printf("%d is a Odd Number.\n",num);
				}
				break;
				
			default:
				printf("Invalid Choice\n");
		}
		printf("Do you want to continue? (y/n):");
		scanf(" %c", &ch); 			
		
	}while (ch=='y' || ch=='Y');
	
	printf("Exit the program.");
	return 0;
}

