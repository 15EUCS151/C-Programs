#include <stdio.h>
int main(void) {
	int i,n,num;
	printf("\n Enter a number to find the first five multiples:\n");
	scanf("%d",&n);
	for(i=1;i<=5;i++){
		num = n * i;
		printf(" %d",num);
	}
	return 0;
}
