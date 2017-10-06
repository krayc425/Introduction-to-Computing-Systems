#include <stdio.h>
int main(){
	long originSeconds;
	int hours;
	int minutes;
	int seconds;
	printf("Please enter the origin seconds:\n");
	scanf("%ld",&originSeconds);

	hours = originSeconds / 3600;
	minutes = (originSeconds - hours * 3600) / 60;
	seconds = originSeconds - hours * 3600 - minutes * 60;

	printf("It is equal to %d hrs %d mins %d secs.\n",hours,minutes,seconds);
}