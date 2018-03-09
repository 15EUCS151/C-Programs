#include <stdio.h>
int main()
{
	int n,d,f,i,sum=0;
	printf("\nEnter the series:");
	scanf("%d",&n);
	printf("\nEnter the difference and first term:");
	scanf("%d%d",&d,&f);
	for(i=0;i<n;i++)
	{
		sum=sum+f;
		f=f+d;
	}
printf("sum is:%d",sum);
return 0;
}
