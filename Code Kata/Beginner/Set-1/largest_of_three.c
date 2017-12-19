#include <stdio.h>
int main(void) {
	int a,b,c;
	printf("\n Enter three nos to find the largest of three:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
	            {
	      	printf("%d",a);
	            } 
		else
	            printf("%d",c);
  }
	else
	{
		if(b>c)
		{
		printf("%d",b);
		}
		else
		printf("%d",c);
	}
	return 0;
}
