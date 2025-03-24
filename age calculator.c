#include <stdio.h>
int main()
{
	int age, birth, current;
	
	printf("Enter the Current Year:");
	scanf("%d", &current);
	
	printf("Enter your Birth Year:");
	scanf("%d", &birth);
	
	age = current-birth;
	printf("Your Age:%d",age);
	
	return 0;
}
