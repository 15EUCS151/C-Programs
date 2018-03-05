#include <stdio.h>
int main(void) {
	int d,n,flag = 0;
	printf("\n Enter a number to find prime no:\n");
	scanf("%d",&n);
	for(d=2;d<=n/2;d++){
		if(n%d == 0){
		     flag =1;
		     break;	
		}
	}	
	if(flag==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
