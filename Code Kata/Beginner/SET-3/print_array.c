#include <stdio.h>
int main(void) {
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("\n %d %d",arr[i],i);
	}
	return 0;
}
