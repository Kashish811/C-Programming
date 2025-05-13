#include <stdio.h>
int main()
{
	float temp[7];
	int i;
	
	for(i=0; i<7; i++){
		printf("Enter the temperature on Day-%d: ",i+1);
		scanf("%f", &temp[i]);
	}
	
	float hottest_day =0, coldest_day=0, sum=0;
	for(i=0; i<7; i++){
		if(temp[i]<coldest_day){
			coldest_day=i;
		}
		if(temp[i]>hottest_day){
			hottest_day=i;
		}
		sum+=temp[i];
	}
	
	printf("Hottest Day of the week was Day-%d\n",hottest_day);
	printf("Coldest Day of the week was Day-%d\n",coldest_day);
	printf("Average Temperature: %.2f\n",(sum/7));
	
	return 0;
}
