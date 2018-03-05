#include <stdio.h>
int main(void) {
	int i,d,n,m;
	printf("\n Enter a range of numbers to print the prime nos:\n");
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
		for(d=2;d<i;d++){
			if(i%d == 0)
			break;
		}
		if(d==i){
			printf(" %d",i);
		}
	}
	return 0;
}
