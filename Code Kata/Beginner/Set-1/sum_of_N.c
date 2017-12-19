#include <stdio.h>
int main(void) {
	int i,n,sum=0;
	printf(" Enter a number upto which to calculate the sum of N natural numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("%d",sum);
	return 0;
}
