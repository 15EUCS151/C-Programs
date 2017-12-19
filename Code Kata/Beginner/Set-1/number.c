#include <stdio.h>
int main(void) {
	int num;
	printf("\n Enter a number to check whether it is positive,negative or zero:");
	scanf("%d",&num);
	if(num==0)
	  printf("ZERO");
	else if(num>0)
	  printf("POSITIVE");
	else
	  printf("NEGATIVE");
	return 0;
}
