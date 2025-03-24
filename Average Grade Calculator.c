#include <stdio.h>
int main()
{
	int grade1, grade2, grade3;
	double avg;
	
	printf("Average Grade Calculator!\n");
	printf("Enter Grade 1:");
	scanf("%d", &grade1);
	printf("Enter Grade 2:");
	scanf("%d", &grade2);
	printf("Enter Grade 3:");
	scanf("%d", &grade3);
	
	avg = ((double)grade1+grade2+grade3)/3;
	
	printf("Average Grade: %.2lf", avg);
	return 0;
	
}
