#include <stdio.h>
int main(void) {
	int i,num,sum=0;
	printf(" Enter a number upto which to calculate the sum of natural numbers:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	printf("%d",sum);
	return 0;
}
© 2017 GitHub, Inc.
