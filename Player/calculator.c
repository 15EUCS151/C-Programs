#include<stdio.h>
int main(void)
{
 	      int a,b,c;
        printf("Enter any two integers:");
	      scanf("%d %d",&a,&b);
        c = a + b;
        printf("%d",c);
        c = a - b;
        printf("%d",c);
        c = a * b;
        printf("%d",c);
        c = a / b;
        printf("%d",c);
        c = a % b;
        printf("%d",c);
	      return 0;
}
