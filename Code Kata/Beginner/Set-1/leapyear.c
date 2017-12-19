#include <stdio.h>
int main(void) {
	int yr;
	printf("\n Enter an year to find whether it is a leap year or not:");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("LEAP YEAR");
	}
	else
	{
		printf("NOT A LEAP YEAR");
	}
	return 0;
}
