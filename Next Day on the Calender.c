#include <stdio.h>
int main()
{
    int day, month, year;
    int leapYear = 0; // Default

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    if  ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        leapYear = 1;

    
    switch(month){
    
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    	if (day<31){
    		day+=1;
		}
		else if (day==31){
			day=1;
			month+=1;
		}
		break;
	case 2:
		if(leapYear==1){
			if(day<29){
				day+=1;
			}
			else if(day==29){
				day=1;
				month+=1;
			}
		}
		else{
			if (day<28){
				day+=1;
			}
			else if(day==28){
				day=1;
				month+=1;
			}
		}
		break;
	case 4:
    case 6:
	case 9:
	case 11:
		if(day<30){
			day+=1;
		}
		else if(day==30){
			day=1;
			month+=1;
		}
		break;
	case 12:
		if(day<31){
			day+=1;
		}
		else if(day==31){
			day=1;
			month=1;
			year+=1;
		}
		break;
	default:
		printf("Enter valid integers!");
}
	printf("The next day will be:%d/%d/%d", day, month, year);
	return 0;
}

