#include <stdio.h>
int main(void) {
	int i,n,fact=1;
	printf("\n Enter a number to find the factorial:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	printf("%d",fact);
	return 0;
}
