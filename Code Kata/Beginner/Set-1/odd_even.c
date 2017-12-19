#include <stdio.h>
int main(void) {
	int num;
	printf("\n Enter a number to check whether it is even or odd:");
	scanf("%d",&num);
	if(num%2==0)
	  printf("EVEN");
	else
	  printf("ODD");
	return 0;
}
