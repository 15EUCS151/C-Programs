#include<stdio.h>
int main(void) {
	int n,i;
	char str[10];
	scanf("%s", str);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n%s",str);
	}
	return 0;
}
