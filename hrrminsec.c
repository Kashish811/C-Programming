#include <stdio.h>
int main()
{
	int sec, min, hr, rem_sec;
	
	printf("Enter seconds:");
	scanf("%d", &sec);
	
	hr=sec/3600;
	min=(sec%3600)/60;
	rem_sec=(sec%3600)%60;
	
	printf("%d seconds = %d hours %d minutes %d seconds.",sec,hr,min,rem_sec);
	
	return  0;
}
