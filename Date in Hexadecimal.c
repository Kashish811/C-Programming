#include <stdio.h>


int main()
{
	int day, month, year;
	printf("Enter day: ");
	scanf("%d", &day);
	printf("Enter month: ");
	scanf("%d", &month);
	printf("Enter day: ");
	scanf("%d", &year);

	printf("In Hexadecimal Format:\n");
	printf("Day: 0x%X \n", day);
	printf("Month: 0x%X \n", month);
	printf("Year: 0x%X \n", year);
	return 0;
}
